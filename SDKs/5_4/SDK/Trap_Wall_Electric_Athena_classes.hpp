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

// 0x80 (0xD08 - 0xC88)
// BlueprintGeneratedClass Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C
class ATrap_Wall_Electric_Athena_C : public ABuildingTrapWall
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC88(0x8)(Transient, DuplicateTransient)
	class UBoxComponent*                         SoundTriggerComponent;                             // 0xC90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         TriggerComponent;                                  // 0xC98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              IdleFX_Coil_R;                                     // 0xCA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              IdleFX_Coil_L;                                     // 0xCA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  Light_onFire;                                      // 0xCB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              IdleFX_Arcs_R;                                     // 0xCB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              IdleFX_Arcs_L;                                     // 0xCC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0xCC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeLight_Brightness_C184AADC4D731F4EF02D419DFF483ED3; // 0xCD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeLight__Direction_C184AADC4D731F4EF02D419DFF483ED3; // 0xCD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeLight;                                         // 0xCD8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Activate_Sound_Cue;                                // 0xCE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Placed_Sound_Cue;                                  // 0xCE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Explode_Sound_Cue;                                 // 0xCF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Fire_Sound_Cue;                               // 0xCF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ChargeSoundInst;                                   // 0xD00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Trap_Wall_Electric_Athena_C");
		return Clss;
	}

	void PlayActivationSoundAndFX(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue);
	void FadeLight__FinishedFunc();
	void FadeLight__UpdateFunc();
	void OnPlaced();
	void OnFinishedBuilding();
	void OnReloadEnd();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_Trap_Wall_Electric_Athena(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam4, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam5, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam6, bool CallFunc_IsValid_ReturnValue, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, float Temp_float_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
