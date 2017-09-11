// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USocket;
enum class EOpenVibeStimulations : uint8;
#ifdef UE4OPENVIBETCP_UE4OpenVibeTCPBPLibrary_generated_h
#error "UE4OpenVibeTCPBPLibrary.generated.h already included, missing '#pragma once' in UE4OpenVibeTCPBPLibrary.h"
#endif
#define UE4OPENVIBETCP_UE4OpenVibeTCPBPLibrary_generated_h

#define MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseConnection) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UUE4OpenVibeTCPBPLibrary::CloseConnection(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStimulation) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_GET_ENUM(EOpenVibeStimulations,Z_Param_Stimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UUE4OpenVibeTCPBPLibrary::SendStimulation(Z_Param_Connection,EOpenVibeStimulations(Z_Param_Stimulation)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendOtherStimulation) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Stimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UUE4OpenVibeTCPBPLibrary::SendOtherStimulation(Z_Param_Connection,Z_Param_Stimulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_port); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USocket**)Z_Param__Result=UUE4OpenVibeTCPBPLibrary::Connect(Z_Param_IP,Z_Param_port,Z_Param_Out_success); \
		P_NATIVE_END; \
	}


#define MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseConnection) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UUE4OpenVibeTCPBPLibrary::CloseConnection(Z_Param_Connection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendStimulation) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_GET_ENUM(EOpenVibeStimulations,Z_Param_Stimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UUE4OpenVibeTCPBPLibrary::SendStimulation(Z_Param_Connection,EOpenVibeStimulations(Z_Param_Stimulation)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendOtherStimulation) \
	{ \
		P_GET_OBJECT(USocket,Z_Param_Connection); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Stimulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UUE4OpenVibeTCPBPLibrary::SendOtherStimulation(Z_Param_Connection,Z_Param_Stimulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnect) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_port); \
		P_GET_UBOOL_REF(Z_Param_Out_success); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USocket**)Z_Param__Result=UUE4OpenVibeTCPBPLibrary::Connect(Z_Param_IP,Z_Param_port,Z_Param_Out_success); \
		P_NATIVE_END; \
	}


#define MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUE4OpenVibeTCPBPLibrary(); \
	friend UE4OPENVIBETCP_API class UClass* Z_Construct_UClass_UUE4OpenVibeTCPBPLibrary(); \
