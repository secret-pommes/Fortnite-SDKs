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

// 0x0 (0x0 - 0x0)
// Function ItemReceivedUnGiftHeader.ItemReceivedUnGiftHeader_C.InitFromGiftBoxItem_BP
struct UItemReceivedUnGiftHeader_C_InitFromGiftBoxItem_BP_Params
{
public:
};

// 0xB8 (0xB8 - 0x0)
// Function ItemReceivedUnGiftHeader.ItemReceivedUnGiftHeader_C.ExecuteUbergraph_ItemReceivedUnGiftHeader
struct UItemReceivedUnGiftHeader_C_ExecuteUbergraph_ItemReceivedUnGiftHeader_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E2C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x78(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x88(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0xA0(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
