// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Interned/The_InternedPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThe_InternedPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
THE_INTERNED_API UClass* Z_Construct_UClass_AThe_InternedPlayerController();
THE_INTERNED_API UClass* Z_Construct_UClass_AThe_InternedPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_The_Interned();
// End Cross Module References

// Begin Class AThe_InternedPlayerController
void AThe_InternedPlayerController::StaticRegisterNativesAThe_InternedPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThe_InternedPlayerController);
UClass* Z_Construct_UClass_AThe_InternedPlayerController_NoRegister()
{
	return AThe_InternedPlayerController::StaticClass();
}
struct Z_Construct_UClass_AThe_InternedPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "The_InternedPlayerController.h" },
		{ "ModuleRelativePath", "The_InternedPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "The_InternedPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThe_InternedPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThe_InternedPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThe_InternedPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThe_InternedPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThe_InternedPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThe_InternedPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThe_InternedPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_The_Interned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThe_InternedPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThe_InternedPlayerController_Statics::ClassParams = {
	&AThe_InternedPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AThe_InternedPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AThe_InternedPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThe_InternedPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AThe_InternedPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThe_InternedPlayerController()
{
	if (!Z_Registration_Info_UClass_AThe_InternedPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThe_InternedPlayerController.OuterSingleton, Z_Construct_UClass_AThe_InternedPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThe_InternedPlayerController.OuterSingleton;
}
template<> THE_INTERNED_API UClass* StaticClass<AThe_InternedPlayerController>()
{
	return AThe_InternedPlayerController::StaticClass();
}
AThe_InternedPlayerController::AThe_InternedPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThe_InternedPlayerController);
AThe_InternedPlayerController::~AThe_InternedPlayerController() {}
// End Class AThe_InternedPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_wivi5_OneDrive_Documents_Unreal_Projects_The_Interned_The_Interned_Source_The_Interned_The_InternedPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThe_InternedPlayerController, AThe_InternedPlayerController::StaticClass, TEXT("AThe_InternedPlayerController"), &Z_Registration_Info_UClass_AThe_InternedPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThe_InternedPlayerController), 1477408801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wivi5_OneDrive_Documents_Unreal_Projects_The_Interned_The_Interned_Source_The_Interned_The_InternedPlayerController_h_3563714342(TEXT("/Script/The_Interned"),
	Z_CompiledInDeferFile_FID_Users_wivi5_OneDrive_Documents_Unreal_Projects_The_Interned_The_Interned_Source_The_Interned_The_InternedPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wivi5_OneDrive_Documents_Unreal_Projects_The_Interned_The_Interned_Source_The_Interned_The_InternedPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
