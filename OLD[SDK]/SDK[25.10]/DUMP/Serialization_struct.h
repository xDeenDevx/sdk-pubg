// ScriptStruct Serialization.*aff2b00be0
// Size: 0x1d8 (Inherited: 0x00)
struct F*aff2b00be0 {
	struct F*056d0143af Numerics; // 0x00(0x30)
	struct F*4eb98a964b Booleans; // 0x30(0x08)
	struct F*769bb05975 Objects; // 0x38(0x10)
	struct F*5289c56fcf Builtins; // 0x48(0x60)
	struct F*aa21b36748 Arrays; // 0xa8(0x40)
	struct F*6d0a30945e Maps; // 0xe8(0xf0)
};

// ScriptStruct Serialization.*6d0a30945e
// Size: 0xf0 (Inherited: 0x00)
struct F*6d0a30945e {
	struct TMap<int32, struct FString> *335958c85c; // 0x00(0x50)
	struct TMap<struct FString, struct FString> *4b770bb41e; // 0x50(0x50)
	struct TMap<struct FString, struct FVector> *519cb302a0; // 0xa0(0x50)
};

// ScriptStruct Serialization.*aa21b36748
// Size: 0x40 (Inherited: 0x00)
struct F*aa21b36748 {
	struct TArray<int32> *f8fa86193f; // 0x00(0x10)
	int32 *38c14272dd; // 0x10(0x04)
	int32 *a5ac16a19b[0x03]; // 0x14(0x0c)
	float *246321cd1d[0x03]; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FVector> *c0f92d091a; // 0x30(0x10)
};

// ScriptStruct Serialization.*5289c56fcf
// Size: 0x60 (Inherited: 0x00)
struct F*5289c56fcf {
	struct FGuid Guid; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	struct FString String; // 0x18(0x10)
	struct FRotator Rotator; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText Text; // 0x38(0x18)
	struct FVector Vector; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Serialization.*769bb05975
// Size: 0x10 (Inherited: 0x00)
struct F*769bb05975 {
	struct UClass* Class; // 0x00(0x08)
	struct UObject* *c06692b07e; // 0x08(0x08)
};

// ScriptStruct Serialization.*4eb98a964b
// Size: 0x08 (Inherited: 0x00)
struct F*4eb98a964b {
	bool *bf4b2c5e1c; // 0x00(0x01)
	bool *e429e18164; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	uint32 *a3dd092a3b; // 0x04(0x04)
};

// ScriptStruct Serialization.*056d0143af
// Size: 0x30 (Inherited: 0x00)
struct F*056d0143af {
	int8 Int8; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	int16 Int16; // 0x02(0x02)
	int32 Int32; // 0x04(0x04)
	int64 Int64; // 0x08(0x08)
	bool UInt8; // 0x10(0x01)
	char pad_11[0x1]; // 0x11(0x01)
	uint16 UInt16; // 0x12(0x02)
	uint32 UInt32; // 0x14(0x04)
	uint64 UInt64; // 0x18(0x08)
	float Float; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	double Double; // 0x28(0x08)
};

