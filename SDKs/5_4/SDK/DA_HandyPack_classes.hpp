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

// 0x30 (0xBE0 - 0xBB0)
// BlueprintGeneratedClass DA_HandyPack.DA_HandyPack_C
class ADA_HandyPack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB0(0x8)(Transient, DuplicateTransient)
	float                                        MinHeldTime;                                       // 0xBB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_465A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ButtonHeldTimer;                                   // 0xBC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CanFire;                                           // 0xBC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AlreadyReleased;                                   // 0xBC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_465B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Med_Pack_OverlapVolume_C*          OverlapVolume;                                     // 0xBD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TargetToKnock;                                     // 0xBD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DA_HandyPack_C");
		return Clss;
	}

	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPReleaseTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_HandyPack(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetInstigator_ReturnValue1, class AFortDecoHelper* K2Node_Event_FortDecoHelper, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn1, bool K2Node_DynamicCast_bSuccess1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
