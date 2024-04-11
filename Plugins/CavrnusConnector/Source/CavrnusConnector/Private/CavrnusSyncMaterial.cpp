#include "CavrnusSyncMaterial.h"
#include "CavrnusValueSyncVector.h"
#include "CavrnusValueSyncFloat.h"
#include "CavrnusValueSyncString.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Materials/MaterialInstanceDynamic.h>
#include <Materials/Material.h>
#include <MaterialTypes.h>

//===========================================================
UCavrnusSyncMaterial::UCavrnusSyncMaterial()
{
	if (MaterialSyncMap.IsEmpty())
	{
		MaterialSyncMap.Add((int8)EMaterialParameterType::Scalar, UCavrnusValueSyncFloat::StaticClass());
		MaterialSyncMap.Add((int8)EMaterialParameterType::Vector, UCavrnusValueSyncVector::StaticClass());
		MaterialSyncMap.Add((int8)EMaterialParameterType::DoubleVector, UCavrnusValueSyncVector::StaticClass());
		//MaterialSyncMap.Add(EMaterialParameterType::Font, /* Something */);
		//MaterialSyncMap.Add(EMaterialParameterType::None, /* Something */);
		//MaterialSyncMap.Add(EMaterialParameterType::Num, /* Something */);
		//MaterialSyncMap.Add(EMaterialParameterType::NumRuntime, /* Something */);
		//MaterialSyncMap.Add(EMaterialParameterType::RuntimeVirtualTexture, /* Something */);
		//MaterialSyncMap.Add(EMaterialParameterType::StaticComponentMask, /* Something */);
		//MaterialSyncMap.Add(EMaterialParameterType::StaticSwitch, /* Something */);
		MaterialSyncMap.Add((int8)EMaterialParameterType::Texture, UCavrnusValueSyncString::StaticClass());
	}
}


//===========================================================
UCavrnusSyncMaterial::~UCavrnusSyncMaterial()
{
}

//===========================================================

void UCavrnusSyncMaterial::BeginPlay()
{
	Super::BeginPlay();
}

void UCavrnusSyncMaterial::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

UMaterial* UCavrnusSyncMaterial::GetMaterial_Implementation() const
{
	return DefaultMaterial;
}

UMaterialInstanceDynamic* UCavrnusSyncMaterial::GetMaterialInstance_Implementation() const {
	return UMaterialInstanceDynamic::Create(GetMaterial(), nullptr);
}

void UCavrnusSyncMaterial::SetMaterialInstance_Implementation(UMaterialInstanceDynamic* NewInstance)
{
	MaterialInstance = NewInstance;
	CreatePropertySyncComponents();
}

void UCavrnusSyncMaterial::CreatePropertySyncComponents()
{
	for (auto PropertyComponent : SyncedPropertyComponents)
	{
		PropertyComponent->DetachFromComponent(FDetachmentTransformRules::KeepRelativeTransform);
		PropertyComponent->UnregisterComponent();
	}

	SyncedPropertyComponents.Empty();
	if (!MaterialInstance)
		return;

	// get the material properties
	for (auto& MaterialParamInfo : MaterialSyncMap)
	{
		EMaterialParameterType ParamType = (EMaterialParameterType)MaterialParamInfo.Key;
		TMap<FMaterialParameterInfo, FMaterialParameterMetadata> MaterialParams;
		MaterialInstance->GetAllParametersOfType(ParamType, MaterialParams);

		// Create components for the material
		for (auto& MaterialParam : MaterialParams)
		{
			UCavrnusValueSyncBase* NewComponent = NewObject<UCavrnusValueSyncBase>(this, MaterialParamInfo.Value);
			check(NewComponent)

			NewComponent->PropertyName = MaterialParam.Key.Name.ToString();
			NewComponent->SendChanges = SendChanges;
			NewComponent->RegisterComponent();
			NewComponent->AttachToComponent(this, FAttachmentTransformRules::KeepRelativeTransform);

			SyncedPropertyComponents.Add(NewComponent);
		}
	}
}

#if WITH_EDITOR
void UCavrnusSyncMaterial::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.Property != nullptr)
	{
		const FName PropertyName(PropertyChangedEvent.Property->GetFName());
		if (PropertyName == GET_MEMBER_NAME_CHECKED(UCavrnusSyncMaterial, DefaultMaterial))
		{
			MaterialInstance = GetMaterialInstance();
			CreatePropertySyncComponents();
		}
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif