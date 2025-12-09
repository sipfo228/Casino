// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CasinoPlaygroundPlayerController.h"

#ifdef CASINOPLAYGROUND_CasinoPlaygroundPlayerController_generated_h
#error "CasinoPlaygroundPlayerController.generated.h already included, missing '#pragma once' in CasinoPlaygroundPlayerController.h"
#endif
#define CASINOPLAYGROUND_CasinoPlaygroundPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACasinoPlaygroundPlayerController ****************************************
CASINOPLAYGROUND_API UClass* Z_Construct_UClass_ACasinoPlaygroundPlayerController_NoRegister();

#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACasinoPlaygroundPlayerController(); \
	friend struct Z_Construct_UClass_ACasinoPlaygroundPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CASINOPLAYGROUND_API UClass* Z_Construct_UClass_ACasinoPlaygroundPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACasinoPlaygroundPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CasinoPlayground"), Z_Construct_UClass_ACasinoPlaygroundPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACasinoPlaygroundPlayerController)


#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACasinoPlaygroundPlayerController(ACasinoPlaygroundPlayerController&&) = delete; \
	ACasinoPlaygroundPlayerController(const ACasinoPlaygroundPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACasinoPlaygroundPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACasinoPlaygroundPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACasinoPlaygroundPlayerController) \
	NO_API virtual ~ACasinoPlaygroundPlayerController();


#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundPlayerController_h_17_PROLOG
#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACasinoPlaygroundPlayerController;

// ********** End Class ACasinoPlaygroundPlayerController ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
