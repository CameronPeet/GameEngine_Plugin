// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PLUGIN_ADVENTUREROOM_TrackedObject_generated_h
#error "TrackedObject.generated.h already included, missing '#pragma once' in TrackedObject.h"
#endif
#define PLUGIN_ADVENTUREROOM_TrackedObject_generated_h

#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_RPC_WRAPPERS \
	virtual bool Interact_Implementation(AActor* ActorInstigator); \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Interact_Implementation(Z_Param_ActorInstigator); \
		P_NATIVE_END; \
	}


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Interact_Implementation(Z_Param_ActorInstigator); \
		P_NATIVE_END; \
	}


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_EVENT_PARMS \
	struct TrackedObject_eventInteract_Parms \
	{ \
		AActor* ActorInstigator; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TrackedObject_eventInteract_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_CALLBACK_WRAPPERS
#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrackedObject(); \
	friend PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_ATrackedObject(); \
public: \
	DECLARE_CLASS(ATrackedObject, AInteractableObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Plugin_AdventureRoom"), NO_API) \
	DECLARE_SERIALIZER(ATrackedObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATrackedObject(); \
	friend PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_ATrackedObject(); \
public: \
	DECLARE_CLASS(ATrackedObject, AInteractableObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Plugin_AdventureRoom"), NO_API) \
	DECLARE_SERIALIZER(ATrackedObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrackedObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrackedObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrackedObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrackedObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrackedObject(ATrackedObject&&); \
	NO_API ATrackedObject(const ATrackedObject&); \
public:


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrackedObject(ATrackedObject&&); \
	NO_API ATrackedObject(const ATrackedObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrackedObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrackedObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrackedObject)


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AlertLevel() { return STRUCT_OFFSET(ATrackedObject, AlertLevel); }


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_13_PROLOG \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_EVENT_PARMS


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_PRIVATE_PROPERTY_OFFSET \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_RPC_WRAPPERS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_CALLBACK_WRAPPERS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_INCLASS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_PRIVATE_PROPERTY_OFFSET \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_CALLBACK_WRAPPERS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_INCLASS_NO_PURE_DECLS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_TrackedObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
