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
// AnimBlueprintGeneratedClass BP_Launcher_FrontAction.BP_Launcher_FrontAction_C
class UBP_Launcher_FrontAction_C : public UAnimInstance
{
public:
	uint8                                        Pad_5CD9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_497F340240F0CC64E94B6DAF83B9813F; // 0x368(0x40)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_90E8D6E744D2D9DA5DE75A8AA3FAEEDC; // 0x3A8(0x68)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_509BFA8742C047DE9209E1B642963779; // 0x410(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Launcher_FrontAction_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_Launcher_FrontAction(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
