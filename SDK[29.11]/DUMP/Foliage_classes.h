// Class Foliage.*68caa303be
// Size: 0xd80 (Inherited: 0xd60)
struct U*68caa303be : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastDelegate OnInstanceTakePointDamage; // 0xd58(0x10)
	struct FMulticastDelegate OnInstanceTakeRadialDamage; // 0xd68(0x10)
};

// Class Foliage.*700a8d0f9b
// Size: 0x30 (Inherited: 0x30)
struct U*700a8d0f9b : UBlueprintFunctionLibrary {

	int32 *4d3282e214(); // Function Foliage.*700a8d0f9b.*4d3282e214 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5db6cc0
	int32 *36a58b13ed(); // Function Foliage.*700a8d0f9b.*36a58b13ed // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x5db6e04
};

// Class Foliage.FoliageType
// Size: 0x440 (Inherited: 0x30)
struct UFoliageType : UObject {
	struct FGuid *6583ff1b1e; // 0x30(0x10)
	float Density; // 0x40(0x04)
	float *155951de74; // 0x44(0x04)
	float Radius; // 0x48(0x04)
	enum class EFoliageScaling Scaling; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FFloatInterval ScaleX; // 0x50(0x08)
	struct FFloatInterval ScaleY; // 0x58(0x08)
	struct FFloatInterval ScaleZ; // 0x60(0x08)
	struct F*4bb0a44ea7 *260feb44c7[0x04]; // 0x68(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float VertexColorMaskThreshold; // 0x9c(0x04)
	char VertexColorMaskInvert : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FFloatInterval *5f8dc14e2e; // 0xa4(0x08)
	char AlignToNormal : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float *634a4a43c5; // 0xb0(0x04)
	char *e493f4e1d6 : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float *e445eb0c91; // 0xb8(0x04)
	struct FFloatInterval *e3bea73932; // 0xbc(0x08)
	struct FFloatInterval Height; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0xd0(0x10)
	struct FName LandscapeLayer; // 0xe0(0x08)
	char CollisionWithWorld : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FVector *5f88168dea; // 0xec(0x0c)
	float *ad2ff03467; // 0xf8(0x04)
	struct FBoxSphereBounds *351dd3b194; // 0xfc(0x1c)
	struct FVector *2361e24803; // 0x118(0x0c)
	enum class EComponentMobility Mobility; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	struct FInt32Interval CullDistance; // 0x128(0x08)
	char bEnableStaticLighting : 1; // 0x130(0x01)
	char CastShadow : 1; // 0x130(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x130(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x130(0x01)
	char bCastDynamicShadow : 1; // 0x130(0x01)
	char bCastStaticShadow : 1; // 0x130(0x01)
	char bCastShadowAsTwoSided : 1; // 0x130(0x01)
	char bOverrideLightMapRes : 1; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	int32 OverriddenLightMapRes; // 0x134(0x04)
	char bUseAsOccluder : 1; // 0x138(0x01)
	char bTreatAsGrass : 1; // 0x138(0x01)
	char bRenderCustomDepth : 1; // 0x138(0x01)
	char pad_138_3 : 5; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	int32 CustomDepthStencilValue; // 0x13c(0x04)
	char *d927c19d75 : 1; // 0x140(0x01)
	char *bd65329126 : 1; // 0x140(0x01)
	char *775983f410 : 1; // 0x140(0x01)
	char pad_140_3 : 5; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	enum class EDecalChannel DecalChannel; // 0x144(0x01)
	enum class EHasCustomNavigableGeometry *fa5b6c01e8; // 0x145(0x01)
	struct FLightingChannels LightingChannels; // 0x146(0x03)
	char pad_149[0x7]; // 0x149(0x07)
	struct FBodyInstance BodyInstance; // 0x150(0x230)
	float *6706c5efcb; // 0x380(0x04)
	float *c9cf1528a9; // 0x384(0x04)
	int32 *7db7ac10d2; // 0x388(0x04)
	float *30a9b8b23e; // 0x38c(0x04)
	float *516d3b872c; // 0x390(0x04)
	float *285f33d0e7; // 0x394(0x04)
	int32 *071bcc4f82; // 0x398(0x04)
	int32 *8f043d252f; // 0x39c(0x04)
	float *527e7767c2; // 0x3a0(0x04)
	bool bCanGrowInShade; // 0x3a4(0x01)
	bool bSpawnsInShade; // 0x3a5(0x01)
	char pad_3A6[0x2]; // 0x3a6(0x02)
	float MaxInitialAge; // 0x3a8(0x04)
	float MaxAge; // 0x3ac(0x04)
	float *d63e06f389; // 0x3b0(0x04)
	struct FFloatInterval *08f75f6e92; // 0x3b4(0x08)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct FRuntimeFloatCurve *c8ce31d780; // 0x3c0(0x78)
	int32 *5e8b3f3a96; // 0x438(0x04)
	char ReapplyDensity : 1; // 0x43c(0x01)
	char ReapplyRadius : 1; // 0x43c(0x01)
	char ReapplyAlignToNormal : 1; // 0x43c(0x01)
	char ReapplyRandomYaw : 1; // 0x43c(0x01)
	char ReapplyScaling : 1; // 0x43c(0x01)
	char ReapplyScaleX : 1; // 0x43c(0x01)
	char ReapplyScaleY : 1; // 0x43c(0x01)
	char ReapplyScaleZ : 1; // 0x43c(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x43d(0x01)
	char ReapplyGroundSlope : 1; // 0x43d(0x01)
	char ReapplyHeight : 1; // 0x43d(0x01)
	char ReapplyLandscapeLayers : 1; // 0x43d(0x01)
	char ReapplyZOffset : 1; // 0x43d(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x43d(0x01)
	char *70914a4aee : 1; // 0x43d(0x01)
	char *e0205a426d : 1; // 0x43d(0x01)
	char pad_43E[0x2]; // 0x43e(0x02)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x460 (Inherited: 0x440)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x440(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x448(0x10)
	struct UClass* ComponentClass; // 0x458(0x08)
};

