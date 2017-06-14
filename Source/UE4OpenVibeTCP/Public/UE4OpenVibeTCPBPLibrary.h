// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine.h"
#include "Socket.h"
#include "Runtime/Networking/Public/Networking.h"
#include "Runtime/Sockets/Public/Sockets.h"
#include "Runtime/Sockets/Public/SocketSubsystem.h"
#include "UE4OpenVibeTCPBPLibrary.generated.h"

UENUM(Blueprintable)
enum class EOpenVibeStimulations : uint8
{
	OVTK_StimulationId_BaselineStart							UMETA(DisplayName = "OVTK_StimulationId_BaselineStart"),
	OVTK_StimulationId_BaselineStop								UMETA(DisplayName = "OVTK_StimulationId_BaselineStop"),
	OVTK_StimulationId_Beep										UMETA(DisplayName = "OVTK_StimulationId_Beep"),
	OVTK_StimulationId_Button1_Pressed							UMETA(DisplayName = "OVTK_StimulationId_Button1_Pressed"),
	OVTK_StimulationId_Button1_Released							UMETA(DisplayName = "OVTK_StimulationId_Button1_Released"),
	OVTK_StimulationId_Button2_Pressed							UMETA(DisplayName = "OVTK_StimulationId_Button2_Pressed"),
	OVTK_StimulationId_Button2_Released							UMETA(DisplayName = "OVTK_StimulationId_Button2_Released"),
	OVTK_StimulationId_Button3_Pressed							UMETA(DisplayName = "OVTK_StimulationId_Button3_Pressed"),
	OVTK_StimulationId_Button3_Released							UMETA(DisplayName = "OVTK_StimulationId_Button3_Released"),
	OVTK_StimulationId_Button4_Pressed							UMETA(DisplayName = "OVTK_StimulationId_Button4_Pressed"),
	OVTK_StimulationId_Button4_Released							UMETA(DisplayName = "OVTK_StimulationId_Button4_Released"),
	OVTK_StimulationId_DoubleBeep								UMETA(DisplayName = "OVTK_StimulationId_DoubleBeep"),
	OVTK_StimulationId_EndOfFile								UMETA(DisplayName = "OVTK_StimulationId_EndOfFile"),
	OVTK_StimulationId_ExperimentStart							UMETA(DisplayName = "OVTK_StimulationId_ExperimentStart"),
	OVTK_StimulationId_ExperimentStop							UMETA(DisplayName = "OVTK_StimulationId_ExperimentStop"),
	OVTK_StimulationId_Label_00									UMETA(DisplayName = "OVTK_StimulationId_Label_00"),
	OVTK_StimulationId_Label_01									UMETA(DisplayName = "OVTK_StimulationId_Label_01"),
	OVTK_StimulationId_Label_02									UMETA(DisplayName = "OVTK_StimulationId_Label_02"),
	OVTK_StimulationId_Label_03									UMETA(DisplayName = "OVTK_StimulationId_Label_03"),
	OVTK_StimulationId_Label_04									UMETA(DisplayName = "OVTK_StimulationId_Label_04"),
	OVTK_StimulationId_Label_05									UMETA(DisplayName = "OVTK_StimulationId_Label_05"),
	OVTK_StimulationId_Label_06									UMETA(DisplayName = "OVTK_StimulationId_Label_06"),
	OVTK_StimulationId_Label_07									UMETA(DisplayName = "OVTK_StimulationId_Label_07"),
	OVTK_StimulationId_Label_08									UMETA(DisplayName = "OVTK_StimulationId_Label_08"),
	OVTK_StimulationId_Label_09									UMETA(DisplayName = "OVTK_StimulationId_Label_09"),
	OVTK_StimulationId_Label_0A									UMETA(DisplayName = "OVTK_StimulationId_Label_0A"),
	OVTK_StimulationId_Label_0B									UMETA(DisplayName = "OVTK_StimulationId_Label_0B"),
	OVTK_StimulationId_Label_0C									UMETA(DisplayName = "OVTK_StimulationId_Label_0C"),
	OVTK_StimulationId_Label_0D									UMETA(DisplayName = "OVTK_StimulationId_Label_0D"),
	OVTK_StimulationId_Label_0E									UMETA(DisplayName = "OVTK_StimulationId_Label_0E"),
	OVTK_StimulationId_Label_0F									UMETA(DisplayName = "OVTK_StimulationId_Label_0F"),
	OVTK_StimulationId_Label_10									UMETA(DisplayName = "OVTK_StimulationId_Label_10"),
	OVTK_StimulationId_Label_11									UMETA(DisplayName = "OVTK_StimulationId_Label_11"),
	OVTK_StimulationId_Label_12									UMETA(DisplayName = "OVTK_StimulationId_Label_12"),
	OVTK_StimulationId_Label_13									UMETA(DisplayName = "OVTK_StimulationId_Label_13"),
	OVTK_StimulationId_Label_14									UMETA(DisplayName = "OVTK_StimulationId_Label_14"),
	OVTK_StimulationId_Label_15									UMETA(DisplayName = "OVTK_StimulationId_Label_15"),
	OVTK_StimulationId_Label_16									UMETA(DisplayName = "OVTK_StimulationId_Label_16"),
	OVTK_StimulationId_Label_17									UMETA(DisplayName = "OVTK_StimulationId_Label_17"),
	OVTK_StimulationId_Label_18									UMETA(DisplayName = "OVTK_StimulationId_Label_18"),
	OVTK_StimulationId_Label_19									UMETA(DisplayName = "OVTK_StimulationId_Label_19"),
	OVTK_StimulationId_Label_1A									UMETA(DisplayName = "OVTK_StimulationId_Label_1A"),
	OVTK_StimulationId_Label_1B									UMETA(DisplayName = "OVTK_StimulationId_Label_1B"),
	OVTK_StimulationId_Label_1C									UMETA(DisplayName = "OVTK_StimulationId_Label_1C"),
	OVTK_StimulationId_Label_1D									UMETA(DisplayName = "OVTK_StimulationId_Label_1D"),
	OVTK_StimulationId_Label_1E									UMETA(DisplayName = "OVTK_StimulationId_Label_1E"),
	OVTK_StimulationId_Label_1F									UMETA(DisplayName = "OVTK_StimulationId_Label_1F"),
//	OVTK_StimulationId_LabelEnd									UMETA(DisplayName = "OVTK_StimulationId_LabelEnd"),
//	OVTK_StimulationId_LabelStart								UMETA(DisplayName = "OVTK_StimulationId_LabelStart"),
	OVTK_StimulationId_NonTarget								UMETA(DisplayName = "OVTK_StimulationId_NonTarget"),
	OVTK_StimulationId_Number_00								UMETA(DisplayName = "OVTK_StimulationId_Number_00"),
	OVTK_StimulationId_Number_01								UMETA(DisplayName = "OVTK_StimulationId_Number_01"),
	OVTK_StimulationId_Number_02								UMETA(DisplayName = "OVTK_StimulationId_Number_02"),
	OVTK_StimulationId_Number_03								UMETA(DisplayName = "OVTK_StimulationId_Number_03"),
	OVTK_StimulationId_Number_04								UMETA(DisplayName = "OVTK_StimulationId_Number_04"),
	OVTK_StimulationId_Number_05								UMETA(DisplayName = "OVTK_StimulationId_Number_05"),
	OVTK_StimulationId_Number_06								UMETA(DisplayName = "OVTK_StimulationId_Number_06"),
	OVTK_StimulationId_Number_07								UMETA(DisplayName = "OVTK_StimulationId_Number_07"),
	OVTK_StimulationId_Number_08								UMETA(DisplayName = "OVTK_StimulationId_Number_08"),
	OVTK_StimulationId_Number_09								UMETA(DisplayName = "OVTK_StimulationId_Number_09"),
	OVTK_StimulationId_Number_0A								UMETA(DisplayName = "OVTK_StimulationId_Number_0A"),
	OVTK_StimulationId_Number_0B								UMETA(DisplayName = "OVTK_StimulationId_Number_0B"),
	OVTK_StimulationId_Number_0C								UMETA(DisplayName = "OVTK_StimulationId_Number_0C"),
	OVTK_StimulationId_Number_0D								UMETA(DisplayName = "OVTK_StimulationId_Number_0D"),
	OVTK_StimulationId_Number_0E								UMETA(DisplayName = "OVTK_StimulationId_Number_0E"),
	OVTK_StimulationId_Number_0F								UMETA(DisplayName = "OVTK_StimulationId_Number_0F"),
	OVTK_StimulationId_Number_10								UMETA(DisplayName = "OVTK_StimulationId_Number_10"),
	OVTK_StimulationId_Number_11								UMETA(DisplayName = "OVTK_StimulationId_Number_11"),
	OVTK_StimulationId_Number_12								UMETA(DisplayName = "OVTK_StimulationId_Number_12"),
	OVTK_StimulationId_Number_13								UMETA(DisplayName = "OVTK_StimulationId_Number_13"),
	OVTK_StimulationId_Number_14								UMETA(DisplayName = "OVTK_StimulationId_Number_14"),
	OVTK_StimulationId_Number_15								UMETA(DisplayName = "OVTK_StimulationId_Number_15"),
	OVTK_StimulationId_Number_16								UMETA(DisplayName = "OVTK_StimulationId_Number_16"),
	OVTK_StimulationId_Number_17								UMETA(DisplayName = "OVTK_StimulationId_Number_17"),
	OVTK_StimulationId_Number_18								UMETA(DisplayName = "OVTK_StimulationId_Number_18"),
	OVTK_StimulationId_Number_19								UMETA(DisplayName = "OVTK_StimulationId_Number_19"),
	OVTK_StimulationId_Number_1A								UMETA(DisplayName = "OVTK_StimulationId_Number_1A"),
	OVTK_StimulationId_Number_1B								UMETA(DisplayName = "OVTK_StimulationId_Number_1B"),
	OVTK_StimulationId_Number_1C								UMETA(DisplayName = "OVTK_StimulationId_Number_1C"),
	OVTK_StimulationId_Number_1D								UMETA(DisplayName = "OVTK_StimulationId_Number_1D"),
	OVTK_StimulationId_Number_1E								UMETA(DisplayName = "OVTK_StimulationId_Number_1E"),
	OVTK_StimulationId_Number_1F								UMETA(DisplayName = "OVTK_StimulationId_Number_1F"),
//	OVTK_StimulationId_NumberEnd								UMETA(DisplayName = "OVTK_StimulationId_NumberEnd"),
//	OVTK_StimulationId_NumberStart								UMETA(DisplayName = "OVTK_StimulationId_NumberStart"),
	OVTK_StimulationId_Reset									UMETA(DisplayName = "OVTK_StimulationId_Reset"),
	OVTK_StimulationId_RestStart								UMETA(DisplayName = "OVTK_StimulationId_RestStart"),
	OVTK_StimulationId_RestStop									UMETA(DisplayName = "OVTK_StimulationId_RestStop"),
	OVTK_StimulationId_SegmentStart								UMETA(DisplayName = "OVTK_StimulationId_SegmentStart"),
	OVTK_StimulationId_SegmentStop								UMETA(DisplayName = "OVTK_StimulationId_SegmentStop"),
	OVTK_StimulationId_Target									UMETA(DisplayName = "OVTK_StimulationId_Target"),
	OVTK_StimulationId_Train									UMETA(DisplayName = "OVTK_StimulationId_Train"),
	OVTK_StimulationId_TrainCompleted							UMETA(DisplayName = "OVTK_StimulationId_TrainCompleted"),
	OVTK_StimulationId_TrialStart								UMETA(DisplayName = "OVTK_StimulationId_TrialStart"),
	OVTK_StimulationId_TrialStop								UMETA(DisplayName = "OVTK_StimulationId_TrialStop"),
	OVTK_StimulationId_VisualSteadyStateStimulationStart		UMETA(DisplayName = "OVTK_StimulationId_VisualSteadyStateStimulationStart"),
	OVTK_StimulationId_VisualSteadyStateStimulationStop			UMETA(DisplayName = "OVTK_StimulationId_VisualSteadyStateStimulationStop"),
	OVTK_StimulationId_VisualStimulationStart					UMETA(DisplayName = "OVTK_StimulationId_VisualStimulationStart"),
	OVTK_StimulationId_VisualStimulationStop					UMETA(DisplayName = "OVTK_StimulationId_VisualStimulationStop"),

