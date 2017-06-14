// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UE4OpenVibeTCP.h"
#include "UE4OpenVibeTCPBPLibrary.h"

#include <sys/timeb.h>

// Convert Stimulation to OpenVibe value
int GetOpenVibeStimulationValue(EOpenVibeStimulations Stimulation)
{
	switch (Stimulation)
	{
	case EOpenVibeStimulations::OVTK_StimulationId_BaselineStart:
		return 32775;
	case EOpenVibeStimulations::OVTK_StimulationId_BaselineStop:
		return 32776;
	case EOpenVibeStimulations::OVTK_StimulationId_Beep:
		return 33282;
	case EOpenVibeStimulations::OVTK_StimulationId_Button1_Pressed:
		return 32786;
	case EOpenVibeStimulations::OVTK_StimulationId_Button1_Released:
		return 32787;
	case EOpenVibeStimulations::OVTK_StimulationId_Button2_Pressed:
		return 32788;
	case EOpenVibeStimulations::OVTK_StimulationId_Button2_Released:
		return 32789;
	case EOpenVibeStimulations::OVTK_StimulationId_Button3_Pressed:
		return 32790;
	case EOpenVibeStimulations::OVTK_StimulationId_Button3_Released:
		return 32791;
	case EOpenVibeStimulations::OVTK_StimulationId_Button4_Pressed:
		return 32792;
	case EOpenVibeStimulations::OVTK_StimulationId_Button4_Released:
		return 32793;
	case EOpenVibeStimulations::OVTK_StimulationId_DoubleBeep:
		return 33283;
	case EOpenVibeStimulations::OVTK_StimulationId_EndOfFile:
		return 33284;
	case EOpenVibeStimulations::OVTK_StimulationId_ExperimentStart:
		return 32769;
	case EOpenVibeStimulations::OVTK_StimulationId_ExperimentStop:
		return 32770;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_00:
		return 33024;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_01:
		return 33025;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_02:
		return 33026;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_03:
		return 33027;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_04:
		return 33028;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_05:
		return 33029;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_06:
		return 33030;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_07:
		return 33031;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_08:
		return 33032;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_09:
		return 33033;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_0A:
		return 33034;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_0B:
		return 33035;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_0C:
		return 33036;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_0D:
		return 33037;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_0E:
		return 33038;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_0F:
		return 33039;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_10:
		return 33040;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_11:
		return 33041;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_12:
		return 33042;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_13:
		return 33043;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_14:
		return 33044;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_15:
		return 33045;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_16:
		return 33046;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_17:
		return 33047;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_18:
		return 33048;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_19:
		return 33049;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_1A:
		return 33050;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_1B:
		return 33051;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_1C:
		return 33052;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_1D:
		return 33053;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_1E:
		return 33054;
	case EOpenVibeStimulations::OVTK_StimulationId_Label_1F:
		return 33055;
//	case EOpenVibeStimulations::OVTK_StimulationId_LabelEnd:
//		return 33279;
//	case EOpenVibeStimulations::OVTK_StimulationId_LabelStart:
//		return 33024;
	case EOpenVibeStimulations::OVTK_StimulationId_NonTarget:
		return 33286;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_00:
		return 0;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_01:
		return 1;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_02:
		return 2;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_03:
		return 3;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_04:
		return 4;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_05:
		return 5;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_06:
		return 6;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_07:
		return 7;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_08:
		return 8;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_09:
		return 9;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_0A:
		return 10;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_0B:
		return 11;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_0C:
		return 12;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_0D:
		return 13;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_0E:
		return 14;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_0F:
		return 15;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_10:
		return 16;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_11:
		return 17;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_12:
		return 18;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_13:
		return 19;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_14:
		return 20;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_15:
		return 21;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_16:
		return 22;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_17:
		return 23;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_18:
		return 24;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_19:
		return 25;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_1A:
		return 26;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_1B:
		return 27;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_1C:
		return 28;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_1D:
		return 29;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_1E:
		return 30;
	case EOpenVibeStimulations::OVTK_StimulationId_Number_1F:
		return 31;
//	case EOpenVibeStimulations::OVTK_StimulationId_NumberEnd:
//		return 255;
//	case EOpenVibeStimulations::OVTK_StimulationId_NumberStart:
//		return 0;
	case EOpenVibeStimulations::OVTK_StimulationId_Reset:
		return 33288;
	case EOpenVibeStimulations::OVTK_StimulationId_RestStart:
		return 32777;
	case EOpenVibeStimulations::OVTK_StimulationId_RestStop:
		return 32778;
	case EOpenVibeStimulations::OVTK_StimulationId_SegmentStart:
		return 32771;
	case EOpenVibeStimulations::OVTK_StimulationId_SegmentStop:
		return 32772;
	case EOpenVibeStimulations::OVTK_StimulationId_Target:
		return 33285;
	case EOpenVibeStimulations::OVTK_StimulationId_Train:
		return 33281;
	case EOpenVibeStimulations::OVTK_StimulationId_TrainCompleted:
		return 33287;
	case EOpenVibeStimulations::OVTK_StimulationId_TrialStart:
		return 32773;
	case EOpenVibeStimulations::OVTK_StimulationId_TrialStop:
		return 32774;
	case EOpenVibeStimulations::OVTK_StimulationId_VisualSteadyStateStimulationStart:
		return 32784;
	case EOpenVibeStimulations::OVTK_StimulationId_VisualSteadyStateStimulationStop:
		return 32785;
	case EOpenVibeStimulations::OVTK_StimulationId_VisualStimulationStart:
		return 32779;
	case EOpenVibeStimulations::OVTK_StimulationId_VisualStimulationStop:
		return 32780;

	case EOpenVibeStimulations::OVTK_GDF_Artifact_EOG_Large:
		return 257;
	case EOpenVibeStimulations::OVTK_GDF_Artifact_ECG:
		return 258;
	case EOpenVibeStimulations::OVTK_GDF_Artifact_EMG:
		return 259;
	case EOpenVibeStimulations::OVTK_GDF_Artifact_Movement:
		return 260;
	case EOpenVibeStimulations::OVTK_GDF_Artifact_Failing_Electrode:
		return 261;
	case EOpenVibeStimulations::OVTK_GDF_Artifact_Sweat:
		return 262;
	case EOpenVibeStimulations::OVTK_GDF_Artifact_50_60_Hz_Interference:
		return 263;
	case EOpenVibeStimulations::OVTK_GDF_Artifact_Breathing:
		return 264;
	case EOpenVibeStimulations::OVTK_GDF_Artifact_Pulse:
		return 265;
	case EOpenVibeStimulations::OVTK_GDF_Artifact_EOG_Small:
		return 266;
	case EOpenVibeStimulations::OVTK_GDF_Calibration:
		return 271;
	case EOpenVibeStimulations::OVTK_GDF_EEG_Sleep_Splindles:
		return 273;
	case EOpenVibeStimulations::OVTK_GDF_EEG_K_Complexes:
		return 274;
	case EOpenVibeStimulations::OVTK_GDF_EEG_Saw_Tooth_Waves:
		return 275;
	case EOpenVibeStimulations::OVTK_GDF_EEG_Idling_EEG_Eyes_Open:
		return 276;
	case EOpenVibeStimulations::OVTK_GDF_EEG_Idling_EEG_Eyes_Closed:
		return 277;
	case EOpenVibeStimulations::OVTK_GDF_EEG_Spike:
		return 278;
	case EOpenVibeStimulations::OVTK_GDF_EEG_Seizure:
		return 279;
	case EOpenVibeStimulations::OVTK_GDF_VEP:
		return 289;
	case EOpenVibeStimulations::OVTK_GDF_AEP:
		return 290;
	case EOpenVibeStimulations::OVTK_GDF_SEP:
		return 291;
	case EOpenVibeStimulations::OVTK_GDF_TMS:
		return 303;
	case EOpenVibeStimulations::OVTK_GDF_SSVEP:
		return 305;
	case EOpenVibeStimulations::OVTK_GDF_SSAEP:
		return 306;
	case EOpenVibeStimulations::OVTK_GDF_SSSEP:
		return 307;
	case EOpenVibeStimulations::OVTK_GDF_Start_Of_Trial:
		return 768;
	case EOpenVibeStimulations::OVTK_GDF_Left:
		return 769;
	case EOpenVibeStimulations::OVTK_GDF_Right:
		return 770;
	case EOpenVibeStimulations::OVTK_GDF_Foot:
		return 771;
	case EOpenVibeStimulations::OVTK_GDF_Tongue:
		return 772;
	case EOpenVibeStimulations::OVTK_GDF_class5:
		return 773;
	case EOpenVibeStimulations::OVTK_GDF_Down:
		return 774;
	case EOpenVibeStimulations::OVTK_GDF_class7:
		return 775;
	case EOpenVibeStimulations::OVTK_GDF_class8:
		return 776;
	case EOpenVibeStimulations::OVTK_GDF_class9:
		return 777;
	case EOpenVibeStimulations::OVTK_GDF_class10:
		return 778;
	case EOpenVibeStimulations::OVTK_GDF_class11:
		return 779;
	case EOpenVibeStimulations::OVTK_GDF_Up:
		return 780;
	case EOpenVibeStimulations::OVTK_GDF_Feedback_Continuous:
		return 781;
	case EOpenVibeStimulations::OVTK_GDF_Feedback_Discrete:
		return 782;
	case EOpenVibeStimulations::OVTK_GDF_Cue_Unknown_Undefined:
		return 783;
	case EOpenVibeStimulations::OVTK_GDF_Beep:
		return 785;
	case EOpenVibeStimulations::OVTK_GDF_Cross_On_Screen:
		return 786;
	case EOpenVibeStimulations::OVTK_GDF_Flashing_Light:
		return 787;
	case EOpenVibeStimulations::OVTK_GDF_End_Of_Trial:
		return 800;
	case EOpenVibeStimulations::OVTK_GDF_Correct:
		return 897;
	case EOpenVibeStimulations::OVTK_GDF_Incorrect:
		return 898;
	case EOpenVibeStimulations::OVTK_GDF_End_Of_Session:
		return 1010;
	case EOpenVibeStimulations::OVTK_GDF_Rejection:
		return 1023;
	case EOpenVibeStimulations::OVTK_GDF_OAHE:
		return 1025;
	case EOpenVibeStimulations::OVTK_GDF_RERA:
		return 1026;
	case EOpenVibeStimulations::OVTK_GDF_CAHE:
		return 1027;
	case EOpenVibeStimulations::OVTK_GDF_CSB:
		return 1028;
	case EOpenVibeStimulations::OVTK_GDF_Sleep_Hypoventilation:
		return 1029;
	case EOpenVibeStimulations::OVTK_GDF_Maximum_Inspiration:
		return 1038;
	case EOpenVibeStimulations::OVTK_GDF_Start_Of_Inspiration:
		return 1039;
	case EOpenVibeStimulations::OVTK_GDF_Wake:
		return 1040;
	case EOpenVibeStimulations::OVTK_GDF_Stage_1:
		return 1041;
	case EOpenVibeStimulations::OVTK_GDF_Stage_2:
		return 1042;
	case EOpenVibeStimulations::OVTK_GDF_Stage_3:
		return 1043;
	case EOpenVibeStimulations::OVTK_GDF_Stage_4:
		return 1044;
	case EOpenVibeStimulations::OVTK_GDF_REM:
		return 1045;
	case EOpenVibeStimulations::OVTK_GDF_Lights_On:
		return 1056;
	case EOpenVibeStimulations::OVTK_GDF_Lights_Off:
		return 33824;
	case EOpenVibeStimulations::OVTK_GDF_Eyes_Left:
		return 1073;
	case EOpenVibeStimulations::OVTK_GDF_Eyes_Right:
		return 1074;
	case EOpenVibeStimulations::OVTK_GDF_Eyes_Up:
		return 1075;
	case EOpenVibeStimulations::OVTK_GDF_Eyes_Down:
		return 1076;
	case EOpenVibeStimulations::OVTK_GDF_Horizontal_Eye_Movement:
		return 1077;
	case EOpenVibeStimulations::OVTK_GDF_Vertical_Eye_Movement:
		return 1078;
	case EOpenVibeStimulations::OVTK_GDF_Rotation_Clockwise:
		return 1079;
	case EOpenVibeStimulations::OVTK_GDF_Rotation_Counterclockwise:
		return 1080;
	case EOpenVibeStimulations::OVTK_GDF_Eye_Blink:
		return 1081;
	case EOpenVibeStimulations::OVTK_GDF_Left_Hand_Movement:
		return 1089;
	case EOpenVibeStimulations::OVTK_GDF_Right_Hand_Movement:
		return 1090;
	case EOpenVibeStimulations::OVTK_GDF_Head_Movement:
		return 1091;
	case EOpenVibeStimulations::OVTK_GDF_Tongue_Movement:
		return 1092;
	case EOpenVibeStimulations::OVTK_GDF_Swallowing:
		return 1093;
	case EOpenVibeStimulations::OVTK_GDF_Biting:
		return 1094;
	case EOpenVibeStimulations::OVTK_GDF_Foot_Movement:
		return 1095;
	case EOpenVibeStimulations::OVTK_GDF_Foot_Right_Movement:
		return 1096;
	case EOpenVibeStimulations::OVTK_GDF_Arm_Movement:
		return 1097;
	case EOpenVibeStimulations::OVTK_GDF_Arm_Right_Movement:
		return 1098;
	case EOpenVibeStimulations::OVTK_GDF_ECG_Fiducial_Point_QRS_Complex:
		return 1281;
	case EOpenVibeStimulations::OVTK_GDF_ECG_P_Wave:
		return 1282;
	case EOpenVibeStimulations::OVTK_GDF_ECG_QRS_Complex:
		return 1283;
	case EOpenVibeStimulations::OVTK_GDF_ECG_R_Point:
		return 1284;
	case EOpenVibeStimulations::OVTK_GDF_ECG_T_Wave:
		return 1286;
	case EOpenVibeStimulations::OVTK_GDF_ECG_U_Wave:
		return 1287;
	case EOpenVibeStimulations::OVTK_GDF_Start:
		return 1408;
	case EOpenVibeStimulations::OVTK_GDF_25_Watt:
		return 1409;
	case EOpenVibeStimulations::OVTK_GDF_50_Watt:
		return 1410;
	case EOpenVibeStimulations::OVTK_GDF_75_Watt:
		return 1411;
	case EOpenVibeStimulations::OVTK_GDF_100_Watt:
		return 1412;
	case EOpenVibeStimulations::OVTK_GDF_125_Watt:
		return 1413;
	case EOpenVibeStimulations::OVTK_GDF_150_Watt:
		return 1414;
	case EOpenVibeStimulations::OVTK_GDF_175_Watt:
		return 1415;
	case EOpenVibeStimulations::OVTK_GDF_200_Watt:
		return 1416;
	case EOpenVibeStimulations::OVTK_GDF_225_Watt:
		return 1417;
	case EOpenVibeStimulations::OVTK_GDF_250_Watt:
		return 1418;
	case EOpenVibeStimulations::OVTK_GDF_275_Watt:
		return 1419;
	case EOpenVibeStimulations::OVTK_GDF_300_Watt:
		return 1420;
	case EOpenVibeStimulations::OVTK_GDF_325_Watt:
		return 1421;
	case EOpenVibeStimulations::OVTK_GDF_350_Watt:
		return 1422;
	case EOpenVibeStimulations::OVTK_GDF_Start_Of_New_Segment:
		return 32766;
	case EOpenVibeStimulations::OVTK_GDF_Non_Equidistant_Sampling_Value:
		return 32767;
		
	default:
		return 0;

	}
}

