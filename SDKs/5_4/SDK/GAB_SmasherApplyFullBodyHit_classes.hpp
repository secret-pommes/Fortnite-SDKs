#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x968 - 0x950)
// BlueprintGeneratedClass GAB_SmasherApplyFullBodyHit.GAB_SmasherApplyFullBodyHit_C
class UGAB_SmasherApplyFullBodyHit_C : public UGAB_GenericApplyFullBodyHit_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x950(0x8)(Transient, DuplicateTransient)
	class FName                                  Front;                                             // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentNum;                                        // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PreviousNum;                                       // 0x964(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAB_SmasherApplyFullBodyHit_C");
		return Clss;
	}

	void PickFullBodyHitMontageSection();
	void ExecuteUbergraph_GAB_SmasherApplyFullBodyHit(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_SetFNameBasedOnHitDirection_NameResult, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
