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

// 0xCC0 (0x10F0 - 0x430)
// AnimBlueprintGeneratedClass Fortnite_Base_Cape_AnimBlueprint.Fortnite_Base_Cape_AnimBlueprint_C
class UFortnite_Base_Cape_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_F5FEE416468797D605AC749EC9AFFB89; // 0x438(0xE8)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2147EDD742F39A7B49DE2CB3E3CA6A62; // 0x520(0x40)()
	struct FAnimNode_Trail                       AnimGraphNode_Trail_4CCEAAC14EAF74F966EDBB859A80ABE9; // 0x560(0x280)()
	struct FAnimNode_Trail                       AnimGraphNode_Trail_05CBBD4E4868A3721F6CC0847186BC9A; // 0x7E0(0x280)()
	struct FAnimNode_Trail                       AnimGraphNode_Trail_5B1585254FECEC7AC44968893F0DA484; // 0xA60(0x280)()
	struct FAnimNode_ApplyLimits                 AnimGraphNode_ApplyLimits_1AFC3F20464C37DD4A0492B4C57D9CF4; // 0xCE0(0x110)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_640CBD5F435AC99BD210AAB58BC815C7; // 0xDF0(0xF8)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_64E22EA64045B79851770CB762655353; // 0xEE8(0x40)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_B0CDF9074186FE2CD1B359BBC72D384D; // 0xF28(0x40)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1B19645C4EDAB4C12324B691D552F156; // 0xF68(0x40)()
	struct FAnimNode_PoseByName                  AnimGraphNode_PoseByName_390CCAC84B0073815E62128A7EDB4208; // 0xFA8(0xA0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_42DC8B7649CB491A04FE7290917CF356; // 0x1048(0x40)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1088(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AimOffset;                                         // 0x1090(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimOffsetMultiplier;                               // 0x109C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ActorVelocity;                                     // 0x10A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ActorReverse;                                      // 0x10A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6400[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Forward;                                           // 0x10A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Side;                                              // 0x10AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TrailAlphaBlend;                                   // 0x10B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CapeFakeVelocity;                                  // 0x10B4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlendInBackwardPose;                               // 0x10C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6401[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendOutForksAlpha;                                // 0x10C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FakeWindVelocity;                                  // 0x10C8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6402[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClothingSimulationInteractorNv*       Clothing_sim_interactor;                           // 0x10D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDBNO;                                            // 0x10E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6403[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FakeWindVelocity_DBNO;                             // 0x10E4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Fortnite_Base_Cape_AnimBlueprint_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_Base_Cape_AnimBlueprint_AnimGraphNode_Trail_4CCEAAC14EAF74F966EDBB859A80ABE9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_Base_Cape_AnimBlueprint_AnimGraphNode_TwoWayBlend_640CBD5F435AC99BD210AAB58BC815C7();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_Base_Cape_AnimBlueprint_AnimGraphNode_ApplyLimits_1AFC3F20464C37DD4A0492B4C57D9CF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_Base_Cape_AnimBlueprint_AnimGraphNode_Trail_5B1585254FECEC7AC44968893F0DA484();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_Base_Cape_AnimBlueprint_AnimGraphNode_Trail_05CBBD4E4868A3721F6CC0847186BC9A();
	void ExecuteUbergraph_Fortnite_Base_Cape_AnimBlueprint(int32 EntryPoint, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, bool Temp_bool_IsClosed_Variable, float K2Node_Event_DeltaTimeX, float CallFunc_GetOwnerDirection_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_NormalizeToRange_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, float CallFunc_FClamp_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue, class UClothingSimulationInteractorNv* K2Node_DynamicCast_AsClothing_Simulation_Interactor_Nv, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_K2_MakePerlinNoiseVectorAndRemap_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue1, class AFortPawn* CallFunc_TryGetFortPawn_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_BooleanOR_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