UUE4OpenVibeTCPBPLibrary::UUE4OpenVibeTCPBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

USocket* UUE4OpenVibeTCPBPLibrary::Connect(FString IP, int32 port, bool& success)
{
	// Create an FSocket pointer to work with and an USocke pointer to return.
	FSocket* MySockTemp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("UE4OpenVibeTCP Managed TCP Socket"), false);
	USocket* NetSock = NewObject<USocket>();

	// Create & set a variable to store the parsed ip address
	FIPv4Address ipv4ip;
	FIPv4Address::Parse(IP, ipv4ip);

	// Now combine that with the port to create the address
	TSharedRef<FInternetAddr> SockAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr(ipv4ip.Value, port);

	// Attempt to connect, and store if it succeeded in a variable
	bool connected = MySockTemp->Connect(*SockAddr);

	// Verify it is connected
	if (!connected)
	{
		// And if not log an error and return an error
		UE_LOG(LogTemp, Error, TEXT("Could not connect"));
		success = false;
		return nullptr;
	}

	// Set the UObject wrappers its socket to the connected one
	NetSock->SetSocket(MySockTemp);

	success = true;
	return NetSock;
}

bool UUE4OpenVibeTCPBPLibrary::SendStimulation(USocket * Connection, EOpenVibeStimulations Stimulation)
{
	// If the passed in socket is not valid
	if (!IsValid(Connection))
	{
		return false;
	}

	// Set an FSocket pointer to the socket inside of the passed in USocket
	FSocket* MySocket = Connection->GetSocket();

	// Check if it is not a null pointer
	if (MySocket == nullptr)
	{
		return false;
	}

	struct timeb currentTime;
	ftime(&currentTime);
	uint64 stimulationTime = currentTime.time * 1000 + currentTime.millitm;

	uint64 message[3];
	message[0] = 0; // unused at the moment
	message[1] = GetOpenVibeStimulationValue(Stimulation);
	message[2] = stimulationTime;

	uint8 *msg0 = (uint8 *)&message[0];
	uint8 *msg1 = (uint8 *)&message[1];
	uint8 *msg2 = (uint8 *)&message[2];

	int32 sent0 = 0;
	int32 sent1 = 0;
	int32 sent2 = 0;

	bool successfull0 = MySocket->Send((uint8*)msg0, sizeof(uint64), sent0);
	bool successfull1 = MySocket->Send((uint8*)msg1, sizeof(uint64), sent1);
	bool successfull2 = MySocket->Send((uint8*)msg2, sizeof(uint64), sent2);

	// And check if there was an error
	if (!successfull0 || !successfull1 || !successfull2)
	{
		UE_LOG(LogTemp, Error, TEXT("Error sending message!!"));
		return false;
	}
	else
	{
		return true;
	}
}

