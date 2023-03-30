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

// 0x48 (0x370 - 0x328)
// BlueprintGeneratedClass BP_Lobby_SkyRift.BP_Lobby_SkyRift_C
class ABP_Lobby_SkyRift_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_Sky_Crack;                                      // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewCracks;                                     // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CD7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CrackOpacity;                                      // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Corruption;                                        // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CD8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CrackShrinkEvent;                                  // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                CrackCorruptEvent;                                 // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        CrackEventDuration;                                // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CrackCorruptionEventDuration;                      // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Lobby_SkyRift_C");
		return Clss;
	}

	void OnRep_Corruption();
	void OnRep_CrackOpacity();
	void UserConstructionScript(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
	void OnEventEnded_7FC36C8B487DEE89404DD0A4E7D0374B(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventUpdated_7FC36C8B487DEE89404DD0A4E7D0374B(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventActive_7FC36C8B487DEE89404DD0A4E7D0374B(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventEnded_1929FF3E41B877516CF2489E278B3A92(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventUpdated_1929FF3E41B877516CF2489E278B3A92(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void OnEventActive_1929FF3E41B877516CF2489E278B3A92(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin);
	void ContinueSetup();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Lobby_SkyRift(int32 EntryPoint, const class FString& K2Node_CustomEvent_EventName5, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd5, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_EventName4, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd4, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const class FString& K2Node_CustomEvent_EventName3, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd3, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimespan& Temp_struct_Variable, const struct FTimespan& Temp_struct_Variable1, float CallFunc_GetTotalDays_ReturnValue, const class FString& Temp_string_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const class FString& K2Node_CustomEvent_EventName2, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd2, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin2, const class FString& K2Node_CustomEvent_EventName1, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd1, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const class FString& K2Node_CustomEvent_EventName, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FTimespan& Temp_struct_Variable2, const struct FTimespan& Temp_struct_Variable3, float CallFunc_GetTotalDays_ReturnValue1, const class FString& Temp_string_Variable1, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue1, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue1, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
