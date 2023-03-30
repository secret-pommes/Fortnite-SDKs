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

// 0x19C (0xA1C - 0x880)
// BlueprintGeneratedClass TheaterCamera_Blueprint.TheaterCamera_Blueprint_C
class ATheaterCamera_Blueprint_C : public AFortTheaterCamera
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x880(0x8)(Transient, DuplicateTransient)
	float                                        FocusTimeline_Float_Curve_ADC98EA5D14E24EC78DD4F80C5102578; // 0x888(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FocusTimeline__Direction_ADC98EA5D14E24EC78DD4F80C5102578; // 0x88C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FocusTimeline;                                     // 0x890(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugZoomTL_CameraRotLevelMax_41B63CEF445574B1F9D6F489004E4238; // 0x898(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugZoomTL_CameraRotLevelZero_41B63CEF445574B1F9D6F489004E4238; // 0x89C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugZoomTL_CameraOffsetX___LevelMax_41B63CEF445574B1F9D6F489004E4238; // 0x8A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugZoomTL_CameraOffsetX___LevelZero_41B63CEF445574B1F9D6F489004E4238; // 0x8A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugZoomTL_TotalNumberOfZoomLevels_41B63CEF445574B1F9D6F489004E4238; // 0x8A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugZoomTL_CameraHeight_LevelMax_41B63CEF445574B1F9D6F489004E4238; // 0x8AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugZoomTL_CameraHeight_LevelZero_41B63CEF445574B1F9D6F489004E4238; // 0x8B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugZoomTL_FOV_In_41B63CEF445574B1F9D6F489004E4238; // 0x8B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugZoomTL_FOV_Out_41B63CEF445574B1F9D6F489004E4238; // 0x8B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                DebugZoomTL__Direction_41B63CEF445574B1F9D6F489004E4238; // 0x8BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    DebugZoomTL;                                       // 0x8C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WorldLocSnapSize;                                  // 0x8C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraZHeightLevelZero;                            // 0x8CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraXOffsetLevelZero;                            // 0x8D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortTheaterMapTile*                   TargetTile;                                        // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentZoomPercentage;                             // 0x8E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NumberOfZoomLevels;                                // 0x8E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZoomDistanceUnitZ;                                 // 0x8E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentZoomLevel;                                  // 0x8EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FocusedTileLocWithOffset;                          // 0x8F0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseDown;                                         // 0x8FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentOffsetAmountX;                              // 0x900(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraXOffsetLevelMax;                             // 0x904(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InitialZoomLevels;                                 // 0x908(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ForwardVector;                                     // 0x90C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraYRotationLevelZero;                          // 0x918(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetTileLoc;                                     // 0x91C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OldOffsetAmountX;                                  // 0x928(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentFOV;                                        // 0x92C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FOVLevelZero;                                      // 0x930(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FOVLevelMax;                                       // 0x934(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraZHeightLevelMax;                             // 0x938(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZoomDistanceUnitX;                                 // 0x93C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugCameraZoom;                                   // 0x940(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5900[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraYRotationLevelMax;                           // 0x944(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SnapCameraToFocusedTile;                           // 0x948(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5901[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector2D>                     CloudMaskLocations;                                // 0x950(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        CloudMaskScale;                                    // 0x960(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReadyForPings;                                     // 0x964(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5902[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_Hex_PARENT_C*>              AllHexesArray;                                     // 0x968(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<uint8>                                HexesPinged;                                       // 0x978(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         AllHexesHavePingedOnce;                            // 0x988(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WaitForForceFocus;                                 // 0x989(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AQuestIsPinned;                                    // 0x98A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5903[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 PinnedQuestsArray;                                 // 0x990(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         WaitForPinned;                                     // 0x9A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5904[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HexWorldLocFromBP_Hex_PARENT;                      // 0x9A4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxCameraDistance;                                 // 0x9B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HighestX_Value;                                    // 0x9B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HighestY_Value;                                    // 0x9B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TotalWidthOfHexPlane;                              // 0x9BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HexPlaneBufferSize;                                // 0x9C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CenterLocOfAllHexes;                               // 0x9C4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                     RoadMaskLocations;                                 // 0x9D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                     TileType0_Locs;                                    // 0x9E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                     TileType1_Locs;                                    // 0x9F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                     TileType2_Locs;                                    // 0xA00(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        TileTypeMaskScale;                                 // 0xA10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuspendInput;                                     // 0xA14(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5905[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LastZoomButtonHeldTime;                            // 0xA18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TheaterCamera_Blueprint_C");
		return Clss;
	}

	void ZoomCameraWithHeldGamepadInput(float MinTimeForZoom, float RightTriggerTimeHeld, float LeftTriggerTimeHeld, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue2, bool CallFunc_Greater_FloatFloat_ReturnValue3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetInputKeyTimeDown_ReturnValue, float CallFunc_GetInputKeyTimeDown_ReturnValue1);
	void SetSuspendInput(bool SuspendInput);
	bool IsInputSuspended(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_IsInputSuspended_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	struct FVector2D NewFunction_0(class AActor* Self2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue);
	void PanCamera(float DeltaX, float DeltaY, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FVector& CallFunc_LimitToTheater_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
	void HandleTheaterSelected(const class FString& TheaterId);
	void ZoomCameraStep(bool Forward, const struct FVector& ActorLocationPreZoom, float ZoomDirection, float Temp_float_Variable, float Temp_float_Variable1, float CallFunc_Lerp_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, float CallFunc_Add_FloatFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Lerp_ReturnValue2, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void UserConstructionScript();
	void FocusTimeline__FinishedFunc();
	void FocusTimeline__UpdateFunc();
	void DebugZoomTL__FinishedFunc();
	void DebugZoomTL__UpdateFunc();
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void OnActivated();
	void OnDeactivated();
	void SetTileFocus(class AFortTheaterMapTile* TargetTile);
	void ReceiveTick(float DeltaSeconds);
	void OnDragBegin();
	void OnDragEnd();
	void StopFocusTimeline();
	void ForceTileFocus(const struct FVector& HexWorldLoc);
	void PingFromHex();
	void RefreshCloudMask();
	void MaskFinished();
	void PinnedPing();
	void ExecuteUbergraph_TheaterCamera_Blueprint(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortTheaterMapTile* K2Node_Event_TargetTile, float K2Node_Event_DeltaSeconds, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetPlayerController_ReturnValue1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Lerp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 Temp_int_Loop_Counter_Variable3, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, const struct FVector& K2Node_CustomEvent_HexWorldLoc, float CallFunc_Multiply_FloatFloat_ReturnValue1, TArray<class ABP_Hex_PARENT_C*>& CallFunc_GetAllActorsOfClass_OutActors1, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_Add_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable2, const struct FVector& CallFunc_MakeVector_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue1, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable3, const struct FVector2D& CallFunc_Array_Get_Item1, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size, int32 Temp_int_Loop_Counter_Variable4, int32 CallFunc_Add_IntInt_ReturnValue4, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue3, int32 Temp_int_Array_Index_Variable4, int32 CallFunc_Array_Length_ReturnValue4, int32 CallFunc_Array_Length_ReturnValue5, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue6, int32 Temp_int_Array_Index_Variable5, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue1, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue5, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable5, int32 CallFunc_Add_IntInt_ReturnValue5, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue8, bool CallFunc_HasPinnedQuest_Pinned, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item4, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue1, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue9, bool CallFunc_Less_IntInt_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 Temp_int_Array_Index_Variable6, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item5, class APlayerController* CallFunc_GetPlayerController_ReturnValue2, float CallFunc_GetInputMouseDelta_DeltaX, float CallFunc_GetInputMouseDelta_DeltaY, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue5, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue6, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue2, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue7, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue8, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable6, bool CallFunc_Less_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue6, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult1, bool CallFunc_K2_SetActorLocation_ReturnValue1, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item6, float CallFunc_Add_FloatFloat_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue6, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, float CallFunc_Add_FloatFloat_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue10, bool CallFunc_Less_IntInt_ReturnValue5, const struct FVector& CallFunc_GetActorArrayAverageLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_BreakVector_X4, float CallFunc_BreakVector_Y4, float CallFunc_BreakVector_Z4, float CallFunc_BreakVector_X5, float CallFunc_BreakVector_Y5, float CallFunc_BreakVector_Z5, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue3, float CallFunc_Abs_ReturnValue, float CallFunc_Abs_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue1, bool CallFunc_Greater_FloatFloat_ReturnValue2, int32 Temp_int_Array_Index_Variable7, bool Temp_bool_IsClosed_Variable, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas1, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size1, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context1, int32 Temp_int_Loop_Counter_Variable7, const struct FVector2D& CallFunc_Array_Get_Item7, int32 CallFunc_Array_Length_ReturnValue11, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position1, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size1, bool CallFunc_Less_IntInt_ReturnValue6, int32 CallFunc_Add_IntInt_ReturnValue7, class APlayerController* CallFunc_GetPlayerController_ReturnValue3, int32 Temp_int_Array_Index_Variable8, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item8, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue3, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue3, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue3, class APlayerController* CallFunc_GetPlayerController_ReturnValue4, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue1, TArray<class AHexmapLevelSettings_Temperate01_C*>& CallFunc_GetAllActorsOfClass_OutActors2, class AHexmapLevelSettings_Temperate01_C* CallFunc_Array_Get_Item9, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class AHexmapLevelSettings_Temperate01_C*>& CallFunc_GetAllActorsOfClass_OutActors3, class AHexmapLevelSettings_Temperate01_C* CallFunc_Array_Get_Item10, class APlayerController* CallFunc_GetPlayerController_ReturnValue5, float CallFunc_GetInputAnalogStickState_StickX, float CallFunc_GetInputAnalogStickState_StickY, float CallFunc_Multiply_FloatFloat_ReturnValue9, float CallFunc_Multiply_FloatFloat_ReturnValue10, float CallFunc_Multiply_FloatFloat_ReturnValue11, int32 Temp_int_Loop_Counter_Variable8, int32 Temp_int_Array_Index_Variable9, bool CallFunc_Less_IntInt_ReturnValue7, int32 CallFunc_Add_IntInt_ReturnValue8, int32 Temp_int_Loop_Counter_Variable9, bool CallFunc_Less_IntInt_ReturnValue8, int32 CallFunc_Add_IntInt_ReturnValue9, int32 Temp_int_Array_Index_Variable10, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item11, int32 Temp_int_Loop_Counter_Variable10, int32 CallFunc_Add_IntInt_ReturnValue10, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue4, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue4, int32 Temp_int_Array_Index_Variable11, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue4, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue4, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas2, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size2, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context2, int32 CallFunc_Array_Add_ReturnValue2, int32 Temp_int_Loop_Counter_Variable11, bool CallFunc_Less_IntInt_ReturnValue9, int32 CallFunc_Add_IntInt_ReturnValue11, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas3, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size3, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context3, const struct FVector2D& CallFunc_Array_Get_Item12, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position2, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size2, int32 CallFunc_Array_Length_ReturnValue12, int32 Temp_int_Loop_Counter_Variable12, bool CallFunc_Less_IntInt_ReturnValue10, int32 CallFunc_Add_IntInt_ReturnValue12, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas4, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size4, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context4, const struct FVector2D& CallFunc_Array_Get_Item13, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position3, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size3, int32 CallFunc_Array_Length_ReturnValue13, bool CallFunc_Less_IntInt_ReturnValue11, class UCommonInputContext* CallFunc_GetContext_ReturnValue, const struct FVector2D& CallFunc_Array_Get_Item14, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position4, const struct FVector2D& CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue14, bool CallFunc_IsInputSuspended_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue12, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsInputSuspended_ReturnValue1, const struct FKey& K2Node_InputKeyEvent_Key, bool CallFunc_IsInputSuspended_ReturnValue2, const struct FKey& K2Node_InputKeyEvent_Key1, int32 Temp_int_Array_Index_Variable12, class ABP_Hex_PARENT_C* CallFunc_Array_Get_Item15, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue3, bool Temp_bool_Variable, int32 CallFunc_Array_Add_ReturnValue4, bool CallFunc_Array_Contains_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue13, uint8 Temp_byte_Variable, int32 CallFunc_Array_Add_ReturnValue5, int32 CallFunc_Array_Add_ReturnValue6);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
