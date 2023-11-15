// BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C
// Size: 0x520 (Inherited: 0x460)
struct ALobbyViewMode_C : AViewModeStudio {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x460(0x08)
	struct USceneComponent* Scene; // 0x468(0x08)
	struct FRotator Target; // 0x470(0x0c)
	struct FRotator Rollback; // 0x47c(0x0c)
	char pad_488[0x8]; // 0x488(0x08)
	struct FTransform CurrentTM; // 0x490(0x30)
	struct FTransform NextTM; // 0x4c0(0x30)
	struct FTransform Temp; // 0x4f0(0x30)

	void UserConstructionScript(); // Function LobbyViewMode.LobbyViewMode_C.UserConstructionScript // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void AddYaw(); // Function LobbyViewMode.LobbyViewMode_C.AddYaw // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void AddPitch(); // Function LobbyViewMode.LobbyViewMode_C.AddPitch // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void AddRoll(); // Function LobbyViewMode.LobbyViewMode_C.AddRoll // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void AddViewDistance(); // Function LobbyViewMode.LobbyViewMode_C.AddViewDistance // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void ReceiveTick(); // Function LobbyViewMode.LobbyViewMode_C.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x21d2c4
	void SetViewModeAbleActor(); // Function LobbyViewMode.LobbyViewMode_C.SetViewModeAbleActor // Event|Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void ExecuteUbergraph_LobbyViewMode(); // Function LobbyViewMode.LobbyViewMode_C.ExecuteUbergraph_LobbyViewMode // HasDefaults // @ game+0x21d2c4
};

