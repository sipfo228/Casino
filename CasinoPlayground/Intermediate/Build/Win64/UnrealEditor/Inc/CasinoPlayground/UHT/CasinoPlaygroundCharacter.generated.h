// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CasinoPlaygroundCharacter.h"

#ifdef CASINOPLAYGROUND_CasinoPlaygroundCharacter_generated_h
#error "CasinoPlaygroundCharacter.generated.h already included, missing '#pragma once' in CasinoPlaygroundCharacter.h"
#endif
#define CASINOPLAYGROUND_CasinoPlaygroundCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACasinoPlaygroundCharacter ***********************************************
#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


CASINOPLAYGROUND_API UClass* Z_Construct_UClass_ACasinoPlaygroundCharacter_NoRegister();

#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACasinoPlaygroundCharacter(); \
	friend struct Z_Construct_UClass_ACasinoPlaygroundCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CASINOPLAYGROUND_API UClass* Z_Construct_UClass_ACasinoPlaygroundCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACasinoPlaygroundCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CasinoPlayground"), Z_Construct_UClass_ACasinoPlaygroundCharacter_NoRegister) \
	DECLARE_SERIALIZER(ACasinoPlaygroundCharacter)


#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACasinoPlaygroundCharacter(ACasinoPlaygroundCharacter&&) = delete; \
	ACasinoPlaygroundCharacter(const ACasinoPlaygroundCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACasinoPlaygroundCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACasinoPlaygroundCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACasinoPlaygroundCharacter) \
	NO_API virtual ~ACasinoPlaygroundCharacter();


#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCharacter_h_21_PROLOG
#define FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACasinoPlaygroundCharacter;

// ********** End Class ACasinoPlaygroundCharacter *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameProjects_CasinoPlayground_Source_CasinoPlayground_CasinoPlaygroundCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
