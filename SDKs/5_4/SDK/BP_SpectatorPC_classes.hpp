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

// 0x10 (0x1F88 - 0x1F78)
// BlueprintGeneratedClass BP_SpectatorPC.BP_SpectatorPC_C
class ABP_SpectatorPC_C : public AFortPlayerControllerSpectating
{
public:
	uint8                                        Pad_32C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1F80(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_SpectatorPC_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpectatorPC(int32 EntryPoint, bool CallFunc_IsLocalPlayerController_ReturnValue, const struct FTransform& Temp_struct_Variable, class UBP_AmbientAudioController_C* CallFunc_AddComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
