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

// 0x3A8 (0x700 - 0x358)
// AnimBlueprintGeneratedClass BP_Soldier_Minigun.BP_Soldier_Minigun_C
class UBP_Soldier_Minigun_C : public UAnimInstance
{
public:
	uint8                                        Pad_62FB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5BEDD1AF46E640F37CCC9FAA8DF7F6DC; // 0x368(0x40)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_15839C374918416DF8289BAE7466DE11; // 0x3A8(0x68)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7; // 0x410(0x138)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2E6915294401BD03648F4689C8817592; // 0x548(0x40)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_580B6AC241C93B1B43A2A4ACEF5528AD; // 0x588(0x40)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_43BD42EB42C5FE9A4147628D6467C8A7; // 0x5C8(0x70)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_23F81C024704537420FC1492A49C0F7B; // 0x638(0xC0)()
	float                                        MinigunRotation;                                   // 0x6F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxMinigunRotSpeed;                                // 0x6FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Soldier_Minigun_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Soldier_Minigun_AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BP_Soldier_Minigun(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_Ranged_Generic_C* K2Node_DynamicCast_AsB_Ranged_Generic, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
