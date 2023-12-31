// Enum AkAudio.*6c7cacc3b3
enum class *6c7cacc3b3 : uint8 {
	*e81f8ef1a7,
	*f7e801deb6,
	*be25b8ae20,
	*6c7cacc3b3_MAX,
};

// Enum AkAudio.*e1ea2547b8
enum class *e1ea2547b8 : uint8 {
	*b924bdca42,
	*ba5671ec84,
	*3a49b9411f,
	*705446f4a9,
	*00e60f8573,
	*e1ea2547b8_MAX,
};

// Enum AkAudio.ESoundVolumeShape
enum class ESoundVolumeShape : uint8 {
	Box,
	Sphere,
	Capsule,
	ESoundVolumeShape_MAX,
};

// Enum AkAudio.EAkIgnoreRolloffDirection
enum class EAkIgnoreRolloffDirection : uint8 {
	None,
	Left,
	Right,
	Front,
	Back,
	LeftAndRight,
	LeftAndFront,
	LeftAndBack,
	RightAndFront,
	RightAndBack,
	BackAndFront,
	EAkIgnoreRolloffDirection_MAX,
};

// ScriptStruct AkAudio.*54ef9cb877
// Size: 0x10 (Inherited: 0x00)
struct F*54ef9cb877 {
	enum class *e1ea2547b8 Mode; // 0x00(0x01)
	enum class *6c7cacc3b3 *b52c2a53b9; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *b9cf160e4a; // 0x04(0x04)
	float *ba6776704e; // 0x08(0x04)
	float MaxOcclusionDistance; // 0x0c(0x04)
};

// ScriptStruct AkAudio.*00d7636509
// Size: 0x80 (Inherited: 0x00)
struct F*00d7636509 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FRotator Rotation; // 0x08(0x0c)
	struct FVector Location; // 0x14(0x0c)
	char pad_20[0x9]; // 0x20(0x09)
	enum class ESoundVolumeShape Shape; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FVector BoxExtents; // 0x2c(0x0c)
	float Radius; // 0x38(0x04)
	float CapsuleHalfHeight; // 0x3c(0x04)
	char pad_40[0x40]; // 0x40(0x40)
};

// ScriptStruct AkAudio.*e48f5e5e98
// Size: 0x158 (Inherited: 0x80)
struct F*e48f5e5e98 : F*00d7636509 {
	struct TMap<struct U*34df6bd037*, float> *aaa299e6a8; // 0x80(0x50)
	struct U*aba85388f6* *a6aa3bfb7f; // 0xd0(0x08)
	int32 Priority; // 0xd8(0x04)
	float *0c9cab26f4; // 0xdc(0x04)
	bool *85c8667d45; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float *594ce872ac; // 0xe4(0x04)
	enum class EAkIgnoreRolloffDirection *25031f01e9; // 0xe8(0x01)
	char pad_E9[0x6f]; // 0xe9(0x6f)
};

// ScriptStruct AkAudio.*625dea2c27
// Size: 0xf0 (Inherited: 0x80)
struct F*625dea2c27 : F*00d7636509 {
	float Openness; // 0x80(0x04)
	float *a3ddecb623; // 0x84(0x04)
	float *0c9cab26f4; // 0x88(0x04)
	float *f4edde330c; // 0x8c(0x04)
	char pad_90[0x60]; // 0x90(0x60)
};

// ScriptStruct AkAudio.*5e6fb77b56
// Size: 0x20 (Inherited: 0x00)
struct F*5e6fb77b56 {
	struct TArray<struct F*e48f5e5e98> Volumes; // 0x00(0x10)
	struct TArray<struct F*625dea2c27> *08db606e20; // 0x10(0x10)
};

// ScriptStruct AkAudio.*599efccd43
// Size: 0x18 (Inherited: 0x00)
struct F*599efccd43 {
	struct FString Name; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct AkAudio.*95e5158016
// Size: 0x08 (Inherited: 0x00)
struct F*95e5158016 {
	int32 *4ed246d251; // 0x00(0x04)
	int32 *01efe9e33a; // 0x04(0x04)
};

// ScriptStruct AkAudio.*c20273b376
// Size: 0x18 (Inherited: 0x00)
struct F*c20273b376 {
	struct TArray<int32> *49f66a82c8; // 0x00(0x10)
	bool *e144483b7c; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct AkAudio.*45d2d61bc8
// Size: 0x20 (Inherited: 0x00)
struct F*45d2d61bc8 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)
};

// ScriptStruct AkAudio.*4efd340575
// Size: 0x20 (Inherited: 0x00)
struct F*4efd340575 {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*68b5d3eff6* Section; // 0x18(0x08)
};

// ScriptStruct AkAudio.*7f5880525c
// Size: 0x20 (Inherited: 0x00)
struct F*7f5880525c {
	char pad_0[0x18]; // 0x00(0x18)
	struct U*15a3e4ead1* Section; // 0x18(0x08)
};

// ScriptStruct AkAudio.*73fe94ee9f
// Size: 0x80 (Inherited: 0x00)
struct F*73fe94ee9f {
	struct FString *a934b2fe16; // 0x00(0x10)
	struct FRichCurve *ccc3db8c4a; // 0x10(0x70)
};

