// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_Defense/PvZ_DefenseGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePvZ_DefenseGameMode() {}
// Cross Module References
	PVZ_DEFENSE_API UClass* Z_Construct_UClass_APvZ_DefenseGameMode_NoRegister();
	PVZ_DEFENSE_API UClass* Z_Construct_UClass_APvZ_DefenseGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PvZ_Defense();
// End Cross Module References
	void APvZ_DefenseGameMode::StaticRegisterNativesAPvZ_DefenseGameMode()
	{
	}
	UClass* Z_Construct_UClass_APvZ_DefenseGameMode_NoRegister()
	{
		return APvZ_DefenseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APvZ_DefenseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APvZ_DefenseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_Defense,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APvZ_DefenseGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PvZ_DefenseGameMode.h" },
		{ "ModuleRelativePath", "PvZ_DefenseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APvZ_DefenseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APvZ_DefenseGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APvZ_DefenseGameMode_Statics::ClassParams = {
		&APvZ_DefenseGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APvZ_DefenseGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APvZ_DefenseGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APvZ_DefenseGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APvZ_DefenseGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APvZ_DefenseGameMode, 1509993184);
	template<> PVZ_DEFENSE_API UClass* StaticClass<APvZ_DefenseGameMode>()
	{
		return APvZ_DefenseGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APvZ_DefenseGameMode(Z_Construct_UClass_APvZ_DefenseGameMode, &APvZ_DefenseGameMode::StaticClass, TEXT("/Script/PvZ_Defense"), TEXT("APvZ_DefenseGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APvZ_DefenseGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
