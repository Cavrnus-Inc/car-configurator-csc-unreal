#include "RelayModel/PropertyId.h"

FPropertyId::FPropertyId()
{
	PropValueId = "";
	ContainerName = "";
}
FPropertyId::FPropertyId(FString fullName)
{
	if (fullName.StartsWith("/"))
		fullName.RemoveFromStart("/");
	if (fullName.EndsWith("/"))
		fullName.RemoveFromEnd("/");

	PropValueId = "";
	for (int i = fullName.Len() - 1; i >= 0; i--) 
	{
		if (fullName[i] == '/') 
		{
			PropValueId = PropValueId.Reverse();
			break;
		}
		PropValueId.AppendChar(fullName[i]);
	}

	ContainerName = fullName;
	ContainerName.RemoveFromEnd("/" + PropValueId);
}

FPropertyId::FPropertyId(FString containerName, FString propId)
{
	PropValueId = propId;
	ContainerName = containerName;

	//Clean up & standardize the ContainerName
	if (ContainerName.StartsWith("/"))
		ContainerName.RemoveFromStart("/");
	if (ContainerName.EndsWith("/"))
		ContainerName.RemoveFromEnd("/");
}

FPropertyId::~FPropertyId()
{

}

/*FString FPropertyId::GetCombinedName()
{
	return ContainerName + "/" + PropValueId;
}*/

const FString FPropertyId::GetCombinedName(FPropertyId pId)
{
	return pId.ContainerName + "/" + pId.PropValueId;
}

bool FPropertyId::operator==(const FPropertyId& other) const
{
	return ContainerName.Equals(other.ContainerName, ESearchCase::CaseSensitive) && PropValueId.Equals(other.PropValueId, ESearchCase::CaseSensitive);
}