	OVTK_GDF_Artifact_EOG_Large									UMETA(DisplayName = "OVTK_GDF_Artifact_EOG_Large"),
	OVTK_GDF_Artifact_ECG										UMETA(DisplayName = "OVTK_GDF_Artifact_ECG"),
	OVTK_GDF_Artifact_EMG										UMETA(DisplayName = "OVTK_GDF_Artifact_EMG"),
	OVTK_GDF_Artifact_Movement									UMETA(DisplayName = "OVTK_GDF_Artifact_Movement"),
	OVTK_GDF_Artifact_Failing_Electrode							UMETA(DisplayName = "OVTK_GDF_Artifact_Failing_Electrode"),
	OVTK_GDF_Artifact_Sweat										UMETA(DisplayName = "OVTK_GDF_Artifact_Sweat"),
	OVTK_GDF_Artifact_50_60_Hz_Interference						UMETA(DisplayName = "OVTK_GDF_Artifact_50_60_Hz_Interference"),
	OVTK_GDF_Artifact_Breathing									UMETA(DisplayName = "OVTK_GDF_Artifact_Breathing"),
	OVTK_GDF_Artifact_Pulse										UMETA(DisplayName = "OVTK_GDF_Artifact_Pulse"),
	OVTK_GDF_Artifact_EOG_Small									UMETA(DisplayName = "OVTK_GDF_Artifact_EOG_Small"),
	OVTK_GDF_Calibration										UMETA(DisplayName = "OVTK_GDF_Calibration"),
	OVTK_GDF_EEG_Sleep_Splindles								UMETA(DisplayName = "OVTK_GDF_EEG_Sleep_Splindles"),
	OVTK_GDF_EEG_K_Complexes									UMETA(DisplayName = "OVTK_GDF_EEG_K_Complexes"),
	OVTK_GDF_EEG_Saw_Tooth_Waves								UMETA(DisplayName = "OVTK_GDF_EEG_Saw_Tooth_Waves"),
	OVTK_GDF_EEG_Idling_EEG_Eyes_Open							UMETA(DisplayName = "OVTK_GDF_EEG_Idling_EEG_Eyes_Open"),
	OVTK_GDF_EEG_Idling_EEG_Eyes_Closed							UMETA(DisplayName = "OVTK_GDF_EEG_Idling_EEG_Eyes_Closed"),
	OVTK_GDF_EEG_Spike											UMETA(DisplayName = "OVTK_GDF_EEG_Spike"),
	OVTK_GDF_EEG_Seizure										UMETA(DisplayName = "OVTK_GDF_EEG_Seizure"),
	OVTK_GDF_VEP												UMETA(DisplayName = "OVTK_GDF_VEP"),
	OVTK_GDF_AEP												UMETA(DisplayName = "OVTK_GDF_AEP"),
	OVTK_GDF_SEP												UMETA(DisplayName = "OVTK_GDF_SEP"),
	OVTK_GDF_TMS												UMETA(DisplayName = "OVTK_GDF_TMS"),
	OVTK_GDF_SSVEP												UMETA(DisplayName = "OVTK_GDF_SSVEP"),
	OVTK_GDF_SSAEP												UMETA(DisplayName = "OVTK_GDF_SSAEP"),
	OVTK_GDF_SSSEP												UMETA(DisplayName = "OVTK_GDF_SSSEP"),
	OVTK_GDF_Start_Of_Trial										UMETA(DisplayName = "OVTK_GDF_Start_Of_Trial"),
	OVTK_GDF_Left												UMETA(DisplayName = "OVTK_GDF_Left"),
	OVTK_GDF_Right												UMETA(DisplayName = "OVTK_GDF_Right"),
	OVTK_GDF_Foot												UMETA(DisplayName = "OVTK_GDF_Foot"),
	OVTK_GDF_Tongue												UMETA(DisplayName = "OVTK_GDF_Tongue"),
	OVTK_GDF_class5												UMETA(DisplayName = "OVTK_GDF_class5"),
	OVTK_GDF_Down												UMETA(DisplayName = "OVTK_GDF_Down"),
	OVTK_GDF_class7												UMETA(DisplayName = "OVTK_GDF_class7"),
	OVTK_GDF_class8												UMETA(DisplayName = "OVTK_GDF_class8"),
	OVTK_GDF_class9												UMETA(DisplayName = "OVTK_GDF_class9"),
	OVTK_GDF_class10											UMETA(DisplayName = "OVTK_GDF_class10"),
	OVTK_GDF_class11											UMETA(DisplayName = "OVTK_GDF_class11"),
	OVTK_GDF_Up													UMETA(DisplayName = "OVTK_GDF_Up"),
	OVTK_GDF_Feedback_Continuous								UMETA(DisplayName = "OVTK_GDF_Feedback_Continuous"),
	OVTK_GDF_Feedback_Discrete									UMETA(DisplayName = "OVTK_GDF_Feedback_Discrete"),
	OVTK_GDF_Cue_Unknown_Undefined								UMETA(DisplayName = "OVTK_GDF_Cue_Unknown_Undefined"),
	OVTK_GDF_Beep												UMETA(DisplayName = "OVTK_GDF_Beep"),
	OVTK_GDF_Cross_On_Screen									UMETA(DisplayName = "OVTK_GDF_Cross_On_Screen"),
	OVTK_GDF_Flashing_Light										UMETA(DisplayName = "OVTK_GDF_Flashing_Light"),
	OVTK_GDF_End_Of_Trial										UMETA(DisplayName = "OVTK_GDF_End_Of_Trial"),
	OVTK_GDF_Correct											UMETA(DisplayName = "OVTK_GDF_Correct"),
	OVTK_GDF_Incorrect											UMETA(DisplayName = "OVTK_GDF_Incorrect"),
	OVTK_GDF_End_Of_Session										UMETA(DisplayName = "OVTK_GDF_End_Of_Session"),
	OVTK_GDF_Rejection											UMETA(DisplayName = "OVTK_GDF_Rejection"),
	OVTK_GDF_OAHE												UMETA(DisplayName = "OVTK_GDF_OAHE"),
	OVTK_GDF_RERA												UMETA(DisplayName = "OVTK_GDF_RERA"),
	OVTK_GDF_CAHE												UMETA(DisplayName = "OVTK_GDF_CAHE"),
	OVTK_GDF_CSB												UMETA(DisplayName = "OVTK_GDF_CSB"),
	OVTK_GDF_Sleep_Hypoventilation								UMETA(DisplayName = "OVTK_GDF_Sleep_Hypoventilation"),
	OVTK_GDF_Maximum_Inspiration								UMETA(DisplayName = "OVTK_GDF_Maximum_Inspiration"),
	OVTK_GDF_Start_Of_Inspiration								UMETA(DisplayName = "OVTK_GDF_Start_Of_Inspiration"),
	OVTK_GDF_Wake												UMETA(DisplayName = "OVTK_GDF_Wake"),
	OVTK_GDF_Stage_1											UMETA(DisplayName = "OVTK_GDF_Stage_1"),
	OVTK_GDF_Stage_2											UMETA(DisplayName = "OVTK_GDF_Stage_2"),
	OVTK_GDF_Stage_3											UMETA(DisplayName = "OVTK_GDF_Stage_3"),
	OVTK_GDF_Stage_4											UMETA(DisplayName = "OVTK_GDF_Stage_4"),
	OVTK_GDF_REM												UMETA(DisplayName = "OVTK_GDF_REM"),
	OVTK_GDF_Lights_On											UMETA(DisplayName = "OVTK_GDF_Lights_On"),
	OVTK_GDF_Lights_Off											UMETA(DisplayName = "OVTK_GDF_Lights_Off"),
	OVTK_GDF_Eyes_Left											UMETA(DisplayName = "OVTK_GDF_Eyes_Left"),
	OVTK_GDF_Eyes_Right											UMETA(DisplayName = "OVTK_GDF_Eyes_Right"),
	OVTK_GDF_Eyes_Up											UMETA(DisplayName = "OVTK_GDF_Eyes_Up"),
	OVTK_GDF_Eyes_Down											UMETA(DisplayName = "OVTK_GDF_Eyes_Down"),
	OVTK_GDF_Horizontal_Eye_Movement							UMETA(DisplayName = "OVTK_GDF_Horizontal_Eye_Movement"),
	OVTK_GDF_Vertical_Eye_Movement								UMETA(DisplayName = "OVTK_GDF_Vertical_Eye_Movement"),
	OVTK_GDF_Rotation_Clockwise									UMETA(DisplayName = "OVTK_GDF_Rotation_Clockwise"),
	OVTK_GDF_Rotation_Counterclockwise							UMETA(DisplayName = "OVTK_GDF_Rotation_Counterclockwise"),
	OVTK_GDF_Eye_Blink											UMETA(DisplayName = "OVTK_GDF_Eye_Blink"),
	OVTK_GDF_Left_Hand_Movement									UMETA(DisplayName = "OVTK_GDF_Left_Hand_Movement"),
	OVTK_GDF_Right_Hand_Movement								UMETA(DisplayName = "OVTK_GDF_Right_Hand_Movement"),
	OVTK_GDF_Head_Movement										UMETA(DisplayName = "OVTK_GDF_Head_Movement"),
	OVTK_GDF_Tongue_Movement									UMETA(DisplayName = "OVTK_GDF_Tongue_Movement"),
	OVTK_GDF_Swallowing											UMETA(DisplayName = "OVTK_GDF_Swallowing"),
	OVTK_GDF_Biting												UMETA(DisplayName = "OVTK_GDF_Biting"),
	OVTK_GDF_Foot_Movement										UMETA(DisplayName = "OVTK_GDF_Foot_Movement"),
	OVTK_GDF_Foot_Right_Movement								UMETA(DisplayName = "OVTK_GDF_Foot_Right_Movement"),
	OVTK_GDF_Arm_Movement										UMETA(DisplayName = "OVTK_GDF_Arm_Movement"),
	OVTK_GDF_Arm_Right_Movement									UMETA(DisplayName = "OVTK_GDF_Arm_Right_Movement"),
	OVTK_GDF_ECG_Fiducial_Point_QRS_Complex						UMETA(DisplayName = "OVTK_GDF_ECG_Fiducial_Point_QRS_Complex"),
	OVTK_GDF_ECG_P_Wave											UMETA(DisplayName = "OVTK_GDF_ECG_P_Wave"),
	OVTK_GDF_ECG_QRS_Complex									UMETA(DisplayName = "OVTK_GDF_ECG_QRS_Complex"),
	OVTK_GDF_ECG_R_Point										UMETA(DisplayName = "OVTK_GDF_ECG_R_Point"),
	OVTK_GDF_ECG_T_Wave											UMETA(DisplayName = "OVTK_GDF_ECG_T_Wave"),
	OVTK_GDF_ECG_U_Wave											UMETA(DisplayName = "OVTK_GDF_ECG_U_Wave"),
	OVTK_GDF_Start												UMETA(DisplayName = "OVTK_GDF_Start"),
	OVTK_GDF_25_Watt											UMETA(DisplayName = "OVTK_GDF_25_Watt"),
	OVTK_GDF_50_Watt											UMETA(DisplayName = "OVTK_GDF_50_Watt"),
	OVTK_GDF_75_Watt											UMETA(DisplayName = "OVTK_GDF_75_Watt"),
	OVTK_GDF_100_Watt											UMETA(DisplayName = "OVTK_GDF_100_Watt"),
	OVTK_GDF_125_Watt											UMETA(DisplayName = "OVTK_GDF_125_Watt"),
	OVTK_GDF_150_Watt											UMETA(DisplayName = "OVTK_GDF_150_Watt"),
	OVTK_GDF_175_Watt											UMETA(DisplayName = "OVTK_GDF_175_Watt"),
	OVTK_GDF_200_Watt											UMETA(DisplayName = "OVTK_GDF_200_Watt"),
	OVTK_GDF_225_Watt											UMETA(DisplayName = "OVTK_GDF_225_Watt"),
	OVTK_GDF_250_Watt											UMETA(DisplayName = "OVTK_GDF_250_Watt"),
	OVTK_GDF_275_Watt											UMETA(DisplayName = "OVTK_GDF_275_Watt"),
	OVTK_GDF_300_Watt											UMETA(DisplayName = "OVTK_GDF_300_Watt"),
	OVTK_GDF_325_Watt											UMETA(DisplayName = "OVTK_GDF_325_Watt"),
	OVTK_GDF_350_Watt											UMETA(DisplayName = "OVTK_GDF_350_Watt"),
	OVTK_GDF_Start_Of_New_Segment								UMETA(DisplayName = "OVTK_GDF_Start_Of_New_Segment"),
	OVTK_GDF_Non_Equidistant_Sampling_Value						UMETA(DisplayName = "OVTK_GDF_Non_Equidistant_Sampling_Value"),

};

/*
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UUE4OpenVibeTCPBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Connect to OpenVibe (acquisition server)", Keywords = "UE4OpenVibeTCP connect UE4OpenVibeTCPconnect tcp OpenVibe"), Category = "OpenVibe|UE4OpenVibeTCP")
		static USocket* Connect(FString IP, int32 port, bool &success);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Send stimulation to OpenVibe (input number)", Keywords = "UE4OpenVibeTCP send message UE4OpenVibeTCPsend tcp OpenVibe"), Category = "OpenVibe|UE4OpenVibeTCP")
		static bool SendOtherStimulation(USocket* Connection, int Stimulation);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Send stimulation to OpenVibe", Keywords = "UE4OpenVibeTCP send message UE4OpenVibeTCPsend tcp OpenVibe"), Category = "OpenVibe|UE4OpenVibeTCP")
		static bool SendStimulation(USocket* Connection, EOpenVibeStimulations Stimulation);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Close connection to OpenVibe", Keywords = "UE4OpenVibeTCP disconnect close UE4OpenVibeTCPdisconnect tcp OpenVibe"), Category = "OpenVibe|UE4OpenVibeTCP")
		static bool CloseConnection(USocket* Connection);

};
