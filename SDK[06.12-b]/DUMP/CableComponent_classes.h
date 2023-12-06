// Class CableComponent.CableActor
// Size: 0x400 (Inherited: 0x3f8)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x3f8(0x08)
};

// Class CableComponent.CableComponent
// Size: 0xb60 (Inherited: 0xac0)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0xac0(0x01)
	bool bAttachEnd; // 0xac1(0x01)
	bool bUseLocalSpace; // 0xac2(0x01)
	char pad_AC3[0x5]; // 0xac3(0x05)
	struct F*753532701a *4e9bec23f7; // 0xac8(0x18)
	struct FName *a05a60a1cd; // 0xae0(0x08)
	struct FName *b765f226a0; // 0xae8(0x08)
	struct FVector EndLocation; // 0xaf0(0x0c)
	float CableLength; // 0xafc(0x04)
	int32 NumSegments; // 0xb00(0x04)
	float SubstepTime; // 0xb04(0x04)
	int32 SolverIterations; // 0xb08(0x04)
	bool bEnableStiffness; // 0xb0c(0x01)
	bool bUseSubstepping; // 0xb0d(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0xb0e(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0xb0f(0x01)
	bool bEnableCollision; // 0xb10(0x01)
	char pad_B11[0x3]; // 0xb11(0x03)
	float CollisionFriction; // 0xb14(0x04)
	float LinearDrag; // 0xb18(0x04)
	struct FVector CableForce; // 0xb1c(0x0c)
	struct TArray<struct F*d8ca8d9763> CustomSocketList; // 0xb28(0x10)
	float CableGravityScale; // 0xb38(0x04)
	float CableWidth; // 0xb3c(0x04)
	float ExtendBounds; // 0xb40(0x04)
	int32 NumSides; // 0xb44(0x04)
	float TileMaterial; // 0xb48(0x04)
	char pad_B4C[0x14]; // 0xb4c(0x14)

	struct USceneComponent* *964e40b0d6(); // Function CableComponent.CableComponent.*964e40b0d6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a035d0
	struct TArray<struct FVector> *18d715e2a2(); // Function CableComponent.CableComponent.*18d715e2a2 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6a03608
	struct AActor* *56bed28938(); // Function CableComponent.CableComponent.*56bed28938 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6a035b8
	struct FName *b78de2535f(); // Function CableComponent.CableComponent.*b78de2535f // Final|Native|Public|BlueprintCallable // @ game+0x6a036d0
};

