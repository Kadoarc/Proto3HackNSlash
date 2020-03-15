// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype3HnS/Prototype3HnSGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototype3HnSGameMode() {}
// Cross Module References
	PROTOTYPE3HNS_API UClass* Z_Construct_UClass_APrototype3HnSGameMode_NoRegister();
	PROTOTYPE3HNS_API UClass* Z_Construct_UClass_APrototype3HnSGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Prototype3HnS();
// End Cross Module References
	void APrototype3HnSGameMode::StaticRegisterNativesAPrototype3HnSGameMode()
	{
	}
	UClass* Z_Construct_UClass_APrototype3HnSGameMode_NoRegister()
	{
		return APrototype3HnSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APrototype3HnSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrototype3HnSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Prototype3HnS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrototype3HnSGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Prototype3HnSGameMode.h" },
		{ "ModuleRelativePath", "Prototype3HnSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrototype3HnSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototype3HnSGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrototype3HnSGameMode_Statics::ClassParams = {
		&APrototype3HnSGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APrototype3HnSGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrototype3HnSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrototype3HnSGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrototype3HnSGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrototype3HnSGameMode, 454265630);
	template<> PROTOTYPE3HNS_API UClass* StaticClass<APrototype3HnSGameMode>()
	{
		return APrototype3HnSGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrototype3HnSGameMode(Z_Construct_UClass_APrototype3HnSGameMode, &APrototype3HnSGameMode::StaticClass, TEXT("/Script/Prototype3HnS"), TEXT("APrototype3HnSGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrototype3HnSGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
