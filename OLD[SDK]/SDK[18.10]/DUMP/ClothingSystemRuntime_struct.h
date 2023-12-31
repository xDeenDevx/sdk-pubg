// Enum ClothingSystemRuntime.EClothingWindMethod
enum class EClothingWindMethod : uint8 {
	Legacy,
	Accurate,
	EClothingWindMethod_MAX,
};

// Enum ClothingSystemRuntime.MaskTarget_PhysMesh
enum class MaskTarget_PhysMesh : uint8 {
	None,
	MaxDistance,
	BackstopDistance,
	BackstopRadius,
	MaskTarget_MAX,
};

// ScriptStruct ClothingSystemRuntime.*3b13593114
// Size: 0xbc (Inherited: 0x00)
struct F*3b13593114 {
	enum class EClothingWindMethod *602ebc0f42; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*7219317c11 *e810d75907; // 0x04(0x10)
	struct F*7219317c11 *c4000a48d5; // 0x14(0x10)
	struct F*7219317c11 *44204addeb; // 0x24(0x10)
	struct F*7219317c11 *f95d97bfb7; // 0x34(0x10)
	float *f8da5cc770; // 0x44(0x04)
	float SelfCollisionStiffness; // 0x48(0x04)
	float *e3c8360291; // 0x4c(0x04)
	struct FVector Damping; // 0x50(0x0c)
	float Friction; // 0x5c(0x04)
	float *e748020853; // 0x60(0x04)
	float *8d9fd5e4ca; // 0x64(0x04)
	struct FVector *75ab90ab33; // 0x68(0x0c)
	struct FVector *8008bfd74c; // 0x74(0x0c)
	struct FVector LinearInertiaScale; // 0x80(0x0c)
	struct FVector AngularInertiaScale; // 0x8c(0x0c)
	struct FVector CentrifugalInertiaScale; // 0x98(0x0c)
	float SolverFrequency; // 0xa4(0x04)
	float StiffnessFrequency; // 0xa8(0x04)
	float GravityScale; // 0xac(0x04)
	float TetherStiffness; // 0xb0(0x04)
	float TetherLimit; // 0xb4(0x04)
	float *0874902f89; // 0xb8(0x04)
};

// ScriptStruct ClothingSystemRuntime.*7219317c11
// Size: 0x10 (Inherited: 0x00)
struct F*7219317c11 {
	float Stiffness; // 0x00(0x04)
	float StiffnessMultiplier; // 0x04(0x04)
	float StretchLimit; // 0x08(0x04)
	float CompressionLimit; // 0x0c(0x04)
};

// ScriptStruct ClothingSystemRuntime.*2643f3aca7
// Size: 0xe8 (Inherited: 0x00)
struct F*2643f3aca7 {
	struct F*3e59c27ceb *920325a21a; // 0x00(0x98)
	struct F*cc87d7d6b4 CollisionData; // 0x98(0x30)
	char pad_C8[0x20]; // 0xc8(0x20)
};

// ScriptStruct ClothingSystemRuntime.*3e59c27ceb
// Size: 0x98 (Inherited: 0x00)
struct F*3e59c27ceb {
	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	struct TArray<struct FVector> Normals; // 0x10(0x10)
	struct TArray<uint32> Indices; // 0x20(0x10)
	struct TArray<float> *9ac3d523a0; // 0x30(0x10)
	struct TArray<float> *764d1577f0; // 0x40(0x10)
	struct TArray<float> *e8b8b46db7; // 0x50(0x10)
	struct TArray<float> *b30503e85c; // 0x60(0x10)
	struct TArray<struct F*d0336152f3> *0ee00ca6cf; // 0x70(0x10)
	int32 *919ade29b6; // 0x80(0x04)
	int32 *17a768fef0; // 0x84(0x04)
	struct TArray<uint32> SelfCollisionIndices; // 0x88(0x10)
};

// ScriptStruct ClothingSystemRuntime.*d0336152f3
// Size: 0x30 (Inherited: 0x00)
struct F*d0336152f3 {
	uint16 BoneIndices[0x08]; // 0x00(0x10)
	float BoneWeights[0x08]; // 0x10(0x20)
};

// ScriptStruct ClothingSystemRuntime.*4a199eaf7d
// Size: 0x28 (Inherited: 0x00)
struct F*4a199eaf7d {
	struct FName MaskName; // 0x00(0x08)
	enum class MaskTarget_PhysMesh CurrentTarget; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxValue; // 0x0c(0x04)
	float MinValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<float> Values; // 0x18(0x10)
};

