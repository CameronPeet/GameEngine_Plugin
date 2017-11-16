// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Plugin_AdventureRoom.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Plugin_AdventureRoom() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();

	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_AInteractableObject_Interact();
	PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_AInteractableObject_NoRegister();
	PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_AInteractableObject();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_ATrackedObject_Interact();
	PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_ATrackedObject_NoRegister();
	PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_ATrackedObject();
	PLUGIN_ADVENTUREROOM_API class UEnum* Z_Construct_UEnum_Plugin_AdventureRoom_EMeshDisplacement();
	PLUGIN_ADVENTUREROOM_API class UEnum* Z_Construct_UEnum_Plugin_AdventureRoom_EAxisDirection();
	PLUGIN_ADVENTUREROOM_API class UScriptStruct* Z_Construct_UScriptStruct_FRoomExtention();
	PLUGIN_ADVENTUREROOM_API class UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_ARoomTool_AddCornerPieces();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_ARoomTool_AddDoors();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_ARoomTool_AddExtentions();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_ARoomTool_AddWall();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_ARoomTool_ConvertToStaticMeshActors();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_ARoomTool_CreateBoundingBox();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_ARoomTool_GenerateMeshInfo();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_ARoomTool_GetMainRoomBoxExtents();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_ARoomTool_GetWallInfo();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_ARoomTool_SetMobility_Movable();
	PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_ARoomTool_NoRegister();
	PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_ARoomTool();
	PLUGIN_ADVENTUREROOM_API class UScriptStruct* Z_Construct_UScriptStruct_FItemStruct();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_AZone_BeginActorOverlap();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_AZone_EndActorOverlap();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_AZone_UpdateZoneItems();
	PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_AZone_NoRegister();
	PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_AZone();
	PLUGIN_ADVENTUREROOM_API class UPackage* Z_Construct_UPackage__Script_Plugin_AdventureRoom();
	static FName NAME_AInteractableObject_Interact = FName(TEXT("Interact"));
	bool AInteractableObject::Interact(AActor* ActorInstigator)
	{
		InteractableObject_eventInteract_Parms Parms;
		Parms.ActorInstigator=ActorInstigator;
		ProcessEvent(FindFunctionChecked(NAME_AInteractableObject_Interact),&Parms);
		return !!Parms.ReturnValue;
	}
	void AInteractableObject::StaticRegisterNativesAInteractableObject()
	{
		UClass* Class = AInteractableObject::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Interact", (Native)&AInteractableObject::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AInteractableObject_Interact()
	{
		UObject* Outer=Z_Construct_UClass_AInteractableObject();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Interact"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x0C020C00, 65535, sizeof(InteractableObject_eventInteract_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, InteractableObject_eventInteract_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, InteractableObject_eventInteract_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, InteractableObject_eventInteract_Parms), sizeof(bool), true);
			UProperty* NewProp_ActorInstigator = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorInstigator"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ActorInstigator, InteractableObject_eventInteract_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Interaction"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/InteractableObject.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractableObject_NoRegister()
	{
		return AInteractableObject::StaticClass();
	}
	UClass* Z_Construct_UClass_AInteractableObject()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Plugin_AdventureRoom();
			OuterClass = AInteractableObject::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AInteractableObject_Interact());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AInteractableObject_Interact(), "Interact"); // 2991309758
				static TCppClassTypeInfo<TCppClassTypeTraits<AInteractableObject> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("InteractableObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/InteractableObject.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractableObject, 1602268194);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractableObject(Z_Construct_UClass_AInteractableObject, &AInteractableObject::StaticClass, TEXT("/Script/Plugin_AdventureRoom"), TEXT("AInteractableObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableObject);
	static FName NAME_ATrackedObject_Interact = FName(TEXT("Interact"));
	bool ATrackedObject::Interact(AActor* ActorInstigator)
	{
		TrackedObject_eventInteract_Parms Parms;
		Parms.ActorInstigator=ActorInstigator;
		ProcessEvent(FindFunctionChecked(NAME_ATrackedObject_Interact),&Parms);
		return !!Parms.ReturnValue;
	}
	void ATrackedObject::StaticRegisterNativesATrackedObject()
	{
		UClass* Class = ATrackedObject::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Interact", (Native)&ATrackedObject::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ATrackedObject_Interact()
	{
		UObject* Outer=Z_Construct_UClass_ATrackedObject();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Interact"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x0C020C00, 65535, sizeof(TrackedObject_eventInteract_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TrackedObject_eventInteract_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TrackedObject_eventInteract_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TrackedObject_eventInteract_Parms), sizeof(bool), true);
			UProperty* NewProp_ActorInstigator = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActorInstigator"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ActorInstigator, TrackedObject_eventInteract_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Interaction"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TrackedObject.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATrackedObject_NoRegister()
	{
		return ATrackedObject::StaticClass();
	}
	UClass* Z_Construct_UClass_ATrackedObject()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AInteractableObject();
			Z_Construct_UPackage__Script_Plugin_AdventureRoom();
			OuterClass = ATrackedObject::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ATrackedObject_Interact());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Zone = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Zone"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Zone, ATrackedObject), 0x0010000000000004, Z_Construct_UClass_AZone_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(ActiveState, ATrackedObject, bool);
				UProperty* NewProp_ActiveState = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ActiveState"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ActiveState, ATrackedObject), 0x0010000000000004, CPP_BOOL_PROPERTY_BITMASK(ActiveState, ATrackedObject), sizeof(bool), true);
				UProperty* NewProp_AlertLevel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AlertLevel"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(AlertLevel, ATrackedObject), 0x0040000000010001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATrackedObject_Interact(), "Interact"); // 2993422297
				static TCppClassTypeInfo<TCppClassTypeTraits<ATrackedObject> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TrackedObject.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TrackedObject.h"));
				MetaData->SetValue(NewProp_Zone, TEXT("Category"), TEXT("Zone"));
				MetaData->SetValue(NewProp_Zone, TEXT("ModuleRelativePath"), TEXT("Public/TrackedObject.h"));
				MetaData->SetValue(NewProp_ActiveState, TEXT("Category"), TEXT("Tracking"));
				MetaData->SetValue(NewProp_ActiveState, TEXT("ModuleRelativePath"), TEXT("Public/TrackedObject.h"));
				MetaData->SetValue(NewProp_AlertLevel, TEXT("Category"), TEXT("Tracking"));
				MetaData->SetValue(NewProp_AlertLevel, TEXT("ModuleRelativePath"), TEXT("Public/TrackedObject.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrackedObject, 1023364452);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrackedObject(Z_Construct_UClass_ATrackedObject, &ATrackedObject::StaticClass, TEXT("/Script/Plugin_AdventureRoom"), TEXT("ATrackedObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrackedObject);
static UEnum* EMeshDisplacement_StaticEnum()
{
	extern PLUGIN_ADVENTUREROOM_API class UPackage* Z_Construct_UPackage__Script_Plugin_AdventureRoom();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern PLUGIN_ADVENTUREROOM_API class UEnum* Z_Construct_UEnum_Plugin_AdventureRoom_EMeshDisplacement();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Plugin_AdventureRoom_EMeshDisplacement, Z_Construct_UPackage__Script_Plugin_AdventureRoom(), TEXT("EMeshDisplacement"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshDisplacement(EMeshDisplacement_StaticEnum, TEXT("/Script/Plugin_AdventureRoom"), TEXT("EMeshDisplacement"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Plugin_AdventureRoom_EMeshDisplacement()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Plugin_AdventureRoom();
		extern uint32 Get_Z_Construct_UEnum_Plugin_AdventureRoom_EMeshDisplacement_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshDisplacement"), 0, Get_Z_Construct_UEnum_Plugin_AdventureRoom_EMeshDisplacement_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EMeshDisplacement"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EMeshDisplacement::PositiveDisplacement"), 0);
			EnumNames.Emplace(TEXT("EMeshDisplacement::NegativeDisplacement"), 1);
			EnumNames.Emplace(TEXT("EMeshDisplacement::Centered"), 2);
			EnumNames.Emplace(TEXT("EMeshDisplacement::EMeshDisplacement_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EMeshDisplacement");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Centered.DisplayName"), TEXT("Centered"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
			MetaData->SetValue(ReturnEnum, TEXT("NegativeDisplacement.DisplayName"), TEXT("NegativeDisplacement"));
			MetaData->SetValue(ReturnEnum, TEXT("PositiveDisplacement.DisplayName"), TEXT("PositiveDisplacement"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Plugin_AdventureRoom_EMeshDisplacement_CRC() { return 2689404603U; }
static UEnum* EAxisDirection_StaticEnum()
{
	extern PLUGIN_ADVENTUREROOM_API class UPackage* Z_Construct_UPackage__Script_Plugin_AdventureRoom();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern PLUGIN_ADVENTUREROOM_API class UEnum* Z_Construct_UEnum_Plugin_AdventureRoom_EAxisDirection();
		Singleton = GetStaticEnum(Z_Construct_UEnum_Plugin_AdventureRoom_EAxisDirection, Z_Construct_UPackage__Script_Plugin_AdventureRoom(), TEXT("EAxisDirection"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAxisDirection(EAxisDirection_StaticEnum, TEXT("/Script/Plugin_AdventureRoom"), TEXT("EAxisDirection"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_Plugin_AdventureRoom_EAxisDirection()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_Plugin_AdventureRoom();
		extern uint32 Get_Z_Construct_UEnum_Plugin_AdventureRoom_EAxisDirection_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAxisDirection"), 0, Get_Z_Construct_UEnum_Plugin_AdventureRoom_EAxisDirection_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EAxisDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EAxisDirection::YAxis"), 0);
			EnumNames.Emplace(TEXT("EAxisDirection::XAxis"), 1);
			EnumNames.Emplace(TEXT("EAxisDirection::EAxisDirection_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EAxisDirection");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_Plugin_AdventureRoom_EAxisDirection_CRC() { return 2337544976U; }
class UScriptStruct* FRoomExtention::StaticStruct()
{
	extern PLUGIN_ADVENTUREROOM_API class UPackage* Z_Construct_UPackage__Script_Plugin_AdventureRoom();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLUGIN_ADVENTUREROOM_API class UScriptStruct* Z_Construct_UScriptStruct_FRoomExtention();
		extern PLUGIN_ADVENTUREROOM_API uint32 Get_Z_Construct_UScriptStruct_FRoomExtention_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoomExtention, Z_Construct_UPackage__Script_Plugin_AdventureRoom(), TEXT("RoomExtention"), sizeof(FRoomExtention), Get_Z_Construct_UScriptStruct_FRoomExtention_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRoomExtention(FRoomExtention::StaticStruct, TEXT("/Script/Plugin_AdventureRoom"), TEXT("RoomExtention"), false, nullptr, nullptr);
static struct FScriptStruct_Plugin_AdventureRoom_StaticRegisterNativesFRoomExtention
{
	FScriptStruct_Plugin_AdventureRoom_StaticRegisterNativesFRoomExtention()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RoomExtention")),new UScriptStruct::TCppStructOps<FRoomExtention>);
	}
} ScriptStruct_Plugin_AdventureRoom_StaticRegisterNativesFRoomExtention;
	UScriptStruct* Z_Construct_UScriptStruct_FRoomExtention()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Plugin_AdventureRoom();
		extern uint32 Get_Z_Construct_UScriptStruct_FRoomExtention_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RoomExtention"), sizeof(FRoomExtention), Get_Z_Construct_UScriptStruct_FRoomExtention_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RoomExtention"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FRoomExtention>, EStructFlags(0x00000001));
			UProperty* NewProp_AccessWidth = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AccessWidth"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(AccessWidth, FRoomExtention), 0x0010000000000815);
			UProperty* NewProp_Length = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Length"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Length, FRoomExtention), 0x0010000000000815);
			UProperty* NewProp_Width = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Width"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Width, FRoomExtention), 0x0010000000000815);
			UProperty* NewProp_PlacementIndex = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("PlacementIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PlacementIndex, FRoomExtention), 0x0010000000000815);
			UProperty* NewProp_DoorInfo = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DoorInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DoorInfo, FRoomExtention), 0x0010000000000815, Z_Construct_UScriptStruct_FMeshInfo());
			UProperty* NewProp_WallInfo = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WallInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WallInfo, FRoomExtention), 0x0010000000000815, Z_Construct_UScriptStruct_FMeshInfo());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
			MetaData->SetValue(NewProp_AccessWidth, TEXT("Category"), TEXT("MeshInfo"));
			MetaData->SetValue(NewProp_AccessWidth, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
			MetaData->SetValue(NewProp_Length, TEXT("Category"), TEXT("MeshInfo"));
			MetaData->SetValue(NewProp_Length, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
			MetaData->SetValue(NewProp_Width, TEXT("Category"), TEXT("MeshInfo"));
			MetaData->SetValue(NewProp_Width, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
			MetaData->SetValue(NewProp_PlacementIndex, TEXT("Category"), TEXT("MeshInfo"));
			MetaData->SetValue(NewProp_PlacementIndex, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
			MetaData->SetValue(NewProp_DoorInfo, TEXT("Category"), TEXT("MeshInfo"));
			MetaData->SetValue(NewProp_DoorInfo, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
			MetaData->SetValue(NewProp_WallInfo, TEXT("Category"), TEXT("MeshInfo"));
			MetaData->SetValue(NewProp_WallInfo, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRoomExtention_CRC() { return 3006667497U; }
class UScriptStruct* FMeshInfo::StaticStruct()
{
	extern PLUGIN_ADVENTUREROOM_API class UPackage* Z_Construct_UPackage__Script_Plugin_AdventureRoom();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLUGIN_ADVENTUREROOM_API class UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo();
		extern PLUGIN_ADVENTUREROOM_API uint32 Get_Z_Construct_UScriptStruct_FMeshInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshInfo, Z_Construct_UPackage__Script_Plugin_AdventureRoom(), TEXT("MeshInfo"), sizeof(FMeshInfo), Get_Z_Construct_UScriptStruct_FMeshInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeshInfo(FMeshInfo::StaticStruct, TEXT("/Script/Plugin_AdventureRoom"), TEXT("MeshInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Plugin_AdventureRoom_StaticRegisterNativesFMeshInfo
{
	FScriptStruct_Plugin_AdventureRoom_StaticRegisterNativesFMeshInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeshInfo")),new UScriptStruct::TCppStructOps<FMeshInfo>);
	}
} ScriptStruct_Plugin_AdventureRoom_StaticRegisterNativesFMeshInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Plugin_AdventureRoom();
		extern uint32 Get_Z_Construct_UScriptStruct_FMeshInfo_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeshInfo"), sizeof(FMeshInfo), Get_Z_Construct_UScriptStruct_FMeshInfo_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MeshInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMeshInfo>, EStructFlags(0x00000001));
			UProperty* NewProp_HeightVector = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("HeightVector"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HeightVector, FMeshInfo), 0x0010000000000014, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LengthVector = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LengthVector"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LengthVector, FMeshInfo), 0x0010000000000014, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_WidthVector = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WidthVector"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WidthVector, FMeshInfo), 0x0010000000000014, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Axis = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Axis"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Axis, FMeshInfo), 0x0010000000000014, Z_Construct_UEnum_Plugin_AdventureRoom_EAxisDirection());
			UProperty* NewProp_Axis_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Axis, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_MeshDisplacement = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("MeshDisplacement"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(MeshDisplacement, FMeshInfo), 0x0010000000000014, Z_Construct_UEnum_Plugin_AdventureRoom_EMeshDisplacement());
			UProperty* NewProp_MeshDisplacement_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_MeshDisplacement, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Mesh = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh, FMeshInfo), 0x0010000000000815, Z_Construct_UClass_UStaticMesh_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
			MetaData->SetValue(NewProp_HeightVector, TEXT("Category"), TEXT("MeshInfo"));
			MetaData->SetValue(NewProp_HeightVector, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
			MetaData->SetValue(NewProp_LengthVector, TEXT("Category"), TEXT("MeshInfo"));
			MetaData->SetValue(NewProp_LengthVector, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
			MetaData->SetValue(NewProp_WidthVector, TEXT("Category"), TEXT("MeshInfo"));
			MetaData->SetValue(NewProp_WidthVector, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
			MetaData->SetValue(NewProp_Axis, TEXT("Category"), TEXT("MeshInfo"));
			MetaData->SetValue(NewProp_Axis, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
			MetaData->SetValue(NewProp_MeshDisplacement, TEXT("Category"), TEXT("MeshInfo"));
			MetaData->SetValue(NewProp_MeshDisplacement, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
			MetaData->SetValue(NewProp_Mesh, TEXT("Category"), TEXT("MeshInfo"));
			MetaData->SetValue(NewProp_Mesh, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeshInfo_CRC() { return 2795686880U; }
	void ARoomTool::StaticRegisterNativesARoomTool()
	{
		UClass* Class = ARoomTool::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddCornerPieces", (Native)&ARoomTool::execAddCornerPieces },
			{ "AddDoors", (Native)&ARoomTool::execAddDoors },
			{ "AddExtentions", (Native)&ARoomTool::execAddExtentions },
			{ "AddWall", (Native)&ARoomTool::execAddWall },
			{ "ConvertToStaticMeshActors", (Native)&ARoomTool::execConvertToStaticMeshActors },
			{ "CreateBoundingBox", (Native)&ARoomTool::execCreateBoundingBox },
			{ "GenerateMeshInfo", (Native)&ARoomTool::execGenerateMeshInfo },
			{ "GetMainRoomBoxExtents", (Native)&ARoomTool::execGetMainRoomBoxExtents },
			{ "GetWallInfo", (Native)&ARoomTool::execGetWallInfo },
			{ "SetMobility_Movable", (Native)&ARoomTool::execSetMobility_Movable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 10);
	}
	UFunction* Z_Construct_UFunction_ARoomTool_AddCornerPieces()
	{
		UObject* Outer=Z_Construct_UClass_ARoomTool();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddCornerPieces"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Generation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARoomTool_AddDoors()
	{
		UObject* Outer=Z_Construct_UClass_ARoomTool();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddDoors"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Generation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARoomTool_AddExtentions()
	{
		UObject* Outer=Z_Construct_UClass_ARoomTool();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddExtentions"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Generation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARoomTool_AddWall()
	{
		UObject* Outer=Z_Construct_UClass_ARoomTool();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddWall"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Generation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARoomTool_ConvertToStaticMeshActors()
	{
		UObject* Outer=Z_Construct_UClass_ARoomTool();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConvertToStaticMeshActors"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Generation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARoomTool_CreateBoundingBox()
	{
		UObject* Outer=Z_Construct_UClass_ARoomTool();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CreateBoundingBox"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Generation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARoomTool_GenerateMeshInfo()
	{
		struct RoomTool_eventGenerateMeshInfo_Parms
		{
			UStaticMesh* mesh;
			FMeshInfo ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ARoomTool();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GenerateMeshInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(RoomTool_eventGenerateMeshInfo_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, RoomTool_eventGenerateMeshInfo_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FMeshInfo());
			UProperty* NewProp_mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mesh, RoomTool_eventGenerateMeshInfo_Parms), 0x0010000000000080, Z_Construct_UClass_UStaticMesh_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Generation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARoomTool_GetMainRoomBoxExtents()
	{
		struct RoomTool_eventGetMainRoomBoxExtents_Parms
		{
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ARoomTool();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetMainRoomBoxExtents"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(RoomTool_eventGetMainRoomBoxExtents_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, RoomTool_eventGetMainRoomBoxExtents_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Generation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARoomTool_GetWallInfo()
	{
		struct RoomTool_eventGetWallInfo_Parms
		{
			FMeshInfo ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ARoomTool();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetWallInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(RoomTool_eventGetWallInfo_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, RoomTool_eventGetWallInfo_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FMeshInfo());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Generation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARoomTool_SetMobility_Movable()
	{
		struct RoomTool_eventSetMobility_Movable_Parms
		{
			AStaticMeshActor* mesh;
		};
		UObject* Outer=Z_Construct_UClass_ARoomTool();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetMobility_Movable"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(RoomTool_eventSetMobility_Movable_Parms));
			UProperty* NewProp_mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mesh, RoomTool_eventSetMobility_Movable_Parms), 0x0010000000000080, Z_Construct_UClass_AStaticMeshActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Generation"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARoomTool_NoRegister()
	{
		return ARoomTool::StaticClass();
	}
	UClass* Z_Construct_UClass_ARoomTool()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Plugin_AdventureRoom();
			OuterClass = ARoomTool::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ARoomTool_AddCornerPieces());
				OuterClass->LinkChild(Z_Construct_UFunction_ARoomTool_AddDoors());
				OuterClass->LinkChild(Z_Construct_UFunction_ARoomTool_AddExtentions());
				OuterClass->LinkChild(Z_Construct_UFunction_ARoomTool_AddWall());
				OuterClass->LinkChild(Z_Construct_UFunction_ARoomTool_ConvertToStaticMeshActors());
				OuterClass->LinkChild(Z_Construct_UFunction_ARoomTool_CreateBoundingBox());
				OuterClass->LinkChild(Z_Construct_UFunction_ARoomTool_GenerateMeshInfo());
				OuterClass->LinkChild(Z_Construct_UFunction_ARoomTool_GetMainRoomBoxExtents());
				OuterClass->LinkChild(Z_Construct_UFunction_ARoomTool_GetWallInfo());
				OuterClass->LinkChild(Z_Construct_UFunction_ARoomTool_SetMobility_Movable());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ConvertedInstances = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ConvertedInstances"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ConvertedInstances, ARoomTool), 0x0010000000000805);
				UProperty* NewProp_ConvertedInstances_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ConvertedInstances, TEXT("ConvertedInstances"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_AStaticMeshActor_NoRegister());
				UProperty* NewProp_DoorLocations = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DoorLocations"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(DoorLocations, ARoomTool), 0x0010000000000805);
				UProperty* NewProp_DoorLocations_Inner = new(EC_InternalUseOnlyConstructor, NewProp_DoorLocations, TEXT("DoorLocations"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(FlipWalls, ARoomTool, bool);
				UProperty* NewProp_FlipWalls = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FlipWalls"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(FlipWalls, ARoomTool), 0x0010000000000801, CPP_BOOL_PROPERTY_BITMASK(FlipWalls, ARoomTool), sizeof(bool), true);
				UProperty* NewProp_Length = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Length"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(Length, ARoomTool), 0x0010000000000815);
				UProperty* NewProp_Width = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Width"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(Width, ARoomTool), 0x0010000000000815);
				UProperty* NewProp_CornerPieceInfo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CornerPieceInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CornerPieceInfo, ARoomTool), 0x0010000000000005, Z_Construct_UScriptStruct_FMeshInfo());
				UProperty* NewProp_WallInfo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WallInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WallInfo, ARoomTool), 0x0010000000000005, Z_Construct_UScriptStruct_FMeshInfo());
				UProperty* NewProp_DoorwayInfo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DoorwayInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DoorwayInfo, ARoomTool), 0x0010000000000805, Z_Construct_UScriptStruct_FMeshInfo());
				UProperty* NewProp_RoomExtentions = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RoomExtentions"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(RoomExtentions, ARoomTool), 0x0010000000000805);
				UProperty* NewProp_RoomExtentions_Inner = new(EC_InternalUseOnlyConstructor, NewProp_RoomExtentions, TEXT("RoomExtentions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FRoomExtention());
				UProperty* NewProp_DoorBlueprint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DoorBlueprint"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DoorBlueprint, ARoomTool), 0x0010000000000815, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_ExtentionWallInstances = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExtentionWallInstances"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ExtentionWallInstances, ARoomTool), 0x001000000008080d, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister());
				UProperty* NewProp_ExtentionDoorInstances = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExtentionDoorInstances"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ExtentionDoorInstances, ARoomTool), 0x001000000008080d, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseCornerPieces, ARoomTool, bool);
				UProperty* NewProp_bUseCornerPieces = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseCornerPieces"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseCornerPieces, ARoomTool), 0x0010000000000805, CPP_BOOL_PROPERTY_BITMASK(bUseCornerPieces, ARoomTool), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseCornerPieceToHideSeams, ARoomTool, bool);
				UProperty* NewProp_bUseCornerPieceToHideSeams = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseCornerPieceToHideSeams"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseCornerPieceToHideSeams, ARoomTool), 0x0010000000000805, CPP_BOOL_PROPERTY_BITMASK(bUseCornerPieceToHideSeams, ARoomTool), sizeof(bool), true);
				UProperty* NewProp_CornerPieceInstances = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CornerPieceInstances"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CornerPieceInstances, ARoomTool), 0x001000000008080d, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister());
				UProperty* NewProp_WallInstances = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WallInstances"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WallInstances, ARoomTool), 0x001000000008080d, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister());
				UProperty* NewProp_DoorInstances = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DoorInstances"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DoorInstances, ARoomTool), 0x001000000008080d, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ARoomTool_AddCornerPieces(), "AddCornerPieces"); // 2023400217
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ARoomTool_AddDoors(), "AddDoors"); // 310460327
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ARoomTool_AddExtentions(), "AddExtentions"); // 4082489467
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ARoomTool_AddWall(), "AddWall"); // 4107950896
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ARoomTool_ConvertToStaticMeshActors(), "ConvertToStaticMeshActors"); // 3822538684
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ARoomTool_CreateBoundingBox(), "CreateBoundingBox"); // 201789150
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ARoomTool_GenerateMeshInfo(), "GenerateMeshInfo"); // 2313662290
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ARoomTool_GetMainRoomBoxExtents(), "GetMainRoomBoxExtents"); // 2731715490
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ARoomTool_GetWallInfo(), "GetWallInfo"); // 1948886513
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ARoomTool_SetMobility_Movable(), "SetMobility_Movable"); // 2077676232
				static TCppClassTypeInfo<TCppClassTypeTraits<ARoomTool> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("RoomTool.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_ConvertedInstances, TEXT("Category"), TEXT("Settings|Decorators"));
				MetaData->SetValue(NewProp_ConvertedInstances, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_DoorLocations, TEXT("Category"), TEXT("Settings|Decorators"));
				MetaData->SetValue(NewProp_DoorLocations, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_DoorLocations, TEXT("ToolTip"), TEXT("UPROPERTY(EditDefaultsOnly, Category = \"Settings|Options\")\n       bool bCreateDoors;"));
				MetaData->SetValue(NewProp_FlipWalls, TEXT("Category"), TEXT("Settings|Size"));
				MetaData->SetValue(NewProp_FlipWalls, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_Length, TEXT("Category"), TEXT("Settings|Size"));
				MetaData->SetValue(NewProp_Length, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_Length, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_Width, TEXT("Category"), TEXT("Settings|Size"));
				MetaData->SetValue(NewProp_Width, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_Width, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_CornerPieceInfo, TEXT("Category"), TEXT("Settings|Meshes"));
				MetaData->SetValue(NewProp_CornerPieceInfo, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_WallInfo, TEXT("Category"), TEXT("Settings|Meshes"));
				MetaData->SetValue(NewProp_WallInfo, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_DoorwayInfo, TEXT("Category"), TEXT("Settings|Meshes"));
				MetaData->SetValue(NewProp_DoorwayInfo, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_RoomExtentions, TEXT("Category"), TEXT("Settings|Extentions"));
				MetaData->SetValue(NewProp_RoomExtentions, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_DoorBlueprint, TEXT("Category"), TEXT("Decorators"));
				MetaData->SetValue(NewProp_DoorBlueprint, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_ExtentionWallInstances, TEXT("Category"), TEXT("Instances"));
				MetaData->SetValue(NewProp_ExtentionWallInstances, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ExtentionWallInstances, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_ExtentionDoorInstances, TEXT("Category"), TEXT("Instances"));
				MetaData->SetValue(NewProp_ExtentionDoorInstances, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ExtentionDoorInstances, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_bUseCornerPieces, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_bUseCornerPieces, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_bUseCornerPieceToHideSeams, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_bUseCornerPieceToHideSeams, TEXT("EditCondition"), TEXT("bUseCornerPieces"));
				MetaData->SetValue(NewProp_bUseCornerPieceToHideSeams, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_CornerPieceInstances, TEXT("Category"), TEXT("Instances"));
				MetaData->SetValue(NewProp_CornerPieceInstances, TEXT("EditCondition"), TEXT("bUseCornerPieces"));
				MetaData->SetValue(NewProp_CornerPieceInstances, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CornerPieceInstances, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_WallInstances, TEXT("Category"), TEXT("Instances"));
				MetaData->SetValue(NewProp_WallInstances, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WallInstances, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
				MetaData->SetValue(NewProp_DoorInstances, TEXT("Category"), TEXT("Instances"));
				MetaData->SetValue(NewProp_DoorInstances, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_DoorInstances, TEXT("ModuleRelativePath"), TEXT("Public/RoomTool.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoomTool, 1318912607);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoomTool(Z_Construct_UClass_ARoomTool, &ARoomTool::StaticClass, TEXT("/Script/Plugin_AdventureRoom"), TEXT("ARoomTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoomTool);
class UScriptStruct* FItemStruct::StaticStruct()
{
	extern PLUGIN_ADVENTUREROOM_API class UPackage* Z_Construct_UPackage__Script_Plugin_AdventureRoom();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLUGIN_ADVENTUREROOM_API class UScriptStruct* Z_Construct_UScriptStruct_FItemStruct();
		extern PLUGIN_ADVENTUREROOM_API uint32 Get_Z_Construct_UScriptStruct_FItemStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStruct, Z_Construct_UPackage__Script_Plugin_AdventureRoom(), TEXT("ItemStruct"), sizeof(FItemStruct), Get_Z_Construct_UScriptStruct_FItemStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemStruct(FItemStruct::StaticStruct, TEXT("/Script/Plugin_AdventureRoom"), TEXT("ItemStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Plugin_AdventureRoom_StaticRegisterNativesFItemStruct
{
	FScriptStruct_Plugin_AdventureRoom_StaticRegisterNativesFItemStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemStruct")),new UScriptStruct::TCppStructOps<FItemStruct>);
	}
} ScriptStruct_Plugin_AdventureRoom_StaticRegisterNativesFItemStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FItemStruct()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_Plugin_AdventureRoom();
		extern uint32 Get_Z_Construct_UScriptStruct_FItemStruct_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemStruct"), sizeof(FItemStruct), Get_Z_Construct_UScriptStruct_FItemStruct_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ItemStruct"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FItemStruct>, EStructFlags(0x00000001));
			UProperty* NewProp_Items = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Items"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Items, FItemStruct), 0x0010000000000000);
			UProperty* NewProp_Items_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Items, TEXT("Items"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_ATrackedObject_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Zone.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("class AEnemyCharacter;"));
			MetaData->SetValue(NewProp_Items, TEXT("ModuleRelativePath"), TEXT("Public/Zone.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemStruct_CRC() { return 143983355U; }
	void AZone::StaticRegisterNativesAZone()
	{
		UClass* Class = AZone::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "BeginActorOverlap", (Native)&AZone::execBeginActorOverlap },
			{ "EndActorOverlap", (Native)&AZone::execEndActorOverlap },
			{ "UpdateZoneItems", (Native)&AZone::execUpdateZoneItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 3);
	}
	UFunction* Z_Construct_UFunction_AZone_BeginActorOverlap()
	{
		struct Zone_eventBeginActorOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		UObject* Outer=Z_Construct_UClass_AZone();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BeginActorOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(Zone_eventBeginActorOverlap_Parms));
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Zone_eventBeginActorOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedActor, Zone_eventBeginActorOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Zone.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AZone_EndActorOverlap()
	{
		struct Zone_eventEndActorOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		UObject* Outer=Z_Construct_UClass_AZone();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EndActorOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(Zone_eventEndActorOverlap_Parms));
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Zone_eventEndActorOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedActor, Zone_eventEndActorOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Zone.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AZone_UpdateZoneItems()
	{
		UObject* Outer=Z_Construct_UClass_AZone();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateZoneItems"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Zone.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZone_NoRegister()
	{
		return AZone::StaticClass();
	}
	UClass* Z_Construct_UClass_AZone()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Plugin_AdventureRoom();
			OuterClass = AZone::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AZone_BeginActorOverlap());
				OuterClass->LinkChild(Z_Construct_UFunction_AZone_EndActorOverlap());
				OuterClass->LinkChild(Z_Construct_UFunction_AZone_UpdateZoneItems());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BPsToTrack = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BPsToTrack"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(BPsToTrack, AZone), 0x0040000000000001);
				UProperty* NewProp_BPsToTrack_Inner = new(EC_InternalUseOnlyConstructor, NewProp_BPsToTrack, TEXT("BPsToTrack"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UObject_NoRegister(), UClass::StaticClass());
				UProperty* NewProp_BoxComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BoxComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BoxComponent, AZone), 0x0040000000080009, Z_Construct_UClass_UBoxComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AZone_BeginActorOverlap(), "BeginActorOverlap"); // 261089719
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AZone_EndActorOverlap(), "EndActorOverlap"); // 2679842849
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AZone_UpdateZoneItems(), "UpdateZoneItems"); // 57451839
				static TCppClassTypeInfo<TCppClassTypeTraits<AZone> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Zone.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Zone.h"));
				MetaData->SetValue(NewProp_BPsToTrack, TEXT("Category"), TEXT("Items To Track"));
				MetaData->SetValue(NewProp_BPsToTrack, TEXT("ModuleRelativePath"), TEXT("Public/Zone.h"));
				MetaData->SetValue(NewProp_BoxComponent, TEXT("Category"), TEXT("Collision"));
				MetaData->SetValue(NewProp_BoxComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BoxComponent, TEXT("ModuleRelativePath"), TEXT("Public/Zone.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZone, 2991187191);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZone(Z_Construct_UClass_AZone, &AZone::StaticClass, TEXT("/Script/Plugin_AdventureRoom"), TEXT("AZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZone);
	UPackage* Z_Construct_UPackage__Script_Plugin_AdventureRoom()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Plugin_AdventureRoom")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0xE2070AA6;
			Guid.B = 0x55321D79;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
