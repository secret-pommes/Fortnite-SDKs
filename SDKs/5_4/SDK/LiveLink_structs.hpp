#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x58 - 0x30)
// ScriptStruct LiveLink.AnimNode_LiveLinkPose
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
public:
	class FName                                  SubjectName;                                       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRetargetAsset>    RetargetAsset;                                     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DE[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLink.LiveLinkSourceHandle
struct FLiveLinkSourceHandle
{
public:
	uint8                                        Pad_13DF[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLink.SubjectFrameHandle
struct FSubjectFrameHandle
{
public:
	uint8                                        Pad_13E0[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LiveLink.LiveLinkTransform
struct FLiveLinkTransform
{
public:
	uint8                                        Pad_13E1[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// ScriptStruct LiveLink.CachedSubjectFrame
struct FCachedSubjectFrame
{
public:
	uint8                                        Pad_13E2[0x140];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LiveLink.SubjectMetadata
struct FSubjectMetadata
{
public:
	TMap<class FName, class FString>             StringMetadata;                                    // 0x0(0x50)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimecode                             SceneTimecode;                                     // 0x50(0x14)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            SceneFramerate;                                    // 0x64(0x8)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x640 - 0x5E0)
// ScriptStruct LiveLink.LiveLinkInstanceProxy
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_13E4[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LiveLink.ProviderPollResult
struct FProviderPollResult
{
public:
	uint8                                        Pad_13E5[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MachineName;                                       // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
struct FLiveLinkRetargetAssetReference
{
public:
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LiveLink.LiveLinkVirtualSubject
struct FLiveLinkVirtualSubject
{
public:
	TArray<class FName>                          Subjects;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E6[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 Source;                                            // 0x20(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E7[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
