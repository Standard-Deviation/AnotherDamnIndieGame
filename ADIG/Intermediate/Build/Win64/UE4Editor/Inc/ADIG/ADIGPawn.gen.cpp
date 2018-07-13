// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ADIGPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeADIGPawn() {}
// Cross Module References
	ADIG_API UClass* Z_Construct_UClass_AADIGPawn_NoRegister();
	ADIG_API UClass* Z_Construct_UClass_AADIGPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ADIG();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AADIGPawn::StaticRegisterNativesAADIGPawn()
	{
	}
	UClass* Z_Construct_UClass_AADIGPawn_NoRegister()
	{
		return AADIGPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AADIGPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_ADIG,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "ADIGPawn.h" },
				{ "ModuleRelativePath", "ADIGPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[] = {
				{ "Category", "Yaw" },
				{ "ModuleRelativePath", "ADIGPawn.h" },
				{ "ToolTip", "Min forward speed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MinSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AADIGPawn, MinSpeed), METADATA_PARAMS(NewProp_MinSpeed_MetaData, ARRAY_COUNT(NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
				{ "Category", "Pitch" },
				{ "ModuleRelativePath", "ADIGPawn.h" },
				{ "ToolTip", "Max forward speed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AADIGPawn, MaxSpeed), METADATA_PARAMS(NewProp_MaxSpeed_MetaData, ARRAY_COUNT(NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[] = {
				{ "Category", "Plane" },
				{ "ModuleRelativePath", "ADIGPawn.h" },
				{ "ToolTip", "How quickly pawn can steer" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "TurnSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AADIGPawn, TurnSpeed), METADATA_PARAMS(NewProp_TurnSpeed_MetaData, ARRAY_COUNT(NewProp_TurnSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
				{ "Category", "Plane" },
				{ "ModuleRelativePath", "ADIGPawn.h" },
				{ "ToolTip", "How quickly forward speed changes" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Acceleration = { UE4CodeGen_Private::EPropertyClass::Float, "Acceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AADIGPawn, Acceleration), METADATA_PARAMS(NewProp_Acceleration_MetaData, ARRAY_COUNT(NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ADIGPawn.h" },
				{ "ToolTip", "Camera component that will be our viewpoint" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AADIGPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_Camera_MetaData, ARRAY_COUNT(NewProp_Camera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ADIGPawn.h" },
				{ "ToolTip", "Spring arm that will offset the camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArm", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AADIGPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArm_MetaData, ARRAY_COUNT(NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneMesh_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ADIGPawn.h" },
				{ "ToolTip", "StaticMesh component that will be the visuals for our flying pawn" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneMesh = { UE4CodeGen_Private::EPropertyClass::Object, "PlaneMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AADIGPawn, PlaneMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_PlaneMesh_MetaData, ARRAY_COUNT(NewProp_PlaneMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TurnSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Acceleration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Camera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArm,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AADIGPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AADIGPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AADIGPawn, 4288914757);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AADIGPawn(Z_Construct_UClass_AADIGPawn, &AADIGPawn::StaticClass, TEXT("/Script/ADIG"), TEXT("AADIGPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AADIGPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
