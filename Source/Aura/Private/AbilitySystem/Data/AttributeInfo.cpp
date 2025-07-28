// Copyright YASH


#include "AbilitySystem/Data/AttributeInfo.h"

FAuraAttributesInfo UAttributeInfo::FindAttributeInfoTag(const FGameplayTag& AttributeTag, bool blogNotFound) const
{
	for (const FAuraAttributesInfo& Info : AttributeInformation)
	{
		if (Info.AttributeTag == AttributeTag)
		{
			return Info;
		}
	}

	if (blogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("can't find Info for AttributeTag [%s] on AttributeInfo [%s]."), *AttributeTag.ToString(), *GetNameSafe(this));
	}

	return FAuraAttributesInfo();
}
