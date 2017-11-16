// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AStaticMeshActor;
struct FVector;
struct FMeshInfo;
class UStaticMesh;
#ifdef PLUGIN_ADVENTUREROOM_RoomTool_generated_h
#error "RoomTool.generated.h already included, missing '#pragma once' in RoomTool.h"
#endif
#define PLUGIN_ADVENTUREROOM_RoomTool_generated_h

#define Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_57_GENERATED_BODY \
	friend PLUGIN_ADVENTUREROOM_API class UScriptStruct* Z_Construct_UScriptStruct_FRoomExtention(); \
	PLUGIN_ADVENTUREROOM_API static class UScriptStruct* StaticStruct();


#define Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_31_GENERATED_BODY \
	friend PLUGIN_ADVENTUREROOM_API class UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo(); \
	PLUGIN_ADVENTUREROOM_API static class UScriptStruct* StaticStruct();


#define Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMobility_Movable) \
	{ \
		P_GET_OBJECT(AStaticMeshActor,Z_Param_mesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMobility_Movable(Z_Param_mesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToStaticMeshActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ConvertToStaticMeshActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCornerPieces) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddCornerPieces(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddExtentions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddExtentions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDoors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddDoors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddWall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddWall(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainRoomBoxExtents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetMainRoomBoxExtents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateBoundingBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CreateBoundingBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWallInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMeshInfo*)Z_Param__Result=this->GetWallInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateMeshInfo) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMeshInfo*)Z_Param__Result=this->GenerateMeshInfo(Z_Param_mesh); \
		P_NATIVE_END; \
	}


#define Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMobility_Movable) \
	{ \
		P_GET_OBJECT(AStaticMeshActor,Z_Param_mesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetMobility_Movable(Z_Param_mesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToStaticMeshActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ConvertToStaticMeshActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCornerPieces) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddCornerPieces(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddExtentions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddExtentions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDoors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddDoors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddWall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddWall(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainRoomBoxExtents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetMainRoomBoxExtents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateBoundingBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CreateBoundingBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWallInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMeshInfo*)Z_Param__Result=this->GetWallInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateMeshInfo) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMeshInfo*)Z_Param__Result=this->GenerateMeshInfo(Z_Param_mesh); \
		P_NATIVE_END; \
	}


#define Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoomTool(); \
	friend PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_ARoomTool(); \
public: \
	DECLARE_CLASS(ARoomTool, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Plugin_AdventureRoom"), NO_API) \
	DECLARE_SERIALIZER(ARoomTool) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_INCLASS \
private: \
	static void StaticRegisterNativesARoomTool(); \
	friend PLUGIN_ADVENTUREROOM_API class UClass* Z_Construct_UClass_ARoomTool(); \
public: \
	DECLARE_CLASS(ARoomTool, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Plugin_AdventureRoom"), NO_API) \
	DECLARE_SERIALIZER(ARoomTool) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARoomTool(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARoomTool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoomTool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoomTool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoomTool(ARoomTool&&); \
	NO_API ARoomTool(const ARoomTool&); \
public:


#define Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoomTool(ARoomTool&&); \
	NO_API ARoomTool(const ARoomTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoomTool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoomTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoomTool)


#define Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_PRIVATE_PROPERTY_OFFSET
#define Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_81_PROLOG
#define Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_PRIVATE_PROPERTY_OFFSET \
	Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_RPC_WRAPPERS \
	Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_INCLASS \
	Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_PRIVATE_PROPERTY_OFFSET \
	Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_INCLASS_NO_PURE_DECLS \
	Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Engine_Plug_in_Plugins_Plugin_AdventureRoom_Source_Plugin_AdventureRoom_Public_RoomTool_h


#define FOREACH_ENUM_EMESHDISPLACEMENT(op) \
	op(EMeshDisplacement::PositiveDisplacement) \
	op(EMeshDisplacement::NegativeDisplacement) \
	op(EMeshDisplacement::Centered) 
#define FOREACH_ENUM_EAXISDIRECTION(op) \
	op(EAxisDirection::YAxis) \
	op(EAxisDirection::XAxis) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
