// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CasinoPlaygroundGameMode.h"

#ifdef CASINOPLAYGROUND_CasinoPlaygroundGameMode_generated_h
#error "CasinoPlaygroundGameMode.generated.h already included, missing '#pragma once' in CasinoPlaygroundGameMode.h"
#endif
#define CASINOPLAYGROUND_CasinoPlaygroundGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACasinoPlaygroundGameMode ************************************************
CASINOPLAYGROUND_API UClass* Z_Construct_UClass_ACasinoPlaygroundGameMode_NoRegister();

#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACasinoPlaygroundGameMode(); \
	friend struct Z_Construct_UClass_ACasinoPlaygroundGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CASINOPLAYGROUND_API UClass* Z_Construct_UClass_ACasinoPlaygroundGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACasinoPlaygroundGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CasinoPlayground"), Z_Construct_UClass_ACasinoPlaygroundGameMode_NoRegister) \
	DECLARE_SERIALIZER(ACasinoPlaygroundGameMode)


#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACasinoPlaygroundGameMode(ACasinoPlaygroundGameMode&&) = delete; \
	ACasinoPlaygroundGameMode(const ACasinoPlaygroundGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACasinoPlaygroundGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACasinoPlaygroundGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACasinoPlaygroundGameMode) \
	NO_API virtual ~ACasinoPlaygroundGameMode();


#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundGameMode_h_12_PROLOG
#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACasinoPlaygroundGameMode;

// ********** End Class ACasinoPlaygroundGameMode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
