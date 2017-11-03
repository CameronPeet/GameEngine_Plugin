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
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();

	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_AInteractableObject_Interact();
	PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_AInteractableObject_NoRegister();
	PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_AInteractableObject();
	PLUGIN_ADVENTUREROOM_API class UFunction* Z_Construct_UFunction_ATrackedObject_Interact();
	PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_ATrackedObject_NoRegister();
	PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_ATrackedObject();
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
			Guid.A = 0xF203B5AC;
			Guid.B = 0xDF973778;
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
