#pragma once
#include <QtIncludes.h>
#include <Widgets/Pane.h>

class FileEditPane : public Pane
{
	Q_OBJECT

public:
	FileEditPane();
	virtual ~FileEditPane() {}

	void EditFile(const QString& filePath);

protected:
	void OpenExternally() const;
	void LoadFileTask();
	void OnFileLoaded();
	void SaveFile();
	void SaveFileTask();

signals:
	void fileLoaded();
	void fileSaved();

protected:
	QString    m_filePath;
	QLabel*    m_pFileNameLabel = nullptr;
	QTextEdit* m_pTextEdit      = nullptr;
	QString    m_inOutString;
	std::mutex m_asyncFileMutex;
};
