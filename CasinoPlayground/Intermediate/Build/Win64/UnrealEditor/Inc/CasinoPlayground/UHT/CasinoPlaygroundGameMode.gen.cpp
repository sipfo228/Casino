// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CasinoPlaygroundGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCasinoPlaygroundGameMode() {}

// ********** Begin Cross Module References ********************************************************
CASINOPLAYGROUND_API UClass* Z_Construct_UClass_ACasinoPlaygroundGameMode();
CASINOPLAYGROUND_API UClass* Z_Construct_UClass_ACasinoPlaygroundGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CasinoPlayground();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACasinoPlaygroundGameMode ************************************************
void ACasinoPlaygroundGameMode::StaticRegisterNativesACasinoPlaygroundGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACasinoPlaygroundGameMode;
UClass* ACasinoPlaygroundGameMode::GetPrivateStaticClass()
{
	using TClass = ACasinoPlaygroundGameMode;
	if (!Z_Registration_Info_UClass_ACasinoPlaygroundGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CasinoPlaygroundGameMode"),
			Z_Registration_Info_UClass_ACasinoPlaygroundGameMode.InnerSingleton,
			StaticRegisterNativesACasinoPlaygroundGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACasinoPlaygroundGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACasinoPlaygroundGameMode_NoRegister()
{
	return ACasinoPlaygroundGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACasinoPlaygroundGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CasinoPlaygroundGameMode.h" },
		{ "ModuleRelativePath", "CasinoPlaygroundGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACasinoPlaygroundGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACasinoPlaygroundGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CasinoPlayground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACasinoPlaygroundGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACasinoPlaygroundGameMode_Statics::ClassParams = {
	&ACasinoPlaygroundGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACasinoPlaygroundGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACasinoPlaygroundGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACasinoPlaygroundGameMode()
{
	if (!Z_Registration_Info_UClass_ACasinoPlaygroundGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACasinoPlaygroundGameMode.OuterSingleton, Z_Construct_UClass_ACasinoPlaygroundGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACasinoPlaygroundGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACasinoPlaygroundGameMode);
ACasinoPlaygroundGameMode::~ACasinoPlaygroundGameMode() {}
// ********** End Class ACasinoPlaygroundGameMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundGameMode_h__Script_CasinoPlayground_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACasinoPlaygroundGameMode, ACasinoPlaygroundGameMode::StaticClass, TEXT("ACasinoPlaygroundGameMode"), &Z_Registration_Info_UClass_ACasinoPlaygroundGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACasinoPlaygroundGameMode), 3843240151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundGameMode_h__Script_CasinoPlayground_817601750(TEXT("/Script/CasinoPlayground"),
	Z_CompiledInDeferFile_FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundGameMode_h__Script_CasinoPlayground_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundGameMode_h__Script_CasinoPlayground_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
