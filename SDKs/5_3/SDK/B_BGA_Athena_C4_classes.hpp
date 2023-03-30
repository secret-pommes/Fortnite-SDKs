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

// 0xE4 (0x7B4 - 0x6D0)
// BlueprintGeneratedClass B_BGA_Athena_C4.B_BGA_Athena_C4_C
class AB_BGA_Athena_C4_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6D0(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_ProximityMine_Beacon_01;                         // 0x6D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_C4_Explosive;                                   // 0x6E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Root_Sphere_Collision;                             // 0x6E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*          ProjectileMovement1;                               // 0x6F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Land_Sound;                                        // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Impact_Loc;                                        // 0x700(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitNormal;                                         // 0x70C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventExplosion;                                    // 0x718(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ExplosionRangeDefaultTag;                          // 0x720(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Activation_Radius;                                 // 0x728(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Activation_Delay;                                  // 0x72C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostThrowEndDelay;                                 // 0x730(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionRadius;                                   // 0x734(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bExploded;                                         // 0x738(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDead_;                                           // 0x739(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_37DE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       Player_Owner;                                      // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExplosionLevel;                                    // 0x748(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UForceFeedbackEffect*                  ExplosionForceFeedbackNear;                        // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackFar;                         // 0x758(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Explosion_Sound;                                   // 0x760(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            PreExplosion_Sound;                                // 0x768(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RotationInAir;                                     // 0x770(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bExplodeOnDeath;                                   // 0x77C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bDestroyOnDeath;                                   // 0x77D(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        FoundBuildingOnDied;                               // 0x780(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         bResumeSimulation;                                 // 0x790(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         bTriggeredExplosion;                               // 0x791(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       Original_Player_Owner;                             // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HandleHitPassed;                                   // 0x7A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SphereOverlapRadius;                               // 0x7A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayBetweenStructureDestruction;                  // 0x7A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowExplode_;                                     // 0x7AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LandedTime;                                        // 0x7B0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_BGA_Athena_C4_C");
		return Clss;
	}

	void OnRep_LandedTime(bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, enum class EFortTeam CallFunc_GetActorTeam_ReturnValue, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array);
	void HandleHits(class UObject* Object, class UPrimitiveComponent* Comp);
	void HandleHitSupplyDrop(class UObject* Object, class UPrimitiveComponent* Component, class ABP_DamageBalloon_Athena_C* K2Node_DynamicCast_AsBP_Damage_Balloon_Athena, bool K2Node_DynamicCast_bSuccess, class AFortAthenaSupplyDrop* K2Node_DynamicCast_AsFort_Athena_Supply_Drop, bool K2Node_DynamicCast_bSuccess1);
	void HandleHitVehicleOrCube(class UObject* Object, class USceneComponent* Component, class ACUBE_C* K2Node_DynamicCast_AsCUBE, bool K2Node_DynamicCast_bSuccess, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess1);
	void OnRep_bTriggeredExplosion();
	void OnRep_bResumeSimulation();
	void HandleWasAttachedToWall(class UObject* Object, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class UPrimitiveComponent*>& CallFunc_SphereOverlapComponents_OutComponents, bool CallFunc_SphereOverlapComponents_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item);
	void HandleHitBuildingWall(class UObject* Object, class UPrimitiveComponent* Comp, class ABuildingWall* LocalWall, class ABuildingWall* K2Node_DynamicCast_AsBuilding_Wall, bool K2Node_DynamicCast_bSuccess, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsDoorComponent_ReturnValue);
	void OnRep_IsDead_(bool CallFunc_Not_PreBool_ReturnValue);
	void UserConstructionScript(enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult1, float CallFunc_EvaluateCurveTableRow_OutXY1, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult2, float CallFunc_EvaluateCurveTableRow_OutXY2, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue1, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue1, bool K2Node_SwitchEnum1_CmpSuccess, bool K2Node_SwitchEnum2_CmpSuccess);
	void SetProjectile(float Init_Speed, float Gravity, float Activation_Delay);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void DamageExplode(class AFortPlayerPawnAthena* DamageOwner);
	void SetExplosion(int32 Explosion_Level, float Activation_Radius, class AFortPlayerPawn* PlayerPawn);
	void BaseDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void BaseDestroyed(class AActor* DestroyedActor);
	void TriggeredExplosion(float DelayForChainExplode);
	void ExplodeOnOwnerDeath(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ExecuteUbergraph_B_BGA_Athena_C4(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawnAthena* K2Node_CustomEvent_DamageOwner, bool CallFunc_HasAuthority_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, enum class EFortTeam CallFunc_GetActorTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 K2Node_CustomEvent_Explosion_Level, float K2Node_CustomEvent_Activation_Radius, class AFortPlayerPawn* K2Node_CustomEvent_PlayerPawn, class AActor* K2Node_CustomEvent_DamagedActor1, float K2Node_CustomEvent_Damage1, class AController* K2Node_CustomEvent_InstigatedBy1, class AActor* K2Node_CustomEvent_DamageCauser1, const struct FVector& K2Node_CustomEvent_HitLocation1, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent1, class FName K2Node_CustomEvent_BoneName1, const struct FVector& K2Node_CustomEvent_Momentum1, class AActor* K2Node_CustomEvent_DestroyedActor, bool CallFunc_IsValid_ReturnValue1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class AActor* CallFunc_Array_Get_Item, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor1, bool K2Node_DynamicCast_bSuccess1, class AB_BGA_Athena_C4_C* K2Node_DynamicCast_AsB_BGA_Athena_C4, bool K2Node_DynamicCast_bSuccess2, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess3, float K2Node_CustomEvent_Init_Speed, float K2Node_CustomEvent_Gravity, float K2Node_CustomEvent_Activation_Delay, float K2Node_CustomEvent_DelayForChainExplode, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess4, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float K2Node_Event_Damage2, const struct FGameplayTagContainer& K2Node_Event_DamageTags2, const struct FVector& K2Node_Event_Momentum2, const struct FHitResult& K2Node_Event_HitInfo2, class AFortPawn* K2Node_Event_InstigatedBy2, class AActor* K2Node_Event_DamageCauser2, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext2, float K2Node_Event_Damage1, const struct FGameplayTagContainer& K2Node_Event_DamageTags1, const struct FVector& K2Node_Event_Momentum1, const struct FHitResult& K2Node_Event_HitInfo1, class AController* K2Node_Event_InstigatedBy1, class AActor* K2Node_Event_DamageCauser1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena1, bool K2Node_DynamicCast_bSuccess5, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool CallFunc_HasAuthority_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue1, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_HasAuthority_ReturnValue2, TArray<class AActor*>& K2Node_MakeArray_Array1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, const struct FLinearColor& K2Node_Select_Default, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool Temp_bool_IsClosed_Variable1, bool CallFunc_IsValid_ReturnValue3, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData2, bool Temp_bool_Has_Been_Initd_Variable2, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array2, enum class EFortTeam CallFunc_GetActorTeam_ReturnValue1, bool Temp_bool_IsClosed_Variable2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float CallFunc_GetServerWorldTimeSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue4, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess6, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
