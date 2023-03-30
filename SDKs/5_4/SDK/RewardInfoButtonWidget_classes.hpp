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

// 0x48 (0x8F8 - 0x8B0)
// WidgetBlueprintGeneratedClass RewardInfoButtonWidget.RewardInfoButtonWidget_C
class URewardInfoButtonWidget_C : public UFortRewardInfoButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8B0(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        ItemDetails;                                       // 0x8B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ItemInfo;                                          // 0x8C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  DisplayNameText;                                   // 0x8C8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  DisplayQuantity;                                   // 0x8E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RewardInfoButtonWidget_C");
		return Clss;
	}

	void GetDisplayName(class FText* DisplayName, class FText OutName, enum class EFortItemType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class FText Temp_text_Variable12, class FText Temp_text_Variable13, class FText Temp_text_Variable14, class FText Temp_text_Variable15, class FText Temp_text_Variable16, class FText Temp_text_Variable17, class FText Temp_text_Variable18, class FText Temp_text_Variable19, class FText Temp_text_Variable20, class FText Temp_text_Variable21, class FText Temp_text_Variable22, class FText Temp_text_Variable23, class FText Temp_text_Variable24, class FText Temp_text_Variable25, class FText Temp_text_Variable26, class FText Temp_text_Variable27, class FText Temp_text_Variable28, class FText Temp_text_Variable29, class FText Temp_text_Variable30, class FText Temp_text_Variable31, class FText Temp_text_Variable32, class FText Temp_text_Variable33, class FText Temp_text_Variable34, class FText Temp_text_Variable35, class FText Temp_text_Variable36, class FText Temp_text_Variable37, class FText Temp_text_Variable38, class FText Temp_text_Variable39, class FText Temp_text_Variable40, class FText Temp_text_Variable41, class FText Temp_text_Variable42, class FText Temp_text_Variable43, class FText Temp_text_Variable44, class FText Temp_text_Variable45, class FText Temp_text_Variable46, class FText Temp_text_Variable47, class FText Temp_text_Variable48, class FText Temp_text_Variable49, class FText Temp_text_Variable50, class FText Temp_text_Variable51, class FText Temp_text_Variable52, class FText Temp_text_Variable53, class FText Temp_text_Variable54, class FText Temp_text_Variable55, class FText Temp_text_Variable56, class FText Temp_text_Variable57, class FText Temp_text_Variable58, class FText Temp_text_Variable59, class FText Temp_text_Variable60, class FText Temp_text_Variable61, class FText Temp_text_Variable62, class FText Temp_text_Variable63, class FText Temp_text_Variable64, class FText Temp_text_Variable65, class FText Temp_text_Variable66, class FText Temp_text_Variable67, class FText Temp_text_Variable68, class FText Temp_text_Variable69, class FText Temp_text_Variable70, class FText Temp_text_Variable71, class FText Temp_text_Variable72, class FText Temp_text_Variable73, class FText Temp_text_Variable74, class FText Temp_text_Variable75, class FText Temp_text_Variable76, class FText Temp_text_Variable77, class FText Temp_text_Variable78, class FText Temp_text_Variable79, class FText Temp_text_Variable80, class FText Temp_text_Variable81, class FText Temp_text_Variable82, class FText Temp_text_Variable83, class FText Temp_text_Variable84, class FText Temp_text_Variable85, class FText CallFunc_MakeLiteralText_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData4, class FText CallFunc_Format_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue1, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess, enum class EFortInventoryFilter CallFunc_GetFilterCategory_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue2, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData5, enum class EFortItemType CallFunc_GetType_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class FText CallFunc_Format_ReturnValue1, class UFortItem* CallFunc_GetItemInstance_ReturnValue4, enum class EFortItemType CallFunc_GetType_ReturnValue1, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class FText CallFunc_Format_ReturnValue2);
	void SetShowDescriptionBP(bool bInShowDescription);
	void HandleDifferentItemOrQuantitySetBP();
	void ExecuteUbergraph_RewardInfoButtonWidget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_Event_bInShowDescription, int32 CallFunc_GetQuantity_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetEmptyText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_Format_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue1, class FText CallFunc_GetDisplayName_ReturnValue1, class FText CallFunc_GetDisplayName_DisplayName, enum class ESlateVisibility Temp_byte_Variable1, class FText CallFunc_GetEmptyText_ReturnValue1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
