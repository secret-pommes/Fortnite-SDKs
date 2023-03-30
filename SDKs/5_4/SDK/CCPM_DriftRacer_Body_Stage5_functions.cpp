#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function CCPM_DriftRacer_Body_Stage5.CCPM_DriftRacer_Body_Stage5_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACCPM_DriftRacer_Body_Stage5_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("CCPM_DriftRacer_Body_Stage5_C", "UserConstructionScript");

	Params::ACCPM_DriftRacer_Body_Stage5_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_DriftRacer_Body_Stage5.CCPM_DriftRacer_Body_Stage5_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACCPM_DriftRacer_Body_Stage5_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("CCPM_DriftRacer_Body_Stage5_C", "ReceiveBeginPlay");

	Params::ACCPM_DriftRacer_Body_Stage5_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_DriftRacer_Body_Stage5.CCPM_DriftRacer_Body_Stage5_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ACCPM_DriftRacer_Body_Stage5_C::OnPawnAndPartChanged()
{
	static auto Func = Class->GetFunction("CCPM_DriftRacer_Body_Stage5_C", "OnPawnAndPartChanged");

	Params::ACCPM_DriftRacer_Body_Stage5_C_OnPawnAndPartChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CCPM_DriftRacer_Body_Stage5.CCPM_DriftRacer_Body_Stage5_C.ExecuteUbergraph_CCPM_DriftRacer_Body_Stage5
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetAssociatedPlayerPawn_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortCustomPartType     CallFunc_GetCharacterPartType_ReturnValue                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACCPM_DriftRacer_Body_Stage5_C::ExecuteUbergraph_CCPM_DriftRacer_Body_Stage5(int32 EntryPoint, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, enum class EFortCustomPartType CallFunc_GetCharacterPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("CCPM_DriftRacer_Body_Stage5_C", "ExecuteUbergraph_CCPM_DriftRacer_Body_Stage5");

	Params::ACCPM_DriftRacer_Body_Stage5_C_ExecuteUbergraph_CCPM_DriftRacer_Body_Stage5_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAssociatedPlayerPawn_ReturnValue = CallFunc_GetAssociatedPlayerPawn_ReturnValue;
	Parms.CallFunc_GetCharacterPartType_ReturnValue = CallFunc_GetCharacterPartType_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
