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

// 0x40 (0x278 - 0x238)
// WidgetBlueprintGeneratedClass BuildWatermark.BuildWatermark_C
class UBuildWatermark_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UTextBlock*                            BuildText;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_CalendarOffset;                               // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextMcpRegion;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextMcpVersion;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Watermark;                                         // 0x260(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BuildWatermark_C");
		return Clss;
	}

	void UpdateCalenderOffset(enum class ESubGame CallFunc_GetCurrentSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortSeasonalEventManager* CallFunc_GetSeasonalEventManager_ReturnValue, const class FString& CallFunc_GetCalendarOffsetString_OutString, bool CallFunc_GetCalendarOffsetString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetTextCollapseIfDefault(class UTextBlock* Text_Widget, class FText InputText, class FText DefaultText, bool CallFunc_EqualEqual_TextText_ReturnValue);
	void Update_Watermark(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetWatermark_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetMCPRegion_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, const class FString& CallFunc_GetAppName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue1);
	void Construct();
	void HandlePartyJoined();
	void Destruct();
	void HandlePlayerStateChanged(struct FFortTeamMemberInfo& PlayerInfo);
	void ExecuteUbergraph_BuildWatermark(int32 EntryPoint, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortPartyContext* CallFunc_GetContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
