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

// 0x8 (0xBA0 - 0xB98)
// BlueprintGeneratedClass AbilityDecoTool_Athena_IntelPack.AbilityDecoTool_Athena_IntelPack_C
class AAbilityDecoTool_Athena_IntelPack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB98(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AbilityDecoTool_Athena_IntelPack_C");
		return Clss;
	}

	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_AbilityDecoTool_Athena_IntelPack(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
