// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BlockHija02.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockHija02() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockHija02_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockHija02();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlock();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void ABlockHija02::StaticRegisterNativesABlockHija02()
	{
	}
	UClass* Z_Construct_UClass_ABlockHija02_NoRegister()
	{
		return ABlockHija02::StaticClass();
	}
	struct Z_Construct_UClass_ABlockHija02_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockHija02_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABlock,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockHija02_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BlockHija02.h" },
		{ "ModuleRelativePath", "BlockHija02.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockHija02_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockHija02>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockHija02_Statics::ClassParams = {
		&ABlockHija02::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockHija02_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockHija02_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockHija02()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockHija02_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockHija02, 2357451093);
	template<> TETRISUSFX01_API UClass* StaticClass<ABlockHija02>()
	{
		return ABlockHija02::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockHija02(Z_Construct_UClass_ABlockHija02, &ABlockHija02::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABlockHija02"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockHija02);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