bool UUE4OpenVibeTCPBPLibrary::SendOtherStimulation(USocket * Connection, int Stimulation)
{

	// If the passed in socket is not valid
	if (!IsValid(Connection))
	{
		return false;
	}

	// Set an FSocket pointer to the socket inside of the passed in USocket
	FSocket* MySocket = Connection->GetSocket();

	// Check if it is not a null pointer
	if (MySocket == nullptr)
	{
		return false;
	}

	struct timeb currentTime;
	ftime(&currentTime);
	uint64 stimulationTime = currentTime.time * 1000 + currentTime.millitm;

	uint64 message[3];
	message[0] = 0; // unused at the moment
	message[1] = Stimulation;
	message[2] = stimulationTime;

	uint8 *msg0 = (uint8 *)&message[0];
	uint8 *msg1 = (uint8 *)&message[1];
	uint8 *msg2 = (uint8 *)&message[2];

	int32 sent0 = 0;
	int32 sent1 = 0;
	int32 sent2 = 0;

	bool successfull0 = MySocket->Send((uint8*)msg0, sizeof(uint64), sent0);
	bool successfull1 = MySocket->Send((uint8*)msg1, sizeof(uint64), sent1);
	bool successfull2 = MySocket->Send((uint8*)msg2, sizeof(uint64), sent2);

	// And check if there was an error
	if (!successfull0 || !successfull1 || !successfull2)
	{
		UE_LOG(LogTemp, Error, TEXT("Error sending message!!"));
		return false;
	}
	else
	{
		return true;
	}
}

bool UUE4OpenVibeTCPBPLibrary::CloseConnection(USocket * Connection)
{
	// If the passed in socket is not valid
	if (!IsValid(Connection))
	{
		return false;
	}

	// Set an FSocket pointer to the socket inside of the passed in USocket
	FSocket* MySocket = Connection->GetSocket();

	// Check if it is not a null pointer
	if (MySocket == nullptr)
	{
		return false;
	}

	// Attempt to close it and return if it was successful or not
	return MySocket->Close();
}

