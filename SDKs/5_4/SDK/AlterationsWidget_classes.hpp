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

// 0xB4 (0x33C - 0x288)
// WidgetBlueprintGeneratedClass AlterationsWidget.AlterationsWidget_C
class UAlterationsWidget_C : public UFortAlterationsWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(Transient, DuplicateTransient)
	class UAlterationWidget_C*                   AlterationWidget;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationWidget_C*                   AlterationWidget_2;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationWidget_C*                   AlterationWidget_3;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAlterationWidget_C*                   AlterationWidget_6;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Border_PerksMessage;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderLocked;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderUnlocked;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkDivider_C*                        LockedUnlockedDivider;                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkDivider_C*                        PerkDivider_C_106;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkDivider_C*                        PerkDivider_C_107;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxAlterationsLocked;                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBoxAlterationsUnlocked;                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIncludeName;                                      // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bIncludeDescription;                               // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bIncludeShortDescription;                          // 0x2F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         FirstAlterationComplete;                           // 0x2F3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FirstLockedComplete;                               // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortBrushSize                    IconSize;                                          // 0x2F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4495[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               RowPadding;                                        // 0x2F8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                         bUseLargeFormatNameOnly;                           // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4496[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Description_Padding;                               // 0x30C(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4497[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          PerkAnimIntroTimer;                                // 0x320(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        NextAnimToPlay;                                    // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               RowPadding2;                                       // 0x32C(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AlterationsWidget_C");
		return Clss;
	}

	void Clear();
	void ClearAndInitialize(bool IntroAlterations);
	void Reset();
	void CreateAnimations(bool IntroAnims, int32 Temp_int_Variable, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, int32 CallFunc_GetButtonCount_ReturnValue, class UAlterationWidgetButton_C* K2Node_DynamicCast_AsAlteration_Widget_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void IntroAnim(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetButtonCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UAlterationWidgetButton_C* K2Node_DynamicCast_AsAlteration_Widget_Button, bool K2Node_DynamicCast_bSuccess);
	void CenterWidget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void SetupBorders();
	void TriggerModificationAnim(int32 ModifiedSlotIndex, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UAlterationWidgetButton_C* K2Node_DynamicCast_AsAlteration_Widget_Button, bool K2Node_DynamicCast_bSuccess);
	void SetupAlteration(class UCommonUserWidget* Alteration, class UFortAlterationInfo* AlterationInfo, class UAlterationWidgetButton_C* K2Node_DynamicCast_AsAlteration_Widget_Button, bool K2Node_DynamicCast_bSuccess, class UAlterationWidget_C* K2Node_DynamicCast_AsAlteration_Widget, bool K2Node_DynamicCast_bSuccess1);
	class UCommonUserWidget* CreateAlterationWidget(enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAlterationWidgetButton_C* CallFunc_Create_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UAlterationWidget_C* CallFunc_Create_ReturnValue1);
	void GenerateAlteration(class UFortAlterationInfo* AlterationInfo, class UCommonUserWidget* Alteration, class UCommonUserWidget* CallFunc_CreateAlterationWidget_ReturnValue, bool CallFunc_IsAlterationUnlocked_ReturnValue);
	void AddAlterationToVerticalbox(class UCommonUserWidget* Alteration, bool IsUnlocked, const struct FMargin& SpacePadding, class UVerticalBox* DestinationVerticalBox, bool Temp_bool_Variable, bool K2Node_Select_Default, class UAlterationWidget_C* K2Node_DynamicCast_AsAlteration_Widget, bool K2Node_DynamicCast_bSuccess, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool Temp_bool_Variable1, class UVerticalBox* K2Node_Select1_Default);
	void UpdatePerksMessage(class FText PerkCount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Construct();
	void OnItemChanged(bool bIntroAlterations);
	void OnItemToCompareWithChanged();
	void OnStateChanged();
	void OnGenerateAlteration(class UFortAlterationInfo* AlterationInfo);
	void OnFocusFirstItem();
	void OnAlterationSlotIndexModifiedBP(int32 ModifiedIndex);
	void Destruct();
	void ExecuteUbergraph_AlterationsWidget(int32 EntryPoint, bool K2Node_Event_bIntroAlterations, class UFortAlterationInfo* K2Node_Event_AlterationInfo, int32 K2Node_Event_ModifiedIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
