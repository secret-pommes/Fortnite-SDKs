#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BP_Lobby_SkyRift.BP_Lobby_SkyRift_C.OnRep_Corruption
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Lobby_SkyRift_C::OnRep_Corruption()
{
	static auto Func = Class->GetFunction("BP_Lobby_SkyRift_C", "OnRep_Corruption");

	Params::ABP_Lobby_SkyRift_C_OnRep_Corruption_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Lobby_SkyRift.BP_Lobby_SkyRift_C.OnRep_CrackOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Lobby_SkyRift_C::OnRep_CrackOpacity()
{
	static auto Func = Class->GetFunction("BP_Lobby_SkyRift_C", "OnRep_CrackOpacity");

	Params::ABP_Lobby_SkyRift_C_OnRep_CrackOpacity_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Lobby_SkyRift.BP_Lobby_SkyRift_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Lobby_SkyRift_C::UserConstructionScript(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_SelectFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Lobby_SkyRift_C", "UserConstructionScript");

	Params::ABP_Lobby_SkyRift_C_UserConstructionScript_Params Parms;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Lobby_SkyRift.BP_Lobby_SkyRift_C.OnEventEnded_7FC36C8B487DEE89404DD0A4E7D0374B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Lobby_SkyRift_C::OnEventEnded_7FC36C8B487DEE89404DD0A4E7D0374B(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_Lobby_SkyRift_C", "OnEventEnded_7FC36C8B487DEE89404DD0A4E7D0374B");

	Params::ABP_Lobby_SkyRift_C_OnEventEnded_7FC36C8B487DEE89404DD0A4E7D0374B_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Lobby_SkyRift.BP_Lobby_SkyRift_C.OnEventUpdated_7FC36C8B487DEE89404DD0A4E7D0374B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Lobby_SkyRift_C::OnEventUpdated_7FC36C8B487DEE89404DD0A4E7D0374B(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_Lobby_SkyRift_C", "OnEventUpdated_7FC36C8B487DEE89404DD0A4E7D0374B");

	Params::ABP_Lobby_SkyRift_C_OnEventUpdated_7FC36C8B487DEE89404DD0A4E7D0374B_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Lobby_SkyRift.BP_Lobby_SkyRift_C.OnEventActive_7FC36C8B487DEE89404DD0A4E7D0374B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Lobby_SkyRift_C::OnEventActive_7FC36C8B487DEE89404DD0A4E7D0374B(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_Lobby_SkyRift_C", "OnEventActive_7FC36C8B487DEE89404DD0A4E7D0374B");

	Params::ABP_Lobby_SkyRift_C_OnEventActive_7FC36C8B487DEE89404DD0A4E7D0374B_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Lobby_SkyRift.BP_Lobby_SkyRift_C.OnEventEnded_1929FF3E41B877516CF2489E278B3A92
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Lobby_SkyRift_C::OnEventEnded_1929FF3E41B877516CF2489E278B3A92(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_Lobby_SkyRift_C", "OnEventEnded_1929FF3E41B877516CF2489E278B3A92");

	Params::ABP_Lobby_SkyRift_C_OnEventEnded_1929FF3E41B877516CF2489E278B3A92_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Lobby_SkyRift.BP_Lobby_SkyRift_C.OnEventUpdated_1929FF3E41B877516CF2489E278B3A92
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Lobby_SkyRift_C::OnEventUpdated_1929FF3E41B877516CF2489E278B3A92(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_Lobby_SkyRift_C", "OnEventUpdated_1929FF3E41B877516CF2489E278B3A92");

	Params::ABP_Lobby_SkyRift_C_OnEventUpdated_1929FF3E41B877516CF2489E278B3A92_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Lobby_SkyRift.BP_Lobby_SkyRift_C.OnEventActive_1929FF3E41B877516CF2489E278B3A92
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   TimeUntilEnd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   TimeSinceBegin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Lobby_SkyRift_C::OnEventActive_1929FF3E41B877516CF2489E278B3A92(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin)
{
	static auto Func = Class->GetFunction("BP_Lobby_SkyRift_C", "OnEventActive_1929FF3E41B877516CF2489E278B3A92");

	Params::ABP_Lobby_SkyRift_C_OnEventActive_1929FF3E41B877516CF2489E278B3A92_Params Parms;
	Parms.EventName = EventName;
	Parms.TimeUntilEnd = TimeUntilEnd;
	Parms.TimeSinceBegin = TimeSinceBegin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Lobby_SkyRift.BP_Lobby_SkyRift_C.ContinueSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Lobby_SkyRift_C::ContinueSetup()
{
	static auto Func = Class->GetFunction("BP_Lobby_SkyRift_C", "ContinueSetup");

	Params::ABP_Lobby_SkyRift_C_ContinueSetup_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Lobby_SkyRift.BP_Lobby_SkyRift_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Lobby_SkyRift_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Lobby_SkyRift_C", "ReceiveBeginPlay");

	Params::ABP_Lobby_SkyRift_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Lobby_SkyRift.BP_Lobby_SkyRift_C.ExecuteUbergraph_BP_Lobby_SkyRift
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventName5                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd5                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin5                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName4                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd4                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin4                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName3                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd3                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin3                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTimespan                   Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   Temp_struct_Variable1                                            (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalDays_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName2                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd2                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin2                               (NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventName1                                    (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd1                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin1                               (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)
// class FString                      K2Node_CustomEvent_EventName                                     (ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeUntilEnd                                  (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   K2Node_CustomEvent_TimeSinceBegin                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate5                            (ZeroConstructor, NoDestructor)
// struct FTimespan                   Temp_struct_Variable2                                            (NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   Temp_struct_Variable3                                            (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalDays_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable1                                            (ZeroConstructor, HasGetValueTypeHash)
// class UFortAsyncAction_CalendarEventWatcher*CallFunc_WatchCalendarEvent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CalendarEventWatcher*CallFunc_WatchCalendarEvent_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Lobby_SkyRift_C::ExecuteUbergraph_BP_Lobby_SkyRift(int32 EntryPoint, const class FString& K2Node_CustomEvent_EventName5, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd5, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_EventName4, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd4, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const class FString& K2Node_CustomEvent_EventName3, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd3, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimespan& Temp_struct_Variable, const struct FTimespan& Temp_struct_Variable1, float CallFunc_GetTotalDays_ReturnValue, const class FString& Temp_string_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const class FString& K2Node_CustomEvent_EventName2, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd2, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin2, const class FString& K2Node_CustomEvent_EventName1, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd1, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, const class FString& K2Node_CustomEvent_EventName, const struct FTimespan& K2Node_CustomEvent_TimeUntilEnd, const struct FTimespan& K2Node_CustomEvent_TimeSinceBegin, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const struct FTimespan& Temp_struct_Variable2, const struct FTimespan& Temp_struct_Variable3, float CallFunc_GetTotalDays_ReturnValue1, const class FString& Temp_string_Variable1, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue1, class UFortAsyncAction_CalendarEventWatcher* CallFunc_WatchCalendarEvent_ReturnValue1, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue1)
{
	static auto Func = Class->GetFunction("BP_Lobby_SkyRift_C", "ExecuteUbergraph_BP_Lobby_SkyRift");

	Params::ABP_Lobby_SkyRift_C_ExecuteUbergraph_BP_Lobby_SkyRift_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_EventName5 = K2Node_CustomEvent_EventName5;
	Parms.K2Node_CustomEvent_TimeUntilEnd5 = K2Node_CustomEvent_TimeUntilEnd5;
	Parms.K2Node_CustomEvent_TimeSinceBegin5 = K2Node_CustomEvent_TimeSinceBegin5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EventName4 = K2Node_CustomEvent_EventName4;
	Parms.K2Node_CustomEvent_TimeUntilEnd4 = K2Node_CustomEvent_TimeUntilEnd4;
	Parms.K2Node_CustomEvent_TimeSinceBegin4 = K2Node_CustomEvent_TimeSinceBegin4;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_EventName3 = K2Node_CustomEvent_EventName3;
	Parms.K2Node_CustomEvent_TimeUntilEnd3 = K2Node_CustomEvent_TimeUntilEnd3;
	Parms.K2Node_CustomEvent_TimeSinceBegin3 = K2Node_CustomEvent_TimeSinceBegin3;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_GetTotalDays_ReturnValue = CallFunc_GetTotalDays_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CustomEvent_EventName2 = K2Node_CustomEvent_EventName2;
	Parms.K2Node_CustomEvent_TimeUntilEnd2 = K2Node_CustomEvent_TimeUntilEnd2;
	Parms.K2Node_CustomEvent_TimeSinceBegin2 = K2Node_CustomEvent_TimeSinceBegin2;
	Parms.K2Node_CustomEvent_EventName1 = K2Node_CustomEvent_EventName1;
	Parms.K2Node_CustomEvent_TimeUntilEnd1 = K2Node_CustomEvent_TimeUntilEnd1;
	Parms.K2Node_CustomEvent_TimeSinceBegin1 = K2Node_CustomEvent_TimeSinceBegin1;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;
	Parms.K2Node_CustomEvent_EventName = K2Node_CustomEvent_EventName;
	Parms.K2Node_CustomEvent_TimeUntilEnd = K2Node_CustomEvent_TimeUntilEnd;
	Parms.K2Node_CustomEvent_TimeSinceBegin = K2Node_CustomEvent_TimeSinceBegin;
	Parms.K2Node_CreateDelegate_OutputDelegate5 = K2Node_CreateDelegate_OutputDelegate5;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.CallFunc_GetTotalDays_ReturnValue1 = CallFunc_GetTotalDays_ReturnValue1;
	Parms.Temp_string_Variable1 = Temp_string_Variable1;
	Parms.CallFunc_WatchCalendarEvent_ReturnValue = CallFunc_WatchCalendarEvent_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue1 = CallFunc_MapRangeClamped_ReturnValue1;
	Parms.CallFunc_WatchCalendarEvent_ReturnValue1 = CallFunc_WatchCalendarEvent_ReturnValue1;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue1 = CallFunc_SetStaticMesh_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
