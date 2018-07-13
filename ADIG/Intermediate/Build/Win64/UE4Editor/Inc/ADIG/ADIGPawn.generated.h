// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADIG_ADIGPawn_generated_h
#error "ADIGPawn.generated.h already included, missing '#pragma once' in ADIGPawn.h"
#endif
#define ADIG_ADIGPawn_generated_h

#define ADIG_Source_ADIG_ADIGPawn_h_11_RPC_WRAPPERS
#define ADIG_Source_ADIG_ADIGPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define ADIG_Source_ADIG_ADIGPawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAADIGPawn(); \
	friend ADIG_API class UClass* Z_Construct_UClass_AADIGPawn(); \
public: \
	DECLARE_CLASS(AADIGPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ADIG"), NO_API) \
	DECLARE_SERIALIZER(AADIGPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ADIG_Source_ADIG_ADIGPawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAADIGPawn(); \
	friend ADIG_API class UClass* Z_Construct_UClass_AADIGPawn(); \
public: \
	DECLARE_CLASS(AADIGPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ADIG"), NO_API) \
	DECLARE_SERIALIZER(AADIGPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ADIG_Source_ADIG_ADIGPawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AADIGPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AADIGPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AADIGPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AADIGPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AADIGPawn(AADIGPawn&&); \
	NO_API AADIGPawn(const AADIGPawn&); \
public:


#define ADIG_Source_ADIG_ADIGPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AADIGPawn(AADIGPawn&&); \
	NO_API AADIGPawn(const AADIGPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AADIGPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AADIGPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AADIGPawn)


#define ADIG_Source_ADIG_ADIGPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(AADIGPawn, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AADIGPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AADIGPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(AADIGPawn, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(AADIGPawn, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(AADIGPawn, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(AADIGPawn, MinSpeed); }


#define ADIG_Source_ADIG_ADIGPawn_h_8_PROLOG
#define ADIG_Source_ADIG_ADIGPawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ADIG_Source_ADIG_ADIGPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	ADIG_Source_ADIG_ADIGPawn_h_11_RPC_WRAPPERS \
	ADIG_Source_ADIG_ADIGPawn_h_11_INCLASS \
	ADIG_Source_ADIG_ADIGPawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ADIG_Source_ADIG_ADIGPawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ADIG_Source_ADIG_ADIGPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	ADIG_Source_ADIG_ADIGPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	ADIG_Source_ADIG_ADIGPawn_h_11_INCLASS_NO_PURE_DECLS \
	ADIG_Source_ADIG_ADIGPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ADIG_Source_ADIG_ADIGPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
