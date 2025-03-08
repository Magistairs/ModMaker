#include "FilesHandling/FileEditPane.h"

#include <PDXModdingAssistant.h>
#include <Widgets/SmallButton.h>

FileEditPane::FileEditPane()
  : Pane("File Editor", PDXModdingAssistant::g_pMainWnd)
{
	QVBoxLayout* pLayout = new QVBoxLayout(centralWidget());

	// Header
	QHBoxLayout* pHeaderLayout = new QHBoxLayout();
	pLayout->addLayout(pHeaderLayout);

	m_pFileNameLabel = new QLabel(this);
	pLayout->addWidget(m_pFileNameLabel);
	pHeaderLayout->addStretch(1);

	SmallButton* pOpenExternalButton = new SmallButton("Open In Default Editor", pHeaderLayout);
	connect(pOpenExternalButton, &SmallButton::clicked, this, &FileEditPane::OpenExternally);

	SmallButton* pSaveButton = new SmallButton("Save", pHeaderLayout);
	connect(pSaveButton, &SmallButton::clicked, this, &FileEditPane::SaveFile);

	// Text Edit
	m_pTextEdit = new QTextEdit;
	pLayout->addWidget(m_pTextEdit);
	m_pTextEdit->setDocument(new QTextDocument(m_pTextEdit));

	connect(this, &FileEditPane::fileLoaded, this, &FileEditPane::OnFileLoaded);
	connect(PDXModdingAssistant::g_pMainWnd, &PDXModdingAssistant::editFile, this, &FileEditPane::EditFile);
	hide();
}

void FileEditPane::EditFile(const QString& filePath)
{
	show();
	m_filePath = filePath;
	m_pFileNameLabel->setText(m_filePath);
	Log(QString("Opening file %1").arg(m_filePath), OutputLog::Info);
	PDXModdingAssistant::g_pMainWnd->Task(std::bind(&FileEditPane::LoadFileTask, this));
}

void FileEditPane::OpenExternally() const
{
	QDesktopServices::openUrl(QUrl::fromLocalFile(m_filePath));
}

void FileEditPane::LoadFileTask()
{
	QFile file(m_filePath);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		Log(file.fileName() + " : " + file.errorString(), OutputLog::Error);
	}
	else
	{
		QTextStream                  in(&file);
		std::unique_lock<std::mutex> lock(m_asyncFileMutex);
		m_inOutString = in.readAll();
		Q_EMIT fileLoaded();
	}
}

void FileEditPane::OnFileLoaded()
{
	std::unique_lock<std::mutex> lock(m_asyncFileMutex);
	m_pTextEdit->document()->setPlainText(m_inOutString);
	m_inOutString.clear();
}

void FileEditPane::SaveFile()
{
	Log(QString("Saving file %1").arg(m_filePath), OutputLog::Info);
	std::unique_lock<std::mutex> lock(m_asyncFileMutex);
	m_inOutString = m_pTextEdit->document()->toPlainText();

	PDXModdingAssistant::g_pMainWnd->Task(std::bind(&FileEditPane::SaveFileTask, this));
}

void FileEditPane::SaveFileTask()
{
	QFile file(m_filePath);
	if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
	{
		Log(file.fileName() + " : " + file.errorString(), OutputLog::Error);
	}
	else
	{
		std::unique_lock<std::mutex> lock(m_asyncFileMutex);
		QTextStream                  out(&file);
		out << m_inOutString;
		m_inOutString.clear();
		Q_EMIT fileSaved();
	}
}