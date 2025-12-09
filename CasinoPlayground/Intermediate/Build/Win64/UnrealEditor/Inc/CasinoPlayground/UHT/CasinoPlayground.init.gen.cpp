// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCasinoPlayground_init() {}
	CASINOPLAYGROUND_API UFunction* Z_Construct_UDelegateFunction_CasinoPlayground_BulletCountUpdatedDelegate__DelegateSignature();
	CASINOPLAYGROUND_API UFunction* Z_Construct_UDelegateFunction_CasinoPlayground_DamagedDelegate__DelegateSignature();
	CASINOPLAYGROUND_API UFunction* Z_Construct_UDelegateFunction_CasinoPlayground_PawnDeathDelegate__DelegateSignature();
	CASINOPLAYGROUND_API UFunction* Z_Construct_UDelegateFunction_CasinoPlayground_SprintStateChangedDelegate__DelegateSignature();
	CASINOPLAYGROUND_API UFunction* Z_Construct_UDelegateFunction_CasinoPlayground_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CasinoPlayground;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CasinoPlayground()
	{
		if (!Z_Registration_Info_UPackage__Script_CasinoPlayground.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CasinoPlayground_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CasinoPlayground_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CasinoPlayground_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CasinoPlayground_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CasinoPlayground_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CasinoPlayground",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD24E53B1,
				0x10320951,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CasinoPlayground.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CasinoPlayground.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CasinoPlayground(Z_Construct_UPackage__Script_CasinoPlayground, TEXT("/Script/CasinoPlayground"), Z_Registration_Info_UPackage__Script_CasinoPlayground, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD24E53B1, 0x10320951));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
