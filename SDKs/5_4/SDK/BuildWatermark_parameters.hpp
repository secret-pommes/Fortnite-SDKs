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

// 0x48 (0x48 - 0x0)
// Function BuildWatermark.BuildWatermark_C.UpdateCalenderOffset
struct UBuildWatermark_C_UpdateCalenderOffset_Params
{
public:
	enum class ESubGame                          CallFunc_GetCurrentSubGame_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5132[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSeasonalEventManager*             CallFunc_GetSeasonalEventManager_ReturnValue;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCalendarOffsetString_OutString;        // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCalendarOffsetString_ReturnValue;      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5133[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)()
};

// 0x39 (0x39 - 0x0)
// Function BuildWatermark.BuildWatermark_C.SetTextCollapseIfDefault
struct UBuildWatermark_C_SetTextCollapseIfDefault_Params
{
public:
	class UTextBlock*                            Text_Widget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  InputText;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  DefaultText;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function BuildWatermark.BuildWatermark_C.Update Watermark
struct UBuildWatermark_C_Update_Watermark_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetWatermark_ReturnValue;                 // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue1;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)()
	class FText                                  CallFunc_GetMCPRegion_ReturnValue;                 // 0x38(0x18)()
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue2;                  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetAppName_ReturnValue;                   // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue1;           // 0x68(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function BuildWatermark.BuildWatermark_C.Construct
struct UBuildWatermark_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BuildWatermark.BuildWatermark_C.HandlePartyJoined
struct UBuildWatermark_C_HandlePartyJoined_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BuildWatermark.BuildWatermark_C.Destruct
struct UBuildWatermark_C_Destruct_Params
{
public:
};

// 0x1F8 (0x1F8 - 0x0)
// Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged
struct UBuildWatermark_C_HandlePlayerStateChanged_Params
{
public:
	struct FFortTeamMemberInfo                   PlayerInfo;                                        // 0x0(0x1F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x228 (0x228 - 0x0)
// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
struct UBuildWatermark_C_ExecuteUbergraph_BuildWatermark_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5134[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTeamMemberInfo                   K2Node_CustomEvent_PlayerInfo;                     // 0x8(0x1F8)(ConstParm, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x200(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x210(0x10)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
