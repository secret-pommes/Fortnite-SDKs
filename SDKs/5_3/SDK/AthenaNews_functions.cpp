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


// Function AthenaNews.AthenaNews_C.BeginIntroSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaNews_C::BeginIntroSequence()
{
	static auto Func = Class->GetFunction("AthenaNews_C", "BeginIntroSequence");

	Params::UAthenaNews_C_BeginIntroSequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaNews.AthenaNews_C.SingleItemConfiguration
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNews_C::SingleItemConfiguration()
{
	static auto Func = Class->GetFunction("AthenaNews_C", "SingleItemConfiguration");

	Params::UAthenaNews_C_SingleItemConfiguration_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaNews.AthenaNews_C.ResetViewConfiguration
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNews_C::ResetViewConfiguration()
{
	static auto Func = Class->GetFunction("AthenaNews_C", "ResetViewConfiguration");

	Params::UAthenaNews_C_ResetViewConfiguration_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaNews_C::ExecuteUbergraph_AthenaNews(int32 EntryPoint, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("AthenaNews_C", "ExecuteUbergraph_AthenaNews");

	Params::UAthenaNews_C_ExecuteUbergraph_AthenaNews_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
