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

// 0x108 (0xC98 - 0xB90)
// BlueprintGeneratedClass Parent_Tree.Parent_Tree_C
class AParent_Tree_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB90(0x8)(Transient, DuplicateTransient)
	struct FVector                               Wind_Direction;                                    // 0xB98(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         EmitLeaves_;                                       // 0xBA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         DebugMode_;                                        // 0xBA5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         DebugStorms_;                                      // 0xBA6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class En_LeafTypes_01                   LeafTypes;                                         // 0xBA7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FName>                          LeafEmitterNamesSpherical;                         // 0xBA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FName>                          LeafEmitterNamesCylindrical;                       // 0xBB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>      LeafEmitterComponents;                             // 0xBC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               EmitterSize;                                       // 0xBD8(0xC)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Lifetime_Idle_;                                    // 0xBE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Lifetime_Storm_;                                   // 0xBE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SpawnRate_Idle_;                                   // 0xBEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        SpawnRate_Storm_;                                  // 0xBF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        WindIntensity_Idle_;                               // 0xBF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        WindIntensity_Storm_;                              // 0xBF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_5C76[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MediumLeafMaterialMasked;                          // 0xC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    SmallLeafMaterialMasked;                           // 0xC08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    LargeLeafMaterialMasked;                           // 0xC10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    PineLeafMaterialMasked;                            // 0xC18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              LeafEmitterSetup;                                  // 0xC20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EmitterMaxDrawDistance;                            // 0xC28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxEmitterCount;                                   // 0xC2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentEmitterCount;                               // 0xC30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StormActive_;                                      // 0xC34(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C77[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MediumLeafMaterialTranslucent;                     // 0xC38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    SmallLeafMaterialTranslucent;                      // 0xC40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DistanceFieldsEnabled_;                            // 0xC48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    LargeLeafMaterialTranslucent;                      // 0xC50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    PineLeafMaterialTranslucent;                       // 0xC58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Leaf_Emitter_Setup_Template;                       // 0xC60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Leaf_Material_Setup;                               // 0xC68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortWindImpulseHandle                WindHandle;                                        // 0xC70(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         DebugWind;                                         // 0xC74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C79[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Debug_Wind_Intensity;                              // 0xC78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Debug_TempMaterial;                                // 0xC80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugWindYaw;                                      // 0xC88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Wind_Intensity_Debug_Mesh;                         // 0xC90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Parent_Tree_C");
		return Clss;
	}

	void RemoveTestWind(float BlendTime, bool CallFunc_IsDedicatedServer_ReturnValue, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasWindImpulse_ReturnValue);
	void FX_UpdateEmitterParameters(bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool Temp_bool_Variable4, int32 CallFunc_GetShadowQuality_ReturnValue, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* K2Node_Select1_Default, class UMaterialInterface* K2Node_Select2_Default, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UMaterialInterface* K2Node_Select3_Default, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Select4_Default, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void FX_UpdateEmitterStates(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UserConstructionScript(const TArray<class UMaterialInterface*>& IntenseWindMaterialsForPreview, const TArray<class UMaterialInterface*>& OriginalMaterials, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, const struct FTransform& Temp_struct_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetIntenseWindMaterialsForPreview_Materials, bool CallFunc_GetIntenseWindMaterialsForPreview_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess, class UMaterialInterface* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue2, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue1, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue1, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, bool CallFunc_IsValid_ReturnValue3, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue1, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue1, float CallFunc_BreakColor_R1, float CallFunc_BreakColor_G1, float CallFunc_BreakColor_B1, float CallFunc_BreakColor_A1);
	void ReceiveDestroyed();
	void ChangeWindIntensity(float Intensity, float Time_It_Takes_To_Reach_New_Intensity);
	void ExecuteUbergraph_Parent_Tree(int32 EntryPoint, float K2Node_CustomEvent_Intensity, float K2Node_CustomEvent_Time_It_Takes_To_Reach_New_Intensity);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
