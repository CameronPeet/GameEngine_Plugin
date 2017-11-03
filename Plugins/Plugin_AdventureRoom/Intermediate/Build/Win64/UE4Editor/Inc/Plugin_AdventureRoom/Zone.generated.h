// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PLUGIN_ADVENTUREROOM_Zone_generated_h
#error "Zone.generated.h already included, missing '#pragma once' in Zone.h"
#endif
#define PLUGIN_ADVENTUREROOM_Zone_generated_h

#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_18_GENERATED_BODY \
	friend PLUGIN_ADVENTUREROOM_API class UScriptStruct* Z_Construct_UScriptStruct_FItemStruct(); \
	PLUGIN_ADVENTUREROOM_API static class UScriptStruct* StaticStruct();


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndActorOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EndActorOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginActorOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginActorOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateZoneItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateZoneItems(); \
		P_NATIVE_END; \
	}


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndActorOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EndActorOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginActorOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BeginActorOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateZoneItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateZoneItems(); \
		P_NATIVE_END; \
	}


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZone(); \
	friend PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_AZone(); \
public: \
	DECLARE_CLASS(AZone, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Plugin_AdventureRoom"), NO_API) \
	DECLARE_SERIALIZER(AZone) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAZone(); \
	friend PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_AZone(); \
public: \
	DECLARE_CLASS(AZone, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Plugin_AdventureRoom"), NO_API) \
	DECLARE_SERIALIZER(AZone) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZone(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZone(AZone&&); \
	NO_API AZone(const AZone&); \
public:


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZone(AZone&&); \
	NO_API AZone(const AZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZone); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZone)


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(AZone, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__BPsToTrack() { return STRUCT_OFFSET(AZone, BPsToTrack); }


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_31_PROLOG
#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_PRIVATE_PROPERTY_OFFSET \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_RPC_WRAPPERS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_INCLASS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_PRIVATE_PROPERTY_OFFSET \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_INCLASS_NO_PURE_DECLS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_Zone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