public: \
	DECLARE_CLASS(UUE4OpenVibeTCPBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UE4OpenVibeTCP"), NO_API) \
	DECLARE_SERIALIZER(UUE4OpenVibeTCPBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_INCLASS \
private: \
	static void StaticRegisterNativesUUE4OpenVibeTCPBPLibrary(); \
	friend UE4OPENVIBETCP_API class UClass* Z_Construct_UClass_UUE4OpenVibeTCPBPLibrary(); \
public: \
	DECLARE_CLASS(UUE4OpenVibeTCPBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UE4OpenVibeTCP"), NO_API) \
	DECLARE_SERIALIZER(UUE4OpenVibeTCPBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUE4OpenVibeTCPBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUE4OpenVibeTCPBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUE4OpenVibeTCPBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUE4OpenVibeTCPBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUE4OpenVibeTCPBPLibrary(UUE4OpenVibeTCPBPLibrary&&); \
	NO_API UUE4OpenVibeTCPBPLibrary(const UUE4OpenVibeTCPBPLibrary&); \
public:


#define MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUE4OpenVibeTCPBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUE4OpenVibeTCPBPLibrary(UUE4OpenVibeTCPBPLibrary&&); \
	NO_API UUE4OpenVibeTCPBPLibrary(const UUE4OpenVibeTCPBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUE4OpenVibeTCPBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUE4OpenVibeTCPBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUE4OpenVibeTCPBPLibrary)


#define MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_PRIVATE_PROPERTY_OFFSET
#define MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_240_PROLOG
#define MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_PRIVATE_PROPERTY_OFFSET \
	MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_RPC_WRAPPERS \
	MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_INCLASS \
	MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_PRIVATE_PROPERTY_OFFSET \
	MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_INCLASS_NO_PURE_DECLS \
	MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h_243_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UE4OpenVibeTCPBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProjectf_Plugins_UE4OpenVibeTCP_Source_UE4OpenVibeTCP_Public_UE4OpenVibeTCPBPLibrary_h


#define FOREACH_ENUM_EOPENVIBESTIMULATIONS(op) \
	op(EOpenVibeStimulations::OVTK_StimulationId_BaselineStart) \
	op(EOpenVibeStimulations::OVTK_StimulationId_BaselineStop) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Beep) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Button1_Pressed) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Button1_Released) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Button2_Pressed) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Button2_Released) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Button3_Pressed) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Button3_Released) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Button4_Pressed) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Button4_Released) \
	op(EOpenVibeStimulations::OVTK_StimulationId_DoubleBeep) \
	op(EOpenVibeStimulations::OVTK_StimulationId_EndOfFile) \
	op(EOpenVibeStimulations::OVTK_StimulationId_ExperimentStart) \
	op(EOpenVibeStimulations::OVTK_StimulationId_ExperimentStop) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_00) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_01) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_02) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_03) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_04) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_05) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_06) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_07) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_08) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_09) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_0A) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_0B) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_0C) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_0D) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_0E) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_0F) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_10) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_11) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_12) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_13) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_14) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_15) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_16) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_17) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_18) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_19) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_1A) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_1B) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_1C) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_1D) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_1E) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Label_1F) \
	op(EOpenVibeStimulations::OVTK_StimulationId_NonTarget) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_00) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_01) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_02) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_03) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_04) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_05) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_06) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_07) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_08) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_09) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_0A) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_0B) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_0C) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_0D) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_0E) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_0F) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_10) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_11) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_12) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_13) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_14) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_15) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_16) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_17) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_18) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_19) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_1A) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_1B) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_1C) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_1D) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_1E) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Number_1F) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Reset) \
	op(EOpenVibeStimulations::OVTK_StimulationId_RestStart) \
	op(EOpenVibeStimulations::OVTK_StimulationId_RestStop) \
	op(EOpenVibeStimulations::OVTK_StimulationId_SegmentStart) \
	op(EOpenVibeStimulations::OVTK_StimulationId_SegmentStop) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Target) \
	op(EOpenVibeStimulations::OVTK_StimulationId_Train) \
	op(EOpenVibeStimulations::OVTK_StimulationId_TrainCompleted) \
	op(EOpenVibeStimulations::OVTK_StimulationId_TrialStart) \
	op(EOpenVibeStimulations::OVTK_StimulationId_TrialStop) \
	op(EOpenVibeStimulations::OVTK_StimulationId_VisualSteadyStateStimulationStart) \
	op(EOpenVibeStimulations::OVTK_StimulationId_VisualSteadyStateStimulationStop) \
	op(EOpenVibeStimulations::OVTK_StimulationId_VisualStimulationStart) \
	op(EOpenVibeStimulations::OVTK_StimulationId_VisualStimulationStop) \
	op(EOpenVibeStimulations::OVTK_GDF_Artifact_EOG_Large) \
	op(EOpenVibeStimulations::OVTK_GDF_Artifact_ECG) \
	op(EOpenVibeStimulations::OVTK_GDF_Artifact_EMG) \
	op(EOpenVibeStimulations::OVTK_GDF_Artifact_Movement) \
	op(EOpenVibeStimulations::OVTK_GDF_Artifact_Failing_Electrode) \
	op(EOpenVibeStimulations::OVTK_GDF_Artifact_Sweat) \
	op(EOpenVibeStimulations::OVTK_GDF_Artifact_50_60_Hz_Interference) \
	op(EOpenVibeStimulations::OVTK_GDF_Artifact_Breathing) \
	op(EOpenVibeStimulations::OVTK_GDF_Artifact_Pulse) \
	op(EOpenVibeStimulations::OVTK_GDF_Artifact_EOG_Small) \
	op(EOpenVibeStimulations::OVTK_GDF_Calibration) \
	op(EOpenVibeStimulations::OVTK_GDF_EEG_Sleep_Splindles) \
	op(EOpenVibeStimulations::OVTK_GDF_EEG_K_Complexes) \
	op(EOpenVibeStimulations::OVTK_GDF_EEG_Saw_Tooth_Waves) \
	op(EOpenVibeStimulations::OVTK_GDF_EEG_Idling_EEG_Eyes_Open) \
	op(EOpenVibeStimulations::OVTK_GDF_EEG_Idling_EEG_Eyes_Closed) \
	op(EOpenVibeStimulations::OVTK_GDF_EEG_Spike) \
	op(EOpenVibeStimulations::OVTK_GDF_EEG_Seizure) \
	op(EOpenVibeStimulations::OVTK_GDF_VEP) \
	op(EOpenVibeStimulations::OVTK_GDF_AEP) \
	op(EOpenVibeStimulations::OVTK_GDF_SEP) \
	op(EOpenVibeStimulations::OVTK_GDF_TMS) \
	op(EOpenVibeStimulations::OVTK_GDF_SSVEP) \
	op(EOpenVibeStimulations::OVTK_GDF_SSAEP) \
	op(EOpenVibeStimulations::OVTK_GDF_SSSEP) \
	op(EOpenVibeStimulations::OVTK_GDF_Start_Of_Trial) \
	op(EOpenVibeStimulations::OVTK_GDF_Left) \
	op(EOpenVibeStimulations::OVTK_GDF_Right) \
	op(EOpenVibeStimulations::OVTK_GDF_Foot) \
	op(EOpenVibeStimulations::OVTK_GDF_Tongue) \
	op(EOpenVibeStimulations::OVTK_GDF_class5) \
	op(EOpenVibeStimulations::OVTK_GDF_Down) \
	op(EOpenVibeStimulations::OVTK_GDF_class7) \
	op(EOpenVibeStimulations::OVTK_GDF_class8) \
	op(EOpenVibeStimulations::OVTK_GDF_class9) \
	op(EOpenVibeStimulations::OVTK_GDF_class10) \
	op(EOpenVibeStimulations::OVTK_GDF_class11) \
	op(EOpenVibeStimulations::OVTK_GDF_Up) \
	op(EOpenVibeStimulations::OVTK_GDF_Feedback_Continuous) \
	op(EOpenVibeStimulations::OVTK_GDF_Feedback_Discrete) \
	op(EOpenVibeStimulations::OVTK_GDF_Cue_Unknown_Undefined) \
	op(EOpenVibeStimulations::OVTK_GDF_Beep) \
	op(EOpenVibeStimulations::OVTK_GDF_Cross_On_Screen) \
	op(EOpenVibeStimulations::OVTK_GDF_Flashing_Light) \
	op(EOpenVibeStimulations::OVTK_GDF_End_Of_Trial) \
	op(EOpenVibeStimulations::OVTK_GDF_Correct) \
	op(EOpenVibeStimulations::OVTK_GDF_Incorrect) \
	op(EOpenVibeStimulations::OVTK_GDF_End_Of_Session) \
	op(EOpenVibeStimulations::OVTK_GDF_Rejection) \
	op(EOpenVibeStimulations::OVTK_GDF_OAHE) \
	op(EOpenVibeStimulations::OVTK_GDF_RERA) \
	op(EOpenVibeStimulations::OVTK_GDF_CAHE) \
	op(EOpenVibeStimulations::OVTK_GDF_CSB) \
	op(EOpenVibeStimulations::OVTK_GDF_Sleep_Hypoventilation) \
	op(EOpenVibeStimulations::OVTK_GDF_Maximum_Inspiration) \
	op(EOpenVibeStimulations::OVTK_GDF_Start_Of_Inspiration) \
	op(EOpenVibeStimulations::OVTK_GDF_Wake) \
	op(EOpenVibeStimulations::OVTK_GDF_Stage_1) \
	op(EOpenVibeStimulations::OVTK_GDF_Stage_2) \
	op(EOpenVibeStimulations::OVTK_GDF_Stage_3) \
	op(EOpenVibeStimulations::OVTK_GDF_Stage_4) \
	op(EOpenVibeStimulations::OVTK_GDF_REM) \
	op(EOpenVibeStimulations::OVTK_GDF_Lights_On) \
	op(EOpenVibeStimulations::OVTK_GDF_Lights_Off) \
	op(EOpenVibeStimulations::OVTK_GDF_Eyes_Left) \
	op(EOpenVibeStimulations::OVTK_GDF_Eyes_Right) \
	op(EOpenVibeStimulations::OVTK_GDF_Eyes_Up) \
	op(EOpenVibeStimulations::OVTK_GDF_Eyes_Down) \
	op(EOpenVibeStimulations::OVTK_GDF_Horizontal_Eye_Movement) \
	op(EOpenVibeStimulations::OVTK_GDF_Vertical_Eye_Movement) \
	op(EOpenVibeStimulations::OVTK_GDF_Rotation_Clockwise) \
	op(EOpenVibeStimulations::OVTK_GDF_Rotation_Counterclockwise) \
	op(EOpenVibeStimulations::OVTK_GDF_Eye_Blink) \
	op(EOpenVibeStimulations::OVTK_GDF_Left_Hand_Movement) \
	op(EOpenVibeStimulations::OVTK_GDF_Right_Hand_Movement) \
	op(EOpenVibeStimulations::OVTK_GDF_Head_Movement) \
	op(EOpenVibeStimulations::OVTK_GDF_Tongue_Movement) \
	op(EOpenVibeStimulations::OVTK_GDF_Swallowing) \
	op(EOpenVibeStimulations::OVTK_GDF_Biting) \
	op(EOpenVibeStimulations::OVTK_GDF_Foot_Movement) \
	op(EOpenVibeStimulations::OVTK_GDF_Foot_Right_Movement) \
	op(EOpenVibeStimulations::OVTK_GDF_Arm_Movement) \
	op(EOpenVibeStimulations::OVTK_GDF_Arm_Right_Movement) \
	op(EOpenVibeStimulations::OVTK_GDF_ECG_Fiducial_Point_QRS_Complex) \
	op(EOpenVibeStimulations::OVTK_GDF_ECG_P_Wave) \
	op(EOpenVibeStimulations::OVTK_GDF_ECG_QRS_Complex) \
	op(EOpenVibeStimulations::OVTK_GDF_ECG_R_Point) \
	op(EOpenVibeStimulations::OVTK_GDF_ECG_T_Wave) \
	op(EOpenVibeStimulations::OVTK_GDF_ECG_U_Wave) \
	op(EOpenVibeStimulations::OVTK_GDF_Start) \
	op(EOpenVibeStimulations::OVTK_GDF_25_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_50_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_75_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_100_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_125_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_150_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_175_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_200_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_225_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_250_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_275_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_300_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_325_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_350_Watt) \
	op(EOpenVibeStimulations::OVTK_GDF_Start_Of_New_Segment) \
	op(EOpenVibeStimulations::OVTK_GDF_Non_Equidistant_Sampling_Value) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
