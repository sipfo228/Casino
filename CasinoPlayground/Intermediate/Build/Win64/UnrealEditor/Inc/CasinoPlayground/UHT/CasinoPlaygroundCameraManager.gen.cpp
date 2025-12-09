// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CasinoPlaygroundCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCasinoPlaygroundCameraManager() {}

// ********** Begin Cross Module References ********************************************************
CASINOPLAYGROUND_API UClass* Z_Construct_UClass_ACasinoPlaygroundCameraManager();
CASINOPLAYGROUND_API UClass* Z_Construct_UClass_ACasinoPlaygroundCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UPackage* Z_Construct_UPackage__Script_CasinoPlayground();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACasinoPlaygroundCameraManager *******************************************
void ACasinoPlaygroundCameraManager::StaticRegisterNativesACasinoPlaygroundCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACasinoPlaygroundCameraManager;
UClass* ACasinoPlaygroundCameraManager::GetPrivateStaticClass()
{
	using TClass = ACasinoPlaygroundCameraManager;
	if (!Z_Registration_Info_UClass_ACasinoPlaygroundCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CasinoPlaygroundCameraManager"),
			Z_Registration_Info_UClass_ACasinoPlaygroundCameraManager.InnerSingleton,
			StaticRegisterNativesACasinoPlaygroundCameraManager,
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
	return Z_Registration_Info_UClass_ACasinoPlaygroundCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ACasinoPlaygroundCameraManager_NoRegister()
{
	return ACasinoPlaygroundCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACasinoPlaygroundCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "CasinoPlaygroundCameraManager.h" },
		{ "ModuleRelativePath", "CasinoPlaygroundCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACasinoPlaygroundCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACasinoPlaygroundCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_CasinoPlayground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACasinoPlaygroundCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACasinoPlaygroundCameraManager_Statics::ClassParams = {
	&ACasinoPlaygroundCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACasinoPlaygroundCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ACasinoPlaygroundCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACasinoPlaygroundCameraManager()
{
	if (!Z_Registration_Info_UClass_ACasinoPlaygroundCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACasinoPlaygroundCameraManager.OuterSingleton, Z_Construct_UClass_ACasinoPlaygroundCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACasinoPlaygroundCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACasinoPlaygroundCameraManager);
ACasinoPlaygroundCameraManager::~ACasinoPlaygroundCameraManager() {}
// ********** End Class ACasinoPlaygroundCameraManager *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCameraManager_h__Script_CasinoPlayground_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACasinoPlaygroundCameraManager, ACasinoPlaygroundCameraManager::StaticClass, TEXT("ACasinoPlaygroundCameraManager"), &Z_Registration_Info_UClass_ACasinoPlaygroundCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACasinoPlaygroundCameraManager), 1252687118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCameraManager_h__Script_CasinoPlayground_2406277598(TEXT("/Script/CasinoPlayground"),
	Z_CompiledInDeferFile_FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCameraManager_h__Script_CasinoPlayground_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCameraManager_h__Script_CasinoPlayground_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
