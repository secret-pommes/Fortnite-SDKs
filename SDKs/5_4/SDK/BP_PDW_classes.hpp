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
// AnimBlueprintGeneratedClass BP_PDW.BP_PDW_C
class UBP_PDW_C : public UAnimInstance
{
public:
	uint8                                        Pad_616A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_0562F6184C86E34D2BBC87BBF67B4E94; // 0x368(0x40)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_8DF0F768443238A6FA9CD39C6A756B6D; // 0x3A8(0x38)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1186B52041A8BE0BBE0BB29197667B1A; // 0x3E0(0x68)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PDW_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_PDW(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
