#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function B_BattleBus_BirthDay.B_BattleBus_BirthDay_C.UserConstructionScript
struct AB_BattleBus_BirthDay_C_UserConstructionScript_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_BattleBus_BirthDay.B_BattleBus_BirthDay_C.Bus Music Fader__FinishedFunc
struct AB_BattleBus_BirthDay_C_Bus_Music_Fader__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_BattleBus_BirthDay.B_BattleBus_BirthDay_C.Bus Music Fader__UpdateFunc
struct AB_BattleBus_BirthDay_C_Bus_Music_Fader__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_BattleBus_BirthDay.B_BattleBus_BirthDay_C.Light Flash Timeline__FinishedFunc
struct AB_BattleBus_BirthDay_C_Light_Flash_Timeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_BattleBus_BirthDay.B_BattleBus_BirthDay_C.Light Flash Timeline__UpdateFunc
struct AB_BattleBus_BirthDay_C_Light_Flash_Timeline__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_BattleBus_BirthDay.B_BattleBus_BirthDay_C.Light Flash Timeline__Beat__EventFunc
struct AB_BattleBus_BirthDay_C_Light_Flash_Timeline__Beat__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_BattleBus_BirthDay.B_BattleBus_BirthDay_C.Light Flash Timeline__Loop__EventFunc
struct AB_BattleBus_BirthDay_C_Light_Flash_Timeline__Loop__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_BattleBus_BirthDay.B_BattleBus_BirthDay_C.ReceiveBeginPlay
struct AB_BattleBus_BirthDay_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_BattleBus_BirthDay.B_BattleBus_BirthDay_C.Start Audio
struct AB_BattleBus_BirthDay_C_Start_Audio_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_BattleBus_BirthDay.B_BattleBus_BirthDay_C.GrabAudioReferences
struct AB_BattleBus_BirthDay_C_GrabAudioReferences_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_BattleBus_BirthDay.B_BattleBus_BirthDay_C.ReceiveEndPlay
struct AB_BattleBus_BirthDay_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function B_BattleBus_BirthDay.B_BattleBus_BirthDay_C.ExecuteUbergraph_B_BattleBus_BirthDay
struct AB_BattleBus_BirthDay_C_ExecuteUbergraph_B_BattleBus_BirthDay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D75[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue1;          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetFlightLoopingSound_ReturnValue;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetFlightLoopingMusic_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue1;           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue2;           // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue1;              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D78[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
