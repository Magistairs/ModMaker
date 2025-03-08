#include "ModsContent/ModObject.h"

#include <ModsContent/ModContainer.h>
#include <ModsContent/ModdableObjectType.h>

ModObject::ModObject(ModContainer* pContainer)
  : m_pContainer(pContainer)
{
}

void ModObject::SetFilePath(const QString& filePath)
{
	m_filePath = filePath.right(filePath.size() - m_pContainer->GetPath().size());
}

void ModObject::SetType(const ModdableObjectType* pType)
{
	m_pType = pType;
}
