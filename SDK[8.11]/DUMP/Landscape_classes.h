// Class Landscape.ControlPointMeshComponent
// Size: 0xb30 (Inherited: 0xb30)
struct UControlPointMeshComponent : UStaticMeshComponent {
};

// Class Landscape.LandscapeComponent
// Size: 0xaf0 (Inherited: 0x990)
struct ULandscapeComponent : UPrimitiveComponent {
	int32 SectionBaseX; // 0x988(0x04)
	int32 SectionBaseY; // 0x98c(0x04)
	int32 *54a300c73c; // 0x990(0x04)
	int32 *0ac6c17a96; // 0x994(0x04)
	int32 *05ea8d542a; // 0x998(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x9a0(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x9a8(0x08)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x9b0(0x10)
	struct TArray<struct F*4fee740a0d> *1f3b7254ae; // 0x9c0(0x10)
	struct TArray<struct UTexture2D*> *4c9232b568; // 0x9d0(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x9e0(0x08)
	struct FIntPoint *338e1bb7a0; // 0x9e8(0x08)
	struct FVector4 *5ff691d859; // 0x9f0(0x10)
	float *0da2b6f976; // 0xa00(0x04)
	struct UTexture2D* HeightmapTexture; // 0xa08(0x08)
	struct UTexture2D* NormalmapTexture; // 0xa10(0x08)
	struct FBox *8d62646241; // 0xa18(0x1c)
	struct ULandscapeHeightfieldCollisionComponent* CollisionComponent; // 0xa34(0x1c)
	struct FGuid *f0a9768bcf; // 0xa50(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0xa60(0x10)
	int32 CollisionMipLevel; // 0xa70(0x04)
	int32 *dcd63fdeac; // 0xa74(0x04)
	float *6dc77033e2; // 0xa78(0x04)
	float *ba25840801; // 0xa7c(0x04)
	float StaticLightingResolution; // 0xa80(0x04)
	int32 ForcedLOD; // 0xa84(0x04)
	int32 LODBias; // 0xa88(0x04)
	struct FGuid *0ce71e6b22; // 0xa8c(0x10)
	struct FGuid *3b8f06b235; // 0xa9c(0x10)
	char pad_AAC[0x4]; // 0xaac(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0xab0(0x08)
	bool *6f4162ec76; // 0xab8(0x01)
	bool *43a67787b6; // 0xab9(0x01)
	char pad_ABA[0x6]; // 0xaba(0x06)
	struct UMaterialInterface* *1be858469e; // 0xac0(0x08)
	struct UTexture2D* *348709cf49; // 0xac8(0x08)
	char pad_AD0[0x20]; // 0xad0(0x20)
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x3e8 (Inherited: 0x3e8)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x438 (Inherited: 0x3e8)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_3E8[0x50]; // 0x3e8(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x990 (Inherited: 0x990)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.*3f112a2a4a
// Size: 0x58 (Inherited: 0x28)
struct U*3f112a2a4a : UObject {
	struct TArray<struct F*470e577a1b> *f1f05cedb9; // 0x28(0x10)
	struct UStaticMesh* GrassMesh; // 0x38(0x08)
	float GrassDensity; // 0x40(0x04)
	float PlacementJitter; // 0x44(0x04)
	int32 StartCullDistance; // 0x48(0x04)
	int32 EndCullDistance; // 0x4c(0x04)
	bool RandomRotation; // 0x50(0x01)
	bool AlignToSurface; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0xaf0 (Inherited: 0x990)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> *4651115958; // 0x988(0x10)
	int32 *69a0ad9f89; // 0x998(0x04)
	int32 *7b9896e8d4; // 0x99c(0x04)
	int32 *79567fcf21; // 0x9a0(0x04)
	float *5f88168dea; // 0x9a4(0x04)
	int32 *f2521a8ad4; // 0x9a8(0x04)
	int32 *596a69ae94; // 0x9ac(0x04)
	struct TArray<bool> *ff29e1ddbf; // 0x9b0(0x10)
	struct FGuid *1cb000e4af; // 0x9c0(0x10)
	struct FBox *8d62646241; // 0x9d0(0x1c)
	struct ULandscapeComponent* RenderComponent; // 0x9ec(0x1c)
	char pad_A10[0x78]; // 0xa10(0x78)
	struct TArray<struct UPhysicalMaterial*> *8fae1bb6aa; // 0xa88(0x10)
	char pad_A98[0x58]; // 0xa98(0x58)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0xb10 (Inherited: 0xaf0)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid *3fe167b539; // 0xaf0(0x10)
	char pad_B00[0x10]; // 0xb00(0x10)
};

// Class Landscape.LandscapeInfo
// Size: 0x200 (Inherited: 0x28)
struct ULandscapeInfo : UObject {
	struct ALandscape* LandscapeActor; // 0x28(0x1c)
	struct FGuid *a377647193; // 0x44(0x10)
	int32 *54a300c73c; // 0x54(0x04)
	int32 *0ac6c17a96; // 0x58(0x04)
	int32 *1e61d4f3bd; // 0x5c(0x04)
	struct FVector *3a440c2823; // 0x60(0x0c)
	char pad_6C[0x54]; // 0x6c(0x54)
	SetProperty *67fb669d8c; // 0xc0(0x50)
	char pad_110[0xf0]; // 0x110(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x78 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x28(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x08)
	float Hardness; // 0x38(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x1e8 (Inherited: 0x1e0)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	char *57ec65843c : 1; // 0x1e0(0x01)
	char *23c7655535 : 1; // 0x1e0(0x01)
	char pad_1E0_2 : 6; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
};

// Class Landscape.*4a326939f5
// Size: 0x238 (Inherited: 0x1e8)
struct U*4a326939f5 : ULandscapeMaterialInstanceConstant {
	char pad_1E8[0x50]; // 0x1e8(0x50)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x3f0 (Inherited: 0x3e8)
struct ALandscapeMeshProxyActor : AActor {
	struct U*b5c217f432* LandscapeMeshProxyComponent; // 0x3e8(0x08)
};

// Class Landscape.*b5c217f432
// Size: 0xb60 (Inherited: 0xb30)
struct U*b5c217f432 : UStaticMeshComponent {
	struct FGuid *a377647193; // 0xb30(0x10)
	struct TArray<struct FIntPoint> *faa5075fd7; // 0xb40(0x10)
	int8 *11b2d6bbfc; // 0xb50(0x01)
	char pad_B51[0xf]; // 0xb51(0x0f)
};

// Class Landscape.LandscapeProxy
// Size: 0x830 (Inherited: 0x3e8)
struct ALandscapeProxy : AActor {
	struct FGuid *a377647193; // 0x3e8(0x10)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x3f8(0x08)
	int32 *54a300c73c; // 0x400(0x04)
	int32 *0ac6c17a96; // 0x404(0x04)
	int32 *05ea8d542a; // 0x408(0x04)
	struct FIntPoint *7c8732156f; // 0x40c(0x08)
	int32 MaxLODLevel; // 0x414(0x04)
	float LODDistanceFactor; // 0x418(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	int32 *c7a42801e0; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x428(0x08)
	float StreamingDistanceMultiplier; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x438(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x440(0x08)
	float *6dc77033e2; // 0x448(0x04)
	float *ba25840801; // 0x44c(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x450(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> *3c9dc87539; // 0x460(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> *684d466ca0; // 0x470(0x10)
	char pad_480[0x60]; // 0x480(0x60)
	char *c54d3d7caa : 1; // 0x4e0(0x01)
	char bCastStaticShadow : 1; // 0x4e0(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e0(0x01)
	char bCastFarShadow : 1; // 0x4e0(0x01)
	char *8674a790fb : 1; // 0x4e0(0x01)
	char bRenderCustomDepth : 1; // 0x4e0(0x01)
	char bGenerateOverlapEvents : 1; // 0x4e0(0x01)
	char *78d4b525b3 : 1; // 0x4e0(0x01)
	char *2e30b51a7f : 1; // 0x4e1(0x01)
	char *badd1b31e9 : 1; // 0x4e1(0x01)
	char pad_4E1_2 : 6; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	float StaticLightingResolution; // 0x4e4(0x04)
	struct FLightingChannels LightingChannels; // 0x4e8(0x03)
	char pad_4EB[0x1]; // 0x4eb(0x01)
	int32 CustomDepthStencilValue; // 0x4ec(0x04)
	struct F*886b75ca22 LightmassSettings; // 0x4f0(0x18)
	int32 CollisionMipLevel; // 0x508(0x04)
	int32 *dcd63fdeac; // 0x50c(0x04)
	float *ff57d72168; // 0x510(0x04)
	char pad_514[0xc]; // 0x514(0x0c)
	struct FBodyInstance BodyInstance; // 0x520(0x230)
	enum class ENavDataGatheringMode *c609dcac1c; // 0x750(0x01)
	char pad_751[0xdf]; // 0x751(0xdf)

	float *8e60c8a685(int32 NumSubdivisions, bool bLowerHeights); // Function Landscape.LandscapeProxy.*8e60c8a685 // Final|Native|Public|BlueprintCallable // @ game+0x5de7a98
	void *85b6178615(); // Function Landscape.LandscapeProxy.*85b6178615 // Native|Public|BlueprintCallable // @ game+0x572e350
};

// Class Landscape.Landscape
// Size: 0x830 (Inherited: 0x830)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x850 (Inherited: 0x830)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	struct ALandscape* LandscapeActor; // 0x830(0x1c)
	char pad_84C[0x4]; // 0x84c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x9c0 (Inherited: 0x990)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x988(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x998(0x10)
	struct TArray<struct UMeshComponent*> *8c6b6d1d8f; // 0x9a8(0x10)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb0 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject {
	struct F*a63a17b3f5 Connections[0x02]; // 0x28(0x30)
	struct FInterpCurveVector *5a751077c8; // 0x58(0x18)
	struct TArray<struct F*a4d9a5cab7> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa0(0x10)
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0x98 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	float Width; // 0x40(0x04)
	float *f91325efb7; // 0x44(0x04)
	float *7e24cc72c7; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct F*930a482f5a> *bf0c2772c0; // 0x50(0x10)
	struct TArray<struct F*a4d9a5cab7> Points; // 0x60(0x10)
	struct FBox Bounds; // 0x70(0x1c)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0x90(0x08)
};

// Class Landscape.*474089e4e8
// Size: 0x1b0 (Inherited: 0x60)
struct U*474089e4e8 : U*2f7623087a {
	struct FExpressionInput UV; // 0x60(0x38)
	struct FExpressionInput DiffuseTexture; // 0x98(0x38)
	struct FExpressionInput NormalTexture; // 0xd0(0x38)
	struct FExpressionInput *348bb2435f; // 0x108(0x38)
	struct FExpressionInput *2c4e3104a0; // 0x140(0x38)
	struct TArray<struct F*6a1396b157> Layers; // 0x178(0x10)
	uint32 *2c3844493a; // 0x188(0x04)
	struct FGuid *4dd4dd7063; // 0x18c(0x10)
	char pad_19C[0x14]; // 0x19c(0x14)
};

// Class Landscape.*93eed0c1b9
// Size: 0x70 (Inherited: 0x60)
struct U*93eed0c1b9 : U*f8e25a8f91 {
	struct TArray<struct F*d053db420f> *ac76cc1fea; // 0x60(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x80 (Inherited: 0x60)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct F*eba2673b3d> Layers; // 0x60(0x10)
	struct FGuid *4dd4dd7063; // 0x70(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x78 (Inherited: 0x60)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class *16f2ea5793 *f1410106d5; // 0x60(0x01)
	enum class *43dabfad1d *ded03f4517; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float *6f268af525; // 0x64(0x04)
	float *dc0390995d; // 0x68(0x04)
	float *f56b6f98b5; // 0x6c(0x04)
	float *47c16159c9; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Landscape.*4f4884f135
// Size: 0x80 (Inherited: 0x60)
struct U*4f4884f135 : UMaterialExpression {
	struct FName ParameterName; // 0x60(0x08)
	float *06fa26c45b; // 0x68(0x04)
	struct FGuid *4dd4dd7063; // 0x6c(0x10)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0xf0 (Inherited: 0x60)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput *a17520abbb; // 0x60(0x38)
	struct FExpressionInput *96c190da47; // 0x98(0x38)
	struct FName ParameterName; // 0xd0(0x08)
	char *c273704b5e : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	struct FGuid *4dd4dd7063; // 0xdc(0x10)
	char pad_EC[0x4]; // 0xec(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0xf8 (Inherited: 0x60)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x60(0x38)
	struct FExpressionInput Layer; // 0x98(0x38)
	struct FName ParameterName; // 0xd0(0x08)
	float *06fa26c45b; // 0xd8(0x04)
	struct FVector *342912e00a; // 0xdc(0x0c)
	struct FGuid *4dd4dd7063; // 0xe8(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x70 (Inherited: 0x60)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid *4dd4dd7063; // 0x60(0x10)
};

