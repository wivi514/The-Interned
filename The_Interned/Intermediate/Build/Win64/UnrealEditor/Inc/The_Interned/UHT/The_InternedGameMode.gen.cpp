// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "The_Interned/The_InternedGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThe_InternedGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THE_INTERNED_API UClass* Z_Construct_UClass_AThe_InternedGameMode();
THE_INTERNED_API UClass* Z_Construct_UClass_AThe_InternedGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_The_Interned();
// End Cross Module References

// Begin Class AThe_InternedGameMode
void AThe_InternedGameMode::StaticRegisterNativesAThe_InternedGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThe_InternedGameMode);
UClass* Z_Construct_UClass_AThe_InternedGameMode_NoRegister()
{
	return AThe_InternedGameMode::StaticClass();
}
struct Z_Construct_UClass_AThe_InternedGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "The_InternedGameMode.h" },
		{ "ModuleRelativePath", "The_InternedGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThe_InternedGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AThe_InternedGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_The_Interned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThe_InternedGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThe_InternedGameMode_Statics::ClassParams = {
	&AThe_InternedGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThe_InternedGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AThe_InternedGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThe_InternedGameMode()
{
	if (!Z_Registration_Info_UClass_AThe_InternedGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThe_InternedGameMode.OuterSingleton, Z_Construct_UClass_AThe_InternedGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThe_InternedGameMode.OuterSingleton;
}
template<> THE_INTERNED_API UClass* StaticClass<AThe_InternedGameMode>()
{
	return AThe_InternedGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThe_InternedGameMode);
AThe_InternedGameMode::~AThe_InternedGameMode() {}
// End Class AThe_InternedGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_wivi5_OneDrive_Documents_Unreal_Projects_The_Interned_The_Interned_Source_The_Interned_The_InternedGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThe_InternedGameMode, AThe_InternedGameMode::StaticClass, TEXT("AThe_InternedGameMode"), &Z_Registration_Info_UClass_AThe_InternedGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThe_InternedGameMode), 2968272175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wivi5_OneDrive_Documents_Unreal_Projects_The_Interned_The_Interned_Source_The_Interned_The_InternedGameMode_h_3349200096(TEXT("/Script/The_Interned"),
	Z_CompiledInDeferFile_FID_Users_wivi5_OneDrive_Documents_Unreal_Projects_The_Interned_The_Interned_Source_The_Interned_The_InternedGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wivi5_OneDrive_Documents_Unreal_Projects_The_Interned_The_Interned_Source_The_Interned_The_InternedGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
