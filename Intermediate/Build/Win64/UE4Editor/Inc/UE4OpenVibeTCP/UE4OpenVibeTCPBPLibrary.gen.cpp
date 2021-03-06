// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UE4OpenVibeTCP.h"
#include "Public/UE4OpenVibeTCPBPLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4OpenVibeTCPBPLibrary() {}
// Cross Module References
	UE4OPENVIBETCP_API UEnum* Z_Construct_UEnum_UE4OpenVibeTCP_EOpenVibeStimulations();
	UPackage* Z_Construct_UPackage__Script_UE4OpenVibeTCP();
	UE4OPENVIBETCP_API UFunction* Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_CloseConnection();
	UE4OPENVIBETCP_API UClass* Z_Construct_UClass_UUE4OpenVibeTCPBPLibrary();
	UE4OPENVIBETCP_API UClass* Z_Construct_UClass_USocket_NoRegister();
	UE4OPENVIBETCP_API UFunction* Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_Connect();
	UE4OPENVIBETCP_API UFunction* Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_SendOtherStimulation();
	UE4OPENVIBETCP_API UFunction* Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_SendStimulation();
	UE4OPENVIBETCP_API UClass* Z_Construct_UClass_UUE4OpenVibeTCPBPLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
static UEnum* EOpenVibeStimulations_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_UE4OpenVibeTCP_EOpenVibeStimulations, Z_Construct_UPackage__Script_UE4OpenVibeTCP(), TEXT("EOpenVibeStimulations"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOpenVibeStimulations(EOpenVibeStimulations_StaticEnum, TEXT("/Script/UE4OpenVibeTCP"), TEXT("EOpenVibeStimulations"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_UE4OpenVibeTCP_EOpenVibeStimulations()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_UE4OpenVibeTCP();
		extern uint32 Get_Z_Construct_UEnum_UE4OpenVibeTCP_EOpenVibeStimulations_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOpenVibeStimulations"), 0, Get_Z_Construct_UEnum_UE4OpenVibeTCP_EOpenVibeStimulations_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EOpenVibeStimulations"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_BaselineStart"), 0);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_BaselineStop"), 1);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Beep"), 2);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Button1_Pressed"), 3);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Button1_Released"), 4);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Button2_Pressed"), 5);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Button2_Released"), 6);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Button3_Pressed"), 7);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Button3_Released"), 8);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Button4_Pressed"), 9);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Button4_Released"), 10);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_DoubleBeep"), 11);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_EndOfFile"), 12);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_ExperimentStart"), 13);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_ExperimentStop"), 14);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_00"), 15);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_01"), 16);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_02"), 17);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_03"), 18);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_04"), 19);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_05"), 20);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_06"), 21);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_07"), 22);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_08"), 23);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_09"), 24);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_0A"), 25);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_0B"), 26);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_0C"), 27);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_0D"), 28);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_0E"), 29);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_0F"), 30);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_10"), 31);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_11"), 32);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_12"), 33);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_13"), 34);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_14"), 35);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_15"), 36);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_16"), 37);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_17"), 38);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_18"), 39);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_19"), 40);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_1A"), 41);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_1B"), 42);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_1C"), 43);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_1D"), 44);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_1E"), 45);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Label_1F"), 46);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_NonTarget"), 47);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_00"), 48);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_01"), 49);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_02"), 50);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_03"), 51);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_04"), 52);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_05"), 53);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_06"), 54);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_07"), 55);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_08"), 56);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_09"), 57);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_0A"), 58);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_0B"), 59);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_0C"), 60);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_0D"), 61);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_0E"), 62);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_0F"), 63);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_10"), 64);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_11"), 65);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_12"), 66);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_13"), 67);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_14"), 68);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_15"), 69);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_16"), 70);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_17"), 71);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_18"), 72);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_19"), 73);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_1A"), 74);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_1B"), 75);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_1C"), 76);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_1D"), 77);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_1E"), 78);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Number_1F"), 79);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Reset"), 80);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_RestStart"), 81);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_RestStop"), 82);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_SegmentStart"), 83);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_SegmentStop"), 84);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Target"), 85);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_Train"), 86);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_TrainCompleted"), 87);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_TrialStart"), 88);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_TrialStop"), 89);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_VisualSteadyStateStimulationStart"), 90);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_VisualSteadyStateStimulationStop"), 91);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_VisualStimulationStart"), 92);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_StimulationId_VisualStimulationStop"), 93);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Artifact_EOG_Large"), 94);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Artifact_ECG"), 95);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Artifact_EMG"), 96);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Artifact_Movement"), 97);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Artifact_Failing_Electrode"), 98);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Artifact_Sweat"), 99);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Artifact_50_60_Hz_Interference"), 100);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Artifact_Breathing"), 101);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Artifact_Pulse"), 102);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Artifact_EOG_Small"), 103);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Calibration"), 104);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_EEG_Sleep_Splindles"), 105);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_EEG_K_Complexes"), 106);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_EEG_Saw_Tooth_Waves"), 107);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_EEG_Idling_EEG_Eyes_Open"), 108);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_EEG_Idling_EEG_Eyes_Closed"), 109);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_EEG_Spike"), 110);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_EEG_Seizure"), 111);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_VEP"), 112);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_AEP"), 113);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_SEP"), 114);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_TMS"), 115);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_SSVEP"), 116);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_SSAEP"), 117);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_SSSEP"), 118);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Start_Of_Trial"), 119);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Left"), 120);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Right"), 121);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Foot"), 122);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Tongue"), 123);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_class5"), 124);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Down"), 125);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_class7"), 126);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_class8"), 127);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_class9"), 128);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_class10"), 129);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_class11"), 130);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Up"), 131);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Feedback_Continuous"), 132);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Feedback_Discrete"), 133);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Cue_Unknown_Undefined"), 134);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Beep"), 135);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Cross_On_Screen"), 136);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Flashing_Light"), 137);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_End_Of_Trial"), 138);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Correct"), 139);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Incorrect"), 140);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_End_Of_Session"), 141);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Rejection"), 142);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_OAHE"), 143);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_RERA"), 144);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_CAHE"), 145);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_CSB"), 146);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Sleep_Hypoventilation"), 147);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Maximum_Inspiration"), 148);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Start_Of_Inspiration"), 149);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Wake"), 150);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Stage_1"), 151);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Stage_2"), 152);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Stage_3"), 153);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Stage_4"), 154);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_REM"), 155);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Lights_On"), 156);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Lights_Off"), 157);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Eyes_Left"), 158);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Eyes_Right"), 159);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Eyes_Up"), 160);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Eyes_Down"), 161);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Horizontal_Eye_Movement"), 162);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Vertical_Eye_Movement"), 163);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Rotation_Clockwise"), 164);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Rotation_Counterclockwise"), 165);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Eye_Blink"), 166);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Left_Hand_Movement"), 167);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Right_Hand_Movement"), 168);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Head_Movement"), 169);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Tongue_Movement"), 170);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Swallowing"), 171);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Biting"), 172);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Foot_Movement"), 173);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Foot_Right_Movement"), 174);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Arm_Movement"), 175);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Arm_Right_Movement"), 176);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_ECG_Fiducial_Point_QRS_Complex"), 177);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_ECG_P_Wave"), 178);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_ECG_QRS_Complex"), 179);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_ECG_R_Point"), 180);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_ECG_T_Wave"), 181);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_ECG_U_Wave"), 182);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Start"), 183);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_25_Watt"), 184);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_50_Watt"), 185);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_75_Watt"), 186);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_100_Watt"), 187);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_125_Watt"), 188);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_150_Watt"), 189);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_175_Watt"), 190);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_200_Watt"), 191);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_225_Watt"), 192);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_250_Watt"), 193);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_275_Watt"), 194);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_300_Watt"), 195);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_325_Watt"), 196);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_350_Watt"), 197);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Start_Of_New_Segment"), 198);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_GDF_Non_Equidistant_Sampling_Value"), 199);
			EnumNames.Emplace(TEXT("EOpenVibeStimulations::OVTK_MAX"), 200);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EOpenVibeStimulations");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("IsBlueprintBase"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/UE4OpenVibeTCPBPLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_100_Watt.DisplayName"), TEXT("OVTK_GDF_100_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_125_Watt.DisplayName"), TEXT("OVTK_GDF_125_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_150_Watt.DisplayName"), TEXT("OVTK_GDF_150_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_175_Watt.DisplayName"), TEXT("OVTK_GDF_175_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_200_Watt.DisplayName"), TEXT("OVTK_GDF_200_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_225_Watt.DisplayName"), TEXT("OVTK_GDF_225_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_250_Watt.DisplayName"), TEXT("OVTK_GDF_250_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_25_Watt.DisplayName"), TEXT("OVTK_GDF_25_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_275_Watt.DisplayName"), TEXT("OVTK_GDF_275_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_300_Watt.DisplayName"), TEXT("OVTK_GDF_300_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_325_Watt.DisplayName"), TEXT("OVTK_GDF_325_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_350_Watt.DisplayName"), TEXT("OVTK_GDF_350_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_50_Watt.DisplayName"), TEXT("OVTK_GDF_50_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_75_Watt.DisplayName"), TEXT("OVTK_GDF_75_Watt"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_AEP.DisplayName"), TEXT("OVTK_GDF_AEP"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Arm_Movement.DisplayName"), TEXT("OVTK_GDF_Arm_Movement"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Arm_Right_Movement.DisplayName"), TEXT("OVTK_GDF_Arm_Right_Movement"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Artifact_50_60_Hz_Interference.DisplayName"), TEXT("OVTK_GDF_Artifact_50_60_Hz_Interference"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Artifact_Breathing.DisplayName"), TEXT("OVTK_GDF_Artifact_Breathing"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Artifact_ECG.DisplayName"), TEXT("OVTK_GDF_Artifact_ECG"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Artifact_EMG.DisplayName"), TEXT("OVTK_GDF_Artifact_EMG"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Artifact_EOG_Large.DisplayName"), TEXT("OVTK_GDF_Artifact_EOG_Large"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Artifact_EOG_Small.DisplayName"), TEXT("OVTK_GDF_Artifact_EOG_Small"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Artifact_Failing_Electrode.DisplayName"), TEXT("OVTK_GDF_Artifact_Failing_Electrode"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Artifact_Movement.DisplayName"), TEXT("OVTK_GDF_Artifact_Movement"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Artifact_Pulse.DisplayName"), TEXT("OVTK_GDF_Artifact_Pulse"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Artifact_Sweat.DisplayName"), TEXT("OVTK_GDF_Artifact_Sweat"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Beep.DisplayName"), TEXT("OVTK_GDF_Beep"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Biting.DisplayName"), TEXT("OVTK_GDF_Biting"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_CAHE.DisplayName"), TEXT("OVTK_GDF_CAHE"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Calibration.DisplayName"), TEXT("OVTK_GDF_Calibration"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_class10.DisplayName"), TEXT("OVTK_GDF_class10"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_class11.DisplayName"), TEXT("OVTK_GDF_class11"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_class5.DisplayName"), TEXT("OVTK_GDF_class5"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_class7.DisplayName"), TEXT("OVTK_GDF_class7"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_class8.DisplayName"), TEXT("OVTK_GDF_class8"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_class9.DisplayName"), TEXT("OVTK_GDF_class9"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Correct.DisplayName"), TEXT("OVTK_GDF_Correct"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Cross_On_Screen.DisplayName"), TEXT("OVTK_GDF_Cross_On_Screen"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_CSB.DisplayName"), TEXT("OVTK_GDF_CSB"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Cue_Unknown_Undefined.DisplayName"), TEXT("OVTK_GDF_Cue_Unknown_Undefined"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Down.DisplayName"), TEXT("OVTK_GDF_Down"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_ECG_Fiducial_Point_QRS_Complex.DisplayName"), TEXT("OVTK_GDF_ECG_Fiducial_Point_QRS_Complex"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_ECG_P_Wave.DisplayName"), TEXT("OVTK_GDF_ECG_P_Wave"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_ECG_QRS_Complex.DisplayName"), TEXT("OVTK_GDF_ECG_QRS_Complex"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_ECG_R_Point.DisplayName"), TEXT("OVTK_GDF_ECG_R_Point"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_ECG_T_Wave.DisplayName"), TEXT("OVTK_GDF_ECG_T_Wave"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_ECG_U_Wave.DisplayName"), TEXT("OVTK_GDF_ECG_U_Wave"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_EEG_Idling_EEG_Eyes_Closed.DisplayName"), TEXT("OVTK_GDF_EEG_Idling_EEG_Eyes_Closed"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_EEG_Idling_EEG_Eyes_Open.DisplayName"), TEXT("OVTK_GDF_EEG_Idling_EEG_Eyes_Open"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_EEG_K_Complexes.DisplayName"), TEXT("OVTK_GDF_EEG_K_Complexes"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_EEG_Saw_Tooth_Waves.DisplayName"), TEXT("OVTK_GDF_EEG_Saw_Tooth_Waves"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_EEG_Seizure.DisplayName"), TEXT("OVTK_GDF_EEG_Seizure"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_EEG_Sleep_Splindles.DisplayName"), TEXT("OVTK_GDF_EEG_Sleep_Splindles"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_EEG_Spike.DisplayName"), TEXT("OVTK_GDF_EEG_Spike"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_End_Of_Session.DisplayName"), TEXT("OVTK_GDF_End_Of_Session"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_End_Of_Trial.DisplayName"), TEXT("OVTK_GDF_End_Of_Trial"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Eye_Blink.DisplayName"), TEXT("OVTK_GDF_Eye_Blink"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Eyes_Down.DisplayName"), TEXT("OVTK_GDF_Eyes_Down"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Eyes_Left.DisplayName"), TEXT("OVTK_GDF_Eyes_Left"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Eyes_Right.DisplayName"), TEXT("OVTK_GDF_Eyes_Right"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Eyes_Up.DisplayName"), TEXT("OVTK_GDF_Eyes_Up"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Feedback_Continuous.DisplayName"), TEXT("OVTK_GDF_Feedback_Continuous"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Feedback_Discrete.DisplayName"), TEXT("OVTK_GDF_Feedback_Discrete"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Flashing_Light.DisplayName"), TEXT("OVTK_GDF_Flashing_Light"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Foot.DisplayName"), TEXT("OVTK_GDF_Foot"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Foot_Movement.DisplayName"), TEXT("OVTK_GDF_Foot_Movement"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Foot_Right_Movement.DisplayName"), TEXT("OVTK_GDF_Foot_Right_Movement"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Head_Movement.DisplayName"), TEXT("OVTK_GDF_Head_Movement"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Horizontal_Eye_Movement.DisplayName"), TEXT("OVTK_GDF_Horizontal_Eye_Movement"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Incorrect.DisplayName"), TEXT("OVTK_GDF_Incorrect"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Left.DisplayName"), TEXT("OVTK_GDF_Left"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Left_Hand_Movement.DisplayName"), TEXT("OVTK_GDF_Left_Hand_Movement"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Lights_Off.DisplayName"), TEXT("OVTK_GDF_Lights_Off"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Lights_On.DisplayName"), TEXT("OVTK_GDF_Lights_On"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Maximum_Inspiration.DisplayName"), TEXT("OVTK_GDF_Maximum_Inspiration"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Non_Equidistant_Sampling_Value.DisplayName"), TEXT("OVTK_GDF_Non_Equidistant_Sampling_Value"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_OAHE.DisplayName"), TEXT("OVTK_GDF_OAHE"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Rejection.DisplayName"), TEXT("OVTK_GDF_Rejection"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_REM.DisplayName"), TEXT("OVTK_GDF_REM"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_RERA.DisplayName"), TEXT("OVTK_GDF_RERA"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Right.DisplayName"), TEXT("OVTK_GDF_Right"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Right_Hand_Movement.DisplayName"), TEXT("OVTK_GDF_Right_Hand_Movement"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Rotation_Clockwise.DisplayName"), TEXT("OVTK_GDF_Rotation_Clockwise"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Rotation_Counterclockwise.DisplayName"), TEXT("OVTK_GDF_Rotation_Counterclockwise"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_SEP.DisplayName"), TEXT("OVTK_GDF_SEP"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Sleep_Hypoventilation.DisplayName"), TEXT("OVTK_GDF_Sleep_Hypoventilation"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_SSAEP.DisplayName"), TEXT("OVTK_GDF_SSAEP"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_SSSEP.DisplayName"), TEXT("OVTK_GDF_SSSEP"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_SSVEP.DisplayName"), TEXT("OVTK_GDF_SSVEP"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Stage_1.DisplayName"), TEXT("OVTK_GDF_Stage_1"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Stage_2.DisplayName"), TEXT("OVTK_GDF_Stage_2"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Stage_3.DisplayName"), TEXT("OVTK_GDF_Stage_3"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Stage_4.DisplayName"), TEXT("OVTK_GDF_Stage_4"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Start.DisplayName"), TEXT("OVTK_GDF_Start"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Start_Of_Inspiration.DisplayName"), TEXT("OVTK_GDF_Start_Of_Inspiration"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Start_Of_New_Segment.DisplayName"), TEXT("OVTK_GDF_Start_Of_New_Segment"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Start_Of_Trial.DisplayName"), TEXT("OVTK_GDF_Start_Of_Trial"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Swallowing.DisplayName"), TEXT("OVTK_GDF_Swallowing"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_TMS.DisplayName"), TEXT("OVTK_GDF_TMS"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Tongue.DisplayName"), TEXT("OVTK_GDF_Tongue"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Tongue_Movement.DisplayName"), TEXT("OVTK_GDF_Tongue_Movement"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Up.DisplayName"), TEXT("OVTK_GDF_Up"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_VEP.DisplayName"), TEXT("OVTK_GDF_VEP"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Vertical_Eye_Movement.DisplayName"), TEXT("OVTK_GDF_Vertical_Eye_Movement"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_GDF_Wake.DisplayName"), TEXT("OVTK_GDF_Wake"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_BaselineStart.DisplayName"), TEXT("OVTK_StimulationId_BaselineStart"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_BaselineStop.DisplayName"), TEXT("OVTK_StimulationId_BaselineStop"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Beep.DisplayName"), TEXT("OVTK_StimulationId_Beep"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Button1_Pressed.DisplayName"), TEXT("OVTK_StimulationId_Button1_Pressed"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Button1_Released.DisplayName"), TEXT("OVTK_StimulationId_Button1_Released"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Button2_Pressed.DisplayName"), TEXT("OVTK_StimulationId_Button2_Pressed"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Button2_Released.DisplayName"), TEXT("OVTK_StimulationId_Button2_Released"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Button3_Pressed.DisplayName"), TEXT("OVTK_StimulationId_Button3_Pressed"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Button3_Released.DisplayName"), TEXT("OVTK_StimulationId_Button3_Released"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Button4_Pressed.DisplayName"), TEXT("OVTK_StimulationId_Button4_Pressed"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Button4_Released.DisplayName"), TEXT("OVTK_StimulationId_Button4_Released"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_DoubleBeep.DisplayName"), TEXT("OVTK_StimulationId_DoubleBeep"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_EndOfFile.DisplayName"), TEXT("OVTK_StimulationId_EndOfFile"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_ExperimentStart.DisplayName"), TEXT("OVTK_StimulationId_ExperimentStart"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_ExperimentStop.DisplayName"), TEXT("OVTK_StimulationId_ExperimentStop"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_00.DisplayName"), TEXT("OVTK_StimulationId_Label_00"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_01.DisplayName"), TEXT("OVTK_StimulationId_Label_01"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_02.DisplayName"), TEXT("OVTK_StimulationId_Label_02"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_03.DisplayName"), TEXT("OVTK_StimulationId_Label_03"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_04.DisplayName"), TEXT("OVTK_StimulationId_Label_04"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_05.DisplayName"), TEXT("OVTK_StimulationId_Label_05"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_06.DisplayName"), TEXT("OVTK_StimulationId_Label_06"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_07.DisplayName"), TEXT("OVTK_StimulationId_Label_07"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_08.DisplayName"), TEXT("OVTK_StimulationId_Label_08"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_09.DisplayName"), TEXT("OVTK_StimulationId_Label_09"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_0A.DisplayName"), TEXT("OVTK_StimulationId_Label_0A"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_0B.DisplayName"), TEXT("OVTK_StimulationId_Label_0B"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_0C.DisplayName"), TEXT("OVTK_StimulationId_Label_0C"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_0D.DisplayName"), TEXT("OVTK_StimulationId_Label_0D"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_0E.DisplayName"), TEXT("OVTK_StimulationId_Label_0E"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_0F.DisplayName"), TEXT("OVTK_StimulationId_Label_0F"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_10.DisplayName"), TEXT("OVTK_StimulationId_Label_10"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_11.DisplayName"), TEXT("OVTK_StimulationId_Label_11"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_12.DisplayName"), TEXT("OVTK_StimulationId_Label_12"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_13.DisplayName"), TEXT("OVTK_StimulationId_Label_13"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_14.DisplayName"), TEXT("OVTK_StimulationId_Label_14"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_15.DisplayName"), TEXT("OVTK_StimulationId_Label_15"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_16.DisplayName"), TEXT("OVTK_StimulationId_Label_16"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_17.DisplayName"), TEXT("OVTK_StimulationId_Label_17"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_18.DisplayName"), TEXT("OVTK_StimulationId_Label_18"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_19.DisplayName"), TEXT("OVTK_StimulationId_Label_19"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_1A.DisplayName"), TEXT("OVTK_StimulationId_Label_1A"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_1B.DisplayName"), TEXT("OVTK_StimulationId_Label_1B"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_1C.DisplayName"), TEXT("OVTK_StimulationId_Label_1C"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_1D.DisplayName"), TEXT("OVTK_StimulationId_Label_1D"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_1E.DisplayName"), TEXT("OVTK_StimulationId_Label_1E"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Label_1F.DisplayName"), TEXT("OVTK_StimulationId_Label_1F"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_NonTarget.DisplayName"), TEXT("OVTK_StimulationId_NonTarget"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_NonTarget.ToolTip"), TEXT("OVTK_StimulationId_LabelEnd                                                                     UMETA(DisplayName = \"OVTK_StimulationId_LabelEnd\"),\nOVTK_StimulationId_LabelStart                                                           UMETA(DisplayName = \"OVTK_StimulationId_LabelStart\"),"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_00.DisplayName"), TEXT("OVTK_StimulationId_Number_00"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_01.DisplayName"), TEXT("OVTK_StimulationId_Number_01"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_02.DisplayName"), TEXT("OVTK_StimulationId_Number_02"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_03.DisplayName"), TEXT("OVTK_StimulationId_Number_03"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_04.DisplayName"), TEXT("OVTK_StimulationId_Number_04"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_05.DisplayName"), TEXT("OVTK_StimulationId_Number_05"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_06.DisplayName"), TEXT("OVTK_StimulationId_Number_06"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_07.DisplayName"), TEXT("OVTK_StimulationId_Number_07"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_08.DisplayName"), TEXT("OVTK_StimulationId_Number_08"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_09.DisplayName"), TEXT("OVTK_StimulationId_Number_09"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_0A.DisplayName"), TEXT("OVTK_StimulationId_Number_0A"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_0B.DisplayName"), TEXT("OVTK_StimulationId_Number_0B"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_0C.DisplayName"), TEXT("OVTK_StimulationId_Number_0C"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_0D.DisplayName"), TEXT("OVTK_StimulationId_Number_0D"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_0E.DisplayName"), TEXT("OVTK_StimulationId_Number_0E"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_0F.DisplayName"), TEXT("OVTK_StimulationId_Number_0F"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_10.DisplayName"), TEXT("OVTK_StimulationId_Number_10"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_11.DisplayName"), TEXT("OVTK_StimulationId_Number_11"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_12.DisplayName"), TEXT("OVTK_StimulationId_Number_12"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_13.DisplayName"), TEXT("OVTK_StimulationId_Number_13"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_14.DisplayName"), TEXT("OVTK_StimulationId_Number_14"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_15.DisplayName"), TEXT("OVTK_StimulationId_Number_15"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_16.DisplayName"), TEXT("OVTK_StimulationId_Number_16"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_17.DisplayName"), TEXT("OVTK_StimulationId_Number_17"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_18.DisplayName"), TEXT("OVTK_StimulationId_Number_18"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_19.DisplayName"), TEXT("OVTK_StimulationId_Number_19"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_1A.DisplayName"), TEXT("OVTK_StimulationId_Number_1A"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_1B.DisplayName"), TEXT("OVTK_StimulationId_Number_1B"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_1C.DisplayName"), TEXT("OVTK_StimulationId_Number_1C"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_1D.DisplayName"), TEXT("OVTK_StimulationId_Number_1D"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_1E.DisplayName"), TEXT("OVTK_StimulationId_Number_1E"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Number_1F.DisplayName"), TEXT("OVTK_StimulationId_Number_1F"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Reset.DisplayName"), TEXT("OVTK_StimulationId_Reset"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Reset.ToolTip"), TEXT("OVTK_StimulationId_NumberEnd                                                            UMETA(DisplayName = \"OVTK_StimulationId_NumberEnd\"),\nOVTK_StimulationId_NumberStart                                                          UMETA(DisplayName = \"OVTK_StimulationId_NumberStart\"),"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_RestStart.DisplayName"), TEXT("OVTK_StimulationId_RestStart"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_RestStop.DisplayName"), TEXT("OVTK_StimulationId_RestStop"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_SegmentStart.DisplayName"), TEXT("OVTK_StimulationId_SegmentStart"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_SegmentStop.DisplayName"), TEXT("OVTK_StimulationId_SegmentStop"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Target.DisplayName"), TEXT("OVTK_StimulationId_Target"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_Train.DisplayName"), TEXT("OVTK_StimulationId_Train"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_TrainCompleted.DisplayName"), TEXT("OVTK_StimulationId_TrainCompleted"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_TrialStart.DisplayName"), TEXT("OVTK_StimulationId_TrialStart"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_TrialStop.DisplayName"), TEXT("OVTK_StimulationId_TrialStop"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_VisualSteadyStateStimulationStart.DisplayName"), TEXT("OVTK_StimulationId_VisualSteadyStateStimulationStart"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_VisualSteadyStateStimulationStop.DisplayName"), TEXT("OVTK_StimulationId_VisualSteadyStateStimulationStop"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_VisualStimulationStart.DisplayName"), TEXT("OVTK_StimulationId_VisualStimulationStart"));
			MetaData->SetValue(ReturnEnum, TEXT("OVTK_StimulationId_VisualStimulationStop.DisplayName"), TEXT("OVTK_StimulationId_VisualStimulationStop"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_UE4OpenVibeTCP_EOpenVibeStimulations_CRC() { return 1729824412U; }
	void UUE4OpenVibeTCPBPLibrary::StaticRegisterNativesUUE4OpenVibeTCPBPLibrary()
	{
		UClass* Class = UUE4OpenVibeTCPBPLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CloseConnection", (Native)&UUE4OpenVibeTCPBPLibrary::execCloseConnection },
			{ "Connect", (Native)&UUE4OpenVibeTCPBPLibrary::execConnect },
			{ "SendOtherStimulation", (Native)&UUE4OpenVibeTCPBPLibrary::execSendOtherStimulation },
			{ "SendStimulation", (Native)&UUE4OpenVibeTCPBPLibrary::execSendStimulation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_CloseConnection()
	{
		struct UE4OpenVibeTCPBPLibrary_eventCloseConnection_Parms
		{
			USocket* Connection;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UUE4OpenVibeTCPBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CloseConnection"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(UE4OpenVibeTCPBPLibrary_eventCloseConnection_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, UE4OpenVibeTCPBPLibrary_eventCloseConnection_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, UE4OpenVibeTCPBPLibrary_eventCloseConnection_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, UE4OpenVibeTCPBPLibrary_eventCloseConnection_Parms), sizeof(bool), true);
			UProperty* NewProp_Connection = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Connection"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Connection, UE4OpenVibeTCPBPLibrary_eventCloseConnection_Parms), 0x0010000000000080, Z_Construct_UClass_USocket_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("OpenVibe|UE4OpenVibeTCP"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Close connection to OpenVibe"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("UE4OpenVibeTCP disconnect close UE4OpenVibeTCPdisconnect tcp OpenVibe"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UE4OpenVibeTCPBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_Connect()
	{
		struct UE4OpenVibeTCPBPLibrary_eventConnect_Parms
		{
			FString IP;
			int32 port;
			bool success;
			USocket* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UUE4OpenVibeTCPBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Connect"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(UE4OpenVibeTCPBPLibrary_eventConnect_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, UE4OpenVibeTCPBPLibrary_eventConnect_Parms), 0x0010000000000580, Z_Construct_UClass_USocket_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(success, UE4OpenVibeTCPBPLibrary_eventConnect_Parms);
			UProperty* NewProp_success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(success, UE4OpenVibeTCPBPLibrary_eventConnect_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(success, UE4OpenVibeTCPBPLibrary_eventConnect_Parms), sizeof(bool), true);
			UProperty* NewProp_port = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("port"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(port, UE4OpenVibeTCPBPLibrary_eventConnect_Parms), 0x0010000000000080);
			UProperty* NewProp_IP = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("IP"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(IP, UE4OpenVibeTCPBPLibrary_eventConnect_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("OpenVibe|UE4OpenVibeTCP"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Connect to OpenVibe (acquisition server)"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("UE4OpenVibeTCP connect UE4OpenVibeTCPconnect tcp OpenVibe"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UE4OpenVibeTCPBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_SendOtherStimulation()
	{
		struct UE4OpenVibeTCPBPLibrary_eventSendOtherStimulation_Parms
		{
			USocket* Connection;
			int32 Stimulation;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UUE4OpenVibeTCPBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendOtherStimulation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(UE4OpenVibeTCPBPLibrary_eventSendOtherStimulation_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, UE4OpenVibeTCPBPLibrary_eventSendOtherStimulation_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, UE4OpenVibeTCPBPLibrary_eventSendOtherStimulation_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, UE4OpenVibeTCPBPLibrary_eventSendOtherStimulation_Parms), sizeof(bool), true);
			UProperty* NewProp_Stimulation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Stimulation"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(Stimulation, UE4OpenVibeTCPBPLibrary_eventSendOtherStimulation_Parms), 0x0010000000000080);
			UProperty* NewProp_Connection = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Connection"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Connection, UE4OpenVibeTCPBPLibrary_eventSendOtherStimulation_Parms), 0x0010000000000080, Z_Construct_UClass_USocket_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("OpenVibe|UE4OpenVibeTCP"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Send stimulation to OpenVibe (input number)"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("UE4OpenVibeTCP send message UE4OpenVibeTCPsend tcp OpenVibe"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UE4OpenVibeTCPBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_SendStimulation()
	{
		struct UE4OpenVibeTCPBPLibrary_eventSendStimulation_Parms
		{
			USocket* Connection;
			EOpenVibeStimulations Stimulation;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UUE4OpenVibeTCPBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SendStimulation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(UE4OpenVibeTCPBPLibrary_eventSendStimulation_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, UE4OpenVibeTCPBPLibrary_eventSendStimulation_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, UE4OpenVibeTCPBPLibrary_eventSendStimulation_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, UE4OpenVibeTCPBPLibrary_eventSendStimulation_Parms), sizeof(bool), true);
			UProperty* NewProp_Stimulation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Stimulation"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Stimulation, UE4OpenVibeTCPBPLibrary_eventSendStimulation_Parms), 0x0010000000000080, Z_Construct_UEnum_UE4OpenVibeTCP_EOpenVibeStimulations());
			UProperty* NewProp_Stimulation_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Stimulation, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Connection = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Connection"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Connection, UE4OpenVibeTCPBPLibrary_eventSendStimulation_Parms), 0x0010000000000080, Z_Construct_UClass_USocket_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("OpenVibe|UE4OpenVibeTCP"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Send stimulation to OpenVibe"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("UE4OpenVibeTCP send message UE4OpenVibeTCPsend tcp OpenVibe"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/UE4OpenVibeTCPBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUE4OpenVibeTCPBPLibrary_NoRegister()
	{
		return UUE4OpenVibeTCPBPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UUE4OpenVibeTCPBPLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_UE4OpenVibeTCP();
			OuterClass = UUE4OpenVibeTCPBPLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_CloseConnection());
				OuterClass->LinkChild(Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_Connect());
				OuterClass->LinkChild(Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_SendOtherStimulation());
				OuterClass->LinkChild(Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_SendStimulation());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_CloseConnection(), "CloseConnection"); // 777819321
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_Connect(), "Connect"); // 3180661137
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_SendOtherStimulation(), "SendOtherStimulation"); // 2044439703
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UUE4OpenVibeTCPBPLibrary_SendStimulation(), "SendStimulation"); // 822966714
				static TCppClassTypeInfo<TCppClassTypeTraits<UUE4OpenVibeTCPBPLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UE4OpenVibeTCPBPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/UE4OpenVibeTCPBPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUE4OpenVibeTCPBPLibrary, 3003133643);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUE4OpenVibeTCPBPLibrary(Z_Construct_UClass_UUE4OpenVibeTCPBPLibrary, &UUE4OpenVibeTCPBPLibrary::StaticClass, TEXT("/Script/UE4OpenVibeTCP"), TEXT("UUE4OpenVibeTCPBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUE4OpenVibeTCPBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
