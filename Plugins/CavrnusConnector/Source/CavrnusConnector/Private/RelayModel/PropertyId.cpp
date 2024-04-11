#include "PropertyId.h"

namespace Cavrnus
{
	PropertyId::PropertyId()
	{
		PropValueId = "";
		ContainerName = "";
	}
	PropertyId::PropertyId(FString fullName)
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

	PropertyId::PropertyId(FString containerName, FString propId)
	{
		PropValueId = propId;
		ContainerName = containerName;

		//Clean up & standardize the ContainerName
		if (ContainerName.StartsWith("/"))
			ContainerName.RemoveFromStart("/");
		if (ContainerName.EndsWith("/"))
			ContainerName.RemoveFromEnd("/");
	}

	PropertyId::~PropertyId()
	{

	}

	/*FString PropertyId::GetCombinedName()
	{
		return ContainerName + "/" + PropValueId;
	}*/

	const FString PropertyId::GetCombinedName(PropertyId pId)
	{
		return pId.ContainerName + "/" + pId.PropValueId;
	}

	bool Cavrnus::PropertyId::operator==(const PropertyId& other) const
	{
		return ContainerName.Equals(other.ContainerName, ESearchCase::CaseSensitive) && PropValueId.Equals(other.PropValueId, ESearchCase::CaseSensitive);
	}
}

