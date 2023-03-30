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

// 0x4998 (0x4DC8 - 0x430)
// AnimBlueprintGeneratedClass M_MED_SRDrift_tier0506_AnimBP.M_MED_SRDrift_tier0506_AnimBP_C
class UM_MED_SRDrift_tier0506_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_85DC418F4768BCD9409E6CA7C2601A0A; // 0x438(0x40)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_CA742059408EA2115DF83DB8921CD6BF; // 0x478(0xE8)(ContainsInstancedReference)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_63834C5345D0E00DDCE48B861E94AB2D; // 0x560(0x390)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_2E6441E24E4C365305E1A1B31A5394A7; // 0x8F0(0x390)()
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_4069FA9A49746007D542BCA5A037BF11; // 0xC80(0x160)()
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_1D88E63A40EDDE3B5E9813B0CAB1B72C; // 0xDE0(0x160)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_0EE98A98485B566E587B3284C7082B62; // 0xF40(0x40)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3901FDBA403543ECE46416A74FF3B63F; // 0xF80(0x390)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_52092C65461ACD18D5B01BB4D030B168; // 0x1310(0x390)()
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_DC8B26F042AA8F053064A0B595ABBDAF; // 0x16A0(0x160)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_15DFE2DE4E7AA7E24B7B0D970D389350; // 0x1800(0x40)()
	struct FAnimNode_PoseByName                  AnimGraphNode_PoseByName_1641822444C2EEB6BCE5DE8DA872FF52; // 0x1840(0xA0)()
	struct FAnimNode_PoseByName                  AnimGraphNode_PoseByName_3203E6D74B4AB9C6F8DFA19343A0AB89; // 0x18E0(0xA0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_9A1BB2FD4854E063F238FCA0491E7677; // 0x1980(0xF0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_461003D24DCB3E3C6A0958818BE9102B; // 0x1A70(0xF0)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_CEBCF56443A3BADC9E7FB6B442941B22; // 0x1B60(0x390)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_C0E7F6384786E9DA5364F3AB256CAE86; // 0x1EF0(0x40)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_F03B3FE047D1A063A86F0CBE93E6C891; // 0x1F30(0x390)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1843F30F4FA7AF1E0494F8801D7AB020; // 0x22C0(0x390)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_C1978BB04307CD9269E25885CC00FB91; // 0x2650(0x390)()
	struct FAnimNode_PoseByName                  AnimGraphNode_PoseByName_D33A98C64CF097DC88B4DC89AE6AA2B7; // 0x29E0(0xA0)()
	struct FAnimNode_PoseByName                  AnimGraphNode_PoseByName_1C4B35C34844295DA83A9CB042DF9FF6; // 0x2A80(0xA0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_D1DAA75D4B8FA763AD03159507EA6776; // 0x2B20(0xF0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_04395959452FE43B8D1687971751D5F0; // 0x2C10(0xF0)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3ADF8BD946835966F1CA26B35D12DCAA; // 0x2D00(0x390)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4E5E09D548BBEE0EB413E0AAA285DE7E; // 0x3090(0x390)()
	struct FAnimNode_PoseDriver                  AnimGraphNode_PoseDriver_3532ACC4449F220BDBF5E8856122D24C; // 0x3420(0x160)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_71EF39D347649D25B6EBCCA63BD2CAD3; // 0x3580(0x40)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_752267EB49E0FB7E96A433B1BDC1D925; // 0x35C0(0x390)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4E143E2D4A715119040FD68FCD5E408E; // 0x3950(0x390)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5773EDAB45A84383634F9C8B1C2C04F6; // 0x3CE0(0x390)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5B1B8E0B46D831C904E026B6975FEEFB; // 0x4070(0x138)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4869C6DD4A5CC36B7EF84CAABB4CFEE8; // 0x41A8(0x138)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_42AE03A04827851ACAC81CB3D89F221C; // 0x42E0(0x138)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_F36B21454F10D97C35E06E87B3B7812C; // 0x4418(0x138)()
	struct FAnimNode_PoseByName                  AnimGraphNode_PoseByName_60A6B2314D6EAF7C6994C9BAAF4D95DC; // 0x4550(0xA0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_9ACF7AD34AC1E7807701819A84470B17; // 0x45F0(0xF0)()
	struct FAnimNode_PoseByName                  AnimGraphNode_PoseByName_D710E5374D5ADB8E6A1BD48F485D5312; // 0x46E0(0xA0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_5D3272974F7DC202A9CB8797FA110960; // 0x4780(0xF0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2CE0DC664952FE78E49D8AA331E95E0D; // 0x4870(0x138)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_32DBCE5645EDC611219261BBDD2DE135; // 0x49A8(0x138)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_18D08B7C40A1C309CBD76B877C43327E; // 0x4AE0(0x128)()
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone_A518D0E44191E2E2F86224BB0F46CA1C; // 0x4C08(0x128)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x4D30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Coat_ground_drive;                                 // 0x4D38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Right_foot_coat_back_drive;                        // 0x4D3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Left_foot_coat_back_drive;                         // 0x4D40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Right_leg_coat_front_drive;                        // 0x4D44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Left_leg_coat_front_drive;                         // 0x4D48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Jacket_collar_back_drive;                          // 0x4D4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Current_dive_jiggle;                               // 0x4D50(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        Current_actor_z;                                   // 0x4D5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Front_to_side_l;                                   // 0x4D60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Front_to_side_r;                                   // 0x4D64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Falling_anim_dyn_up_force_vec3;                    // 0x4D68(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Crouch_jacket_front_right_alpha;                   // 0x4D74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Anim_dyn_jacket_alpha;                             // 0x4D78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Crouch_jacket_back_right_alpha;                    // 0x4D7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Crouch_jacket_front_left_alpha;                    // 0x4D80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Crouch_copy_bone_left_alpha;                       // 0x4D84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Jacket_sleeve_right_dyn_alpha;                     // 0x4D88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Jacket_sleeve_left_dyn_alpha;                      // 0x4D8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Weapon_kick_up_external_force;                     // 0x4D90(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Weapon_kick_up_external_force_left;                // 0x4D9C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Jacket_tails_coat_ground_drive;                    // 0x4DA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Gun_to_head_vec3;                                  // 0x4DAC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         Random_stream;                                     // 0x4DB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClothingSimulationInteractorNv*       Drift_clothing_sim_interactor;                     // 0x4DC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_SRDrift_tier0506_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_AnimDynamics_52092C65461ACD18D5B01BB4D030B168();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_AnimDynamics_3901FDBA403543ECE46416A74FF3B63F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_PoseByName_3203E6D74B4AB9C6F8DFA19343A0AB89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_AnimDynamics_2E6441E24E4C365305E1A1B31A5394A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_ApplyAdditive_9A1BB2FD4854E063F238FCA0491E7677();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_AnimDynamics_63834C5345D0E00DDCE48B861E94AB2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_ApplyAdditive_461003D24DCB3E3C6A0958818BE9102B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_AnimDynamics_CEBCF56443A3BADC9E7FB6B442941B22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_AnimDynamics_F03B3FE047D1A063A86F0CBE93E6C891();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_AnimDynamics_1843F30F4FA7AF1E0494F8801D7AB020();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_AnimDynamics_C1978BB04307CD9269E25885CC00FB91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_PoseByName_D33A98C64CF097DC88B4DC89AE6AA2B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_PoseByName_1C4B35C34844295DA83A9CB042DF9FF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_AnimDynamics_3ADF8BD946835966F1CA26B35D12DCAA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_AnimDynamics_4E5E09D548BBEE0EB413E0AAA285DE7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_CopyBone_18D08B7C40A1C309CBD76B877C43327E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_PoseByName_D710E5374D5ADB8E6A1BD48F485D5312();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_PoseByName_60A6B2314D6EAF7C6994C9BAAF4D95DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_ModifyBone_F36B21454F10D97C35E06E87B3B7812C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_ModifyBone_42AE03A04827851ACAC81CB3D89F221C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_ModifyBone_4869C6DD4A5CC36B7EF84CAABB4CFEE8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_ModifyBone_5B1B8E0B46D831C904E026B6975FEEFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_AnimDynamics_5773EDAB45A84383634F9C8B1C2C04F6();
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_AnimDynamics_4E143E2D4A715119040FD68FCD5E408E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_PoseByName_1641822444C2EEB6BCE5DE8DA872FF52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP_AnimGraphNode_AnimDynamics_752267EB49E0FB7E96A433B1BDC1D925();
	void ExecuteUbergraph_M_MED_SRDrift_tier0506_AnimBP(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, const struct FVector& CallFunc_K2_DirectionBetweenSockets_ReturnValue, float CallFunc_K2_DistanceBetweenTwoSocketsAndMapRange_ReturnValue, float CallFunc_K2_DistanceBetweenTwoSocketsAndMapRange_ReturnValue1, float CallFunc_K2_DistanceBetweenTwoSocketsAndMapRange_ReturnValue2, float K2Node_Event_DeltaTimeX, bool Temp_bool_IsClosed_Variable, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue1, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_GetCurveValue_ReturnValue1, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Abs_ReturnValue1, float CallFunc_FClamp_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, class UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, class UClothingSimulationInteractorNv* K2Node_DynamicCast_AsClothing_Simulation_Interactor_Nv, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_SelectVector_ReturnValue1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue1, float CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue1, float CallFunc_SelectFloat_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SelectFloat_ReturnValue3, float CallFunc_SelectFloat_ReturnValue4, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SelectFloat_ReturnValue5, float CallFunc_SelectFloat_ReturnValue6, float CallFunc_SelectFloat_ReturnValue7);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
