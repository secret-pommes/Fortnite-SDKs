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

// 0x8 (0x3D0 - 0x3C8)
// BlueprintGeneratedClass BP_AmbientSplineActor.BP_AmbientSplineActor_C
class ABP_AmbientSplineActor_C : public AFortSplineAudioActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_AmbientSplineActor_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Check_Closest_Point();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AmbientSplineActor(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
