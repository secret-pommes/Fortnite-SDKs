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


// Function FancyToastWidget.FancyToastWidget_C.OnMouseButtonUp
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

struct FEventReply UFancyToastWidget_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, int32 CallFunc_PointerEvent_GetPointerIndex_ReturnValue, int32 CallFunc_PointerEvent_GetUserIndex_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_HasMouseCaptureByUser_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_ReleaseMouseCapture_ReturnValue)
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "OnMouseButtonUp");

	Params::UFancyToastWidget_C_OnMouseButtonUp_Params Parms;
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


// Function FancyToastWidget.FancyToastWidget_C.OnMouseButtonDown
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

struct FEventReply UFancyToastWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_CaptureMouse_ReturnValue)
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "OnMouseButtonDown");

	Params::UFancyToastWidget_C_OnMouseButtonDown_Params Parms;
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


// Function FancyToastWidget.FancyToastWidget_C.SetAndShowText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*            TextBlock                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            LocalTextBlock                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        LocalText                                                        (Edit, BlueprintVisible)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UFancyToastWidget_C::SetAndShowText(class FText Text, class UCommonTextBlock* TextBlock, class UCommonTextBlock* LocalTextBlock, class FText LocalText, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "SetAndShowText");

	Params::UFancyToastWidget_C_SetAndShowText_Params Parms;
	Parms.Text = Text;
	Parms.TextBlock = TextBlock;
	Parms.LocalTextBlock = LocalTextBlock;
	Parms.LocalText = LocalText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.ShowToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortToastDisplayInfo       DisplayInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFancyToastWidget_C::ShowToast(const struct FFortToastDisplayInfo& DisplayInfo, uint8 Temp_byte_Variable, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "ShowToast");

	Params::UFancyToastWidget_C_ShowToast_Params Parms;
	Parms.DisplayInfo = DisplayInfo;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFancyToastWidget_C::OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8");

	Params::UFancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8_Params Parms;
	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFancyToastWidget_C::BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UFancyToastWidget_C_BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFancyToastWidget_C::BndEvt__Intro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "BndEvt__Intro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UFancyToastWidget_C_BndEvt__Intro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.OnShowToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortToastDisplayInfo       DispalyInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UFancyToastWidget_C::OnShowToast(const struct FFortToastDisplayInfo& DispalyInfo)
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "OnShowToast");

	Params::UFancyToastWidget_C_OnShowToast_Params Parms;
	Parms.DispalyInfo = DispalyInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.Start Toast Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFancyToastWidget_C::Start_Toast_Animation()
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "Start Toast Animation");

	Params::UFancyToastWidget_C_Start_Toast_Animation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.BndEvt__Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFancyToastWidget_C::BndEvt__Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "BndEvt__Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UFancyToastWidget_C_BndEvt__Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.On Idle Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFancyToastWidget_C::On_Idle_Finished()
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "On Idle Finished");

	Params::UFancyToastWidget_C_On_Idle_Finished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.SimulateAthenaStoreToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFancyToastWidget_C::SimulateAthenaStoreToast()
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "SimulateAthenaStoreToast");

	Params::UFancyToastWidget_C_SimulateAthenaStoreToast_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFancyToastWidget_C::Clicked()
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "Clicked");

	Params::UFancyToastWidget_C_Clicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.CompleteToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFancyToastWidget_C::CompleteToast()
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "CompleteToast");

	Params::UFancyToastWidget_C_CompleteToast_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.ExecuteUbergraph_FancyToastWidget
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortToastDisplayInfo       K2Node_MakeStruct_FortToastDisplayInfo                           ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortToastDisplayInfo       K2Node_CustomEvent_DispalyInfo                                   ()
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UFancyToastWidget_C::ExecuteUbergraph_FancyToastWidget(int32 EntryPoint, const struct FFortToastDisplayInfo& K2Node_MakeStruct_FortToastDisplayInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FFortToastDisplayInfo& K2Node_CustomEvent_DispalyInfo, bool CallFunc_IsAssetNull_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "ExecuteUbergraph_FancyToastWidget");

	Params::UFancyToastWidget_C_ExecuteUbergraph_FancyToastWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_FortToastDisplayInfo = K2Node_MakeStruct_FortToastDisplayInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_DispalyInfo = K2Node_CustomEvent_DispalyInfo;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.OnToastClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFancyToastWidget_C::OnToastClicked__DelegateSignature()
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "OnToastClicked__DelegateSignature");

	Params::UFancyToastWidget_C_OnToastClicked__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FancyToastWidget.FancyToastWidget_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFancyToastWidget_C::OnFinishedToast__DelegateSignature()
{
	static auto Func = Class->GetFunction("FancyToastWidget_C", "OnFinishedToast__DelegateSignature");

	Params::UFancyToastWidget_C_OnFinishedToast__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
