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

// 0x24 (0x80C - 0x7E8)
// BlueprintGeneratedClass B_PlayerSpawnedBall.B_PlayerSpawnedBall_C
class AB_PlayerSpawnedBall_C : public APhysicsBall_Master_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7E8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ImpactFX_0;                                        // 0x7F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CueToPlayWhenReused;                               // 0x7F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CueToPlayWhenExpired;                              // 0x800(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        BounceCount_0;                                     // 0x808(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_PlayerSpawnedBall_C");
		return Clss;
	}

	void PlayCueCenteredOnMe(const struct FGameplayTag& GameplayCueToPlay, float Raw_Magnitude, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector_NetQuantize10& K2Node_MakeStruct_Vector_NetQuantize10, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters);
	void UserConstructionScript();
	void NotifyToyInstanceOfReuse();
	void StartToyFadeOutDueToNewPlacement();
	void InitializeToyInstance(class AFortPlayerController* OwningPC, int32 NumTimesSummoned);
	void InitializeToyPreviewInFrontend();
	void ExecuteUbergraph_B_PlayerSpawnedBall(int32 EntryPoint, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPlayerController* K2Node_Event_OwningPC, int32 K2Node_Event_NumTimesSummoned);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
