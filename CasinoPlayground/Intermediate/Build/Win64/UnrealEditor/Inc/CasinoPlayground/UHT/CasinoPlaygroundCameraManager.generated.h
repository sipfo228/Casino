// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CasinoPlaygroundCameraManager.h"

#ifdef CASINOPLAYGROUND_CasinoPlaygroundCameraManager_generated_h
#error "CasinoPlaygroundCameraManager.generated.h already included, missing '#pragma once' in CasinoPlaygroundCameraManager.h"
#endif
#define CASINOPLAYGROUND_CasinoPlaygroundCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACasinoPlaygroundCameraManager *******************************************
CASINOPLAYGROUND_API UClass* Z_Construct_UClass_ACasinoPlaygroundCameraManager_NoRegister();

#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACasinoPlaygroundCameraManager(); \
	friend struct Z_Construct_UClass_ACasinoPlaygroundCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CASINOPLAYGROUND_API UClass* Z_Construct_UClass_ACasinoPlaygroundCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ACasinoPlaygroundCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CasinoPlayground"), Z_Construct_UClass_ACasinoPlaygroundCameraManager_NoRegister) \
	DECLARE_SERIALIZER(ACasinoPlaygroundCameraManager)


#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACasinoPlaygroundCameraManager(ACasinoPlaygroundCameraManager&&) = delete; \
	ACasinoPlaygroundCameraManager(const ACasinoPlaygroundCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACasinoPlaygroundCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACasinoPlaygroundCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACasinoPlaygroundCameraManager) \
	NO_API virtual ~ACasinoPlaygroundCameraManager();


#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCameraManager_h_13_PROLOG
#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACasinoPlaygroundCameraManager;

// ********** End Class ACasinoPlaygroundCameraManager *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
