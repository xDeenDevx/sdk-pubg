// BlueprintGeneratedClass BP_WeaponDisplay.BP_WeaponDisplay_C
// Size: 0x7a8 (Inherited: 0x630)
struct ABP_WeaponDisplay_C : ATslWeaponDisplay {
	struct F*a6c93df757 UberGraphFrame; // 0x630(0x08)
	struct USkeletalMeshComponent* Weapon Textured Mesh; // 0x638(0x08)
	struct USkeletalMeshComponent* Weapon Cutout Mesh; // 0x640(0x08)
	struct USkeletalMeshComponent* Weapon Hidden Mesh; // 0x648(0x08)
	struct USceneComponent* Weapon Meshes; // 0x650(0x08)
	struct UPostProcessComponent* PostProcess; // 0x658(0x08)
	struct USceneComponent* WeaponHolder; // 0x660(0x08)
	struct UStaticMeshComponent* Sphere; // 0x668(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x670(0x08)
	struct FString Crowbar; // 0x678(0x10)
	bool HasSpawnedWeapon; // 0x688(0x01)
	bool LocalTesting; // 0x689(0x01)
	bool IsMouseButtonDown; // 0x68a(0x01)
	bool WasMouseButtonJustReleased; // 0x68b(0x01)
	bool LastMouseSet; // 0x68c(0x01)
	char pad_68D[0x3]; // 0x68d(0x03)
	float LastMouseX; // 0x690(0x04)
	float LastMouseY; // 0x694(0x04)
	float MouseDeltaX; // 0x698(0x04)
	float MouseDeltaY; // 0x69c(0x04)
	bool BPUserModified; // 0x6a0(0x01)
	char pad_6A1[0x7]; // 0x6a1(0x07)
	struct UCurveFloat* BPDecayCurveDefault; // 0x6a8(0x08)
	struct UCurveFloat* BPDecayCurveContinousSpin; // 0x6b0(0x08)
	float BPMomentumAccumulationMultiplier; // 0x6b8(0x04)
	float BPDecayTimer; // 0x6bc(0x04)
	float BPDecayTimeInSeconds; // 0x6c0(0x04)
	float BPRotationDirection; // 0x6c4(0x04)
	float BPRotationSpeed; // 0x6c8(0x04)
	float BPRotationDeltaMin; // 0x6cc(0x04)
	float BPRotationDeltaMax; // 0x6d0(0x04)
	bool BPReturningToFace; // 0x6d4(0x01)
	char pad_6D5[0x3]; // 0x6d5(0x03)
	float BPFaceRotationTimer; // 0x6d8(0x04)
	float BPFaceRotationSpeed; // 0x6dc(0x04)
	struct FRotator BPFaceRotationFrom; // 0x6e0(0x0c)
	struct FRotator BPFaceRotationTo; // 0x6ec(0x0c)
	struct FRotator BPFaceRotationRight; // 0x6f8(0x0c)
	bool BPAutoSpinEnabled; // 0x704(0x01)
	bool BPReturnToFaceEnabled; // 0x705(0x01)
	char pad_706[0x2]; // 0x706(0x02)
	struct FRotator BPFaceRotationLeft; // 0x708(0x0c)
	bool BPOverrideTargetFacing; // 0x714(0x01)
	char pad_715[0x3]; // 0x715(0x03)
	struct FRotator BPFaceRotationDefault; // 0x718(0x0c)
	float BPFaceRotationStep; // 0x724(0x04)
	struct FString Kar98k; // 0x728(0x10)
	float Transition Speed; // 0x738(0x04)
	char pad_73C[0x4]; // 0x73c(0x04)
	struct TArray<struct UCurveFloat*> Transition Curve; // 0x740(0x10)
	struct FString crossbow; // 0x750(0x10)
	struct FString aug; // 0x760(0x10)
	struct FString Mini14; // 0x770(0x10)
	struct FString AWM; // 0x780(0x10)
	struct FString AKM; // 0x790(0x10)
	bool UserSetMomentum; // 0x7a0(0x01)
	bool AttachmentsLoaded; // 0x7a1(0x01)
	char pad_7A2[0x2]; // 0x7a2(0x02)
	int32 AttachmentIndex; // 0x7a4(0x04)

	void UserConstructionScript(); // Function BP_WeaponDisplay.BP_WeaponDisplay_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void AddStaticMeshAsyncEvent(); // Function BP_WeaponDisplay.BP_WeaponDisplay_C.AddStaticMeshAsyncEvent // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x3b43ac
	void ExecuteUbergraph_BP_WeaponDisplay(); // Function BP_WeaponDisplay.BP_WeaponDisplay_C.ExecuteUbergraph_BP_WeaponDisplay // HasDefaults // @ game+0x3b43ac
};

