#pragma once
#include <QtIncludes.h>

class ModContainer;

class ModdableObjectType
{
public:
	ModdableObjectType(const char* name, const char* relativePath, const char* fileSuffix);
	virtual ~ModdableObjectType() {}

	void           ParseFileTask(ModContainer* pMod, const QString& filePath) const;
	const QString& GetName() const { return m_name; }
	const QString& GetRelativePath() const { return m_relativePath; }
	const QString& GetFileSuffix() const { return m_fileSuffix; }

protected:
	virtual void ParseFile(ModContainer* pMod, QFile& file) const = 0;

protected:
	QString m_name;
	QString m_relativePath;
	QString m_fileSuffix;
};