// Class Foliage.InstancedFoliageActor
// Size: 0x440 (Inherited: 0x3f0)
struct AInstancedFoliageActor : AActor {
	char pad_3F0[0x50]; // 0x3f0(0x50)
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x460 (Inherited: 0x400)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x400(0x08)
	struct FVector *7968e5e03a; // 0x408(0x0c)
	struct FVector *6201ccff37; // 0x414(0x0c)
	struct FVector *3efd165ca5; // 0x420(0x0c)
	struct FVector *18dd295f2c; // 0x42c(0x0c)
	float FoliageDamageImpulseScale; // 0x438(0x04)
	float FoliageTouchImpulseScale; // 0x43c(0x04)
	float FoliageStiffness; // 0x440(0x04)
	float FoliageStiffnessQuadratic; // 0x444(0x04)
	float FoliageDamping; // 0x448(0x04)
	float MaxDamageImpulse; // 0x44c(0x04)
	float MaxTouchImpulse; // 0x450(0x04)
	float MaxForce; // 0x454(0x04)
	float Mass; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)

	struct FHitResult CapsuleTouched(); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // Final|Native|Protected|HasOutParms // @ game+0x5db6a70
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0xb60 (Inherited: 0xb50)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
	char pad_B50[0x10]; // 0xb50(0x10)
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x430 (Inherited: 0x428)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x428(0x08)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0x230 (Inherited: 0x200)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x200(0x08)
	float TileOverlap; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct AVolume* SpawningVolume; // 0x210(0x08)
	struct FGuid *aa46de46e5; // 0x218(0x10)
	char pad_228[0x8]; // 0x228(0x08)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x78 (Inherited: 0x30)
struct UProceduralFoliageSpawner : UObject {
	int32 RandomSeed; // 0x30(0x04)
	float TileSize; // 0x34(0x04)
	int32 NumUniqueTiles; // 0x38(0x04)
	float MinimumQuadTreeSize; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x48(0x10)
	bool *a32b3e5833; // 0x58(0x01)
	char pad_59[0x1f]; // 0x59(0x1f)

	int32 Simulate(); // Function Foliage.ProceduralFoliageSpawner.Simulate // Final|Native|Public|BlueprintCallable // @ game+0x5db6f80
};

// Class Foliage.*13eda023ee
// Size: 0x160 (Inherited: 0x30)
struct U*13eda023ee : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x30(0x08)
	char pad_38[0xa0]; // 0x38(0xa0)
	struct TArray<struct F*299f91ae4b> *c36e10d95e; // 0xd8(0x10)
	char pad_E8[0x78]; // 0xe8(0x78)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x430 (Inherited: 0x428)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x428(0x08)
};

