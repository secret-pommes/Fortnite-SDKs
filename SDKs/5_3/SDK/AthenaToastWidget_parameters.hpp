#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x3B0 (0x3B0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.OnMouseButtonUp
struct UAthenaToastWidget_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x160(0xB8)()
	int32                                        CallFunc_PointerEvent_GetPointerIndex_ReturnValue; // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PointerEvent_GetUserIndex_ReturnValue;    // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x220(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_HasMouseCaptureByUser_ReturnValue;        // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5430[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x240(0xB8)()
	struct FEventReply                           CallFunc_ReleaseMouseCapture_ReturnValue;          // 0x2F8(0xB8)()
};

// 0x3A8 (0x3A8 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.OnMouseButtonDown
struct UAthenaToastWidget_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x160(0xB8)()
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x218(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5431[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x238(0xB8)()
	struct FEventReply                           CallFunc_CaptureMouse_ReturnValue;                 // 0x2F0(0xB8)()
};

// 0x60 (0x60 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.SetAndShowText
struct UAthenaToastWidget_C_SetAndShowText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                      TextBlock;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      LocalTextBlock;                                    // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LocalText;                                         // 0x28(0x18)(Edit, BlueprintVisible)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5432[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x48(0x18)()
};

// 0x88 (0x88 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.ShowToast
struct UAthenaToastWidget_C_ShowToast_Params
{
public:
	struct FStoreCallout                         Callout;                                           // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EStoreCalloutType                 Temp_byte_Variable;                                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5433[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.OnLoaded_6CB0A0F6496808CDAE6D70B50E749F30
struct UAthenaToastWidget_C_OnLoaded_6CB0A0F6496808CDAE6D70B50E749F30_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UAthenaToastWidget_C_BndEvt__Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.BndEvt__Intro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UAthenaToastWidget_C_BndEvt__Intro_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x78 (0x78 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.OnShowToast
struct UAthenaToastWidget_C_OnShowToast_Params
{
public:
	struct FStoreCallout                         Callout;                                           // 0x0(0x78)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.Start Toast Animation
struct UAthenaToastWidget_C_Start_Toast_Animation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.BndEvt__Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UAthenaToastWidget_C_BndEvt__Outro_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.On Idle Finished
struct UAthenaToastWidget_C_On_Idle_Finished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.SimulateStoreToast
struct UAthenaToastWidget_C_SimulateStoreToast_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.Clicked
struct UAthenaToastWidget_C_Clicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.CompleteToast
struct UAthenaToastWidget_C_CompleteToast_Params
{
public:
};

// 0x158 (0x158 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.ExecuteUbergraph_AthenaToastWidget
struct UAthenaToastWidget_C_ExecuteUbergraph_AthenaToastWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5434[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               Temp_object_Variable;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5435[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStoreCallout                         K2Node_CustomEvent_Callout;                        // 0x38(0x78)()
	bool                                         CallFunc_IsAssetNull_ReturnValue;                  // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5436[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0xC0(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xD0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FStoreCallout                         K2Node_MakeStruct_StoreCallout;                    // 0xD8(0x78)()
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.OnFinishedToast__DelegateSignature
struct UAthenaToastWidget_C_OnFinishedToast__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
