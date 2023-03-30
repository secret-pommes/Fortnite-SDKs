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

// 0x54 (0xF94 - 0xF40)
// BlueprintGeneratedClass B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C
class AB_Shotgun_Break_Athena_C : public AB_Shotgun_Standard_Athena_C
{
public:
	bool                                         Debug;                                             // 0xF40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E2D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FXTraceYawFullAngle;                               // 0xF44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FXTracePitchFullAngle;                             // 0xF48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EndOfCenterFXTrace;                                // 0xF4C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       AllFXTraceEndPoints;                               // 0xF58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               CurrentFXTraceEnd;                                 // 0xF68(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurrentFXTraceWasHit;                              // 0xF74(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       AllFXTracerSpawnPoints;                            // 0xF78(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         SpawnTracersInsteadOfDummyImpactFX;                // 0xF88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E2F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MysteriousRangeBufferForTracers;                   // 0xF8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RangeLong;                                         // 0xF90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Shotgun_Break_Athena_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
