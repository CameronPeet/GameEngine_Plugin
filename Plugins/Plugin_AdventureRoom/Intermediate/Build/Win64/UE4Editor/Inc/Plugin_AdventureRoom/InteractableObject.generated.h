// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PLUGIN_ADVENTUREROOM_InteractableObject_generated_h
#error "InteractableObject.generated.h already included, missing '#pragma once' in InteractableObject.h"
#endif
#define PLUGIN_ADVENTUREROOM_InteractableObject_generated_h

#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_RPC_WRAPPERS \
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


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->Interact_Implementation(Z_Param_ActorInstigator); \
		P_NATIVE_END; \
	}


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_EVENT_PARMS \
	struct InteractableObject_eventInteract_Parms \
	{ \
		AActor* ActorInstigator; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractableObject_eventInteract_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_CALLBACK_WRAPPERS
#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableObject(); \
	friend PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_AInteractableObject(); \
public: \
	DECLARE_CLASS(AInteractableObject, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Plugin_AdventureRoom"), NO_API) \
	DECLARE_SERIALIZER(AInteractableObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInteractableObject(); \
	friend PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_AInteractableObject(); \
public: \
	DECLARE_CLASS(AInteractableObject, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Plugin_AdventureRoom"), NO_API) \
	DECLARE_SERIALIZER(AInteractableObject) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractableObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractableObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableObject(AInteractableObject&&); \
	NO_API AInteractableObject(const AInteractableObject&); \
public:


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableObject(AInteractableObject&&); \
	NO_API AInteractableObject(const AInteractableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableObject)


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_PRIVATE_PROPERTY_OFFSET
#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_9_PROLOG \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_EVENT_PARMS


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_RPC_WRAPPERS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_CALLBACK_WRAPPERS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_INCLASS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_CALLBACK_WRAPPERS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_INCLASS_NO_PURE_DECLS \
	Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Engine_Plugin_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_InteractableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
