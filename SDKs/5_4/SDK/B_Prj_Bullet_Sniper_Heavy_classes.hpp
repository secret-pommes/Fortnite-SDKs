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

// 0x14 (0x7F8 - 0x7E4)
// BlueprintGeneratedClass B_Prj_Bullet_Sniper_Heavy.B_Prj_Bullet_Sniper_Heavy_C
class AB_Prj_Bullet_Sniper_Heavy_C : public AB_Prj_Bullet_Sniper_C
{
public:
	uint8                                        Pad_6260[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sniper_Rifle_SurfaceImpactSound_0;                 // 0x7E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sniper_Rifle_PlayerImpactSound_0;                  // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Bullet_Sniper_Heavy_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
