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


// Function AthenaToastWidget.AthenaToastWidget_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// int32                              CallFunc_PointerEvent_GetPointerIndex_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PointerEvent_GetUserIndex_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_HasMouseCaptureByUser_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// struct FEventReply                 CallFunc_ReleaseMouseCapture_ReturnValue                         ()

struct FEventReply UAthenaToastWidget_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 CallFunc_PointerEvent_GetPointerIndex_ReturnValue, int32 CallFunc_PointerEvent_GetUserIndex_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_HasMouseCaptureByUser_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_ReleaseMouseCapture_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "OnMouseButtonUp");

	Params::UAthenaToastWidget_C_OnMouseButtonUp_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetPointerIndex_ReturnValue = CallFunc_PointerEvent_GetPointerIndex_ReturnValue;
	Parms.CallFunc_PointerEvent_GetUserIndex_ReturnValue = CallFunc_PointerEvent_GetUserIndex_ReturnValue;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_HasMouseCaptureByUser_ReturnValue = CallFunc_HasMouseCaptureByUser_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_ReleaseMouseCapture_ReturnValue = CallFunc_ReleaseMouseCapture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaToastWidget.AthenaToastWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// struct FEventReply                 CallFunc_CaptureMouse_ReturnValue                                ()

struct FEventReply UAthenaToastWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_CaptureMouse_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "OnMouseButtonDown");

	Params::UAthenaToastWidget_C_OnMouseButtonDown_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_CaptureMouse_ReturnValue = CallFunc_CaptureMouse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaToastWidget.AthenaToastWidget_C.SetAndShowText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*            TextBlock                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            LocalTextBlock                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LocalText                                                        (Edit, BlueprintVisible)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UAthenaToastWidget_C::SetAndShowText(class FText Text, class UCommonTextBlock* TextBlock, class UCommonTextBlock* LocalTextBlock, class FText LocalText, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "SetAndShowText");

	Params::UAthenaToastWidget_C_SetAndShowText_Params Parms;
	Parms.Text = Text;
	Parms.TextBlock = TextBlock;
	Parms.LocalTextBlock = LocalTextBlock;
	Parms.LocalText = LocalText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.ShowToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStoreCallout               Callout                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EStoreCalloutType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaToastWidget_C::ShowToast(const struct FStoreCallout& Callout, enum class EStoreCalloutType Temp_byte_Variable, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "ShowToast");

	Params::UAthenaToastWidget_C_ShowToast_Params Parms;
	Parms.Callout = Callout;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.OnLoaded_6CB0A0F6496808CDAE6D70B50E749F30
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaToastWidget_C::OnLoaded_6CB0A0F6496808CDAE6D70B50E749F30(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "OnLoaded_6CB0A0F6496808CDAE6D70B50E749F30");

	Params::UAthenaToastWidget_C_OnLoaded_6CB0A0F6496808CDAE6D70B50E749F30_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UAthenaToastWidget_C_BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::BndEvt__Intro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "BndEvt__Intro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UAthenaToastWidget_C_BndEvt__Intro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.OnShowToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStoreCallout               Callout                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaToastWidget_C::OnShowToast(const struct FStoreCallout& Callout)
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "OnShowToast");

	Params::UAthenaToastWidget_C_OnShowToast_Params Parms;
	Parms.Callout = Callout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.Start Toast Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::Start_Toast_Animation()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "Start Toast Animation");

	Params::UAthenaToastWidget_C_Start_Toast_Animation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.BndEvt__Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::BndEvt__Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "BndEvt__Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UAthenaToastWidget_C_BndEvt__Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.On Idle Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::On_Idle_Finished()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "On Idle Finished");

	Params::UAthenaToastWidget_C_On_Idle_Finished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.SimulateStoreToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::SimulateStoreToast()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "SimulateStoreToast");

	Params::UAthenaToastWidget_C_SimulateStoreToast_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::Clicked()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "Clicked");

	Params::UAthenaToastWidget_C_Clicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.CompleteToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::CompleteToast()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "CompleteToast");

	Params::UAthenaToastWidget_C_CompleteToast_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.ExecuteUbergraph_AthenaToastWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStoreCallout               K2Node_CustomEvent_Callout                                       ()
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FStoreCallout               K2Node_MakeStruct_StoreCallout                                   ()
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaToastWidget_C::ExecuteUbergraph_AthenaToastWidget(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FStoreCallout& K2Node_CustomEvent_Callout, bool CallFunc_IsAssetNull_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FStoreCallout& K2Node_MakeStruct_StoreCallout, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "ExecuteUbergraph_AthenaToastWidget");

	Params::UAthenaToastWidget_C_ExecuteUbergraph_AthenaToastWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Callout = K2Node_CustomEvent_Callout;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_MakeStruct_StoreCallout = K2Node_MakeStruct_StoreCallout;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaToastWidget.AthenaToastWidget_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaToastWidget_C::OnFinishedToast__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaToastWidget_C", "OnFinishedToast__DelegateSignature");

	Params::UAthenaToastWidget_C_OnFinishedToast__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
