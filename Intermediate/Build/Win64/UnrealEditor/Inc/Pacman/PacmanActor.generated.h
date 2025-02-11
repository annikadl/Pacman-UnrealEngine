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
struct FHitResult;
#ifdef PACMAN_PacmanActor_generated_h
#error "PacmanActor.generated.h already included, missing '#pragma once' in PacmanActor.h"
#endif
#define PACMAN_PacmanActor_generated_h

#define FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_SPARSE_DATA
#define FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSpeedBoostTimerExpired); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSpeedBoostTimerExpired); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacmanActor(); \
	friend struct Z_Construct_UClass_APacmanActor_Statics; \
public: \
	DECLARE_CLASS(APacmanActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(APacmanActor)


#define FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPacmanActor(); \
	friend struct Z_Construct_UClass_APacmanActor_Statics; \
public: \
	DECLARE_CLASS(APacmanActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(APacmanActor)


#define FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacmanActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacmanActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacmanActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacmanActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacmanActor(APacmanActor&&); \
	NO_API APacmanActor(const APacmanActor&); \
public:


#define FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacmanActor(APacmanActor&&); \
	NO_API APacmanActor(const APacmanActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacmanActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacmanActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APacmanActor)


#define FID_Pacman2_Source_Pacman_Public_PacmanActor_h_13_PROLOG
#define FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_SPARSE_DATA \
	FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_RPC_WRAPPERS \
	FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_INCLASS \
	FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_SPARSE_DATA \
	FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Pacman2_Source_Pacman_Public_PacmanActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class APacmanActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pacman2_Source_Pacman_Public_PacmanActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
