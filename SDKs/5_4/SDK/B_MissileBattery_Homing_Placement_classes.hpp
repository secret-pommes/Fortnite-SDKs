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
// BlueprintGeneratedClass B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C
class AB_MissileBattery_Homing_Placement_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB98(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_MissileBattery_Homing_Placement_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_MissileBattery_Homing_Placement(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
