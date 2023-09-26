// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PVZ_DEFENSE_PvZ_DefenseProjectile_generated_h
#error "PvZ_DefenseProjectile.generated.h already included, missing '#pragma once' in PvZ_DefenseProjectile.h"
#endif
#define PVZ_DEFENSE_PvZ_DefenseProjectile_generated_h

#define PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_SPARSE_DATA
#define PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPvZ_DefenseProjectile(); \
	friend struct Z_Construct_UClass_APvZ_DefenseProjectile_Statics; \
public: \
	DECLARE_CLASS(APvZ_DefenseProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZ_Defense"), NO_API) \
	DECLARE_SERIALIZER(APvZ_DefenseProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPvZ_DefenseProjectile(); \
	friend struct Z_Construct_UClass_APvZ_DefenseProjectile_Statics; \
public: \
	DECLARE_CLASS(APvZ_DefenseProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZ_Defense"), NO_API) \
	DECLARE_SERIALIZER(APvZ_DefenseProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APvZ_DefenseProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APvZ_DefenseProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APvZ_DefenseProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APvZ_DefenseProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APvZ_DefenseProjectile(APvZ_DefenseProjectile&&); \
	NO_API APvZ_DefenseProjectile(const APvZ_DefenseProjectile&); \
public:


#define PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APvZ_DefenseProjectile(APvZ_DefenseProjectile&&); \
	NO_API APvZ_DefenseProjectile(const APvZ_DefenseProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APvZ_DefenseProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APvZ_DefenseProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APvZ_DefenseProjectile)


#define PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APvZ_DefenseProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APvZ_DefenseProjectile, ProjectileMovement); }


#define PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_12_PROLOG
#define PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_SPARSE_DATA \
	PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_RPC_WRAPPERS \
	PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_INCLASS \
	PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_SPARSE_DATA \
	PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_INCLASS_NO_PURE_DECLS \
	PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_DEFENSE_API UClass* StaticClass<class APvZ_DefenseProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PvZ_Defense_Source_PvZ_Defense_PvZ_DefenseProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
