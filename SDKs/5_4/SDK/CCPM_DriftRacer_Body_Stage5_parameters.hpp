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

// 0x0 (0x0 - 0x0)
// Function CCPM_DriftRacer_Body_Stage5.CCPM_DriftRacer_Body_Stage5_C.UserConstructionScript
struct ACCPM_DriftRacer_Body_Stage5_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CCPM_DriftRacer_Body_Stage5.CCPM_DriftRacer_Body_Stage5_C.ReceiveBeginPlay
struct ACCPM_DriftRacer_Body_Stage5_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CCPM_DriftRacer_Body_Stage5.CCPM_DriftRacer_Body_Stage5_C.OnPawnAndPartChanged
struct ACCPM_DriftRacer_Body_Stage5_C_OnPawnAndPartChanged_Params
{
public:
};

// 0x21 (0x21 - 0x0)
// Function CCPM_DriftRacer_Body_Stage5.CCPM_DriftRacer_Body_Stage5_C.ExecuteUbergraph_CCPM_DriftRacer_Body_Stage5
struct ACCPM_DriftRacer_Body_Stage5_C_ExecuteUbergraph_CCPM_DriftRacer_Body_Stage5_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       CallFunc_GetAssociatedPlayerPawn_ReturnValue;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomPartType               CallFunc_GetCharacterPartType_ReturnValue;         // 0x10(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
