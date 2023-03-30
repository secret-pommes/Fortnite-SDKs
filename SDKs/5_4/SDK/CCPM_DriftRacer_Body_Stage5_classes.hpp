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

// 0x20 (0x358 - 0x338)
// BlueprintGeneratedClass CCPM_DriftRacer_Body_Stage5.CCPM_DriftRacer_Body_Stage5_C
class ACCPM_DriftRacer_Body_Stage5_C : public ACustomCharacterPartModifier
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x338(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_Drift_Electrical_OnBody;                         // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              EyeTrails;                                         // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CCPM_DriftRacer_Body_Stage5_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnPawnAndPartChanged();
	void ExecuteUbergraph_CCPM_DriftRacer_Body_Stage5(int32 EntryPoint, class AFortPlayerPawn* CallFunc_GetAssociatedPlayerPawn_ReturnValue, enum class EFortCustomPartType CallFunc_GetCharacterPartType_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
