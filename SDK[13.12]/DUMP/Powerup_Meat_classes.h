// BlueprintGeneratedClass Powerup_Meat.Powerup_Meat_C
// Size: 0x46c (Inherited: 0x448)
struct APowerup_Meat_C : APowerup_Base_C {
	struct F*a6c93df757 UberGraphFrame; // 0x448(0x08)
	struct USphereComponent* Sphere; // 0x450(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x458(0x08)
	struct FVector LocalBaseVelocity_1; // 0x460(0x0c)

	void UserConstructionScript(); // Function Powerup_Meat.Powerup_Meat_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ReceiveBeginPlay(); // Function Powerup_Meat.Powerup_Meat_C.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x20a5d0
	struct ATslCharacter* PlayAnim(); // Function Powerup_Meat.Powerup_Meat_C.PlayAnim // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Drop(); // Function Powerup_Meat.Powerup_Meat_C.Drop // BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ExecuteUbergraph_Powerup_Meat(); // Function Powerup_Meat.Powerup_Meat_C.ExecuteUbergraph_Powerup_Meat // HasDefaults // @ game+0x20a5d0
};

