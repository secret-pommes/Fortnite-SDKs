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

// 0xF (0xD50 - 0xD41)
// BlueprintGeneratedClass Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C
class ATrap_Athena_WallSpikes_C : public ATrap_Athena_Spikes_C
{
public:
	uint8                                        Pad_2F2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD48(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Trap_Athena_WallSpikes_C");
		return Clss;
	}

	void UserConstructionScript();
	void SetSpikePosition(float NewSpikePosition);
	void ExecuteUbergraph_Trap_Athena_WallSpikes(int32 EntryPoint, float K2Node_Event_NewSpikePosition, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
