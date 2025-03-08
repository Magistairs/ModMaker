#pragma once
#include <QtIncludes.h>

class ModContainer;
class ModdableObjectType;

class ModObject
{
public:
	ModObject(ModContainer* pContainer);

	const QString& GetFilePath() { return m_filePath; }
	void           SetFilePath(const QString& filePath);
	void           SetType(const ModdableObjectType* pType);

protected:
	QString                   m_filePath;
	const ModdableObjectType* m_pType = nullptr;

public:
	ModContainer* m_pContainer = nullptr;
	QString       def;
};
