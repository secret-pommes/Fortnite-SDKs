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

// 0xF0 (0x448 - 0x358)
// AnimBlueprintGeneratedClass BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C
class UBP_Shotgun_BreakAction_C : public UAnimInstance
{
public:
	uint8                                        Pad_41D6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BA976D5D4DB7967075F7CDB8A77EDD8C; // 0x368(0x40)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_40047C1541B43E34DADF6696EC1EDEBE; // 0x3A8(0x68)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_EADE6A484AF7A66F69258C8F614628BF; // 0x410(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Shotgun_BreakAction_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_Shotgun_BreakAction(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
