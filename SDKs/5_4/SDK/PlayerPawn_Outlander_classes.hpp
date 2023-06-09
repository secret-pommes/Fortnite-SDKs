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

// 0x3E0 (0x2718 - 0x2338)
// BlueprintGeneratedClass PlayerPawn_Outlander.PlayerPawn_Outlander_C
class APlayerPawn_Outlander_C : public APlayerPawn_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2338(0x8)(Transient, DuplicateTransient)
	class UBoxComponent*                         PhaseShiftHitBox;                                  // 0x2340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         AntiMaterialHitBox;                                // 0x2348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      KeenEyesRadius;                                    // 0x2350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Outlander_PhaseShift_Impact_01;                  // 0x2358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        PhaseShiftHitSweep_Sweep_81A0178F416D1106B841D9A9B7E8C737; // 0x2360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PhaseShiftHitSweep__Direction_81A0178F416D1106B841D9A9B7E8C737; // 0x2364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PhaseShiftHitSweep;                                // 0x2368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_FragmentActivation;                              // 0x2370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Core_Index_0;                                      // 0x2378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Core_Index_1;                                      // 0x2380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Core_Index_2;                                      // 0x2388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Diamond_Index3;                                    // 0x2390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Diamond_Index4;                                    // 0x2398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Diamond_Index5;                                    // 0x23A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Sparkles_Index8;                                   // 0x23A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Smoke_Index7;                                      // 0x23B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Diamond_Index6;                                    // 0x23B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Sparkles_Index9;                                   // 0x23C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OffensiveColor1;                                   // 0x23C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OffensiveColor2;                                   // 0x23D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DefensiveColor1;                                   // 0x23E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DefensiveColor2;                                   // 0x23F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SpecialtyColor1;                                   // 0x2408(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SpecialtyColor2;                                   // 0x2418(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_SpecialityBuff;                                 // 0x2428(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_DefensiveBuff;                                  // 0x2448(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_OffensiveBuff;                                  // 0x2468(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class E_Outlander_FragmentTypes         FragType;                                          // 0x2488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       P_FragmentOffense;                                 // 0x2490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_FragmentDefense;                                 // 0x2498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_FragmentSpeciality;                              // 0x24A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_InTheZone_Activate;                              // 0x24A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnPlayerBuiltFloor;                                // 0x24B0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_4F89[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    EventData;                                         // 0x24B8(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EventNeedRoadsActivate;                            // 0x2560(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventNeedRoadsDeactivate;                          // 0x2568(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_WhereWereGoingWeNeedRoads_0;                    // 0x2570(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                       P_Fragment;                                        // 0x2590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Specialty;                                       // 0x2598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Defensive;                                       // 0x25A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Offensive;                                       // 0x25A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortFeedbackHandle                   Feedback_ShardGet;                                 // 0x25B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFortFeedbackHandle                   Feedback_OffensiveShard;                           // 0x25C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFortFeedbackHandle                   Feedback_DefensiveShard;                           // 0x25E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFortFeedbackHandle                   Feedback_SpecialtyShard;                           // 0x25F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class USoundBase*                            Sound_Frg_Offensive_Start;                         // 0x2610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Frg_Defensive_Start;                         // 0x2618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Frg_Resource_Start;                          // 0x2620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Frg_Stop;                                    // 0x2628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_Frg_Collect;                                 // 0x2630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_InTheZone_Running;                               // 0x2638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_InTheZone_Hit;                                   // 0x2640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Spawn_Color;                                       // 0x2648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>      Head_Effect_Mesh_Materials;                        // 0x2650(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      Body_Effect_Mesh_Materials;                        // 0x2660(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                    Phase_Shift_Material_;                             // 0x2670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPhaseShiftActive_;                                // 0x2678(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       KnockKnockFX;                                      // 0x2680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Handtrail;                                       // 0x2688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_AMCDustKickup;                                   // 0x2690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_AMCShockwave;                                    // 0x2698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Handtrail_Active;                                // 0x26A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_ArmThruster;                                     // 0x26A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Arm_Thuster_Active;                              // 0x26B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ChargeUpSoundCue;                                  // 0x26B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ChargeUpAudioComp;                                 // 0x26C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ChargeUpCameraShake;                               // 0x26C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             AMCImpactEnemySound;                               // 0x26D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             AMCImpactBuildingSound;                            // 0x26D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AMCImpactCameraShake;                              // 0x26E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Teleport_Particles;                                // 0x26E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_Index;                                     // 0x26F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F8B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                GuantletReference;                                 // 0x26F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_SpawnedHandTrail;                                // 0x2700(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChargeTrailIsVisible;                              // 0x2708(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       P_HitBurst;                                        // 0x2710(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerPawn_Outlander_C");
		return Clss;
	}

	void OnRep_OnPlayerBuiltFloor(const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
	void UserConstructionScript();
	void PhaseShiftHitSweep__FinishedFunc();
	void PhaseShiftHitSweep__UpdateFunc();
	void GameplayCue_Explorer_Fragment(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Outlander_InTheZone_FX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ReceivePossessed(class AController* NewController);
	void GameplayCue_Explorer_Fragment_Offense_PickupFX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Explorer_Fragment_Defense_PickupFX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Explorer_Fragment_Specialty_PickupFX(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void WithinReachOfTreasure(const struct FLinearColor& VSpawnColor, bool Activate);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void RefreshIcons();
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void EventOnDamagePlayFX();
	void GameplayCue_Outlander_KnockKnock(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialCharge(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeThruster(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeChargeUp(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeImpact(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ForceQuickbarUpdate();
	void ReceiveBeginPlay();
	void PlayGauntletMontage(class UAnimMontage* MontageName);
	void SetMenuScreenClassName();
	void ChargedUp();
	void PlayChargeCommonFX();
	void ExecuteUbergraph_PlayerPawn_Outlander(int32 EntryPoint, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType10, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters10, bool K2Node_SwitchEnum_CmpSuccess, class AController* K2Node_Event_NewController, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType9, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters9, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType8, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters8, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_SwitchEnum2_CmpSuccess, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType7, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters7, bool K2Node_SwitchEnum3_CmpSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue4, int32 Temp_int_Array_Index_Variable, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue5, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue6, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, const struct FLinearColor& K2Node_CustomEvent_VSpawnColor, bool K2Node_CustomEvent_Activate, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType6, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters6, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType5, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters5, bool K2Node_SwitchEnum4_CmpSuccess, bool K2Node_SwitchEnum5_CmpSuccess, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue1, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller1, bool K2Node_DynamicCast_bSuccess1, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType4, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters4, bool K2Node_SwitchEnum6_CmpSuccess, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType3, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters3, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType2, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool K2Node_SwitchEnum7_CmpSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class AController* CallFunc_GetController_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue7, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller2, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsLocalPlayerController_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters1, bool K2Node_SwitchEnum8_CmpSuccess, class AController* CallFunc_GetController_ReturnValue3, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsLocalPlayerController_ReturnValue1, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, class AController* CallFunc_GetController_ReturnValue4, bool K2Node_SwitchEnum9_CmpSuccess, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller4, bool K2Node_DynamicCast_bSuccess4, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType11, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters11, bool K2Node_SwitchEnum10_CmpSuccess, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface1_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue1, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface2_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue2, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Array_Index_Variable2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item1, int32 Temp_int_Loop_Counter_Variable1, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, class UAnimMontage* K2Node_CustomEvent_MontageName, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_Less_IntInt_ReturnValue2, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue2, float CallFunc_Montage_Play_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_GetGender_IsMale, bool CallFunc_GetGender_IsFemale, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess6, bool CallFunc_GetGender_IsMale1, bool CallFunc_GetGender_IsFemale1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue1, class UFortnite_M_Avg_Player_MenusScreen_AnimBP_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Menus_Screen_Anim_BP, bool K2Node_DynamicCast_bSuccess7, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue5, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue6);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
