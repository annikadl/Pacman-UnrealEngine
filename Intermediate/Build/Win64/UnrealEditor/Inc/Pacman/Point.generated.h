// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAN_Point_generated_h
#error "Point.generated.h already included, missing '#pragma once' in Point.h"
#endif
#define PACMAN_Point_generated_h

#define FID_Pacman2_Source_Pacman_Public_Point_h_19_SPARSE_DATA
#define FID_Pacman2_Source_Pacman_Public_Point_h_19_RPC_WRAPPERS
#define FID_Pacman2_Source_Pacman_Public_Point_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Pacman2_Source_Pacman_Public_Point_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPoint(); \
	friend struct Z_Construct_UClass_APoint_Statics; \
public: \
	DECLARE_CLASS(APoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(APoint)


#define FID_Pacman2_Source_Pacman_Public_Point_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPoint(); \
	friend struct Z_Construct_UClass_APoint_Statics; \
public: \
	DECLARE_CLASS(APoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pacman"), NO_API) \
	DECLARE_SERIALIZER(APoint)


#define FID_Pacman2_Source_Pacman_Public_Point_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APoint(APoint&&); \
	NO_API APoint(const APoint&); \
public:


#define FID_Pacman2_Source_Pacman_Public_Point_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APoint(APoint&&); \
	NO_API APoint(const APoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APoint)


#define FID_Pacman2_Source_Pacman_Public_Point_h_16_PROLOG
#define FID_Pacman2_Source_Pacman_Public_Point_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman2_Source_Pacman_Public_Point_h_19_SPARSE_DATA \
	FID_Pacman2_Source_Pacman_Public_Point_h_19_RPC_WRAPPERS \
	FID_Pacman2_Source_Pacman_Public_Point_h_19_INCLASS \
	FID_Pacman2_Source_Pacman_Public_Point_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pacman2_Source_Pacman_Public_Point_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pacman2_Source_Pacman_Public_Point_h_19_SPARSE_DATA \
	FID_Pacman2_Source_Pacman_Public_Point_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pacman2_Source_Pacman_Public_Point_h_19_INCLASS_NO_PURE_DECLS \
	FID_Pacman2_Source_Pacman_Public_Point_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PACMAN_API UClass* StaticClass<class APoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pacman2_Source_Pacman_Public_Point_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
