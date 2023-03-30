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

// 0x178 (0x840 - 0x6C8)
// BlueprintGeneratedClass B_Prj_Hook_Athena.B_Prj_Hook_Athena_C
class AB_Prj_Hook_Athena_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6C8(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x6D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x6D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh3;                                       // 0x6E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Comeback_NewTrack_0_CA913F9B4BFA9A9384E1D2AFF544018C; // 0x6E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Comeback__Direction_CA913F9B4BFA9A9384E1D2AFF544018C; // 0x6EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6162[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Comeback;                                          // 0x6F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             Target;                                            // 0x6F8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x700(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6163[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HookStopped;                                       // 0x710(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Arrived;                                           // 0x711(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6164[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          ClawTimer;                                         // 0x718(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        ArriveDistanceCheck;                               // 0x720(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6165[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPickup*>                   FortPickupTarget;                                  // 0x728(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UProjectileMovementComponent*          ItemMovement;                                      // 0x738(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ArrayTest;                                         // 0x740(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AFortPickup*                           VFortPickup;                                       // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               NewVar_0;                                          // 0x758(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BoomerangLocation;                                 // 0x764(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PlayerLocation;                                    // 0x770(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Origin;                                            // 0x77C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GotAnIdiot;                                        // 0x788(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6166[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x78C(0xC)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         AirControl;                                        // 0x798(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6167[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            StickSound;                                        // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            StuckToPlayerSound;                                // 0x7A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetPullDelay;                                   // 0x7B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceFromInstigator;                            // 0x7B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            TravelSound;                                       // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FToyAngleSelectorInfo>         LaunchAngleVariations;                             // 0x7C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AB_Hookgun_Athena_C*                   Weapon_Actor;                                      // 0x7D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_HookGunRope_C*                      Rope;                                              // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PreLaunchVelocity;                                 // 0x7E0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FireAImPitch;                                      // 0x7EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DownPitchMin;                                      // 0x7F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DownPitchMax;                                      // 0x7F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdditionalZ;                                       // 0x7F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LifeTime;                                          // 0x7FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x800(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            YankBackSound;                                     // 0x808(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            RopeDestroySound;                                  // 0x810(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RopeActiveTag;                                     // 0x818(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          BlockIncomingPickups;                              // 0x820(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactNormal;                                      // 0x828(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6168[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            StickSound2D;                                      // 0x838(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Hook_Athena_C");
		return Clss;
	}

	void OnRep_HitLocation();
	void PickGrappleMontage(float PitchAngle, class FName* SectionName, float CleanedAngle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_ClampAngle_ReturnValue, const struct FToyAngleSelectorInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void VehicleGrapple(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPlayerPawn* CallFunc_Array_Get_Item, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PickGrappleMontageSection(float PitchAngle, class FName* SectionName, float CleanedAngle, int32 Temp_int_Array_Index_Variable, float CallFunc_ClampAngle_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FToyAngleSelectorInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnRep_HookStopped();
	void OnRep_Target();
	void Grapple(enum class ENetRole CallFunc_GetLocalRole_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AEmitterCameraLensEffectBase* CallFunc_SpawnCameraLensEffect_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity1, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue1, class AEmitterCameraLensEffectBase* CallFunc_SpawnCameraLensEffect_ReturnValue1);
	void CalculateYankForce(enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1);
	void IncapacitateTarget(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, class AController* CallFunc_GetController_ReturnValue);
	void HandleHits(const struct FHitResult& Hit, class AActor** Target, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
	void PlayStickSounds(const struct FVector& Location, class AActor* HitActor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue1, bool CallFunc_IsLocallyControlled_ReturnValue2, bool CallFunc_IsValid_ReturnValue1);
	void UserConstructionScript();
	void Comeback__FinishedFunc();
	void Comeback__UpdateFunc();
	void OnNotifyEnd_0A1B172F45DE2A614770489FAD619748(class FName NotifyName);
	void OnNotifyBegin_0A1B172F45DE2A614770489FAD619748(class FName NotifyName);
	void OnInterrupted_0A1B172F45DE2A614770489FAD619748(class FName NotifyName);
	void OnBlendOut_0A1B172F45DE2A614770489FAD619748(class FName NotifyName);
	void OnCompleted_0A1B172F45DE2A614770489FAD619748(class FName NotifyName);
	void OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName);
	void OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName);
	void OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName);
	void OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName);
	void OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4(class FName NotifyName);
	void OnStop(struct FHitResult& Hit);
	void ReceiveDestroyed();
	void Yank();
	void Travel();
	void TheClaw();
	void ClawII();
	void ReceiveBeginPlay();
	void WeaponCheck();
	void ExecuteUbergraph_B_Prj_Hook_Athena(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName8, class FName K2Node_CustomEvent_NotifyName7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class FName K2Node_CustomEvent_NotifyName5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FName Temp_name_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class FName K2Node_CustomEvent_NotifyName4, class FName K2Node_CustomEvent_NotifyName3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class FName K2Node_CustomEvent_NotifyName2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class FName K2Node_CustomEvent_NotifyName1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, class FName K2Node_CustomEvent_NotifyName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, class FName Temp_name_Variable1, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FHitResult& CallFunc_K2_AddActorLocalOffset_SweepHitResult, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, float CallFunc_VSize_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, const struct FHitResult& K2Node_Event_Hit, class AActor* CallFunc_HandleHits_Target, class AActor* CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_VSize_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue5, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue4, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue6, class AActor* CallFunc_GetOwner_ReturnValue, class AB_Hookgun_Athena_C* K2Node_DynamicCast_AsB_Hookgun_Athena, bool K2Node_DynamicCast_bSuccess1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue7, bool CallFunc_IsDedicatedServer_ReturnValue1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetInstigatorController_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_CustomEvent_NotifyName9, bool CallFunc_IsInVehicle_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, float CallFunc_GetBaseAimPitchQuantized_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AB_HookGunRope_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue8, class AController* CallFunc_GetInstigatorController_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class FName CallFunc_PickGrappleMontage_SectionName, bool CallFunc_IsValid_ReturnValue3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue1, bool CallFunc_IsValid_ReturnValue4, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class USoundBase* K2Node_Select_Default, bool CallFunc_GetPendingSkydiveLaunch_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_GetPendingSkydiveLaunch_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_IsSkydiving_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif