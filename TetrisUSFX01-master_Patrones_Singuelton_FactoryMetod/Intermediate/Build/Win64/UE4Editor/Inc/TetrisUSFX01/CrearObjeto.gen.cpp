// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/CrearObjeto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrearObjeto() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACrearObjeto_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ACrearObjeto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACrearObjeto::StaticRegisterNativesACrearObjeto()
	{
	}
	UClass* Z_Construct_UClass_ACrearObjeto_NoRegister()
	{
		return ACrearObjeto::StaticClass();
	}
	struct Z_Construct_UClass_ACrearObjeto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrearObjetoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrearObjetoMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrearObjeto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrearObjeto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrearObjeto.h" },
		{ "ModuleRelativePath", "CrearObjeto.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrearObjeto_Statics::NewProp_CrearObjetoMesh_MetaData[] = {
		{ "Category", "CrearObjeto" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CrearObjeto.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrearObjeto_Statics::NewProp_CrearObjetoMesh = { "CrearObjetoMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACrearObjeto, CrearObjetoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrearObjeto_Statics::NewProp_CrearObjetoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACrearObjeto_Statics::NewProp_CrearObjetoMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrearObjeto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrearObjeto_Statics::NewProp_CrearObjetoMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrearObjeto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrearObjeto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrearObjeto_Statics::ClassParams = {
		&ACrearObjeto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACrearObjeto_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACrearObjeto_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACrearObjeto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrearObjeto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrearObjeto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrearObjeto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrearObjeto, 2614971852);
	template<> TETRISUSFX01_API UClass* StaticClass<ACrearObjeto>()
	{
		return ACrearObjeto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrearObjeto(Z_Construct_UClass_ACrearObjeto, &ACrearObjeto::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ACrearObjeto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrearObjeto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
