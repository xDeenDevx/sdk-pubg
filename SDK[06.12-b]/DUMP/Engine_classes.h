// Class Engine.Actor
// Size: 0x3f8 (Inherited: 0x30)
struct AActor : UObject {
	char pad_30[0xc]; // 0x30(0x0c)
	float MinNetUpdateFrequency; // 0x3c(0x04)
	char pad_40_0 : 3; // 0x40(0x01)
	char *afc0b607c1 : 1; // 0x40(0x01)
	char pad_40_4 : 4; // 0x40(0x01)
	char pad_41_0 : 1; // 0x41(0x01)
	char *195141a832 : 1; // 0x41(0x01)
	char bReplicates : 1; // 0x41(0x01)
	char pad_41_3 : 5; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FName *dc8dad45d2; // 0x48(0x08)
	enum class ENetRole RemoteRole; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct AActor* Owner; // 0x58(0x08)
	struct FRepMovement ReplicatedMovement; // 0x60(0x34)
	char pad_94[0x4]; // 0x94(0x04)
	struct F*163cdb3029 *4998573317; // 0x98(0x40)
	struct FMulticastDelegate OnTakeAnyDamage; // 0xd8(0x10)
	struct U*89f9a84286* *89f9a84286; // 0xe8(0x08)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0xf0(0x01)
	char pad_F1[0x57]; // 0xf1(0x57)
	struct UChildActorComponent* *18ff5b3923; // 0x148(0x08)
	struct TArray<struct FName> Layers; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
	char bAutoDestroyWhenFinished : 1; // 0x170(0x01)
	char bCanBeDamaged : 1; // 0x170(0x01)
	char *48c13dc856 : 1; // 0x170(0x01)
	char *b6f52fdcb3 : 1; // 0x170(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x170(0x01)
	char *ff1816ff9e : 1; // 0x170(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x170(0x01)
	char *a9f513e55a : 1; // 0x170(0x01)
	char *07bc7fef21 : 1; // 0x171(0x01)
	char pad_171_1 : 7; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	float NetUpdateFrequency; // 0x174(0x04)
	float *f4ec68df5a; // 0x178(0x04)
	enum class ENetRole Role; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x180(0x10)
	float InitialLifeSpan; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct USceneComponent* RootComponent; // 0x198(0x08)
	struct FMulticastDelegate OnInputTouchEnter; // 0x1a0(0x10)
	char *72b47ba3cd : 1; // 0x1b0(0x01)
	char pad_1B0_1 : 4; // 0x1b0(0x01)
	char *8b1bf7449f : 1; // 0x1b0(0x01)
	char *d253d94f65 : 1; // 0x1b0(0x01)
	char *3b999d2d7a : 1; // 0x1b0(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1b1(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1b2(0x01)
	char bHidden : 1; // 0x1b3(0x01)
	char *ccd23c4d11 : 1; // 0x1b3(0x01)
	char *00c044e8f3 : 1; // 0x1b3(0x01)
	char bOnlyRelevantToOwner : 1; // 0x1b3(0x01)
	char bAlwaysRelevant : 1; // 0x1b3(0x01)
	char *0b52d4980d : 1; // 0x1b3(0x01)
	char *581c4aea8e : 1; // 0x1b3(0x01)
	char *00a5818f10 : 1; // 0x1b3(0x01)
	char *578ce01c9c : 1; // 0x1b4(0x01)
	char pad_1B4_1 : 1; // 0x1b4(0x01)
	char *dc908ea105 : 1; // 0x1b4(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x1b4(0x01)
	char *e59ae21b72 : 1; // 0x1b4(0x01)
	char pad_1B4_5 : 1; // 0x1b4(0x01)
	char *42194894c7 : 1; // 0x1b4(0x01)
	char pad_1B4_7 : 1; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
	int32 *c2b5fafb50; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct FMulticastDelegate OnInputTouchLeave; // 0x1c0(0x10)
	struct TArray<struct FName> Tags; // 0x1d0(0x10)
	char pad_1E0[0x8]; // 0x1e0(0x08)
	struct FMulticastDelegate OnInputTouchBegin; // 0x1e8(0x10)
	struct TArray<struct AActor*> Children; // 0x1f8(0x10)
	float NetCullDistanceSquared; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct FMulticastDelegate OnClicked; // 0x210(0x10)
	struct FGuid DestructibleId; // 0x220(0x10)
	bool bIsDestroyedVersion; // 0x230(0x01)
	bool RemoveFromLevelLOD; // 0x231(0x01)
	char pad_232[0x6]; // 0x232(0x06)
	struct F*b3a779a928 PrimaryActorTick; // 0x238(0x58)
	struct FMulticastDelegate OnBeginCursorOver; // 0x290(0x10)
	struct FMulticastDelegate OnTakePointDamage; // 0x2a0(0x10)
	uint64 *59b4fa8b00; // 0x2b0(0x08)
	struct APawn* Instigator; // 0x2b8(0x08)
	char pad_2C0[0x4]; // 0x2c0(0x04)
	int32 *403c4f6ec5; // 0x2c4(0x04)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x2c8(0x10)
	float NetPriority; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FMulticastDelegate OnReleased; // 0x2e0(0x10)
	char pad_2F0[0x8]; // 0x2f0(0x08)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x2f8(0x10)
	char pad_308[0x8]; // 0x308(0x08)
	struct FMulticastDelegate OnInputTouchEnd; // 0x310(0x10)
	struct TArray<struct AMatineeActor*> *24dd036ec9; // 0x320(0x10)
	float CustomTimeDilation; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FMulticastDelegate OnActorHit; // 0x338(0x10)
	enum class *d729d3c5a5 InputConsumeOption; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	struct AActor* ParentComponentActor; // 0x34c(0x08)
	enum class EAutoReceiveInput *aaa4c6b0aa; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	struct FMulticastDelegate OnEndCursorOver; // 0x358(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x368(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x378(0x10)
	char pad_388[0x58]; // 0x388(0x58)
	struct FMulticastDelegate OnActorEndOverlap; // 0x3e0(0x10)
	char pad_3F0[0x8]; // 0x3f0(0x08)

	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // Native|Public // @ game+0xd661ac
	struct UMaterialInstanceDynamic* *b999b3d1c3(); // Function Engine.Actor.*b999b3d1c3 // Final|Native|Public|BlueprintCallable // @ game+0x66e2700
	struct APlayerController* K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct USceneComponent* *6c12a1a971(); // Function Engine.Actor.*6c12a1a971 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dffe8
	float *511ef00739(); // Function Engine.Actor.*511ef00739 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7b4c
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // Native|Public|BlueprintCallable // @ game+0x59b091c
	bool GetActorBounds(); // Function Engine.Actor.GetActorBounds // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d5334
	bool *d85c70de6e(); // Function Engine.Actor.*d85c70de6e // Final|Native|Public|BlueprintCallable // @ game+0x66db7fc
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // Native|Public // @ game+0x7cb038
	bool K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // Final|Native|Public|BlueprintCallable // @ game+0x66debf0
	bool *75f3114c08(); // Function Engine.Actor.*75f3114c08 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc350
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // Native|Protected // @ game+0xa505e4
	bool K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // Final|Native|Public|BlueprintCallable // @ game+0x66dea70
	enum class ETouchIndex ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // Event|Public|BlueprintEvent // @ game+0x22c9a0
	bool *bad918d000(); // Function Engine.Actor.*bad918d000 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ef700
	bool *45e9b736d8(); // Function Engine.Actor.*45e9b736d8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59a0dd4
	float *685e3b5cc9(); // Function Engine.Actor.*685e3b5cc9 // Native|Public|BlueprintCallable // @ game+0x66eb0bc
	bool K2_AddActorLocalOffset(); // Function Engine.Actor.K2_AddActorLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66dcf68
	bool *4bc88286ff(); // Function Engine.Actor.*4bc88286ff // Final|Native|Public|BlueprintCallable // @ game+0x66e741c
	void *65fa332f56(); // Function Engine.Actor.*65fa332f56 // Native|Public|BlueprintCallable // @ game+0x66ef03c
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // Event|Public|BlueprintEvent // @ game+0x22c9a0
	enum class ETouchIndex ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct FVector *058a798681(); // Function Engine.Actor.*058a798681 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e7718
	bool *0533b13c90(); // Function Engine.Actor.*0533b13c90 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d5de0
	bool *32ee7138ab(); // Function Engine.Actor.*32ee7138ab // Final|Native|Public|BlueprintCallable // @ game+0x66ed2d4
	struct APlayerController* DisableInput(); // Function Engine.Actor.DisableInput // Native|Public|BlueprintCallable // @ game+0x66d30d8
	struct APlayerController* K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // Event|Public|BlueprintEvent // @ game+0x22c9a0
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // Native|Public // @ game+0xc0cd64
	bool K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e0f00
	struct FName *bda82fb76a(); // Function Engine.Actor.*bda82fb76a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6018
	float *14c0f68ea4(); // Function Engine.Actor.*14c0f68ea4 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x66d7d94
	bool K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e0b50
	bool SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // Native|Public|BlueprintCallable // @ game+0x66e74b4
	struct TArray<struct UPrimitiveComponent*> GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66da670
	bool *d57fbe8fc6(); // Function Engine.Actor.*d57fbe8fc6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc29c
	float *5c41a9b3d8(); // Function Engine.Actor.*5c41a9b3d8 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d8dc4
	enum class ETouchIndex ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct UChildActorComponent* *ef270d1a10(); // Function Engine.Actor.*ef270d1a10 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66da930
	bool DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // Final|Native|Public|BlueprintCallable // @ game+0x66d3044
	struct TArray<struct UActorComponent*> *d93dde83f1(); // Function Engine.Actor.*d93dde83f1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7324
	struct FVector *eb66fec44e(); // Function Engine.Actor.*eb66fec44e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d594c
	struct AActor* *e22a09fc3d(); // Function Engine.Actor.*e22a09fc3d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66da800
	struct AController* *8ee0b9e990(); // Function Engine.Actor.*8ee0b9e990 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d96f4
	struct AActor* SetOwner(); // Function Engine.Actor.SetOwner // Native|Public|BlueprintCallable // @ game+0x58f8d54
	struct AActor* ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // Event|Public|BlueprintEvent // @ game+0x22c9a0
	bool K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66dd71c
	struct FRotator K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66dfb30
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // Native|Public // @ game+0x3bfd9c
	struct APlayerController* *0f7b3f99fd(); // Function Engine.Actor.*0f7b3f99fd // Native|Public|BlueprintCallable // @ game+0x66d4b98
	float *7cff7fa404(); // Function Engine.Actor.*7cff7fa404 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dbc7c
	enum class ETouchIndex ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // Event|Public|BlueprintEvent // @ game+0x22c9a0
	float ReceiveTick(); // Function Engine.Actor.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct FVector *72d1ab0701(); // Function Engine.Actor.*72d1ab0701 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e77b8
	struct UActorComponent* *f3429ceb97(); // Function Engine.Actor.*f3429ceb97 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d722c
	float *52068fadb9(); // Function Engine.Actor.*52068fadb9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d87e8
	struct UClass* GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66da410
	struct FHitResult ReceivePointDamage(); // Function Engine.Actor.ReceivePointDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22c9a0
	enum class EEndPlayReason ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x22c9a0
	bool SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // Final|Native|Public|BlueprintCallable // @ game+0x66e7858
	bool *461623950c(); // Function Engine.Actor.*461623950c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc2b8
	struct AActor* ReceiveAnyDamage(); // Function Engine.Actor.ReceiveAnyDamage // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct FVector *a0012f52a9(); // Function Engine.Actor.*a0012f52a9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d5780
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct AActor* *c4fee2a50d(); // Function Engine.Actor.*c4fee2a50d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d5ff4
	bool K2_AddActorWorldOffset(); // Function Engine.Actor.K2_AddActorWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66dd544
	struct AActor* *541a06a744(); // Function Engine.Actor.*541a06a744 // Native|Public|BlueprintCallable // @ game+0x66e41a8
	struct AActor* ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct FRotator *e45fc9ffc9(); // Function Engine.Actor.*e45fc9ffc9 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d54dc
	struct TArray<struct AActor*> *383cbfbf66(); // Function Engine.Actor.*383cbfbf66 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d605c
	struct FKey ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // Event|Public|BlueprintEvent // @ game+0x22c9a0
	enum class ENetRole *d4b72b197e(); // Function Engine.Actor.*d4b72b197e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66db070
	bool K2_SetActorRotation(); // Function Engine.Actor.K2_SetActorRotation // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e112c
	bool K2_AddActorWorldTransform(); // Function Engine.Actor.K2_AddActorWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66dd8f4
	struct FName *209c054b22(); // Function Engine.Actor.*209c054b22 // Final|Native|Public|BlueprintCallable // @ game+0x66ee334
	struct FVector GetVelocity(); // Function Engine.Actor.GetVelocity // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66dbc44
	bool K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66dd318
	struct FVector *d5ff08bf52(); // Function Engine.Actor.*d5ff08bf52 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d55e8
	bool *91da404789(); // Function Engine.Actor.*91da404789 // Final|Native|Public|BlueprintCallable // @ game+0x390008
	struct APawn* *dd10056177(); // Function Engine.Actor.*dd10056177 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d96dc
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x66d5134
	enum class ETickingGroup *814a121c39(); // Function Engine.Actor.*814a121c39 // Final|Native|Public|BlueprintCallable // @ game+0x66ed1bc
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct UActorComponent* *f221ff8513(); // Function Engine.Actor.*f221ff8513 // Native|Public|BlueprintCallable // @ game+0x66ceaf8
	void *5f8251239e(); // Function Engine.Actor.*5f8251239e // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x66d5120
	struct FTransform GetTransform(); // Function Engine.Actor.GetTransform // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xba32e8
	bool ActorHasTag(); // Function Engine.Actor.ActorHasTag // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xcc5dac
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e0918
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct UActorComponent* AddComponent(); // Function Engine.Actor.AddComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xb5c9f0
	struct FVector *806c296001(); // Function Engine.Actor.*806c296001 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66df9f0
	struct FKey ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // Event|Public|BlueprintEvent // @ game+0x22c9a0
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // Event|Protected|BlueprintEvent // @ game+0x22c9a0
	float *cdc7b91d6d(); // Function Engine.Actor.*cdc7b91d6d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66db530
	struct UActorComponent* *0d0c513b2c(); // Function Engine.Actor.*0d0c513b2c // Native|Public|BlueprintCallable // @ game+0x66e42d0
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct FVector *bbf004721b(); // Function Engine.Actor.*bbf004721b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d94d4
	bool *83d2d5c58f(); // Function Engine.Actor.*83d2d5c58f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dca7c
	struct TArray<struct UActorComponent*> *efaba219b2(); // Function Engine.Actor.*efaba219b2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7414
	bool K2_SetActorTransform(); // Function Engine.Actor.K2_SetActorTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e122c
	float *ce1958648c(); // Function Engine.Actor.*ce1958648c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7bec
	bool *891a15da22(); // Function Engine.Actor.*891a15da22 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e20c8
	struct FHitResult ReceiveHit(); // Function Engine.Actor.ReceiveHit // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22c9a0
	float *76f4a54e31(); // Function Engine.Actor.*76f4a54e31 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d5980
	float *5d41351842(); // Function Engine.Actor.*5d41351842 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d8888
	struct FVector *1206b0a740(); // Function Engine.Actor.*1206b0a740 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d57b4
	bool K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e0d28
	struct FVector *f4f472a4df(); // Function Engine.Actor.*f4f472a4df // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d59c0
	struct AActor* ReceiveRadialDamage(); // Function Engine.Actor.ReceiveRadialDamage // BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22c9a0
	bool K2_SetActorLocation(); // Function Engine.Actor.K2_SetActorLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e0734
	bool *221e5b49fe(); // Function Engine.Actor.*221e5b49fe // Native|Public|BlueprintCallable // @ game+0x66ecc54
	enum class *ecdd115207 *b7511d0ed8(); // Function Engine.Actor.*b7511d0ed8 // Final|Native|Public|BlueprintCallable // @ game+0x66df680
	bool K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66dd140
	struct AActor* *057be55286(); // Function Engine.Actor.*057be55286 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66da90c
	float *48b2b80fa1(); // Function Engine.Actor.*48b2b80fa1 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d97a4
	bool HasAuthority(); // Function Engine.Actor.HasAuthority // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xad2774
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // Native|Public // @ game+0xa5d52c
	struct FName MakeNoise(); // Function Engine.Actor.MakeNoise // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e277c
	bool *de9d01b3f6(); // Function Engine.Actor.*de9d01b3f6 // Final|Native|Public|BlueprintCallable // @ game+0x66deef0
	bool *87d1cdd662(); // Function Engine.Actor.*87d1cdd662 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x66eccec
	struct AActor* AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x66ce9d0
	struct UActorComponent* *581f8985e1(); // Function Engine.Actor.*581f8985e1 // Final|Native|Public|BlueprintCallable // @ game+0x66df530
	float *7311615d4b(); // Function Engine.Actor.*7311615d4b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d5998
	float *118a22ba37(); // Function Engine.Actor.*118a22ba37 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d8eb8
	float *1357a6903c(); // Function Engine.Actor.*1357a6903c // Final|Native|Public|BlueprintCallable // @ game+0x66e78ec
};

// Class Engine.AnimInstance
// Size: 0x3a8 (Inherited: 0x30)
struct UAnimInstance : UObject {
	float DeltaTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct USkeleton* *a7e4906ff1; // 0x38(0x08)
	enum class *0accfd5352 *8ba26f4fbf; // 0x40(0x01)
	bool bRunUpdatesInWorkerThreads; // 0x41(0x01)
	bool bCanUseParallelUpdateAnimation; // 0x42(0x01)
	bool *c74b442f59; // 0x43(0x01)
	bool bWarnAboutBlueprintUsage; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FMulticastDelegate OnMontageBlendingOut; // 0x48(0x10)
	struct FMulticastDelegate OnMontageStarted; // 0x58(0x10)
	struct FMulticastDelegate OnMontageEnded; // 0x68(0x10)
	struct FMulticastDelegate OnMontageInterrupted; // 0x78(0x10)
	struct FMulticastDelegate OnAllMontageInstancesEnded; // 0x88(0x10)
	char pad_98[0x60]; // 0x98(0x60)
	bool *206a771f46; // 0xf8(0x01)
	char pad_F9[0x9f]; // 0xf9(0x9f)
	struct TArray<struct FAnimNotifyEvent> *6fc5b1d0be; // 0x198(0x10)
	char pad_1A8[0x200]; // 0x1a8(0x200)

	float *92ce4ee977(); // Function Engine.AnimInstance.*92ce4ee977 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6710838
	bool *324fdf8f8a(); // Function Engine.AnimInstance.*324fdf8f8a // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x672124c
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct F*c74ca801af *0e59f382aa(); // Function Engine.AnimInstance.*0e59f382aa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x671575c
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation // Event|Public|BlueprintEvent // @ game+0x22c9a0
	bool *d213c50b7f(); // Function Engine.AnimInstance.*d213c50b7f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x671b258
	float *8e3bfbd48a(); // Function Engine.AnimInstance.*8e3bfbd48a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6710c3c
	struct FName *cebaa7cd2c(); // Function Engine.AnimInstance.*cebaa7cd2c // Native|Public|BlueprintCallable // @ game+0x672e8a8
	float GetAnimAssetPlayerTimeFromEnd(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x670c2e4
	float Montage_Play(); // Function Engine.AnimInstance.Montage_Play // Native|Public|BlueprintCallable // @ game+0x4ecf8c
	float *3d7951dd37(); // Function Engine.AnimInstance.*3d7951dd37 // Final|Native|Public|BlueprintCallable // @ game+0x6725f00
	float BlueprintUpdateAnimation(); // Function Engine.AnimInstance.BlueprintUpdateAnimation // Event|Public|BlueprintEvent // @ game+0x22c9a0
	bool *5e07a11f21(); // Function Engine.AnimInstance.*5e07a11f21 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6719084
	float *7daaaa5771(); // Function Engine.AnimInstance.*7daaaa5771 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x670fce0
	float *46b80b3a59(); // Function Engine.AnimInstance.*46b80b3a59 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6725ae4
	struct AActor* *2fdfd7cfe3(); // Function Engine.AnimInstance.*2fdfd7cfe3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xbc70d4
	float GetStateWeight(); // Function Engine.AnimInstance.GetStateWeight // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67152bc
	void *003dacf78a(); // Function Engine.AnimInstance.*003dacf78a // Final|Native|Public|BlueprintCallable // @ game+0x6700f1c
	struct UAnimMontage* *6bd52ed5b9(); // Function Engine.AnimInstance.*6bd52ed5b9 // Native|Public|BlueprintCallable // @ game+0x8dc514
	struct FName *7aeb896e6e(); // Function Engine.AnimInstance.*7aeb896e6e // Final|Native|Public|BlueprintCallable // @ game+0x674648c
	float *8c261f57d4(); // Function Engine.AnimInstance.*8c261f57d4 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67138d8
	struct UAnimMontage* *be4d7059c2(); // Function Engine.AnimInstance.*be4d7059c2 // Final|Native|Public|BlueprintCallable // @ game+0x6725d90
	float *28886e519b(); // Function Engine.AnimInstance.*28886e519b // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x4f0910
	struct FName *bcdca57f0a(); // Function Engine.AnimInstance.*bcdca57f0a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x670de34
	bool *a38a5ce007(); // Function Engine.AnimInstance.*a38a5ce007 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67259a4
	struct APawn* *f56ecdaa87(); // Function Engine.AnimInstance.*f56ecdaa87 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6748104
	bool *0a8f8d6319(); // Function Engine.AnimInstance.*0a8f8d6319 // Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x672124c
	struct UAnimMontage* *917921a2e3(); // Function Engine.AnimInstance.*917921a2e3 // Final|Native|Public|BlueprintCallable // @ game+0x6725c24
	float GetAnimAssetPlayerLength(); // Function Engine.AnimInstance.GetAnimAssetPlayerLength // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670c170
	struct FPoseSnapshot *8681bde224(); // Function Engine.AnimInstance.*8681bde224 // Native|Public|HasOutParms|BlueprintCallable // @ game+0x67414c0
	struct UAnimMontage* PlaySlotAnimationAsDynamicMontage(); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage // Final|Native|Public|BlueprintCallable // @ game+0x6729a0c
	float *97a3af276c(); // Function Engine.AnimInstance.*97a3af276c // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x671035c
	float *40e1f5f43a(); // Function Engine.AnimInstance.*40e1f5f43a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6710078
	struct UAnimMontage* *e064ffea5e(); // Function Engine.AnimInstance.*e064ffea5e // Final|Native|Public|BlueprintCallable // @ game+0x6725d00
	float *757538402e(); // Function Engine.AnimInstance.*757538402e // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x94f2bc
	float *39919f124d(); // Function Engine.AnimInstance.*39919f124d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6725a44
	float *7eeea6c74e(); // Function Engine.AnimInstance.*7eeea6c74e // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x94efdc
	bool *a977510087(); // Function Engine.AnimInstance.*a977510087 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x671ab14
	struct FName *add693e1df(); // Function Engine.AnimInstance.*add693e1df // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6725908
	bool *dcbdf49e66(); // Function Engine.AnimInstance.*dcbdf49e66 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6725b84
	float *af34a038d7(); // Function Engine.AnimInstance.*af34a038d7 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x67136d4
	float *9c44837415(); // Function Engine.AnimInstance.*9c44837415 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6725868
	bool *ce83b031d9(); // Function Engine.AnimInstance.*ce83b031d9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x671b7b4
	float GetAnimAssetPlayerTimeFromEndFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670c3e8
	float *8844726dd1(); // Function Engine.AnimInstance.*8844726dd1 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x670fe94
	float *b38c1f41c3(); // Function Engine.AnimInstance.*b38c1f41c3 // Final|Native|Public|BlueprintCallable // @ game+0x67396b8
	float GetAnimAssetPlayerTimeFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670c204
	float *a908599b82(); // Function Engine.AnimInstance.*a908599b82 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x670f948
	float *04dc1a777c(); // Function Engine.AnimInstance.*04dc1a777c // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fdc98
	float PlaySlotAnimation(); // Function Engine.AnimInstance.PlaySlotAnimation // Final|Native|Public|BlueprintCallable // @ game+0x67297e8
	struct UAnimMontage* *f30cd63cdb(); // Function Engine.AnimInstance.*f30cd63cdb // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670d9ac
	enum class *0accfd5352 *8859b811a6(); // Function Engine.AnimInstance.*8859b811a6 // Final|Native|Public|BlueprintCallable // @ game+0x673b56c
	float *d3925db7cd(); // Function Engine.AnimInstance.*d3925db7cd // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6713af4
	float *6abb6cfc88(); // Function Engine.AnimInstance.*6abb6cfc88 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x94ee1c
	bool *ae69dc5c64(); // Function Engine.AnimInstance.*ae69dc5c64 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6715e24
	struct USkeletalMeshComponent* *5940d5128c(); // Function Engine.AnimInstance.*5940d5128c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67129e0
	float GetCurrentStateElapsedTime(); // Function Engine.AnimInstance.GetCurrentStateElapsedTime // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x670dd94
	bool *2ed9c97cc9(); // Function Engine.AnimInstance.*2ed9c97cc9 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xcaa2f4
	float *c2413b9bde(); // Function Engine.AnimInstance.*c2413b9bde // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6710a3c
	float *c19b394f7e(); // Function Engine.AnimInstance.*c19b394f7e // Final|Native|Public|BlueprintCallable // @ game+0x6725e20
	float *0e6503e701(); // Function Engine.AnimInstance.*0e6503e701 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x670fb14
	struct UAnimMontage* *4e9f00b274(); // Function Engine.AnimInstance.*4e9f00b274 // Native|Public|BlueprintCallable // @ game+0xb65450
	struct UAnimMontage* *cce7bb269a(); // Function Engine.AnimInstance.*cce7bb269a // Native|Public|BlueprintCallable // @ game+0x4f0594
	float *c96507ca7c(); // Function Engine.AnimInstance.*c96507ca7c // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x94f490
};

// Class Engine.ActorComponent
// Size: 0x200 (Inherited: 0x30)
struct UActorComponent : UObject {
	char pad_30[0xf0]; // 0x30(0xf0)
	struct F*8d4039fc59 PrimaryComponentTick; // 0x120(0x58)
	struct TArray<struct FName> ComponentTags; // 0x178(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x188(0x10)
	char pad_198_0 : 3; // 0x198(0x01)
	char bReplicates : 1; // 0x198(0x01)
	char bNetAddressable : 1; // 0x198(0x01)
	char *42cccbce92 : 1; // 0x198(0x01)
	char pad_198_6 : 2; // 0x198(0x01)
	char pad_199[0x1]; // 0x199(0x01)
	char pad_19A_0 : 2; // 0x19a(0x01)
	char bCreatedByConstructionScript : 1; // 0x19a(0x01)
	char bInstanceComponent : 1; // 0x19a(0x01)
	char bAutoActivate : 1; // 0x19a(0x01)
	char *37789dceb0 : 1; // 0x19a(0x01)
	char *d6b476b16b : 1; // 0x19a(0x01)
	char pad_19A_7 : 1; // 0x19a(0x01)
	char pad_19B[0x1]; // 0x19b(0x01)
	struct FGuid DestructibleId; // 0x19c(0x10)
	bool bIsDestroyedVersion; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	char *5a62c75e8c : 1; // 0x1b0(0x01)
	char pad_1B0_1 : 2; // 0x1b0(0x01)
	char bIsEditorOnly : 1; // 0x1b0(0x01)
	char pad_1B0_4 : 4; // 0x1b0(0x01)
	char pad_1B1[0x4]; // 0x1b1(0x04)
	enum class EComponentCreationMethod CreationMethod; // 0x1b5(0x01)
	enum class EPendingCreationType *4795e00ee8; // 0x1b6(0x01)
	char pad_1B7[0x9]; // 0x1b7(0x09)
	struct TArray<struct FSimpleMemberReference> *98e040a793; // 0x1c0(0x10)
	struct FMulticastDelegate OnComponentActivated; // 0x1d0(0x10)
	struct FMulticastDelegate OnComponentDeactivated; // 0x1e0(0x10)
	char pad_1F0[0x9]; // 0x1f0(0x09)
	char *195141a832 : 1; // 0x1f9(0x01)
	char pad_1F9_1 : 7; // 0x1f9(0x01)
	char pad_1FA[0x6]; // 0x1fa(0x06)

	bool *61bb7392aa(); // Function Engine.ActorComponent.*61bb7392aa // Native|Public|BlueprintCallable // @ game+0x66e7328
	bool *05866bcfcb(); // Function Engine.ActorComponent.*05866bcfcb // Final|Native|Public|BlueprintCallable // @ game+0x66eb028
	bool Activate(); // Function Engine.ActorComponent.Activate // Native|Public|BlueprintCallable // @ game+0xd6c538
	float *c4952b0099(); // Function Engine.ActorComponent.*c4952b0099 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d72d4
	void Deactivate(); // Function Engine.ActorComponent.Deactivate // Native|Public|BlueprintCallable // @ game+0x6161de8
	void OnRep_IsActive(); // Function Engine.ActorComponent.OnRep_IsActive // Final|Native|Public // @ game+0x66e2cdc
	float *f52554acee(); // Function Engine.ActorComponent.*f52554acee // Final|Native|Public|BlueprintCallable // @ game+0x66e9b6c
	struct AActor* *541a06a744(); // Function Engine.ActorComponent.*541a06a744 // Native|Public|BlueprintCallable // @ game+0x66e423c
	enum class EEndPlayReason ReceiveEndPlay(); // Function Engine.ActorComponent.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x22c9a0
	enum class ETickingGroup *814a121c39(); // Function Engine.ActorComponent.*814a121c39 // Final|Native|Public|BlueprintCallable // @ game+0x66ed248
	struct UActorComponent* *0d0c513b2c(); // Function Engine.ActorComponent.*0d0c513b2c // Native|Public|BlueprintCallable // @ game+0x66e4364
	void *9eb2ac36d0(); // Function Engine.ActorComponent.*9eb2ac36d0 // Native|Public|BlueprintCallable // @ game+0x59b0974
	bool *6f8bd4c74b(); // Function Engine.ActorComponent.*6f8bd4c74b // Native|Public|BlueprintCallable // @ game+0x66e7f20
	struct AActor* *e22a09fc3d(); // Function Engine.ActorComponent.*e22a09fc3d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xbe7fa4
	bool IsActive(); // Function Engine.ActorComponent.IsActive // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59b098c
	bool *d4c659a949(); // Function Engine.ActorComponent.*d4c659a949 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d20d8
	struct AActor* AddTickPrerequisiteActor(); // Function Engine.ActorComponent.AddTickPrerequisiteActor // Native|Public|BlueprintCallable // @ game+0x66cea64
	struct UActorComponent* *f221ff8513(); // Function Engine.ActorComponent.*f221ff8513 // Native|Public|BlueprintCallable // @ game+0x66ceb8c
	bool *2e369dcd8d(); // Function Engine.ActorComponent.*2e369dcd8d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc334
	bool *32ee7138ab(); // Function Engine.ActorComponent.*32ee7138ab // Final|Native|Public|BlueprintCallable // @ game+0x66ed36c
	struct UObject* *581f8985e1(); // Function Engine.ActorComponent.*581f8985e1 // Final|Native|Public|BlueprintCallable // @ game+0x66df5c8
	bool *77f9b41839(); // Function Engine.ActorComponent.*77f9b41839 // Native|Public|BlueprintCallable // @ game+0x66e9ad4
	void ReceiveBeginPlay(); // Function Engine.ActorComponent.ReceiveBeginPlay // Event|Public|BlueprintEvent // @ game+0x22c9a0
	bool *3ae845f2b7(); // Function Engine.ActorComponent.*3ae845f2b7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc438
	float ReceiveTick(); // Function Engine.ActorComponent.ReceiveTick // Event|Public|BlueprintEvent // @ game+0x22c9a0
};

// Class Engine.Pawn
// Size: 0x460 (Inherited: 0x3f8)
struct APawn : AActor {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	char bUseControllerRotationPitch : 1; // 0x400(0x01)
	char bUseControllerRotationYaw : 1; // 0x400(0x01)
	char bUseControllerRotationRoll : 1; // 0x400(0x01)
	char bCanAffectNavigationGeneration : 1; // 0x400(0x01)
	char pad_400_4 : 4; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	float BaseEyeHeight; // 0x404(0x04)
	enum class EAutoReceiveInput AutoPossessPlayer; // 0x408(0x01)
	enum class EAutoPossessAI *e0e3a12db9; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct UClass* AIControllerClass; // 0x410(0x08)
	struct AController* *2f9c3272b2; // 0x418(0x08)
	uint16 *021ce32c67; // 0x420(0x02)
	char pad_422[0x6]; // 0x422(0x06)
	struct AController* Controller; // 0x428(0x08)
	char pad_430[0x8]; // 0x430(0x08)
	struct APlayerState* PlayerState; // 0x438(0x08)
	char pad_440[0x4]; // 0x440(0x04)
	struct FVector *c0934ea168; // 0x444(0x0c)
	struct FVector *d20d64241b; // 0x450(0x0c)
	char pad_45C[0x4]; // 0x45c(0x04)

	void *c30d7bf87e(); // Function Engine.Pawn.*c30d7bf87e // Native|Public|BlueprintCallable // @ game+0x66ee518
	struct AController* ReceiveUnpossessed(); // Function Engine.Pawn.ReceiveUnpossessed // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct AController* GetController(); // Function Engine.Pawn.GetController // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d75c0
	struct FVector K2_GetMovementInputVector(); // Function Engine.Pawn.K2_GetMovementInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66dabb4
	bool *7d02763a00(); // Function Engine.Pawn.*7d02763a00 // Final|Native|Public|BlueprintCallable // @ game+0x66e8fb0
	struct AActor* *9559952bce(); // Function Engine.Pawn.*9559952bce // Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e2f24
	bool *116ac9743d(); // Function Engine.Pawn.*116ac9743d // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66ce1ec
	float AddControllerYawInput(); // Function Engine.Pawn.AddControllerYawInput // Native|Public|BlueprintCallable // @ game+0x66cd0f8
	struct FVector *c87325b52a(); // Function Engine.Pawn.*c87325b52a // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66da038
	bool *8dcd001cb7(); // Function Engine.Pawn.*8dcd001cb7 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x597ebb4
	struct UPawnMovementComponent* *09ea1f63ee(); // Function Engine.Pawn.*09ea1f63ee // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x594c9a0
	void OnRep_PlayerState(); // Function Engine.Pawn.OnRep_PlayerState // Native|Public // @ game+0x6d6dd0
	bool *5a76ea52e7(); // Function Engine.Pawn.*5a76ea52e7 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e2320
	bool *ec5c491810(); // Function Engine.Pawn.*ec5c491810 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dca04
	struct AActor* *f92d1c6c4c(); // Function Engine.Pawn.*f92d1c6c4c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66d9f00
	bool *c9d088b372(); // Function Engine.Pawn.*c9d088b372 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc464
	struct FVector *d2bc061ca3(); // Function Engine.Pawn.*d2bc061ca3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d977c
	struct FVector *a7b2c687f7(); // Function Engine.Pawn.*a7b2c687f7 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66dabb4
	struct FVector *b4938e18ab(); // Function Engine.Pawn.*b4938e18ab // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66d24f0
	struct FRotator *cb88bbbff9(); // Function Engine.Pawn.*cb88bbbff9 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6144
	float AddControllerRollInput(); // Function Engine.Pawn.AddControllerRollInput // Native|Public|BlueprintCallable // @ game+0x66cd05c
	void *5f4189de1b(); // Function Engine.Pawn.*5f4189de1b // Native|Public|BlueprintCallable // @ game+0x5948138
	void OnRep_Controller(); // Function Engine.Pawn.OnRep_Controller // Native|Public // @ game+0x59c4300
	bool *3c5cc3769a(); // Function Engine.Pawn.*3c5cc3769a // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc1f2b8
	float AddControllerPitchInput(); // Function Engine.Pawn.AddControllerPitchInput // Native|Public|BlueprintCallable // @ game+0x66ccfc0
	struct AController* ReceivePossessed(); // Function Engine.Pawn.ReceivePossessed // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct FRotator GetControlRotation(); // Function Engine.Pawn.GetControlRotation // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d758c
};

// Class Engine.DataAsset
// Size: 0x38 (Inherited: 0x30)
struct UDataAsset : UObject {
	struct UClass* *cdb62082ca; // 0x30(0x08)
};

// Class Engine.SceneComponent
// Size: 0x480 (Inherited: 0x200)
struct USceneComponent : UActorComponent {
	char pad_200[0x8]; // 0x200(0x08)
	struct FVector RelativeScale3D; // 0x208(0x0c)
	char pad_214[0x4]; // 0x214(0x04)
	struct USceneComponent* AttachParent; // 0x218(0x08)
	char pad_220[0x8]; // 0x220(0x08)
	char pad_228_0 : 1; // 0x228(0x01)
	char bReplicatesAttachmentReference : 1; // 0x228(0x01)
	char bReplicatesAttachment : 1; // 0x228(0x01)
	char *70c5e7a9b6 : 1; // 0x228(0x01)
	char pad_228_4 : 1; // 0x228(0x01)
	char bAbsoluteLocation : 1; // 0x228(0x01)
	char bAbsoluteRotation : 1; // 0x228(0x01)
	char bAbsoluteScale : 1; // 0x228(0x01)
	char bVisible : 1; // 0x229(0x01)
	char bHiddenInGame : 1; // 0x229(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x229(0x01)
	char *1dac92158a : 1; // 0x229(0x01)
	char bUseAttachParentBound : 1; // 0x229(0x01)
	char bEnableInsensitiveUpdate : 1; // 0x229(0x01)
	char pad_229_6 : 2; // 0x229(0x01)
	char pad_22A_0 : 3; // 0x22a(0x01)
	char bAbsoluteTranslation : 1; // 0x22a(0x01)
	char pad_22A_4 : 4; // 0x22a(0x01)
	char pad_22B[0x1]; // 0x22b(0x01)
	struct APhysicsVolume* PhysicsVolume; // 0x22c(0x08)
	struct FVector *bf3a460e85; // 0x234(0x0c)
	char pad_240[0x20]; // 0x240(0x20)
	struct FName *cb3fc8827c; // 0x260(0x08)
	char pad_268[0x28]; // 0x268(0x28)
	struct FRotator RelativeRotation; // 0x290(0x0c)
	enum class EComponentMobility Mobility; // 0x29c(0x01)
	char pad_29D[0x23]; // 0x29d(0x23)
	struct TArray<struct USceneComponent*> AttachChildren; // 0x2c0(0x10)
	char pad_2D0[0x1]; // 0x2d0(0x01)
	enum class *92a8d5bca4 DetailMode; // 0x2d1(0x01)
	char pad_2D2[0x4e]; // 0x2d2(0x4e)
	SetProperty *912139fe50; // 0x320(0x50)
	struct FVector RelativeTranslation; // 0x370(0x0c)
	struct FVector RelativeLocation; // 0x37c(0x0c)
	struct FMulticastDelegate PhysicsVolumeChangedDelegate; // 0x388(0x10)
	struct FMulticastDelegate AttachmentChangedDelegate; // 0x398(0x10)
	char pad_3A8[0xd8]; // 0x3a8(0xd8)

	bool K2_SetWorldLocation(); // Function Engine.SceneComponent.K2_SetWorldLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e18bc
	bool *30399f17ac(); // Function Engine.SceneComponent.*30399f17ac // Final|Native|Public|BlueprintCallable // @ game+0x66eab80
	bool K2_SetRelativeTransform(); // Function Engine.SceneComponent.K2_SetRelativeTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e1690
	bool *a82e4c11f1(); // Function Engine.SceneComponent.*a82e4c11f1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e1a94
	bool K2_SetRelativeLocation(); // Function Engine.SceneComponent.K2_SetRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xba69e4
	bool K2_AddRelativeLocation(); // Function Engine.SceneComponent.K2_AddRelativeLocation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66de0fc
	bool *0281884c9e(); // Function Engine.SceneComponent.*0281884c9e // Final|Native|Public|BlueprintCallable // @ game+0x66eaef0
	struct FVector *9269d42730(); // Function Engine.SceneComponent.*9269d42730 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66db084
	struct FVector *8f25590c73(); // Function Engine.SceneComponent.*8f25590c73 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d72ec
	struct FRotator *431ade8cc7(); // Function Engine.SceneComponent.*431ade8cc7 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66dfcb0
	struct FVector *e1a45b5fe3(); // Function Engine.SceneComponent.*e1a45b5fe3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xbd6eb4
	bool K2_SetRelativeRotation(); // Function Engine.SceneComponent.K2_SetRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xbb9114
	bool K2_AddWorldOffset(); // Function Engine.SceneComponent.K2_AddWorldOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66de494
	struct TArray<struct FName> *0f8df46b26(); // Function Engine.SceneComponent.*0f8df46b26 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d5f10
	bool *cc0c29c29b(); // Function Engine.SceneComponent.*cc0c29c29b // Final|Native|Public|BlueprintCallable // @ game+0x66ee410
	bool K2_AddRelativeRotation(); // Function Engine.SceneComponent.K2_AddRelativeRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66de2c8
	bool DetachFromParent(); // Function Engine.SceneComponent.DetachFromParent // Native|Public|BlueprintCallable // @ game+0x66d2f50
	bool K2_AddWorldTransform(); // Function Engine.SceneComponent.K2_AddWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66de844
	bool *b4af2a3e8b(); // Function Engine.SceneComponent.*b4af2a3e8b // Final|Native|Public|BlueprintCallable // @ game+0xc3f374
	bool *63635bbd26(); // Function Engine.SceneComponent.*63635bbd26 // Final|Native|Public|BlueprintCallable // @ game+0x66eaf8c
	bool OnRep_Visibility(); // Function Engine.SceneComponent.OnRep_Visibility // Final|Native|Private // @ game+0x66e2dbc
	bool K2_AddLocalTransform(); // Function Engine.SceneComponent.K2_AddLocalTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66dded0
	bool IsVisible(); // Function Engine.SceneComponent.IsVisible // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dce50
	bool *d843f2564c(); // Function Engine.SceneComponent.*d843f2564c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d3184
	struct FVector *3e34911a72(); // Function Engine.SceneComponent.*3e34911a72 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66ee004
	bool K2_AddLocalRotation(); // Function Engine.SceneComponent.K2_AddLocalRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66ddcf8
	struct FVector *dd99459d4b(); // Function Engine.SceneComponent.*dd99459d4b // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66db1e0
	struct FName *b499c4ea3e(); // Function Engine.SceneComponent.*b499c4ea3e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6044
	struct FTransform *5828b2e365(); // Function Engine.SceneComponent.*5828b2e365 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66db400
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent // Final|Native|Private // @ game+0xc60c58
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren // Final|Native|Private // @ game+0xb5dc90
	struct FVector *f756a0f59d(); // Function Engine.SceneComponent.*f756a0f59d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7cf0
	struct USceneComponent* *f54ed8c40b(); // Function Engine.SceneComponent.*f54ed8c40b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6dcc
	int32 *47a7ed7776(); // Function Engine.SceneComponent.*47a7ed7776 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59bd5f8
	struct TArray<struct USceneComponent*> *2203da3c3b(); // Function Engine.SceneComponent.*2203da3c3b // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66daaa4
	struct USceneComponent* *af76098df3(); // Function Engine.SceneComponent.*af76098df3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xd7d59c
	bool K2_AttachTo(); // Function Engine.SceneComponent.K2_AttachTo // Final|Native|Public|BlueprintCallable // @ game+0x66ded70
	struct FVector *cae9ec1747(); // Function Engine.SceneComponent.*cae9ec1747 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66dba74
	void *860e529060(); // Function Engine.SceneComponent.*860e529060 // Final|Native|Public|BlueprintCallable // @ game+0x66e4440
	bool *6899b690c6(); // Function Engine.SceneComponent.*6899b690c6 // Final|Native|Public|BlueprintCallable // @ game+0x66e71e4
	bool *91da404789(); // Function Engine.SceneComponent.*91da404789 // Final|Native|Public|BlueprintCallable // @ game+0x66df110
	struct FTransform *a16ae93b8c(); // Function Engine.SceneComponent.*a16ae93b8c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66db018
	bool *007b399f94(); // Function Engine.SceneComponent.*007b399f94 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc30c
	struct FQuat *b9705d1983(); // Function Engine.SceneComponent.*b9705d1983 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66db298
	bool K2_SetWorldRotation(); // Function Engine.SceneComponent.K2_SetWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e1cc4
	bool *76907d1282(); // Function Engine.SceneComponent.*76907d1282 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e1460
	struct TArray<struct USceneComponent*> *8c7d8b49f7(); // Function Engine.SceneComponent.*8c7d8b49f7 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6e6c
	struct FVector *05a07db4bd(); // Function Engine.SceneComponent.*05a07db4bd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66dfd34
	bool ToggleVisibility(); // Function Engine.SceneComponent.ToggleVisibility // Final|Native|Public|BlueprintCallable // @ game+0x66ef1a0
	struct FRotator *bac6a64c08(); // Function Engine.SceneComponent.*bac6a64c08 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66db348
	bool *51f025391d(); // Function Engine.SceneComponent.*51f025391d // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59f48fc
	bool K2_SetWorldTransform(); // Function Engine.SceneComponent.K2_SetWorldTransform // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e1e9c
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName // Final|Native|Private // @ game+0xc60c58
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform // Final|Native|Private // @ game+0xbfcd14
	bool K2_AddWorldRotation(); // Function Engine.SceneComponent.K2_AddWorldRotation // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66de66c
	struct APhysicsVolume* *1f50dc4b23(); // Function Engine.SceneComponent.*1f50dc4b23 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dae10
	bool SetVisibility(); // Function Engine.SceneComponent.SetVisibility // Final|Native|Public|BlueprintCallable // @ game+0xc404a4
	struct FTransform K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66dfd78
	struct FVector *d6ea9645a8(); // Function Engine.SceneComponent.*d6ea9645a8 // Native|Public|HasDefaults|BlueprintCallable // @ game+0xc5eb50
	bool K2_AddLocalOffset(); // Function Engine.SceneComponent.K2_AddLocalOffset // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66ddb20
};

// Class Engine.PrimitiveComponent
// Size: 0x9c0 (Inherited: 0x480)
struct UPrimitiveComponent : USceneComponent {
	float MinDrawDistance; // 0x480(0x04)
	float LDMaxDrawDistance; // 0x484(0x04)
	float CachedMaxDrawDistance; // 0x488(0x04)
	enum class *4c2c3fa7ba *eb729ee19c; // 0x48c(0x01)
	enum class *4c2c3fa7ba *4abdb2d2ee; // 0x48d(0x01)
	char pad_48E[0x2]; // 0x48e(0x02)
	char pad_490_0 : 3; // 0x490(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x490(0x01)
	char bGenerateOverlapEvents : 1; // 0x490(0x01)
	char bMultiBodyOverlap : 1; // 0x490(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x490(0x01)
	char bTraceComplexOnMove : 1; // 0x490(0x01)
	char bDisableForceFromCharacter : 1; // 0x491(0x01)
	char bReturnMaterialOnMove : 1; // 0x491(0x01)
	char *09f6c4c3d1 : 1; // 0x491(0x01)
	char bAllowCullDistanceVolume : 1; // 0x491(0x01)
	char bImportantMesh : 1; // 0x491(0x01)
	char bOverrideCullingDistances : 1; // 0x491(0x01)
	char pad_491_6 : 2; // 0x491(0x01)
	char pad_492[0x2]; // 0x492(0x02)
	float HLODScreenSize; // 0x494(0x04)
	char *6d95e74c7f : 1; // 0x498(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x498(0x01)
	char bRenderInMainPass : 1; // 0x498(0x01)
	char bRenderInMono : 1; // 0x498(0x01)
	char bOwnerNoSee : 1; // 0x498(0x01)
	char bOnlyOwnerSee : 1; // 0x498(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x498(0x01)
	char bUseAsOccluder : 1; // 0x498(0x01)
	char bForceAsOccluder : 1; // 0x499(0x01)
	char bForceOcclusionQuerying : 1; // 0x499(0x01)
	char bForceDisableOcclusionQuerying : 1; // 0x499(0x01)
	char *2ec0cf6207 : 1; // 0x499(0x01)
	char bForceMipStreaming : 1; // 0x499(0x01)
	char *105359d223 : 1; // 0x499(0x01)
	char pad_499_6 : 1; // 0x499(0x01)
	char CastShadow : 1; // 0x499(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x49a(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x49a(0x01)
	char bCastDynamicShadow : 1; // 0x49a(0x01)
	char bCastStaticShadow : 1; // 0x49a(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x49a(0x01)
	char bSelfShadowOnly : 1; // 0x49a(0x01)
	char bCastFarShadow : 1; // 0x49a(0x01)
	char bCastInsetShadow : 1; // 0x49a(0x01)
	char bCastCinematicShadow : 1; // 0x49b(0x01)
	char bCastHiddenShadow : 1; // 0x49b(0x01)
	char bCastShadowAsTwoSided : 1; // 0x49b(0x01)
	char bLightAsIfStatic : 1; // 0x49b(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x49b(0x01)
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x49b(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x49b(0x01)
	char bIgnoreRadialImpulse : 1; // 0x49b(0x01)
	char bIgnoreRadialForce : 1; // 0x49c(0x01)
	char bApplyImpulseOnDamage : 1; // 0x49c(0x01)
	char bSyncBodySleep : 1; // 0x49c(0x01)
	char *1e5038da00 : 1; // 0x49c(0x01)
	char *0f77398d5f : 1; // 0x49c(0x01)
	char *c1c03669ea : 1; // 0x49c(0x01)
	char bRenderCustomDepth : 1; // 0x49c(0x01)
	char pad_49C_7 : 1; // 0x49c(0x01)
	char pad_49D_0 : 7; // 0x49d(0x01)
	char *7ea77ae49c : 1; // 0x49d(0x01)
	char *d5b1d4efdd : 1; // 0x49e(0x01)
	char *634898d6e3 : 1; // 0x49e(0x01)
	char pad_49E_2 : 6; // 0x49e(0x01)
	char pad_49F[0x1]; // 0x49f(0x01)
	enum class EDecalChannel DecalChannel; // 0x4a0(0x01)
	enum class *c276e29a27 IndoorOutdoorMask; // 0x4a1(0x01)
	struct FLightingChannels LightingChannels; // 0x4a2(0x03)
	enum class *5e872d5d99 IndirectLightingCacheQuality; // 0x4a5(0x01)
	bool CustomDepthStencilValue; // 0x4a6(0x01)
	enum class *e33f967072 CustomDepthStencilWriteMask; // 0x4a7(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x4a8(0x10)
	int32 TranslucencySortPriority; // 0x4b8(0x04)
	int32 *bc309c15af; // 0x4bc(0x04)
	char pad_4C0[0x4]; // 0x4c0(0x04)
	float LpvBiasMultiplier; // 0x4c4(0x04)
	char pad_4C8[0x8]; // 0x4c8(0x08)
	struct FBodyInstance BodyInstance; // 0x4d0(0x240)
	char pad_710[0x8]; // 0x710(0x08)
	enum class EHasCustomNavigableGeometry *36f10e7fa8; // 0x718(0x01)
	char pad_719[0x3b]; // 0x719(0x3b)
	float BoundsScale; // 0x754(0x04)
	float *990edc28ca; // 0x758(0x04)
	float *680d1c60d0; // 0x75c(0x04)
	float *ba01ced785; // 0x760(0x04)
	enum class *7235c251e5 CanBeCharacterBase; // 0x764(0x01)
	char pad_765[0x1]; // 0x765(0x01)
	enum class *7235c251e5 CanCharacterStepUpOn; // 0x766(0x01)
	char pad_767[0x1]; // 0x767(0x01)
	struct TArray<struct AActor*> *23831abfcf; // 0x768(0x10)
	struct TArray<struct UPrimitiveComponent*> *0c87b28730; // 0x778(0x10)
	char pad_788[0xb8]; // 0x788(0xb8)
	struct FMulticastDelegate OnComponentHit; // 0x840(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x850(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x860(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x870(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x880(0x10)
	char pad_890[0x10]; // 0x890(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x8a0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x8b0(0x10)
	struct FMulticastDelegate OnClicked; // 0x8c0(0x10)
	struct FMulticastDelegate OnReleased; // 0x8d0(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x8e0(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x8f0(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x900(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x910(0x10)
	char pad_920[0x28]; // 0x920(0x28)
	struct UPrimitiveComponent* *aef56929f8; // 0x948(0x08)
	struct UPrimitiveComponent* *0cf5ac713e; // 0x950(0x08)
	struct F*254b7d2b0f *162fbfca55; // 0x958(0x58)
	char pad_9B0[0x10]; // 0x9b0(0x10)

	bool *e9db8211c2(); // Function Engine.PrimitiveComponent.*e9db8211c2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66e00ec
	bool *5ba0e047ef(); // Function Engine.PrimitiveComponent.*5ba0e047ef // Native|Public|BlueprintCallable // @ game+0x66e7cb0
	struct TArray<struct AActor*> CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // Final|Native|Public|BlueprintCallable // @ game+0x66d25c8
	bool *83d2d5c58f(); // Function Engine.PrimitiveComponent.*83d2d5c58f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dcb1c
	int32 *2355b14434(); // Function Engine.PrimitiveComponent.*2355b14434 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66da264
	struct UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // Native|Public|BlueprintCallable // @ game+0x66d277c
	float *64501b49de(); // Function Engine.PrimitiveComponent.*64501b49de // Final|Native|Public|BlueprintCallable // @ game+0x66e8e74
	float *52312be303(); // Function Engine.PrimitiveComponent.*52312be303 // Final|Native|Public|BlueprintCallable // @ game+0x66e9d9c
	void *28aecd6f59(); // Function Engine.PrimitiveComponent.*28aecd6f59 // Final|Native|Public|BlueprintCallable // @ game+0x66cfa18
	float SetMassScale(); // Function Engine.PrimitiveComponent.SetMassScale // Native|Public|BlueprintCallable // @ game+0x66eb898
	struct FVector *523a890fe3(); // Function Engine.PrimitiveComponent.*523a890fe3 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66dacd8
	struct FName AddForceAtLocation(); // Function Engine.PrimitiveComponent.AddForceAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66cd7ec
	struct FName *4696406aa4(); // Function Engine.PrimitiveComponent.*4696406aa4 // Final|Native|Public|BlueprintCallable // @ game+0x66d714c
	bool *d97262aee0(); // Function Engine.PrimitiveComponent.*d97262aee0 // Native|Public|BlueprintCallable // @ game+0x66ebf3c
	bool AddImpulse(); // Function Engine.PrimitiveComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66cdd4c
	bool *d81824b167(); // Function Engine.PrimitiveComponent.*d81824b167 // Final|Native|Public|BlueprintCallable // @ game+0x66dc00c
	enum class ECollisionResponse *53ce351ab3(); // Function Engine.PrimitiveComponent.*53ce351ab3 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7184
	bool SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e7bb0
	struct FName SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // Final|Native|Public|BlueprintCallable // @ game+0x66ec310
	struct TArray<struct F*0f151f07b7> *2457fa2026(); // Function Engine.PrimitiveComponent.*2457fa2026 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66da398
	struct FVector *c547ccf43f(); // Function Engine.PrimitiveComponent.*c547ccf43f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66d6c30
	int32 *2a28a4ceb1(); // Function Engine.PrimitiveComponent.*2a28a4ceb1 // Final|Native|Public|BlueprintCallable // @ game+0x66e9e34
	struct UMaterialInterface* *b8614f6ee8(); // Function Engine.PrimitiveComponent.*b8614f6ee8 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d99f0
	struct FVector GetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xc7eee4
	float *c0fc59eca2(); // Function Engine.PrimitiveComponent.*c0fc59eca2 // Native|Public|BlueprintCallable // @ game+0x66e7a1c
	bool *48b0674a6b(); // Function Engine.PrimitiveComponent.*48b0674a6b // Final|Native|Public|BlueprintCallable // @ game+0x66dbf2c
	struct FName *2726371f61(); // Function Engine.PrimitiveComponent.*2726371f61 // Native|Public|BlueprintCallable // @ game+0x66ed830
	enum class ECollisionEnabled *8e06d61cd2(); // Function Engine.PrimitiveComponent.*8e06d61cd2 // Native|Public|BlueprintCallable // @ game+0xc1472c
	bool *7d15f33df8(); // Function Engine.PrimitiveComponent.*7d15f33df8 // Native|Public|BlueprintCallable // @ game+0xc85964
	bool *2fcd5dc4f1(); // Function Engine.PrimitiveComponent.*2fcd5dc4f1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dcbbc
	bool *af2cc12a58(); // Function Engine.PrimitiveComponent.*af2cc12a58 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66cf398
	struct UMaterialInterface* *6147859fcb(); // Function Engine.PrimitiveComponent.*6147859fcb // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9a94
	bool *b8cf4b4c35(); // Function Engine.PrimitiveComponent.*b8cf4b4c35 // Final|Native|Public|BlueprintCallable // @ game+0x66eca74
	struct F*705bbdf923 *e13e475844(); // Function Engine.PrimitiveComponent.*e13e475844 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dbe48
	enum class ECollisionChannel SetCollisionObjectType(); // Function Engine.PrimitiveComponent.SetCollisionObjectType // Native|Public|BlueprintCallable // @ game+0x66e9568
	bool *c32c2b30ad(); // Function Engine.PrimitiveComponent.*c32c2b30ad // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66ce760
	enum class ECollisionResponse *3a3aa0f9aa(); // Function Engine.PrimitiveComponent.*3a3aa0f9aa // Native|Public|BlueprintCallable // @ game+0x66e9694
	enum class EDOFMode *7f0b02410b(); // Function Engine.PrimitiveComponent.*7f0b02410b // Native|Public|BlueprintCallable // @ game+0x66e9c04
	enum class *e33f967072 *714e0a606e(); // Function Engine.PrimitiveComponent.*714e0a606e // Final|Native|Public|BlueprintCallable // @ game+0x66e9ec4
	struct UPhysicalMaterial* *90432a4b88(); // Function Engine.PrimitiveComponent.*90432a4b88 // Native|Public|BlueprintCallable // @ game+0x66ec27c
	int32 *b735fad47e(); // Function Engine.PrimitiveComponent.*b735fad47e // Final|Native|Public|BlueprintCallable // @ game+0x66ed58c
	enum class EDOFMode *4fedb1a6a3(); // Function Engine.PrimitiveComponent.*4fedb1a6a3 // Native|Public|BlueprintCallable // @ game+0x66eb4fc
	bool *e87bee575d(); // Function Engine.PrimitiveComponent.*e87bee575d // Final|Native|Public|BlueprintCallable // @ game+0x66ebfd4
	float *aaacbbdb6c(); // Function Engine.PrimitiveComponent.*aaacbbdb6c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5907974
	struct F*705bbdf923 *78d8a0af1f(); // Function Engine.PrimitiveComponent.*78d8a0af1f // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66edf30
	struct FName SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e91f8
	float *19a69f011f(); // Function Engine.PrimitiveComponent.*19a69f011f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6fa0
	struct FName *0de970a16f(); // Function Engine.PrimitiveComponent.*0de970a16f // Final|Native|Public|BlueprintCallable // @ game+0x66e3e84
	struct FName SetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xc553cc
	bool AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66ccdd8
	struct FName AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66cde8c
	struct UMaterialInterface* SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // Native|Public|BlueprintCallable // @ game+0xca4584
	float *74fc74b263(); // Function Engine.PrimitiveComponent.*74fc74b263 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9930
	bool *bd0ec46553(); // Function Engine.PrimitiveComponent.*bd0ec46553 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e7ab8
	float SetAngularDamping(); // Function Engine.PrimitiveComponent.SetAngularDamping // Native|Public|BlueprintCallable // @ game+0x66e295c
	struct UMaterialInterface* *48305203f7(); // Function Engine.PrimitiveComponent.*48305203f7 // Native|Public|BlueprintCallable // @ game+0x66eb97c
	enum class ECollisionChannel *d260a6c731(); // Function Engine.PrimitiveComponent.*d260a6c731 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7124
	void *47ec021dd1(); // Function Engine.PrimitiveComponent.*47ec021dd1 // Native|Public|BlueprintCallable // @ game+0x66e43f8
	float *40b80e1f86(); // Function Engine.PrimitiveComponent.*40b80e1f86 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d5fb0
	bool *04a08b51bb(); // Function Engine.PrimitiveComponent.*04a08b51bb // Native|Public|BlueprintCallable // @ game+0x597fa00
	struct UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // Native|Public|BlueprintCallable // @ game+0x66d26d8
	bool *7614d2f54e(); // Function Engine.PrimitiveComponent.*7614d2f54e // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc75c
	void *603b323c81(); // Function Engine.PrimitiveComponent.*603b323c81 // Final|Native|Public|BlueprintCallable // @ game+0x66cfa34
	struct FName *448cf7e0f2(); // Function Engine.PrimitiveComponent.*448cf7e0f2 // Native|Public|BlueprintCallable // @ game+0x66ef484
	bool *0f1b74141b(); // Function Engine.PrimitiveComponent.*0f1b74141b // Final|Native|Public|BlueprintCallable // @ game+0x66ec124
	bool AddTorque(); // Function Engine.PrimitiveComponent.AddTorque // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66cec20
	bool K2_LineTraceComponent(); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e017c
	struct FName *2e26aaaf30(); // Function Engine.PrimitiveComponent.*2e26aaaf30 // Native|Public|BlueprintCallable // @ game+0x66e9600
	struct FVector GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66dac28
	struct TArray<struct UPrimitiveComponent*> GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66da738
	float GetMass(); // Function Engine.PrimitiveComponent.GetMass // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9904
	bool *09ce12ba0b(); // Function Engine.PrimitiveComponent.*09ce12ba0b // Native|Public|BlueprintCallable // @ game+0x66eb76c
	bool *85d8176587(); // Function Engine.PrimitiveComponent.*85d8176587 // Native|Public|BlueprintCallable // @ game+0x66dc2e4
	bool *6cbdd1633c(); // Function Engine.PrimitiveComponent.*6cbdd1633c // Final|Native|Public|BlueprintCallable // @ game+0x66ecb08
	bool *90cc3021c0(); // Function Engine.PrimitiveComponent.*90cc3021c0 // Final|Native|Public|BlueprintCallable // @ game+0x66ecb9c
	struct UClass* GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66da540
	struct TArray<struct UPrimitiveComponent*> *083545280a(); // Function Engine.PrimitiveComponent.*083545280a // Final|Native|Public|BlueprintCallable // @ game+0x66d2650
	struct FName SetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0xc49d48
	bool *8022a6e53e(); // Function Engine.PrimitiveComponent.*8022a6e53e // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66ce58c
	enum class ECollisionResponse *67e552295b(); // Function Engine.PrimitiveComponent.*67e552295b // Native|Public|BlueprintCallable // @ game+0x66e972c
	struct FVector *f1e65a30d8(); // Function Engine.PrimitiveComponent.*f1e65a30d8 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66e4904
	struct FName AddForceAtLocationLocal(); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66cd938
	struct FVector *6e71cecd23(); // Function Engine.PrimitiveComponent.*6e71cecd23 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d8988
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x66d286c
	bool *95fc0388db(); // Function Engine.PrimitiveComponent.*95fc0388db // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66e0148
	bool AddForce(); // Function Engine.PrimitiveComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66cd6ac
	enum class ECollisionEnabled *99eb55293a(); // Function Engine.PrimitiveComponent.*99eb55293a // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d70fc
	bool *419ebb4754(); // Function Engine.PrimitiveComponent.*419ebb4754 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66e0118
	bool *638da52b6d(); // Function Engine.PrimitiveComponent.*638da52b6d // Final|Native|Public|BlueprintCallable // @ game+0x66e90cc
	float SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // Native|Public|BlueprintCallable // @ game+0x66eb460
};

// Class Engine.MeshComponent
// Size: 0xac0 (Inherited: 0x9c0)
struct UMeshComponent : UPrimitiveComponent {
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x9b8(0x10)
	char pad_9D0[0xf0]; // 0x9d0(0xf0)

	struct TArray<struct UMaterialInterface*> *9bc7eb317f(); // Function Engine.MeshComponent.*9bc7eb317f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9c6c
	bool *7c084373ce(); // Function Engine.MeshComponent.*7c084373ce // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc934
	int32 *372cae974e(); // Function Engine.MeshComponent.*372cae974e // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9b38
	struct TArray<struct FName> *e12aafe669(); // Function Engine.MeshComponent.*e12aafe669 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9be0
	float *dd190eacfc(); // Function Engine.MeshComponent.*dd190eacfc // Final|Native|Public|BlueprintCallable // @ game+0x3d12f4
	struct FVector *00ffa1d77b(); // Function Engine.MeshComponent.*00ffa1d77b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x3d0c54
};

// Class Engine.StaticMeshComponent
// Size: 0xb60 (Inherited: 0xac0)
struct UStaticMeshComponent : UMeshComponent {
	int32 ForcedLodModel; // 0xac0(0x04)
	int32 *9f0fda2ed8; // 0xac4(0x04)
	bool bOverrideMinLOD; // 0xac8(0x01)
	char pad_AC9[0x3]; // 0xac9(0x03)
	int32 MinLOD; // 0xacc(0x04)
	struct UStaticMesh* StaticMesh; // 0xad0(0x08)
	bool bOverrideWireframeColor; // 0xad8(0x01)
	char pad_AD9[0x3]; // 0xad9(0x03)
	struct FColor WireframeColorOverride; // 0xadc(0x04)
	struct FLinearColor PerInstanceCustomData; // 0xae0(0x10)
	char *138a858590 : 1; // 0xaf0(0x01)
	char *c1a735b803 : 1; // 0xaf0(0x01)
	char bDisallowMeshPaintPerInstance : 1; // 0xaf0(0x01)
	char *b431fce4a2 : 1; // 0xaf0(0x01)
	char bIgnoreInstanceForTextureStreaming : 1; // 0xaf0(0x01)
	char bOverrideLightMapRes : 1; // 0xaf0(0x01)
	char pad_AF0_6 : 2; // 0xaf0(0x01)
	char pad_AF1[0x3]; // 0xaf1(0x03)
	int32 OverriddenLightMapRes; // 0xaf4(0x04)
	char bCastDistanceFieldIndirectShadow : 1; // 0xaf8(0x01)
	char pad_AF8_1 : 7; // 0xaf8(0x01)
	char pad_AF9[0x3]; // 0xaf9(0x03)
	float DistanceFieldIndirectShadowMinVisibility; // 0xafc(0x04)
	float StreamingDistanceMultiplier; // 0xb00(0x04)
	int32 *12d8adf087; // 0xb04(0x04)
	char *402c8627cc : 1; // 0xb08(0x01)
	char pad_B08_1 : 7; // 0xb08(0x01)
	char pad_B09[0x7]; // 0xb09(0x07)
	struct TArray<struct FGuid> IrrelevantLights; // 0xb10(0x10)
	struct TArray<struct F*87fceb50c7> *5ff7bc7629; // 0xb20(0x10)
	struct TArray<struct F*8760f7f7d5> *ad72999b02; // 0xb30(0x10)
	bool *24446b5829; // 0xb40(0x01)
	char pad_B41[0x3]; // 0xb41(0x03)
	struct F*2ca2c467d8 LightmassSettings; // 0xb44(0x18)
	char pad_B5C[0x4]; // 0xb5c(0x04)

	int32 *11ee32cc52(); // Function Engine.StaticMeshComponent.*11ee32cc52 // Final|Native|Public|BlueprintCallable // @ game+0x66ea3b8
	struct FVector *8243903fcf(); // Function Engine.StaticMeshComponent.*8243903fcf // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d97fc
	bool SetStaticMesh(); // Function Engine.StaticMeshComponent.SetStaticMesh // Native|Public|BlueprintCallable // @ game+0x6172a2c
	struct UStaticMesh* OnRep_StaticMesh(); // Function Engine.StaticMeshComponent.OnRep_StaticMesh // Final|Native|Public // @ game+0x66e2d14
};

// Class Engine.SkinnedMeshComponent
// Size: 0xc60 (Inherited: 0xac0)
struct USkinnedMeshComponent : UMeshComponent {
	struct USkeletalMesh* SkeletalMesh; // 0xac0(0x08)
	struct USkinnedMeshComponent* MasterPoseComponent; // 0xac8(0x08)
	char pad_AD0[0x60]; // 0xad0(0x60)
	char bUseBoundsFromMasterPoseComponent : 1; // 0xb30(0x01)
	char pad_B30_1 : 7; // 0xb30(0x01)
	char pad_B31[0x7]; // 0xb31(0x07)
	struct TArray<struct FBoxSphereBounds> *7e707d842a; // 0xb38(0x10)
	char pad_B48[0x20]; // 0xb48(0x20)
	struct UPhysicsAsset* PhysicsAssetOverride; // 0xb68(0x08)
	int32 ForcedLodModel; // 0xb70(0x04)
	int32 MinLodModel; // 0xb74(0x04)
	char pad_B78[0x10]; // 0xb78(0x10)
	struct TArray<struct F*716b1d68f9> LODInfo; // 0xb88(0x10)
	float StreamingDistanceMultiplier; // 0xb98(0x04)
	struct FColor WireframeColor; // 0xb9c(0x04)
	char *3f2cd63a77 : 1; // 0xba0(0x01)
	char *f9ca417f7f : 1; // 0xba0(0x01)
	char bDisableMorphTarget : 1; // 0xba0(0x01)
	char *490444df87 : 1; // 0xba0(0x01)
	char pad_BA0_4 : 4; // 0xba0(0x01)
	char pad_BA1[0x17]; // 0xba1(0x17)
	char bPerBoneMotionBlur : 1; // 0xbb8(0x01)
	char bComponentUseFixedSkelBounds : 1; // 0xbb8(0x01)
	char bConsiderAllBodiesForBounds : 1; // 0xbb8(0x01)
	char bSyncAttachParentLOD : 1; // 0xbb8(0x01)
	char pad_BB8_4 : 4; // 0xbb8(0x01)
	char pad_BB9[0x3]; // 0xbb9(0x03)
	enum class EMeshComponentUpdateFlag MeshComponentUpdateFlag; // 0xbbc(0x01)
	char pad_BBD[0x3]; // 0xbbd(0x03)
	char *6f302faed4 : 1; // 0xbc0(0x01)
	char *71246305c4 : 1; // 0xbc0(0x01)
	char *8f160de05a : 1; // 0xbc0(0x01)
	char pad_BC0_3 : 5; // 0xbc0(0x01)
	char pad_BC1[0x3]; // 0xbc1(0x03)
	bool *f69c993587; // 0xbc4(0x01)
	char pad_BC5[0x3]; // 0xbc5(0x03)
	char bCastCapsuleDirectShadow : 1; // 0xbc8(0x01)
	char bCastCapsuleIndirectShadow : 1; // 0xbc8(0x01)
	char pad_BC8_2 : 6; // 0xbc8(0x01)
	char pad_BC9[0x3]; // 0xbc9(0x03)
	char bRenderStatic : 1; // 0xbcc(0x01)
	char pad_BCC_1 : 7; // 0xbcc(0x01)
	char pad_BCD[0x3]; // 0xbcd(0x03)
	float CapsuleIndirectShadowMinVisibility; // 0xbd0(0x04)
	char *b1a1d2d22b : 1; // 0xbd4(0x01)
	char pad_BD4_1 : 7; // 0xbd4(0x01)
	char pad_BD5[0xf]; // 0xbd5(0x0f)
	struct FBoxSphereBounds *e8d742ebf8; // 0xbe4(0x1c)
	bool *4378cc44ba; // 0xc00(0x01)
	bool bEnableUpdateRateOptimizations; // 0xc01(0x01)
	bool bDisplayDebugUpdateRateOptimizations; // 0xc02(0x01)
	char pad_C03[0x4e]; // 0xc03(0x4e)
	bool *55af0130d7; // 0xc51(0x01)
	bool *78147857b9; // 0xc52(0x01)
	char pad_C53[0xd]; // 0xc53(0x0d)

	int32 *4394f2b79a(); // Function Engine.SkinnedMeshComponent.*4394f2b79a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67123dc
	struct FName *838df13444(); // Function Engine.SkinnedMeshComponent.*838df13444 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6712a34
	bool *026700c446(); // Function Engine.SkinnedMeshComponent.*026700c446 // Final|Native|Public|BlueprintCallable // @ game+0x6732f60
	bool *68bb8d275b(); // Function Engine.SkinnedMeshComponent.*68bb8d275b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66f9df8
	float *ba1220499b(); // Function Engine.SkinnedMeshComponent.*ba1220499b // Final|Native|Public|BlueprintCallable // @ game+0x6732a0c
	int32 *e158c5febe(); // Function Engine.SkinnedMeshComponent.*e158c5febe // Final|Native|Public|BlueprintCallable // @ game+0x67394cc
	struct USkinnedMeshComponent* *8f2840426b(); // Function Engine.SkinnedMeshComponent.*8f2840426b // Final|Native|Public|BlueprintCallable // @ game+0x673939c
	struct FName *c3e2b97429(); // Function Engine.SkinnedMeshComponent.*c3e2b97429 // Final|Native|Public|BlueprintCallable // @ game+0x674812c
	int32 *4314e5075f(); // Function Engine.SkinnedMeshComponent.*4314e5075f // Final|Native|Public|BlueprintCallable // @ game+0x6701344
	struct FRotator *cd65a7e2a2(); // Function Engine.SkinnedMeshComponent.*cd65a7e2a2 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6747b20
	bool *10e2fc0989(); // Function Engine.SkinnedMeshComponent.*10e2fc0989 // Final|Native|Public|BlueprintCallable // @ game+0x671abe0
	int32 GetBoneIndex(); // Function Engine.SkinnedMeshComponent.GetBoneIndex // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670cc24
	struct FName *eac8bd7d31(); // Function Engine.SkinnedMeshComponent.*eac8bd7d31 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6714f84
	int32 *d05921b40e(); // Function Engine.SkinnedMeshComponent.*d05921b40e // Final|Native|Public|BlueprintCallable // @ game+0x673670c
	struct FName *fbe2178ccc(); // Function Engine.SkinnedMeshComponent.*fbe2178ccc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670cee0
	bool *1f742918c4(); // Function Engine.SkinnedMeshComponent.*1f742918c4 // Final|Native|Public|BlueprintCallable // @ game+0x6732eb0
	struct FName *8612ed82dd(); // Function Engine.SkinnedMeshComponent.*8612ed82dd // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670991c
	enum class *b8ba79008c *a26716e360(); // Function Engine.SkinnedMeshComponent.*a26716e360 // Final|Native|Public|BlueprintCallable // @ game+0x671953c
	bool *dafdadd3ee(); // Function Engine.SkinnedMeshComponent.*dafdadd3ee // Native|Public|BlueprintCallable // @ game+0x673a3fc
	bool SetSkeletalMesh(); // Function Engine.SkinnedMeshComponent.SetSkeletalMesh // Native|Public|BlueprintCallable // @ game+0x673b7c0
	struct FRotator *ebb6e42b77(); // Function Engine.SkinnedMeshComponent.*ebb6e42b77 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6747ef4
	struct TArray<struct F*f86f4b653b> SetSkinWeightOverride(); // Function Engine.SkinnedMeshComponent.SetSkinWeightOverride // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x673b96c
	struct TArray<struct FLinearColor> *f9a2b14326(); // Function Engine.SkinnedMeshComponent.*f9a2b14326 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x673eaec
	int32 *fa9a237ed2(); // Function Engine.SkinnedMeshComponent.*fa9a237ed2 // Final|Native|Public|BlueprintCallable // @ game+0x6700fe0
	bool *b1f7e668fd(); // Function Engine.SkinnedMeshComponent.*b1f7e668fd // Final|Native|Public|BlueprintCallable // @ game+0x673b32c
};

// Class Engine.SkeletalMeshComponent
// Size: 0x1160 (Inherited: 0xc60)
struct USkeletalMeshComponent : USkinnedMeshComponent {
	struct UAnimBlueprintGeneratedClass* AnimBlueprintGeneratedClass; // 0xc60(0x08)
	struct UClass* AnimClass; // 0xc68(0x08)
	struct UAnimInstance* AnimScriptInstance; // 0xc70(0x08)
	struct TArray<struct UAnimInstance*> *03c8c15a34; // 0xc78(0x10)
	struct UAnimInstance* *20e7dd5deb; // 0xc88(0x08)
	struct F*26e8fbfd7d AnimationData; // 0xc90(0x18)
	char pad_CA8[0x30]; // 0xca8(0x30)
	struct TArray<struct FTransform> *9848550080; // 0xcd8(0x10)
	struct TArray<struct FTransform> *394e69fb9f; // 0xce8(0x10)
	char pad_CF8[0x20]; // 0xcf8(0x20)
	float GlobalAnimRateScale; // 0xd18(0x04)
	enum class EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0xd1c(0x01)
	enum class *05c097b6a7 PhysicsTransformUpdateMode; // 0xd1d(0x01)
	char pad_D1E[0x1]; // 0xd1e(0x01)
	enum class EAnimationMode AnimationMode; // 0xd1f(0x01)
	char pad_D20[0x4]; // 0xd20(0x04)
	char pad_D24_0 : 1; // 0xd24(0x01)
	char *c4bdbb1cf4 : 1; // 0xd24(0x01)
	char pad_D24_2 : 1; // 0xd24(0x01)
	char *6421e28158 : 1; // 0xd24(0x01)
	char pad_D24_4 : 2; // 0xd24(0x01)
	char bEnablePhysicsOnDedicatedServer : 1; // 0xd24(0x01)
	char bUpdateJointsFromAnimation : 1; // 0xd24(0x01)
	char bDisableClothSimulation : 1; // 0xd25(0x01)
	char pad_D25_1 : 2; // 0xd25(0x01)
	char bCollideWithEnvironment : 1; // 0xd25(0x01)
	char bCollideWithAttachedChildren : 1; // 0xd25(0x01)
	char bLocalSpaceSimulation : 1; // 0xd25(0x01)
	char *9d44ba5ec9 : 1; // 0xd25(0x01)
	char bResetAfterTeleport : 1; // 0xd25(0x01)
	char pad_D26_0 : 1; // 0xd26(0x01)
	char bNoSkeletonUpdate : 1; // 0xd26(0x01)
	char bPauseAnims : 1; // 0xd26(0x01)
	char *ed86ed2e15 : 1; // 0xd26(0x01)
	char bEnablePerPolyCollision : 1; // 0xd26(0x01)
	char *c01750e849 : 1; // 0xd26(0x01)
	char *83c65effe5 : 1; // 0xd26(0x01)
	char *240877b930 : 1; // 0xd26(0x01)
	char *c9d93e6eb3 : 1; // 0xd27(0x01)
	char *0aa5f65cc4 : 1; // 0xd27(0x01)
	char *764f80ac00 : 1; // 0xd27(0x01)
	char *f76af3c9c8 : 1; // 0xd27(0x01)
	char bIncludeComponentLocationIntoBounds : 1; // 0xd27(0x01)
	char *ff27a462a4 : 1; // 0xd27(0x01)
	char pad_D27_6 : 2; // 0xd27(0x01)
	char *67eb3862bf : 1; // 0xd28(0x01)
	char pad_D28_1 : 7; // 0xd28(0x01)
	char pad_D29_0 : 2; // 0xd29(0x01)
	char bDefaultLooping : 1; // 0xd29(0x01)
	char bDefaultPlaying : 1; // 0xd29(0x01)
	char pad_D29_4 : 4; // 0xd29(0x01)
	uint16 *fb5365b7ee; // 0xd2a(0x02)
	float ClothBlendWeight; // 0xd2c(0x04)
	struct FVector *0e1553491d; // 0xd30(0x0c)
	char pad_D3C[0x4]; // 0xd3c(0x04)
	struct UBodySetup* BodySetup; // 0xd40(0x08)
	float TeleportDistanceThreshold; // 0xd48(0x04)
	float TeleportRotationThreshold; // 0xd4c(0x04)
	struct FVector *bf2f3285e7; // 0xd50(0x0c)
	char pad_D5C[0x4]; // 0xd5c(0x04)
	struct FMulticastDelegate OnConstraintBroken; // 0xd60(0x10)
	char pad_D70[0xe0]; // 0xd70(0xe0)
	struct UClass* *cf624e37bc; // 0xe50(0x08)
	char pad_E58[0x1e8]; // 0xe58(0x1e8)
	struct UAnimSequence* SequenceToPlay; // 0x1040(0x08)
	struct UAnimationAsset* AnimToPlay; // 0x1048(0x08)
	float DefaultPosition; // 0x1050(0x04)
	float DefaultPlayRate; // 0x1054(0x04)
	uint32 *f2bafb289a; // 0x1058(0x04)
	float *9553518a1b; // 0x105c(0x04)
	char pad_1060[0x100]; // 0x1060(0x100)

	float GetPosition(); // Function Engine.SkeletalMeshComponent.GetPosition // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67131e8
	struct FName *0419cb3ccb(); // Function Engine.SkeletalMeshComponent.*0419cb3ccb // Final|Native|Public|BlueprintCallable // @ game+0x6709f24
	struct UAnimationAsset* SetAnimation(); // Function Engine.SkeletalMeshComponent.SetAnimation // Final|Native|Public|BlueprintCallable // @ game+0x3ce5ac
	float *b948b16a82(); // Function Engine.SkeletalMeshComponent.*b948b16a82 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x670d9d0
	bool SetPosition(); // Function Engine.SkeletalMeshComponent.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x673aac8
	bool IsPlaying(); // Function Engine.SkeletalMeshComponent.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x671b218
	float *1ad9295ccf(); // Function Engine.SkeletalMeshComponent.*1ad9295ccf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670cdf4
	bool *50e0bcf134(); // Function Engine.SkeletalMeshComponent.*50e0bcf134 // Final|Native|Public|BlueprintCallable // @ game+0x67481bc
	void *003dacf78a(); // Function Engine.SkeletalMeshComponent.*003dacf78a // Final|Native|Public|BlueprintCallable // @ game+0x6700f30
	void *c9ffb0a8f1(); // Function Engine.SkeletalMeshComponent.*c9ffb0a8f1 // Final|Native|Public|BlueprintCallable // @ game+0x6746e68
	void *3dac8111a3(); // Function Engine.SkeletalMeshComponent.*3dac8111a3 // Final|Native|Public|BlueprintCallable // @ game+0x670b2dc
	struct FVector *c1dca80d01(); // Function Engine.SkeletalMeshComponent.*c1dca80d01 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6714f50
	float GetPlayRate(); // Function Engine.SkeletalMeshComponent.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6712c90
	void *aaaa810782(); // Function Engine.SkeletalMeshComponent.*aaaa810782 // Final|Native|Public|BlueprintCallable // @ game+0x672e25c
	struct UAnimInstance* *c11c201962(); // Function Engine.SkeletalMeshComponent.*c11c201962 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc08190
	void *b8e56f4e02(); // Function Engine.SkeletalMeshComponent.*b8e56f4e02 // Final|Native|Public|BlueprintCallable // @ game+0x672dee4
	float *f4e23cce99(); // Function Engine.SkeletalMeshComponent.*f4e23cce99 // Final|Native|Public|BlueprintCallable // @ game+0x673a4e0
	struct FPoseSnapshot *8681bde224(); // Function Engine.SkeletalMeshComponent.*8681bde224 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67415b8
	bool *f469fdb44b(); // Function Engine.SkeletalMeshComponent.*f469fdb44b // Final|Native|Public|BlueprintCallable // @ game+0x673553c
	enum class EAnimationMode *8cafec350a(); // Function Engine.SkeletalMeshComponent.*8cafec350a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670c4c8
	enum class EAnimationMode *df14d2ab1e(); // Function Engine.SkeletalMeshComponent.*df14d2ab1e // Final|Native|Public|BlueprintCallable // @ game+0x3ce2d8
	float *7be67dd09b(); // Function Engine.SkeletalMeshComponent.*7be67dd09b // Final|Native|Public|BlueprintCallable // @ game+0x672860c
	bool *205990b035(); // Function Engine.SkeletalMeshComponent.*205990b035 // Final|Native|Public|BlueprintCallable // @ game+0x672fb40
	bool *61816ece05(); // Function Engine.SkeletalMeshComponent.*61816ece05 // Final|Native|Public|BlueprintCallable // @ game+0x672fcc0
	bool *ab93cff151(); // Function Engine.SkeletalMeshComponent.*ab93cff151 // Final|Native|Public|BlueprintCallable // @ game+0x672faac
	bool *fe54059013(); // Function Engine.SkeletalMeshComponent.*fe54059013 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x671bf08
	bool *37cb4dcade(); // Function Engine.SkeletalMeshComponent.*37cb4dcade // Final|Native|Public|BlueprintCallable // @ game+0x67339dc
	void Stop(); // Function Engine.SkeletalMeshComponent.Stop // Final|Native|Public|BlueprintCallable // @ game+0x3ce38c
	float *b5ab3112e7(); // Function Engine.SkeletalMeshComponent.*b5ab3112e7 // Final|Native|Public|BlueprintCallable // @ game+0x673357c
	bool *e2357a32d5(); // Function Engine.SkeletalMeshComponent.*e2357a32d5 // Final|Native|Public|BlueprintCallable // @ game+0x6733b0c
	struct UAnimInstance* *85a1ba9962(); // Function Engine.SkeletalMeshComponent.*85a1ba9962 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x671352c
	struct FName *2e33e16a05(); // Function Engine.SkeletalMeshComponent.*2e33e16a05 // Final|Native|Public|BlueprintCallable // @ game+0x673518c
	bool *df6d5c3668(); // Function Engine.SkeletalMeshComponent.*df6d5c3668 // Final|Native|Public|BlueprintCallable // @ game+0x6735278
	bool *b0b3ecdf76(); // Function Engine.SkeletalMeshComponent.*b0b3ecdf76 // Final|Native|Public|BlueprintCallable // @ game+0x671ab30
	void *cb275501dc(); // Function Engine.SkeletalMeshComponent.*cb275501dc // Final|Native|Public|BlueprintCallable // @ game+0x672df88
	bool *06a4843213(); // Function Engine.SkeletalMeshComponent.*06a4843213 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66f3ea8
	bool *958b26bc5a(); // Function Engine.SkeletalMeshComponent.*958b26bc5a // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x950b58
	void *216855f3f1(); // Function Engine.SkeletalMeshComponent.*216855f3f1 // Final|Native|Public|BlueprintCallable // @ game+0x66f8b44
	bool PlayAnimation(); // Function Engine.SkeletalMeshComponent.PlayAnimation // Final|Native|Public|BlueprintCallable // @ game+0x672914c
	float *b7e5815bfd(); // Function Engine.SkeletalMeshComponent.*b7e5815bfd // Final|Native|Public|BlueprintCallable // @ game+0x6730280
	bool *590bc738cc(); // Function Engine.SkeletalMeshComponent.*590bc738cc // Native|Public|BlueprintCallable // @ game+0x6739c20
	struct FName *cb270d2b61(); // Function Engine.SkeletalMeshComponent.*cb270d2b61 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66fcb14
	void *ccd384fcae(); // Function Engine.SkeletalMeshComponent.*ccd384fcae // Final|Native|Public|BlueprintCallable // @ game+0x670b2f4
	bool *9b6a2e03c1(); // Function Engine.SkeletalMeshComponent.*9b6a2e03c1 // Final|Native|Public|BlueprintCallable // @ game+0xb2f4e4
	float SetPlayRate(); // Function Engine.SkeletalMeshComponent.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0xc565a8
	bool *1e1fba0baa(); // Function Engine.SkeletalMeshComponent.*1e1fba0baa // Final|Native|Public|BlueprintCallable // @ game+0x671acac
	bool *2b1d6ec9be(); // Function Engine.SkeletalMeshComponent.*2b1d6ec9be // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x672f908
	struct FName *b19e6db2c0(); // Function Engine.SkeletalMeshComponent.*b19e6db2c0 // Native|Public|BlueprintCallable // @ game+0x6731ac0
	struct UClass* SetAnimInstanceClass(); // Function Engine.SkeletalMeshComponent.SetAnimInstanceClass // Final|Native|Public|BlueprintCallable // @ game+0x6730ce0
	float *8c46bc1c4b(); // Function Engine.SkeletalMeshComponent.*8c46bc1c4b // Final|Native|Public|BlueprintCallable // @ game+0x59f909c
	bool *45cb1ffac9(); // Function Engine.SkeletalMeshComponent.*45cb1ffac9 // Final|Native|Public|BlueprintCallable // @ game+0x5948b10
	bool *dbb8691526(); // Function Engine.SkeletalMeshComponent.*dbb8691526 // Final|Native|Public|BlueprintCallable // @ game+0x672fe04
	bool *1bc40094b4(); // Function Engine.SkeletalMeshComponent.*1bc40094b4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67193f4
	float *a73016fcab(); // Function Engine.SkeletalMeshComponent.*a73016fcab // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67122e0
	bool *b38c1f41c3(); // Function Engine.SkeletalMeshComponent.*b38c1f41c3 // Final|Native|Public|BlueprintCallable // @ game+0x6739798
	bool Play(); // Function Engine.SkeletalMeshComponent.Play // Final|Native|Public|BlueprintCallable // @ game+0x3ce4a8
	bool *a9d045c57e(); // Function Engine.SkeletalMeshComponent.*a9d045c57e // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66f3578
	bool *ea3ca52eca(); // Function Engine.SkeletalMeshComponent.*ea3ca52eca // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66f3d14
};

// Class Engine.LightComponentBase
// Size: 0x4b0 (Inherited: 0x480)
struct ULightComponentBase : USceneComponent {
	struct FGuid *a686b10c5d; // 0x478(0x10)
	float Brightness; // 0x488(0x04)
	float Intensity; // 0x48c(0x04)
	struct FColor LightColor; // 0x490(0x04)
	char bAffectsWorld : 1; // 0x494(0x01)
	char CastShadows : 1; // 0x494(0x01)
	char CastStaticShadows : 1; // 0x494(0x01)
	char CastDynamicShadows : 1; // 0x494(0x01)
	char bAffectTranslucentLighting : 1; // 0x494(0x01)
	char bCastVolumetricShadow : 1; // 0x494(0x01)
	float IndirectLightingIntensity; // 0x498(0x04)
	float VolumetricScatteringIntensity; // 0x49c(0x04)
	bool *8f19adf142; // 0x4a0(0x01)
	char pad_4A5_6 : 2; // 0x4a5(0x01)
	char pad_4A6[0xa]; // 0x4a6(0x0a)

	bool *be965cf688(); // Function Engine.LightComponentBase.*be965cf688 // Final|Native|Public|BlueprintCallable // @ game+0x67330a8
	bool *fde7343060(); // Function Engine.LightComponentBase.*fde7343060 // Final|Native|Public|BlueprintCallable // @ game+0x6733014
	struct FLinearColor *5cae41be78(); // Function Engine.LightComponentBase.*5cae41be78 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6711838
};

// Class Engine.LightComponent
// Size: 0x5a0 (Inherited: 0x4b0)
struct ULightComponent : ULightComponentBase {
	float Temperature; // 0x4a8(0x04)
	float MaxDrawDistance; // 0x4ac(0x04)
	float *787d5d6e14; // 0x4b0(0x04)
	char bUseTemperature : 1; // 0x4b4(0x01)
	int32 ShadowMapChannel; // 0x4b8(0x04)
	float MinRoughness; // 0x4c0(0x04)
	float ShadowResolutionScale; // 0x4c4(0x04)
	float ShadowBias; // 0x4c8(0x04)
	float ShadowSharpen; // 0x4cc(0x04)
	float ContactShadowLength; // 0x4d0(0x04)
	char InverseSquaredFalloff : 1; // 0x4d4(0x01)
	char CastTranslucentShadows : 1; // 0x4d4(0x01)
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x4d4(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x4d4(0x01)
	char pad_4D4_5 : 3; // 0x4d4(0x01)
	char pad_4D5[0x3]; // 0x4d5(0x03)
	struct FLightingChannels LightingChannels; // 0x4d8(0x03)
	char pad_4DB[0x5]; // 0x4db(0x05)
	struct UMaterialInterface* LightFunctionMaterial; // 0x4e0(0x08)
	struct FVector LightFunctionScale; // 0x4e8(0x0c)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct U*cf31a3bb9b* IESTexture; // 0x4f8(0x08)
	char bUseIESBrightness : 1; // 0x500(0x01)
	char pad_500_1 : 7; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	float IESBrightnessScale; // 0x504(0x04)
	float LightFunctionFadeDistance; // 0x508(0x04)
	float DisabledBrightness; // 0x50c(0x04)
	char bEnableLightShaftBloom : 1; // 0x510(0x01)
	char pad_510_1 : 7; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	float BloomScale; // 0x514(0x04)
	float BloomThreshold; // 0x518(0x04)
	struct FColor BloomTint; // 0x51c(0x04)
	bool bUseRayTracedDistanceFieldShadows; // 0x520(0x01)
	char pad_521[0x3]; // 0x521(0x03)
	float RayStartOffsetDepthScale; // 0x524(0x04)
	char pad_528[0x78]; // 0x528(0x78)

	float *5ca15ddb64(); // Function Engine.LightComponent.*5ca15ddb64 // Final|Native|Public|BlueprintCallable // @ game+0x67381fc
	float SetIntensity(); // Function Engine.LightComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x6737a58
	struct UMaterialInterface* *63cb3ee82f(); // Function Engine.LightComponent.*63cb3ee82f // Final|Native|Public|BlueprintCallable // @ game+0x6738294
	struct U*cf31a3bb9b* *96c92cd704(); // Function Engine.LightComponent.*96c92cd704 // Final|Native|Public|BlueprintCallable // @ game+0x6737158
	float *6e138f82c4(); // Function Engine.LightComponent.*6e138f82c4 // Final|Native|Public|BlueprintCallable // @ game+0x67318e8
	float *18a784e23c(); // Function Engine.LightComponent.*18a784e23c // Final|Native|Public|BlueprintCallable // @ game+0x6731980
	struct FVector *46e3ca3f4d(); // Function Engine.LightComponent.*46e3ca3f4d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6738324
	bool *258006e252(); // Function Engine.LightComponent.*258006e252 // Final|Native|Public|BlueprintCallable // @ game+0x67353ac
	float *bce07c35db(); // Function Engine.LightComponent.*bce07c35db // Final|Native|Public|BlueprintCallable // @ game+0x673f158
	struct FColor *f46513e72c(); // Function Engine.LightComponent.*f46513e72c // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6731a18
	bool *32714f25cf(); // Function Engine.LightComponent.*32714f25cf // Final|Native|Public|BlueprintCallable // @ game+0x672f874
	float *219ca27b92(); // Function Engine.LightComponent.*219ca27b92 // Final|Native|Public|BlueprintCallable // @ game+0x673d9d4
	bool *cbc79675bf(); // Function Engine.LightComponent.*cbc79675bf // Final|Native|Public|BlueprintCallable // @ game+0x672f7a4
	float *a5a07d6e2d(); // Function Engine.LightComponent.*a5a07d6e2d // Final|Native|Public|BlueprintCallable // @ game+0x67372a4
	bool *c0e895a11e(); // Function Engine.LightComponent.*c0e895a11e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6737f10
	float *bfb5d300ac(); // Function Engine.LightComponent.*bfb5d300ac // Final|Native|Public|BlueprintCallable // @ game+0x6738164
};

// Class Engine.PointLightComponent
// Size: 0x5c0 (Inherited: 0x5a0)
struct UPointLightComponent : ULightComponent {
	float Radius; // 0x598(0x04)
	float AttenuationRadius; // 0x59c(0x04)
	char bUseInverseSquaredFalloff : 1; // 0x5a0(0x01)
	float LightFalloffExponent; // 0x5a4(0x04)
	float SourceRadius; // 0x5a8(0x04)
	float SourceLength; // 0x5ac(0x04)
	struct F*d176fa0a45 LightmassSettings; // 0x5b0(0x0c)

	float *80f81e4215(); // Function Engine.PointLightComponent.*80f81e4215 // Final|Native|Public|BlueprintCallable // @ game+0x673bea4
	float *5a24c02c9d(); // Function Engine.PointLightComponent.*5a24c02c9d // Final|Native|Public|BlueprintCallable // @ game+0x673be0c
	float *485d6ff949(); // Function Engine.PointLightComponent.*485d6ff949 // Final|Native|Public|BlueprintCallable // @ game+0x67380cc
	float SetAttenuationRadius(); // Function Engine.PointLightComponent.SetAttenuationRadius // Final|Native|Public|BlueprintCallable // @ game+0x67315a0
};

// Class Engine.SpotLightComponent
// Size: 0x5d0 (Inherited: 0x5c0)
struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x5c0(0x04)
	float OuterConeAngle; // 0x5c4(0x04)
	float *5fa0a48a2c; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)

	float *af3a4a82b2(); // Function Engine.SpotLightComponent.*af3a4a82b2 // Final|Native|Public|BlueprintCallable // @ game+0x673a2d0
	float *6410d64b8b(); // Function Engine.SpotLightComponent.*6410d64b8b // Final|Native|Public|BlueprintCallable // @ game+0x67373d4
};

// Class Engine.*fc2452f674
// Size: 0x38 (Inherited: 0x30)
struct U*fc2452f674 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Engine.*ee34789f9a
// Size: 0x38 (Inherited: 0x38)
struct U*ee34789f9a : U*fc2452f674 {
};

// Class Engine.*803292ecaa
// Size: 0x30 (Inherited: 0x30)
struct U*803292ecaa : UObject {
};

// Class Engine.*0ad023d030
// Size: 0x48 (Inherited: 0x30)
struct U*0ad023d030 : UObject {
	char bCausedByWorld : 1; // 0x30(0x01)
	char bScaleMomentumByMass : 1; // 0x30(0x01)
	char bRadialDamageVelChange : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float DamageImpulse; // 0x34(0x04)
	float DestructibleImpulse; // 0x38(0x04)
	float DestructibleDamageSpreadScale; // 0x3c(0x04)
	float DamageFalloff; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.MovementComponent
// Size: 0x250 (Inherited: 0x200)
struct UMovementComponent : UActorComponent {
	struct USceneComponent* UpdatedComponent; // 0x200(0x08)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0x208(0x08)
	char pad_210[0x4]; // 0x210(0x04)
	struct FVector Velocity; // 0x214(0x0c)
	char bConstrainToPlane : 1; // 0x220(0x01)
	char bSnapToPlaneAtStart : 1; // 0x220(0x01)
	char pad_220_2 : 6; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	enum class EPlaneConstraintAxisSetting *d76c010af6; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	struct FVector PlaneConstraintNormal; // 0x228(0x0c)
	struct FVector PlaneConstraintOrigin; // 0x234(0x0c)
	char bUpdateOnlyIfRendered : 1; // 0x240(0x01)
	char bAutoUpdateTickRegistration : 1; // 0x240(0x01)
	char bTickBeforeOwner : 1; // 0x240(0x01)
	char bAutoRegisterUpdatedComponent : 1; // 0x240(0x01)
	char pad_240_4 : 4; // 0x240(0x01)
	char pad_241[0xf]; // 0x241(0x0f)

	float *c2ac81da0f(); // Function Engine.MovementComponent.*c2ac81da0f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7dbc
	enum class EPlaneConstraintAxisSetting *b83a90d09d(); // Function Engine.MovementComponent.*b83a90d09d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dae34
	bool *3d7e8f3f5f(); // Function Engine.MovementComponent.*3d7e8f3f5f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc660
	void *0f8844a2ec(); // Function Engine.MovementComponent.*0f8844a2ec // Native|Public|BlueprintCallable // @ game+0x66ee500
	void *db92e1435e(); // Function Engine.MovementComponent.*db92e1435e // Native|Public|BlueprintCallable // @ game+0x66eee68
	float *55451031c8(); // Function Engine.MovementComponent.*55451031c8 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9da8
	struct FVector *852b92179c(); // Function Engine.MovementComponent.*852b92179c // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66ec67c
	struct FVector *164ca92a58(); // Function Engine.MovementComponent.*164ca92a58 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66ec570
	struct FVector *87d489219e(); // Function Engine.MovementComponent.*87d489219e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66dae74
	struct FVector *3d190c2b6f(); // Function Engine.MovementComponent.*3d190c2b6f // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66ec720
	float K2_GetMaxSpeedModifier(); // Function Engine.MovementComponent.K2_GetMaxSpeedModifier // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dfde0
	struct FVector *1d3512d465(); // Function Engine.MovementComponent.*1d3512d465 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d23f0
	bool *9c2738870a(); // Function Engine.MovementComponent.*9c2738870a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e04e8
	struct FVector *d4fa247c58(); // Function Engine.MovementComponent.*d4fa247c58 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66dae4c
	struct APhysicsVolume* *1f50dc4b23(); // Function Engine.MovementComponent.*1f50dc4b23 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dade8
	float K2_GetModifiedMaxSpeed(); // Function Engine.MovementComponent.K2_GetModifiedMaxSpeed // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dfe38
	struct FVector *2b7152691b(); // Function Engine.MovementComponent.*2b7152691b // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d2260
	struct FVector ConstrainLocationToPlane(); // Function Engine.MovementComponent.ConstrainLocationToPlane // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d2328
	struct APhysicsVolume* PhysicsVolumeChanged(); // Function Engine.MovementComponent.PhysicsVolumeChanged // Native|Public // @ game+0xa3d6c4
	enum class EPlaneConstraintAxisSetting *12a8e3120c(); // Function Engine.MovementComponent.*12a8e3120c // Native|Public|BlueprintCallable // @ game+0x66ec444
	struct USceneComponent* *581d945228(); // Function Engine.MovementComponent.*581d945228 // Native|Public|BlueprintCallable // @ game+0x66ed79c
	bool *0b63448c67(); // Function Engine.MovementComponent.*0b63448c67 // Native|Public|BlueprintCallable // @ game+0x66ec4d8
};

// Class Engine.NavMovementComponent
// Size: 0x280 (Inherited: 0x250)
struct UNavMovementComponent : UMovementComponent {
	struct F*ae60ea2542 NavAgentProps; // 0x248(0x20)
	float *2e58ec43d4; // 0x268(0x04)
	char *83fb68c948 : 1; // 0x26c(0x01)
	char bUseAccelerationForPaths : 1; // 0x26c(0x01)
	char bUseFixedBrakingDistanceForPaths : 1; // 0x26c(0x01)
	struct F*060c159331 *a415b23328; // 0x270(0x04)
	char pad_278_3 : 5; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)

	bool *927cff7993(); // Function Engine.NavMovementComponent.*927cff7993 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dca54
	void StopActiveMovement(); // Function Engine.NavMovementComponent.StopActiveMovement // Native|Public|BlueprintCallable // @ game+0x66ee81c
	void *07aed04f02(); // Function Engine.NavMovementComponent.*07aed04f02 // Final|Native|Public|BlueprintCallable // @ game+0x66eee80
	bool *63df202894(); // Function Engine.NavMovementComponent.*63df202894 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc608
	bool IsFalling(); // Function Engine.NavMovementComponent.IsFalling // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc70c
	bool *538e672bae(); // Function Engine.NavMovementComponent.*538e672bae // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc734
	bool *b7c59c950e(); // Function Engine.NavMovementComponent.*b7c59c950e // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dce28
};

// Class Engine.PawnMovementComponent
// Size: 0x290 (Inherited: 0x280)
struct UPawnMovementComponent : UNavMovementComponent {
	struct APawn* *99875154bc; // 0x280(0x08)
	char pad_288[0x8]; // 0x288(0x08)

	bool *ec5c491810(); // Function Engine.PawnMovementComponent.*ec5c491810 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dca2c
	bool *74bbcbd06c(); // Function Engine.PawnMovementComponent.*74bbcbd06c // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66cdfd8
	struct FVector *8efd791461(); // Function Engine.PawnMovementComponent.*8efd791461 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66dab84
	struct FVector *6f20605fa3(); // Function Engine.PawnMovementComponent.*6f20605fa3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d971c
	struct FVector *e1674e808d(); // Function Engine.PawnMovementComponent.*e1674e808d // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66d24b8
	struct FVector K2_GetInputVector(); // Function Engine.PawnMovementComponent.K2_GetInputVector // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66dfdac
	struct APawn* *2d3b0c617b(); // Function Engine.PawnMovementComponent.*2d3b0c617b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dab6c
};

// Class Engine.CharacterMovementComponent
// Size: 0x930 (Inherited: 0x290)
struct UCharacterMovementComponent : UPawnMovementComponent {
	char pad_290[0x8]; // 0x290(0x08)
	struct ACharacter* *479080a547; // 0x298(0x08)
	char bApplyGravityWhileJumping : 1; // 0x2a0(0x01)
	char pad_2A0_1 : 7; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float GravityScale; // 0x2a4(0x04)
	float MaxStepHeight; // 0x2a8(0x04)
	float JumpZVelocity; // 0x2ac(0x04)
	float JumpOffJumpZFactor; // 0x2b0(0x04)
	float *83e8ebe44b; // 0x2b4(0x04)
	float *722c71f33c; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	float *82b606161e; // 0x2c0(0x04)
	float *fdb6771fd8; // 0x2c4(0x04)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	enum class EMovementMode MovementMode; // 0x2d0(0x01)
	bool CustomMovementMode; // 0x2d1(0x01)
	char pad_2D2[0x1e]; // 0x2d2(0x1e)
	float GroundFriction; // 0x2f0(0x04)
	float MaxWalkSpeed; // 0x2f4(0x04)
	float MaxWalkSpeedCrouched; // 0x2f8(0x04)
	float MaxSwimSpeed; // 0x2fc(0x04)
	float MaxFlySpeed; // 0x300(0x04)
	float MaxCustomMovementSpeed; // 0x304(0x04)
	float MaxAcceleration; // 0x308(0x04)
	float BrakingFrictionFactor; // 0x30c(0x04)
	float BrakingFriction; // 0x310(0x04)
	char bUseSeparateBrakingFriction : 1; // 0x314(0x01)
	char pad_314_1 : 7; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	float BrakingDecelerationWalking; // 0x318(0x04)
	float BrakingDecelerationFalling; // 0x31c(0x04)
	float BrakingDecelerationSwimming; // 0x320(0x04)
	float BrakingDecelerationFlying; // 0x324(0x04)
	float AirControl; // 0x328(0x04)
	float AirControlBoostMultiplier; // 0x32c(0x04)
	float AirControlBoostVelocityThreshold; // 0x330(0x04)
	float FallingLateralFriction; // 0x334(0x04)
	float CrouchedHalfHeight; // 0x338(0x04)
	float PronedHalfHeight; // 0x33c(0x04)
	float PronedRadius; // 0x340(0x04)
	float Buoyancy; // 0x344(0x04)
	float PerchRadiusThreshold; // 0x348(0x04)
	float PerchAdditionalHeight; // 0x34c(0x04)
	struct FRotator RotationRate; // 0x350(0x0c)
	char bUseControllerDesiredRotation : 1; // 0x35c(0x01)
	char bOrientRotationToMovement : 1; // 0x35c(0x01)
	char bSweepWhileNavWalking : 1; // 0x35c(0x01)
	char pad_35C_3 : 2; // 0x35c(0x01)
	char *26cb6c84f1 : 1; // 0x35c(0x01)
	char *507ceb7bfc : 1; // 0x35c(0x01)
	char bForceMaxAccel : 1; // 0x35c(0x01)
	char bRunPhysicsWithNoController : 1; // 0x35d(0x01)
	char bForceNextFloorCheck : 1; // 0x35d(0x01)
	char *19469483f8 : 1; // 0x35d(0x01)
	char bCanWalkOffLedges : 1; // 0x35d(0x01)
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x35d(0x01)
	char pad_35D_5 : 2; // 0x35d(0x01)
	char *11b8c860ec : 1; // 0x35d(0x01)
	char *7f0c890fda : 1; // 0x35e(0x01)
	char pad_35E_1 : 7; // 0x35e(0x01)
	char pad_35F[0x1]; // 0x35f(0x01)
	struct USceneComponent* *6d8897b5ca; // 0x360(0x08)
	float MaxOutOfWaterStepHeight; // 0x368(0x04)
	float OutofWaterZ; // 0x36c(0x04)
	float Mass; // 0x370(0x04)
	bool bEnablePhysicsInteraction; // 0x374(0x01)
	bool bTouchForceScaledToMass; // 0x375(0x01)
	bool bPushForceScaledToMass; // 0x376(0x01)
	bool bPushForceUsingZOffset; // 0x377(0x01)
	bool bScalePushForceToVelocity; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	float StandingDownwardForceScale; // 0x37c(0x04)
	float InitialPushForceFactor; // 0x380(0x04)
	float PushForceFactor; // 0x384(0x04)
	float PushForcePointZOffsetFactor; // 0x388(0x04)
	float TouchForceFactor; // 0x38c(0x04)
	float MinTouchForce; // 0x390(0x04)
	float MaxTouchForce; // 0x394(0x04)
	float RepulsionForce; // 0x398(0x04)
	char bForceBraking : 1; // 0x39c(0x01)
	char pad_39C_1 : 7; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	float CrouchedSpeedMultiplier; // 0x3a0(0x04)
	float UpperImpactNormalScale; // 0x3a4(0x04)
	struct FVector Acceleration; // 0x3a8(0x0c)
	struct FVector *eabc6b4d63; // 0x3b4(0x0c)
	struct FQuat *e96b7385d6; // 0x3c0(0x10)
	struct FVector *fed5f456bc; // 0x3d0(0x0c)
	float *8259a7a9d5; // 0x3dc(0x04)
	float *02e850e002; // 0x3e0(0x04)
	float *b407c9150e; // 0x3e4(0x04)
	struct FVector *3d04d1faed; // 0x3e8(0x0c)
	struct FVector *39b9fae469; // 0x3f4(0x0c)
	float *b94abc4f0d; // 0x400(0x04)
	char pad_404[0x8]; // 0x404(0x08)
	float MaxSimulationTimeStep; // 0x40c(0x04)
	int32 MaxSimulationIterations; // 0x410(0x04)
	float MaxDepenetrationWithGeometry; // 0x414(0x04)
	float MaxDepenetrationWithGeometryAsProxy; // 0x418(0x04)
	float MaxDepenetrationWithPawn; // 0x41c(0x04)
	float MaxDepenetrationWithPawnAsProxy; // 0x420(0x04)
	float *1d1c9d5d1a; // 0x424(0x04)
	float *4157bdca5f; // 0x428(0x04)
	float *ba1516f1be; // 0x42c(0x04)
	float *9f28b14cad; // 0x430(0x04)
	float *66dc603436; // 0x434(0x04)
	float *07991836b8; // 0x438(0x04)
	float *64d8e8110c; // 0x43c(0x04)
	float *5ef0e2e35c; // 0x440(0x04)
	enum class ENetworkSmoothingMode NetworkSmoothingMode; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	float *92e20fcab4; // 0x448(0x04)
	float *4fab791991; // 0x44c(0x04)
	float *86042875b9; // 0x450(0x04)
	float *188976dd19; // 0x454(0x04)
	float LedgeCheckThreshold; // 0x458(0x04)
	float JumpOutOfWaterPitch; // 0x45c(0x04)
	struct F*29683cadec CurrentFloor; // 0x460(0x98)
	enum class EMovementMode DefaultLandMovementMode; // 0x4f8(0x01)
	enum class EMovementMode DefaultWaterMovementMode; // 0x4f9(0x01)
	enum class EMovementMode *faf788f025; // 0x4fa(0x01)
	char pad_4FB[0x1]; // 0x4fb(0x01)
	char bMaintainHorizontalGroundVelocity : 1; // 0x4fc(0x01)
	char bImpartBaseVelocityX : 1; // 0x4fc(0x01)
	char bImpartBaseVelocityY : 1; // 0x4fc(0x01)
	char bImpartBaseVelocityZ : 1; // 0x4fc(0x01)
	char bImpartBaseAngularVelocity : 1; // 0x4fc(0x01)
	char bJustTeleported : 1; // 0x4fc(0x01)
	char *70c3d30791 : 1; // 0x4fc(0x01)
	char *acfd118ae1 : 1; // 0x4fc(0x01)
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x4fd(0x01)
	char bNotifyApex : 1; // 0x4fd(0x01)
	char *4321e5bacf : 1; // 0x4fd(0x01)
	char bWantsToCrouch : 1; // 0x4fd(0x01)
	char bCrouchMaintainsBaseLocation : 1; // 0x4fd(0x01)
	char pad_4FD_5 : 3; // 0x4fd(0x01)
	char pad_4FE[0x2]; // 0x4fe(0x02)
	enum class EStanceMode StanceMode; // 0x500(0x01)
	enum class EStanceMode WantsToStanceMode; // 0x501(0x01)
	char pad_502[0x2]; // 0x502(0x02)
	char bIgnoreBaseRotation : 1; // 0x504(0x01)
	char *8670edea6f : 1; // 0x504(0x01)
	char bAlwaysCheckFloor : 1; // 0x504(0x01)
	char bUseFlatBaseForFloorChecks : 1; // 0x504(0x01)
	char *e403872825 : 1; // 0x504(0x01)
	char *b1ee1c3f93 : 1; // 0x504(0x01)
	char bUseRVOAvoidance : 1; // 0x504(0x01)
	char bRequestedMoveUseAcceleration : 1; // 0x504(0x01)
	char pad_505[0xf]; // 0x505(0x0f)
	char *fe38a4d374 : 1; // 0x514(0x01)
	char *b6480ff259 : 1; // 0x514(0x01)
	char *4683070ca7 : 1; // 0x514(0x01)
	char pad_514_3 : 2; // 0x514(0x01)
	char bProjectNavMeshWalking : 1; // 0x514(0x01)
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x514(0x01)
	char pad_514_7 : 1; // 0x514(0x01)
	char pad_515[0x13]; // 0x515(0x13)
	float AvoidanceConsiderationRadius; // 0x528(0x04)
	struct FVector *3430170cc5; // 0x52c(0x0c)
	int32 AvoidanceUID; // 0x538(0x04)
	struct F*c4bee3ea12 AvoidanceGroup; // 0x53c(0x04)
	struct F*c4bee3ea12 GroupsToAvoid; // 0x540(0x04)
	struct F*c4bee3ea12 GroupsToIgnore; // 0x544(0x04)
	float AvoidanceWeight; // 0x548(0x04)
	struct FVector *914bfba552; // 0x54c(0x0c)
	char pad_558[0xa8]; // 0x558(0xa8)
	float NavMeshProjectionInterval; // 0x600(0x04)
	float *8118c9d009; // 0x604(0x04)
	float NavMeshProjectionInterpSpeed; // 0x608(0x04)
	float NavMeshProjectionHeightScaleUp; // 0x60c(0x04)
	float NavMeshProjectionHeightScaleDown; // 0x610(0x04)
	float NavWalkingFloorDistTolerance; // 0x614(0x04)
	char pad_618[0xb0]; // 0x618(0xb0)
	struct F*4bffd29219 *a41d0f03b5; // 0x6c8(0x58)
	char pad_720[0x10]; // 0x720(0x10)
	float *035b3a9f9f; // 0x730(0x04)
	char pad_734[0x4]; // 0x734(0x04)
	struct FRootMotionSourceGroup *c7539c9e11; // 0x738(0x100)
	char pad_838[0x98]; // 0x838(0x98)
	struct F*515b98ffe7 *bd0a57294d; // 0x8d0(0x40)
	struct FVector *4c2486a6db; // 0x910(0x0c)
	bool *5fec1080f0; // 0x91c(0x01)
	char pad_91D[0x3]; // 0x91d(0x03)
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x920(0x01)
	char pad_920_1 : 7; // 0x920(0x01)
	char pad_921[0xf]; // 0x921(0x0f)

	float *9d924ae134(); // Function Engine.CharacterMovementComponent.*9d924ae134 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9d7c
	struct ACharacter* *44975c26ea(); // Function Engine.CharacterMovementComponent.*44975c26ea // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6ce0
	struct FVector *b93a5543f3(); // Function Engine.CharacterMovementComponent.*b93a5543f3 // Net|Native|Event|Protected|NetServer|HasDefaults|NetValidate // @ game+0x66ee0a4
	int32 *4ed3e42e4c(); // Function Engine.CharacterMovementComponent.*4ed3e42e4c // Final|Native|Public|BlueprintCallable // @ game+0x66ea928
	float *db0f1d6afd(); // Function Engine.CharacterMovementComponent.*db0f1d6afd // Final|Native|Public|BlueprintCallable // @ game+0x66ede00
	struct FVector *ca70c823be(); // Function Engine.CharacterMovementComponent.*ca70c823be // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d79e0
	bool AddImpulse(); // Function Engine.CharacterMovementComponent.AddImpulse // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66cdc4c
	struct F*29683cadec *f667569445(); // Function Engine.CharacterMovementComponent.*f667569445 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66df7bc
	int32 *e102887b62(); // Function Engine.CharacterMovementComponent.*e102887b62 // Final|Native|Public|BlueprintCallable // @ game+0x66ea800
	void DisableMovement(); // Function Engine.CharacterMovementComponent.DisableMovement // Native|Public|BlueprintCallable // @ game+0x66d316c
	void *e27d511e10(); // Function Engine.CharacterMovementComponent.*e27d511e10 // Native|Public|BlueprintCallable // @ game+0x66cf9c4
	struct F*c4bee3ea12 *97cd786904(); // Function Engine.CharacterMovementComponent.*97cd786904 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66e8400
	struct FVector *f54e2f4333(); // Function Engine.CharacterMovementComponent.*f54e2f4333 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d8928
	float *8ac3f8d562(); // Function Engine.CharacterMovementComponent.*8ac3f8d562 // Native|Public|BlueprintCallable // @ game+0x66cf178
	float *c2656bf395(); // Function Engine.CharacterMovementComponent.*c2656bf395 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9d24
	struct F*c4bee3ea12 *0c71812783(); // Function Engine.CharacterMovementComponent.*0c71812783 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66ea88c
	float *4db894fcba(); // Function Engine.CharacterMovementComponent.*4db894fcba // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dbb18
	float *f3efc6a197(); // Function Engine.CharacterMovementComponent.*f3efc6a197 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59be0e8
	int32 *865b67218d(); // Function Engine.CharacterMovementComponent.*865b67218d // Final|Native|Public|BlueprintCallable // @ game+0x66e8374
	float *e383b11c62(); // Function Engine.CharacterMovementComponent.*e383b11c62 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66e00d4
	struct F*29683cadec *55d6bf611b(); // Function Engine.CharacterMovementComponent.*55d6bf611b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66df330
	bool *44e088037d(); // Function Engine.CharacterMovementComponent.*44e088037d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dca54
	struct UPrimitiveComponent* *52d57aeb3a(); // Function Engine.CharacterMovementComponent.*52d57aeb3a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9edc
	float *cbcc333929(); // Function Engine.CharacterMovementComponent.*cbcc333929 // Final|Native|Public|BlueprintCallable // @ game+0x66ec940
	bool *5eaed47ac8(); // Function Engine.CharacterMovementComponent.*5eaed47ac8 // Final|Native|Public|BlueprintCallable // @ game+0x66e82e0
	float *e2444abdb4(); // Function Engine.CharacterMovementComponent.*e2444abdb4 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9cf8
	float *7e042cca5d(); // Function Engine.CharacterMovementComponent.*7e042cca5d // Final|Native|Public|BlueprintCallable // @ game+0x66ede98
	bool *e948ff09df(); // Function Engine.CharacterMovementComponent.*e948ff09df // Native|Public|BlueprintCallable // @ game+0x66ebd98
	float *a0ef2db392(); // Function Engine.CharacterMovementComponent.*a0ef2db392 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d5f98
	struct FHitResult CapsuleTouched(); // Function Engine.CharacterMovementComponent.CapsuleTouched // Native|Protected|HasOutParms // @ game+0x66cf57c
	struct FVector AddForce(); // Function Engine.CharacterMovementComponent.AddForce // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66cd608
	struct F*c4bee3ea12 *0fddc8929b(); // Function Engine.CharacterMovementComponent.*0fddc8929b // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66ea9b4
	float *98562927be(); // Function Engine.CharacterMovementComponent.*98562927be // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9d50
	float *1471005205(); // Function Engine.CharacterMovementComponent.*1471005205 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dabdc
	float *f6cb9100e3(); // Function Engine.CharacterMovementComponent.*f6cb9100e3 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dfe0c
	bool *8faddce97d(); // Function Engine.CharacterMovementComponent.*8faddce97d // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66dce78
};

// Class Engine.BlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintFunctionLibrary : UObject {

	struct FStringAssetReference MakeStringAssetReference(); // Function Engine.BlueprintFunctionLibrary.MakeStringAssetReference // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67232c8
};

// Class Engine.StaticMeshActor
// Size: 0x408 (Inherited: 0x3f8)
struct AStaticMeshActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x3f8(0x08)
	bool bStaticMeshReplicateMovement; // 0x400(0x01)
	enum class ENavDataGatheringMode *44a20f5dab; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
};

// Class Engine.HUD
// Size: 0x4e0 (Inherited: 0x3f8)
struct AHUD : AActor {
	struct APlayerController* PlayerOwner; // 0x3f8(0x08)
	char bLostFocusPaused : 1; // 0x400(0x01)
	char bShowHUD : 1; // 0x400(0x01)
	char bShowDebugInfo : 1; // 0x400(0x01)
	char bShowHitBoxDebugInfo : 1; // 0x400(0x01)
	char bShowOverlays : 1; // 0x400(0x01)
	char bEnableDebugTextShadow : 1; // 0x400(0x01)
	char pad_400_6 : 2; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct TArray<struct AActor*> *38b709293a; // 0x408(0x10)
	char pad_418[0x8]; // 0x418(0x08)
	struct TArray<struct FName> DebugDisplay; // 0x420(0x10)
	struct TArray<struct FName> ToggledDebugCategories; // 0x430(0x10)
	struct UCanvas* Canvas; // 0x440(0x08)
	struct UCanvas* *f5943f676e; // 0x448(0x08)
	struct TArray<struct F*ed6dead525> *f79181af34; // 0x450(0x10)
	struct UClass* *6e615585cd; // 0x460(0x08)
	struct AActor* *fcbd63a8dd; // 0x468(0x08)
	char pad_470[0x70]; // 0x470(0x70)

	struct FVector2D DrawTexture(); // Function Engine.HUD.DrawTexture // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66d433c
	struct FName ReceiveHitBoxEndCursorOver(); // Function Engine.HUD.ReceiveHitBoxEndCursorOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22c9a0
	bool *62432812ee(); // Function Engine.HUD.*62432812ee // Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x66cd194
	struct APawn* *34fff8859f(); // Function Engine.HUD.*34fff8859f // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x66da8e8
	struct FName ReceiveHitBoxClick(); // Function Engine.HUD.ReceiveHitBoxClick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct FName ShowDebug(); // Function Engine.HUD.ShowDebug // Exec|Native|Public // @ game+0x66ee150
	bool *f44a827629(); // Function Engine.HUD.*f44a827629 // Final|Native|Public|BlueprintCallable // @ game+0x66d484c
	struct FVector Deproject(); // Function Engine.HUD.Deproject // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d2b18
	struct FName ReceiveHitBoxRelease(); // Function Engine.HUD.ReceiveHitBoxRelease // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22c9a0
	bool *0779b85564(); // Function Engine.HUD.*0779b85564 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66d4084
	void ShowHUD(); // Function Engine.HUD.ShowHUD // Exec|Native|Public // @ game+0x5909df4
	int32 ReceiveDrawHUD(); // Function Engine.HUD.ReceiveDrawHUD // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct APlayerController* *f76c6f11ba(); // Function Engine.HUD.*f76c6f11ba // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x59df22c
	int32 AddHitBox(); // Function Engine.HUD.AddHitBox // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66cda84
	struct FName ShowDebugToggleSubCategory(); // Function Engine.HUD.ShowDebugToggleSubCategory // Final|Exec|Native|Public // @ game+0x66ee2a4
	struct UClass* ShowDebugForReticleTargetToggle(); // Function Engine.HUD.ShowDebugForReticleTargetToggle // Final|Exec|Native|Public // @ game+0x66ee1e4
	bool *c08cd3997f(); // Function Engine.HUD.*c08cd3997f // Final|Native|Public|BlueprintCallable // @ game+0x66d38c0
	struct FVector2D *9b849b7b63(); // Function Engine.HUD.*9b849b7b63 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66d3458
	struct FLinearColor *8452ca1193(); // Function Engine.HUD.*8452ca1193 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66d3b38
	float *cfe6b2110e(); // Function Engine.HUD.*cfe6b2110e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66d322c
	bool *957a89d132(); // Function Engine.HUD.*957a89d132 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66d5b58
	float *c2fb95ac2b(); // Function Engine.HUD.*c2fb95ac2b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66d3ea8
	bool *50b363f367(); // Function Engine.HUD.*50b363f367 // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x66e40c8
	float *6ae72bf9b6(); // Function Engine.HUD.*6ae72bf9b6 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66db5d0
	struct FVector Project(); // Function Engine.HUD.Project // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66e3c6c
	struct FName ReceiveHitBoxBeginCursorOver(); // Function Engine.HUD.ReceiveHitBoxBeginCursorOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x22c9a0
	void *82ab454e02(); // Function Engine.HUD.*82ab454e02 // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x66e3f14
};

// Class Engine.Brush
// Size: 0x430 (Inherited: 0x3f8)
struct ABrush : AActor {
	enum class *e0edfbd9de *8e17fb69f0; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	struct FColor BrushColor; // 0x3fc(0x04)
	int32 PolyFlags; // 0x400(0x04)
	char *7d8414377d : 1; // 0x404(0x01)
	char *f77657c03b : 1; // 0x404(0x01)
	char *8751e5918e : 1; // 0x404(0x01)
	char *ac8f2c7a93 : 1; // 0x404(0x01)
	char pad_404_4 : 4; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	struct UModel* Brush; // 0x408(0x08)
	struct UBrushComponent* BrushComponent; // 0x410(0x08)
	char *98b8ef6f05 : 1; // 0x418(0x01)
	char pad_418_1 : 7; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct TArray<struct F*26d590dcc1> *1211ef514c; // 0x420(0x10)
};

// Class Engine.Volume
// Size: 0x430 (Inherited: 0x430)
struct AVolume : ABrush {
};

// Class Engine.AnimNotify
// Size: 0x40 (Inherited: 0x30)
struct UAnimNotify : UObject {
	char pad_30[0x10]; // 0x30(0x10)

	bool Received_Notify(); // Function Engine.AnimNotify.Received_Notify // Event|Public|BlueprintEvent|Const // @ game+0x22c9a0
	struct FString GetNotifyName(); // Function Engine.AnimNotify.GetNotifyName // Native|Event|Public|BlueprintEvent|Const // @ game+0x66da14c
};

// Class Engine.AnimNotify_PlayParticleEffect
// Size: 0x80 (Inherited: 0x40)
struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	struct UParticleSystem* PSTemplate; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	char pad_60[0x10]; // 0x60(0x10)
	char Attached : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FName SocketName; // 0x78(0x08)
};

// Class Engine.AnimNotifyState
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotifyState : UObject {
	char pad_30[0x8]; // 0x30(0x08)

	bool Received_NotifyTick(); // Function Engine.AnimNotifyState.Received_NotifyTick // Event|Public|BlueprintEvent|Const // @ game+0x22c9a0
	bool Received_NotifyEnd(); // Function Engine.AnimNotifyState.Received_NotifyEnd // Event|Public|BlueprintEvent|Const // @ game+0x22c9a0
	bool Received_NotifyBegin(); // Function Engine.AnimNotifyState.Received_NotifyBegin // Event|Public|BlueprintEvent|Const // @ game+0x22c9a0
	struct FString GetNotifyName(); // Function Engine.AnimNotifyState.GetNotifyName // Native|Event|Public|BlueprintEvent|Const // @ game+0x66da14c
};

// Class Engine.DataTable
// Size: 0x88 (Inherited: 0x30)
struct UDataTable : UObject {
	struct UScriptStruct* *eb864fa0b1; // 0x30(0x08)
	char pad_38[0x50]; // 0x38(0x50)
};

// Class Engine.Character
// Size: 0x870 (Inherited: 0x460)
struct ACharacter : APawn {
	float JumpKeyHoldTime; // 0x460(0x04)
	char pad_464[0xc]; // 0x464(0x0c)
	struct FQuat *9c95665d3c; // 0x470(0x10)
	struct USkeletalMeshComponent* Mesh; // 0x480(0x08)
	char bPressedJump : 1; // 0x488(0x01)
	char *0a07f40284 : 1; // 0x488(0x01)
	char *883f2946bb : 1; // 0x488(0x01)
	char *1bbc584058 : 1; // 0x488(0x01)
	char *5e33d65440 : 1; // 0x488(0x01)
	char *2551a88bff : 1; // 0x488(0x01)
	char *0da443813f : 1; // 0x488(0x01)
	char *3a904bf932 : 1; // 0x488(0x01)
	char bWasJumping : 1; // 0x489(0x01)
	char pad_489_1 : 7; // 0x489(0x01)
	char pad_48A[0x2]; // 0x48a(0x02)
	int32 JumpCurrentCount; // 0x48c(0x04)
	struct UCapsuleComponent* ProneCapsuleComponent; // 0x490(0x08)
	struct UCapsuleComponent* CapsuleComponent; // 0x498(0x08)
	struct FVector *05ff5e346b; // 0x4a0(0x0c)
	float *3ac7aa90de; // 0x4ac(0x04)
	bool *33347614fc; // 0x4b0(0x01)
	bool *95854913ff; // 0x4b1(0x01)
	char pad_4B2[0x2]; // 0x4b2(0x02)
	float JumpMaxHoldTime; // 0x4b4(0x04)
	struct F*d11a7f4b1f *4233f49e69; // 0x4b8(0x48)
	float CrouchedEyeHeight; // 0x500(0x04)
	char bIsCrouched : 1; // 0x504(0x01)
	char pad_504_1 : 7; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
	struct F*d11a7f4b1f *e8a3c062a0; // 0x508(0x48)
	int32 JumpMaxCount; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct UCharacterMovementComponent* CharacterMovement; // 0x558(0x08)
	float *e4eda111d4; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct FMulticastDelegate OnReachedJumpApex; // 0x568(0x10)
	char pad_578[0x10]; // 0x578(0x10)
	struct FMulticastDelegate MovementModeChangedDelegate; // 0x588(0x10)
	struct FMulticastDelegate OnCharacterMovementUpdated; // 0x598(0x10)
	struct FRootMotionSourceGroup *eae265d390; // 0x5a8(0x100)
	char pad_6A8[0x8]; // 0x6a8(0x08)
	struct F*515b98ffe7 *f5b54daaa1; // 0x6b0(0x40)
	struct TArray<struct F*2a96cdbee5> *f84fd203c5; // 0x6f0(0x10)
	struct F*0e21200897 *882a7f71ac; // 0x700(0x160)
	char pad_860[0x10]; // 0x860(0x10)

	bool *fb2473c60b(); // Function Engine.Character.*fb2473c60b // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x8e9150
	bool *b022a0a31e(); // Function Engine.Character.*b022a0a31e // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x66e6418
	void OnRep_RootMotion(); // Function Engine.Character.OnRep_RootMotion // Final|Native|Public // @ game+0x8e8b64
	struct FRotator *af5e11930f(); // Function Engine.Character.*af5e11930f // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66cf06c
	bool *cc63ed914a(); // Function Engine.Character.*cc63ed914a // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x66e568c
	float OnWalkingOffLedge(); // Function Engine.Character.OnWalkingOffLedge // Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0xc830a8
	bool Crouch(); // Function Engine.Character.Crouch // Native|Public|BlueprintCallable // @ game+0x66d2a4c
	bool *6a0e5b0286(); // Function Engine.Character.*6a0e5b0286 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dcc9c
	void *7e163b451c(); // Function Engine.Character.*7e163b451c // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66cff6c
	bool *221e5b49fe(); // Function Engine.Character.*221e5b49fe // Native|Public|BlueprintCallable // @ game+0x66ecc54
	void Jump(); // Function Engine.Character.Jump // Native|Public|BlueprintCallable // @ game+0x66dcf50
	float *ab9f13facc(); // Function Engine.Character.*ab9f13facc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d5fdc
	float *39955aa1ce(); // Function Engine.Character.*39955aa1ce // Native|Public|BlueprintCallable // @ game+0x66e3314
	struct FRotator *ca090c119f(); // Function Engine.Character.*ca090c119f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d61a4
	bool *1ce0ccef36(); // Function Engine.Character.*1ce0ccef36 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x66e60d4
	bool *22fdf8e2aa(); // Function Engine.Character.*22fdf8e2aa // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x66e5c0c
	bool CanJump(); // Function Engine.Character.CanJump // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66cf440
	void *ae290b6270(); // Function Engine.Character.*ae290b6270 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66cff54
	float K2_OnEndCrouch(); // Function Engine.Character.K2_OnEndCrouch // Event|Public|BlueprintEvent // @ game+0x22c9a0
	bool *185bf39c1e(); // Function Engine.Character.*185bf39c1e // Native|Public|BlueprintCallable // @ game+0x66ef2dc
	float ClientAckGoodMove(); // Function Engine.Character.ClientAckGoodMove // Net|Native|Event|Public|NetClient // @ game+0x7a7778
	bool *940da471e0(); // Function Engine.Character.*940da471e0 // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x66cfba8
	void OnRep_ReplicatedBasedMovement(); // Function Engine.Character.OnRep_ReplicatedBasedMovement // Native|Public // @ game+0x692050
	float K2_UpdateCustomMovement(); // Function Engine.Character.K2_UpdateCustomMovement // Event|Public|BlueprintEvent // @ game+0x22c9a0
	bool LaunchCharacter(); // Function Engine.Character.LaunchCharacter // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e21dc
	bool K2_OnMovementModeChanged(); // Function Engine.Character.K2_OnMovementModeChanged // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct FVector *2442a24805(); // Function Engine.Character.*2442a24805 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d61ec
	void *dd8777b92b(); // Function Engine.Character.*dd8777b92b // Net|NetReliableNative|Event|Public|NetClient // @ game+0x81db2c
	bool IsJumpProvidingForce(); // Function Engine.Character.IsJumpProvidingForce // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x597aaa8
	struct UAnimMontage* *3f5ff0d280(); // Function Engine.Character.*3f5ff0d280 // Native|Public|BlueprintCallable // @ game+0x66eeb2c
	struct UAnimMontage* *109287e492(); // Function Engine.Character.*109287e492 // Final|Native|Public|BlueprintCallable // @ game+0x66d7a08
	void OnJumped(); // Function Engine.Character.OnJumped // Native|Event|Public|BlueprintEvent // @ game+0x59c2618
	bool *74ba8d35b7(); // Function Engine.Character.*74ba8d35b7 // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x8e84d0
	void *f183d7ae68(); // Function Engine.Character.*f183d7ae68 // Native|Public|BlueprintCallable // @ game+0x66eee38
	bool ServerMove(); // Function Engine.Character.ServerMove // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x66e4d10
	bool CanJumpInternal(); // Function Engine.Character.CanJumpInternal // Native|Event|Protected|BlueprintEvent|Const // @ game+0x66cf464
	bool *426bbcfd1b(); // Function Engine.Character.*426bbcfd1b // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x8e52fc
	struct FHitResult OnLanded(); // Function Engine.Character.OnLanded // Event|Public|HasOutParms|BlueprintEvent // @ game+0x22c9a0
	bool *1add8d4ff4(); // Function Engine.Character.*1add8d4ff4 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x66e510c
	bool OnLaunched(); // Function Engine.Character.OnLaunched // Event|Public|HasDefaults|BlueprintEvent // @ game+0x22c9a0
	float K2_OnStartCrouch(); // Function Engine.Character.K2_OnStartCrouch // Event|Public|BlueprintEvent // @ game+0x22c9a0
	bool *7f16fa6b8f(); // Function Engine.Character.*7f16fa6b8f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dcc78
	void OnRep_IsCrouched(); // Function Engine.Character.OnRep_IsCrouched // Native|Public // @ game+0x59545ec
};

// Class Engine.Controller
// Size: 0x478 (Inherited: 0x3f8)
struct AController : AActor {
	char pad_3F8[0x10]; // 0x3f8(0x10)
	struct FName StateName; // 0x408(0x08)
	struct USceneComponent* TransformComponent; // 0x410(0x08)
	struct APawn* Pawn; // 0x418(0x08)
	char pad_420[0x8]; // 0x420(0x08)
	struct APlayerState* PlayerState; // 0x428(0x08)
	char *ac76c176b5 : 1; // 0x430(0x01)
	char *8f126e4c4b : 1; // 0x430(0x01)
	char pad_430_2 : 6; // 0x430(0x01)
	char pad_431[0x1f]; // 0x431(0x1f)
	struct ACharacter* Character; // 0x450(0x08)
	char pad_458[0x4]; // 0x458(0x04)
	struct FRotator *67a18bfbf4; // 0x45c(0x0c)
	struct FMulticastDelegate OnInstigatedAnyDamage; // 0x468(0x10)

	void OnRep_PlayerState(); // Function Engine.Controller.OnRep_PlayerState // Native|Public // @ game+0x5998220
	bool *cfc621cd2f(); // Function Engine.Controller.*cfc621cd2f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dcc5c
	struct FRotator GetControlRotation(); // Function Engine.Controller.GetControlRotation // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7554
	bool *4a6a8f3046(); // Function Engine.Controller.*4a6a8f3046 // Native|Public|BlueprintCallable // @ game+0x66ead0c
	void OnRep_Pawn(); // Function Engine.Controller.OnRep_Pawn // Native|Public // @ game+0xa2c154
	struct FRotator *2c0d9f2569(); // Function Engine.Controller.*2c0d9f2569 // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x66d14b0
	void StopMovement(); // Function Engine.Controller.StopMovement // Native|Public|BlueprintCallable // @ game+0x66eee50
	bool *7e3667efd8(); // Function Engine.Controller.*7e3667efd8 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc8e4
	bool *8e4ab02dd2(); // Function Engine.Controller.*8e4ab02dd2 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc878
	bool *ec5c491810(); // Function Engine.Controller.*ec5c491810 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc9dc
	void *21b6505060(); // Function Engine.Controller.*21b6505060 // Native|Public|BlueprintCallable // @ game+0x66e43f8
	bool *e13b76f42a(); // Function Engine.Controller.*e13b76f42a // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66e2460
	struct AActor* *3dcfe68cdd(); // Function Engine.Controller.*3dcfe68cdd // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dbd1c
	bool *78d24b5032(); // Function Engine.Controller.*78d24b5032 // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0xc7f69c
	struct FRotator *ea60ba9b64(); // Function Engine.Controller.*ea60ba9b64 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e9c9c
	struct APawn* K2_GetPawn(); // Function Engine.Controller.K2_GetPawn // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dfe64
	bool *c997c1061d(); // Function Engine.Controller.*c997c1061d // Native|Public|BlueprintCallable // @ game+0x66eac74
	void *bdd7417b98(); // Function Engine.Controller.*bdd7417b98 // Native|Public|BlueprintCallable // @ game+0x66e4410
	struct APlayerController* *5d41444446(); // Function Engine.Controller.*5d41444446 // Final|Native|Public|BlueprintCallable // @ game+0x66cf7d0
	struct FRotator *b9246aa8a1(); // Function Engine.Controller.*b9246aa8a1 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7b14
	void *00bc40e59f(); // Function Engine.Controller.*00bc40e59f // Native|Public|BlueprintCallable // @ game+0x66e4428
	struct APawn* Possess(); // Function Engine.Controller.Possess // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x59306f4
	bool *4efb158107(); // Function Engine.Controller.*4efb158107 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc8a0
	void *0b8dd02f61(); // Function Engine.Controller.*0b8dd02f61 // Native|Public|BlueprintCallable // @ game+0x66cf9c4
	struct AActor* ReceiveInstigatedAnyDamage(); // Function Engine.Controller.ReceiveInstigatedAnyDamage // BlueprintAuthorityOnly|Event|Protected|BlueprintEvent // @ game+0x22c9a0
};

// Class Engine.SpringArmComponent
// Size: 0x500 (Inherited: 0x480)
struct USpringArmComponent : USceneComponent {
	float TargetArmLength; // 0x478(0x04)
	struct FVector SocketOffset; // 0x47c(0x0c)
	struct FVector TargetOffset; // 0x488(0x0c)
	float ProbeSize; // 0x494(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x498(0x01)
	char bDoCollisionTest : 1; // 0x49c(0x01)
	char bUsePawnControlRotation : 1; // 0x49c(0x01)
	char bInheritPitch : 1; // 0x49c(0x01)
	char bInheritYaw : 1; // 0x49c(0x01)
	char bInheritRoll : 1; // 0x49c(0x01)
	char bLockPitchLag : 1; // 0x49c(0x01)
	char bLockYawLag : 1; // 0x49c(0x01)
	char bLockRollLag : 1; // 0x49c(0x01)
	char bEnableCameraLag : 1; // 0x49d(0x01)
	char bEnableCameraRotationLag : 1; // 0x49d(0x01)
	char bUseCameraLagSubstepping : 1; // 0x49d(0x01)
	char bDrawDebugLagMarkers : 1; // 0x49d(0x01)
	float CameraLagSpeed; // 0x4a0(0x04)
	float CameraRotationLagSpeed; // 0x4a4(0x04)
	float CameraLagMaxTimeStep; // 0x4a8(0x04)
	float CameraLagMaxDistance; // 0x4ac(0x04)
	char pad_4B2[0x4e]; // 0x4b2(0x4e)
};

// Class Engine.PlayerController
// Size: 0x7b0 (Inherited: 0x478)
struct APlayerController : AController {
	struct UPlayer* Player; // 0x478(0x08)
	char pad_480[0x8]; // 0x480(0x08)
	struct APawn* *b84c005177; // 0x488(0x08)
	struct U*56292a4ba0* *b61860ece1; // 0x490(0x08)
	char pad_498[0x8]; // 0x498(0x08)
	struct AHUD* *ae70eed463; // 0x4a0(0x08)
	struct APlayerCameraManager* PlayerCameraManager; // 0x4a8(0x08)
	struct UClass* PlayerCameraManagerClass; // 0x4b0(0x08)
	bool *2381123a8f; // 0x4b8(0x01)
	char pad_4B9[0x3]; // 0x4b9(0x03)
	struct FRotator TargetViewRotation; // 0x4bc(0x0c)
	char pad_4C8[0xc]; // 0x4c8(0x0c)
	float SmoothTargetViewRotationSpeed; // 0x4d4(0x04)
	struct TArray<struct AActor*> *8954a8e936; // 0x4d8(0x10)
	char pad_4E8[0x4]; // 0x4e8(0x04)
	float *c35bd652f0; // 0x4ec(0x04)
	struct FVector *87054d570e; // 0x4f0(0x0c)
	struct FRotator *648c282ed2; // 0x4fc(0x0c)
	int32 *b6892fc048; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct UCheatManager* CheatManager; // 0x510(0x08)
	struct UClass* CheatClass; // 0x518(0x08)
	struct UPlayerInput* PlayerInput; // 0x520(0x08)
	struct TArray<struct F*444f71f5b9> *a23dbcc48d; // 0x528(0x10)
	char pad_538[0x90]; // 0x538(0x90)
	char pad_5C8_0 : 3; // 0x5c8(0x01)
	char bPlayerIsWaiting : 1; // 0x5c8(0x01)
	char pad_5C8_4 : 4; // 0x5c8(0x01)
	char pad_5C9[0x3]; // 0x5c9(0x03)
	bool *ed1b53c175; // 0x5cc(0x01)
	char pad_5CD[0x3b]; // 0x5cd(0x3b)
	struct UNetConnection* *a47c378a48; // 0x608(0x08)
	struct UNetConnection* NetConnection; // 0x610(0x08)
	char pad_618[0xc]; // 0x618(0x0c)
	float InputYawScale; // 0x624(0x04)
	float InputPitchScale; // 0x628(0x04)
	float InputRollScale; // 0x62c(0x04)
	char bShowMouseCursor : 1; // 0x630(0x01)
	char bEnableClickEvents : 1; // 0x630(0x01)
	char bEnableTouchEvents : 1; // 0x630(0x01)
	char bEnableMouseOverEvents : 1; // 0x630(0x01)
	char bEnableTouchOverEvents : 1; // 0x630(0x01)
	char bForceFeedbackEnabled : 1; // 0x630(0x01)
	char pad_630_6 : 2; // 0x630(0x01)
	char pad_631[0x7]; // 0x631(0x07)
	struct TArray<struct FKey> ClickEventKeys; // 0x638(0x10)
	enum class EMouseCursor DefaultMouseCursor; // 0x648(0x01)
	enum class EMouseCursor CurrentMouseCursor; // 0x649(0x01)
	enum class ECollisionChannel DefaultClickTraceChannel; // 0x64a(0x01)
	enum class ECollisionChannel CurrentClickTraceChannel; // 0x64b(0x01)
	float HitResultTraceDistance; // 0x64c(0x04)
	char pad_650[0x80]; // 0x650(0x80)
	struct U*89f9a84286* *d266a16c01; // 0x6d0(0x08)
	char pad_6D8_0 : 3; // 0x6d8(0x01)
	char bShouldPerformFullTickWhenPaused : 1; // 0x6d8(0x01)
	char pad_6D8_4 : 4; // 0x6d8(0x01)
	char pad_6D9[0x17]; // 0x6d9(0x17)
	struct UTouchInterface* *703c33e737; // 0x6f0(0x08)
	char pad_6F8[0x40]; // 0x6f8(0x40)
	struct ASpectatorPawn* SpectatorPawn; // 0x738(0x08)
	struct FVector SpawnLocation; // 0x740(0x0c)
	char pad_74C[0x4]; // 0x74c(0x04)
	bool *d0584e6155; // 0x750(0x01)
	char pad_751[0x1]; // 0x751(0x01)
	uint16 *040aa881fb; // 0x752(0x02)
	uint16 *d1b605cbb0; // 0x754(0x02)
	char pad_756[0x2]; // 0x756(0x02)
	struct AActor* *164573ddac; // 0x758(0x08)
	struct AActor* *dd0398ab0a; // 0x760(0x08)
	char pad_768[0x48]; // 0x768(0x48)

	bool *9bc79729ce(); // Function Engine.PlayerController.*9bc79729ce // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7de8
	struct AHUD* *6db76a3a17(); // Function Engine.PlayerController.*6db76a3a17 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc04af0
	struct UTouchInterface* *1bb1630d13(); // Function Engine.PlayerController.*1bb1630d13 // Native|Public|BlueprintCallable // @ game+0x66ccd44
	struct ASpectatorPawn* *754b16dc40(); // Function Engine.PlayerController.*754b16dc40 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66db518
	struct FString SetName(); // Function Engine.PlayerController.SetName // Exec|Native|Public // @ game+0x66ebe78
	float FOV(); // Function Engine.PlayerController.FOV // Exec|Native|Public // @ game+0x66d4c58
	struct FName *492c0dfb10(); // Function Engine.PlayerController.*492c0dfb10 // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x66d17e4
	struct FGuid *7d26778a3d(); // Function Engine.PlayerController.*7d26778a3d // Final|Native|Public|HasDefaults // @ game+0x66d1a80
	struct FRotator *64bae42b40(); // Function Engine.PlayerController.*64bae42b40 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e7dd8
	struct UObject* *ba0fe87a17(); // Function Engine.PlayerController.*ba0fe87a17 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d0f30
	float *4c8f98c6b1(); // Function Engine.PlayerController.*4c8f98c6b1 // Net|Native|Event|Public|HasDefaults|NetClient // @ game+0x66d0920
	float AddYawInput(); // Function Engine.PlayerController.AddYawInput // Native|Public|BlueprintCallable // @ game+0x66ced5c
	void *67e47f555a(); // Function Engine.PlayerController.*67e47f555a // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66cff3c
	bool *fc5c98289c(); // Function Engine.PlayerController.*fc5c98289c // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d011c
	struct FName *66cb3b1abb(); // Function Engine.PlayerController.*66cb3b1abb // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66e4adc
	bool *27d9967514(); // Function Engine.PlayerController.*27d9967514 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66e2e74
	void *a36a90c259(); // Function Engine.PlayerController.*a36a90c259 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xdabd2c
	bool *1c8a42dada(); // Function Engine.PlayerController.*1c8a42dada // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d8280
	void EnableTAA(); // Function Engine.PlayerController.EnableTAA // Exec|Native|Public // @ game+0x59e0fb4
	void *ace4896d72(); // Function Engine.PlayerController.*ace4896d72 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x5981938
	bool *c741e7b156(); // Function Engine.PlayerController.*c741e7b156 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66e3d2c
	struct FKey ConsoleKey(); // Function Engine.PlayerController.ConsoleKey // Exec|Native|Public // @ game+0x66d2178
	struct FName *b650a3c66a(); // Function Engine.PlayerController.*b650a3c66a // Net|NetReliableNative|Event|Public|NetClient // @ game+0x720400
	bool *065c841a85(); // Function Engine.PlayerController.*065c841a85 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ef60c
	void *dc78805044(); // Function Engine.PlayerController.*dc78805044 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xda9b74
	int32 *337748a8a4(); // Function Engine.PlayerController.*337748a8a4 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66dbd44
	int32 *600eb14c1b(); // Function Engine.PlayerController.*600eb14c1b // Net|NetReliableNative|Event|Public|NetClient // @ game+0xcafa50
	struct F*badb9cc575 *b2ff9a6f9b(); // Function Engine.PlayerController.*b2ff9a6f9b // Final|Native|Public|BlueprintCallable // @ game+0x66e37dc
	void *64bd60d6ad(); // Function Engine.PlayerController.*64bd60d6ad // Net|NetReliableNative|Event|Public|NetClient // @ game+0x590a8ec
	void *9cd6096020(); // Function Engine.PlayerController.*9cd6096020 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0xda4950
	struct FVector *1cdcd7de79(); // Function Engine.PlayerController.*1cdcd7de79 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d95d8
	struct F*12ea908fc3 *da7f49c34f(); // Function Engine.PlayerController.*da7f49c34f // Net|NetReliableNative|Event|Public|NetClient // @ game+0xcda61c
	int32 *5e803224a0(); // Function Engine.PlayerController.*5e803224a0 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x85ed74
	int32 *d12287e8bd(); // Function Engine.PlayerController.*d12287e8bd // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d0bdc
	void *413a74fc4a(); // Function Engine.PlayerController.*413a74fc4a // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66e696c
	bool *017f81fff0(); // Function Engine.PlayerController.*017f81fff0 // Net|NetReliableNative|Event|Public|NetClient // @ game+0xc93b5c
	struct FName *18f0867bd1(); // Function Engine.PlayerController.*18f0867bd1 // Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66e66e0
	bool ToggleSpeaking(); // Function Engine.PlayerController.ToggleSpeaking // Exec|Native|Public // @ game+0x66ef108
	bool *dba1cb64a2(); // Function Engine.PlayerController.*dba1cb64a2 // Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x66cfa64
	struct FName *e4e3fd3561(); // Function Engine.PlayerController.*e4e3fd3561 // Net|Native|Event|Public|NetClient|BlueprintCallable // @ game+0xb98e1c
	struct TArray<struct F*e276d3ecaf> *b4cc95ff22(); // Function Engine.PlayerController.*b4cc95ff22 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d1f48
	bool *646923e85b(); // Function Engine.PlayerController.*646923e85b // Net|NetReliableNative|Event|Public|NetClient // @ game+0x7d1140
	float *926d6135f4(); // Function Engine.PlayerController.*926d6135f4 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d18c4
	void *8775495bb7(); // Function Engine.PlayerController.*8775495bb7 // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x66cff9c
	bool *77388303a1(); // Function Engine.PlayerController.*77388303a1 // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x66d1700
	bool StartFire(); // Function Engine.PlayerController.StartFire // Exec|Native|Public // @ game+0x66ee75c
	float *c32dee1b26(); // Function Engine.PlayerController.*c32dee1b26 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d921c
	void *a0484bb951(); // Function Engine.PlayerController.*a0484bb951 // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0x76d63c
	struct FName *a1a43b96bb(); // Function Engine.PlayerController.*a1a43b96bb // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d12f4
	int32 *0846d613e3(); // Function Engine.PlayerController.*0846d613e3 // Final|Native|Public|BlueprintCallable // @ game+0x66ebc28
	struct FText *6b86f87435(); // Function Engine.PlayerController.*6b86f87435 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d2004
	struct FUniqueNetIdRepl *be5ef35171(); // Function Engine.PlayerController.*be5ef35171 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66e6580
	struct FString SendToConsole(); // Function Engine.PlayerController.SendToConsole // Exec|Native|Public // @ game+0x66e4a18
	struct APawn* ClientRestart(); // Function Engine.PlayerController.ClientRestart // Net|NetReliableNative|Event|Public|NetClient // @ game+0xc025dc
	bool *c32597ff8f(); // Function Engine.PlayerController.*c32597ff8f // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d85e0
	struct F*12ea908fc3 *99deb6a5df(); // Function Engine.PlayerController.*99deb6a5df // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x66e70c0
	struct FRotator *f6b10b700f(); // Function Engine.PlayerController.*f6b10b700f // Net|Native|Event|Public|NetServer|HasDefaults|NetValidate // @ game+0x66e6a04
	void *6ca8f81f82(); // Function Engine.PlayerController.*6ca8f81f82 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66e6fdc
	float *551859c184(); // Function Engine.PlayerController.*551859c184 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d8c7c
	void *be8df9dac5(); // Function Engine.PlayerController.*be8df9dac5 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x66e7074
	void EnableDLSS(); // Function Engine.PlayerController.EnableDLSS // Exec|Native|Public // @ game+0x66d4a38
	bool *29fe5019a0(); // Function Engine.PlayerController.*29fe5019a0 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66e6b4c
	float *9330da061e(); // Function Engine.PlayerController.*9330da061e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d8a40
	enum class EControllerHand *d85a21b831(); // Function Engine.PlayerController.*d85a21b831 // Final|Native|Public|BlueprintCallable // @ game+0x66eeda0
	bool *48c46e979b(); // Function Engine.PlayerController.*48c46e979b // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d01b4
	void *50dd42b97f(); // Function Engine.PlayerController.*50dd42b97f // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66e6c0c
	void *4f029e8b42(); // Function Engine.PlayerController.*4f029e8b42 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d16e8
	bool *fac0fe6371(); // Function Engine.PlayerController.*fac0fe6371 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d8430
	float *3a17d02d0a(); // Function Engine.PlayerController.*3a17d02d0a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d8f60
	void RestartLevel(); // Function Engine.PlayerController.RestartLevel // Exec|Native|Public // @ game+0x59beca4
	struct FString *515ca9bd09(); // Function Engine.PlayerController.*515ca9bd09 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66e4b90
	int32 ServerUpdateCamera(); // Function Engine.PlayerController.ServerUpdateCamera // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x66e6db8
	struct FColor *b2cd120b3b(); // Function Engine.PlayerController.*b2cd120b3b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e9d10
	bool *202ea03278(); // Function Engine.PlayerController.*202ea03278 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7f58
	void *68b9f2b1c8(); // Function Engine.PlayerController.*68b9f2b1c8 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66e4cc4
	bool *b8ad63a8db(); // Function Engine.PlayerController.*b8ad63a8db // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9dd4
	struct FUniqueNetIdRepl *6bececdfa5(); // Function Engine.PlayerController.*6bececdfa5 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d03b4
	bool DeprojectMousePositionToWorld(); // Function Engine.PlayerController.DeprojectMousePositionToWorld // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d2cac
	struct APawn* *a3ff594db9(); // Function Engine.PlayerController.*a3ff594db9 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0xc88824
	bool *1b581f5708(); // Function Engine.PlayerController.*1b581f5708 // Native|Public|BlueprintCallable // @ game+0x66edba0
	struct UClass* *c063f400fc(); // Function Engine.PlayerController.*c063f400fc // Net|Native|Event|Public|NetClient|BlueprintCallable // @ game+0x66d1654
	bool *7badcea36e(); // Function Engine.PlayerController.*7badcea36e // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d0aa4
	struct FRotator *c0bfdc5bc7(); // Function Engine.PlayerController.*c0bfdc5bc7 // Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable // @ game+0xa81a6c
	bool *30ed96f4e7(); // Function Engine.PlayerController.*30ed96f4e7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66ef518
	float AddPitchInput(); // Function Engine.PlayerController.AddPitchInput // Native|Public|BlueprintCallable // @ game+0x66ce4f0
	struct FName Camera(); // Function Engine.PlayerController.Camera // Exec|Native|Public // @ game+0x66cf304
	struct FGuid *ff56e2228f(); // Function Engine.PlayerController.*ff56e2228f // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x66d1c54
	struct FVector *07e9ba9cd5(); // Function Engine.PlayerController.*07e9ba9cd5 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7cb8
	struct FUniqueNetIdRepl *631d4dd4e1(); // Function Engine.PlayerController.*631d4dd4e1 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66e6c58
	bool ServerUpdateLevelVisibility(); // Function Engine.PlayerController.ServerUpdateLevelVisibility // Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0xba488c
	enum class EControllerHand *ed7a62c23a(); // Function Engine.PlayerController.*ed7a62c23a // Final|Native|Public|BlueprintCallable // @ game+0x66eaa50
	bool *c680b04a41(); // Function Engine.PlayerController.*c680b04a41 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d2db4
	struct APawn* ClientRetryClientRestart(); // Function Engine.PlayerController.ClientRetryClientRestart // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d0fc4
	bool *504cc5b5ec(); // Function Engine.PlayerController.*504cc5b5ec // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d80c8
	void DecDISPSharpness(); // Function Engine.PlayerController.DecDISPSharpness // Exec|Native|Public // @ game+0x598310c
	struct UCameraAnim* *1da0c51c15(); // Function Engine.PlayerController.*1da0c51c15 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6082878
	int32 *7843cf5b19(); // Function Engine.PlayerController.*7843cf5b19 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d1388
	void OnRep_TargetViewRotation(); // Function Engine.PlayerController.OnRep_TargetViewRotation // Native|Public // @ game+0x5954a68
	bool *1c0be40025(); // Function Engine.PlayerController.*1c0be40025 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc784
	struct FRotator *de5cdb845e(); // Function Engine.PlayerController.*de5cdb845e // Net|Native|Event|Public|HasDefaults|NetClient|BlueprintCallable // @ game+0x66d04d0
	bool *994d9585e4(); // Function Engine.PlayerController.*994d9585e4 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d15bc
	void *f12676d8d9(); // Function Engine.PlayerController.*f12676d8d9 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66e69b8
	void *30f65c03fa(); // Function Engine.PlayerController.*30f65c03fa // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x66e7028
	void IncDISPSharpness(); // Function Engine.PlayerController.IncDISPSharpness // Exec|Native|Public // @ game+0x5947c14
	void *3c955a30f1(); // Function Engine.PlayerController.*3c955a30f1 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66cff84
	bool *5a504151cb(); // Function Engine.PlayerController.*5a504151cb // Native|Public|BlueprintCallable // @ game+0x66e9378
	float *42ab205675(); // Function Engine.PlayerController.*42ab205675 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d8b34
	void *45753d8258(); // Function Engine.PlayerController.*45753d8258 // Final|Native|Public|BlueprintCallable // @ game+0x66cf9dc
	void Pause(); // Function Engine.PlayerController.Pause // Exec|Native|Public // @ game+0x66e2f0c
	bool *83fe00935b(); // Function Engine.PlayerController.*83fe00935b // Native|Public|BlueprintCallable // @ game+0x66edd68
	struct FString SwitchLevel(); // Function Engine.PlayerController.SwitchLevel // Exec|Native|Public // @ game+0x66eef78
	bool *f02dad65dc(); // Function Engine.PlayerController.*f02dad65dc // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d0038
	struct FUniqueNetIdRepl *8b49197eab(); // Function Engine.PlayerController.*8b49197eab // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d1e2c
	float *98b518ef28(); // Function Engine.PlayerController.*98b518ef28 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d024c
	float AddRollInput(); // Function Engine.PlayerController.AddRollInput // Native|Public|BlueprintCallable // @ game+0x66ce934
	void *586f1ffdba(); // Function Engine.PlayerController.*586f1ffdba // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d0020
	void *ec4658b026(); // Function Engine.PlayerController.*ec4658b026 // Net|Native|Event|Public|NetServer|NetValidate // @ game+0x66e4c78
	struct FString LocalTravel(); // Function Engine.PlayerController.LocalTravel // Exec|Native|Public // @ game+0x66e25a4
	struct UObject* *cc6aa4203e(); // Function Engine.PlayerController.*cc6aa4203e // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d0d68
	bool *599d38076c(); // Function Engine.PlayerController.*599d38076c // Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x66d111c
	bool *240d2c5a52(); // Function Engine.PlayerController.*240d2c5a52 // Final|Native|Public|BlueprintCallable // @ game+0x66e3ae8
	struct FVector *7ad5457e5d(); // Function Engine.PlayerController.*7ad5457e5d // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9054
	void EnableCheats(); // Function Engine.PlayerController.EnableCheats // Exec|Native|Public // @ game+0x66d4a20
	bool *f41bd4c807(); // Function Engine.PlayerController.*f41bd4c807 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9320
	struct FString *3f159e81eb(); // Function Engine.PlayerController.*3f159e81eb // Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable // @ game+0xc52c70
	struct FString *50dacbc7ed(); // Function Engine.PlayerController.*50dacbc7ed // Net|NetReliableNative|Event|Public|NetClient // @ game+0x66d1058
	float *17b1db61f7(); // Function Engine.PlayerController.*17b1db61f7 // Net|Native|Event|Public|NetClient // @ game+0x66d07fc
	struct TArray<struct F*956690b004> *a4df4a4cc6(); // Function Engine.PlayerController.*a4df4a4cc6 // Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x66e6ee4
};

// Class Engine.Info
// Size: 0x3f8 (Inherited: 0x3f8)
struct AInfo : AActor {
};

// Class Engine.GameModeBase
// Size: 0x498 (Inherited: 0x3f8)
struct AGameModeBase : AInfo {
	struct FString OptionsString; // 0x3f8(0x10)
	struct UClass* GameSessionClass; // 0x408(0x08)
	struct UClass* GameStateClass; // 0x410(0x08)
	struct UClass* PlayerControllerClass; // 0x418(0x08)
	struct UClass* PlayerStateClass; // 0x420(0x08)
	struct FStringClassReference HUDClass; // 0x428(0x10)
	struct UClass* DefaultPawnClass; // 0x438(0x08)
	struct FStringClassReference SpectatorClass; // 0x440(0x10)
	struct UClass* ReplaySpectatorPlayerControllerClass; // 0x450(0x08)
	struct AGameSession* GameSession; // 0x458(0x08)
	struct AGameStateBase* GameState; // 0x460(0x08)
	struct FText *36bef0b8bb; // 0x468(0x18)
	char bUseSeamlessTravel : 1; // 0x480(0x01)
	char bStartPlayersAsSpectators : 1; // 0x480(0x01)
	char bPauseable : 1; // 0x480(0x01)
	char pad_480_3 : 5; // 0x480(0x01)
	char pad_481[0x17]; // 0x481(0x17)

	struct AActor* FindPlayerStart(); // Function Engine.GameModeBase.FindPlayerStart // Native|Event|Public|BlueprintEvent // @ game+0xc4c880
	void *a7b4935b36(); // Function Engine.GameModeBase.*a7b4935b36 // Native|Public|BlueprintCallable // @ game+0x7f9028
	bool MustSpectate(); // Function Engine.GameModeBase.MustSpectate // Native|Event|Public|BlueprintEvent|Const // @ game+0xc670a0
	bool *d4e79c9423(); // Function Engine.GameModeBase.*d4e79c9423 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x597ebb4
	struct AActor* *0640ebc54a(); // Function Engine.GameModeBase.*0640ebc54a // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x66df8d4
	bool ShouldReset(); // Function Engine.GameModeBase.ShouldReset // Native|Event|Public|BlueprintEvent // @ game+0x66e4020
	bool PlayerCanRestart(); // Function Engine.GameModeBase.PlayerCanRestart // Native|Event|Public|BlueprintEvent // @ game+0x8a458c
	struct APlayerController* InitializeHUDForPlayer(); // Function Engine.GameModeBase.InitializeHUDForPlayer // Native|Event|Protected|BlueprintEvent // @ game+0xd7db04
	struct APawn* SpawnDefaultPawnFor(); // Function Engine.GameModeBase.SpawnDefaultPawnFor // Native|Event|Public|BlueprintEvent // @ game+0xc7ea40
	bool *ea3038b0fd(); // Function Engine.GameModeBase.*ea3038b0fd // Native|Public|BlueprintCallable // @ game+0x66cf860
	struct APlayerController* HandleStartingNewPlayer(); // Function Engine.GameModeBase.HandleStartingNewPlayer // Native|Event|Public|BlueprintEvent // @ game+0x8a464c
	struct AController* RestartPlayer(); // Function Engine.GameModeBase.RestartPlayer // Native|Public|BlueprintCallable // @ game+0x66e4508
	struct AController* K2_OnLogout(); // Function Engine.GameModeBase.K2_OnLogout // Event|Public|BlueprintEvent // @ game+0x22c9a0
	int32 *ccb74fed66(); // Function Engine.GameModeBase.*ccb74fed66 // Native|Public|BlueprintCallable // @ game+0x66da370
	int32 *82ff0fcd4e(); // Function Engine.GameModeBase.*82ff0fcd4e // Native|Public|BlueprintCallable // @ game+0x66da28c
	struct FTransform RestartPlayerAtTransform(); // Function Engine.GameModeBase.RestartPlayerAtTransform // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e467c
	struct AActor* RestartPlayerAtPlayerStart(); // Function Engine.GameModeBase.RestartPlayerAtPlayerStart // Native|Public|BlueprintCallable // @ game+0x66e459c
	void ResetLevel(); // Function Engine.GameModeBase.ResetLevel // Native|Public|BlueprintCallable // @ game+0x59e5db4
	struct UClass* GetDefaultPawnClassForController(); // Function Engine.GameModeBase.GetDefaultPawnClassForController // Native|Event|Public|BlueprintEvent // @ game+0xc9b854
	struct AController* K2_OnRestartPlayer(); // Function Engine.GameModeBase.K2_OnRestartPlayer // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct APlayerController* K2_PostLogin(); // Function Engine.GameModeBase.K2_PostLogin // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct AActor* ChoosePlayerStart(); // Function Engine.GameModeBase.ChoosePlayerStart // Native|Event|Public|BlueprintEvent // @ game+0xc44c54
	bool CanSpectate(); // Function Engine.GameModeBase.CanSpectate // Native|Event|Public|BlueprintEvent // @ game+0x66cf48c
	struct APawn* SpawnDefaultPawnAtTransform(); // Function Engine.GameModeBase.SpawnDefaultPawnAtTransform // Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0xcc6a58
	struct APlayerController* K2_OnSwapPlayerControllers(); // Function Engine.GameModeBase.K2_OnSwapPlayerControllers // Event|Protected|BlueprintEvent // @ game+0x22c9a0
	bool K2_OnChangeName(); // Function Engine.GameModeBase.K2_OnChangeName // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct AController* InitStartSpot(); // Function Engine.GameModeBase.InitStartSpot // Native|Event|Public|BlueprintEvent // @ game+0xd700a8
	void StartPlay(); // Function Engine.GameModeBase.StartPlay // Native|Public|BlueprintCallable // @ game+0xbbdf20
};

// Class Engine.GameMode
// Size: 0x4d8 (Inherited: 0x498)
struct AGameMode : AGameModeBase {
	struct FName *bb64d0d946; // 0x498(0x08)
	char bDelayedStart : 1; // 0x4a0(0x01)
	char pad_4A0_1 : 7; // 0x4a0(0x01)
	char pad_4A1[0x3]; // 0x4a1(0x03)
	int32 NumSpectators; // 0x4a4(0x04)
	int32 NumPlayers; // 0x4a8(0x04)
	int32 NumBots; // 0x4ac(0x04)
	float MinRespawnDelay; // 0x4b0(0x04)
	int32 NumTravellingPlayers; // 0x4b4(0x04)
	struct UClass* *db19159cfc; // 0x4b8(0x08)
	struct TArray<struct APlayerState*> *a6accb8e63; // 0x4c0(0x10)
	float *9df405dde0; // 0x4d0(0x04)
	bool bHandleDedicatedServerReplays; // 0x4d4(0x01)
	char pad_4D5[0x3]; // 0x4d5(0x03)

	struct FName *9b6ffe7a3d(); // Function Engine.GameMode.*9b6ffe7a3d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d99d8
	void *8430b4980a(); // Function Engine.GameMode.*8430b4980a // Native|Public|BlueprintCallable // @ game+0x66d4c2c
	void *765398c9d4(); // Function Engine.GameMode.*765398c9d4 // Native|Public|BlueprintCallable // @ game+0x66e4454
	bool ReadyToEndMatch(); // Function Engine.GameMode.ReadyToEndMatch // Native|Event|Protected|BlueprintEvent // @ game+0xb12660
	struct FString Say(); // Function Engine.GameMode.Say // Exec|Native|Public|BlueprintCallable // @ game+0x66e4840
	bool *20e3515243(); // Function Engine.GameMode.*20e3515243 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc90c
	struct FName K2_OnSetMatchState(); // Function Engine.GameMode.K2_OnSetMatchState // Event|Protected|BlueprintEvent // @ game+0x22c9a0
	bool ReadyToStartMatch(); // Function Engine.GameMode.ReadyToStartMatch // Native|Event|Protected|BlueprintEvent // @ game+0xcd21c8
	void *ba4aa21903(); // Function Engine.GameMode.*ba4aa21903 // Native|Public|BlueprintCallable // @ game+0x597dbbc
	bool *3f89f1978b(); // Function Engine.GameMode.*3f89f1978b // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dbeb0
	float SetBandwidthLimit(); // Function Engine.GameMode.SetBandwidthLimit // Exec|Native|Public // @ game+0x66e849c
	void *cf4f0d8a8f(); // Function Engine.GameMode.*cf4f0d8a8f // Native|Public|BlueprintCallable // @ game+0x5944c78
};

// Class Engine.PlayerState
// Size: 0x490 (Inherited: 0x3f8)
struct APlayerState : AInfo {
	struct FString *bd04ae9cde; // 0x3f8(0x10)
	float Score; // 0x408(0x04)
	int32 PlayerId; // 0x40c(0x04)
	char pad_410[0x20]; // 0x410(0x20)
	bool Ping; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	char bIsSpectator : 1; // 0x434(0x01)
	char *27105a3b1d : 1; // 0x434(0x01)
	char bIsABot : 1; // 0x434(0x01)
	char pad_434_3 : 1; // 0x434(0x01)
	char *e0a90482a6 : 1; // 0x434(0x01)
	char *37ab395502 : 1; // 0x434(0x01)
	char pad_434_6 : 2; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	int32 StartTime; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct FString PlayerName; // 0x440(0x10)
	struct FUniqueNetIdRepl UniqueId; // 0x450(0x18)
	struct UClass* *db19159cfc; // 0x468(0x08)
	char pad_470[0x18]; // 0x470(0x18)
	bool *4253d56a24; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)

	void OnRep_Score(); // Function Engine.PlayerState.OnRep_Score // Native|Public // @ game+0x5909df4
	void OnRep_UniqueId(); // Function Engine.PlayerState.OnRep_UniqueId // Native|Public // @ game+0x59dc494
	void OnRep_PlayerName(); // Function Engine.PlayerState.OnRep_PlayerName // Native|Public // @ game+0x59a23dc
	void OnRep_bIsInactive(); // Function Engine.PlayerState.OnRep_bIsInactive // Native|Public // @ game+0x59dc47c
	struct APlayerState* ReceiveOverrideWith(); // Function Engine.PlayerState.ReceiveOverrideWith // Event|Protected|BlueprintEvent // @ game+0x22c9a0
	struct APlayerState* ReceiveCopyProperties(); // Function Engine.PlayerState.ReceiveCopyProperties // Event|Protected|BlueprintEvent // @ game+0x22c9a0
};

// Class Engine.TargetPoint
// Size: 0x3f8 (Inherited: 0x3f8)
struct ATargetPoint : AActor {
};

// Class Engine.SkeletalMeshActor
// Size: 0x480 (Inherited: 0x3f8)
struct ASkeletalMeshActor : AActor {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	char bShouldDoAnimNotifies : 1; // 0x400(0x01)
	char bWakeOnLevelStart : 1; // 0x400(0x01)
	char pad_400_2 : 6; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x408(0x08)
	struct USkeletalMesh* *78ac740bab; // 0x410(0x08)
	struct UPhysicsAsset* *c076d8455d; // 0x418(0x08)
	struct UMaterialInterface* *30be61bd2f; // 0x420(0x08)
	struct UMaterialInterface* *a44e49c1f5; // 0x428(0x08)
	char pad_430[0x50]; // 0x430(0x50)

	void OnRep_ReplicatedMaterial0(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0 // Native|Public // @ game+0x59dc47c
	void OnRep_ReplicatedMaterial1(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1 // Native|Public // @ game+0x59dc494
	void OnRep_ReplicatedPhysAsset(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset // Native|Public // @ game+0x59a23dc
	void OnRep_ReplicatedMesh(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh // Native|Public // @ game+0x5909df4
};

// Class Engine.DestructibleComponent
// Size: 0xd20 (Inherited: 0xc60)
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0xc58(0x01)
	struct TArray<struct F*ab298b5726> FractureEffects; // 0xc60(0x10)
	bool bEnableHardSleeping; // 0xc70(0x01)
	char pad_C71_1 : 7; // 0xc71(0x01)
	char pad_C72[0x2]; // 0xc72(0x02)
	float LargeChunkThreshold; // 0xc74(0x04)
	char pad_C78[0x10]; // 0xc78(0x10)
	struct FMulticastDelegate OnComponentFracture; // 0xc88(0x10)
	char pad_C98[0x88]; // 0xc98(0x88)

	struct UDestructibleMesh* *81619df15f(); // Function Engine.DestructibleComponent.*81619df15f // Final|Native|Public|BlueprintCallable // @ game+0x6734898
	struct UDestructibleMesh* *c2a51a8aea(); // Function Engine.DestructibleComponent.*c2a51a8aea // Final|Native|Public|BlueprintCallable // @ game+0x670e8a4
	bool *15c3764f94(); // Function Engine.DestructibleComponent.*15c3764f94 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f6e3c
	float *78cda25b7e(); // Function Engine.DestructibleComponent.*78cda25b7e // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f5c40
};

// Class Engine.SaveGame
// Size: 0x30 (Inherited: 0x30)
struct USaveGame : UObject {
};

// Class Engine.*a3b7e4d578
// Size: 0x9e0 (Inherited: 0x9c0)
struct U*a3b7e4d578 : UPrimitiveComponent {
	struct FColor ShapeColor; // 0x9b8(0x04)
	struct UBodySetup* *03f0c31ef3; // 0x9c0(0x08)
	char *97e70e56df : 1; // 0x9c8(0x01)
	char *caf3bcb1ba : 1; // 0x9c8(0x01)
	char *25b1d2d4e0 : 1; // 0x9c8(0x01)
	char pad_9CC_3 : 5; // 0x9cc(0x01)
	char pad_9CD[0x3]; // 0x9cd(0x03)
	struct UClass* AreaClass; // 0x9d0(0x08)
	char pad_9D8[0x8]; // 0x9d8(0x08)
};

// Class Engine.GameStateBase
// Size: 0x438 (Inherited: 0x3f8)
struct AGameStateBase : AInfo {
	struct UClass* GameModeClass; // 0x3f8(0x08)
	struct AGameModeBase* AuthorityGameMode; // 0x400(0x08)
	struct UClass* SpectatorClass; // 0x408(0x08)
	struct TArray<struct APlayerState*> PlayerArray; // 0x410(0x10)
	bool *d3c2be67c8; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float *97f1b2a6ec; // 0x424(0x04)
	float *ad4174af37; // 0x428(0x04)
	float *f4803290f8; // 0x42c(0x04)
	char pad_430[0x8]; // 0x430(0x08)

	float *30eff713e8(); // Function Engine.GameStateBase.*30eff713e8 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9d50
	float *c19ec27f91(); // Function Engine.GameStateBase.*c19ec27f91 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66daf70
	float *2ae46ac202(); // Function Engine.GameStateBase.*2ae46ac202 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66daec8
	void OnRep_ReplicatedHasBegunPlay(); // Function Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay // Native|Protected // @ game+0x82d168
	float *8c90983c69(); // Function Engine.GameStateBase.*8c90983c69 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x597b4bc
	float *9c5ebaa37b(); // Function Engine.GameStateBase.*9c5ebaa37b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59f92d8
	void OnRep_GameModeClass(); // Function Engine.GameStateBase.OnRep_GameModeClass // Native|Protected // @ game+0x59a5498
	void OnRep_SpectatorClass(); // Function Engine.GameStateBase.OnRep_SpectatorClass // Native|Protected // @ game+0xb3e82c
	bool *d4e79c9423(); // Function Engine.GameStateBase.*d4e79c9423 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dbed8
	bool *9816c4a151(); // Function Engine.GameStateBase.*9816c4a151 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dbe88
	void OnRep_ReplicatedWorldTimeSeconds(); // Function Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds // Native|Protected // @ game+0xbbdf20
};

// Class Engine.GameState
// Size: 0x458 (Inherited: 0x438)
struct AGameState : AGameStateBase {
	struct FName MatchState; // 0x438(0x08)
	struct FName PreviousMatchState; // 0x440(0x08)
	int32 ElapsedTime; // 0x448(0x04)
	char pad_44C[0xc]; // 0x44c(0x0c)

	void OnRep_ElapsedTime(); // Function Engine.GameState.OnRep_ElapsedTime // Native|Public // @ game+0x5948138
	void OnRep_MatchState(); // Function Engine.GameState.OnRep_MatchState // Native|Public // @ game+0x7f9028
};

// Class Engine.BoxComponent
// Size: 0x9f0 (Inherited: 0x9e0)
struct UBoxComponent : U*a3b7e4d578 {
	struct FVector BoxExtent; // 0x9d8(0x0c)
	char pad_9EC[0x4]; // 0x9ec(0x04)

	struct FVector *0211fba5c3(); // Function Engine.BoxComponent.*0211fba5c3 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6716db4
	bool *f4af67cd92(); // Function Engine.BoxComponent.*f4af67cd92 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673270c
	struct FVector *6ed44cdd4c(); // Function Engine.BoxComponent.*6ed44cdd4c // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6714a5c
};

// Class Engine.ProjectileMovementComponent
// Size: 0x310 (Inherited: 0x250)
struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; // 0x248(0x04)
	float MaxSpeed; // 0x24c(0x04)
	char bRotationFollowsVelocity : 1; // 0x250(0x01)
	char bShouldBounce : 1; // 0x250(0x01)
	char bInitialVelocityInLocalSpace : 1; // 0x250(0x01)
	char bForceSubStepping : 1; // 0x250(0x01)
	char bSimulationEnabled : 1; // 0x250(0x01)
	char bSweepCollision : 1; // 0x250(0x01)
	char bIsHomingProjectile : 1; // 0x250(0x01)
	char bBounceAngleAffectsFriction : 1; // 0x250(0x01)
	char bIsSliding : 1; // 0x251(0x01)
	char bInterpMovement : 1; // 0x251(0x01)
	char bInterpRotation : 1; // 0x251(0x01)
	float PreviousHitTime; // 0x254(0x04)
	struct FVector PreviousHitNormal; // 0x258(0x0c)
	float ProjectileGravityScale; // 0x264(0x04)
	float *00c93b38f7; // 0x268(0x04)
	float Bounciness; // 0x26c(0x04)
	float Friction; // 0x270(0x04)
	float BounceVelocityStopSimulatingThreshold; // 0x274(0x04)
	float MinFrictionFraction; // 0x278(0x04)
	struct FMulticastDelegate OnProjectileBounce; // 0x280(0x10)
	struct FMulticastDelegate OnProjectileStop; // 0x290(0x10)
	float HomingAccelerationMagnitude; // 0x2a0(0x04)
	struct USceneComponent* HomingTargetComponent; // 0x2a4(0x08)
	float MaxSimulationTimeStep; // 0x2ac(0x04)
	int32 MaxSimulationIterations; // 0x2b0(0x04)
	int32 BounceAdditionalIterations; // 0x2b4(0x04)
	float InterpLocationTime; // 0x2b8(0x04)
	float InterpRotationTime; // 0x2bc(0x04)
	float InterpLocationMaxLagDistance; // 0x2c0(0x04)
	float InterpLocationSnapToTargetDistance; // 0x2c4(0x04)
	char pad_2C9[0x47]; // 0x2c9(0x47)

	struct FVector OnProjectileBounceDelegate__DelegateSignature(); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults // @ game+0x22c9a0
	struct USceneComponent* *682b698b23(); // Function Engine.ProjectileMovementComponent.*682b698b23 // Native|Public|BlueprintCallable // @ game+0x6737de4
	struct FHitResult OnProjectileStopDelegate__DelegateSignature(); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22c9a0
	bool *417e40db25(); // Function Engine.ProjectileMovementComponent.*417e40db25 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x671af6c
	struct FVector LimitVelocity(); // Function Engine.ProjectileMovementComponent.LimitVelocity // Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x671e634
	struct FHitResult StopSimulating(); // Function Engine.ProjectileMovementComponent.StopSimulating // Native|Public|HasOutParms|BlueprintCallable // @ game+0x67463c4
	struct FRotator *b0b3c27e08(); // Function Engine.ProjectileMovementComponent.*b0b3c27e08 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6726348
	void *8a3fcb4372(); // Function Engine.ProjectileMovementComponent.*8a3fcb4372 // Native|Public|BlueprintCallable // @ game+0x59830f4
	struct FVector *ddf11306f9(); // Function Engine.ProjectileMovementComponent.*ddf11306f9 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x673e9a8
	bool *d1c2c36cc0(); // Function Engine.ProjectileMovementComponent.*d1c2c36cc0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x671baf8
};

// Class Engine.CurveBase
// Size: 0x38 (Inherited: 0x30)
struct UCurveBase : UObject {
	char pad_30[0x8]; // 0x30(0x08)

	float *f290a1e402(); // Function Engine.CurveBase.*f290a1e402 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66dbb40
	float *3997d7aa5d(); // Function Engine.CurveBase.*3997d7aa5d // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66db818
};

// Class Engine.GameUserSettings
// Size: 0x118 (Inherited: 0x30)
struct UGameUserSettings : UObject {
	bool bUseVSync; // 0x30(0x01)
	bool bUseDynamicResolution; // 0x31(0x01)
	char pad_32[0x4e]; // 0x32(0x4e)
	uint32 ResolutionSizeX; // 0x80(0x04)
	uint32 ResolutionSizeY; // 0x84(0x04)
	uint32 LastUserConfirmedResolutionSizeX; // 0x88(0x04)
	uint32 LastUserConfirmedResolutionSizeY; // 0x8c(0x04)
	int32 WindowPosX; // 0x90(0x04)
	int32 WindowPosY; // 0x94(0x04)
	int32 FullscreenMode; // 0x98(0x04)
	int32 LastConfirmedFullscreenMode; // 0x9c(0x04)
	int32 PreferredFullscreenMode; // 0xa0(0x04)
	uint32 Version; // 0xa4(0x04)
	int32 AudioQualityLevel; // 0xa8(0x04)
	float FrameRateLimit; // 0xac(0x04)
	char pad_B0[0x4]; // 0xb0(0x04)
	int32 DesiredScreenWidth; // 0xb4(0x04)
	bool bUseDesiredScreenHeight; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 DesiredScreenHeight; // 0xbc(0x04)
	float LastRecommendedScreenWidth; // 0xc0(0x04)
	float LastRecommendedScreenHeight; // 0xc4(0x04)
	float LastCPUBenchmarkResult; // 0xc8(0x04)
	float LastGPUBenchmarkResult; // 0xcc(0x04)
	struct TArray<float> LastCPUBenchmarkSteps; // 0xd0(0x10)
	struct TArray<float> LastGPUBenchmarkSteps; // 0xe0(0x10)
	float LastGPUBenchmarkMultiplier; // 0xf0(0x04)
	bool bUseHDRDisplayOutput; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	int32 HDRDisplayOutputNits; // 0xf8(0x04)
	enum class EGraphicsAPIType GraphicsAPI; // 0xfc(0x01)
	bool bGPUDebug; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
	struct FDateTime GPUDebugActiveDateTime; // 0x100(0x08)
	struct FMulticastDelegate OnGameUserSettingsUINeedsUpdate; // 0x108(0x10)

	int32 *f09878a527(); // Function Engine.GameUserSettings.*f09878a527 // Final|Native|Public|BlueprintCallable // @ game+0x67577f4
	bool *7a77ec6483(); // Function Engine.GameUserSettings.*7a77ec6483 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6764240
	struct FIntPoint *62bb0b9181(); // Function Engine.GameUserSettings.*62bb0b9181 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6759ef0
	bool *16010d7314(); // Function Engine.GameUserSettings.*16010d7314 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xa85bb0
	bool *a5e93d4853(); // Function Engine.GameUserSettings.*a5e93d4853 // Final|Native|Public|BlueprintCallable // @ game+0x67632c0
	bool *54584e1936(); // Function Engine.GameUserSettings.*54584e1936 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675c8c0
	int32 *e3a237f6aa(); // Function Engine.GameUserSettings.*e3a237f6aa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675be78
	void *d62db2618b(); // Function Engine.GameUserSettings.*d62db2618b // Native|Public|BlueprintCallable // @ game+0xb03700
	float *50d117aec6(); // Function Engine.GameUserSettings.*50d117aec6 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x675b194
	void *52b88c9c83(); // Function Engine.GameUserSettings.*52b88c9c83 // Native|Public|BlueprintCallable // @ game+0x598d54c
	float *13d64b82da(); // Function Engine.GameUserSettings.*13d64b82da // Final|Native|Public|BlueprintCallable // @ game+0x676270c
	enum class EWindowMode *34bb69adfa(); // Function Engine.GameUserSettings.*34bb69adfa // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67599f4
	void *f18a34db27(); // Function Engine.GameUserSettings.*f18a34db27 // Final|Native|Public|BlueprintCallable // @ game+0x675497c
	bool *bf934dae7a(); // Function Engine.GameUserSettings.*bf934dae7a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675c35c
	float *b6b6477ce1(); // Function Engine.GameUserSettings.*b6b6477ce1 // Native|Public|BlueprintCallable // @ game+0x675ae8c
	enum class EWindowMode *7398906ef8(); // Function Engine.GameUserSettings.*7398906ef8 // Final|Native|Public|BlueprintCallable // @ game+0x67627a4
	int32 *4deaae310e(); // Function Engine.GameUserSettings.*4deaae310e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67591b8
	bool *9685e14f57(); // Function Engine.GameUserSettings.*9685e14f57 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6754538
	bool LoadSettings(); // Function Engine.GameUserSettings.LoadSettings // Native|Public|BlueprintCallable // @ game+0x6757470
	int32 *4338d69a5b(); // Function Engine.GameUserSettings.*4338d69a5b // Final|Native|Public|BlueprintCallable // @ game+0x67624a8
	struct FIntPoint *bc9926799e(); // Function Engine.GameUserSettings.*bc9926799e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6762e7c
	bool *a8e280c616(); // Function Engine.GameUserSettings.*a8e280c616 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675c89c
	enum class EWindowMode *ae46e29729(); // Function Engine.GameUserSettings.*ae46e29729 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675a978
	struct FIntPoint *f90938b578(); // Function Engine.GameUserSettings.*f90938b578 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6759420
	struct FIntPoint *56639da4d9(); // Function Engine.GameUserSettings.*56639da4d9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x675b374
	bool *21dcbf64ef(); // Function Engine.GameUserSettings.*21dcbf64ef // Native|Public|BlueprintCallable // @ game+0x598d5fc
	void *ab471d586e(); // Function Engine.GameUserSettings.*ab471d586e // Native|Public|BlueprintCallable // @ game+0x59b09e4
	int32 *4c79fccc09(); // Function Engine.GameUserSettings.*4c79fccc09 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675b398
	bool *a609aa78e1(); // Function Engine.GameUserSettings.*a609aa78e1 // Final|Native|Public|BlueprintCallable // @ game+0x67625e4
	struct FIntPoint *56cb0d0526(); // Function Engine.GameUserSettings.*56cb0d0526 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6759438
	void *4f7c4e69be(); // Function Engine.GameUserSettings.*4f7c4e69be // Final|Native|Public|BlueprintCallable // @ game+0x6761d38
	int32 *67e0825c74(); // Function Engine.GameUserSettings.*67e0825c74 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67599c8
	int32 *d6b3133478(); // Function Engine.GameUserSettings.*d6b3133478 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675bb20
	float *a14804f3fa(); // Function Engine.GameUserSettings.*a14804f3fa // Final|Native|Public|BlueprintCallable // @ game+0x6762b2c
	int32 *c71c9b8280(); // Function Engine.GameUserSettings.*c71c9b8280 // Final|Native|Public|BlueprintCallable // @ game+0x6762f08
	int32 *281d60d9bd(); // Function Engine.GameUserSettings.*281d60d9bd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675a3f0
	int32 *a498d39449(); // Function Engine.GameUserSettings.*a498d39449 // Final|Native|Public|BlueprintCallable // @ game+0x6762670
	int32 GetResolutionScaleInformation(); // Function Engine.GameUserSettings.GetResolutionScaleInformation // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x675af9c
	int32 *da4f81d627(); // Function Engine.GameUserSettings.*da4f81d627 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6758f8c
	float *a7688da407(); // Function Engine.GameUserSettings.*a7688da407 // Final|Native|Public|BlueprintCallable // @ game+0x6762c70
	int32 *5ad2ec17ad(); // Function Engine.GameUserSettings.*5ad2ec17ad // Final|Native|Public|BlueprintCallable // @ game+0x676343c
	int32 *7968528a88(); // Function Engine.GameUserSettings.*7968528a88 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675a964
	bool *4c94344049(); // Function Engine.GameUserSettings.*4c94344049 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675c394
	float *5c14849ddf(); // Function Engine.GameUserSettings.*5c14849ddf // Native|Public|BlueprintCallable // @ game+0x67593f4
	int32 *e183b3cb37(); // Function Engine.GameUserSettings.*e183b3cb37 // Native|Public|BlueprintCallable // @ game+0x6762a0c
	int32 *3db9445308(); // Function Engine.GameUserSettings.*3db9445308 // Final|Native|Public|BlueprintCallable // @ game+0x59878d4
	struct FIntPoint *92dcc7d375(); // Function Engine.GameUserSettings.*92dcc7d375 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67593d4
	void *b5a9c7fe3c(); // Function Engine.GameUserSettings.*b5a9c7fe3c // Native|Public|BlueprintCallable // @ game+0x59b09cc
	bool *d9d0600777(); // Function Engine.GameUserSettings.*d9d0600777 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675c338
	bool *a27483cae9(); // Function Engine.GameUserSettings.*a27483cae9 // Final|Native|Public|BlueprintCallable // @ game+0x6750e28
	enum class EWindowMode *4b36d81370(); // Function Engine.GameUserSettings.*4b36d81370 // Final|Native|Static|Public|BlueprintCallable // @ game+0xc12fbc
	float *2120c68df5(); // Function Engine.GameUserSettings.*2120c68df5 // Native|Public|BlueprintCallable // @ game+0x67622ac
	struct UGameUserSettings* *0a1ea4b6ce(); // Function Engine.GameUserSettings.*0a1ea4b6ce // Final|Native|Static|Public|BlueprintCallable // @ game+0x6759af4
	void *5405e8f3e5(); // Function Engine.GameUserSettings.*5405e8f3e5 // Final|Native|Public|BlueprintCallable // @ game+0x6762534
	enum class EWindowMode *3292c1651c(); // Function Engine.GameUserSettings.*3292c1651c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6759ecc
	int32 *9786fe7e17(); // Function Engine.GameUserSettings.*9786fe7e17 // Final|Native|Public|BlueprintCallable // @ game+0x676241c
	int32 *d55782ad36(); // Function Engine.GameUserSettings.*d55782ad36 // Final|Native|Public|BlueprintCallable // @ game+0x6762aa0
	int32 SetResolutionScaleValue(); // Function Engine.GameUserSettings.SetResolutionScaleValue // Final|Native|Public|BlueprintCallable // @ game+0x6762bdc
	bool *d319a7ba30(); // Function Engine.GameUserSettings.*d319a7ba30 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675c858
	void SaveSettings(); // Function Engine.GameUserSettings.SaveSettings // Native|Public|BlueprintCallable // @ game+0x59b0974
	int32 *179e926ab3(); // Function Engine.GameUserSettings.*179e926ab3 // Final|Native|Public|BlueprintCallable // @ game+0x6763234
	int32 *a70fd254a1(); // Function Engine.GameUserSettings.*a70fd254a1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675be64
	bool *a36569de53(); // Function Engine.GameUserSettings.*a36569de53 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675c370
	void *7216dd5245(); // Function Engine.GameUserSettings.*7216dd5245 // Native|Public|BlueprintCallable // @ game+0x6161de8
	int32 *871e12b97e(); // Function Engine.GameUserSettings.*871e12b97e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6758f78
	float *274fd91604(); // Function Engine.GameUserSettings.*274fd91604 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67599dc
};

// Class Engine.GameInstance
// Size: 0x1f0 (Inherited: 0x30)
struct UGameInstance : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct U*d3391c2860* *d3391c2860; // 0x50(0x08)
	char pad_58[0x28]; // 0x58(0x28)
	struct U*bd40d2e124* *bd40d2e124; // 0x80(0x08)
	char pad_88[0x80]; // 0x88(0x80)
	struct FMulticastDelegate OnKillcamLoadingFinished; // 0x108(0x10)
	char pad_118[0xd8]; // 0x118(0xd8)

	void ReceiveInit(); // Function Engine.GameInstance.ReceiveInit // Event|Public|BlueprintEvent // @ game+0x22c9a0
	void KillcamLoadingFinishedDelegate__DelegateSignature(); // DelegateFunction Engine.GameInstance.KillcamLoadingFinishedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22c9a0
	bool HandleNetworkError(); // Function Engine.GameInstance.HandleNetworkError // Event|Public|BlueprintEvent // @ game+0x22c9a0
	void ReceiveShutdown(); // Function Engine.GameInstance.ReceiveShutdown // Event|Public|BlueprintEvent // @ game+0x22c9a0
	int32 DebugRemovePlayer(); // Function Engine.GameInstance.DebugRemovePlayer // Exec|Native|Public // @ game+0x6704814
	int32 DebugCreatePlayer(); // Function Engine.GameInstance.DebugCreatePlayer // Exec|Native|Public // @ game+0x6704780
	enum class ETravelFailure HandleTravelError(); // Function Engine.GameInstance.HandleTravelError // Event|Public|BlueprintEvent // @ game+0x22c9a0
};

// Class Engine.TriggerBase
// Size: 0x400 (Inherited: 0x3f8)
struct ATriggerBase : AActor {
	struct U*a3b7e4d578* CollisionComponent; // 0x3f8(0x08)
};

// Class Engine.TriggerBox
// Size: 0x400 (Inherited: 0x400)
struct ATriggerBox : ATriggerBase {
};

// Class Engine.CapsuleComponent
// Size: 0x9f0 (Inherited: 0x9e0)
struct UCapsuleComponent : U*a3b7e4d578 {
	float CapsuleHalfHeight; // 0x9d8(0x04)
	float CapsuleRadius; // 0x9dc(0x04)
	float CapsuleHeight; // 0x9e0(0x04)
	char pad_9EC[0x4]; // 0x9ec(0x04)

	struct FName *2e26aaaf30(); // Function Engine.CapsuleComponent.*2e26aaaf30 // Native|Public|BlueprintCallable // @ game+0x66e9600
	float *ef518e2bd2(); // Function Engine.CapsuleComponent.*ef518e2bd2 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6714ba4
	bool *bc3968cb8f(); // Function Engine.CapsuleComponent.*bc3968cb8f // Final|Native|Public|BlueprintCallable // @ game+0x6732ab4
	float *011d593501(); // Function Engine.CapsuleComponent.*011d593501 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6714b04
	bool *26dc85d144(); // Function Engine.CapsuleComponent.*26dc85d144 // Final|Native|Public|BlueprintCallable // @ game+0x6732ba0
	float *bdde07625c(); // Function Engine.CapsuleComponent.*bdde07625c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6714f0c
	float *f8205dfbb2(); // Function Engine.CapsuleComponent.*f8205dfbb2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6716df4
	float *0875f2063a(); // Function Engine.CapsuleComponent.*0875f2063a // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6716f38
	bool *1e1f900e13(); // Function Engine.CapsuleComponent.*1e1f900e13 // Final|Native|Public|BlueprintCallable // @ game+0x6732920
	enum class ECollisionResponse *3a3aa0f9aa(); // Function Engine.CapsuleComponent.*3a3aa0f9aa // Native|Public|BlueprintCallable // @ game+0x66e9694
	float *2c7d490376(); // Function Engine.CapsuleComponent.*2c7d490376 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6716e30
	float *9b7bc42e76(); // Function Engine.CapsuleComponent.*9b7bc42e76 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6714ab8
	enum class ECollisionResponse *67e552295b(); // Function Engine.CapsuleComponent.*67e552295b // Native|Public|BlueprintCallable // @ game+0x66e972c
	float *e181a1cfbd(); // Function Engine.CapsuleComponent.*e181a1cfbd // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6716ddc
	float *e4b72b64f4(); // Function Engine.CapsuleComponent.*e4b72b64f4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6716e18
	float *aed5587e4f(); // Function Engine.CapsuleComponent.*aed5587e4f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6714b58
	float *a34ddecc70(); // Function Engine.CapsuleComponent.*a34ddecc70 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6714cd8
};

// Class Engine.PhysicsVolume
// Size: 0x448 (Inherited: 0x430)
struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x430(0x04)
	int32 Priority; // 0x434(0x04)
	float FluidFriction; // 0x438(0x04)
	char bWaterVolume : 1; // 0x43c(0x01)
	char bPhysicsOnContact : 1; // 0x43c(0x01)
	char pad_43C_2 : 6; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	bool *dd9a04a32f; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
};

// Class Engine.DebugCameraController
// Size: 0x800 (Inherited: 0x7b0)
struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; // 0x7b0(0x01)
	char *76e211aeb5 : 1; // 0x7b0(0x01)
	char pad_7B0_2 : 6; // 0x7b0(0x01)
	char pad_7B1[0x7]; // 0x7b1(0x07)
	struct U*dd9d99e533* *148f44aecb; // 0x7b8(0x08)
	char pad_7C0[0x20]; // 0x7c0(0x20)
	float SpeedScale; // 0x7e0(0x04)
	float InitialMaxSpeed; // 0x7e4(0x04)
	float InitialAccel; // 0x7e8(0x04)
	float InitialDecel; // 0x7ec(0x04)
	char pad_7F0[0x10]; // 0x7f0(0x10)

	struct APlayerController* ReceiveOnActivate(); // Function Engine.DebugCameraController.ReceiveOnActivate // Event|Public|BlueprintEvent // @ game+0x22c9a0
	void ShowDebugSelectedInfo(); // Function Engine.DebugCameraController.ShowDebugSelectedInfo // Exec|Native|Public // @ game+0x66ee28c
	void *75c4cb893b(); // Function Engine.DebugCameraController.*75c4cb893b // Final|Native|Public|BlueprintCallable // @ game+0x66ef0a4
	struct AActor* *f6b8be8510(); // Function Engine.DebugCameraController.*f6b8be8510 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66db128
	float *35c773a147(); // Function Engine.DebugCameraController.*35c773a147 // Final|Native|Public|BlueprintCallable // @ game+0x66ec1d8
	struct FHitResult ReceiveOnActorSelected(); // Function Engine.DebugCameraController.ReceiveOnActorSelected // Event|Protected|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22c9a0
	struct APlayerController* ReceiveOnDeactivate(); // Function Engine.DebugCameraController.ReceiveOnDeactivate // Event|Public|BlueprintEvent // @ game+0x22c9a0
};

// Class Engine.Channel
// Size: 0x70 (Inherited: 0x30)
struct UChannel : UObject {
	struct UNetConnection* Connection; // 0x30(0x08)
	char pad_38[0x38]; // 0x38(0x38)
};

// Class Engine.ActorChannel
// Size: 0x370 (Inherited: 0x70)
struct UActorChannel : UChannel {
	struct AActor* Actor; // 0x70(0x08)
	char pad_78[0x2f8]; // 0x78(0x2f8)
};

// Class Engine.DemoActorChannel
// Size: 0x390 (Inherited: 0x370)
struct UDemoActorChannel : UActorChannel {
	char pad_370[0x20]; // 0x370(0x20)
};

// Class Engine.NavigationObjectBase
// Size: 0x420 (Inherited: 0x3f8)
struct ANavigationObjectBase : AActor {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct UCapsuleComponent* CapsuleComponent; // 0x400(0x08)
	struct UBillboardComponent* *1e66e18c2d; // 0x408(0x08)
	struct UBillboardComponent* *7b636d7ee5; // 0x410(0x08)
	char *0cf4674479 : 1; // 0x418(0x01)
	char pad_418_1 : 7; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
};

// Class Engine.PlayerStart
// Size: 0x428 (Inherited: 0x420)
struct APlayerStart : ANavigationObjectBase {
	struct FName PlayerStartTag; // 0x420(0x08)
};

// Class Engine.CheatManager
// Size: 0x80 (Inherited: 0x30)
struct UCheatManager : UObject {
	struct ADebugCameraController* *7d926fcff8; // 0x30(0x08)
	struct UClass* DebugCameraControllerClass; // 0x38(0x08)
	char pad_40[0x40]; // 0x40(0x40)

	void Walk(); // Function Engine.CheatManager.Walk // Exec|Native|Public|BlueprintCallable // @ game+0x59b0974
	void ReceiveInitCheatManager(); // Function Engine.CheatManager.ReceiveInitCheatManager // Event|Public|BlueprintEvent // @ game+0x22c9a0
	float Slomo(); // Function Engine.CheatManager.Slomo // Exec|Native|Public|BlueprintCallable // @ game+0x6763894
	void DestroyAllPawnsExceptTarget(); // Function Engine.CheatManager.DestroyAllPawnsExceptTarget // Exec|Native|Public // @ game+0x6757440
	void Ghost(); // Function Engine.CheatManager.Ghost // Exec|Native|Public|BlueprintCallable // @ game+0x598d54c
	void DestroyTarget(); // Function Engine.CheatManager.DestroyTarget // Exec|Native|Public|BlueprintCallable // @ game+0x59b091c
	void DebugCapsuleSweepCapture(); // Function Engine.CheatManager.DebugCapsuleSweepCapture // Exec|Native|Public // @ game+0x67571e8
	void DebugCapsuleSweep(); // Function Engine.CheatManager.DebugCapsuleSweep // Exec|Native|Public // @ game+0x67571d0
	void *50dd42b97f(); // Function Engine.CheatManager.*50dd42b97f // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x67623d0
	struct FString ViewPlayer(); // Function Engine.CheatManager.ViewPlayer // Exec|Native|Public // @ game+0x676588c
	struct FString Summon(); // Function Engine.CheatManager.Summon // Exec|Native|Public // @ game+0x676417c
	void *700af58636(); // Function Engine.CheatManager.*700af58636 // Native|Protected|BlueprintCallable // @ game+0x6757458
	void FlushLog(); // Function Engine.CheatManager.FlushLog // Exec|Native|Public // @ game+0x6758dd0
	struct UClass* ViewClass(); // Function Engine.CheatManager.ViewClass // Exec|Native|Public // @ game+0x67657f8
	float DamageTarget(); // Function Engine.CheatManager.DamageTarget // Exec|Native|Public|BlueprintCallable // @ game+0x6757134
	void ToggleDebugCamera(); // Function Engine.CheatManager.ToggleDebugCamera // Exec|Native|Public // @ game+0x676502c
	void DumpVoiceMutingState(); // Function Engine.CheatManager.DumpVoiceMutingState // Exec|Native|Public // @ game+0x59304ac
	void SetMouseSensitivityToDefault(); // Function Engine.CheatManager.SetMouseSensitivityToDefault // Final|Exec|Native|Public // @ game+0x6762960
	float FreezeFrame(); // Function Engine.CheatManager.FreezeFrame // Exec|Native|Public|BlueprintCallable // @ game+0x6758de8
	struct UClass* DestroyAll(); // Function Engine.CheatManager.DestroyAll // Exec|Native|Public // @ game+0x66d30d8
	void God(); // Function Engine.CheatManager.God // Exec|Native|Public|BlueprintCallable // @ game+0x59b09b4
	struct UClass* DestroyPawns(); // Function Engine.CheatManager.DestroyPawns // Exec|Native|Public // @ game+0x607b174
	void Fly(); // Function Engine.CheatManager.Fly // Exec|Native|Public|BlueprintCallable // @ game+0x59b0934
	void PlayersOnly(); // Function Engine.CheatManager.PlayersOnly // Exec|Native|Public|BlueprintCallable // @ game+0x6761390
	void InvertMouse(); // Function Engine.CheatManager.InvertMouse // Final|Exec|Native|Public // @ game+0x675c2cc
	void DumpChatState(); // Function Engine.CheatManager.DumpChatState // Exec|Native|Public // @ game+0x6757620
	struct FString CheatScript(); // Function Engine.CheatManager.CheatScript // Final|Exec|Native|Public // @ game+0x67545fc
	bool DebugCapsuleSweepComplex(); // Function Engine.CheatManager.DebugCapsuleSweepComplex // Exec|Native|Public // @ game+0x67572b0
	void DumpOnlineSessionState(); // Function Engine.CheatManager.DumpOnlineSessionState // Exec|Native|Public // @ game+0x6757638
	void DebugCapsuleSweepClear(); // Function Engine.CheatManager.DebugCapsuleSweepClear // Exec|Native|Public // @ game+0x6757298
	float SetNavDrawDistance(); // Function Engine.CheatManager.SetNavDrawDistance // Final|Exec|Native|Public // @ game+0x6762974
	struct FString BugIt(); // Function Engine.CheatManager.BugIt // Exec|Native|Public // @ game+0x675296c
	void RebuildNavigation(); // Function Engine.CheatManager.RebuildNavigation // Exec|Native|Public // @ game+0x67615a0
	void ToggleAILogging(); // Function Engine.CheatManager.ToggleAILogging // Exec|Native|Public // @ game+0x6765014
	void Teleport(); // Function Engine.CheatManager.Teleport // Exec|Native|Public|BlueprintCallable // @ game+0x59a5e0c
	void DumpPartyState(); // Function Engine.CheatManager.DumpPartyState // Exec|Native|Public // @ game+0x6757650
	struct FName StreamLevelOut(); // Function Engine.CheatManager.StreamLevelOut // Exec|Native|Public // @ game+0x6763ec0
	enum class ECollisionChannel DebugCapsuleSweepChannel(); // Function Engine.CheatManager.DebugCapsuleSweepChannel // Exec|Native|Public // @ game+0x6757200
	void ReceiveEndPlay(); // Function Engine.CheatManager.ReceiveEndPlay // Event|Public|BlueprintEvent // @ game+0x22c9a0
	void *3854a48cf0(); // Function Engine.CheatManager.*3854a48cf0 // Native|Protected|BlueprintCallable // @ game+0x67576e8
	struct FName StreamLevelIn(); // Function Engine.CheatManager.StreamLevelIn // Exec|Native|Public // @ game+0x6763e2c
	struct FName ViewActor(); // Function Engine.CheatManager.ViewActor // Exec|Native|Public // @ game+0x6765764
	void LogLoc(); // Function Engine.CheatManager.LogLoc // Exec|Native|Public // @ game+0x59a59f4
	void ViewSelf(); // Function Engine.CheatManager.ViewSelf // Exec|Native|Public // @ game+0x6765950
	void TestCollisionDistance(); // Function Engine.CheatManager.TestCollisionDistance // Exec|Native|Public // @ game+0x6764268
	struct FString BugItStringCreator(); // Function Engine.CheatManager.BugItStringCreator // Exec|Native|Public|HasOutParms|HasDefaults // @ game+0x6752c4c
	float ChangeSize(); // Function Engine.CheatManager.ChangeSize // Exec|Native|Public|BlueprintCallable // @ game+0x6754560
	float DebugCapsuleSweepSize(); // Function Engine.CheatManager.DebugCapsuleSweepSize // Exec|Native|Public // @ game+0x6757360
	void SetWorldOrigin(); // Function Engine.CheatManager.SetWorldOrigin // Final|Exec|Native|Public // @ game+0x67634c8
	struct FName OnlyLoadLevel(); // Function Engine.CheatManager.OnlyLoadLevel // Exec|Native|Public // @ game+0x6760e10
	void DebugCapsuleSweepPawn(); // Function Engine.CheatManager.DebugCapsuleSweepPawn // Exec|Native|Public // @ game+0x6757348
	float BugItGo(); // Function Engine.CheatManager.BugItGo // Exec|Native|Public // @ game+0x6752a30
};

// Class Engine.*e915f35194
// Size: 0x9d0 (Inherited: 0x9c0)
struct U*e915f35194 : UPrimitiveComponent {
	struct TArray<struct FNavigationLink> Links; // 0x9c0(0x10)
};

// Class Engine.NavArea
// Size: 0x48 (Inherited: 0x30)
struct UNavArea : UObject {
	float DefaultCost; // 0x30(0x04)
	float FixedAreaEnteringCost; // 0x34(0x04)
	struct FColor DrawColor; // 0x38(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x3c(0x04)
	char bSupportsAgent0 : 1; // 0x40(0x01)
	char bSupportsAgent1 : 1; // 0x40(0x01)
	char bSupportsAgent2 : 1; // 0x40(0x01)
	char bSupportsAgent3 : 1; // 0x40(0x01)
	char bSupportsAgent4 : 1; // 0x40(0x01)
	char bSupportsAgent5 : 1; // 0x40(0x01)
	char bSupportsAgent6 : 1; // 0x40(0x01)
	char bSupportsAgent7 : 1; // 0x40(0x01)
	char bSupportsAgent8 : 1; // 0x41(0x01)
	char bSupportsAgent9 : 1; // 0x41(0x01)
	char bSupportsAgent10 : 1; // 0x41(0x01)
	char bSupportsAgent11 : 1; // 0x41(0x01)
	char bSupportsAgent12 : 1; // 0x41(0x01)
	char bSupportsAgent13 : 1; // 0x41(0x01)
	char bSupportsAgent14 : 1; // 0x41(0x01)
	char bSupportsAgent15 : 1; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class Engine.LevelScriptActor
// Size: 0x400 (Inherited: 0x3f8)
struct ALevelScriptActor : AActor {
	char *a7ca75b064 : 1; // 0x3f8(0x01)
	char pad_3F8_1 : 7; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)

	void LevelReset(); // Function Engine.LevelScriptActor.LevelReset // BlueprintAuthorityOnly|Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct FIntVector WorldOriginLocationChanged(); // Function Engine.LevelScriptActor.WorldOriginLocationChanged // Event|Public|HasDefaults|BlueprintEvent // @ game+0x22c9a0
	bool *5a504151cb(); // Function Engine.LevelScriptActor.*5a504151cb // Native|Public|BlueprintCallable // @ game+0x7d0a5c
	bool *dcb17fb5d9(); // Function Engine.LevelScriptActor.*dcb17fb5d9 // Native|Public|BlueprintCallable // @ game+0x59b6974
};

// Class Engine.ChildActorComponent
// Size: 0x4b0 (Inherited: 0x480)
struct UChildActorComponent : USceneComponent {
	struct UClass* ChildActorClass; // 0x478(0x08)
	struct AActor* ChildActor; // 0x480(0x08)
	struct AActor* ChildActorTemplate; // 0x488(0x08)
	char pad_498[0x18]; // 0x498(0x18)

	struct UClass* *a0eca42e03(); // Function Engine.ChildActorComponent.*a0eca42e03 // Final|Native|Public|BlueprintCallable // @ game+0x66e92e8
};

// Class Engine.CameraComponent
// Size: 0xa70 (Inherited: 0x480)
struct UCameraComponent : USceneComponent {
	float FieldOfView; // 0x478(0x04)
	float OrthoWidth; // 0x47c(0x04)
	float OrthoNearClipPlane; // 0x480(0x04)
	float OrthoFarClipPlane; // 0x484(0x04)
	float AspectRatio; // 0x488(0x04)
	char bConstrainAspectRatio : 1; // 0x48c(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x48c(0x01)
	char bLockToHmd : 1; // 0x48c(0x01)
	char bUsePawnControlRotation : 1; // 0x48c(0x01)
	enum class ECameraProjectionMode ProjectionMode; // 0x490(0x01)
	float PostProcessBlendWeight; // 0x494(0x04)
	char pad_499_4 : 4; // 0x499(0x01)
	char pad_49A[0x6]; // 0x49a(0x06)
	struct FPostProcessSettings PostProcessSettings; // 0x4a0(0x570)
	char pad_A10[0x58]; // 0xa10(0x58)
	char bUseControllerViewRotation : 1; // 0xa68(0x01)
	char pad_A68_1 : 7; // 0xa68(0x01)
	char pad_A69[0x7]; // 0xa69(0x07)

	bool *3e8a28e83e(); // Function Engine.CameraComponent.*3e8a28e83e // Final|Native|Public|BlueprintCallable // @ game+0x673e460
	float *ed3ee02381(); // Function Engine.CameraComponent.*ed3ee02381 // Final|Native|Public|BlueprintCallable // @ game+0x6731140
	bool *2cfadfbbf2(); // Function Engine.CameraComponent.*2cfadfbbf2 // Final|Native|Public|BlueprintCallable // @ game+0x6733944
	struct F*067063007d *65b65a3f19(); // Function Engine.CameraComponent.*65b65a3f19 // Native|Public|HasOutParms|BlueprintCallable // @ game+0x670d34c
	float *1dc2d160f2(); // Function Engine.CameraComponent.*1dc2d160f2 // Final|Native|Public|BlueprintCallable // @ game+0x6735f48
	float *052965d968(); // Function Engine.CameraComponent.*052965d968 // Final|Native|Public|BlueprintCallable // @ game+0x673a238
	enum class ECameraProjectionMode *cb2bddba68(); // Function Engine.CameraComponent.*cb2bddba68 // Final|Native|Public|BlueprintCallable // @ game+0x673b06c
	float *fc57e66de9(); // Function Engine.CameraComponent.*fc57e66de9 // Final|Native|Public|BlueprintCallable // @ game+0x673ace0
	float *a634495c79(); // Function Engine.CameraComponent.*a634495c79 // Final|Native|Public|BlueprintCallable // @ game+0x6737c24
	float *47a266b8d3(); // Function Engine.CameraComponent.*47a266b8d3 // Final|Native|Public|BlueprintCallable // @ game+0x673a1a0
	float *fa132a0246(); // Function Engine.CameraComponent.*fa132a0246 // Final|Native|Public|BlueprintCallable // @ game+0x66f4960
};

// Class Engine.Engine
// Size: 0xf50 (Inherited: 0x30)
struct UEngine : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UFont* TinyFont; // 0x38(0x08)
	struct FStringAssetReference TinyFontName; // 0x40(0x10)
	struct UFont* SmallFont; // 0x50(0x08)
	struct FStringAssetReference SmallFontName; // 0x58(0x10)
	struct UFont* *507343f03f; // 0x68(0x08)
	struct FStringAssetReference MediumFontName; // 0x70(0x10)
	struct UFont* LargeFont; // 0x80(0x08)
	struct FStringAssetReference LargeFontName; // 0x88(0x10)
	struct UFont* *ae8c533874; // 0x98(0x08)
	struct FStringAssetReference SubtitleFontName; // 0xa0(0x10)
	struct TArray<struct UFont*> *bf37e23aad; // 0xb0(0x10)
	float NearClipPlane; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FStringClassReference AssetManagerClassName; // 0xc8(0x10)
	struct TArray<struct FLinearColor> LODColorationColors; // 0xd8(0x10)
	char pad_E8[0x50]; // 0xe8(0x50)
	char bRenderLightMapDensityGrayscale : 1; // 0x138(0x01)
	char pad_138_1 : 7; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	struct FFloatRange SmoothedFrameRateRange; // 0x13c(0x10)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct UGameViewportClient* GameViewport; // 0x150(0x08)
	struct FColor *d70aaca090; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FStringClassReference PhysicsCollisionHandlerClassName; // 0x160(0x10)
	struct FString VertexColorViewModeMaterialName_BlueOnly; // 0x170(0x10)
	struct FColor *563b988ac5; // 0x180(0x04)
	float MaxLightMapDensity; // 0x184(0x04)
	struct FStringAssetReference HighFrequencyNoiseTextureName; // 0x188(0x10)
	struct FStringClassReference WorldSettingsClassName; // 0x198(0x10)
	struct UTexture2D* *acefe7e29a; // 0x1a8(0x08)
	struct FString VertexColorMaterialName; // 0x1b0(0x10)
	struct FStringAssetReference MiniFontTextureName; // 0x1c0(0x10)
	struct UMaterial* *ab703d8f59; // 0x1d0(0x08)
	struct UGameUserSettings* GameUserSettings; // 0x1d8(0x08)
	struct UTextureCube* *27c2cc10e6; // 0x1e0(0x08)
	float MaxPixelShaderAdditiveComplexityCount; // 0x1e8(0x04)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	struct FStringAssetReference LightMapDensityTextureName; // 0x1f0(0x10)
	struct FStringAssetReference DefaultReflectionCaptureTextureName; // 0x200(0x10)
	struct FLinearColor LightMapDensitySelectedColor; // 0x210(0x10)
	struct UTexture2D* *b064f85396; // 0x220(0x08)
	struct FColor *0726a044a7; // 0x228(0x04)
	struct FColor *f3e6f5bfd3; // 0x22c(0x04)
	struct UTexture* DefaultDiffuseTexture; // 0x230(0x08)
	char pad_238[0x8]; // 0x238(0x08)
	struct FString LightingTexelDensityName; // 0x240(0x10)
	struct TArray<struct FLinearColor> StreamingAccuracyColors; // 0x250(0x10)
	struct UClass* *bca32af458; // 0x260(0x08)
	struct FStringClassReference AIControllerClassName; // 0x268(0x10)
	struct UMaterialInstanceDynamic* *72154a0386; // 0x278(0x08)
	struct TArray<struct F*53e10b7853> ActiveStructRedirects; // 0x280(0x10)
	char bAllowMatureLanguage : 1; // 0x290(0x01)
	char pad_290_1 : 7; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float CameraRotationThreshold; // 0x294(0x04)
	struct UMaterial* *e6d19dd636; // 0x298(0x08)
	struct UMaterial* *64c29e4c8e; // 0x2a0(0x08)
	struct UClass* *398beed366; // 0x2a8(0x08)
	struct FStringAssetReference DefaultBokehTextureName; // 0x2b0(0x10)
	struct FString PlayOnConsoleSaveDir; // 0x2c0(0x10)
	struct UObject* *c09072c920; // 0x2d0(0x08)
	char bSubtitlesForcedOff : 1; // 0x2d8(0x01)
	char pad_2D8_1 : 7; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	int32 *ffcb6d7674; // 0x2dc(0x04)
	int32 *0a40c80458; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct UMaterial* LevelColorationLitMaterial; // 0x2e8(0x08)
	struct TArray<struct FLinearColor> LightComplexityColors; // 0x2f0(0x10)
	struct FStringAssetReference ArrowMaterialName; // 0x300(0x10)
	struct TArray<struct FString> *93075208c5; // 0x310(0x10)
	char pad_320[0x18]; // 0x320(0x18)
	struct UMaterialInstanceDynamic* *254455a899; // 0x338(0x08)
	struct FString VertexColorViewModeMaterialName_GreenOnly; // 0x340(0x10)
	struct FColor *5a2eee72e8; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct TArray<struct FLinearColor> HLODColorationColors; // 0x358(0x10)
	struct TArray<struct FLinearColor> QuadComplexityColors; // 0x368(0x10)
	struct FStringClassReference ConsoleClassName; // 0x378(0x10)
	struct UMaterialInstanceDynamic* *d3f16fe233; // 0x388(0x08)
	struct FStringAssetReference PreIntegratedSkinBRDFTextureName; // 0x390(0x10)
	enum class *dcab1bab62 *20eca73099; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct UMaterial* VertexColorMaterial; // 0x3a8(0x08)
	struct UClass* *86033d1ce7; // 0x3b0(0x08)
	float MeshLODRange; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct UMaterial* *38f7dc552f; // 0x3c0(0x08)
	int32 MaxParticleResizeWarn; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FString LevelColorationLitMaterialName; // 0x3d0(0x10)
	struct UMaterialInstanceDynamic* *c9913ab955; // 0x3e0(0x08)
	struct FColor *707f925d4e; // 0x3e8(0x04)
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x3ec(0x01)
	char pad_3EC_1 : 7; // 0x3ec(0x01)
	char pad_3ED[0x3]; // 0x3ed(0x03)
	int32 NumPawnsAllowedToBeSpawnedInAFrame; // 0x3f0(0x04)
	char bShouldGenerateLowQualityLightmaps : 1; // 0x3f4(0x01)
	char pad_3F4_1 : 7; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)
	struct FStringAssetReference DefaultBSPVertexTextureName; // 0x3f8(0x10)
	struct UTexture2D* DefaultTexture; // 0x408(0x08)
	struct UMaterial* DebugMeshMaterial; // 0x410(0x08)
	struct UMaterial* ShadedLevelColorationLitMaterial; // 0x418(0x08)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x420(0x10)
	float IdealLightMapDensity; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct FStringClassReference GameSingletonClassName; // 0x438(0x10)
	struct TArray<struct F*ca6e9f58f0> *665f43cd1a; // 0x448(0x10)
	struct UMaterial* *eae6f63fae; // 0x458(0x08)
	struct UMaterial* *9eae766840; // 0x460(0x08)
	struct FColor *52674cf283; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct UClass* *ad8296b465; // 0x470(0x08)
	struct FString WireframeMaterialName; // 0x478(0x10)
	struct FLinearColor LightingOnlyBrightness; // 0x488(0x10)
	struct FLinearColor LightingOnlySpecular; // 0x498(0x10)
	struct TArray<struct FString> AdditionalFontNames; // 0x4a8(0x10)
	struct FString ShadedLevelColorationUnlitMaterialName; // 0x4b8(0x10)
	struct FString ShadedLevelColorationLitMaterialName; // 0x4c8(0x10)
	float RenderLightMapDensityGrayscaleScale; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct FStringAssetReference DefaultBloomKernelTextureName; // 0x4e0(0x10)
	struct UTexture2D* *724b637f77; // 0x4f0(0x08)
	struct UMaterial* RemoveSurfaceMaterial; // 0x4f8(0x08)
	struct UTexture2D* *8f60aed062; // 0x500(0x08)
	struct UTexture* WeightMapPlaceholderTexture; // 0x508(0x08)
	struct FStringClassReference LevelScriptActorClassName; // 0x510(0x10)
	struct UMaterial* *3af804f5e4; // 0x520(0x08)
	struct FColor *aea916ce36; // 0x528(0x04)
	char pad_52C[0xc]; // 0x52c(0x0c)
	struct UMaterialInstanceDynamic* *2fc3307afc; // 0x538(0x08)
	struct FColor *244e026abb; // 0x540(0x04)
	struct FColor *93d8306f3e; // 0x544(0x04)
	struct UClass* *493183b606; // 0x548(0x08)
	struct F*a670be9e73 PhysicErrorCorrection; // 0x550(0x1c)
	char pad_56C[0x4]; // 0x56c(0x04)
	struct UMaterial* *ed6cf214e5; // 0x570(0x08)
	struct FStringClassReference AvoidanceManagerClassName; // 0x578(0x10)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x588(0x08)
	struct TArray<struct F*0ae4a8d9ad> ActiveGameNameRedirects; // 0x590(0x10)
	struct UMaterial* *2364035723; // 0x5a0(0x08)
	struct TArray<struct F*7decbe1dec> ActivePluginRedirects; // 0x5a8(0x10)
	struct FStringClassReference GameUserSettingsClassName; // 0x5b8(0x10)
	struct UTexture2D* *6f11af224f; // 0x5c8(0x08)
	struct FStringClassReference GameViewportClientClassName; // 0x5d0(0x10)
	struct FColor *e415b10ea1; // 0x5e0(0x04)
	float MinLightMapDensity; // 0x5e4(0x04)
	struct FStringAssetReference DefaultTextureName; // 0x5e8(0x10)
	struct UTexture2D* MiniFontTexture; // 0x5f8(0x08)
	struct FStringAssetReference RemoveSurfaceMaterialName; // 0x600(0x10)
	struct TArray<struct FLinearColor> ShaderComplexityColors; // 0x610(0x10)
	struct UClass* *f097998e2e; // 0x620(0x08)
	char bSubtitlesEnabled : 1; // 0x628(0x01)
	char pad_628_1 : 7; // 0x628(0x01)
	char pad_629[0x7]; // 0x629(0x07)
	struct FStringAssetReference DefaultPhysMaterialName; // 0x630(0x10)
	float MaxOcclusionPixelsFraction; // 0x640(0x04)
	struct FColor *e67cf9003a; // 0x644(0x04)
	float MaxES2PixelShaderAdditiveComplexityCount; // 0x648(0x04)
	char pad_64C[0x4]; // 0x64c(0x04)
	struct UClass* *5df25eabe1; // 0x650(0x08)
	struct UMaterialInstanceDynamic* *7e0f4b06ea; // 0x658(0x08)
	int32 *1869c29680; // 0x660(0x04)
	char pad_664[0x4]; // 0x664(0x04)
	struct TArray<struct F*4fc053d54d> StatColorMappings; // 0x668(0x10)
	struct FStringAssetReference DebugMeshMaterialName; // 0x678(0x10)
	char bCanBlueprintsTickByDefault : 1; // 0x688(0x01)
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x688(0x01)
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x688(0x01)
	char bEnableEditorPSysRealtimeLOD : 1; // 0x688(0x01)
	char pad_688_4 : 1; // 0x688(0x01)
	char bSmoothFrameRate : 1; // 0x688(0x01)
	char bUseFixedFrameRate : 1; // 0x688(0x01)
	char pad_688_7 : 1; // 0x688(0x01)
	char pad_689[0x7]; // 0x689(0x07)
	struct FStringClassReference DefaultBlueprintBaseClassName; // 0x690(0x10)
	float *8650eed282; // 0x6a0(0x04)
	struct FLinearColor DefaultSelectedMaterialColor; // 0x6a4(0x10)
	struct FLinearColor *3102132612; // 0x6b4(0x10)
	struct FLinearColor *bde2361a9e; // 0x6c4(0x10)
	struct FLinearColor *51c458ade6; // 0x6d4(0x10)
	struct FLinearColor *5ec7359838; // 0x6e4(0x10)
	bool *c803f0265e; // 0x6f4(0x01)
	char pad_6F5[0x3]; // 0x6f5(0x03)
	char bEnableOnScreenDebugMessages : 1; // 0x6f8(0x01)
	char *752ed78a39 : 1; // 0x6f8(0x01)
	char bSuppressMapWarnings : 1; // 0x6f8(0x01)
	char bDisableAILogging : 1; // 0x6f8(0x01)
	char pad_6F8_4 : 4; // 0x6f8(0x01)
	char pad_6F9[0x3]; // 0x6f9(0x03)
	uint32 bEnableVisualLogRecordingOnStart; // 0x6fc(0x04)
	struct FBox *bd784f0e4c; // 0x700(0x1c)
	char pad_71C[0x4]; // 0x71c(0x04)
	int32 *b6f2f8e636; // 0x720(0x04)
	char *bdad3e99f4 : 1; // 0x724(0x01)
	char pad_724_1 : 7; // 0x724(0x01)
	char pad_725[0x3]; // 0x725(0x03)
	struct FString ParticleEventManagerClassPath; // 0x728(0x10)
	char pad_738[0x28]; // 0x738(0x28)
	float SelectionHighlightIntensity; // 0x760(0x04)
	float *c80ce80761; // 0x764(0x04)
	float BSPSelectionHighlightIntensity; // 0x768(0x04)
	float HoverHighlightIntensity; // 0x76c(0x04)
	float *dd881ac63c; // 0x770(0x04)
	float PrimitiveBaseIntensity; // 0x774(0x04)
	float PrimitiveSelectedIntensity; // 0x778(0x04)
	float PrimitiveHoverIntensity; // 0x77c(0x04)
	char pad_780[0x290]; // 0x780(0x290)
	struct UAssetManager* AssetManager; // 0xa10(0x08)
	float FixedFrameRate; // 0xa18(0x04)
	float RenderLightMapDensityColorScale; // 0xa1c(0x04)
	struct UClass* *802217e7fd; // 0xa20(0x08)
	struct UClass* *eac8e4cb12; // 0xa28(0x08)
	struct UMaterial* LevelColorationUnlitMaterial; // 0xa30(0x08)
	int32 MaximumLoopIterationCount; // 0xa38(0x04)
	char pad_A3C[0x4]; // 0xa3c(0x04)
	struct FStringClassReference NavigationSystemClassName; // 0xa40(0x10)
	struct FString VertexColorViewModeMaterialName_ColorOnly; // 0xa50(0x10)
	float PrimitiveProbablyVisibleTime; // 0xa60(0x04)
	char pad_A64[0x4]; // 0xa64(0x04)
	struct FString LevelColorationUnlitMaterialName; // 0xa68(0x10)
	char pad_A78[0x1d8]; // 0xa78(0x1d8)
	struct TArray<struct F*71c8b5597f> NetDriverDefinitions; // 0xc50(0x10)
	struct TArray<struct FString> ServerActors; // 0xc60(0x10)
	struct TArray<struct FString> *2ce8af1bee; // 0xc70(0x10)
	char *e86f62ac90 : 1; // 0xc80(0x01)
	char pad_C80_1 : 7; // 0xc80(0x01)
	char pad_C81[0x7]; // 0xc81(0x07)
	struct UMaterial* *4bb7c31cac; // 0xc88(0x08)
	struct FStringAssetReference WeightMapPlaceholderTextureName; // 0xc90(0x10)
	struct FString *9c43f6ae30; // 0xca0(0x10)
	struct FStringAssetReference DefaultDiffuseTextureName; // 0xcb0(0x10)
	struct UMaterialInstanceDynamic* *c12f2d2c67; // 0xcc0(0x08)
	struct FString VertexColorViewModeMaterialName_RedOnly; // 0xcc8(0x10)
	struct FString *2a2ef25c03; // 0xcd8(0x10)
	float CameraTranslationThreshold; // 0xce8(0x04)
	char pad_CEC[0x4]; // 0xcec(0x04)
	struct FStringClassReference LocalPlayerClassName; // 0xcf0(0x10)
	struct TArray<struct F*c345caf06a> ActiveClassRedirects; // 0xd00(0x10)
	struct TArray<struct FLinearColor> StationaryLightOverlapColors; // 0xd10(0x10)
	char bHardwareSurveyEnabled : 1; // 0xd20(0x01)
	char pad_D20_1 : 7; // 0xd20(0x01)
	char pad_D21[0x3]; // 0xd21(0x03)
	float DisplayGamma; // 0xd24(0x04)
	struct UMaterial* WireframeMaterial; // 0xd28(0x08)
	float MinDesiredFrameRate; // 0xd30(0x04)
	struct FLinearColor LightMapDensityVertexMappedColor; // 0xd34(0x10)
	char bPauseOnLossOfFocus : 1; // 0xd44(0x01)
	char pad_D44_1 : 7; // 0xd44(0x01)
	char pad_D45[0x3]; // 0xd45(0x03)
	int32 MaxParticleResize; // 0xd48(0x04)
	char pad_D4C[0x4]; // 0xd4c(0x04)
	struct UMaterial* *3c832889f7; // 0xd50(0x08)
	struct FStringAssetReference PreviewShadowsIndicatorMaterialName; // 0xd58(0x10)
	struct FColor *8630e54ec6; // 0xd68(0x04)
	char pad_D6C[0x4]; // 0xd6c(0x04)
	struct FStringAssetReference InvalidLightmapSettingsMaterialName; // 0xd70(0x10)
	float NetClientTicksPerSecond; // 0xd80(0x04)
	char pad_D84[0x4]; // 0xd84(0x04)
	struct UTexture2D* *4da9fb7bb4; // 0xd88(0x08)
	char pad_D90[0x18]; // 0xd90(0x18)
	int32 *d6c76d00bb; // 0xda8(0x04)
	char pad_DAC[0x1a4]; // 0xdac(0x1a4)
};

// Class Engine.*9f9daacaf2
// Size: 0x40 (Inherited: 0x30)
struct U*9f9daacaf2 : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.GameViewportClient
// Size: 0x680 (Inherited: 0x40)
struct UGameViewportClient : U*9f9daacaf2 {
	char pad_40[0x28]; // 0x40(0x28)
	struct UConsole* *d90abf5355; // 0x68(0x08)
	char pad_70[0x2b0]; // 0x70(0x2b0)
	struct TArray<struct F*c7179e5679> *fc61f1b873; // 0x320(0x10)
	char pad_330[0x250]; // 0x330(0x250)
	struct UGameInstance* GameInstance; // 0x580(0x08)
	char pad_588[0xf8]; // 0x588(0xf8)

	void SSSwapControllers(); // Function Engine.GameViewportClient.SSSwapControllers // Exec|Native|Public // @ game+0x672e73c
	int32 SetConsoleTarget(); // Function Engine.GameViewportClient.SetConsoleTarget // Exec|Native|Public // @ game+0x6733730
	void ShowTitleSafeArea(); // Function Engine.GameViewportClient.ShowTitleSafeArea // Exec|Native|Public // @ game+0xb03700
};

// Class Engine.Console
// Size: 0x110 (Inherited: 0x30)
struct UConsole : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct ULocalPlayer* *5524a3c76c; // 0x40(0x08)
	struct UTexture2D* *f4becc10a3; // 0x48(0x08)
	struct UTexture2D* *75070b6094; // 0x50(0x08)
	char pad_58[0x18]; // 0x58(0x18)
	struct TArray<struct FString> HistoryBuffer; // 0x70(0x10)
	char pad_80[0x90]; // 0x80(0x90)
};

// Class Engine.NetDriver
// Size: 0x4c8 (Inherited: 0x30)
struct UNetDriver : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString NetConnectionClassName; // 0x38(0x10)
	int32 MaxDownloadSize; // 0x48(0x04)
	char bClampListenServerTickRate : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32 NetServerMaxTickRate; // 0x50(0x04)
	int32 MaxInternetClientRate; // 0x54(0x04)
	int32 MaxClientRate; // 0x58(0x04)
	float ServerTravelPause; // 0x5c(0x04)
	float SpawnPrioritySeconds; // 0x60(0x04)
	float RelevantTimeout; // 0x64(0x04)
	float KeepAliveTime; // 0x68(0x04)
	float InitialConnectTimeout; // 0x6c(0x04)
	float ConnectionTimeout; // 0x70(0x04)
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x74(0x04)
	bool bNoTimeouts; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UNetConnection* *7d547c567d; // 0x80(0x08)
	struct TArray<struct UNetConnection*> *e5213003a6; // 0x88(0x10)
	char pad_98[0x28]; // 0x98(0x28)
	struct UWorld* World; // 0xc0(0x08)
	struct UPackage* *08f3ae6a9a; // 0xc8(0x08)
	char pad_D0[0x20]; // 0xd0(0x20)
	struct UClass* *cac88d6246; // 0xf0(0x08)
	struct UProperty* *ea450d9b76; // 0xf8(0x08)
	struct UProperty* *662b5c1bdb; // 0x100(0x08)
	struct FName NetDriverName; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)
	float Time; // 0x118(0x04)
	char pad_11C[0x3ac]; // 0x11c(0x3ac)
};

// Class Engine.DemoNetDriver
// Size: 0xc60 (Inherited: 0x4c8)
struct UDemoNetDriver : UNetDriver {
	char pad_4C8[0xf8]; // 0x4c8(0xf8)
	struct TMap<struct FString, struct F*2c11a2a2dc> *0468103a99; // 0x5c0(0x50)
	char pad_610[0x430]; // 0x610(0x430)
	bool *0efb4f545b; // 0xa40(0x01)
	char pad_A41[0x21f]; // 0xa41(0x21f)
};

// Class Engine.InstancedStaticMeshComponent
// Size: 0xc40 (Inherited: 0xb60)
struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	struct TArray<struct F*00296bd9df> PerInstanceSMData; // 0xb60(0x10)
	int32 InstancingRandomSeed; // 0xb70(0x04)
	int32 InstanceStartCullDistance; // 0xb74(0x04)
	int32 InstanceEndCullDistance; // 0xb78(0x04)
	char pad_B7C[0x4]; // 0xb7c(0x04)
	struct TArray<int32> *8ac0f5c877; // 0xb80(0x10)
	struct TArray<int32> *779539efbd; // 0xb90(0x10)
	char pad_BA0[0x78]; // 0xba0(0x78)
	struct UPhysicsSerializer* PhysicsSerializer; // 0xc18(0x08)
	bool *b3b71326a9; // 0xc20(0x01)
	char pad_C21[0x3]; // 0xc21(0x03)
	int32 *9ff5d4ad59; // 0xc24(0x04)
	struct TArray<struct F*cf35bf3a14> *a62ebc8109; // 0xc28(0x10)
	char pad_C38[0x8]; // 0xc38(0x08)

	int32 *af6477ee17(); // Function Engine.InstancedStaticMeshComponent.*af6477ee17 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f432c
	bool *91e4299bf1(); // Function Engine.InstancedStaticMeshComponent.*91e4299bf1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x673769c
	bool *068cda575c(); // Function Engine.InstancedStaticMeshComponent.*068cda575c // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6748384
	int32 *6676b9aa35(); // Function Engine.InstancedStaticMeshComponent.*6676b9aa35 // Final|Native|Public|BlueprintCallable // @ game+0x67342e0
	struct TArray<int32> *e298126c80(); // Function Engine.InstancedStaticMeshComponent.*e298126c80 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6710fa8
	int32 *be3ae800fc(); // Function Engine.InstancedStaticMeshComponent.*be3ae800fc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f476c
	void *f58b7ec745(); // Function Engine.InstancedStaticMeshComponent.*f58b7ec745 // Native|Public|BlueprintCallable // @ game+0x5981938
	int32 *4b502e7200(); // Function Engine.InstancedStaticMeshComponent.*4b502e7200 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6710060
	bool *cf01ee4c9a(); // Function Engine.InstancedStaticMeshComponent.*cf01ee4c9a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x671023c
	bool *765b562637(); // Function Engine.InstancedStaticMeshComponent.*765b562637 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67106bc
	struct TArray<int32> *a978c20ae5(); // Function Engine.InstancedStaticMeshComponent.*a978c20ae5 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6710e40
	bool *e1ee01c104(); // Function Engine.InstancedStaticMeshComponent.*e1ee01c104 // Native|Public|BlueprintCallable // @ game+0x672d9e8
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
// Size: 0xd70 (Inherited: 0xc40)
struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	char pad_C40[0x68]; // 0xc40(0x68)
	struct TArray<int32> *5476f2f76f; // 0xca8(0x10)
	int32 *e097f8dc22; // 0xcb8(0x04)
	char pad_CBC[0x4]; // 0xcbc(0x04)
	struct FBox *73116382bf; // 0xcc0(0x1c)
	struct FBox *0a7014d240; // 0xcdc(0x1c)
	struct TArray<struct FBox> *36aef9bc89; // 0xcf8(0x10)
	char pad_D08[0x20]; // 0xd08(0x20)
	int32 *03b06dfb87; // 0xd28(0x04)
	struct FBoxSphereBounds *df22e79645; // 0xd2c(0x1c)
	char *515f2592b9 : 1; // 0xd48(0x01)
	char *d571b06104 : 1; // 0xd48(0x01)
	char pad_D48_2 : 6; // 0xd48(0x01)
	char pad_D49[0x27]; // 0xd49(0x27)

	bool *0c79aede64(); // Function Engine.HierarchicalInstancedStaticMeshComponent.*0c79aede64 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x672da8c
};

// Class Engine.GameEngine
// Size: 0xfb0 (Inherited: 0xf50)
struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xf50(0x04)
	float ServerFlushLogInterval; // 0xf54(0x04)
	struct UGameInstance* GameInstance; // 0xf58(0x08)
	char pad_F60[0x40]; // 0xf60(0x40)
	struct TArray<struct UWorld*> *7be9bd717a; // 0xfa0(0x10)
};

// Class Engine.Player
// Size: 0x50 (Inherited: 0x30)
struct UPlayer : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	int32 *c8c4b728e8; // 0x40(0x04)
	int32 ConfiguredInternetSpeed; // 0x44(0x04)
	int32 ConfiguredLanSpeed; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.NetConnection
// Size: 0x65850 (Inherited: 0x50)
struct UNetConnection : UPlayer {
	struct TArray<struct UChildConnection*> Children; // 0x50(0x10)
	struct UNetDriver* Driver; // 0x60(0x08)
	struct UClass* *7cc253e76a; // 0x68(0x08)
	struct UPackageMap* PackageMap; // 0x70(0x08)
	struct TArray<struct UChannel*> *e44c91181f; // 0x78(0x10)
	struct TArray<struct AActor*> *274863db2e; // 0x88(0x10)
	struct AActor* ViewTarget; // 0x98(0x08)
	struct AActor* *5e3a3b3f66; // 0xa0(0x08)
	int32 *260ba92558; // 0xa8(0x04)
	char *f5fadd2d69 : 1; // 0xac(0x01)
	char pad_AC_1 : 1; // 0xac(0x01)
	char *1194f7a57c : 1; // 0xac(0x01)
	char pad_AC_3 : 5; // 0xac(0x01)
	char pad_AD[0x8b]; // 0xad(0x8b)
	struct TArray<struct UChannel*> *8a96153c21; // 0x138(0x10)
	char pad_148[0x28]; // 0x148(0x28)
	struct FUniqueNetIdRepl PlayerId; // 0x170(0x18)
	char pad_188[0x68]; // 0x188(0x68)
	double *a564cf33c7; // 0x1f0(0x08)
	char pad_1F8[0x65538]; // 0x1f8(0x65538)
	struct TArray<struct UChannel*> *c638db3738; // 0x65730(0x10)
	char pad_65740[0x110]; // 0x65740(0x110)
};

// Class Engine.ForceFeedbackEffect
// Size: 0x48 (Inherited: 0x30)
struct UForceFeedbackEffect : UObject {
	struct TArray<struct F*ef998f31f9> ChannelDetails; // 0x30(0x10)
	float Duration; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.GameSession
// Size: 0x410 (Inherited: 0x3f8)
struct AGameSession : AInfo {
	int32 MaxSpectators; // 0x3f8(0x04)
	int32 MaxPlayers; // 0x3fc(0x04)
	int32 *b4f47afb15; // 0x400(0x04)
	bool MaxSplitscreensPerConnection; // 0x404(0x01)
	bool bRequiresPushToTalk; // 0x405(0x01)
	char pad_406[0x2]; // 0x406(0x02)
	struct FName SessionName; // 0x408(0x08)
};

// Class Engine.*6915f10115
// Size: 0xd70 (Inherited: 0xd70)
struct U*6915f10115 : UHierarchicalInstancedStaticMeshComponent {
	int32 MinVertsToSplitNodeForGrid; // 0xd68(0x04)
};

// Class Engine.NavLinkProxy
// Size: 0x448 (Inherited: 0x3f8)
struct ANavLinkProxy : AActor {
	char pad_3F8[0x10]; // 0x3f8(0x10)
	struct TArray<struct FNavigationLink> PointLinks; // 0x408(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x418(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x428(0x08)
	bool *4a699c1124; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct FMulticastDelegate OnSmartLinkReached; // 0x438(0x10)

	struct FVector ReceiveSmartLinkReached(); // Function Engine.NavLinkProxy.ReceiveSmartLinkReached // Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22c9a0
	bool *8e0ffa0cec(); // Function Engine.NavLinkProxy.*8e0ffa0cec // Final|Native|Public|BlueprintCallable // @ game+0x66ece40
	struct AActor* *65cee31bae(); // Function Engine.NavLinkProxy.*65cee31bae // Final|Native|Public|BlueprintCallable // @ game+0x66e47b0
	bool *d4d460f675(); // Function Engine.NavLinkProxy.*d4d460f675 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dce04
	bool *8a49c9c7d5(); // Function Engine.NavLinkProxy.*8a49c9c7d5 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dbf00
	void *213ddab35f(); // Function Engine.NavLinkProxy.*213ddab35f // Final|Native|Public // @ game+0xbdd69c
};

// Class Engine.LocalPlayer
// Size: 0x298 (Inherited: 0x50)
struct ULocalPlayer : UPlayer {
	char pad_50[0x90]; // 0x50(0x90)
	struct UClass* *cf7a7c7fa4; // 0xe0(0x08)
	char pad_E8[0x30]; // 0xe8(0x30)
	char *4f02c33d6e : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x17f]; // 0x119(0x17f)
};

// Class Engine.NavModifierVolume
// Size: 0x440 (Inherited: 0x430)
struct ANavModifierVolume : AVolume {
	char pad_430[0x8]; // 0x430(0x08)
	struct UClass* AreaClass; // 0x438(0x08)

	struct UClass* *b0af645c38(); // Function Engine.NavModifierVolume.*b0af645c38 // Final|Native|Public|BlueprintCallable // @ game+0x66e7d48
};

// Class Engine.*995c5bd3c5
// Size: 0x30 (Inherited: 0x30)
struct U*995c5bd3c5 : UObject {
};

// Class Engine.PlayerCameraManager
// Size: 0x1d00 (Inherited: 0x3f8)
struct APlayerCameraManager : AActor {
	struct APlayerController* *cbb1abb503; // 0x3f8(0x08)
	struct USceneComponent* TransformComponent; // 0x400(0x08)
	float ViewPitchMax; // 0x408(0x04)
	char pad_40C[0xc]; // 0x40c(0x0c)
	float DefaultOrthoWidth; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct FVector FreeCamOffset; // 0x420(0x0c)
	char pad_42C[0x14]; // 0x42c(0x14)
	struct F*67dd5045be *973c315985; // 0x440(0x5e0)
	float FreeCamDistance; // 0xa20(0x04)
	char pad_A24[0x10]; // 0xa24(0x10)
	float ViewYawMax; // 0xa34(0x04)
	float ViewPitchMin; // 0xa38(0x04)
	float DefaultAspectRatio; // 0xa3c(0x04)
	char pad_A40[0xc]; // 0xa40(0x0c)
	float ViewRollMin; // 0xa4c(0x04)
	char pad_A50[0x10]; // 0xa50(0x10)
	struct F*506119bf4d *086e7720b6; // 0xa60(0x5d0)
	float DefaultFOV; // 0x1030(0x04)
	char pad_1034[0xc]; // 0x1034(0x0c)
	struct TArray<struct U*5ff6efacd0*> *61fd6ce2ce; // 0x1040(0x10)
	struct F*67dd5045be ViewTarget; // 0x1050(0x5e0)
	struct F*506119bf4d *afbcd45916; // 0x1630(0x5d0)
	char pad_1C00[0x14]; // 0x1c00(0x14)
	float ViewRollMax; // 0x1c14(0x04)
	char pad_1C18[0x10]; // 0x1c18(0x10)
	struct TArray<struct UClass*> DefaultModifiers; // 0x1c28(0x10)
	struct TArray<struct AEmitterCameraLensEffectBase*> *400b25e039; // 0x1c38(0x10)
	struct U*f2efdc3e42* *cd0bb6c040; // 0x1c48(0x08)
	struct U*d3f66f5eff* *366f414e61[0x08]; // 0x1c50(0x40)
	struct TArray<struct FPostProcessSettings> *5ecc4759ed; // 0x1c90(0x10)
	char pad_1CA0[0x10]; // 0x1ca0(0x10)
	struct TArray<struct U*d3f66f5eff*> *550f662a17; // 0x1cb0(0x10)
	struct TArray<struct U*d3f66f5eff*> *2bbafcfe72; // 0x1cc0(0x10)
	struct ACameraActor* *7a77fb1011; // 0x1cd0(0x08)
	char bIsOrthographic : 1; // 0x1cd8(0x01)
	char bDefaultConstrainAspectRatio : 1; // 0x1cd8(0x01)
	char pad_1CD8_2 : 5; // 0x1cd8(0x01)
	char bUseClientSideCameraUpdates : 1; // 0x1cd8(0x01)
	char pad_1CD9[0x7]; // 0x1cd9(0x07)
	float ViewYawMin; // 0x1ce0(0x04)
	struct FVector ViewTargetOffset; // 0x1ce4(0x0c)
	char pad_1CF0[0x10]; // 0x1cf0(0x10)

	struct UCameraShake* *d72ed20b0c(); // Function Engine.PlayerCameraManager.*d72ed20b0c // Native|Public|HasDefaults|BlueprintCallable // @ game+0xa816fc
	struct FRotator *d36a44000d(); // Function Engine.PlayerCameraManager.*d36a44000d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6c08
	void OnPhotographyMultiPartCaptureEnd(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureEnd // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x5909df4
	bool *78e591ace3(); // Function Engine.PlayerCameraManager.*78e591ace3 // Native|Public|BlueprintCallable // @ game+0x66ee834
	struct U*5ff6efacd0* *2a26303c57(); // Function Engine.PlayerCameraManager.*2a26303c57 // Native|Public|BlueprintCallable // @ game+0x66d4ee8
	void OnPhotographySessionStart(); // Function Engine.PlayerCameraManager.OnPhotographySessionStart // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x59dc494
	bool *b292c5da71(); // Function Engine.PlayerCameraManager.*b292c5da71 // Native|Public|BlueprintCallable // @ game+0x66eecbc
	bool *69965e09a8(); // Function Engine.PlayerCameraManager.*69965e09a8 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66eb62c
	bool *2988a7cb08(); // Function Engine.PlayerCameraManager.*2988a7cb08 // Native|Public|BlueprintCallable // @ game+0x66e4020
	struct AEmitterCameraLensEffectBase* *665cee3c9b(); // Function Engine.PlayerCameraManager.*665cee3c9b // Native|Public|BlueprintCallable // @ game+0x66ccf18
	struct FVector PhotographyCameraModify(); // Function Engine.PlayerCameraManager.PhotographyCameraModify // BlueprintCosmetic|Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x66e30b8
	struct U*5ff6efacd0* *8c09008e7d(); // Function Engine.PlayerCameraManager.*8c09008e7d // Native|Public|BlueprintCallable // @ game+0x66ce334
	bool *bb6cf3b047(); // Function Engine.PlayerCameraManager.*bb6cf3b047 // Native|Public|BlueprintCallable // @ game+0x66eebc0
	bool *f2772d70c2(); // Function Engine.PlayerCameraManager.*f2772d70c2 // Native|Public|BlueprintCallable // @ game+0x66ee964
	void OnPhotographySessionEnd(); // Function Engine.PlayerCameraManager.OnPhotographySessionEnd // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x59dc47c
	void OnPhotographyMultiPartCaptureStart(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureStart // BlueprintCosmetic|Native|Event|Public|BlueprintEvent // @ game+0x59a23dc
	bool *8b2eaca224(); // Function Engine.PlayerCameraManager.*8b2eaca224 // Native|Public|BlueprintCallable // @ game+0x66ee8cc
	bool *7fd72b3b48(); // Function Engine.PlayerCameraManager.*7fd72b3b48 // Native|Public|BlueprintCallable // @ game+0x66eea48
	bool *a2a77b6a01(); // Function Engine.PlayerCameraManager.*a2a77b6a01 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66ee530
	struct AEmitterCameraLensEffectBase* *2fbc2ae8e6(); // Function Engine.PlayerCameraManager.*2fbc2ae8e6 // Native|Public|BlueprintCallable // @ game+0x66e3f8c
	struct U*d3f66f5eff* *71d0b4dd39(); // Function Engine.PlayerCameraManager.*71d0b4dd39 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e344c
	void *9335482b6a(); // Function Engine.PlayerCameraManager.*9335482b6a // Native|Public|BlueprintCallable // @ game+0x66cfa00
	struct APlayerController* *f76c6f11ba(); // Function Engine.PlayerCameraManager.*f76c6f11ba // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x599f478
	struct FVector *d3c1b5233d(); // Function Engine.PlayerCameraManager.*d3c1b5233d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0xac2b1c
	void *cf60453f72(); // Function Engine.PlayerCameraManager.*cf60453f72 // Native|Public|BlueprintCallable // @ game+0x66eeca4
	float *5ca65a21f0(); // Function Engine.PlayerCameraManager.*5ca65a21f0 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7c8c
	bool BlueprintUpdateCamera(); // Function Engine.PlayerCameraManager.BlueprintUpdateCamera // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22c9a0
};

// Class Engine.PlayerInput
// Size: 0x490 (Inherited: 0x30)
struct UPlayerInput : UObject {
	char pad_30[0xf8]; // 0x30(0xf8)
	struct TArray<struct F*bddce5acd0> DebugExecBindings; // 0x128(0x10)
	char pad_138[0x30]; // 0x138(0x30)
	struct TArray<struct FName> InvertedAxis; // 0x168(0x10)
	char pad_178[0x318]; // 0x178(0x318)

	struct FName InvertAxis(); // Function Engine.PlayerInput.InvertAxis // Final|Exec|Native|Public // @ game+0x66dc0ec
	struct FString SetBind(); // Function Engine.PlayerInput.SetBind // Final|Exec|Native|Public // @ game+0x66e8d74
	float SetGamePadSensitivity(); // Function Engine.PlayerInput.SetGamePadSensitivity // Final|Exec|Native|Public // @ game+0x66ea62c
	float SetGamePadSensitivityOf(); // Function Engine.PlayerInput.SetGamePadSensitivityOf // Final|Exec|Native|Public // @ game+0x66ea6c4
	struct FKey InvertAxisKey(); // Function Engine.PlayerInput.InvertAxisKey // Final|Exec|Native|Public // @ game+0x66dc17c
	float SetMouseSensitivity(); // Function Engine.PlayerInput.SetMouseSensitivity // Final|Exec|Native|Public // @ game+0x66ebd00
	void ClearSmoothing(); // Function Engine.PlayerInput.ClearSmoothing // Final|Exec|Native|Public // @ game+0x66cfa50
	float SetGamePadDeadZoneOf(); // Function Engine.PlayerInput.SetGamePadDeadZoneOf // Final|Exec|Native|Public // @ game+0x66ea4f0
	float SetGamePadDeadZone(); // Function Engine.PlayerInput.SetGamePadDeadZone // Final|Exec|Native|Public // @ game+0x66ea458
};

// Class Engine.NavigationData
// Size: 0x5a0 (Inherited: 0x3f8)
struct ANavigationData : AActor {
	struct UPrimitiveComponent* RenderingComp; // 0x3f8(0x08)
	struct F*b03cbfc63f *b03cbfc63f; // 0x400(0x50)
	char *21cfea8d56 : 1; // 0x450(0x01)
	char bForceRebuildOnLoad : 1; // 0x450(0x01)
	char bCanBeMainNavData : 1; // 0x450(0x01)
	char bCanSpawnOnRebuild : 1; // 0x450(0x01)
	char bRebuildAtRuntime : 1; // 0x450(0x01)
	char pad_450_5 : 3; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	float ObservedPathsTickInterval; // 0x458(0x04)
	char *43ae6d3f0e : 1; // 0x45c(0x01)
	char pad_45C_1 : 7; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	uint32 DataVersion; // 0x460(0x04)
	char pad_464[0xd4]; // 0x464(0xd4)
	struct TArray<struct F*75098b10ea> *2281fe7f4c; // 0x538(0x10)
	char pad_548[0x58]; // 0x548(0x58)
};

// Class Engine.RecastNavMesh
// Size: 0x6b0 (Inherited: 0x5a0)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x5a0(0x01)
	char bDrawPolyEdges : 1; // 0x5a0(0x01)
	char bDrawFilledPolys : 1; // 0x5a0(0x01)
	char bDrawNavMeshEdges : 1; // 0x5a0(0x01)
	char *708a7537c9 : 1; // 0x5a0(0x01)
	char *50d90c672d : 1; // 0x5a0(0x01)
	char *6d5769461c : 1; // 0x5a0(0x01)
	char *c8a29ed159 : 1; // 0x5a0(0x01)
	char *9f8b9279b7 : 1; // 0x5a1(0x01)
	char *d3e52b9f11 : 1; // 0x5a1(0x01)
	char *0ff14a8c0d : 1; // 0x5a1(0x01)
	char *d2bbad073c : 1; // 0x5a1(0x01)
	char *47a88b9dae : 1; // 0x5a1(0x01)
	char *441f51f755 : 1; // 0x5a1(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x5a1(0x01)
	char *70a3c0c34e : 1; // 0x5a1(0x01)
	char pad_5A2[0x2]; // 0x5a2(0x02)
	float DrawOffset; // 0x5a4(0x04)
	char bFixedTilePoolSize : 1; // 0x5a8(0x01)
	char pad_5A8_1 : 7; // 0x5a8(0x01)
	char pad_5A9[0x3]; // 0x5a9(0x03)
	int32 TilePoolSize; // 0x5ac(0x04)
	float TileSizeUU; // 0x5b0(0x04)
	float CellSize; // 0x5b4(0x04)
	float CellHeight; // 0x5b8(0x04)
	float AgentRadius; // 0x5bc(0x04)
	float AgentHeight; // 0x5c0(0x04)
	float AgentMaxHeight; // 0x5c4(0x04)
	float AgentMaxSlope; // 0x5c8(0x04)
	float AgentMaxStepHeight; // 0x5cc(0x04)
	float MinRegionArea; // 0x5d0(0x04)
	float MergeRegionSize; // 0x5d4(0x04)
	float MaxSimplificationError; // 0x5d8(0x04)
	int32 MaxSimultaneousTileGenerationJobsCount; // 0x5dc(0x04)
	int32 TileNumberHardLimit; // 0x5e0(0x04)
	int32 *0c09f61618; // 0x5e4(0x04)
	int32 *28e081ec92; // 0x5e8(0x04)
	int32 *0f30d1176b; // 0x5ec(0x04)
	float DefaultDrawDistance; // 0x5f0(0x04)
	float DefaultMaxSearchNodes; // 0x5f4(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x5f8(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x5fc(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x5fd(0x01)
	char pad_5FE[0x2]; // 0x5fe(0x02)
	int32 RegionChunkSplits; // 0x600(0x04)
	int32 LayerChunkSplits; // 0x604(0x04)
	char bSortNavigationAreasByCost : 1; // 0x608(0x01)
	char bPerformVoxelFiltering : 1; // 0x608(0x01)
	char bMarkLowHeightAreas : 1; // 0x608(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x608(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x608(0x01)
	char bStoreEmptyTileLayers : 1; // 0x608(0x01)
	char bUseVirtualFilters : 1; // 0x608(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x608(0x01)
	char pad_609[0x3]; // 0x609(0x03)
	bool bOnlySavedOnDS; // 0x60c(0x01)
	char pad_60D[0x3]; // 0x60d(0x03)
	char bUseVoxelCache : 1; // 0x610(0x01)
	char pad_610_1 : 7; // 0x610(0x01)
	char pad_611[0x3]; // 0x611(0x03)
	float TileSetUpdateInterval; // 0x614(0x04)
	float HeuristicScale; // 0x618(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x61c(0x04)
	char pad_620[0x90]; // 0x620(0x90)
};

// Class Engine.*d3391c2860
// Size: 0x40 (Inherited: 0x30)
struct U*d3391c2860 : UObject {
	struct TArray<struct F*f5f971c5f4> *d787c9ce41; // 0x30(0x10)
};

// Class Engine.SceneCaptureComponent
// Size: 0x500 (Inherited: 0x480)
struct USceneCaptureComponent : USceneComponent {
	struct TArray<struct UPrimitiveComponent*> *a55671e4ad; // 0x478(0x10)
	struct TArray<struct AActor*> HiddenActors; // 0x488(0x10)
	struct TArray<struct UPrimitiveComponent*> *5e2f7446e7; // 0x498(0x10)
	struct TArray<struct AActor*> ShowOnlyActors; // 0x4a8(0x10)
	bool bIsLobbyCapture; // 0x4b8(0x01)
	bool bCaptureEveryFrame; // 0x4b9(0x01)
	bool bCaptureOnMovement; // 0x4ba(0x01)
	float LODDistanceFactor; // 0x4bc(0x04)
	float MaxViewDistanceOverride; // 0x4c0(0x04)
	int32 CaptureSortPriority; // 0x4c4(0x04)
	struct TArray<struct F*bf651cc96c> ShowFlagSettings; // 0x4c8(0x10)
	char pad_4DF[0x21]; // 0x4df(0x21)

	struct AActor* *686a777b09(); // Function Engine.SceneCaptureComponent.*686a777b09 // Final|Native|Public|BlueprintCallable // @ game+0x674104c
	struct UPrimitiveComponent* *cacba93904(); // Function Engine.SceneCaptureComponent.*cacba93904 // Final|Native|Public|BlueprintCallable // @ game+0x6719618
	struct AActor* *f2b9b733b4(); // Function Engine.SceneCaptureComponent.*f2b9b733b4 // Final|Native|Public|BlueprintCallable // @ game+0x6719478
	struct UPrimitiveComponent* *285c968333(); // Function Engine.SceneCaptureComponent.*285c968333 // Final|Native|Public|BlueprintCallable // @ game+0x67410dc
	struct AActor* *39c0448a3e(); // Function Engine.SceneCaptureComponent.*39c0448a3e // Final|Native|Public|BlueprintCallable // @ game+0x672dcd8
	struct UPrimitiveComponent* *2855d80aae(); // Function Engine.SceneCaptureComponent.*2855d80aae // Final|Native|Public|BlueprintCallable // @ game+0x6700f4c
	int32 *ae55650540(); // Function Engine.SceneCaptureComponent.*ae55650540 // Final|Native|Public|BlueprintCallable // @ game+0x6732cd4
	struct UPrimitiveComponent* *d5048fe3b3(); // Function Engine.SceneCaptureComponent.*d5048fe3b3 // Final|Native|Public|BlueprintCallable // @ game+0x672dd68
};

// Class Engine.SceneCaptureComponent2D
// Size: 0xb30 (Inherited: 0x500)
struct USceneCaptureComponent2D : USceneCaptureComponent {
	enum class ECameraProjectionMode ProjectionType; // 0x4f8(0x01)
	float FOVAngle; // 0x4fc(0x04)
	bool *782eac5acb; // 0x500(0x01)
	float *6ebb74f736; // 0x504(0x04)
	float OrthoWidth; // 0x508(0x04)
	char pad_50E[0x2]; // 0x50e(0x02)
	struct UTextureRenderTarget2D* TextureTarget; // 0x510(0x08)
	enum class *e151b8259b CaptureSource; // 0x518(0x01)
	enum class *307db859c9 CompositeMode; // 0x519(0x01)
	char pad_51A[0x2]; // 0x51a(0x02)
	struct FLinearColor LightingOnlyBrightness; // 0x51c(0x10)
	struct FLinearColor LightingOnlySpecular; // 0x52c(0x10)
	struct FLinearColor LightingOnlyCustomData; // 0x53c(0x10)
	float LightingOnlyCustomDataAlpha; // 0x54c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x550(0x570)
	float PostProcessBlendWeight; // 0xac0(0x04)
	bool bUseCustomProjectionMatrix; // 0xac4(0x01)
	char pad_AC5[0xb]; // 0xac5(0x0b)
	struct FMatrix CustomProjectionMatrix; // 0xad0(0x40)
	char *b0939a7f5b : 1; // 0xb10(0x01)
	char pad_B10_1 : 7; // 0xb10(0x01)
	char pad_B11[0x3]; // 0xb11(0x03)
	bool bEnableClipPlane; // 0xb14(0x01)
	char pad_B15[0x3]; // 0xb15(0x03)
	struct FVector ClipPlaneBase; // 0xb18(0x0c)
	struct FVector ClipPlaneNormal; // 0xb24(0x0c)

	void CaptureScene(); // Function Engine.SceneCaptureComponent2D.CaptureScene // Final|Native|Public|BlueprintCallable // @ game+0x6700850
	float *fa132a0246(); // Function Engine.SceneCaptureComponent2D.*fa132a0246 // Final|Native|Public|BlueprintCallable // @ game+0x66f4b88
};

// Class Engine.ArrowComponent
// Size: 0x9d0 (Inherited: 0x9c0)
struct UArrowComponent : UPrimitiveComponent {
	struct FColor ArrowColor; // 0x9b8(0x04)
	float ArrowSize; // 0x9bc(0x04)
	bool bIsScreenSizeScaled; // 0x9c0(0x01)
	float ScreenSize; // 0x9c4(0x04)
	char bTreatAsASprite : 1; // 0x9c8(0x01)
	char pad_9CD_1 : 7; // 0x9cd(0x01)
	char pad_9CE[0x2]; // 0x9ce(0x02)

	struct FLinearColor SetArrowColor(); // Function Engine.ArrowComponent.SetArrowColor // Native|Public|HasDefaults|BlueprintCallable // @ game+0x67310a4
};

// Class Engine.ParticleSystemComponent
// Size: 0xc20 (Inherited: 0x9c0)
struct UParticleSystemComponent : UPrimitiveComponent {
	struct UParticleSystem* Template; // 0x9b8(0x08)
	struct TArray<struct UMaterialInterface*> *4f88ae3996; // 0x9c0(0x10)
	struct TArray<struct USkeletalMeshComponent*> *22954ea390; // 0x9d0(0x10)
	char pad_9E8_0 : 7; // 0x9e8(0x01)
	char bResetOnDetach : 1; // 0x9e0(0x01)
	char *112625e667 : 1; // 0x9e1(0x01)
	char bAllowRecycling : 1; // 0x9e1(0x01)
	char bAutoManageAttachment : 1; // 0x9e1(0x01)
	char *461c11236d : 1; // 0x9e1(0x01)
	char bOverrideLODMethod : 1; // 0x9e2(0x01)
	char *0a78c3b57e : 1; // 0x9e2(0x01)
	char *8677cee406 : 1; // 0x9e2(0x01)
	struct TArray<struct FParticleSysParam> InstanceParameters; // 0x9e8(0x10)
	struct FMulticastDelegate OnParticleSpawn; // 0x9f8(0x10)
	struct FMulticastDelegate OnParticleBurst; // 0xa08(0x10)
	struct FMulticastDelegate OnParticleDeath; // 0xa18(0x10)
	struct FMulticastDelegate OnParticleCollide; // 0xa28(0x10)
	struct FVector *7a6bef834a; // 0xa38(0x0c)
	struct FVector *a7f8a33a6f; // 0xa44(0x0c)
	float WarmupTime; // 0xa50(0x04)
	float *73dfda32c6; // 0xa54(0x04)
	char pad_A59[0x3]; // 0xa59(0x03)
	float SecondsBeforeInactive; // 0xa5c(0x04)
	char pad_A60[0x4]; // 0xa60(0x04)
	float *5e0dc69810; // 0xa64(0x04)
	char pad_A68[0x8]; // 0xa68(0x08)
	enum class *f6a419821d LODMethod; // 0xa70(0x01)
	enum class EParticleSignificanceLevel RequiredSignificance; // 0xa71(0x01)
	char pad_A72[0x16]; // 0xa72(0x16)
	struct TArray<struct U*9051dbf3fc*> *3c1efb0fc5; // 0xa88(0x10)
	char pad_A98[0x60]; // 0xa98(0x60)
	float CustomTimeDilation; // 0xaf8(0x04)
	char pad_AFC[0x4]; // 0xafc(0x04)
	struct FMulticastDelegate OnSystemFinished; // 0xb00(0x10)
	struct USceneComponent* AutoAttachParent; // 0xb10(0x08)
	struct FName AutoAttachSocketName; // 0xb18(0x08)
	enum class EAttachLocation AutoAttachLocationType; // 0xb20(0x01)
	enum class EAttachmentRule AutoAttachLocationRule; // 0xb21(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0xb22(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0xb23(0x01)
	char pad_B24[0xfc]; // 0xb24(0xfc)

	bool *67c3e5d699(); // Function Engine.ParticleSystemComponent.*67c3e5d699 // Native|Public|BlueprintCallable // @ game+0x66ea08c
	int32 *69906718ab(); // Function Engine.ParticleSystemComponent.*69906718ab // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e8c38
	bool *863f6b2e73(); // Function Engine.ParticleSystemComponent.*863f6b2e73 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d630c
	bool *17005cd81d(); // Function Engine.ParticleSystemComponent.*17005cd81d // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6958
	float *d1dcac6896(); // Function Engine.ParticleSystemComponent.*d1dcac6896 // Final|Native|Public|BlueprintCallable // @ game+0x66ceee4
	int32 *50fe310c8a(); // Function Engine.ParticleSystemComponent.*50fe310c8a // Native|Public|BlueprintCallable // @ game+0x66e8770
	struct FLinearColor *0c18dcbb66(); // Function Engine.ParticleSystemComponent.*0c18dcbb66 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e99e4
	struct UMaterialInstanceDynamic* *7b9f2ccae9(); // Function Engine.ParticleSystemComponent.*7b9f2ccae9 // Native|Public|BlueprintCallable // @ game+0x66d295c
	struct FVector *1ce0c10461(); // Function Engine.ParticleSystemComponent.*1ce0c10461 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66edab0
	bool *8700c3e848(); // Function Engine.ParticleSystemComponent.*8700c3e848 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6214
	bool *bb3edb14e0(); // Function Engine.ParticleSystemComponent.*bb3edb14e0 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d66d4
	int32 *24f8677596(); // Function Engine.ParticleSystemComponent.*24f8677596 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e89d4
	struct FVector *9cf76baf38(); // Function Engine.ParticleSystemComponent.*9cf76baf38 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e8538
	bool *8816fb0374(); // Function Engine.ParticleSystemComponent.*8816fb0374 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6590
	struct UMaterialInterface* *abec3701c0(); // Function Engine.ParticleSystemComponent.*abec3701c0 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d9f90
	int32 *1a1fdc7786(); // Function Engine.ParticleSystemComponent.*1a1fdc7786 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e8634
	float SetFloatParameter(); // Function Engine.ParticleSystemComponent.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0xca28ec
	float *e30b532a71(); // Function Engine.ParticleSystemComponent.*e30b532a71 // Final|Native|Public|BlueprintCallable // @ game+0x66ed404
	struct UParticleSystem* *033547d67c(); // Function Engine.ParticleSystemComponent.*033547d67c // Final|Native|Public|BlueprintCallable // @ game+0x66ed12c
	struct AActor* *3a45f42ea4(); // Function Engine.ParticleSystemComponent.*3a45f42ea4 // Final|Native|Public|BlueprintCallable // @ game+0x66e763c
	enum class EAttachmentRule *9a31e112a2(); // Function Engine.ParticleSystemComponent.*9a31e112a2 // Final|Native|Public|BlueprintCallable // @ game+0x66e8100
	int32 *16d053f3c6(); // Function Engine.ParticleSystemComponent.*16d053f3c6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66da1d8
	bool *d8490665a4(); // Function Engine.ParticleSystemComponent.*d8490665a4 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6450
	void *9b43a7d6ec(); // Function Engine.ParticleSystemComponent.*9b43a7d6ec // Final|Native|Public|BlueprintCallable // @ game+0x66d4c44
	struct FVector *068b48e0cf(); // Function Engine.ParticleSystemComponent.*068b48e0cf // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66d514c
	bool *64f27bdd51(); // Function Engine.ParticleSystemComponent.*64f27bdd51 // Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6818
	int32 *c5ffab40d8(); // Function Engine.ParticleSystemComponent.*c5ffab40d8 // Native|Public|BlueprintCallable // @ game+0x66e8b10
	struct UMaterialInterface* *72f8053368(); // Function Engine.ParticleSystemComponent.*72f8053368 // Final|Native|Public|BlueprintCallable // @ game+0x66ebb4c
	enum class EAttachLocation *1fa968ce8d(); // Function Engine.ParticleSystemComponent.*1fa968ce8d // Final|Native|Public|BlueprintCallable // @ game+0x66e7fb8
	int32 *0fc943db31(); // Function Engine.ParticleSystemComponent.*0fc943db31 // Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e8898
};

// Class Engine.DefaultPawn
// Size: 0x488 (Inherited: 0x460)
struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x460(0x04)
	float BaseLookUpRate; // 0x464(0x04)
	struct UPawnMovementComponent* MovementComponent; // 0x468(0x08)
	struct USphereComponent* CollisionComponent; // 0x470(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x478(0x08)
	char bAddDefaultMovementBindings : 1; // 0x480(0x01)
	char pad_480_1 : 7; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)

	float MoveForward(); // Function Engine.DefaultPawn.MoveForward // Native|Public|BlueprintCallable // @ game+0x66e295c
	float *00acc3c2ee(); // Function Engine.DefaultPawn.*00acc3c2ee // Final|Native|Public|BlueprintCallable // @ game+0x66e2668
	float MoveRight(); // Function Engine.DefaultPawn.MoveRight // Native|Public|BlueprintCallable // @ game+0x66e29f8
	float *d161ce5221(); // Function Engine.DefaultPawn.*d161ce5221 // Native|Public|BlueprintCallable // @ game+0x66e2a94
	float *6a5455acb9(); // Function Engine.DefaultPawn.*6a5455acb9 // Final|Native|Public|BlueprintCallable // @ game+0x66ef244
};

// Class Engine.SpectatorPawn
// Size: 0x488 (Inherited: 0x488)
struct ASpectatorPawn : ADefaultPawn {
};

// Class Engine.FloatingPawnMovement
// Size: 0x2a0 (Inherited: 0x290)
struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x288(0x04)
	float Acceleration; // 0x28c(0x04)
	float Deceleration; // 0x290(0x04)
	float TurningBoost; // 0x294(0x04)
	char *a1107499df : 1; // 0x298(0x01)
};

// Class Engine.SpectatorPawnMovement
// Size: 0x2b0 (Inherited: 0x2a0)
struct USpectatorPawnMovement : UFloatingPawnMovement {
	char *07c46bc655 : 1; // 0x2a0(0x01)
	char pad_2A0_1 : 7; // 0x2a0(0x01)
	char pad_2A1[0xf]; // 0x2a1(0x0f)
};

// Class Engine.SplineComponent
// Size: 0xab0 (Inherited: 0x9c0)
struct USplineComponent : UPrimitiveComponent {
	struct FSplineCurves *af20761ba1; // 0x9b8(0x60)
	struct FInterpCurveVector SplineInfo; // 0xa18(0x18)
	struct FInterpCurveQuat SplineRotInfo; // 0xa30(0x18)
	struct FInterpCurveVector SplineScaleInfo; // 0xa48(0x18)
	struct FInterpCurveFloat SplineReparamTable; // 0xa60(0x18)
	bool bAllowSplineEditingPerInstance; // 0xa78(0x01)
	int32 *c94fdb6f50; // 0xa7c(0x04)
	bool *74a06f3a21; // 0xa80(0x01)
	bool *2ae54133a6; // 0xa81(0x01)
	float *de8108c325; // 0xa84(0x04)
	float Duration; // 0xa88(0x04)
	bool bStationaryEndpoints; // 0xa8c(0x01)
	bool *ed5304d631; // 0xa8d(0x01)
	bool *892474e663; // 0xa8e(0x01)
	bool bInputSplinePointsToConstructionScript; // 0xa8f(0x01)
	bool bDrawDebug; // 0xa90(0x01)
	bool *62034b8d2c; // 0xa91(0x01)
	bool bLoopPositionOverride; // 0xa92(0x01)
	float *2dff64e046; // 0xa94(0x04)
	struct FVector DefaultUpVector; // 0xa98(0x0c)
	char pad_AA6[0xa]; // 0xaa6(0x0a)

	float *cf680803a3(); // Function Engine.SplineComponent.*cf680803a3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670ef64
	struct FRotator *a3e04ebb78(); // Function Engine.SplineComponent.*a3e04ebb78 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670a8b4
	struct FLinearColor *f915afe236(); // Function Engine.SplineComponent.*f915afe236 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e9c9c
	bool *52e254e8f9(); // Function Engine.SplineComponent.*52e254e8f9 // Final|Native|Public|BlueprintCallable // @ game+0x67012b0
	float *134a78950f(); // Function Engine.SplineComponent.*134a78950f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6714230
	bool *92f2f40b5b(); // Function Engine.SplineComponent.*92f2f40b5b // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f50d0
	struct FRotator *aabffd98cf(); // Function Engine.SplineComponent.*aabffd98cf // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6714368
	struct FVector *f3814e00f1(); // Function Engine.SplineComponent.*f3814e00f1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670a9e4
	struct FVector *ea5851529e(); // Function Engine.SplineComponent.*ea5851529e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670aaac
	int32 GetNumberOfSplinePoints(); // Function Engine.SplineComponent.GetNumberOfSplinePoints // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6712448
	struct FVector *ad1164c994(); // Function Engine.SplineComponent.*ad1164c994 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x671162c
	float *1b9bf47c06(); // Function Engine.SplineComponent.*1b9bf47c06 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6714144
	bool SetSplinePointType(); // Function Engine.SplineComponent.SetSplinePointType // Final|Native|Public|BlueprintCallable // @ game+0x673c18c
	struct FVector *ac013a29ee(); // Function Engine.SplineComponent.*ac013a29ee // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670eb2c
	struct FVector *fb34d6ec15(); // Function Engine.SplineComponent.*fb34d6ec15 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670ad58
	bool *79c62cca3e(); // Function Engine.SplineComponent.*79c62cca3e // Final|Native|Public|BlueprintCallable // @ game+0x6734e20
	struct FVector *153ec0a3ad(); // Function Engine.SplineComponent.*153ec0a3ad // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6714884
	float *c39fb27d0a(); // Function Engine.SplineComponent.*c39fb27d0a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670a10c
	struct FVector *4e0299c96f(); // Function Engine.SplineComponent.*4e0299c96f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67170fc
	struct FVector *c219d560c2(); // Function Engine.SplineComponent.*c219d560c2 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6715928
	struct FVector *83706fa678(); // Function Engine.SplineComponent.*83706fa678 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6717ff0
	bool *a843ad36b5(); // Function Engine.SplineComponent.*a843ad36b5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x673e2d4
	bool *826b637896(); // Function Engine.SplineComponent.*826b637896 // Final|Native|Public|BlueprintCallable // @ game+0x672de08
	struct FTransform *04febd64a1(); // Function Engine.SplineComponent.*04febd64a1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6716a3c
	enum class ESplinePointType *73fe9828cf(); // Function Engine.SplineComponent.*73fe9828cf // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6715048
	void *4d7aca9cf9(); // Function Engine.SplineComponent.*4d7aca9cf9 // Final|Native|Public|BlueprintCallable // @ game+0x6748600
	struct FTransform *81f38254ef(); // Function Engine.SplineComponent.*81f38254ef // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x671671c
	struct FVector *282f0d95b1(); // Function Engine.SplineComponent.*282f0d95b1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x671191c
	bool *c90272e158(); // Function Engine.SplineComponent.*c90272e158 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x673d58c
	struct FVector *c06887c798(); // Function Engine.SplineComponent.*c06887c798 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x671162c
	enum class ESplineCoordinateSpace *aab9f24cfc(); // Function Engine.SplineComponent.*aab9f24cfc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6734654
	float *97d19dcf2a(); // Function Engine.SplineComponent.*97d19dcf2a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670f8a0
	struct FVector *ef1c9a40e0(); // Function Engine.SplineComponent.*ef1c9a40e0 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6717928
	bool *e05ece5e57(); // Function Engine.SplineComponent.*e05ece5e57 // Final|Native|Public|BlueprintCallable // @ game+0x6733438
	float *6473859118(); // Function Engine.SplineComponent.*6473859118 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6714050
	struct FVector *85900ff67f(); // Function Engine.SplineComponent.*85900ff67f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6717bb8
	struct FVector *2322fbe20b(); // Function Engine.SplineComponent.*2322fbe20b // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670ea2c
	struct FVector *50ee2e4e25(); // Function Engine.SplineComponent.*50ee2e4e25 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f525c
	struct FVector *a24bcc5994(); // Function Engine.SplineComponent.*a24bcc5994 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6711c14
	float *90b7823df0(); // Function Engine.SplineComponent.*90b7823df0 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670a7b0
	struct FVector *e1a48fec25(); // Function Engine.SplineComponent.*e1a48fec25 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67171fc
	bool *6b6775bd9f(); // Function Engine.SplineComponent.*6b6775bd9f // Final|Native|Public|BlueprintCallable // @ game+0x6733340
	bool *86e26430bb(); // Function Engine.SplineComponent.*86e26430bb // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67390e4
	struct FRotator *e08e3e9858(); // Function Engine.SplineComponent.*e08e3e9858 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6717ee0
	bool *4ccf21d8b5(); // Function Engine.SplineComponent.*4ccf21d8b5 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x673d400
	struct FVector *045b3f530f(); // Function Engine.SplineComponent.*045b3f530f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6711d14
	struct FVector *2e3858f9b1(); // Function Engine.SplineComponent.*2e3858f9b1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6711e10
	struct FRotator *2d313357bc(); // Function Engine.SplineComponent.*2d313357bc // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6714564
	struct FVector *17025220de(); // Function Engine.SplineComponent.*17025220de // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6713cd4
	struct FVector *c42fa2dbce(); // Function Engine.SplineComponent.*c42fa2dbce // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6713dd4
	struct FVector *23206032f9(); // Function Engine.SplineComponent.*23206032f9 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6717330
	struct FVector *d6f8495c97(); // Function Engine.SplineComponent.*d6f8495c97 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6715828
	float *3502332269(); // Function Engine.SplineComponent.*3502332269 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6715020
	struct FVector *91fae90d35(); // Function Engine.SplineComponent.*91fae90d35 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6717af8
	struct FVector *cfba33f05d(); // Function Engine.SplineComponent.*cfba33f05d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6714958
	struct FVector *8fa5d6c60f(); // Function Engine.SplineComponent.*8fa5d6c60f // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67147cc
	struct FRotator *7f66e1fbac(); // Function Engine.SplineComponent.*7f66e1fbac // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6717e20
	struct FVector *e8e6a3b352(); // Function Engine.SplineComponent.*e8e6a3b352 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670ec28
	struct FVector *54fd7af9bc(); // Function Engine.SplineComponent.*54fd7af9bc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6709fe8
	struct FVector *9117ec8f3d(); // Function Engine.SplineComponent.*9117ec8f3d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67179e8
	bool AddSplinePoint(); // Function Engine.SplineComponent.AddSplinePoint // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f4f88
	enum class ESplineCoordinateSpace *a90398e5f8(); // Function Engine.SplineComponent.*a90398e5f8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6711a74
	struct TArray<struct FVector> *ef63e4ad53(); // Function Engine.SplineComponent.*ef63e4ad53 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x673c524
	float *c7e0ec4ec0(); // Function Engine.SplineComponent.*c7e0ec4ec0 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6711750
	struct FVector *d542bd1ed8(); // Function Engine.SplineComponent.*d542bd1ed8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x673f4d4
	struct FVector *4d353239e7(); // Function Engine.SplineComponent.*4d353239e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f4ee8
	struct FVector *167f699d6d(); // Function Engine.SplineComponent.*167f699d6d // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670c4e0
	struct FVector *c7ff5ca2be(); // Function Engine.SplineComponent.*c7ff5ca2be // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670e7f0
	struct FVector *197e8ca22e(); // Function Engine.SplineComponent.*197e8ca22e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670a1b8
	bool *1cb7eba1c5(); // Function Engine.SplineComponent.*1cb7eba1c5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66f4c9c
	struct TArray<struct FVector> *32f0fbfd82(); // Function Engine.SplineComponent.*32f0fbfd82 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x673c0c0
	struct FLinearColor *a2c24d66e7(); // Function Engine.SplineComponent.*a2c24d66e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66e9c9c
	bool *7ee73e99c7(); // Function Engine.SplineComponent.*7ee73e99c7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x671ac94
	struct FTransform *eabc4a062e(); // Function Engine.SplineComponent.*eabc4a062e // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670abd0
	bool *cf31a1909e(); // Function Engine.SplineComponent.*cf31a1909e // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x673c2bc
	struct FVector *914680d4fd(); // Function Engine.SplineComponent.*914680d4fd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6717c70
	struct FVector *c8b1123aa1(); // Function Engine.SplineComponent.*c8b1123aa1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670a68c
	struct FTransform *44a8c2bd34(); // Function Engine.SplineComponent.*44a8c2bd34 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6716890
	struct FVector *15c36c3b51(); // Function Engine.SplineComponent.*15c36c3b51 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6713f08
	struct FRotator *33d4210dce(); // Function Engine.SplineComponent.*33d4210dce // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6714468
	bool *3ca671b930(); // Function Engine.SplineComponent.*3ca671b930 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66f4db8
};

// Class Engine.MaterialInterface
// Size: 0x78 (Inherited: 0x30)
struct UMaterialInterface : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct USubsurfaceProfile* SubsurfaceProfile; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
	struct F*ed15892812 LightmassSettings; // 0x48(0x14)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct F*4843f69936> *8d79f2f236; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)

	struct UPhysicalMaterial* *e8253b8049(); // Function Engine.MaterialInterface.*e8253b8049 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dac00
	struct UMaterial* *aed3837a4f(); // Function Engine.MaterialInterface.*aed3837a4f // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66d617c
};

// Class Engine.MaterialInstance
// Size: 0x1e8 (Inherited: 0x78)
struct UMaterialInstance : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x78(0x08)
	struct UMaterialInterface* Parent; // 0x80(0x08)
	char *8faff03b22 : 1; // 0x88(0x01)
	char *9f50880679 : 1; // 0x88(0x01)
	char pad_88_2 : 1; // 0x88(0x01)
	char bOverrideSubsurfaceProfile : 1; // 0x88(0x01)
	char pad_88_4 : 4; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct F*1938f889f6> FontParameterValues; // 0x90(0x10)
	struct TArray<struct F*ecd50ea1e1> ScalarParameterValues; // 0xa0(0x10)
	struct TArray<struct F*c8ae2e9849> TextureParameterValues; // 0xb0(0x10)
	struct TArray<struct F*afa0cd1358> VectorParameterValues; // 0xc0(0x10)
	bool bOverrideBaseProperties; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0xd4(0x24)
	char pad_F8[0xf0]; // 0xf8(0xf0)
};

// Class Engine.MaterialInstanceConstant
// Size: 0x1e8 (Inherited: 0x1e8)
struct UMaterialInstanceConstant : UMaterialInstance {
};

// Class Engine.MaterialExpression
// Size: 0x68 (Inherited: 0x30)
struct UMaterialExpression : UObject {
	struct UMaterial* Material; // 0x30(0x08)
	struct UMaterialFunction* Function; // 0x38(0x08)
	struct FString Desc; // 0x40(0x10)
	struct FColor BorderColor; // 0x50(0x04)
	char *7d5c77230b : 1; // 0x54(0x01)
	char *24134249a8 : 1; // 0x54(0x01)
	char *5e6d423427 : 1; // 0x54(0x01)
	char *ceacf93e55 : 1; // 0x54(0x01)
	char *9d6fee04fb : 1; // 0x54(0x01)
	char *5a14ee6deb : 1; // 0x54(0x01)
	char *ea6a3fcde4 : 1; // 0x54(0x01)
	char *ea527af7c6 : 1; // 0x54(0x01)
	char *80b53506fe : 1; // 0x55(0x01)
	char *3c602b9576 : 1; // 0x55(0x01)
	char *7f3905b4ee : 1; // 0x55(0x01)
	char pad_55_3 : 5; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct TArray<struct FExpressionOutput> Outputs; // 0x58(0x10)
};

// Class Engine.*4eb614635f
// Size: 0x68 (Inherited: 0x68)
struct U*4eb614635f : UMaterialExpression {
};

// Class Engine.*20b0f316ee
// Size: 0x68 (Inherited: 0x68)
struct U*20b0f316ee : UMaterialExpression {
};

// Class Engine.*6bfc7814f8
// Size: 0x30 (Inherited: 0x30)
struct U*6bfc7814f8 : UObject {

	void Activate(); // Function Engine.*6bfc7814f8.Activate // Native|Public|BlueprintCallable // @ game+0x66f376c
};

// Class Engine.BlueprintGeneratedClass
// Size: 0x3c8 (Inherited: 0x2c0)
struct UBlueprintGeneratedClass : UClass {
	int32 NumReplicatedProperties; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct TArray<struct U*bc74342338*> *1b6d938bf5; // 0x2c8(0x10)
	struct TArray<struct UActorComponent*> *94a4227fa2; // 0x2d8(0x10)
	struct TArray<struct U*21c8ecb21c*> *073464c770; // 0x2e8(0x10)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x2f8(0x08)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x300(0x08)
	struct UStructProperty* *2d7297fc0a; // 0x308(0x08)
	struct UFunction* *ffe461292a; // 0x310(0x08)
	struct TArray<struct F*2d43941071> FastCallPairs; // 0x318(0x10)
	bool *2d15b7f305; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct TMap<struct FName, struct F*f497c92dc8> *cc5b27c031; // 0x330(0x50)
	bool *ed8fc07e25; // 0x380(0x01)
	char pad_381[0x47]; // 0x381(0x47)
};

// Class Engine.CameraActor
// Size: 0x9a0 (Inherited: 0x3f8)
struct ACameraActor : AActor {
	enum class EAutoReceiveInput *210fe1ca45; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct UCameraComponent* CameraComponent; // 0x400(0x08)
	struct USceneComponent* SceneComponent; // 0x408(0x08)
	char pad_410[0x8]; // 0x410(0x08)
	char bConstrainAspectRatio : 1; // 0x418(0x01)
	char pad_418_1 : 7; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	float AspectRatio; // 0x41c(0x04)
	float FOVAngle; // 0x420(0x04)
	float PostProcessBlendWeight; // 0x424(0x04)
	char pad_428[0x8]; // 0x428(0x08)
	struct FPostProcessSettings PostProcessSettings; // 0x430(0x570)

	int32 *5c0d05bfc6(); // Function Engine.CameraActor.*5c0d05bfc6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6124
};

// Class Engine.UserDefinedStruct
// Size: 0x108 (Inherited: 0xf8)
struct UUserDefinedStruct : UScriptStruct {
	struct FGuid Guid; // 0xf8(0x10)
};

// Class Engine.AISystemBase
// Size: 0x50 (Inherited: 0x30)
struct UAISystemBase : UObject {
	struct FStringClassReference AISystemClassName; // 0x30(0x10)
	struct FName AISystemModuleName; // 0x40(0x08)
	bool bInstantiateAISystemOnClient; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*c2b50fe57b
// Size: 0x50 (Inherited: 0x30)
struct U*c2b50fe57b : UObject {
	struct TArray<struct F*67bc07c1f6> Areas; // 0x30(0x10)
	struct F*a0d435eae7 IncludeFlags; // 0x40(0x04)
	struct F*a0d435eae7 ExcludeFlags; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class Engine.*76e94c1d7f
// Size: 0x40 (Inherited: 0x30)
struct U*76e94c1d7f : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.Model
// Size: 0x568 (Inherited: 0x30)
struct UModel : UObject {
	char pad_30[0x538]; // 0x30(0x538)
};

// Class Engine.*ce9d24fa0d
// Size: 0x30 (Inherited: 0x30)
struct U*ce9d24fa0d : UObject {
};

// Class Engine.*fd5572f7e4
// Size: 0x30 (Inherited: 0x30)
struct U*fd5572f7e4 : UObject {
};

// Class Engine.EdGraphNode
// Size: 0xa8 (Inherited: 0x30)
struct UEdGraphNode : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> DeprecatedPins; // 0x40(0x10)
	int32 *f0e623e576; // 0x50(0x04)
	int32 *f41b253a19; // 0x54(0x04)
	int32 *02c4679bb3; // 0x58(0x04)
	int32 *e4afe75f0a; // 0x5c(0x04)
	char *9610629f99 : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString NodeComment; // 0x68(0x10)
	bool *46eed7e906; // 0x78(0x01)
	bool *ceacf93e55; // 0x79(0x01)
	bool *7bd0b4cf75; // 0x7a(0x01)
	char pad_7B[0x1]; // 0x7b(0x01)
	int32 *e3edaae0b7; // 0x7c(0x04)
	struct FString *ac5b0cf3a1; // 0x80(0x10)
	struct FGuid NodeGuid; // 0x90(0x10)
	enum class ENodeAdvancedPins *46567863b0; // 0xa0(0x01)
	enum class ENodeEnabledState *7262600590; // 0xa1(0x01)
	bool *23a77dda2a; // 0xa2(0x01)
	bool bIsNodeEnabled; // 0xa3(0x01)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.EdGraphPin_Deprecated
// Size: 0x148 (Inherited: 0x30)
struct UEdGraphPin_Deprecated : UObject {
	struct FString PinName; // 0x30(0x10)
	struct FString PinToolTip; // 0x40(0x10)
	enum class EEdGraphPinDirection Direction; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct F*7e1b7fab5a PinType; // 0x58(0x80)
	struct FString DefaultValue; // 0xd8(0x10)
	struct FString *dacd436657; // 0xe8(0x10)
	struct UObject* *2e7ac2654d; // 0xf8(0x08)
	struct FText *40179c9732; // 0x100(0x18)
	struct TArray<struct UEdGraphPin_Deprecated*> *97cdbb49a2; // 0x118(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> *1914cdc056; // 0x128(0x10)
	struct UEdGraphPin_Deprecated* *98fc6dcf40; // 0x138(0x08)
	struct UEdGraphPin_Deprecated* *62ddfe1f6e; // 0x140(0x08)
};

// Class Engine.*abb42ec669
// Size: 0x30 (Inherited: 0x30)
struct U*abb42ec669 : UInterface {
};

// Class Engine.Level
// Size: 0x330 (Inherited: 0x30)
struct ULevel : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FGuid *43c6aace00; // 0x38(0x10)
	float *1d23bb7054; // 0x48(0x04)
	int32 *aac6fa92ed; // 0x4c(0x04)
	char pad_50[0x78]; // 0x50(0x78)
	struct TArray<struct U*e07a4c78fc*> *6d0a3f7070; // 0xc8(0x10)
	struct TArray<struct FGuid> *f6f4fbc950; // 0xd8(0x10)
	struct UWorld* *488bd82a5a; // 0xe8(0x08)
	struct FIntVector *7974928f53; // 0xf0(0x0c)
	bool *544e79503d; // 0xfc(0x01)
	char pad_FD[0xb]; // 0xfd(0x0b)
	char pad_108_0 : 2; // 0x108(0x01)
	char *bd92e97168 : 1; // 0x108(0x01)
	char bIsVisible : 1; // 0x108(0x01)
	char bLocked : 1; // 0x108(0x01)
	char *2a606ba41b : 1; // 0x108(0x01)
	char pad_108_6 : 2; // 0x108(0x01)
	char pad_109[0x1f]; // 0x109(0x1f)
	struct ALevelScriptActor* LevelScriptActor; // 0x128(0x08)
	char pad_130[0x40]; // 0x130(0x40)
	struct ANavigationObjectBase* *51cc2ee46b; // 0x170(0x08)
	struct ANavigationObjectBase* *64fbd02e07; // 0x178(0x08)
	float *6d51322dab; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct UModel* Model; // 0x188(0x08)
	struct TArray<struct U*5150ba566f*> *55f7eb2a9d; // 0x190(0x10)
	struct TArray<struct FVector> *8ca3970608; // 0x1a0(0x10)
	char pad_1B0[0x40]; // 0x1b0(0x40)
	struct UMapBuildDataRegistry* *0ec75154e6; // 0x1f0(0x08)
	char pad_1F8[0x10]; // 0x1f8(0x10)
	int32 *f106a369cf; // 0x208(0x04)
	char pad_20C[0x74]; // 0x20c(0x74)
	struct U*55017046d0* ActorCluster; // 0x280(0x08)
	char pad_288[0x78]; // 0x288(0x78)
	struct AWorldSettings* WorldSettings; // 0x300(0x08)
	char pad_308[0x8]; // 0x308(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x310(0x10)
	char pad_320[0x10]; // 0x320(0x10)
};

// Class Engine.*4f61bf9cab
// Size: 0x30 (Inherited: 0x30)
struct U*4f61bf9cab : UInterface {
};

// Class Engine.AmbientSound
// Size: 0x400 (Inherited: 0x3f8)
struct AAmbientSound : AActor {
	struct UAudioComponent* AudioComponent; // 0x3f8(0x08)

	float *2482587342(); // Function Engine.AmbientSound.*2482587342 // Final|Native|Public|BlueprintCallable // @ game+0x66d4cf4
	void Stop(); // Function Engine.AmbientSound.Stop // Final|Native|Public|BlueprintCallable // @ game+0x66ee7f0
	float FadeOut(); // Function Engine.AmbientSound.FadeOut // Final|Native|Public|BlueprintCallable // @ game+0x66d4de4
	float AdjustVolume(); // Function Engine.AmbientSound.AdjustVolume // Final|Native|Public|BlueprintCallable // @ game+0x66cedf8
	float Play(); // Function Engine.AmbientSound.Play // Final|Native|Public|BlueprintCallable // @ game+0x66e327c
};

// Class Engine.AutoBenchSettings
// Size: 0x48 (Inherited: 0x30)
struct UAutoBenchSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct F*27572cdce5> Settings; // 0x38(0x10)
};

// Class Engine.AutoBenchControlActor
// Size: 0x3f8 (Inherited: 0x3f8)
struct AAutoBenchControlActor : AActor {
};

// Class Engine.*0b64d43df2
// Size: 0x30 (Inherited: 0x30)
struct U*0b64d43df2 : UObject {
};

// Class Engine.*2a8749cb1e
// Size: 0x30 (Inherited: 0x30)
struct U*2a8749cb1e : UInterface {
};

// Class Engine.BillboardComponent
// Size: 0x9e0 (Inherited: 0x9c0)
struct UBillboardComponent : UPrimitiveComponent {
	struct UTexture2D* Sprite; // 0x9b8(0x08)
	char bIsScreenSizeScaled : 1; // 0x9c0(0x01)
	float ScreenSize; // 0x9c4(0x04)
	float U; // 0x9c8(0x04)
	float UL; // 0x9cc(0x04)
	float V; // 0x9d0(0x04)
	float VL; // 0x9d4(0x04)
	struct FColor Color; // 0x9d8(0x04)

	int32 *17e3c97dce(); // Function Engine.BillboardComponent.*17e3c97dce // Native|Public|BlueprintCallable // @ game+0x66ecf6c
	bool SetColor(); // Function Engine.BillboardComponent.SetColor // Final|Native|Public|HasDefaults // @ game+0x66e980c
	int32 *576022c5f3(); // Function Engine.BillboardComponent.*576022c5f3 // Native|Public|BlueprintCallable // @ game+0x66ed62c
	struct UTexture2D* *863c1b7940(); // Function Engine.BillboardComponent.*863c1b7940 // Native|Public|BlueprintCallable // @ game+0x66eced8
};

// Class Engine.*5e9cf974cd
// Size: 0x30 (Inherited: 0x30)
struct U*5e9cf974cd : UInterface {
};

// Class Engine.StaticMesh
// Size: 0x178 (Inherited: 0x30)
struct UStaticMesh : UObject {
	char pad_30[0x18]; // 0x30(0x18)
	int32 MinLOD; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x50(0x10)
	struct TArray<struct F*b95e578402> StaticMaterials; // 0x60(0x10)
	float *e9fbfc159c; // 0x70(0x04)
	int32 LightMapResolution; // 0x74(0x04)
	int32 *e0a09bf5ad; // 0x78(0x04)
	float *ba2bfd22a9; // 0x7c(0x04)
	struct UBodySetup* BodySetup; // 0x80(0x08)
	int32 *6d7466c0fd; // 0x88(0x04)
	char *68b821af92 : 1; // 0x8c(0x01)
	char *d5d8714e97 : 1; // 0x8c(0x01)
	char bStripComplexCollisionForConsole : 1; // 0x8c(0x01)
	char *6963642026 : 1; // 0x8c(0x01)
	char bRequiresAreaWeightedSampling : 1; // 0x8c(0x01)
	char pad_8C_5 : 3; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float LpvBiasMultiplier; // 0x90(0x04)
	bool *83bc9a1002; // 0x94(0x01)
	char pad_95[0x33]; // 0x95(0x33)
	struct TArray<struct U*42332609a2*> Sockets; // 0xc8(0x10)
	char pad_D8[0x10]; // 0xd8(0x10)
	struct FVector *de141d92fd; // 0xe8(0x0c)
	struct FVector *5d3f4952e6; // 0xf4(0x0c)
	struct FBoxSphereBounds *bdb025f306; // 0x100(0x1c)
	bool *724d2a4455; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	int32 *141f243af3; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x128(0x10)
	struct UNavCollision* NavCollision; // 0x138(0x08)
	struct F*1565070a2a *c4842cbb73; // 0x140(0x28)
	struct TArray<struct UMaterialInstanceConstant*> *66f11a0382; // 0x168(0x10)

	struct FBox *bb75c221c9(); // Function Engine.StaticMesh.*bb75c221c9 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6a9c
	int32 *2b50187029(); // Function Engine.StaticMesh.*2b50187029 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66da2b4
	struct FBoxSphereBounds *65dc3531ad(); // Function Engine.StaticMesh.*65dc3531ad // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6ba8
	int32 *db671a7987(); // Function Engine.StaticMesh.*db671a7987 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66da244
};

// Class Engine.*fd85e3fbd5
// Size: 0x590 (Inherited: 0x480)
struct U*fd85e3fbd5 : USceneComponent {
	struct FVector Extents; // 0x478(0x0c)
	struct FVector FadeExtents_Neg; // 0x484(0x0c)
	struct FVector FadeExtents_Pos; // 0x490(0x0c)
	bool bOutdoorTransition; // 0x49c(0x01)
	float VolumeAlpha; // 0x4a0(0x04)
	float Brightness; // 0x4a4(0x04)
	float SkyIntensity; // 0x4a8(0x04)
	int32 Priority; // 0x4ac(0x04)
	struct F*bdabc767c1 AmbientCube2; // 0x4b0(0xc8)
	char pad_57D[0x13]; // 0x57d(0x13)

	void *3f7afeecc8(); // Function Engine.*fd85e3fbd5.*3f7afeecc8 // Final|Native|Public // @ game+0xbdd69c
};

// Class Engine.GIVolumesContainerComponent
// Size: 0x490 (Inherited: 0x480)
struct UGIVolumesContainerComponent : USceneComponent {
	char pad_480[0x10]; // 0x480(0x10)
};

// Class Engine.BoxGIVolume
// Size: 0x400 (Inherited: 0x3f8)
struct ABoxGIVolume : AActor {
	struct U*fd85e3fbd5* VolumeComponent; // 0x3f8(0x08)
};

// Class Engine.BrushShape
// Size: 0x430 (Inherited: 0x430)
struct ABrushShape : ABrush {
};

// Class Engine.AudioVolume
// Size: 0x478 (Inherited: 0x430)
struct AAudioVolume : AVolume {
	float Priority; // 0x430(0x04)
	char bEnabled : 1; // 0x434(0x01)
	char pad_434_1 : 7; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct FReverbSettings Settings; // 0x438(0x18)
	struct F*d94406f7f4 AmbientZoneSettings; // 0x450(0x24)
	char pad_474[0x4]; // 0x474(0x04)

	float SetPriority(); // Function Engine.AudioVolume.SetPriority // Final|Native|Public|BlueprintCallable // @ game+0x66ec8a8
	void OnRep_bEnabled(); // Function Engine.AudioVolume.OnRep_bEnabled // Final|Native|Private // @ game+0xa2c154
	bool *8828e22427(); // Function Engine.AudioVolume.*8828e22427 // Final|Native|Public|BlueprintCallable // @ game+0x66ea170
	struct FReverbSettings SetReverbSettings(); // Function Engine.AudioVolume.SetReverbSettings // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66ecd80
	struct F*d94406f7f4 *35168e2a75(); // Function Engine.AudioVolume.*35168e2a75 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66eae40
};

// Class Engine.BlockingVolume
// Size: 0x430 (Inherited: 0x430)
struct ABlockingVolume : AVolume {
};

// Class Engine.CameraBlockingVolume
// Size: 0x430 (Inherited: 0x430)
struct ACameraBlockingVolume : AVolume {
};

// Class Engine.CullDistanceVolume
// Size: 0x458 (Inherited: 0x430)
struct ACullDistanceVolume : AVolume {
	struct TArray<struct F*5149d535a7> CullDistances; // 0x430(0x10)
	char bEnabled : 1; // 0x440(0x01)
	char pad_440_1 : 7; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	float CullDistanceForLODActor; // 0x444(0x04)
	float CullDistanceForLODActorTooFar; // 0x448(0x04)
	bool bUseActorBound; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	float IgnoreActorBoundSize; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
};

// Class Engine.LevelStreamingVolume
// Size: 0x448 (Inherited: 0x430)
struct ALevelStreamingVolume : AVolume {
	struct TArray<struct FName> StreamingLevelNames; // 0x430(0x10)
	char bEditorPreVisOnly : 1; // 0x440(0x01)
	char bDisabled : 1; // 0x440(0x01)
	char pad_440_2 : 6; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	enum class *40de190205 StreamingUsage; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
};

// Class Engine.LightmassCharacterIndirectDetailVolume
// Size: 0x430 (Inherited: 0x430)
struct ALightmassCharacterIndirectDetailVolume : AVolume {
};

// Class Engine.LightmassImportanceVolume
// Size: 0x430 (Inherited: 0x430)
struct ALightmassImportanceVolume : AVolume {
};

// Class Engine.MeshMergeCullingVolume
// Size: 0x430 (Inherited: 0x430)
struct AMeshMergeCullingVolume : AVolume {
};

// Class Engine.NavMeshBoundsVolume
// Size: 0x438 (Inherited: 0x430)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
};

// Class Engine.DefaultPhysicsVolume
// Size: 0x448 (Inherited: 0x448)
struct ADefaultPhysicsVolume : APhysicsVolume {
};

// Class Engine.KillZVolume
// Size: 0x448 (Inherited: 0x448)
struct AKillZVolume : APhysicsVolume {
};

// Class Engine.PainCausingVolume
// Size: 0x470 (Inherited: 0x448)
struct APainCausingVolume : APhysicsVolume {
	char bPainCausing : 1; // 0x448(0x01)
	char pad_448_1 : 7; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	float DamagePerSec; // 0x44c(0x04)
	struct UClass* DamageType; // 0x450(0x08)
	float PainInterval; // 0x458(0x04)
	char bEntryPain : 1; // 0x45c(0x01)
	char *45634256d7 : 1; // 0x45c(0x01)
	char pad_45C_2 : 6; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	struct AController* *d94d66223f; // 0x460(0x08)
	char pad_468[0x8]; // 0x468(0x08)
};

// Class Engine.BlendableInterface
// Size: 0x30 (Inherited: 0x30)
struct UBlendableInterface : UInterface {
};

// Class Engine.Scene
// Size: 0x30 (Inherited: 0x30)
struct UScene : UObject {
};

// Class Engine.*5403077ac7
// Size: 0x30 (Inherited: 0x30)
struct U*5403077ac7 : UInterface {
};

// Class Engine.PostProcessVolume
// Size: 0x9c0 (Inherited: 0x430)
struct APostProcessVolume : AVolume {
	char pad_430[0x10]; // 0x430(0x10)
	struct FPostProcessSettings Settings; // 0x440(0x570)
	float Priority; // 0x9b0(0x04)
	float BlendRadius; // 0x9b4(0x04)
	float BlendWeight; // 0x9b8(0x04)
	char bEnabled : 1; // 0x9bc(0x01)
	char bUnbound : 1; // 0x9bc(0x01)
	char pad_9BC_2 : 6; // 0x9bc(0x01)
	char pad_9BD[0x3]; // 0x9bd(0x03)

	float *cec1cb64e0(); // Function Engine.PostProcessVolume.*cec1cb64e0 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66ef388
	float *fa132a0246(); // Function Engine.PostProcessVolume.*fa132a0246 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66ce3dc
};

// Class Engine.PrecomputedVisibilityOverrideVolume
// Size: 0x460 (Inherited: 0x430)
struct APrecomputedVisibilityOverrideVolume : AVolume {
	struct TArray<struct AActor*> OverrideVisibleActors; // 0x430(0x10)
	struct TArray<struct AActor*> OverrideInvisibleActors; // 0x440(0x10)
	struct TArray<struct FName> OverrideInvisibleLevels; // 0x450(0x10)
};

// Class Engine.PrecomputedVisibilityVolume
// Size: 0x430 (Inherited: 0x430)
struct APrecomputedVisibilityVolume : AVolume {
};

// Class Engine.TriggerVolume
// Size: 0x430 (Inherited: 0x430)
struct ATriggerVolume : AVolume {
};

// Class Engine.*d516522a17
// Size: 0x30 (Inherited: 0x30)
struct U*d516522a17 : UInterface {
};

// Class Engine.CameraShake
// Size: 0x170 (Inherited: 0x30)
struct UCameraShake : UObject {
	char *a1129bfbd8 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *a990975726; // 0x34(0x04)
	float *99ca5d8eef; // 0x38(0x04)
	float *f03da12a63; // 0x3c(0x04)
	struct F*f7217abe10 *fbdc439690; // 0x40(0x24)
	struct F*06e6e74a48 *b9e2b7833f; // 0x64(0x24)
	struct F*dc02247a53 *168c6d0348; // 0x88(0x0c)
	float AnimPlayRate; // 0x94(0x04)
	float *be68479f85; // 0x98(0x04)
	float *8b697649b9; // 0x9c(0x04)
	float *b7a23eb463; // 0xa0(0x04)
	float *980c5845a2; // 0xa4(0x04)
	struct UCameraAnim* Anim; // 0xa8(0x08)
	char bRandomAnimSegment : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x17]; // 0xb1(0x17)
	struct APlayerCameraManager* CameraOwner; // 0xc8(0x08)
	char pad_D0[0x88]; // 0xd0(0x88)
	float ShakeScale; // 0x158(0x04)
	float OscillatorTimeRemaining; // 0x15c(0x04)
	struct U*d3f66f5eff* AnimInst; // 0x160(0x08)
	char pad_168[0x8]; // 0x168(0x08)

	bool ReceiveIsFinished(); // Function Engine.CameraShake.ReceiveIsFinished // Native|Event|Public|BlueprintEvent|Const // @ game+0xbb568c
	bool ReceiveStopShake(); // Function Engine.CameraShake.ReceiveStopShake // Event|Public|BlueprintEvent // @ game+0x22c9a0
	float ReceivePlayShake(); // Function Engine.CameraShake.ReceivePlayShake // Event|Public|BlueprintEvent // @ game+0x22c9a0
	struct F*067063007d BlueprintUpdateCameraShake(); // Function Engine.CameraShake.BlueprintUpdateCameraShake // Event|Public|HasOutParms|BlueprintEvent // @ game+0x22c9a0
};

// Class Engine.*89f9a84286
// Size: 0x290 (Inherited: 0x200)
struct U*89f9a84286 : UActorComponent {
	char pad_200[0x70]; // 0x200(0x70)
	struct TArray<struct F*a490466ff0> *a490466ff0; // 0x270(0x10)
	char pad_280[0x10]; // 0x280(0x10)

	enum class EEndPlayReason OnInputOwnerEndPlayed(); // Function Engine.*89f9a84286.OnInputOwnerEndPlayed // Final|Native|Private // @ game+0x66e2b50
	struct FVector *209e40adf2(); // Function Engine.*89f9a84286.*209e40adf2 // Final|Native|Private|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d78c8
	bool *954e6309b3(); // Function Engine.*89f9a84286.*954e6309b3 // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc500
	float *043fd36a6d(); // Function Engine.*89f9a84286.*043fd36a6d // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d77f8
	float *a01b6d7366(); // Function Engine.*89f9a84286.*a01b6d7366 // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d76e0
	float *a121de3dd8(); // Function Engine.*89f9a84286.*a121de3dd8 // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x66d75d8
	bool *c28aaac792(); // Function Engine.*89f9a84286.*c28aaac792 // Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66db91c
	float *3aafd5898c(); // Function Engine.*89f9a84286.*3aafd5898c // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x66d75d8
	bool *37d2feebd2(); // Function Engine.*89f9a84286.*37d2feebd2 // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc500
	bool *d63dd4050c(); // Function Engine.*89f9a84286.*d63dd4050c // Final|Native|Private|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc500
};

// Class Engine.CurveFloat
// Size: 0xb0 (Inherited: 0x38)
struct UCurveFloat : UCurveBase {
	struct FRichCurve *0796ed81e5; // 0x38(0x70)
	bool *ee37441e4d; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	float *602c42cae2(); // Function Engine.CurveFloat.*602c42cae2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7a6c
	float *9da493fa7f(); // Function Engine.CurveFloat.*9da493fa7f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xae490c
};

// Class Engine.DecalActor
// Size: 0x400 (Inherited: 0x3f8)
struct ADecalActor : AActor {
	struct UDecalComponent* Decal; // 0x3f8(0x08)

	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // Function Engine.DecalActor.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x594c9a0
	struct UMaterialInterface* *985cbb1955(); // Function Engine.DecalActor.*985cbb1955 // Final|Native|Public|BlueprintCallable // @ game+0x66e9f64
	struct UMaterialInterface* *7f5d0189f2(); // Function Engine.DecalActor.*7f5d0189f2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7a2c
};

// Class Engine.DestructibleActor
// Size: 0x418 (Inherited: 0x3f8)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x3f8(0x08)
	char bAffectNavigation : 1; // 0x400(0x01)
	char pad_400_1 : 7; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FMulticastDelegate OnActorFracture; // 0x408(0x10)
};

// Class Engine.DistanceFieldCapture
// Size: 0x400 (Inherited: 0x3f8)
struct ADistanceFieldCapture : AActor {
	struct U*e3423cb73a* CaptureComponent; // 0x3f8(0x08)
};

// Class Engine.DocumentationActor
// Size: 0x400 (Inherited: 0x3f8)
struct ADocumentationActor : AActor {
	char pad_3F8[0x8]; // 0x3f8(0x08)
};

// Class Engine.Emitter
// Size: 0x448 (Inherited: 0x3f8)
struct AEmitter : AActor {
	struct UParticleSystemComponent* ParticleSystemComponent; // 0x3f8(0x08)
	char *ff9098583d : 1; // 0x400(0x01)
	char bPostUpdateTickGroup : 1; // 0x400(0x01)
	char *477c5697c6 : 1; // 0x400(0x01)
	char pad_400_3 : 5; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FMulticastDelegate OnParticleSpawn; // 0x408(0x10)
	struct FMulticastDelegate OnParticleBurst; // 0x418(0x10)
	struct FMulticastDelegate OnParticleDeath; // 0x428(0x10)
	struct FMulticastDelegate OnParticleCollide; // 0x438(0x10)

	struct UParticleSystemComponent* OnParticleSystemFinished(); // Function Engine.Emitter.OnParticleSystemFinished // Native|Public // @ game+0x58f0148
	void *9eb2ac36d0(); // Function Engine.Emitter.*9eb2ac36d0 // Final|Native|Public|BlueprintCallable // @ game+0x66ef054
	bool IsActive(); // Function Engine.Emitter.IsActive // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc260
	struct FLinearColor *0c18dcbb66(); // Function Engine.Emitter.*0c18dcbb66 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66e98f0
	struct AActor* *3a45f42ea4(); // Function Engine.Emitter.*3a45f42ea4 // Final|Native|Public|BlueprintCallable // @ game+0x66e754c
	void OnRep_bCurrentlyActive(); // Function Engine.Emitter.OnRep_bCurrentlyActive // Native|Public // @ game+0x59a23dc
	float SetFloatParameter(); // Function Engine.Emitter.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0x66ea2c4
	struct FVector *1ce0c10461(); // Function Engine.Emitter.*1ce0c10461 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66ed9b0
	void Deactivate(); // Function Engine.Emitter.Deactivate // Final|Native|Public|BlueprintCallable // @ game+0x66d2ae4
	void Activate(); // Function Engine.Emitter.Activate // Final|Native|Public|BlueprintCallable // @ game+0x66ccd0c
	struct UMaterialInterface* *72f8053368(); // Function Engine.Emitter.*72f8053368 // Final|Native|Public|BlueprintCallable // @ game+0x66eba5c
	struct UParticleSystem* *033547d67c(); // Function Engine.Emitter.*033547d67c // Native|Public|BlueprintCallable // @ game+0x59e3a70
};

// Class Engine.EmitterCameraLensEffectBase
// Size: 0x4b0 (Inherited: 0x448)
struct AEmitterCameraLensEffectBase : AEmitter {
	struct UParticleSystem* *d2bdbe540f; // 0x448(0x08)
	struct UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x450(0x08)
	struct APlayerCameraManager* *56bcb63c05; // 0x458(0x08)
	struct FTransform RelativeTransform; // 0x460(0x30)
	float *1ed2100235; // 0x490(0x04)
	char *f205dbfaef : 1; // 0x494(0x01)
	char *a69228887d : 1; // 0x494(0x01)
	char pad_494_2 : 6; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	struct TArray<struct UClass*> *9d165d2087; // 0x498(0x10)
	float DistFromCamera; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
};

// Class Engine.FoliageBlockingVolumeActor
// Size: 0x400 (Inherited: 0x3f8)
struct AFoliageBlockingVolumeActor : AActor {
	struct U*6d8ae0baac* FoliageBlockingVolumeComponent; // 0x3f8(0x08)
};

// Class Engine.DebugCameraHUD
// Size: 0x4e0 (Inherited: 0x4e0)
struct ADebugCameraHUD : AHUD {
};

// Class Engine.AtmosphericFog
// Size: 0x400 (Inherited: 0x3f8)
struct AAtmosphericFog : AInfo {
	struct UAtmosphericFogComponent* AtmosphericFogComponent; // 0x3f8(0x08)
};

// Class Engine.ExponentialHeightFog
// Size: 0x408 (Inherited: 0x3f8)
struct AExponentialHeightFog : AInfo {
	struct UExponentialHeightFogComponent* Component; // 0x3f8(0x08)
	char bEnabled : 1; // 0x400(0x01)
	char pad_400_1 : 7; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)

	void OnRep_bEnabled(); // Function Engine.ExponentialHeightFog.OnRep_bEnabled // Native|Public // @ game+0x5909df4
};

// Class Engine.GameNetworkManager
// Size: 0x480 (Inherited: 0x3f8)
struct AGameNetworkManager : AInfo {
	int32 *7a0d46f993; // 0x3f8(0x04)
	float *6cee4e4b05; // 0x3fc(0x04)
	int32 TotalNetBandwidth; // 0x400(0x04)
	int32 MinDynamicBandwidth; // 0x404(0x04)
	int32 MaxDynamicBandwidth; // 0x408(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x40c(0x01)
	char *fe16a2226b : 1; // 0x40c(0x01)
	char pad_40C_2 : 6; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	float StandbyRxCheatTime; // 0x410(0x04)
	float StandbyTxCheatTime; // 0x414(0x04)
	int32 BadPingThreshold; // 0x418(0x04)
	float PercentMissingForRxStandby; // 0x41c(0x04)
	float PercentMissingForTxStandby; // 0x420(0x04)
	float PercentForBadPing; // 0x424(0x04)
	float JoinInProgressStandbyWaitTime; // 0x428(0x04)
	float MoveRepSize; // 0x42c(0x04)
	float MAXPOSITIONERRORSQUARED; // 0x430(0x04)
	float MAXNEARZEROVELOCITYSQUARED; // 0x434(0x04)
	float CLIENTADJUSTUPDATECOST; // 0x438(0x04)
	float MAXCLIENTUPDATEINTERVAL; // 0x43c(0x04)
	float MaxMoveDeltaTime; // 0x440(0x04)
	float ClientNetSendMoveDeltaTime; // 0x444(0x04)
	float ClientNetSendMoveDeltaTimeThrottled; // 0x448(0x04)
	int32 ClientNetSendMoveThrottleAtNetSpeed; // 0x44c(0x04)
	int32 ClientNetSendMoveThrottleOverPlayerCount; // 0x450(0x04)
	bool ClientAuthorativePosition; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	float ClientErrorUpdateRateLimit; // 0x458(0x04)
	bool bMovementTimeDiscrepancyDetection; // 0x45c(0x01)
	bool bMovementTimeDiscrepancyResolution; // 0x45d(0x01)
	char pad_45E[0x2]; // 0x45e(0x02)
	float MovementTimeDiscrepancyResolutionMinFPS; // 0x460(0x04)
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x464(0x04)
	float MovementTimeDiscrepancyMinTimeMargin; // 0x468(0x04)
	float MovementTimeDiscrepancyResolutionRate; // 0x46c(0x04)
	float MovementTimeDiscrepancyDriftAllowance; // 0x470(0x04)
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x474(0x01)
	bool bUseDistanceBasedRelevancy; // 0x475(0x01)
	char pad_476[0xa]; // 0x476(0x0a)
};

// Class Engine.SkyLight
// Size: 0x408 (Inherited: 0x3f8)
struct ASkyLight : AInfo {
	struct USkyLightComponent* LightComponent; // 0x3f8(0x08)
	char bEnabled : 1; // 0x400(0x01)
	char pad_400_1 : 7; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)

	void OnRep_bEnabled(); // Function Engine.SkyLight.OnRep_bEnabled // Native|Public // @ game+0x5909df4
};

// Class Engine.WindDirectionalSource
// Size: 0x400 (Inherited: 0x3f8)
struct AWindDirectionalSource : AInfo {
	struct U*fade075c07* Component; // 0x3f8(0x08)
};

// Class Engine.WorldSettings
// Size: 0x5e8 (Inherited: 0x3f8)
struct AWorldSettings : AInfo {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	char bEnableWorldBoundsChecks : 1; // 0x400(0x01)
	char bEnableNavigationSystem : 1; // 0x400(0x01)
	char bEnableAISystem : 1; // 0x400(0x01)
	char bEnableWorldComposition : 1; // 0x400(0x01)
	char bUseClientSideLevelStreamingVolumes : 1; // 0x400(0x01)
	char bEnableWorldOriginRebasing : 1; // 0x400(0x01)
	char *1b3bf05162 : 1; // 0x400(0x01)
	char bGlobalGravitySet : 1; // 0x400(0x01)
	char bEnableAsyncScene : 1; // 0x401(0x01)
	char pad_401_1 : 7; // 0x401(0x01)
	char pad_402[0x2]; // 0x402(0x02)
	float KillZ; // 0x404(0x04)
	struct AInfo* LevelAttribute; // 0x408(0x08)
	struct UClass* KillZDamageType; // 0x410(0x08)
	float *daf08be9a3; // 0x418(0x04)
	float GlobalGravityZ; // 0x41c(0x04)
	struct UClass* DefaultPhysicsVolumeClass; // 0x420(0x08)
	struct UClass* PhysicsCollisionHandlerClass; // 0x428(0x08)
	char bForceIncrementalAABBPruner_Server : 1; // 0x430(0x01)
	char bForceIncrementalAABBPruner_Client : 1; // 0x430(0x01)
	char pad_430_2 : 6; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct UClass* DefaultGameMode; // 0x438(0x08)
	struct UClass* *1236c3ffaf; // 0x440(0x08)
	int32 *834cfddd45; // 0x448(0x04)
	char *031b2bf3fc : 1; // 0x44c(0x01)
	char pad_44C_1 : 7; // 0x44c(0x01)
	char pad_44D[0x3]; // 0x44d(0x03)
	struct FVector DefaultColorScale; // 0x450(0x0c)
	float *03b7a9c42f; // 0x45c(0x04)
	float *a9c9193d7f; // 0x460(0x04)
	float *dcd0f989fa; // 0x464(0x04)
	char *315e1bf4e9 : 1; // 0x468(0x01)
	char *544e22d298 : 1; // 0x468(0x01)
	char pad_468_2 : 6; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	int32 *5dbe00a864; // 0x46c(0x04)
	enum class *93c77fd157 *84d9a928e7; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	char *0085edc936 : 1; // 0x474(0x01)
	char pad_474_1 : 7; // 0x474(0x01)
	char pad_475[0x3]; // 0x475(0x03)
	struct FLightmassWorldInfoSettings LightmassSettings; // 0x478(0x44)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct FReverbSettings DefaultReverbSettings; // 0x4c0(0x18)
	struct F*d94406f7f4 DefaultAmbientZoneSettings; // 0x4d8(0x24)
	char pad_4FC[0x4]; // 0x4fc(0x04)
	struct USoundMix* *b8bdda4701; // 0x500(0x08)
	float WorldToMeters; // 0x508(0x04)
	float MonoCullingDistance; // 0x50c(0x04)
	struct U*8380fce329* BookMarks[0x0a]; // 0x510(0x50)
	float TimeDilation; // 0x560(0x04)
	float *1b5ce02670; // 0x564(0x04)
	float DemoPlayTimeDilation; // 0x568(0x04)
	float MinGlobalTimeDilation; // 0x56c(0x04)
	float MaxGlobalTimeDilation; // 0x570(0x04)
	char pad_574[0x8]; // 0x574(0x08)
	struct FBox MBPBounds; // 0x57c(0x1c)
	char bOverrideDefaultBroadphaseSettings : 1; // 0x598(0x01)
	char pad_598_1 : 7; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	char *03653f7410 : 1; // 0x59c(0x01)
	char *0a81cd6ba2 : 1; // 0x59c(0x01)
	char pad_59C_2 : 6; // 0x59c(0x01)
	char pad_59D[0x3]; // 0x59d(0x03)
	struct TArray<struct F*552ef1334c> *e5a71ea685; // 0x5a0(0x10)
	struct FMulticastDelegate *c033c219d6; // 0x5b0(0x10)
	struct FMulticastDelegate *38c90bed17; // 0x5c0(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x5d0(0x10)
	struct APlayerState* *7c5bd417d0; // 0x5e0(0x08)

	void TakeMBPBounds(); // Function Engine.WorldSettings.TakeMBPBounds // Native|Event|Public|BlueprintEvent // @ game+0x5909df4
	void OnRep_WorldGravityZ(); // Function Engine.WorldSettings.OnRep_WorldGravityZ // Native|Public // @ game+0x59a23dc
};

// Class Engine.InstancedDeferredDecalActor
// Size: 0x430 (Inherited: 0x3f8)
struct AInstancedDeferredDecalActor : AActor {
	bool bUseInstancePool; // 0x3f8(0x01)
	bool bUseDynamicInstance; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
	struct UMaterialInterface* SharedMaterial; // 0x400(0x08)
	struct U*4ac6be710c* RootDecalComponent; // 0x408(0x08)
	struct TArray<struct U*4ac6be710c*> decals; // 0x410(0x10)
	char pad_420[0x10]; // 0x420(0x10)

	struct FVector *af6477ee17(); // Function Engine.InstancedDeferredDecalActor.*af6477ee17 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66ce0d8
	struct UMaterialInterface* *985cbb1955(); // Function Engine.InstancedDeferredDecalActor.*985cbb1955 // Final|Native|Public|BlueprintCallable // @ game+0x66e9ffc
	struct UMaterialInterface* *7f5d0189f2(); // Function Engine.InstancedDeferredDecalActor.*7f5d0189f2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d7a54
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // Function Engine.InstancedDeferredDecalActor.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x594c9a0
	bool *ed57fe8fd8(); // Function Engine.InstancedDeferredDecalActor.*ed57fe8fd8 // Final|Native|Public|BlueprintCallable // @ game+0x66ed920
	bool *f2c444f225(); // Function Engine.InstancedDeferredDecalActor.*f2c444f225 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5907b50
	bool *3c4017902e(); // Function Engine.InstancedDeferredDecalActor.*3c4017902e // Final|Native|Public|BlueprintCallable // @ game+0x590d14c
	bool *35f91c25dc(); // Function Engine.InstancedDeferredDecalActor.*35f91c25dc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5907b38
};

// Class Engine.InstancedMeshActor
// Size: 0x3f8 (Inherited: 0x3f8)
struct AInstancedMeshActor : AActor {
};

// Class Engine.InstancedSplineDecalActor
// Size: 0x400 (Inherited: 0x3f8)
struct AInstancedSplineDecalActor : AActor {
	struct U*6fca80a880* InstancedSplineDecalComponent; // 0x3f8(0x08)
};

// Class Engine.LevelBlockLandscapeGizmoActor
// Size: 0x400 (Inherited: 0x3f8)
struct ALevelBlockLandscapeGizmoActor : AActor {
	struct U*bed6c45ca0* LandscapeGizmoComponent; // 0x3f8(0x08)
};

// Class Engine.LevelBlocksDataActor
// Size: 0x400 (Inherited: 0x3f8)
struct ALevelBlocksDataActor : AActor {
	struct U*0ddf4d519f* LevelBlocksDataComponent; // 0x3f8(0x08)
};

// Class Engine.LevelBlockSpawnedActor
// Size: 0x3f8 (Inherited: 0x3f8)
struct ALevelBlockSpawnedActor : AActor {
};

// Class Engine.LevelBlockSpawnPointActor
// Size: 0x400 (Inherited: 0x3f8)
struct ALevelBlockSpawnPointActor : AActor {
	struct U*1f6088d17c* SpawnPointComponent; // 0x3f8(0x08)
};

// Class Engine.LevelBounds
// Size: 0x400 (Inherited: 0x3f8)
struct ALevelBounds : AActor {
	bool *c6938c8a35; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
};

// Class Engine.Light
// Size: 0x408 (Inherited: 0x3f8)
struct ALight : AActor {
	struct ULightComponent* LightComponent; // 0x3f8(0x08)
	char bEnabled : 1; // 0x400(0x01)
	char pad_400_1 : 7; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)

	bool *fde7343060(); // Function Engine.Light.*fde7343060 // Final|Native|Public|BlueprintCallable // @ game+0x66e9160
	float SetBrightness(); // Function Engine.Light.SetBrightness // Final|Native|Public|BlueprintCallable // @ game+0x66e8f1c
	float *e69c2a9144(); // Function Engine.Light.*e69c2a9144 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d6bdc
	struct FLinearColor *c0e895a11e(); // Function Engine.Light.*c0e895a11e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66eb158
	void OnRep_bEnabled(); // Function Engine.Light.OnRep_bEnabled // Native|Public // @ game+0x5909df4
	float *5ca15ddb64(); // Function Engine.Light.*5ca15ddb64 // Final|Native|Public|BlueprintCallable // @ game+0x66eb28c
	struct UMaterialInterface* *63cb3ee82f(); // Function Engine.Light.*63cb3ee82f // Final|Native|Public|BlueprintCallable // @ game+0x66eb328
	struct FVector *46e3ca3f4d(); // Function Engine.Light.*46e3ca3f4d // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66eb3bc
	void *2a0a52603f(); // Function Engine.Light.*2a0a52603f // Final|Native|Public|BlueprintCallable // @ game+0x66ef0d0
	bool *32714f25cf(); // Function Engine.Light.*32714f25cf // Final|Native|Public|BlueprintCallable // @ game+0x66e7984
	bool *8828e22427(); // Function Engine.Light.*8828e22427 // Final|Native|Public|BlueprintCallable // @ game+0x66ea22c
	struct FLinearColor *5cae41be78(); // Function Engine.Light.*5cae41be78 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x66d97d0
	bool IsEnabled(); // Function Engine.Light.IsEnabled // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc630
};

// Class Engine.DirectionalLight
// Size: 0x408 (Inherited: 0x408)
struct ADirectionalLight : ALight {
};

// Class Engine.PointLight
// Size: 0x410 (Inherited: 0x408)
struct APointLight : ALight {
	struct UPointLightComponent* PointLightComponent; // 0x408(0x08)

	float *485d6ff949(); // Function Engine.PointLight.*485d6ff949 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66eb1f0
	float SetRadius(); // Function Engine.PointLight.SetRadius // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66ec9d8
};

// Class Engine.spotlight
// Size: 0x410 (Inherited: 0x408)
struct Aspotlight : ALight {
	struct USpotLightComponent* SpotLightComponent; // 0x408(0x08)

	float *af3a4a82b2(); // Function Engine.spotlight.*af3a4a82b2 // Final|Native|Public|BlueprintCallable // @ game+0x66ec088
	float *6410d64b8b(); // Function Engine.spotlight.*6410d64b8b // Final|Native|Public|BlueprintCallable // @ game+0x66eada4
};

// Class Engine.GeneratedMeshAreaLight
// Size: 0x410 (Inherited: 0x410)
struct AGeneratedMeshAreaLight : Aspotlight {
};

// Class Engine.LightmassPortal
// Size: 0x400 (Inherited: 0x3f8)
struct ALightmassPortal : AActor {
	struct U*bcc8a3c007* PortalComponent; // 0x3f8(0x08)
};

// Class Engine.LODActor
// Size: 0x430 (Inherited: 0x3f8)
struct ALODActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x3f8(0x08)
	struct TArray<struct AActor*> SubActors; // 0x400(0x10)
	float LODDrawDistance; // 0x410(0x04)
	int32 LODLevel; // 0x414(0x04)
	struct TArray<struct UObject*> SubObjects; // 0x418(0x10)
	char pad_428[0x8]; // 0x428(0x08)
};

// Class Engine.MaterialInstanceActor
// Size: 0x408 (Inherited: 0x3f8)
struct AMaterialInstanceActor : AActor {
	struct TArray<struct AActor*> TargetActors; // 0x3f8(0x10)
};

// Class Engine.MatineeActor
// Size: 0x4a0 (Inherited: 0x3f8)
struct AMatineeActor : AActor {
	struct UInterpData* MatineeData; // 0x3f8(0x08)
	struct FName *51b5dd8b94; // 0x400(0x08)
	float PlayRate; // 0x408(0x04)
	char bPlayOnLevelLoad : 1; // 0x40c(0x01)
	char bForceStartPos : 1; // 0x40c(0x01)
	char pad_40C_2 : 6; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	float ForceStartPosition; // 0x410(0x04)
	char bLooping : 1; // 0x414(0x01)
	char bRewindOnPlay : 1; // 0x414(0x01)
	char bNoResetOnRewind : 1; // 0x414(0x01)
	char bRewindIfAlreadyPlaying : 1; // 0x414(0x01)
	char bDisableRadioFilter : 1; // 0x414(0x01)
	char bClientSideOnly : 1; // 0x414(0x01)
	char bSkipUpdateIfNotVisible : 1; // 0x414(0x01)
	char bIsSkippable : 1; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	int32 PreferredSplitScreenNum; // 0x418(0x04)
	char bDisableMovementInput : 1; // 0x41c(0x01)
	char bDisableLookAtInput : 1; // 0x41c(0x01)
	char bHidePlayer : 1; // 0x41c(0x01)
	char bHideHud : 1; // 0x41c(0x01)
	char pad_41C_4 : 4; // 0x41c(0x01)
	char pad_41D[0x3]; // 0x41d(0x03)
	struct TArray<struct F*097c3ea9ba> GroupActorInfos; // 0x420(0x10)
	char *f901036a7b : 1; // 0x430(0x01)
	char pad_430_1 : 7; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct TArray<struct U*9a21d771a7*> *f14b3e0656; // 0x438(0x10)
	struct TArray<struct F*c74a172e6a> CameraCuts; // 0x448(0x10)
	char bIsPlaying : 1; // 0x458(0x01)
	char *bdac78466e : 1; // 0x458(0x01)
	char *62e490240c : 1; // 0x458(0x01)
	char *70031384a4 : 1; // 0x458(0x01)
	char pad_458_4 : 4; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	float InterpPosition; // 0x45c(0x04)
	char pad_460[0x4]; // 0x460(0x04)
	bool *3a5c6a8ab0; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct FMulticastDelegate OnPlay; // 0x468(0x10)
	struct FMulticastDelegate OnStop; // 0x478(0x10)
	struct FMulticastDelegate OnPause; // 0x488(0x10)
	char pad_498[0x8]; // 0x498(0x08)

	void Pause(); // Function Engine.MatineeActor.Pause // Native|Public|BlueprintCallable // @ game+0x5997540
	void Play(); // Function Engine.MatineeActor.Play // Native|Public|BlueprintCallable // @ game+0x59a23dc
	void Stop(); // Function Engine.MatineeActor.Stop // Native|Public|BlueprintCallable // @ game+0x59dc47c
	void Reverse(); // Function Engine.MatineeActor.Reverse // Native|Public|BlueprintCallable // @ game+0x59dc494
	void *369f181ebb(); // Function Engine.MatineeActor.*369f181ebb // Native|Public|BlueprintCallable // @ game+0xa2c154
	bool *64e9755f5a(); // Function Engine.MatineeActor.*64e9755f5a // Native|Public|BlueprintCallable // @ game+0x66eb594
	bool *fdaa0e2db2(); // Function Engine.MatineeActor.*fdaa0e2db2 // Final|Native|Public|BlueprintCallable // @ game+0x66d4a50
	bool SetPosition(); // Function Engine.MatineeActor.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x66ec7c4
};

// Class Engine.MatineeActorCameraAnim
// Size: 0x4a8 (Inherited: 0x4a0)
struct AMatineeActorCameraAnim : AMatineeActor {
	struct UCameraAnim* CameraAnim; // 0x4a0(0x08)
};

// Class Engine.MinimapLabelActor
// Size: 0x400 (Inherited: 0x3f8)
struct AMinimapLabelActor : AActor {
	struct U*dcf12a725f* MinimapLabelComponent; // 0x3f8(0x08)
};

// Class Engine.MinimapObjectActor
// Size: 0x400 (Inherited: 0x3f8)
struct AMinimapObjectActor : AActor {
	struct U*a40cdcc7b3* MinimapObjectComponent; // 0x3f8(0x08)
};

// Class Engine.AbstractNavData
// Size: 0x5a0 (Inherited: 0x5a0)
struct AAbstractNavData : ANavigationData {
};

// Class Engine.NavigationGraph
// Size: 0x5a0 (Inherited: 0x5a0)
struct ANavigationGraph : ANavigationData {
};

// Class Engine.NavigationGraphNode
// Size: 0x3f8 (Inherited: 0x3f8)
struct ANavigationGraphNode : AActor {
};

// Class Engine.PlayerStartPIE
// Size: 0x428 (Inherited: 0x428)
struct APlayerStartPIE : APlayerStart {
};

// Class Engine.*00025a7e29
// Size: 0x30 (Inherited: 0x30)
struct U*00025a7e29 : UInterface {
};

// Class Engine.NavigationTestingActor
// Size: 0x500 (Inherited: 0x3f8)
struct ANavigationTestingActor : AActor {
	char pad_3F8[0x10]; // 0x3f8(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x408(0x08)
	struct U*7d9079d55c* InvokerComponent; // 0x410(0x08)
	char bActAsNavigationInvoker : 1; // 0x418(0x01)
	char pad_418_1 : 7; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct F*ae60ea2542 *c73840fc35; // 0x420(0x20)
	struct FVector *eb0b05dc7e; // 0x440(0x0c)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct ANavigationData* *e052580b23; // 0x450(0x08)
	struct FVector ProjectedLocation; // 0x458(0x0c)
	char bProjectedLocationValid : 1; // 0x464(0x01)
	char *3fc2d732c7 : 1; // 0x464(0x01)
	char *e8bde5aedd : 1; // 0x464(0x01)
	char *c424d97bc6 : 1; // 0x464(0x01)
	char *c353653faf : 1; // 0x464(0x01)
	char *54be109eab : 1; // 0x464(0x01)
	char *5326218dd0 : 1; // 0x464(0x01)
	char *3d00701978 : 1; // 0x464(0x01)
	char *4a5a3aad47 : 1; // 0x465(0x01)
	char pad_465_1 : 7; // 0x465(0x01)
	char pad_466[0x2]; // 0x466(0x02)
	enum class *239f90df3d *07ea6a9a0a; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	struct FVector2D *b17c94fd2f; // 0x46c(0x08)
	char bPathExist : 1; // 0x474(0x01)
	char bPathIsPartial : 1; // 0x474(0x01)
	char bPathSearchOutOfNodes : 1; // 0x474(0x01)
	char pad_474_3 : 5; // 0x474(0x01)
	char pad_475[0x3]; // 0x475(0x03)
	float PathfindingTime; // 0x478(0x04)
	float PathCost; // 0x47c(0x04)
	int32 PathfindingSteps; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x488(0x08)
	struct UClass* *7820bcd6e4; // 0x490(0x08)
	int32 *b2fb0172af; // 0x498(0x04)
	float *ad003400ae; // 0x49c(0x04)
	char pad_4A0[0x60]; // 0x4a0(0x60)
};

// Class Engine.*2b10dd8963
// Size: 0x58 (Inherited: 0x30)
struct U*2b10dd8963 : UObject {
	struct TArray<struct FNavigationLink> Links; // 0x30(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
};

// Class Engine.*3cb2461056
// Size: 0x30 (Inherited: 0x30)
struct U*3cb2461056 : UInterface {
};

// Class Engine.Note
// Size: 0x3f8 (Inherited: 0x3f8)
struct ANote : AActor {
};

// Class Engine.ParticleSystem
// Size: 0x140 (Inherited: 0x30)
struct UParticleSystem : UObject {
	enum class *f8a90a4542 *ad38f8b28c; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float UpdateTime_FPS; // 0x34(0x04)
	float *01da15e727; // 0x38(0x04)
	float WarmupTime; // 0x3c(0x04)
	float *73dfda32c6; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct UParticleEmitter*> Emitters; // 0x48(0x10)
	struct UParticleSystemComponent* PreviewComponent; // 0x58(0x08)
	struct UInterpCurveEdSetup* *e617dd163c; // 0x60(0x08)
	char *aacc38bd07 : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float *846e9b3a8e; // 0x6c(0x04)
	enum class *f6a419821d LODMethod; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<float> *e12c53a336; // 0x78(0x10)
	char *7ecdfa89b1 : 1; // 0x88(0x01)
	char *41f2c81d43 : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct F*c03c9e6100> LODSettings; // 0x90(0x10)
	char *bee26908cc : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FBox *b8d275552e; // 0xa4(0x1c)
	float *aeab1e1fe0; // 0xc0(0x04)
	char *977f49225f : 1; // 0xc4(0x01)
	char *0fcb39250a : 1; // 0xc4(0x01)
	char *2baa8f464a : 1; // 0xc4(0x01)
	char *0db47a8568 : 1; // 0xc4(0x01)
	char pad_C4_4 : 4; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float Delay; // 0xc8(0x04)
	float *8efe17ca96; // 0xcc(0x04)
	char *0e58cc1abc : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	bool *6df57021b1; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	uint32 *9763c0816c; // 0xd8(0x04)
	enum class EParticleSystemInsignificanceReaction *e7f6b2a7d2; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	float *7e67fe5ee5; // 0xe0(0x04)
	enum class EParticleSignificanceLevel *79da478025; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct FVector MacroUVPosition; // 0xe8(0x0c)
	float MacroUVRadius; // 0xf4(0x04)
	enum class *43fe6982b9 *ad75698e6d; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FBox *416de75d13; // 0xfc(0x1c)
	struct TArray<struct F*a556a98cec> *4c0f797919; // 0x118(0x10)
	struct TArray<struct F*5328669c11> *479151b21f; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)

	bool *94bbf3255d(); // Function Engine.ParticleSystem.*94bbf3255d // Final|Native|Public|BlueprintCallable // @ game+0x66d2528
};

// Class Engine.ParticleEventManager
// Size: 0x3f8 (Inherited: 0x3f8)
struct AParticleEventManager : AActor {
};

// Class Engine.SkeletalMesh
// Size: 0x2f0 (Inherited: 0x30)
struct USkeletalMesh : UObject {
	char pad_30[0x20]; // 0x30(0x20)
	struct USkeleton* Skeleton; // 0x50(0x08)
	struct FBoxSphereBounds *1eb1861c37; // 0x58(0x1c)
	struct FBoxSphereBounds *bdb025f306; // 0x74(0x1c)
	struct FVector PositiveBoundsExtension; // 0x90(0x0c)
	struct FVector NegativeBoundsExtension; // 0x9c(0x0c)
	struct TArray<struct F*ac3133cced> Materials; // 0xa8(0x10)
	struct TArray<struct F*ada7c544f6> *f6b17b1ccf; // 0xb8(0x10)
	enum class EAxis *3b6ab528c3; // 0xc8(0x01)
	enum class EAxis *750a27eb28; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct TArray<struct FSkeletalMeshLODInfo> LODInfo; // 0xd0(0x10)
	char bUseFullPrecisionUVs : 1; // 0xe0(0x01)
	char *7dc0728574 : 1; // 0xe0(0x01)
	char *fb5bfa4c9b : 1; // 0xe0(0x01)
	char bEnablePerPolyCollision : 1; // 0xe0(0x01)
	char pad_E0_4 : 4; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct UBodySetup* BodySetup; // 0xe8(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0xf0(0x08)
	struct UPhysicsAsset* ShadowPhysicsAsset; // 0xf8(0x08)
	struct TArray<struct U*68a7b2dd34*> NodeMappingData; // 0x100(0x10)
	struct TArray<struct UMorphTarget*> MorphTargets; // 0x110(0x10)
	char pad_120[0x168]; // 0x120(0x168)
	struct TArray<struct FClothingAssetData_Legacy> ClothingAssets; // 0x288(0x10)
	struct UClass* PostProcessAnimBlueprint; // 0x298(0x08)
	struct TArray<struct U*13f31c470b*> MeshClothingAssets; // 0x2a0(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x2b0(0x10)
	char pad_2C0[0x8]; // 0x2c0(0x08)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x2c8(0x10)
	char pad_2D8[0x18]; // 0x2d8(0x18)

	struct USkeletalMeshSocket* *172f952799(); // Function Engine.SkeletalMesh.*172f952799 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d4f90
	struct FBoxSphereBounds *65dc3531ad(); // Function Engine.SkeletalMesh.*65dc3531ad // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66d6b78
	struct FBoxSphereBounds *74d3eb0937(); // Function Engine.SkeletalMesh.*74d3eb0937 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x66d8960
	struct U*68a7b2dd34* *67ff497e35(); // Function Engine.SkeletalMesh.*67ff497e35 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66da074
	int32 *0e88c72c89(); // Function Engine.SkeletalMesh.*0e88c72c89 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66e2b30
	struct USkeletalMeshSocket* *86be4b3110(); // Function Engine.SkeletalMesh.*86be4b3110 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66db140
	bool *ae42b13d83(); // Function Engine.SkeletalMesh.*ae42b13d83 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dccc0
	struct USkeletalMeshSocket* *d5ac411ea9(); // Function Engine.SkeletalMesh.*d5ac411ea9 // Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66d5028
};

// Class Engine.AnimationAsset
// Size: 0x80 (Inherited: 0x30)
struct UAnimationAsset : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct USkeleton* Skeleton; // 0x38(0x08)
	char pad_40[0x20]; // 0x40(0x20)
	struct TArray<struct U*6802b428b0*> MetaData; // 0x60(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x70(0x10)
};

// Class Engine.ReflectionCapture
// Size: 0x400 (Inherited: 0x3f8)
struct AReflectionCapture : AActor {
	struct UReflectionCaptureComponent* CaptureComponent; // 0x3f8(0x08)
};

// Class Engine.BoxReflectionCapture
// Size: 0x400 (Inherited: 0x400)
struct ABoxReflectionCapture : AReflectionCapture {
};

// Class Engine.PlaneReflectionCapture
// Size: 0x400 (Inherited: 0x400)
struct APlaneReflectionCapture : AReflectionCapture {
};

// Class Engine.SphereReflectionCapture
// Size: 0x408 (Inherited: 0x400)
struct ASphereReflectionCapture : AReflectionCapture {
	struct U*d9eef9fd9e* *34a0378238; // 0x400(0x08)
};

// Class Engine.RigidBodyBase
// Size: 0x3f8 (Inherited: 0x3f8)
struct ARigidBodyBase : AActor {
};

// Class Engine.PhysicsConstraintActor
// Size: 0x418 (Inherited: 0x3f8)
struct APhysicsConstraintActor : ARigidBodyBase {
	struct UPhysicsConstraintComponent* ConstraintComp; // 0x3f8(0x08)
	struct AActor* ConstraintActor1; // 0x400(0x08)
	struct AActor* ConstraintActor2; // 0x408(0x08)
	char bDisableCollision : 1; // 0x410(0x01)
	char pad_410_1 : 7; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
};

// Class Engine.PhysicsThruster
// Size: 0x400 (Inherited: 0x3f8)
struct APhysicsThruster : ARigidBodyBase {
	struct UPhysicsThrusterComponent* ThrusterComponent; // 0x3f8(0x08)
};

// Class Engine.RadialForceActor
// Size: 0x400 (Inherited: 0x3f8)
struct ARadialForceActor : ARigidBodyBase {
	struct URadialForceComponent* ForceComponent; // 0x3f8(0x08)

	void *cd2076f781(); // Function Engine.RadialForceActor.*cd2076f781 // Native|Public|BlueprintCallable // @ game+0x59dc47c
	void *b35e3e5e00(); // Function Engine.RadialForceActor.*b35e3e5e00 // Native|Public|BlueprintCallable // @ game+0x59dc494
	void *ab2d6df259(); // Function Engine.RadialForceActor.*ab2d6df259 // Native|Public|BlueprintCallable // @ game+0x59a23dc
	void *c10019f6de(); // Function Engine.RadialForceActor.*c10019f6de // Native|Public|BlueprintCallable // @ game+0x5909df4
};

// Class Engine.SceneCapture
// Size: 0x400 (Inherited: 0x3f8)
struct ASceneCapture : AActor {
	struct UStaticMeshComponent* MeshComp; // 0x3f8(0x08)
};

// Class Engine.PlanarReflection
// Size: 0x410 (Inherited: 0x400)
struct APlanarReflection : ASceneCapture {
	struct U*d8a05784b3* PlanarReflectionComponent; // 0x400(0x08)
	bool *76444db450; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)

	bool OnInterpToggle(); // Function Engine.PlanarReflection.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x66e2c2c
};

// Class Engine.SceneCapture2D
// Size: 0x410 (Inherited: 0x400)
struct ASceneCapture2D : ASceneCapture {
	struct USceneCaptureComponent2D* CaptureComponent2D; // 0x400(0x08)
	struct U*dd9d99e533* *148f44aecb; // 0x408(0x08)

	bool OnInterpToggle(); // Function Engine.SceneCapture2D.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x66e2c2c
};

// Class Engine.SceneCaptureCube
// Size: 0x410 (Inherited: 0x400)
struct ASceneCaptureCube : ASceneCapture {
	struct USceneCaptureComponentCube* CaptureComponentCube; // 0x400(0x08)
	struct U*dd9d99e533* *148f44aecb; // 0x408(0x08)

	bool OnInterpToggle(); // Function Engine.SceneCaptureCube.OnInterpToggle // Final|Native|Public|BlueprintCallable // @ game+0x66e2c2c
};

// Class Engine.*43134b66ca
// Size: 0x30 (Inherited: 0x30)
struct U*43134b66ca : UInterface {
};

// Class Engine.SplineDecalActor
// Size: 0x508 (Inherited: 0x3f8)
struct ASplineDecalActor : AActor {
	struct USplineComponent* SplineComponent; // 0x3f8(0x08)
	enum class ESplineDecalActorSelector *eb4ea28da8; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UMaterialInterface* *5e0d75f5ed[0x04]; // 0x408(0x20)
	struct F*a6f7b095fb *0ea131a1f2; // 0x428(0x2c)
	enum class ESplineDecalActorSelector *5973e51298; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct UMaterialInterface* *a41941f1d6[0x04]; // 0x458(0x20)
	struct F*a6f7b095fb *51bfc28315; // 0x478(0x2c)
	enum class *462f41d1e3 *b554012a63; // 0x4a4(0x01)
	char pad_4A5[0x3]; // 0x4a5(0x03)
	float *f8813f87d4; // 0x4a8(0x04)
	float *a845f46438; // 0x4ac(0x04)
	struct FRandomStream *237dad2ca5; // 0x4b0(0x08)
	struct UMaterialInterface* *bc784ed6ec[0x04]; // 0x4b8(0x20)
	struct F*a6f7b095fb *d0c9444958; // 0x4d8(0x2c)
	char pad_504[0x4]; // 0x504(0x04)

	void Update(); // Function Engine.SplineDecalActor.Update // Final|Native|Public // @ game+0x66ef374
	struct USplineComponent* *c7c1e25c9a(); // Function Engine.SplineDecalActor.*c7c1e25c9a // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x59df22c
};

// Class Engine.SplineMeshActor
// Size: 0x400 (Inherited: 0x3f8)
struct ASplineMeshActor : AActor {
	struct USplineMeshComponent* SplineMeshComponent; // 0x3f8(0x08)
};

// Class Engine.StaticMeshIndoorVolumeComponent
// Size: 0x4d0 (Inherited: 0x480)
struct UStaticMeshIndoorVolumeComponent : USceneComponent {
	struct UStaticMesh* StaticMesh; // 0x478(0x08)
	char pad_488[0x48]; // 0x488(0x48)
};

// Class Engine.StaticMeshIndoorVolumeContainerComponent
// Size: 0x4b0 (Inherited: 0x480)
struct UStaticMeshIndoorVolumeContainerComponent : USceneComponent {
	struct TArray<struct UStaticMesh*> StaticMeshes; // 0x478(0x10)
	struct TArray<struct F*e3354a98cb> *804eb83891; // 0x488(0x10)
	char pad_4A0[0x10]; // 0x4a0(0x10)
};

// Class Engine.StaticMeshIndoorVolume
// Size: 0x400 (Inherited: 0x3f8)
struct AStaticMeshIndoorVolume : AActor {
	struct UStaticMeshIndoorVolumeComponent* VolumeComponent; // 0x3f8(0x08)
};

// Class Engine.TextRenderActor
// Size: 0x400 (Inherited: 0x3f8)
struct ATextRenderActor : AActor {
	struct UTextRenderComponent* TextRender; // 0x3f8(0x08)
};

// Class Engine.TriggerCapsule
// Size: 0x400 (Inherited: 0x400)
struct ATriggerCapsule : ATriggerBase {
};

// Class Engine.TriggerSphere
// Size: 0x400 (Inherited: 0x400)
struct ATriggerSphere : ATriggerBase {
};

// Class Engine.VectorFieldVolume
// Size: 0x400 (Inherited: 0x3f8)
struct AVectorFieldVolume : AActor {
	struct UVectorFieldComponent* VectorFieldComponent; // 0x3f8(0x08)
};

// Class Engine.WindPropertiesActor
// Size: 0x400 (Inherited: 0x3f8)
struct AWindPropertiesActor : AActor {
	struct U*c4ac2e8cf8* WindPropertiesComponent; // 0x3f8(0x08)
};

// Class Engine.ApplicationLifecycleComponent
// Size: 0x250 (Inherited: 0x200)
struct UApplicationLifecycleComponent : UActorComponent {
	struct FMulticastDelegate ApplicationWillDeactivateDelegate; // 0x200(0x10)
	struct FMulticastDelegate ApplicationHasReactivatedDelegate; // 0x210(0x10)
	struct FMulticastDelegate ApplicationWillEnterBackgroundDelegate; // 0x220(0x10)
	struct FMulticastDelegate ApplicationHasEnteredForegroundDelegate; // 0x230(0x10)
	struct FMulticastDelegate ApplicationWillTerminateDelegate; // 0x240(0x10)

	void ApplicationLifetimeDelegate__DelegateSignature(); // DelegateFunction Engine.ApplicationLifecycleComponent.ApplicationLifetimeDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22c9a0
};

// Class Engine.LevelBlocksData
// Size: 0x40 (Inherited: 0x30)
struct ULevelBlocksData : UObject {
	struct TArray<struct U*803292ecaa*> *dadb91eec0; // 0x30(0x10)
};

// Class Engine.*0ddf4d519f
// Size: 0x2c0 (Inherited: 0x200)
struct U*0ddf4d519f : UActorComponent {
	char pad_200[0x8]; // 0x200(0x08)
	struct ULevelBlocksData* LevelBlocksData; // 0x208(0x08)
	char pad_210[0x18]; // 0x210(0x18)
	int32 RandomSeed; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct TArray<struct AActor*> *1497e950ad; // 0x230(0x10)
	char pad_240[0x80]; // 0x240(0x80)

	void OnKillcamLoadingFinished(); // Function Engine.*0ddf4d519f.OnKillcamLoadingFinished // Final|Native|Private // @ game+0x66e2cc8
	void OnRep_RandomSeed(); // Function Engine.*0ddf4d519f.OnRep_RandomSeed // Final|Native|Private // @ game+0x66e2d00
};

// Class Engine.*5452ce1bc4
// Size: 0x2f0 (Inherited: 0x250)
struct U*5452ce1bc4 : UMovementComponent {
	float Duration; // 0x248(0x04)
	char bPauseOnImpact : 1; // 0x24c(0x01)
	enum class EInterpToBehaviourType BehaviourType; // 0x250(0x01)
	char bForceSubStepping : 1; // 0x254(0x01)
	char pad_255_2 : 6; // 0x255(0x01)
	char pad_256[0x2]; // 0x256(0x02)
	struct FMulticastDelegate OnInterpToReverse; // 0x258(0x10)
	struct FMulticastDelegate OnInterpToStop; // 0x268(0x10)
	struct FMulticastDelegate OnWaitBeginDelegate; // 0x278(0x10)
	struct FMulticastDelegate OnWaitEndDelegate; // 0x288(0x10)
	struct FMulticastDelegate OnResetDelegate; // 0x298(0x10)
	float MaxSimulationTimeStep; // 0x2a8(0x04)
	int32 MaxSimulationIterations; // 0x2ac(0x04)
	struct TArray<struct F*66d7cac480> ControlPoints; // 0x2b0(0x10)
	char pad_2C0[0x30]; // 0x2c0(0x30)

	float OnInterpToWaitEndDelegate__DelegateSignature(); // DelegateFunction Engine.*5452ce1bc4.OnInterpToWaitEndDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22c9a0
	float OnInterpToReverseDelegate__DelegateSignature(); // DelegateFunction Engine.*5452ce1bc4.OnInterpToReverseDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22c9a0
	float OnInterpToStopDelegate__DelegateSignature(); // DelegateFunction Engine.*5452ce1bc4.OnInterpToStopDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22c9a0
	float OnInterpToWaitBeginDelegate__DelegateSignature(); // DelegateFunction Engine.*5452ce1bc4.OnInterpToWaitBeginDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22c9a0
	struct FHitResult StopSimulating(); // Function Engine.*5452ce1bc4.StopSimulating // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66eeeb4
	float *6f97c2464e(); // Function Engine.*5452ce1bc4.*6f97c2464e // Final|Native|Public|BlueprintCallable // @ game+0x66e446c
	void *b12ddb46ca(); // Function Engine.*5452ce1bc4.*b12ddb46ca // Final|Native|Public|BlueprintCallable // @ game+0x66d4ed4
	float OnInterpToResetDelegate__DelegateSignature(); // DelegateFunction Engine.*5452ce1bc4.OnInterpToResetDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22c9a0
};

// Class Engine.AssetUserData
// Size: 0x30 (Inherited: 0x30)
struct UAssetUserData : UObject {
};

// Class Engine.Skeleton
// Size: 0x3a0 (Inherited: 0x30)
struct USkeleton : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct F*969d71bd84> *0dbf40a594; // 0x38(0x10)
	struct TArray<struct FTransform> RefLocalPoses; // 0x48(0x10)
	char pad_58[0x110]; // 0x58(0x110)
	struct FGuid *fbb836d0c6; // 0x168(0x10)
	struct TArray<struct F*ebee4ee022> *3ea9ca28e1; // 0x178(0x10)
	struct TArray<struct F*f2fadbbf9a> *79c384b999; // 0x188(0x10)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x198(0x10)
	char pad_1A8[0x50]; // 0x1a8(0x50)
	struct F*26c588250a *4cff5c1305; // 0x1f8(0x50)
	char pad_248[0x18]; // 0x248(0x18)
	struct TArray<struct UBlendProfile*> *775084744a; // 0x260(0x10)
	struct TArray<struct F*1d49069ddd> *9f4f56ced8; // 0x270(0x10)
	char pad_280[0x110]; // 0x280(0x110)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x390(0x10)
};

// Class Engine.AnimSequenceBase
// Size: 0xa8 (Inherited: 0x80)
struct UAnimSequenceBase : UAnimationAsset {
	struct TArray<struct FAnimNotifyEvent> Notifies; // 0x80(0x10)
	float SequenceLength; // 0x90(0x04)
	float *c6e0e7064b; // 0x94(0x04)
	struct F*bee37b88e1 *95f65dc0d6; // 0x98(0x10)

	float *5f1e135096(); // Function Engine.AnimSequenceBase.*5f1e135096 // RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66dae9c
};

// Class Engine.*49816339d8
// Size: 0xa8 (Inherited: 0xa8)
struct U*49816339d8 : UAnimSequenceBase {
};

// Class Engine.AnimMontage
// Size: 0x1b0 (Inherited: 0xa8)
struct UAnimMontage : U*49816339d8 {
	struct FAlphaBlend *420157e503; // 0xa8(0x38)
	float BlendInTime; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FAlphaBlend *676d7920d0; // 0xe8(0x38)
	float BlendOutTime; // 0x120(0x04)
	float *1353159718; // 0x124(0x04)
	struct FName SyncGroup; // 0x128(0x08)
	int32 *e4fa46cf73; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct F*eec764eb71 *2ecaa2f8f3; // 0x138(0x20)
	struct TArray<struct F*1cfb3b4b4d> *d89646cbbe; // 0x158(0x10)
	struct TArray<struct F*b2c74e37eb> *d6f795c4ab; // 0x168(0x10)
	struct TArray<struct FBranchingPoint> BranchingPoints; // 0x178(0x10)
	bool *f67ab4c3c9; // 0x188(0x01)
	bool *d0372975d4; // 0x189(0x01)
	enum class ERootMotionRootLock *953eeb03a1; // 0x18a(0x01)
	char pad_18B[0x5]; // 0x18b(0x05)
	struct TArray<struct F*d4948187cd> *b40c8c1c46; // 0x190(0x10)
	struct TArray<int32> *23d9c1da96; // 0x1a0(0x10)

	void OnMontageClosedMulticaster__DelegateSignature(); // DelegateFunction Engine.AnimMontage.OnMontageClosedMulticaster__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22c9a0
};

// Class Engine.*dac8ea5879
// Size: 0x30 (Inherited: 0x30)
struct U*dac8ea5879 : UInterface {
};

// Class Engine.*105485fcaf
// Size: 0x30 (Inherited: 0x30)
struct U*105485fcaf : UInterface {
};

// Class Engine.RotatingMovementComponent
// Size: 0x270 (Inherited: 0x250)
struct URotatingMovementComponent : UMovementComponent {
	struct FRotator RotationRate; // 0x248(0x0c)
	struct FVector PivotTranslation; // 0x254(0x0c)
	char bRotationInLocalSpace : 1; // 0x260(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
};

// Class Engine.*7d9079d55c
// Size: 0x210 (Inherited: 0x200)
struct U*7d9079d55c : UActorComponent {
	float *e4d515a799; // 0x200(0x04)
	float *4ea79616f0; // 0x204(0x04)
	char pad_208[0x8]; // 0x208(0x08)
};

// Class Engine.*d1f40cab2e
// Size: 0x230 (Inherited: 0x200)
struct U*d1f40cab2e : UActorComponent {
	char pad_200[0x24]; // 0x200(0x24)
	char *4d46e9e3ab : 1; // 0x224(0x01)
	char pad_224_1 : 7; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	struct UObject* *e4abd50ec9; // 0x228(0x08)

	bool *9ca0ab646f(); // Function Engine.*d1f40cab2e.*9ca0ab646f // Final|Native|Public|BlueprintCallable // @ game+0x6739a48
};

// Class Engine.*39809fb0cd
// Size: 0x30 (Inherited: 0x30)
struct U*39809fb0cd : UInterface {
};

// Class Engine.NavLinkCustomComponent
// Size: 0x340 (Inherited: 0x230)
struct UNavLinkCustomComponent : U*d1f40cab2e {
	char pad_230[0x8]; // 0x230(0x08)
	uint32 *4f64639069; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct UClass* *edf4438ffe; // 0x240(0x08)
	struct UClass* *2ef6445808; // 0x248(0x08)
	struct FVector *2d2dea50e4; // 0x250(0x0c)
	struct FVector *90c69aa84f; // 0x25c(0x0c)
	enum class ENavLinkDirection *75c0350df0; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	char *8123634974 : 1; // 0x26c(0x01)
	char *8e14d85400 : 1; // 0x26c(0x01)
	char *bde486839e : 1; // 0x26c(0x01)
	char *fe5de6434b : 1; // 0x26c(0x01)
	char pad_26C_4 : 4; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct FVector *e8c6fec2b5; // 0x270(0x0c)
	struct FVector *432c8f233a; // 0x27c(0x0c)
	struct UClass* *0ffb9cdcdd; // 0x288(0x08)
	float *16ab23e21f; // 0x290(0x04)
	float *fee09fbcf8; // 0x294(0x04)
	enum class ECollisionChannel *4690376a3e; // 0x298(0x01)
	char pad_299[0xa7]; // 0x299(0xa7)
};

// Class Engine.NavModifierComponent
// Size: 0x260 (Inherited: 0x230)
struct UNavModifierComponent : U*d1f40cab2e {
	struct UClass* AreaClass; // 0x230(0x08)
	struct FVector *7db7e8db1f; // 0x238(0x0c)
	char pad_244[0x1c]; // 0x244(0x1c)

	struct UClass* *b0af645c38(); // Function Engine.NavModifierComponent.*b0af645c38 // Final|Native|Public|BlueprintCallable // @ game+0x6730ea8
};

// Class Engine.PawnNoiseEmitterComponent
// Size: 0x230 (Inherited: 0x200)
struct UPawnNoiseEmitterComponent : UActorComponent {
	char *dd0e2198ee : 1; // 0x200(0x01)
	char pad_200_1 : 7; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	struct FVector *ce6407c722; // 0x204(0x0c)
	float NoiseLifetime; // 0x210(0x04)
	float *2204a7cca6; // 0x214(0x04)
	float *6eef173725; // 0x218(0x04)
	float *82c304f6d6; // 0x21c(0x04)
	float *5d80050006; // 0x220(0x04)
	char pad_224[0xc]; // 0x224(0x0c)

	struct FVector MakeNoise(); // Function Engine.PawnNoiseEmitterComponent.MakeNoise // BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67223bc
};

// Class Engine.*87eff2442d
// Size: 0x240 (Inherited: 0x200)
struct U*87eff2442d : UActorComponent {
	float StrengthMultiplyer; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x208(0x08)
	char pad_210[0x30]; // 0x210(0x30)

	struct USkeletalMeshComponent* *425b8fe496(); // Function Engine.*87eff2442d.*425b8fe496 // Final|Native|Public|BlueprintCallable // @ game+0x673b8a4
	float *006fbe15be(); // Function Engine.*87eff2442d.*006fbe15be // Final|Native|Public|BlueprintCallable // @ game+0x673cf84
	struct F*d61531db2a *e4ae9e9563(); // Function Engine.*87eff2442d.*e4ae9e9563 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66f6128
	bool *ded3b0e707(); // Function Engine.*87eff2442d.*ded3b0e707 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66f622c
	bool *71d527f36f(); // Function Engine.*87eff2442d.*71d527f36f // Final|Native|Public|BlueprintCallable // @ game+0x66f5fa8
	struct FTransform *8dd9f91e56(); // Function Engine.*87eff2442d.*8dd9f91e56 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670cb5c
};

// Class Engine.PhysicsHandleComponent
// Size: 0x2b0 (Inherited: 0x200)
struct UPhysicsHandleComponent : UActorComponent {
	struct UPrimitiveComponent* *d50253705d; // 0x200(0x08)
	char pad_208[0xc]; // 0x208(0x0c)
	char pad_214_0 : 1; // 0x214(0x01)
	char bSoftAngularConstraint : 1; // 0x214(0x01)
	char bSoftLinearConstraint : 1; // 0x214(0x01)
	char bInterpolateTarget : 1; // 0x214(0x01)
	char pad_214_4 : 4; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	float LinearDamping; // 0x218(0x04)
	float LinearStiffness; // 0x21c(0x04)
	float AngularDamping; // 0x220(0x04)
	float AngularStiffness; // 0x224(0x04)
	char pad_228[0x68]; // 0x228(0x68)
	float InterpolationSpeed; // 0x290(0x04)
	char pad_294[0x1c]; // 0x294(0x1c)

	struct FRotator *e8ea372d81(); // Function Engine.PhysicsHandleComponent.*e8ea372d81 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673d820
	float SetAngularDamping(); // Function Engine.PhysicsHandleComponent.SetAngularDamping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x672fff0
	struct FVector *c489b6968b(); // Function Engine.PhysicsHandleComponent.*c489b6968b // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673d77c
	struct FVector *8ba7a70b15(); // Function Engine.PhysicsHandleComponent.*8ba7a70b15 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6718358
	void *9640b9b5a1(); // Function Engine.PhysicsHandleComponent.*9640b9b5a1 // RequiredAPI|Native|Public|BlueprintCallable // @ game+0x9a36a4
	bool *6b0bdcb0d8(); // Function Engine.PhysicsHandleComponent.*6b0bdcb0d8 // RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67181d8
	float SetLinearDamping(); // Function Engine.PhysicsHandleComponent.SetLinearDamping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6738704
	float *4e033c468e(); // Function Engine.PhysicsHandleComponent.*4e033c468e // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6738b18
	struct FRotator *556eca30ff(); // Function Engine.PhysicsHandleComponent.*556eca30ff // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67184a4
	float *c6d5d4914f(); // Function Engine.PhysicsHandleComponent.*c6d5d4914f // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6737e78
	float *160a6999ec(); // Function Engine.PhysicsHandleComponent.*160a6999ec // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6730590
	struct UPrimitiveComponent* *2142ac25eb(); // Function Engine.PhysicsHandleComponent.*2142ac25eb // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670f6c8
	struct FRotator *cda61c5478(); // Function Engine.PhysicsHandleComponent.*cda61c5478 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673d928
	struct FRotator *0274cd10bf(); // Function Engine.PhysicsHandleComponent.*0274cd10bf // Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6715a70
};

// Class Engine.*50c5eb3620
// Size: 0x220 (Inherited: 0x200)
struct U*50c5eb3620 : UActorComponent {
	struct FMulticastDelegate PlatformChangedToLaptopModeDelegate; // 0x200(0x10)
	struct FMulticastDelegate PlatformChangedToTabletModeDelegate; // 0x210(0x10)

	bool *34ba4fe89f(); // Function Engine.*50c5eb3620.*34ba4fe89f // Final|Native|Public|BlueprintCallable // @ game+0x6746e40
	void PlatformEventDelegate__DelegateSignature(); // DelegateFunction Engine.*50c5eb3620.PlatformEventDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22c9a0
	bool *4218b1850b(); // Function Engine.*50c5eb3620.*4218b1850b // Final|Native|Public|BlueprintCallable // @ game+0x671af40
	bool *d5a5d763fc(); // Function Engine.*50c5eb3620.*d5a5d763fc // Final|Native|Public|BlueprintCallable // @ game+0x671af14
};

// Class Engine.AtmosphericFogComponent
// Size: 0x6a0 (Inherited: 0x480)
struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; // 0x478(0x04)
	float FogMultiplier; // 0x47c(0x04)
	float DensityMultiplier; // 0x480(0x04)
	float DensityOffset; // 0x484(0x04)
	float DistanceScale; // 0x488(0x04)
	float AltitudeScale; // 0x48c(0x04)
	float DistanceOffset; // 0x490(0x04)
	float GroundOffset; // 0x494(0x04)
	float StartDistance; // 0x498(0x04)
	float SunDiscScale; // 0x49c(0x04)
	struct TArray<struct F*10fb7a30ed> HeightDensityLayers; // 0x4a0(0x10)
	float DefaultBrightness; // 0x4b0(0x04)
	struct FColor DefaultLightColor; // 0x4b4(0x04)
	char bDisableSunDisk : 1; // 0x4b8(0x01)
	char bDisableGroundScattering : 1; // 0x4b8(0x01)
	struct F*11a380e10d PrecomputeParams; // 0x4bc(0x2c)
	struct UTexture2D* TransmittanceTexture; // 0x4e8(0x08)
	struct UTexture2D* IrradianceTexture; // 0x4f0(0x08)
	char pad_4FC_2 : 6; // 0x4fc(0x01)
	char pad_4FD[0x1a3]; // 0x4fd(0x1a3)

	float *d257661535(); // Function Engine.AtmosphericFogComponent.*d257661535 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x672ff48
	bool *35aef2c0b0(); // Function Engine.AtmosphericFogComponent.*35aef2c0b0 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x670505c
	float *8c9646a496(); // Function Engine.AtmosphericFogComponent.*8c9646a496 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67347f0
	struct FLinearColor *fd46dda1ca(); // Function Engine.AtmosphericFogComponent.*fd46dda1ca // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673459c
	float *fd0c9a082f(); // Function Engine.AtmosphericFogComponent.*fd0c9a082f // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x673651c
	float *9c09d96f46(); // Function Engine.AtmosphericFogComponent.*9c09d96f46 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67344f4
	float *42e783ad63(); // Function Engine.AtmosphericFogComponent.*42e783ad63 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6734c28
	bool *c18a056a4d(); // Function Engine.AtmosphericFogComponent.*c18a056a4d // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6705110
	float *c216b5b8b3(); // Function Engine.AtmosphericFogComponent.*c216b5b8b3 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x673628c
	void *1ec35611bf(); // Function Engine.AtmosphericFogComponent.*1ec35611bf // Final|Native|Public|BlueprintCallable // @ game+0xbdd69c
	int32 *43c1d77204(); // Function Engine.AtmosphericFogComponent.*43c1d77204 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x673ad78
	float *786991470a(); // Function Engine.AtmosphericFogComponent.*786991470a // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6734748
	float *09c5b57284(); // Function Engine.AtmosphericFogComponent.*09c5b57284 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6734cd0
	float *25cd1558c7(); // Function Engine.AtmosphericFogComponent.*25cd1558c7 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x673c800
};

// Class Engine.*0a451e3a03
// Size: 0x30 (Inherited: 0x30)
struct U*0a451e3a03 : UObject {
};

// Class Engine.*a1a2706517
// Size: 0x30 (Inherited: 0x30)
struct U*a1a2706517 : UObject {
};

// Class Engine.*fc7836c682
// Size: 0x30 (Inherited: 0x30)
struct U*fc7836c682 : UObject {
};

// Class Engine.SoundAttenuation
// Size: 0x160 (Inherited: 0x30)
struct USoundAttenuation : UObject {
	struct FSoundAttenuationSettings Attenuation; // 0x30(0x130)
};

// Class Engine.AudioComponent
// Size: 0x750 (Inherited: 0x480)
struct UAudioComponent : USceneComponent {
	struct USoundBase* Sound; // 0x478(0x08)
	struct TArray<struct F*da50679f2e> InstanceParameters; // 0x480(0x10)
	struct USoundClass* *8c42a2ebda; // 0x490(0x08)
	char *6ecc134ca8 : 1; // 0x498(0x01)
	char *0096e20ed8 : 1; // 0x498(0x01)
	char *7d44f05a41 : 1; // 0x498(0x01)
	char bAllowSpatialization : 1; // 0x498(0x01)
	char bOverrideAttenuation : 1; // 0x498(0x01)
	char bOverrideSubtitlePriority : 1; // 0x49c(0x01)
	char bIsUISound : 1; // 0x4a0(0x01)
	char bEnableLowPassFilter : 1; // 0x4a0(0x01)
	char bOverridePriority : 1; // 0x4a0(0x01)
	char bSuppressSubtitles : 1; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct FName *80af4e8668; // 0x4a8(0x08)
	float PitchModulationMin; // 0x4b0(0x04)
	float PitchModulationMax; // 0x4b4(0x04)
	float VolumeModulationMin; // 0x4b8(0x04)
	float VolumeModulationMax; // 0x4bc(0x04)
	float VolumeMultiplier; // 0x4c0(0x04)
	float Priority; // 0x4c4(0x04)
	float SubtitlePriority; // 0x4c8(0x04)
	float VolumeWeightedPriorityScale; // 0x4cc(0x04)
	float PitchMultiplier; // 0x4d0(0x04)
	float HighFrequencyGainMultiplier; // 0x4d4(0x04)
	float LowPassFilterFrequency; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x4e0(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x4e8(0x130)
	struct USoundConcurrency* ConcurrencySettings; // 0x618(0x08)
	char pad_620[0x8]; // 0x620(0x08)
	struct FMulticastDelegate OnAudioFinished; // 0x628(0x10)
	char pad_638[0x78]; // 0x638(0x78)
	struct FMulticastDelegate OnAudioPlaybackPercent; // 0x6b0(0x10)
	char pad_6C0[0x70]; // 0x6c0(0x70)
	DelegateProperty *f3f6bca861; // 0x730(0x10)
	char pad_740[0x10]; // 0x740(0x10)

	bool *3abf2c6db9(); // Function Engine.AudioComponent.*3abf2c6db9 // Final|Native|Public|BlueprintCallable // @ game+0x673e088
	bool IsPlaying(); // Function Engine.AudioComponent.IsPlaying // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66dc70c
	float *2482587342(); // Function Engine.AudioComponent.*2482587342 // Native|Public|BlueprintCallable // @ game+0x6709584
	bool *7f46551db1(); // Function Engine.AudioComponent.*7f46551db1 // Final|Native|Public|BlueprintCallable // @ game+0x673a368
	float *017d6601d2(); // Function Engine.AudioComponent.*017d6601d2 // Final|Native|Public|BlueprintCallable // @ game+0x673d1b8
	float SetVolumeMultiplier(); // Function Engine.AudioComponent.SetVolumeMultiplier // Final|Native|Public|BlueprintCallable // @ game+0x673eca4
	struct USoundBase* *9cf4b09ca8(); // Function Engine.AudioComponent.*9cf4b09ca8 // Final|Native|Public|BlueprintCallable // @ game+0x673bb24
	bool SetBoolParameter(); // Function Engine.AudioComponent.SetBoolParameter // Final|Native|Public|BlueprintCallable // @ game+0x6732130
	float FadeOut(); // Function Engine.AudioComponent.FadeOut // Native|Public|BlueprintCallable // @ game+0x67096a8
	bool *5c94b03e6d(); // Function Engine.AudioComponent.*5c94b03e6d // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66f8510
	float SetPitchMultiplier(); // Function Engine.AudioComponent.SetPitchMultiplier // Final|Native|Public|BlueprintCallable // @ game+0x673a578
	void Stop(); // Function Engine.AudioComponent.Stop // Native|Public|BlueprintCallable // @ game+0x59830f4
	struct USoundWave* SetWaveParameter(); // Function Engine.AudioComponent.SetWaveParameter // Final|Native|Public|BlueprintCallable // @ game+0x673f288
	int32 SetIntParameter(); // Function Engine.AudioComponent.SetIntParameter // Final|Native|Public|BlueprintCallable // @ game+0x67377bc
	float SetFloatParameter(); // Function Engine.AudioComponent.SetFloatParameter // Final|Native|Public|BlueprintCallable // @ game+0x6736104
	struct FSoundAttenuationSettings AdjustAttenuation(); // Function Engine.AudioComponent.AdjustAttenuation // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66f5884
	float AdjustVolume(); // Function Engine.AudioComponent.AdjustVolume // Final|Native|Public|BlueprintCallable // @ game+0x66f5a94
	float Play(); // Function Engine.AudioComponent.Play // Native|Public|BlueprintCallable // @ game+0x6728ed0
};

// Class Engine.DecalComponent
// Size: 0x500 (Inherited: 0x480)
struct UDecalComponent : USceneComponent {
	struct UMaterialInterface* DecalMaterial; // 0x478(0x08)
	int32 SortOrder; // 0x480(0x04)
	float FadeScreenSize; // 0x484(0x04)
	float FadeStartDelay; // 0x488(0x04)
	float FadeDuration; // 0x48c(0x04)
	char bDestroyOwnerAfterFade : 1; // 0x490(0x01)
	struct F*87cf230eda DecalChannels; // 0x491(0x01)
	struct FVector DecalSize; // 0x494(0x0c)
	float NormalFadeStart; // 0x4a0(0x04)
	float NormalFadeEnd; // 0x4a4(0x04)
	char pad_4AD_1 : 7; // 0x4ad(0x01)
	char pad_4AE[0x52]; // 0x4ae(0x52)

	struct UMaterialInterface* *985cbb1955(); // Function Engine.DecalComponent.*985cbb1955 // Final|Native|Public|BlueprintCallable // @ game+0x67343c4
	float *27572ec6f6(); // Function Engine.DecalComponent.*27572ec6f6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670f1d8
	float *2d892a7c82(); // Function Engine.DecalComponent.*2d892a7c82 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670f1c0
	bool *db9a52734e(); // Function Engine.DecalComponent.*db9a52734e // Final|Native|Public|BlueprintCallable // @ game+0x6735e14
	int32 *1db780fd2c(); // Function Engine.DecalComponent.*1db780fd2c // Final|Native|Public|BlueprintCallable // @ game+0x673ba8c
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // Function Engine.DecalComponent.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x6703868
	struct UMaterialInterface* *7f5d0189f2(); // Function Engine.DecalComponent.*7f5d0189f2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc33650
};

// Class Engine.*e3423cb73a
// Size: 0x480 (Inherited: 0x480)
struct U*e3423cb73a : USceneComponent {
};

// Class Engine.ExponentialHeightFogComponent
// Size: 0x540 (Inherited: 0x480)
struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; // 0x478(0x04)
	struct FLinearColor FogInscatteringColor; // 0x47c(0x10)
	struct TArray<struct F*a94c5a4e3a> HeightDensityLayers; // 0x490(0x10)
	struct UTextureCube* InscatteringColorCubemap; // 0x4a0(0x08)
	float InscatteringColorCubemapAngle; // 0x4a8(0x04)
	struct FLinearColor InscatteringTextureTint; // 0x4ac(0x10)
	float FullyDirectionalInscatteringColorDistance; // 0x4bc(0x04)
	float NonDirectionalInscatteringColorDistance; // 0x4c0(0x04)
	float DirectionalInscatteringExponent; // 0x4c4(0x04)
	float DirectionalInscatteringStartDistance; // 0x4c8(0x04)
	struct FLinearColor DirectionalInscatteringColor; // 0x4cc(0x10)
	float FogHeightFalloff; // 0x4dc(0x04)
	float FogMaxOpacity; // 0x4e0(0x04)
	float StartDistance; // 0x4e4(0x04)
	float FogCutoffDistance; // 0x4e8(0x04)
	bool bEnableVolumetricFog; // 0x4ec(0x01)
	float VolumetricFogScatteringDistribution; // 0x4f0(0x04)
	struct FColor VolumetricFogAlbedo; // 0x4f4(0x04)
	struct FLinearColor VolumetricFogEmissive; // 0x4f8(0x10)
	float VolumetricFogExtinctionScale; // 0x508(0x04)
	float VolumetricFogDistance; // 0x50c(0x04)
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x510(0x01)
	bool bUseExtendedFog; // 0x511(0x01)
	char pad_513[0x1]; // 0x513(0x01)
	float ExtendedFogStartDistance; // 0x514(0x04)
	float ExtendedFogStartFalloffDistance; // 0x518(0x04)
	float ExtendedHeight; // 0x51c(0x04)
	float ExtendedFallOff; // 0x520(0x04)
	float ExtendedFogDensity; // 0x524(0x04)
	float UpDensity; // 0x528(0x04)
	float DownDensity; // 0x52c(0x04)
	float Intensity; // 0x530(0x04)
	bool bUseAtmosphereScattering; // 0x534(0x01)
	char pad_535[0xb]; // 0x535(0x0b)

	float *cb8e386282(); // Function Engine.ExponentialHeightFogComponent.*cb8e386282 // Final|Native|Public|BlueprintCallable // @ game+0x673f008
	float *029785fbed(); // Function Engine.ExponentialHeightFogComponent.*029785fbed // Final|Native|Public|BlueprintCallable // @ game+0x6734a10
	float *66d3d041e8(); // Function Engine.ExponentialHeightFogComponent.*66d3d041e8 // Final|Native|Public|BlueprintCallable // @ game+0x6736474
	float *60bff3426f(); // Function Engine.ExponentialHeightFogComponent.*60bff3426f // Final|Native|Public|BlueprintCallable // @ game+0x673697c
	struct FColor *f471347a82(); // Function Engine.ExponentialHeightFogComponent.*f471347a82 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673eddc
	float *d21b65647b(); // Function Engine.ExponentialHeightFogComponent.*d21b65647b // Final|Native|Public|BlueprintCallable // @ game+0x6739b78
	struct FLinearColor *9c1f7cecfe(); // Function Engine.ExponentialHeightFogComponent.*9c1f7cecfe // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673ef20
	float *338a3ab94d(); // Function Engine.ExponentialHeightFogComponent.*338a3ab94d // Final|Native|Public|BlueprintCallable // @ game+0x6734d78
	float *7c5b77fbfa(); // Function Engine.ExponentialHeightFogComponent.*7c5b77fbfa // Final|Native|Public|BlueprintCallable // @ game+0x6735cc4
	float *bb2c6aa247(); // Function Engine.ExponentialHeightFogComponent.*bb2c6aa247 // Final|Native|Public|BlueprintCallable // @ game+0x67361e4
	float *add28e08fc(); // Function Engine.ExponentialHeightFogComponent.*add28e08fc // Final|Native|Public|BlueprintCallable // @ game+0x6736334
	float *10581b85c3(); // Function Engine.ExponentialHeightFogComponent.*10581b85c3 // Final|Native|Public|BlueprintCallable // @ game+0x673ee78
	struct FLinearColor *c4f48c1668(); // Function Engine.ExponentialHeightFogComponent.*c4f48c1668 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6734928
	struct UTextureCube* *246128d660(); // Function Engine.ExponentialHeightFogComponent.*246128d660 // Final|Native|Public|BlueprintCallable // @ game+0x673746c
	struct FLinearColor *65fa7f3524(); // Function Engine.ExponentialHeightFogComponent.*65fa7f3524 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67363dc
	float *41205c7422(); // Function Engine.ExponentialHeightFogComponent.*41205c7422 // Final|Native|Public|BlueprintCallable // @ game+0x6735c1c
	float *e03f21008d(); // Function Engine.ExponentialHeightFogComponent.*e03f21008d // Final|Native|Public|BlueprintCallable // @ game+0x6735b74
	struct FLinearColor *ac29aea2ed(); // Function Engine.ExponentialHeightFogComponent.*ac29aea2ed // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67375b4
	float *a5bb033a58(); // Function Engine.ExponentialHeightFogComponent.*a5bb033a58 // Final|Native|Public|BlueprintCallable // @ game+0x673628c
	float *f6767c007e(); // Function Engine.ExponentialHeightFogComponent.*f6767c007e // Final|Native|Public|BlueprintCallable // @ game+0x673e22c
	float *97c851b5a3(); // Function Engine.ExponentialHeightFogComponent.*97c851b5a3 // Final|Native|Public|BlueprintCallable // @ game+0x6734ab8
	float *5755e0af67(); // Function Engine.ExponentialHeightFogComponent.*5755e0af67 // Final|Native|Public|BlueprintCallable // @ game+0x673f0b0
	float *25cd1558c7(); // Function Engine.ExponentialHeightFogComponent.*25cd1558c7 // Final|Native|Public|BlueprintCallable // @ game+0x673c8a8
	float *d5e86f01d3(); // Function Engine.ExponentialHeightFogComponent.*d5e86f01d3 // Final|Native|Public|BlueprintCallable // @ game+0x6735d6c
	float SetIntensity(); // Function Engine.ExponentialHeightFogComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x67379b0
	bool *933820db44(); // Function Engine.ExponentialHeightFogComponent.*933820db44 // Final|Native|Public|BlueprintCallable // @ game+0x673ed3c
	float *c1c1d05fe8(); // Function Engine.ExponentialHeightFogComponent.*c1c1d05fe8 // Final|Native|Public|BlueprintCallable // @ game+0x6735acc
	float *926687703c(); // Function Engine.ExponentialHeightFogComponent.*926687703c // Final|Native|Public|BlueprintCallable // @ game+0x673750c
};

// Class Engine.*3e0240067a
// Size: 0xd8 (Inherited: 0x30)
struct U*3e0240067a : UObject {
	struct FForceFeedbackAttenuationSettings Attenuation; // 0x30(0xa8)
};

// Class Engine.ForceFeedbackComponent
// Size: 0x550 (Inherited: 0x480)
struct UForceFeedbackComponent : USceneComponent {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x478(0x08)
	char *6ecc134ca8 : 1; // 0x480(0x01)
	char *0096e20ed8 : 1; // 0x480(0x01)
	char bLooping : 1; // 0x480(0x01)
	char bOverrideAttenuation : 1; // 0x480(0x01)
	float IntensityMultiplier; // 0x484(0x04)
	struct U*3e0240067a* AttenuationSettings; // 0x488(0x08)
	struct FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x490(0xa8)
	struct FMulticastDelegate OnForceFeedbackFinished; // 0x538(0x10)
	char pad_54C_4 : 4; // 0x54c(0x01)
	char pad_54D[0x3]; // 0x54d(0x03)

	struct UForceFeedbackEffect* *fca741a4e6(); // Function Engine.ForceFeedbackComponent.*fca741a4e6 // Final|Native|Public|BlueprintCallable // @ game+0x673667c
	float *c9c2bfab43(); // Function Engine.ForceFeedbackComponent.*c9c2bfab43 // Final|Native|Public|BlueprintCallable // @ game+0x6737c24
	float Play(); // Function Engine.ForceFeedbackComponent.Play // Native|Public|BlueprintCallable // @ game+0x6728f6c
	void Stop(); // Function Engine.ForceFeedbackComponent.Stop // Native|Public|BlueprintCallable // @ game+0x6746380
	struct FForceFeedbackAttenuationSettings AdjustAttenuation(); // Function Engine.ForceFeedbackComponent.AdjustAttenuation // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x66f5980
	bool *5c94b03e6d(); // Function Engine.ForceFeedbackComponent.*5c94b03e6d // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x66f861c
};

// Class Engine.*4ac6be710c
// Size: 0x520 (Inherited: 0x480)
struct U*4ac6be710c : USceneComponent {
	struct UMaterialInterface* DecalMaterial; // 0x478(0x08)
	bool KeepInstanceBufferCPUAccess; // 0x480(0x01)
	struct F*87cf230eda DecalChannels; // 0x481(0x01)
	char pad_48A[0x96]; // 0x48a(0x96)

	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // Function Engine.*4ac6be710c.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x6703868
	struct UMaterialInterface* *985cbb1955(); // Function Engine.*4ac6be710c.*985cbb1955 // Final|Native|Public|BlueprintCallable // @ game+0x67343c4
	struct UMaterialInterface* *7f5d0189f2(); // Function Engine.*4ac6be710c.*7f5d0189f2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xc33650
};

// Class Engine.*6fca80a880
// Size: 0x4e0 (Inherited: 0x480)
struct U*6fca80a880 : USceneComponent {
	bool UseDynamicInstanceBuffer; // 0x478(0x01)
	bool KeepInstanceBufferCPUAccess; // 0x479(0x01)
	struct TArray<struct F*7be896d8e6> PerInstanceDecalData; // 0x480(0x10)
	struct UStaticMesh* StaticMesh; // 0x490(0x08)
	struct UMaterialInterface* DecalMaterial; // 0x498(0x08)
	char pad_4A2[0x3e]; // 0x4a2(0x3e)

	int32 *af6477ee17(); // Function Engine.*6fca80a880.*af6477ee17 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f403c
	struct UMaterialInterface* *985cbb1955(); // Function Engine.*6fca80a880.*985cbb1955 // Final|Native|Public|BlueprintCallable // @ game+0x673445c
	int32 *be3ae800fc(); // Function Engine.*6fca80a880.*be3ae800fc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f4484
	struct UStaticMesh* OnRep_StaticMesh(); // Function Engine.*6fca80a880.OnRep_StaticMesh // Final|Native|Public // @ game+0x672827c
	bool SetStaticMesh(); // Function Engine.*6fca80a880.SetStaticMesh // Final|Native|Public|BlueprintCallable // @ game+0x673ce44
	int32 *4b502e7200(); // Function Engine.*6fca80a880.*4b502e7200 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670f1d8
	struct UMaterialInterface* *7f5d0189f2(); // Function Engine.*6fca80a880.*7f5d0189f2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66d99d8
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // Function Engine.*6fca80a880.CreateDynamicMaterialInstance // Native|Public|BlueprintCallable // @ game+0x6703890
	void *f58b7ec745(); // Function Engine.*6fca80a880.*f58b7ec745 // Native|Public|BlueprintCallable // @ game+0x594e104
	bool *e1ee01c104(); // Function Engine.*6fca80a880.*e1ee01c104 // Native|Public|BlueprintCallable // @ game+0x672d854
};

// Class Engine.*c79083df2c
// Size: 0x38 (Inherited: 0x38)
struct U*c79083df2c : UDataAsset {
};

// Class Engine.LevelBlockType
// Size: 0x60 (Inherited: 0x38)
struct ULevelBlockType : UDataAsset {
	enum class ESpawnPointRollType *0fa3ef7405; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*a8ada71f24> Variants; // 0x40(0x10)
	struct TArray<struct F*9b484b0fed> *784c7f1a41; // 0x50(0x10)
};

// Class Engine.*1f6088d17c
// Size: 0x490 (Inherited: 0x480)
struct U*1f6088d17c : USceneComponent {
	struct ULevelBlockType* LevelBlockType; // 0x478(0x08)
	bool *13cf9c44cc; // 0x480(0x01)
	enum class EPreviewIndexType *486e326042; // 0x481(0x01)
	int32 *08396e86fd; // 0x484(0x04)
	char pad_48E[0x2]; // 0x48e(0x02)
};

// Class Engine.DirectionalLightComponent
// Size: 0x610 (Inherited: 0x5a0)
struct UDirectionalLightComponent : ULightComponent {
	char bEnableLightShaftOcclusion : 1; // 0x598(0x01)
	float OcclusionMaskDarkness; // 0x59c(0x04)
	float OcclusionDepthRange; // 0x5a0(0x04)
	struct FVector LightShaftOverrideDirection; // 0x5a4(0x0c)
	float WholeSceneDynamicShadowRadius; // 0x5b0(0x04)
	float DynamicShadowDistanceMovableLight; // 0x5b4(0x04)
	float DynamicShadowDistanceStationaryLight; // 0x5b8(0x04)
	int32 DynamicShadowCascades; // 0x5bc(0x04)
	float CascadeDistributionExponent; // 0x5c0(0x04)
	float CascadeTransitionFraction; // 0x5c4(0x04)
	float ShadowDistanceFadeoutFraction; // 0x5c8(0x04)
	char bUseInsetShadowsForMovableObjects : 1; // 0x5cc(0x01)
	int32 FarShadowCascadeCount; // 0x5d0(0x04)
	float FarShadowDistance; // 0x5d4(0x04)
	float DistanceFieldShadowDistance; // 0x5d8(0x04)
	float LightSourceAngle; // 0x5dc(0x04)
	float TraceDistance; // 0x5e0(0x04)
	struct F*241342aeed LightmassSettings; // 0x5e4(0x10)
	char bCastModulatedShadows : 1; // 0x5f4(0x01)
	char pad_5F4_3 : 5; // 0x5f4(0x01)
	char pad_5F5[0x3]; // 0x5f5(0x03)
	struct FColor ModulatedShadowColor; // 0x5f8(0x04)
	char bUsedAsAtmosphereSunLight : 1; // 0x5fc(0x01)
	char bUseGridShadow : 1; // 0x5fc(0x01)
	char pad_5FC_2 : 6; // 0x5fc(0x01)
	char pad_5FD[0x3]; // 0x5fd(0x03)
	struct TArray<struct F*f1ce078d04> GridShadowSplitSettings; // 0x600(0x10)

	float *2d38d9d408(); // Function Engine.DirectionalLightComponent.*2d38d9d408 // Final|Native|Public|BlueprintCallable // @ game+0x6739e88
	float *53ef95661b(); // Function Engine.DirectionalLightComponent.*53ef95661b // Final|Native|Public|BlueprintCallable // @ game+0x673b718
	float *bbaf8b7778(); // Function Engine.DirectionalLightComponent.*bbaf8b7778 // Final|Native|Public|BlueprintCallable // @ game+0x6735000
	int32 *68a3d08141(); // Function Engine.DirectionalLightComponent.*68a3d08141 // Final|Native|Public|BlueprintCallable // @ game+0x6734eb8
	bool *a5c8f211c7(); // Function Engine.DirectionalLightComponent.*a5c8f211c7 // Final|Native|Public|BlueprintCallable // @ game+0x6735474
	float *cc708e0100(); // Function Engine.DirectionalLightComponent.*cc708e0100 // Final|Native|Public|BlueprintCallable // @ game+0x6734f58
	struct FVector *9c42c07e64(); // Function Engine.DirectionalLightComponent.*9c42c07e64 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67383c4
	float *30dd0c498b(); // Function Engine.DirectionalLightComponent.*30dd0c498b // Final|Native|Public|BlueprintCallable // @ game+0x6732e08
	float *7482bb421b(); // Function Engine.DirectionalLightComponent.*7482bb421b // Final|Native|Public|BlueprintCallable // @ game+0x6732d60
};

// Class Engine.SkyLightComponent
// Size: 0x660 (Inherited: 0x4b0)
struct USkyLightComponent : ULightComponentBase {
	enum class *e07fd1573d SourceType; // 0x4a8(0x01)
	struct UTextureCube* Cubemap; // 0x4b0(0x08)
	float SourceCubemapAngle; // 0x4b8(0x04)
	int32 CubemapResolution; // 0x4bc(0x04)
	float SkyDistanceThreshold; // 0x4c0(0x04)
	bool bCaptureEmissiveOnly; // 0x4c4(0x01)
	bool bLowerHemisphereIsBlack; // 0x4c5(0x01)
	char pad_4C7[0x1]; // 0x4c7(0x01)
	struct FLinearColor LowerHemisphereColor; // 0x4c8(0x10)
	float OcclusionMaxDistance; // 0x4d8(0x04)
	float Contrast; // 0x4dc(0x04)
	float OcclusionExponent; // 0x4e0(0x04)
	float MinOcclusion; // 0x4e4(0x04)
	struct FColor OcclusionTint; // 0x4e8(0x04)
	enum class *f4d37bdffc OcclusionCombineMode; // 0x4ec(0x01)
	char pad_4ED[0xab]; // 0x4ed(0xab)
	struct UTextureCube* *4de9ebc72b; // 0x598(0x08)
	char pad_5A0[0xc0]; // 0x5a0(0xc0)

	struct FColor *1d16369bb9(); // Function Engine.SkyLightComponent.*1d16369bb9 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6739f20
	struct UTextureCube* *11f1e721c1(); // Function Engine.SkyLightComponent.*11f1e721c1 // Final|Native|Public|BlueprintCallable // @ game+0x6733fbc
	float *374e2aebe3(); // Function Engine.SkyLightComponent.*374e2aebe3 // Final|Native|Public|BlueprintCallable // @ game+0x6734078
	float *50017d9775(); // Function Engine.SkyLightComponent.*50017d9775 // Final|Native|Public|BlueprintCallable // @ game+0x6739580
	float SetIntensity(); // Function Engine.SkyLightComponent.SetIntensity // Final|Native|Public|BlueprintCallable // @ game+0x6737af0
	float *a5a07d6e2d(); // Function Engine.SkyLightComponent.*a5a07d6e2d // Final|Native|Public|BlueprintCallable // @ game+0x673733c
	float *09943445e1(); // Function Engine.SkyLightComponent.*09943445e1 // Final|Native|Public|BlueprintCallable // @ game+0x6739d58
	float *668380a5c2(); // Function Engine.SkyLightComponent.*668380a5c2 // Final|Native|Public|BlueprintCallable // @ game+0x6739df0
	struct FLinearColor *c0e895a11e(); // Function Engine.SkyLightComponent.*c0e895a11e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6738004
	float *bce07c35db(); // Function Engine.SkyLightComponent.*bce07c35db // Final|Native|Public|BlueprintCallable // @ game+0x673f1f0
	void *3acb77eea1(); // Function Engine.SkyLightComponent.*3acb77eea1 // Final|Native|Public|BlueprintCallable // @ game+0x672d750
};

// Class Engine.*bcc8a3c007
// Size: 0x480 (Inherited: 0x480)
struct U*bcc8a3c007 : USceneComponent {
	struct UBoxComponent* *be895638b7; // 0x478(0x08)
};

// Class Engine.*4e1a8cb2eb
// Size: 0x4a0 (Inherited: 0x480)
struct U*4e1a8cb2eb : USceneComponent {
	struct F*3fc6081d30 Node; // 0x478(0x18)
	struct U*4e1a8cb2eb* *3000111774; // 0x490(0x08)
	struct U*4e1a8cb2eb* *a31ce49af1; // 0x498(0x08)
};

// Class Engine.*7eb39b1d5d
// Size: 0x500 (Inherited: 0x480)
struct U*7eb39b1d5d : USceneComponent {
	struct F*df90c65c66 *df90c65c66; // 0x480(0x20)
	float *1f90a5242b; // 0x4a0(0x04)
	struct F*c242f1248f *79c68ec704; // 0x4a4(0x24)
	float *473691f0b9; // 0x4c8(0x04)
	char pad_4CC[0x34]; // 0x4cc(0x34)
};

// Class Engine.PhysicsConstraintComponent
// Size: 0x6b0 (Inherited: 0x480)
struct UPhysicsConstraintComponent : USceneComponent {
	struct AActor* *37429b2311; // 0x478(0x08)
	struct F*a41316d8a1 *2319c3a23c; // 0x480(0x08)
	struct AActor* *6c58b556e6; // 0x488(0x08)
	struct F*a41316d8a1 *230cbbeeae; // 0x490(0x08)
	char pad_4A0[0x8]; // 0x4a0(0x08)
	struct UPhysicsConstraintTemplate* ConstraintSetup; // 0x4a8(0x08)
	struct FMulticastDelegate OnConstraintBroken; // 0x4b0(0x10)
	struct FConstraintInstance ConstraintInstance; // 0x4c0(0x1f0)

	float *65dbd86175(); // Function Engine.PhysicsConstraintComponent.*65dbd86175 // Final|Native|Public|BlueprintCallable // @ game+0x673015c
	bool *0dd3a93edb(); // Function Engine.PhysicsConstraintComponent.*0dd3a93edb // Final|Native|Public|BlueprintCallable // @ game+0x6730910
	struct FVector *7021ec57e7(); // Function Engine.PhysicsConstraintComponent.*7021ec57e7 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6738a04
	struct FRotator *ab9bcbaadf(); // Function Engine.PhysicsConstraintComponent.*ab9bcbaadf // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67304f4
	float *e9e0af90f1(); // Function Engine.PhysicsConstraintComponent.*e9e0af90f1 // Final|Native|Public|BlueprintCallable // @ game+0x6738efc
	bool *30cebb05f8(); // Function Engine.PhysicsConstraintComponent.*30cebb05f8 // Final|Native|Public|BlueprintCallable // @ game+0x673a0ac
	float *d926ea5cf9(); // Function Engine.PhysicsConstraintComponent.*d926ea5cf9 // Final|Native|Public|BlueprintCallable // @ game+0x6730634
	struct FVector *53304d48a8(); // Function Engine.PhysicsConstraintComponent.*53304d48a8 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6733d20
	bool *729030115d(); // Function Engine.PhysicsConstraintComponent.*729030115d // Final|Native|Public|BlueprintCallable // @ game+0x67388cc
	struct FName *6be5b368e7(); // Function Engine.PhysicsConstraintComponent.*6be5b368e7 // Final|Native|Public|BlueprintCallable // @ game+0x67337c4
	float *ae53cae2f1(); // Function Engine.PhysicsConstraintComponent.*ae53cae2f1 // Final|Native|Public|BlueprintCallable // @ game+0x67387a8
	void *cb270d2b61(); // Function Engine.PhysicsConstraintComponent.*cb270d2b61 // Final|Native|Public|BlueprintCallable // @ game+0x66fcaf8
	float *50fa69d9cc(); // Function Engine.PhysicsConstraintComponent.*50fa69d9cc // Final|Native|Public|BlueprintCallable // @ game+0x6738ff0
	struct FVector *1a6c79d679(); // Function Engine.PhysicsConstraintComponent.*1a6c79d679 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6738cf4
	bool *00ae8a57b4(); // Function Engine.PhysicsConstraintComponent.*00ae8a57b4 // Final|Native|Public|BlueprintCallable // @ game+0x6734b60
	bool *d13ed6203a(); // Function Engine.PhysicsConstraintComponent.*d13ed6203a // Final|Native|Public|BlueprintCallable // @ game+0x6738bbc
	float *ea65a12b8b(); // Function Engine.PhysicsConstraintComponent.*ea65a12b8b // Final|Native|Public|BlueprintCallable // @ game+0x673081c
	float *8e3c6c7d7f(); // Function Engine.PhysicsConstraintComponent.*8e3c6c7d7f // Final|Native|Public|BlueprintCallable // @ game+0x6738e08
	float *244e466cf3(); // Function Engine.PhysicsConstraintComponent.*244e466cf3 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670df34
	bool *590ace55e8(); // Function Engine.PhysicsConstraintComponent.*590ace55e8 // Final|Native|Public|BlueprintCallable // @ game+0x6739fdc
	bool *885018530a(); // Function Engine.PhysicsConstraintComponent.*885018530a // Final|Native|Public|BlueprintCallable // @ game+0x6730a04
	struct FVector *2300084cb1(); // Function Engine.PhysicsConstraintComponent.*2300084cb1 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6730bcc
	float *9962ecb9ec(); // Function Engine.PhysicsConstraintComponent.*9962ecb9ec // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670df00
	struct FTransform *26e72d9760(); // Function Engine.PhysicsConstraintComponent.*26e72d9760 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6733bec
	struct FVector *fe44e90a49(); // Function Engine.PhysicsConstraintComponent.*fe44e90a49 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x670d790
	enum class EAngularDriveMode *738705d26e(); // Function Engine.PhysicsConstraintComponent.*738705d26e // Final|Native|Public|BlueprintCallable // @ game+0x6730094
	bool *3ca9096d1c(); // Function Engine.PhysicsConstraintComponent.*3ca9096d1c // Final|Native|Public|BlueprintCallable // @ game+0x6730ad8
	struct FVector *329b5848da(); // Function Engine.PhysicsConstraintComponent.*329b5848da // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6733e70
	float *c86a49001d(); // Function Engine.PhysicsConstraintComponent.*c86a49001d // Final|Native|Public|BlueprintCallable // @ game+0x6730728
	bool *22447dd470(); // Function Engine.PhysicsConstraintComponent.*22447dd470 // Final|Native|Public|BlueprintCallable // @ game+0x6730400
	float *5adea844d2(); // Function Engine.PhysicsConstraintComponent.*5adea844d2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670decc
};

// Class Engine.*56893df1bb
// Size: 0x4a0 (Inherited: 0x480)
struct U*56893df1bb : USceneComponent {
	float SpringStiffness; // 0x478(0x04)
	float SpringDamping; // 0x47c(0x04)
	float SpringLengthAtRest; // 0x480(0x04)
	float SpringRadius; // 0x484(0x04)
	enum class ECollisionChannel SpringChannel; // 0x488(0x01)
	bool bIgnoreSelf; // 0x489(0x01)
	float SpringCompression; // 0x48c(0x04)
	char pad_496[0xa]; // 0x496(0x0a)

	struct FVector *74f80a0acd(); // Function Engine.*56893df1bb.*74f80a0acd // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6715160
	struct FVector *abc68bd309(); // Function Engine.*56893df1bb.*abc68bd309 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6715194
	struct FVector *8296297c7a(); // Function Engine.*56893df1bb.*8296297c7a // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67151c4
	float *9c10a721e2(); // Function Engine.*56893df1bb.*9c10a721e2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x67123a4
};

// Class Engine.PhysicsThrusterComponent
// Size: 0x480 (Inherited: 0x480)
struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x478(0x04)
};

// Class Engine.PostProcessComponent
// Size: 0xa00 (Inherited: 0x480)
struct UPostProcessComponent : USceneComponent {
	struct FPostProcessSettings Settings; // 0x480(0x570)
	float Priority; // 0x9f0(0x04)
	float BlendRadius; // 0x9f4(0x04)
	float BlendWeight; // 0x9f8(0x04)
	char bEnabled : 1; // 0x9fc(0x01)
	char bUnbound : 1; // 0x9fc(0x01)
	char pad_9FC_2 : 6; // 0x9fc(0x01)
	char pad_9FD[0x3]; // 0x9fd(0x03)

	float *fa132a0246(); // Function Engine.PostProcessComponent.*fa132a0246 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x66f4a74
};

// Class Engine.BrushComponent
// Size: 0x9e0 (Inherited: 0x9c0)
struct UBrushComponent : UPrimitiveComponent {
	struct UModel* Brush; // 0x9b8(0x08)
	struct UBodySetup* BrushBodySetup; // 0x9c0(0x08)
	struct FVector PrePivot; // 0x9c8(0x0c)
	char pad_9DC[0x4]; // 0x9dc(0x04)
};

// Class Engine.*629e8e447e
// Size: 0x9f0 (Inherited: 0x9c0)
struct U*629e8e447e : UPrimitiveComponent {
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x9c0(0x10)
	struct TArray<struct F*a2b535fde2> *54b58cd9af; // 0x9d0(0x10)
	struct UBodySetup* BodySetup; // 0x9e0(0x08)
	char pad_9E8[0x8]; // 0x9e8(0x08)
};

// Class Engine.*dd9d99e533
// Size: 0x9e0 (Inherited: 0x9c0)
struct U*dd9d99e533 : UPrimitiveComponent {
	struct FColor FrustumColor; // 0x9b8(0x04)
	float FrustumAngle; // 0x9bc(0x04)
	float FrustumAspectRatio; // 0x9c0(0x04)
	float FrustumStartDist; // 0x9c4(0x04)
	float FrustumEndDist; // 0x9c8(0x04)
	struct UTexture* Texture; // 0x9d0(0x08)
	char pad_9DC[0x4]; // 0x9dc(0x04)
};

// Class Engine.*6d8ae0baac
// Size: 0x9d0 (Inherited: 0x9c0)
struct U*6d8ae0baac : UPrimitiveComponent {
	struct TArray<struct FVector2D> Points; // 0x9b8(0x10)
};

// Class Engine.GrassVolumeComponent
// Size: 0x9f0 (Inherited: 0x9f0)
struct UGrassVolumeComponent : UBoxComponent {
};

// Class Engine.GrassVolumesContainerComponent
// Size: 0x9d0 (Inherited: 0x9c0)
struct UGrassVolumesContainerComponent : UPrimitiveComponent {
	struct TArray<struct F*34044f7f1f> *8e96c3108e; // 0x9b8(0x10)
};

// Class Engine.*bed6c45ca0
// Size: 0xa10 (Inherited: 0x9c0)
struct U*bed6c45ca0 : UPrimitiveComponent {
	struct ALandscape* *ca401f1ed6; // 0x9b8(0x1c)
	struct ALandscape* *842b237538; // 0x9d4(0x1c)
	struct UTexture2D* *86051abfcc; // 0x9f0(0x08)
	struct FVector2D Extent; // 0x9f8(0x08)
	struct FIntPoint *71a2bcdcb3; // 0xa00(0x08)
	char *23e6d67f9d : 1; // 0xa08(0x01)
	char *364922f918 : 1; // 0xa08(0x01)
	char *b8bec9a5f2 : 1; // 0xa08(0x01)
	char *a7ca269d3b : 1; // 0xa08(0x01)
};

// Class Engine.*f86c43296e
// Size: 0xa00 (Inherited: 0x9c0)
struct U*f86c43296e : UPrimitiveComponent {
	char pad_9C0[0x40]; // 0x9c0(0x40)
};

// Class Engine.MaterialBillboardComponent
// Size: 0x9d0 (Inherited: 0x9c0)
struct UMaterialBillboardComponent : UPrimitiveComponent {
	struct TArray<struct F*5d428331b5> Elements; // 0x9b8(0x10)

	struct UCurveFloat* *f8a7be092e(); // Function Engine.MaterialBillboardComponent.*f8a7be092e // Final|Native|Public|BlueprintCallable // @ game+0x66f3988
	struct TArray<struct F*5d428331b5> *8fd582b1a5(); // Function Engine.MaterialBillboardComponent.*8fd582b1a5 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x67350a8
};

// Class Engine.*e8d27b3eea
// Size: 0xd40 (Inherited: 0xc60)
struct U*e8d27b3eea : USkinnedMeshComponent {
	char pad_C60[0xe0]; // 0xc60(0xe0)

	enum class EBoneSpaces *0112127d48(); // Function Engine.*e8d27b3eea.*0112127d48 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6731fb4
	struct FVector *3c056eb4e1(); // Function Engine.*e8d27b3eea.*3c056eb4e1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x670ccc4
	enum class EBoneSpaces *30848c16d4(); // Function Engine.*e8d27b3eea.*30848c16d4 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6731bb0
	struct FName *8cfb5bf94f(); // Function Engine.*e8d27b3eea.*8cfb5bf94f // Final|Native|Public|BlueprintCallable // @ game+0x672def8
	struct USkeletalMeshComponent* *ee2c8e1346(); // Function Engine.*e8d27b3eea.*ee2c8e1346 // Final|Native|Public|BlueprintCallable // @ game+0x67036c0
	struct FTransform *918c78c86b(); // Function Engine.*e8d27b3eea.*918c78c86b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x670d1d8
	struct FRotator *fd6cb79fce(); // Function Engine.*e8d27b3eea.*fd6cb79fce // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x670cf78
	struct FVector *e264fadc3f(); // Function Engine.*e8d27b3eea.*e264fadc3f // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x670d0a8
	enum class EBoneSpaces *9246afb9b5(); // Function Engine.*e8d27b3eea.*9246afb9b5 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6731e78
	enum class EBoneSpaces *c5931fcbde(); // Function Engine.*e8d27b3eea.*c5931fcbde // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6731cec
};

// Class Engine.SplineMeshComponent
// Size: 0xc00 (Inherited: 0xb60)
struct USplineMeshComponent : UStaticMeshComponent {
	char pad_B60[0x8]; // 0xb60(0x08)
	struct F*59a815019c SplineParams; // 0xb68(0x58)
	struct FVector SplineUpDir; // 0xbc0(0x0c)
	char *e13eafe77d : 1; // 0xbcc(0x01)
	char *b67a8f6ee6 : 1; // 0xbcc(0x01)
	char pad_BCC_2 : 6; // 0xbcc(0x01)
	char pad_BCD[0x3]; // 0xbcd(0x03)
	enum class ESplineMeshAxis *d03ab28708; // 0xbd0(0x01)
	char pad_BD1[0x3]; // 0xbd1(0x03)
	float *1e7aad39b5; // 0xbd4(0x04)
	float *830bfaff26; // 0xbd8(0x04)
	char pad_BDC[0x4]; // 0xbdc(0x04)
	struct UBodySetup* BodySetup; // 0xbe0(0x08)
	struct FGuid *5c5c2d3a86; // 0xbe8(0x10)
	char *b92da6c06c : 1; // 0xbf8(0x01)
	char pad_BF8_1 : 7; // 0xbf8(0x01)
	char pad_BF9[0x7]; // 0xbf9(0x07)

	struct FVector2D *d007b043c1(); // Function Engine.SplineMeshComponent.*d007b043c1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670f0d8
	struct FVector *0c8120b55e(); // Function Engine.SplineMeshComponent.*0c8120b55e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670f100
	bool *8c9eafddab(); // Function Engine.SplineMeshComponent.*8c9eafddab // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673cc48
	struct FVector2D *dca4ceb272(); // Function Engine.SplineMeshComponent.*dca4ceb272 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6715204
	float *488a801cab(); // Function Engine.SplineMeshComponent.*488a801cab // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x594b5ec
	struct FVector *62f9a0733e(); // Function Engine.SplineMeshComponent.*62f9a0733e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670f0b0
	struct FVector2D *cabb18e65e(); // Function Engine.SplineMeshComponent.*cabb18e65e // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x670f088
	float *d03fc16af6(); // Function Engine.SplineMeshComponent.*d03fc16af6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670d304
	bool *b6934b5203(); // Function Engine.SplineMeshComponent.*b6934b5203 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673ca50
	void *99bb8340bd(); // Function Engine.SplineMeshComponent.*99bb8340bd // Final|Native|Public|BlueprintCallable // @ game+0x67485dc
	bool *c774e46794(); // Function Engine.SplineMeshComponent.*c774e46794 // Final|Native|Public|BlueprintCallable // @ game+0x673cb4c
	struct FVector *f09f820d12(); // Function Engine.SplineMeshComponent.*f09f820d12 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x671522c
	bool *3fe3db8980(); // Function Engine.SplineMeshComponent.*3fe3db8980 // Final|Native|Public|BlueprintCallable // @ game+0x67357d4
	float *0af2d08f84(); // Function Engine.SplineMeshComponent.*0af2d08f84 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6715254
	bool *03f1de76e4(); // Function Engine.SplineMeshComponent.*03f1de76e4 // Final|Native|Public|BlueprintCallable // @ game+0x6732420
	struct FVector *e5962eace6(); // Function Engine.SplineMeshComponent.*e5962eace6 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6715294
	enum class ESplineMeshAxis *d5115c32ea(); // Function Engine.SplineMeshComponent.*d5115c32ea // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670f2e4
	bool *7f5d4edf6c(); // Function Engine.SplineMeshComponent.*7f5d4edf6c // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67358d0
	bool *cf189259c8(); // Function Engine.SplineMeshComponent.*cf189259c8 // Final|Native|Public|BlueprintCallable // @ game+0x6736888
	bool *4f2d4684bf(); // Function Engine.SplineMeshComponent.*4f2d4684bf // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67356d8
	bool *4643939026(); // Function Engine.SplineMeshComponent.*4643939026 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673c5f4
	bool *c84d8c0b08(); // Function Engine.SplineMeshComponent.*c84d8c0b08 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673c950
	bool *656d742e1a(); // Function Engine.SplineMeshComponent.*656d742e1a // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x673c430
	float *d1ae33e399(); // Function Engine.SplineMeshComponent.*d1ae33e399 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670d334
	struct TArray<struct FVector> *df0559fcfe(); // Function Engine.SplineMeshComponent.*df0559fcfe // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66fdda0
	struct FVector2D *f91a126656(); // Function Engine.SplineMeshComponent.*f91a126656 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x671526c
	bool *cebc938de2(); // Function Engine.SplineMeshComponent.*cebc938de2 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67359d0
	bool *0a0edf20cd(); // Function Engine.SplineMeshComponent.*0a0edf20cd // Final|Native|Public|BlueprintCallable // @ game+0x6732610
	bool *154971ddcf(); // Function Engine.SplineMeshComponent.*154971ddcf // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x67355d8
	bool *17ca51719a(); // Function Engine.SplineMeshComponent.*17ca51719a // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673cd48
	struct FVector *0362ab1f25(); // Function Engine.SplineMeshComponent.*0362ab1f25 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6715138
};

// Class Engine.*42664bcf82
// Size: 0xbe0 (Inherited: 0xb60)
struct U*42664bcf82 : UStaticMeshComponent {
	char pad_B60[0x8]; // 0xb60(0x08)
	struct TArray<struct F*e6be071fa0> PerInstanceSMData; // 0xb68(0x10)
	struct FVector SplineUpDir; // 0xb78(0x0c)
	char *b67a8f6ee6 : 1; // 0xb84(0x01)
	char pad_B84_1 : 7; // 0xb84(0x01)
	char pad_B85[0x3]; // 0xb85(0x03)
	enum class ESplineMeshAxis *d03ab28708; // 0xb88(0x01)
	char pad_B89[0x3]; // 0xb89(0x03)
	float *1e7aad39b5; // 0xb8c(0x04)
	float *830bfaff26; // 0xb90(0x04)
	struct FVector *a36bdac7f9; // 0xb94(0x0c)
	int32 InstanceStartCullDistance; // 0xba0(0x04)
	int32 InstanceEndCullDistance; // 0xba4(0x04)
	char pad_BA8[0x18]; // 0xba8(0x18)
	struct UBodySetup* BodySetup; // 0xbc0(0x08)
	struct FGuid *5c5c2d3a86; // 0xbc8(0x10)
	uint32 *8b6ee1f767; // 0xbd8(0x04)
	char pad_BDC[0x4]; // 0xbdc(0x04)

	enum class ESplineMeshAxis *d5115c32ea(); // Function Engine.*42664bcf82.*d5115c32ea // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670f2cc
	bool *0a0edf20cd(); // Function Engine.*42664bcf82.*0a0edf20cd // Final|Native|Public|BlueprintCallable // @ game+0x673251c
	int32 *4b502e7200(); // Function Engine.*42664bcf82.*4b502e7200 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6710048
	int32 *be3ae800fc(); // Function Engine.*42664bcf82.*be3ae800fc // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f45fc
	bool *e1ee01c104(); // Function Engine.*42664bcf82.*e1ee01c104 // Native|Public|BlueprintCallable // @ game+0x672d8f8
	int32 *af6477ee17(); // Function Engine.*42664bcf82.*af6477ee17 // Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f41b8
	float *d03fc16af6(); // Function Engine.*42664bcf82.*d03fc16af6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670d2ec
	bool *cf189259c8(); // Function Engine.*42664bcf82.*cf189259c8 // Final|Native|Public|BlueprintCallable // @ game+0x673679c
	bool *3fb8e6399f(); // Function Engine.*42664bcf82.*3fb8e6399f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6710510
	void *99bb8340bd(); // Function Engine.*42664bcf82.*99bb8340bd // Final|Native|Public|BlueprintCallable // @ game+0x67485c8
	bool *03f1de76e4(); // Function Engine.*42664bcf82.*03f1de76e4 // Final|Native|Public|BlueprintCallable // @ game+0x673232c
	bool *f58b7ec745(); // Function Engine.*42664bcf82.*f58b7ec745 // Native|Public|BlueprintCallable // @ game+0x6700e84
	bool *6676b9aa35(); // Function Engine.*42664bcf82.*6676b9aa35 // Final|Native|Public|BlueprintCallable // @ game+0x67341ac
	float *d1ae33e399(); // Function Engine.*42664bcf82.*d1ae33e399 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670d31c
};

// Class Engine.*f720ae3ffb
// Size: 0xb60 (Inherited: 0xb60)
struct U*f720ae3ffb : UStaticMeshComponent {
};

// Class Engine.Texture
// Size: 0x180 (Inherited: 0x30)
struct UTexture : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FGuid *4fc81af735; // 0x38(0x10)
	int32 LODBias; // 0x48(0x04)
	int32 NumCinematicMipLevels; // 0x4c(0x04)
	int32 GlobalLODBias; // 0x50(0x04)
	char SRGB : 1; // 0x54(0x01)
	char NeverStream : 1; // 0x54(0x01)
	char *3156c03d39 : 1; // 0x54(0x01)
	char *458bd541b9 : 1; // 0x54(0x01)
	char *40010bc0f1 : 1; // 0x54(0x01)
	char pad_54_5 : 3; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 *f9f87cca64; // 0x58(0x04)
	enum class TextureCompressionSettings CompressionSettings; // 0x5c(0x01)
	enum class TextureFilter Filter; // 0x5d(0x01)
	enum class TextureGroup LODGroup; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
	struct FPerPlatformFloat *5e7a8f0a57; // 0x60(0x04)
	enum class ETextureDownscaleOptions *b30c73ba40; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x68(0x10)
	char pad_78[0x108]; // 0x78(0x108)
};

// Class Engine.Texture2D
// Size: 0x270 (Inherited: 0x180)
struct UTexture2D : UTexture {
	int32 *67092ed327; // 0x180(0x04)
	int32 *b7c7898de9; // 0x184(0x04)
	int32 *c19355e2d5; // 0x188(0x04)
	struct FIntPoint *1f887ea802; // 0x18c(0x08)
	char pad_194[0x4]; // 0x194(0x04)
	double *33987d22cd; // 0x198(0x08)
	char *5d7185a4f5 : 1; // 0x1a0(0x01)
	char *598f669720 : 1; // 0x1a0(0x01)
	char *ab3ac892d6 : 1; // 0x1a0(0x01)
	char *b980855144 : 1; // 0x1a0(0x01)
	char *b8c9197ca2 : 1; // 0x1a0(0x01)
	char bGlobalForceMipLevelsToBeResident : 1; // 0x1a0(0x01)
	char *6849bcc5c2 : 1; // 0x1a0(0x01)
	char pad_1A0_7 : 1; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	enum class *f13c8e8821 AddressX; // 0x1a4(0x01)
	enum class *f13c8e8821 AddressY; // 0x1a5(0x01)
	char pad_1A6[0xca]; // 0x1a6(0xca)

	int32 *5cf577df53(); // Function Engine.Texture2D.*5cf577df53 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66f8f08
	int32 *9ec18950b5(); // Function Engine.Texture2D.*9ec18950b5 // Native|Public|BlueprintCallable // @ game+0xcc7ab0
	int32 *ed2900a8d2(); // Function Engine.Texture2D.*ed2900a8d2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x66f8ee0
};

// Class Engine.*f5b790015b
// Size: 0x58 (Inherited: 0x38)
struct U*f5b790015b : UDataAsset {
	struct UTexture2D* Color; // 0x38(0x20)
};

// Class Engine.*dcf12a725f
// Size: 0x9d0 (Inherited: 0x9c0)
struct U*dcf12a725f : UPrimitiveComponent {
	struct U*f5b790015b* LabelData; // 0x9b8(0x08)
	struct FVector2D Offset; // 0x9c0(0x08)
};

// Class Engine.*10ecc535a6
// Size: 0xf0 (Inherited: 0x38)
struct U*10ecc535a6 : UDataAsset {
	struct UTexture2D* Color; // 0x38(0x20)
	struct UTexture2D* Normal; // 0x58(0x20)
	float Height; // 0x78(0x04)
	char pad_7C[0x74]; // 0x7c(0x74)
};

// Class Engine.*a40cdcc7b3
// Size: 0x9c0 (Inherited: 0x9c0)
struct U*a40cdcc7b3 : UPrimitiveComponent {
	struct U*10ecc535a6* ObjectData; // 0x9b8(0x08)
};

// Class Engine.*5150ba566f
// Size: 0xa00 (Inherited: 0x9c0)
struct U*5150ba566f : UPrimitiveComponent {
	char pad_9C0[0x10]; // 0x9c0(0x10)
	struct UBodySetup* *bd21718fe3; // 0x9d0(0x08)
	char pad_9D8[0x28]; // 0x9d8(0x28)
};

// Class Engine.*cb8a245887
// Size: 0x9c0 (Inherited: 0x9c0)
struct U*cb8a245887 : UPrimitiveComponent {
};

// Class Engine.NavMeshRenderingComponent
// Size: 0x9d0 (Inherited: 0x9c0)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	char pad_9C0[0x10]; // 0x9c0(0x10)
};

// Class Engine.*c592def5a3
// Size: 0x9c0 (Inherited: 0x9c0)
struct U*c592def5a3 : UPrimitiveComponent {
};

// Class Engine.MeshClippingUnderwaterComponent
// Size: 0xa20 (Inherited: 0x9f0)
struct UMeshClippingUnderwaterComponent : UBoxComponent {
	bool bEnabled; // 0x9e8(0x01)
	bool bUseParentBounds; // 0x9e9(0x01)
	float ExtendUpwards; // 0x9ec(0x04)
	float ExtendDownwards; // 0x9f0(0x04)
	char pad_9FA[0x26]; // 0x9fa(0x26)

	struct FOrientedBox *f31f965abe(); // Function Engine.MeshClippingUnderwaterComponent.*f31f965abe // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x67128c8
};

// Class Engine.SphereComponent
// Size: 0x9e0 (Inherited: 0x9e0)
struct USphereComponent : U*a3b7e4d578 {
	float SphereRadius; // 0x9d8(0x04)

	float *d61ba12ced(); // Function Engine.SphereComponent.*d61ba12ced // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6716ddc
	float *bdde07625c(); // Function Engine.SphereComponent.*bdde07625c // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6714f0c
	float *f390513da7(); // Function Engine.SphereComponent.*f390513da7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6714ab8
	bool *a9933dadea(); // Function Engine.SphereComponent.*a9933dadea // Final|Native|Public|BlueprintCallable // @ game+0x673bfdc
};

// Class Engine.*d9eef9fd9e
// Size: 0x9e0 (Inherited: 0x9e0)
struct U*d9eef9fd9e : USphereComponent {
};

// Class Engine.TextRenderComponent
// Size: 0xa10 (Inherited: 0x9c0)
struct UTextRenderComponent : UPrimitiveComponent {
	struct FText Text; // 0x9b8(0x18)
	struct UMaterialInterface* TextMaterial; // 0x9d0(0x08)
	struct UFont* Font; // 0x9d8(0x08)
	enum class *f608644cf4 HorizontalAlignment; // 0x9e0(0x01)
	enum class *94eb13dd26 VerticalAlignment; // 0x9e1(0x01)
	struct FColor TextRenderColor; // 0x9e4(0x04)
	float XScale; // 0x9e8(0x04)
	float YScale; // 0x9ec(0x04)
	float WorldSize; // 0x9f0(0x04)
	float *60050f0722; // 0x9f4(0x04)
	float HorizSpacingAdjust; // 0x9f8(0x04)
	float VertSpacingAdjust; // 0x9fc(0x04)
	char bAlwaysRenderAsText : 1; // 0xa00(0x01)
	char pad_A06_1 : 7; // 0xa06(0x01)
	char pad_A07[0x9]; // 0xa07(0x09)

	float *371ef92a79(); // Function Engine.TextRenderComponent.*371ef92a79 // Final|Native|Public|BlueprintCallable // @ game+0x673f848
	float *dd5a556869(); // Function Engine.TextRenderComponent.*dd5a556869 // Final|Native|Public|BlueprintCallable // @ game+0x673f6cc
	enum class *94eb13dd26 *888b143b37(); // Function Engine.TextRenderComponent.*888b143b37 // Final|Native|Public|BlueprintCallable // @ game+0x673ec0c
	struct FText *93525a058f(); // Function Engine.TextRenderComponent.*93525a058f // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x671d0f0
	struct UFont* *ade49352e2(); // Function Engine.TextRenderComponent.*ade49352e2 // Final|Native|Public|BlueprintCallable // @ game+0x67365c4
	struct FString SetText(); // Function Engine.TextRenderComponent.SetText // Final|Native|Public|BlueprintCallable // @ game+0x673da6c
	float *be6e692e22(); // Function Engine.TextRenderComponent.*be6e692e22 // Final|Native|Public|BlueprintCallable // @ game+0x6737020
	float *673de5a70a(); // Function Engine.TextRenderComponent.*673de5a70a // Final|Native|Public|BlueprintCallable // @ game+0x673ea4c
	struct UMaterialInterface* *cf11b9abd9(); // Function Engine.TextRenderComponent.*cf11b9abd9 // Final|Native|Public|BlueprintCallable // @ game+0x673db6c
	struct FVector *c02e1ceb93(); // Function Engine.TextRenderComponent.*c02e1ceb93 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6715c54
	struct FVector *1bfe0209d1(); // Function Engine.TextRenderComponent.*1bfe0209d1 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6715bc0
	enum class *f608644cf4 *34773633fd(); // Function Engine.TextRenderComponent.*34773633fd // Final|Native|Public|BlueprintCallable // @ game+0x67370c0
	struct FColor *8865293088(); // Function Engine.TextRenderComponent.*8865293088 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673dc04
	float *9b653716ad(); // Function Engine.TextRenderComponent.*9b653716ad // Final|Native|Public|BlueprintCallable // @ game+0x673f8e8
};

// Class Engine.VectorFieldComponent
// Size: 0x9e0 (Inherited: 0x9c0)
struct UVectorFieldComponent : UPrimitiveComponent {
	struct UVectorField* VectorField; // 0x9b8(0x08)
	float Intensity; // 0x9c0(0x04)
	float Tightness; // 0x9c4(0x04)
	char *5143042c62 : 1; // 0x9c8(0x01)
	char pad_9D0_1 : 7; // 0x9d0(0x01)
	char pad_9D1[0xf]; // 0x9d1(0x0f)

	float SetIntensity(); // Function Engine.VectorFieldComponent.SetIntensity // Native|Public|BlueprintCallable // @ game+0x6737b88
};

// Class Engine.RadialForceComponent
// Size: 0x4b0 (Inherited: 0x480)
struct URadialForceComponent : USceneComponent {
	float Radius; // 0x478(0x04)
	enum class *cb41f937c0 Falloff; // 0x47c(0x01)
	float ImpulseStrength; // 0x480(0x04)
	char bImpulseVelChange : 1; // 0x484(0x01)
	char bIgnoreOwningActor : 1; // 0x484(0x01)
	float ForceStrength; // 0x488(0x04)
	float DestructibleDamage; // 0x48c(0x04)
	struct TArray<enum class EObjectTypeQuery> ObjectTypesToAffect; // 0x490(0x10)
	char pad_4A1_2 : 6; // 0x4a1(0x01)
	char pad_4A2[0xe]; // 0x4a2(0x0e)

	enum class EObjectTypeQuery *0e2958db91(); // Function Engine.RadialForceComponent.*0e2958db91 // Native|Public|BlueprintCallable // @ game+0x672db60
	void *c10019f6de(); // Function Engine.RadialForceComponent.*c10019f6de // Native|Public|BlueprintCallable // @ game+0x59a21f8
	enum class EObjectTypeQuery *f0588593fa(); // Function Engine.RadialForceComponent.*f0588593fa // Native|Public|BlueprintCallable // @ game+0x66f48c0
};

// Class Engine.TextureCube
// Size: 0x2d0 (Inherited: 0x180)
struct UTextureCube : UTexture {
	bool *065a931003; // 0x180(0x01)
	char pad_181[0x14f]; // 0x181(0x14f)
};

// Class Engine.ReflectionCaptureComponent
// Size: 0x4c0 (Inherited: 0x480)
struct UReflectionCaptureComponent : USceneComponent {
	struct UBillboardComponent* *56a403fccd; // 0x478(0x08)
	enum class *1550a9d5f9 ReflectionSourceType; // 0x480(0x01)
	bool bOverrideCullDistance; // 0x481(0x01)
	enum class *c276e29a27 IndoorOutdoorMask; // 0x482(0x01)
	struct UTextureCube* Cubemap; // 0x488(0x08)
	struct UTextureCube* *eeaadbef26; // 0x490(0x08)
	float SourceCubemapAngle; // 0x498(0x04)
	float Brightness; // 0x49c(0x04)
	struct FVector CaptureOffset; // 0x4a0(0x0c)
	float CullDistance; // 0x4ac(0x04)
	char pad_4B3[0xd]; // 0x4b3(0x0d)
};

// Class Engine.BoxReflectionCaptureComponent
// Size: 0x4d0 (Inherited: 0x4c0)
struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x4c0(0x04)
	char pad_4C4[0xc]; // 0x4c4(0x0c)
};

// Class Engine.BoxReflectionCaptureSAComponent
// Size: 0x4d0 (Inherited: 0x4d0)
struct UBoxReflectionCaptureSAComponent : UBoxReflectionCaptureComponent {
};

// Class Engine.*1b872b3e18
// Size: 0x4e0 (Inherited: 0x4c0)
struct U*1b872b3e18 : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct U*d9eef9fd9e* *a2ba4a369e; // 0x4c8(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x4d0(0x08)
	char pad_4D8[0x8]; // 0x4d8(0x08)
};

// Class Engine.*5dfb92efa6
// Size: 0x4d0 (Inherited: 0x4c0)
struct U*5dfb92efa6 : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x4c0(0x04)
	float *151d2a13a4; // 0x4c4(0x04)
	struct U*d9eef9fd9e* *a2ba4a369e; // 0x4c8(0x08)
};

// Class Engine.*d8a05784b3
// Size: 0x5e0 (Inherited: 0x500)
struct U*d8a05784b3 : USceneCaptureComponent {
	struct UBoxComponent* *be895638b7; // 0x4f8(0x08)
	float *abce70400f; // 0x500(0x04)
	float *b1be31867a; // 0x504(0x04)
	float *6d0013cb9e; // 0x508(0x04)
	int32 ScreenPercentage; // 0x50c(0x04)
	float *54b774f2a3; // 0x510(0x04)
	float DistanceFromPlaneFadeStart; // 0x514(0x04)
	float DistanceFromPlaneFadeEnd; // 0x518(0x04)
	float *1e8700d7df; // 0x51c(0x04)
	float *8325d6ab90; // 0x520(0x04)
	float *0e1713b670; // 0x524(0x04)
	float *dc983115e2; // 0x528(0x04)
	bool *ace8918fa6; // 0x52c(0x01)
	char pad_535[0xab]; // 0x535(0xab)
};

// Class Engine.SceneCaptureComponentCube
// Size: 0x500 (Inherited: 0x500)
struct USceneCaptureComponentCube : USceneCaptureComponent {
	struct UTextureRenderTargetCube* TextureTarget; // 0x4f8(0x08)

	void CaptureScene(); // Function Engine.SceneCaptureComponentCube.CaptureScene // Final|Native|Public|BlueprintCallable // @ game+0x6700864
};

// Class Engine.*2728e29212
// Size: 0x510 (Inherited: 0x480)
struct U*2728e29212 : USceneComponent {
	char bLiveTexture : 1; // 0x478(0x01)
	char bSupportsDepth : 1; // 0x478(0x01)
	char bNoAlphaChannel : 1; // 0x478(0x01)
	struct UTexture* Texture; // 0x480(0x08)
	struct UTexture* LeftTexture; // 0x488(0x08)
	char bQuadPreserveTextureRatio : 1; // 0x490(0x01)
	char pad_490_4 : 4; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	struct FVector2D QuadSize; // 0x494(0x08)
	struct FBox2D UVRect; // 0x49c(0x14)
	float CylinderRadius; // 0x4b0(0x04)
	float CylinderOverlayArc; // 0x4b4(0x04)
	int32 CylinderHeight; // 0x4b8(0x04)
	enum class EStereoLayerType StereoLayerType; // 0x4bc(0x01)
	enum class *cdea9c548d StereoLayerShape; // 0x4bd(0x01)
	char pad_4BE[0x2]; // 0x4be(0x02)
	int32 Priority; // 0x4c0(0x04)
	char pad_4C4[0x4c]; // 0x4c4(0x4c)

	int32 *3e4703c074(); // Function Engine.*2728e29212.*3e4703c074 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x599f4c8
	struct FBox2D *792e4b4642(); // Function Engine.*2728e29212.*792e4b4642 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6716c00
	struct UTexture* *30275523ed(); // Function Engine.*2728e29212.*30275523ed // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6715ce8
	struct FVector2D *60986d96fa(); // Function Engine.*2728e29212.*60986d96fa // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673b0f8
	int32 SetPriority(); // Function Engine.*2728e29212.SetPriority // Final|Native|Public|BlueprintCallable // @ game+0x673afd0
	struct UTexture* *2b2b617be4(); // Function Engine.*2728e29212.*2b2b617be4 // Final|Native|Public|BlueprintCallable // @ game+0x673dc98
	void *bc507a02b1(); // Function Engine.*2728e29212.*bc507a02b1 // Final|Native|Public|BlueprintCallable // @ game+0x6724878
	struct FBox2D *61ef1f4bc1(); // Function Engine.*2728e29212.*61ef1f4bc1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x673e180
	struct FVector2D *077c580a71(); // Function Engine.*2728e29212.*077c580a71 // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6713594
};

// Class Engine.*fade075c07
// Size: 0x4a0 (Inherited: 0x480)
struct U*fade075c07 : USceneComponent {
	float Strength; // 0x478(0x04)
	float Speed; // 0x47c(0x04)
	float MinGustAmount; // 0x480(0x04)
	float MaxGustAmount; // 0x484(0x04)
	float Radius; // 0x488(0x04)
	char bPointWind : 1; // 0x48c(0x01)
	char pad_494_1 : 7; // 0x494(0x01)
	char pad_495[0xb]; // 0x495(0x0b)

	float *3344bc1128(); // Function Engine.*fade075c07.*3344bc1128 // Final|Native|Public|BlueprintCallable // @ game+0x673cee4
	float *83f0e18b3a(); // Function Engine.*fade075c07.*83f0e18b3a // Final|Native|Public|BlueprintCallable // @ game+0x673942c
	float SetSpeed(); // Function Engine.*fade075c07.SetSpeed // Final|Native|Public|BlueprintCallable // @ game+0x673bf3c
	float *0320c8cb04(); // Function Engine.*fade075c07.*0320c8cb04 // Final|Native|Public|BlueprintCallable // @ game+0x6739618
	float SetRadius(); // Function Engine.*fade075c07.SetRadius // Final|Native|Public|BlueprintCallable // @ game+0x673b1ac
	enum class EWindSourceType *90da61da39(); // Function Engine.*fade075c07.*90da61da39 // Final|Native|Public|BlueprintCallable // @ game+0x673f364
};

// Class Engine.*c4ac2e8cf8
// Size: 0x480 (Inherited: 0x480)
struct U*c4ac2e8cf8 : USceneComponent {
	float *5a96d3e49f; // 0x478(0x04)
	float *47edc7c293; // 0x47c(0x04)
};

// Class Engine.TimelineComponent
// Size: 0x2f0 (Inherited: 0x200)
struct UTimelineComponent : UActorComponent {
	struct FTimeline *db68699a3c; // 0x200(0xe0)
	char *07c46bc655 : 1; // 0x2e0(0x01)
	char pad_2E0_1 : 7; // 0x2e0(0x01)
	char pad_2E1[0xf]; // 0x2e1(0x0f)

	void Play(); // Function Engine.TimelineComponent.Play // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6729008
	float SetPlayRate(); // Function Engine.TimelineComponent.SetPlayRate // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x673a6a8
	void Stop(); // Function Engine.TimelineComponent.Stop // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6746398
	void OnRep_Timeline(); // Function Engine.TimelineComponent.OnRep_Timeline // Final|Native|Public // @ game+0x6728314
	bool IsPlaying(); // Function Engine.TimelineComponent.IsPlaying // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x671b23c
	void PlayFromStart(); // Function Engine.TimelineComponent.PlayFromStart // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0xda2520
	bool *b3b28e404f(); // Function Engine.TimelineComponent.*b3b28e404f // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x671b648
	bool SetLooping(); // Function Engine.TimelineComponent.SetLooping // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6739304
	float SetNewTime(); // Function Engine.TimelineComponent.SetNewTime // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6739adc
	struct FName SetFloatCurve(); // Function Engine.TimelineComponent.SetFloatCurve // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x6735fe0
	enum class *76dbde8383 *42e067d7db(); // Function Engine.TimelineComponent.*42e067d7db // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x673dde8
	struct FName SetLinearColorCurve(); // Function Engine.TimelineComponent.SetLinearColorCurve // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x67384c0
	float *dacf6a71d1(); // Function Engine.TimelineComponent.*dacf6a71d1 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6715f64
	void Reverse(); // Function Engine.TimelineComponent.Reverse // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x672e3b8
	bool *5d4c4eb5e9(); // Function Engine.TimelineComponent.*5d4c4eb5e9 // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x673720c
	void ReverseFromEnd(); // Function Engine.TimelineComponent.ReverseFromEnd // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x672e3e8
	bool SetPlaybackPosition(); // Function Engine.TimelineComponent.SetPlaybackPosition // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x673a740
	bool *238baa36fa(); // Function Engine.TimelineComponent.*238baa36fa // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x670f884
	struct FName SetVectorCurve(); // Function Engine.TimelineComponent.SetVectorCurve // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x673e5f8
	bool IsLooping(); // Function Engine.TimelineComponent.IsLooping // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x671b138
	float *65ef202f2e(); // Function Engine.TimelineComponent.*65ef202f2e // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6712cd0
	float *4ef87ec3bf(); // Function Engine.TimelineComponent.*4ef87ec3bf // Final|RequiredAPI|Native|Public|BlueprintCallable // @ game+0x673dd38
	float GetPlayRate(); // Function Engine.TimelineComponent.GetPlayRate // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6712cb8
};

// Class Engine.AnimComposite
// Size: 0xb8 (Inherited: 0xa8)
struct UAnimComposite : U*49816339d8 {
	struct FAnimTrack *46e3e6d855; // 0xa8(0x10)
};

// Class Engine.AnimSequence
// Size: 0x1a8 (Inherited: 0xa8)
struct UAnimSequence : UAnimSequenceBase {
	int32 NumFrames; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct F*801b1a13da> *7f3f7b21d0; // 0xb0(0x10)
	char pad_C0[0x98]; // 0xc0(0x98)
	enum class EAdditiveAnimationType *bfa7c546a9; // 0x158(0x01)
	enum class *2578c2f9db *2ac243b413; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	struct UAnimSequence* *f75f76283e; // 0x160(0x08)
	int32 *ea78fccc59; // 0x168(0x04)
	int32 *14234a2d61; // 0x16c(0x04)
	struct FName RetargetSource; // 0x170(0x08)
	enum class EAnimInterpolationType Interpolation; // 0x178(0x01)
	bool *51ca393346; // 0x179(0x01)
	bool *7d8ff5ad14; // 0x17a(0x01)
	enum class ERootMotionRootLock *953eeb03a1; // 0x17b(0x01)
	bool *ea2aea189c; // 0x17c(0x01)
	bool *7098fe8a01; // 0x17d(0x01)
	char pad_17E[0x2]; // 0x17e(0x02)
	struct TArray<struct F*47de61c745> AuthoredSyncMarkers; // 0x180(0x10)
	char pad_190[0x18]; // 0x190(0x18)
};

// Class Engine.BlendSpaceBase
// Size: 0x148 (Inherited: 0x80)
struct UBlendSpaceBase : UAnimationAsset {
	char pad_80[0x8]; // 0x80(0x08)
	bool *a6dafe092b; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float AnimLength; // 0x8c(0x04)
	struct TArray<struct F*1de80caba8> *3a62a615bf; // 0x90(0x10)
	struct FInterpolationParameter *d210aa6474[0x03]; // 0xa0(0x18)
	float *12ece53955; // 0xb8(0x04)
	enum class ENotifyTriggerMode *b40c31530c; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	int32 *fdd49022ff; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct FBlendSample> SampleData; // 0xc8(0x10)
	struct TArray<struct F*9c9496e2c8> *554a0887a0; // 0xd8(0x10)
	struct FBlendParameter *45cde735cd[0x03]; // 0xe8(0x60)
};

// Class Engine.BlendSpace
// Size: 0x150 (Inherited: 0x148)
struct UBlendSpace : UBlendSpaceBase {
	enum class *da3800e75b *ac24bdd42e; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class Engine.AimOffsetBlendSpace
// Size: 0x150 (Inherited: 0x150)
struct UAimOffsetBlendSpace : UBlendSpace {
};

// Class Engine.BlendSpace1D
// Size: 0x150 (Inherited: 0x148)
struct UBlendSpace1D : UBlendSpaceBase {
	bool *b7972f4803; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class Engine.AimOffsetBlendSpace1D
// Size: 0x150 (Inherited: 0x150)
struct UAimOffsetBlendSpace1D : UBlendSpace1D {
};

// Class Engine.PoseAsset
// Size: 0x190 (Inherited: 0x80)
struct UPoseAsset : UAnimationAsset {
	struct F*3550fb1985 *b257f27985; // 0x80(0x90)
	bool *da13ff479d; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	int32 *ded94b4f62; // 0x114(0x04)
	struct FName RetargetSource; // 0x118(0x08)
	char pad_120[0x70]; // 0x120(0x70)
};

// Class Engine.*24c623114b
// Size: 0x30 (Inherited: 0x30)
struct U*24c623114b : UObject {
};

// Class Engine.*d3b7e75771
// Size: 0x30 (Inherited: 0x30)
struct U*d3b7e75771 : UInterface {
};

// Class Engine.AnimClassData
// Size: 0xa0 (Inherited: 0x30)
struct UAnimClassData : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct F*45829eece0> *073aef8165; // 0x38(0x10)
	struct USkeleton* TargetSkeleton; // 0x48(0x08)
	struct TArray<struct FAnimNotifyEvent> *7d5fd86b1a; // 0x50(0x10)
	int32 *e2f868160f; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<int32> *175c30b816; // 0x68(0x10)
	struct UStructProperty* *092064cce8; // 0x78(0x08)
	struct TArray<struct UStructProperty*> *a908f821db; // 0x80(0x10)
	struct TArray<struct FName> *827cd75a21; // 0x90(0x10)
};

// Class Engine.AnimCompress
// Size: 0x50 (Inherited: 0x30)
struct UAnimCompress : UObject {
	struct FString Description; // 0x30(0x10)
	char *3addc88350 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class AnimationCompressionFormat *9a80dacfb6; // 0x44(0x01)
	enum class AnimationCompressionFormat *e0d7d1e69f; // 0x45(0x01)
	enum class AnimationCompressionFormat *10e9b8feb6; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	float *4806a30e1b; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.AnimCompress_Automatic
// Size: 0x58 (Inherited: 0x50)
struct UAnimCompress_Automatic : UAnimCompress {
	float *9572547448; // 0x50(0x04)
	char *f487aa939a : 1; // 0x54(0x01)
	char *793db5ed79 : 1; // 0x54(0x01)
	char *419115dca2 : 1; // 0x54(0x01)
	char *d528404d04 : 1; // 0x54(0x01)
	char *bf0fef29d2 : 1; // 0x54(0x01)
	char *eff2d9dc8e : 1; // 0x54(0x01)
	char *1d65ebee4a : 1; // 0x54(0x01)
	char pad_54_7 : 1; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.AnimCompress_BitwiseCompressOnly
// Size: 0x50 (Inherited: 0x50)
struct UAnimCompress_BitwiseCompressOnly : UAnimCompress {
};

// Class Engine.AnimCompress_LeastDestructive
// Size: 0x50 (Inherited: 0x50)
struct UAnimCompress_LeastDestructive : UAnimCompress {
};

// Class Engine.AnimCompress_RemoveEverySecondKey
// Size: 0x58 (Inherited: 0x50)
struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32 *6765b430fc; // 0x50(0x04)
	char *6de4433698 : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.AnimCompress_RemoveLinearKeys
// Size: 0x70 (Inherited: 0x50)
struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float *4e7e90a58a; // 0x50(0x04)
	float *b4f9dacf77; // 0x54(0x04)
	float *152bf357df; // 0x58(0x04)
	float *cc2b7a3274; // 0x5c(0x04)
	float *48b0a2c96f; // 0x60(0x04)
	float *1b49d98f20; // 0x64(0x04)
	float *f7dff64107; // 0x68(0x04)
	char *3b64076063 : 1; // 0x6c(0x01)
	char *19a2f634ba : 1; // 0x6c(0x01)
	char pad_6C_2 : 6; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.AnimCompress_PerTrackCompression
// Size: 0xf0 (Inherited: 0x70)
struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float *09ede9a533; // 0x70(0x04)
	float *695195c270; // 0x74(0x04)
	float *532e9607ce; // 0x78(0x04)
	float *cd96852454; // 0x7c(0x04)
	struct TArray<enum class AnimationCompressionFormat> *a2282dfe90; // 0x80(0x10)
	struct TArray<enum class AnimationCompressionFormat> *19dfdc79bf; // 0x90(0x10)
	struct TArray<enum class AnimationCompressionFormat> *6a5cad6d74; // 0xa0(0x10)
	char bResampleAnimation : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float *1beb5a3dbd; // 0xb4(0x04)
	int32 *0123d09c94; // 0xb8(0x04)
	char *c7d747c464 : 1; // 0xbc(0x01)
	char *fd1fbac176 : 1; // 0xbc(0x01)
	char pad_BC_2 : 6; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	int32 *a609be76f7; // 0xc0(0x04)
	float *8bf244bab1; // 0xc4(0x04)
	float *973caed562; // 0xc8(0x04)
	char *6a9dff058f : 1; // 0xcc(0x01)
	char pad_CC_1 : 7; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float *b577a7122d; // 0xd0(0x04)
	float *9f062e71a0; // 0xd4(0x04)
	float *01dad38508; // 0xd8(0x04)
	float *f5e0d8bbce; // 0xdc(0x04)
	float *2d5936ccc1; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// Class Engine.AnimCompress_RemoveTrivialKeys
// Size: 0x60 (Inherited: 0x50)
struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float *4e7e90a58a; // 0x50(0x04)
	float *b4f9dacf77; // 0x54(0x04)
	float *152bf357df; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.*8937a83f2d
// Size: 0x3c0 (Inherited: 0x3a8)
struct U*8937a83f2d : UAnimInstance {
	struct UAnimationAsset* *8de569ef52; // 0x3a8(0x08)
	DelegateProperty *ab5dbf316b; // 0x3b0(0x10)

	bool SetLooping(); // Function Engine.*8937a83f2d.SetLooping // Final|Native|Public|BlueprintCallable // @ game+0x6739270
	bool *f2431ae4ee(); // Function Engine.*8937a83f2d.*f2431ae4ee // Final|Native|Public|BlueprintCallable // @ game+0x673abac
	struct FVector *c84eab6d5f(); // Function Engine.*8937a83f2d.*c84eab6d5f // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6731754
	void *b234498604(); // Function Engine.*8937a83f2d.*b234498604 // Final|Native|Public|BlueprintCallable // @ game+0x67463b0
	float *417c0f9593(); // Function Engine.*8937a83f2d.*417c0f9593 // Native|Public|BlueprintCallable // @ game+0x6730d70
	float SetPlayRate(); // Function Engine.*8937a83f2d.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x673a610
	float *e619608247(); // Function Engine.*8937a83f2d.*e619608247 // Final|Native|Public|BlueprintCallable // @ game+0x6711728
	float *d3ff4215d8(); // Function Engine.*8937a83f2d.*d3ff4215d8 // Final|Native|Public|BlueprintCallable // @ game+0x672901c
	bool SetPosition(); // Function Engine.*8937a83f2d.SetPosition // Final|Native|Public|BlueprintCallable // @ game+0x673a9e4
	bool *6700a7fa7a(); // Function Engine.*8937a83f2d.*6700a7fa7a // Final|Native|Public|BlueprintCallable // @ game+0x673b3d8
	bool *a0c6f001b2(); // Function Engine.*8937a83f2d.*a0c6f001b2 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x673ae8c
	bool *3a146329aa(); // Function Engine.*8937a83f2d.*3a146329aa // Final|Native|Public|BlueprintCallable // @ game+0x673a950
};

// Class Engine.*6802b428b0
// Size: 0x30 (Inherited: 0x30)
struct U*6802b428b0 : UObject {
};

// Class Engine.AnimNotify_PlaySound
// Size: 0x60 (Inherited: 0x40)
struct UAnimNotify_PlaySound : UAnimNotify {
	struct USoundBase* Sound; // 0x40(0x08)
	float VolumeMultiplier; // 0x48(0x04)
	float PitchMultiplier; // 0x4c(0x04)
	char bFollow : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FName AttachName; // 0x58(0x08)
};

// Class Engine.*071988dd68
// Size: 0x40 (Inherited: 0x40)
struct U*071988dd68 : UAnimNotify {
};

// Class Engine.*a5034e01e1
// Size: 0x38 (Inherited: 0x38)
struct U*a5034e01e1 : UAnimNotifyState {
};

// Class Engine.AnimNotifyState_TimedParticleEffect
// Size: 0x68 (Inherited: 0x38)
struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x38(0x08)
	struct FName SocketName; // 0x40(0x08)
	struct FVector LocationOffset; // 0x48(0x0c)
	struct FRotator RotationOffset; // 0x54(0x0c)
	bool bDestroyAtEnd; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.AnimNotifyState_Trail
// Size: 0x68 (Inherited: 0x38)
struct UAnimNotifyState_Trail : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x38(0x08)
	struct FName FirstSocketName; // 0x40(0x08)
	struct FName SecondSocketName; // 0x48(0x08)
	enum class *bd668c4815 WidthScaleMode; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FName WidthScaleCurve; // 0x58(0x08)
	char bRecycleSpawnedSystems : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	struct UParticleSystem* OverridePSTemplate(); // Function Engine.AnimNotifyState_Trail.OverridePSTemplate // Event|Public|BlueprintEvent|Const // @ game+0x22c9a0
};

// Class Engine.AnimSet
// Size: 0xf8 (Inherited: 0x30)
struct UAnimSet : UObject {
	char *daa67ea92d : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FName> *3b95ca4a4b; // 0x38(0x10)
	struct TArray<struct F*8fad495f16> *79c384b999; // 0x48(0x10)
	struct TArray<bool> *9d120c6c5d; // 0x58(0x10)
	struct TArray<bool> *1f07e765ef; // 0x68(0x10)
	struct TArray<struct FName> *d18e10d214; // 0x78(0x10)
	struct TArray<struct FName> *94b04a8e0e; // 0x88(0x10)
	struct FName *3aa5f15469; // 0x98(0x08)
	struct FName *d34be51861; // 0xa0(0x08)
	char pad_A8[0x50]; // 0xa8(0x50)
};

// Class Engine.AssetImportData
// Size: 0x30 (Inherited: 0x30)
struct UAssetImportData : UObject {
};

// Class Engine.AssetManager
// Size: 0x3a8 (Inherited: 0x30)
struct UAssetManager : UObject {
	char pad_30[0x260]; // 0x30(0x260)
	struct TArray<struct UObject*> *5dc9b97a9a; // 0x290(0x10)
	bool *c477b53874; // 0x2a0(0x01)
	bool *b95684743d; // 0x2a1(0x01)
	bool *89e8c9e89c; // 0x2a2(0x01)
	bool *9622991e69; // 0x2a3(0x01)
	bool *713ec1ccc6; // 0x2a4(0x01)
	bool *4d6c5fb2e6; // 0x2a5(0x01)
	bool *93e907a641; // 0x2a6(0x01)
	char pad_2A7[0x101]; // 0x2a7(0x101)
};

// Class Engine.AssetMappingTable
// Size: 0x40 (Inherited: 0x30)
struct UAssetMappingTable : UObject {
	struct TArray<struct F*6803570612> *d982f01b2e; // 0x30(0x10)
};

// Class Engine.AutomationTestSettings
// Size: 0x328 (Inherited: 0x30)
struct UAutomationTestSettings : UObject {
	struct TArray<struct FString> EngineTestModules; // 0x30(0x10)
	struct TArray<struct FString> EditorTestModules; // 0x40(0x10)
	struct FStringAssetReference AutomationTestmap; // 0x50(0x10)
	struct TArray<struct F*496a9aa88c> EditorPerformanceTestMaps; // 0x60(0x10)
	struct TArray<struct FStringAssetReference> AssetsToOpen; // 0x70(0x10)
	struct F*0edc55cd4d BuildPromotionTest; // 0x80(0x1f0)
	struct F*339961fc7f MaterialEditorPromotionTest; // 0x270(0x30)
	struct F*49cd5ea799 ParticleEditorPromotionTest; // 0x2a0(0x10)
	struct F*9ead6f8116 BlueprintEditorPromotionTest; // 0x2b0(0x30)
	struct TArray<struct FString> TestLevelFolders; // 0x2e0(0x10)
	struct TArray<struct F*9350a62a0b> ExternalTools; // 0x2f0(0x10)
	struct TArray<struct F*f269be5282> ImportExportTestDefinitions; // 0x300(0x10)
	struct TArray<struct F*6940be5c2b> LaunchOnSettings; // 0x310(0x10)
	struct FIntPoint DefaultScreenshotResolution; // 0x320(0x08)
};

// Class Engine.AvoidanceManager
// Size: 0xe8 (Inherited: 0x30)
struct UAvoidanceManager : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	float DefaultTimeToLive; // 0x38(0x04)
	float LockTimeAfterAvoid; // 0x3c(0x04)
	float LockTimeAfterClean; // 0x40(0x04)
	float DeltaTimeToPredict; // 0x44(0x04)
	float ArtificialRadiusExpansion; // 0x48(0x04)
	float TestHeightDifference; // 0x4c(0x04)
	float HeightCheckMargin; // 0x50(0x04)
	char pad_54[0x94]; // 0x54(0x94)

	int32 *c809398121(); // Function Engine.AvoidanceManager.*c809398121 // Final|Native|Public|BlueprintCallable // @ game+0x671251c
	struct FVector *c3e31c4dab(); // Function Engine.AvoidanceManager.*c3e31c4dab // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x670c7a0
	int32 *d078b05a82(); // Function Engine.AvoidanceManager.*d078b05a82 // Final|Native|Public|BlueprintCallable // @ game+0x6712380
	bool *ce0cfb9791(); // Function Engine.AvoidanceManager.*ce0cfb9791 // Final|Native|Public|BlueprintCallable // @ game+0x672d764
	struct FVector *44c60dcee2(); // Function Engine.AvoidanceManager.*44c60dcee2 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x670c850
	struct FVector *4a6c7d2e46(); // Function Engine.AvoidanceManager.*4a6c7d2e46 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x670c678
};

// Class Engine.BlendProfile
// Size: 0x50 (Inherited: 0x30)
struct UBlendProfile : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct USkeleton* *7218ed70b3; // 0x38(0x08)
	struct TArray<struct F*ddbe12c8aa> *2ed327f007; // 0x40(0x10)
};

// Class Engine.BlueprintCore
// Size: 0x58 (Inherited: 0x30)
struct UBlueprintCore : UObject {
	struct UClass* *4ea9ddcf68; // 0x30(0x08)
	struct UClass* GeneratedClass; // 0x38(0x08)
	bool *9cfae3d83b; // 0x40(0x01)
	bool *b359355b17; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	struct FGuid *2eb4dd2b34; // 0x44(0x10)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.Blueprint
// Size: 0x1a0 (Inherited: 0x58)
struct UBlueprint : UBlueprintCore {
	char bRecompileOnLoad : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UClass* ParentClass; // 0x60(0x08)
	struct UObject* *c7c3d3c364; // 0x68(0x08)
	char *45d8714b6d : 1; // 0x70(0x01)
	char *ec5253daf9 : 1; // 0x70(0x01)
	char pad_70_2 : 6; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x78(0x08)
	struct TArray<struct UActorComponent*> *94a4227fa2; // 0x80(0x10)
	struct TArray<struct U*21c8ecb21c*> *073464c770; // 0x90(0x10)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0xa0(0x08)
	enum class EBlueprintType BlueprintType; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	int32 *4eea5dd1dd; // 0xac(0x04)
	char pad_B0[0xe0]; // 0xb0(0xe0)
	bool bNativize; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)
};

// Class Engine.AnimBlueprint
// Size: 0x1c0 (Inherited: 0x1a0)
struct UAnimBlueprint : UBlueprint {
	struct USkeleton* TargetSkeleton; // 0x198(0x08)
	struct TArray<struct F*b2f2f9f58a> Groups; // 0x1a0(0x10)
	bool *c74b442f59; // 0x1b0(0x01)
	bool *9bca890f2f; // 0x1b1(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
};

// Class Engine.LevelScriptBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)
struct ULevelScriptBlueprint : UBlueprint {
};

// Class Engine.*d8124bf5ac
// Size: 0x30 (Inherited: 0x30)
struct U*d8124bf5ac : UBlueprintFunctionLibrary {

	bool *832ac8214b(); // Function Engine.*d8124bf5ac.*832ac8214b // Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6723c40
	bool *00311493ee(); // Function Engine.*d8124bf5ac.*00311493ee // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x6723838
	bool *4bf2500962(); // Function Engine.*d8124bf5ac.*4bf2500962 // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x6724490
	bool *2a0c26fcd4(); // Function Engine.*d8124bf5ac.*2a0c26fcd4 // Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6723e64
	struct TArray<int32> *c38eb62ae5(); // Function Engine.*d8124bf5ac.*c38eb62ae5 // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x67246b0
	int32 *767ac995cd(); // Function Engine.*d8124bf5ac.*767ac995cd // Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6724370
	struct TMap<int32, int32> *dd11c817ff(); // Function Engine.*d8124bf5ac.*dd11c817ff // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x6723b34
	struct TArray<int32> *09fe6f01bd(); // Function Engine.*d8124bf5ac.*09fe6f01bd // Final|Native|Static|Private|HasOutParms|BlueprintCallable // @ game+0x67241a8
};

// Class Engine.*aa1b1772f0
// Size: 0x38 (Inherited: 0x38)
struct U*aa1b1772f0 : U*fc2452f674 {
};

// Class Engine.*c140cbf96a
// Size: 0x38 (Inherited: 0x38)
struct U*c140cbf96a : U*fc2452f674 {
};

// Class Engine.*30e0970edd
// Size: 0x2a0 (Inherited: 0x1f0)
struct U*30e0970edd : UGameInstance {
	struct FMulticastDelegate ApplicationWillDeactivateDelegate; // 0x1f0(0x10)
	struct FMulticastDelegate ApplicationHasReactivatedDelegate; // 0x200(0x10)
	struct FMulticastDelegate ApplicationWillEnterBackgroundDelegate; // 0x210(0x10)
	struct FMulticastDelegate ApplicationHasEnteredForegroundDelegate; // 0x220(0x10)
	struct FMulticastDelegate ApplicationWillTerminateDelegate; // 0x230(0x10)
	struct FMulticastDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x240(0x10)
	struct FMulticastDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x250(0x10)
	struct FMulticastDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x260(0x10)
	struct FMulticastDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x270(0x10)
	struct FMulticastDelegate ApplicationReceivedLocalNotificationDelegate; // 0x280(0x10)
	struct FMulticastDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x290(0x10)

	struct FString PlatformReceivedRemoteNotificationDelegate__DelegateSignature(); // DelegateFunction Engine.*30e0970edd.PlatformReceivedRemoteNotificationDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22c9a0
	void PlatformDelegate__DelegateSignature(); // DelegateFunction Engine.*30e0970edd.PlatformDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22c9a0
	struct TArray<bool> PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*30e0970edd.PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22c9a0
	int32 PlatformRegisteredForUserNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*30e0970edd.PlatformRegisteredForUserNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22c9a0
	struct FString PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*30e0970edd.PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22c9a0
	enum class EScreenOrientation PlatformScreenOrientationChangedDelegate__DelegateSignature(); // DelegateFunction Engine.*30e0970edd.PlatformScreenOrientationChangedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22c9a0
	int32 PlatformReceivedLocalNotificationDelegate__DelegateSignature(); // DelegateFunction Engine.*30e0970edd.PlatformReceivedLocalNotificationDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22c9a0
};

// Class Engine.*385fbb2bb6
// Size: 0x30 (Inherited: 0x30)
struct U*385fbb2bb6 : UBlueprintFunctionLibrary {

	void ClearAllLocalNotifications(); // Function Engine.*385fbb2bb6.ClearAllLocalNotifications // Final|Native|Static|Public|BlueprintCallable // @ game+0x6700e5c
	int32 GetLaunchNotification(); // Function Engine.*385fbb2bb6.GetLaunchNotification // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67114a0
	struct FString ScheduleLocalNotificationAtTime(); // Function Engine.*385fbb2bb6.ScheduleLocalNotificationAtTime // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x672e93c
	struct FString *00ef3415a7(); // Function Engine.*385fbb2bb6.*00ef3415a7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x672ec78
	struct FString CancelLocalNotification(); // Function Engine.*385fbb2bb6.CancelLocalNotification // Final|Native|Static|Public|BlueprintCallable // @ game+0x66fe124
};

// Class Engine.*aa72d8f1e1
// Size: 0x30 (Inherited: 0x30)
struct U*aa72d8f1e1 : UBlueprintFunctionLibrary {

	int32 *af4471a25e(); // Function Engine.*aa72d8f1e1.*af4471a25e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67405c4
	struct TArray<int32> *5c268ca885(); // Function Engine.*aa72d8f1e1.*5c268ca885 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6740acc
	SetProperty *e961d94e4f(); // Function Engine.*aa72d8f1e1.*e961d94e4f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x673fd70
	SetProperty *6119bb8163(); // Function Engine.*aa72d8f1e1.*6119bb8163 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6740c94
	bool *7e79e4f3a3(); // Function Engine.*aa72d8f1e1.*7e79e4f3a3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x673f988
	struct TArray<int32> *cc2cf983dd(); // Function Engine.*aa72d8f1e1.*cc2cf983dd // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x673fba8
	bool *08ca6ee26e(); // Function Engine.*aa72d8f1e1.*08ca6ee26e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x673fe7c
	SetProperty *089cc421fd(); // Function Engine.*aa72d8f1e1.*089cc421fd // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6740330
	struct TArray<int32> *13515a4981(); // Function Engine.*aa72d8f1e1.*13515a4981 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6740904
	bool *66abdff1f0(); // Function Engine.*aa72d8f1e1.*66abdff1f0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67406e4
	SetProperty *d98d6f87b6(); // Function Engine.*aa72d8f1e1.*d98d6f87b6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x674009c
};

// Class Engine.*e3fa32252a
// Size: 0x30 (Inherited: 0x30)
struct U*e3fa32252a : UBlueprintFunctionLibrary {

	bool *e094f8fdbd(); // Function Engine.*e3fa32252a.*e094f8fdbd // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x670df68
	struct FString *aad14366a7(); // Function Engine.*e3fa32252a.*aad14366a7 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6708ce4
	struct TArray<struct FName> *b00ea1be36(); // Function Engine.*e3fa32252a.*b00ea1be36 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x670e394
};

// Class Engine.*dfbb1c63f5
// Size: 0x30 (Inherited: 0x30)
struct U*dfbb1c63f5 : UBlueprintFunctionLibrary {
};

// Class Engine.CollisionProfile
// Size: 0x160 (Inherited: 0x40)
struct UCollisionProfile : U*76e94c1d7f {
	struct TArray<struct F*c2196d8fab> Profiles; // 0x40(0x10)
	struct TArray<struct F*09bb7de291> DefaultChannelResponses; // 0x50(0x10)
	struct TArray<struct FCustomProfile> EditProfiles; // 0x60(0x10)
	struct TArray<struct FRedirector> ProfileRedirects; // 0x70(0x10)
	struct TArray<struct FRedirector> CollisionChannelRedirects; // 0x80(0x10)
	char pad_90[0xd0]; // 0x90(0xd0)
};

// Class Engine.KismetSystemLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetSystemLibrary : UBlueprintFunctionLibrary {

	bool *602ffff373(); // Function Engine.KismetSystemLibrary.*602ffff373 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc12fbc
	bool *8635eb1c59(); // Function Engine.KismetSystemLibrary.*8635eb1c59 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671b668
	struct FString *165d50a172(); // Function Engine.KismetSystemLibrary.*165d50a172 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6716c24
	float *8a6c6b1f6d(); // Function Engine.KismetSystemLibrary.*8a6c6b1f6d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6706d88
	struct UObject* *be60408612(); // Function Engine.KismetSystemLibrary.*be60408612 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6703034
	float PrintString(); // Function Engine.KismetSystemLibrary.PrintString // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x4f042c
	bool SphereTraceMultiByProfile(); // Function Engine.KismetSystemLibrary.SphereTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67448f0
	struct FString *ce5290140b(); // Function Engine.KismetSystemLibrary.*ce5290140b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670f128
	void *20814a0c88(); // Function Engine.KismetSystemLibrary.*20814a0c88 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67013f0
	float *f208f1f218(); // Function Engine.KismetSystemLibrary.*f208f1f218 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671c12c
	DelegateProperty *5d9536dbc1(); // Function Engine.KismetSystemLibrary.*5d9536dbc1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x671cf3c
	struct FText *920a2b09c5(); // Function Engine.KismetSystemLibrary.*920a2b09c5 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x673f408
	struct F*2ef3a887d0 *566b2406a4(); // Function Engine.KismetSystemLibrary.*566b2406a4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x671c6d4
	struct F*2ef3a887d0 K2_SetTimer(); // Function Engine.KismetSystemLibrary.K2_SetTimer // Final|Native|Static|Public|BlueprintCallable // @ game+0x671d1cc
	void *47874536ee(); // Function Engine.KismetSystemLibrary.*47874536ee // Final|Native|Static|Public|BlueprintCallable // @ game+0xbdd69c
	bool BoxOverlapComponents(); // Function Engine.KismetSystemLibrary.BoxOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fa514
	float DrawDebugCone(); // Function Engine.KismetSystemLibrary.DrawDebugCone // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6706674
	void ForceCloseAdBanner(); // Function Engine.KismetSystemLibrary.ForceCloseAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x670b2a8
	float *038aa318eb(); // Function Engine.KismetSystemLibrary.*038aa318eb // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6707b58
	struct FLinearColor *2ff5a18a00(); // Function Engine.KismetSystemLibrary.*2ff5a18a00 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67385e4
	bool BoxTraceMulti(); // Function Engine.KismetSystemLibrary.BoxTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fa83c
	bool *f9a04f0d74(); // Function Engine.KismetSystemLibrary.*f9a04f0d74 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671acc8
	struct FName *28349543ea(); // Function Engine.KismetSystemLibrary.*28349543ea // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xd7108c
	struct UClass* *001e866e45(); // Function Engine.KismetSystemLibrary.*001e866e45 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67311d8
	float *e0f993a4d3(); // Function Engine.KismetSystemLibrary.*e0f993a4d3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671c544
	bool *0e88a7833c(); // Function Engine.KismetSystemLibrary.*0e88a7833c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671cd78
	bool SphereOverlapComponents(); // Function Engine.KismetSystemLibrary.SphereOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6744108
	bool LineTraceMulti(); // Function Engine.KismetSystemLibrary.LineTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x671eba8
	struct UClass* *449bdd87c4(); // Function Engine.KismetSystemLibrary.*449bdd87c4 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67024ec
	bool *bed34a3fc9(); // Function Engine.KismetSystemLibrary.*bed34a3fc9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67058f8
	bool LineTraceSingle(); // Function Engine.KismetSystemLibrary.LineTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x671f978
	bool *82e34a2a9a(); // Function Engine.KismetSystemLibrary.*82e34a2a9a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671d5a8
	bool BoxTraceSingleForObjects(); // Function Engine.KismetSystemLibrary.BoxTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fc358
	bool SphereTraceMultiForObjects(); // Function Engine.KismetSystemLibrary.SphereTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6744dcc
	bool CapsuleTraceMulti(); // Function Engine.KismetSystemLibrary.CapsuleTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fe898
	float *dcb5415cc4(); // Function Engine.KismetSystemLibrary.*dcb5415cc4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671c5f8
	enum class EQuitPreference *e444a96e27(); // Function Engine.KismetSystemLibrary.*e444a96e27 // Final|Native|Static|Public|BlueprintCallable // @ game+0x672b9e0
	struct UClass* OnAssetClassLoaded__DelegateSignature(); // DelegateFunction Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature // Public|Delegate // @ game+0x22c9a0
	float *a9f4e47abe(); // Function Engine.KismetSystemLibrary.*a9f4e47abe // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6707410
	struct F*2ef3a887d0 *dbf26cc22b(); // Function Engine.KismetSystemLibrary.*dbf26cc22b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x671bb48
	float *587ebd77a7(); // Function Engine.KismetSystemLibrary.*587ebd77a7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6707224
	struct FString *89fa3c4cd6(); // Function Engine.KismetSystemLibrary.*89fa3c4cd6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670f4a0
	bool *808c85681b(); // Function Engine.KismetSystemLibrary.*808c85681b // Final|Native|Static|Public|BlueprintCallable // @ game+0x6732210
	struct FString *43a3cdbddb(); // Function Engine.KismetSystemLibrary.*43a3cdbddb // Final|Native|Static|Public|BlueprintCallable // @ game+0x671bc4c
	bool LineTraceSingleByProfile(); // Function Engine.KismetSystemLibrary.LineTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x671fe28
	bool *d224731e80(); // Function Engine.KismetSystemLibrary.*d224731e80 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671d3b4
	struct UObject* OnAssetLoaded__DelegateSignature(); // DelegateFunction Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature // Public|Delegate // @ game+0x22c9a0
	bool ComponentOverlapComponents(); // Function Engine.KismetSystemLibrary.ComponentOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x670171c
	struct F*87ca072a6c *464ee6676e(); // Function Engine.KismetSystemLibrary.*464ee6676e // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6733614
	struct F*badb9cc575 *ed0c04cc62(); // Function Engine.KismetSystemLibrary.*ed0c04cc62 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6725fe0
	bool *05ccedf0d3(); // Function Engine.KismetSystemLibrary.*05ccedf0d3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6702978
	bool CapsuleOverlapComponents(); // Function Engine.KismetSystemLibrary.CapsuleOverlapComponents // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fe53c
	struct FRotator *58f2f324c2(); // Function Engine.KismetSystemLibrary.*58f2f324c2 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x673b5f8
	struct UClass* *e24c54b4f3(); // Function Engine.KismetSystemLibrary.*e24c54b4f3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673313c
	bool LineTraceMultiForObjects(); // Function Engine.KismetSystemLibrary.LineTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x671f4bc
	struct FVector *84ee472a73(); // Function Engine.KismetSystemLibrary.*84ee472a73 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x673e888
	TScriptInterface<struct UInterface> *f72174ae06(); // Function Engine.KismetSystemLibrary.*f72174ae06 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6737cbc
	bool *84c87a20ce(); // Function Engine.KismetSystemLibrary.*84c87a20ce // Final|Native|Static|Public|BlueprintCallable // @ game+0x671af8c
	bool *16550509dc(); // Function Engine.KismetSystemLibrary.*16550509dc // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671cc64
	struct FCollisionProfileName *49a5e37efa(); // Function Engine.KismetSystemLibrary.*49a5e37efa // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6733614
	bool SphereOverlapActors(); // Function Engine.KismetSystemLibrary.SphereOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6743df8
	struct FName *18146a1858(); // Function Engine.KismetSystemLibrary.*18146a1858 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67398d0
	bool *6df21d83bc(); // Function Engine.KismetSystemLibrary.*6df21d83bc // Final|Native|Static|Public|BlueprintCallable // @ game+0x5948b10
	struct FVector GetActorBounds(); // Function Engine.KismetSystemLibrary.GetActorBounds // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670baac
	DelegateProperty *1bd8ca4aa9(); // Function Engine.KismetSystemLibrary.*1bd8ca4aa9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x671d7f4
	bool SphereTraceSingleForObjects(); // Function Engine.KismetSystemLibrary.SphereTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6745cc0
	bool CapsuleTraceMultiForObjects(); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66ff2e0
	float *c75111c5c8(); // Function Engine.KismetSystemLibrary.*c75111c5c8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4ecf18
	struct FDebugFloatHistory *bb430c32d6(); // Function Engine.KismetSystemLibrary.*bb430c32d6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66f3bb0
	struct F*2ef3a887d0 *b0b113cf35(); // Function Engine.KismetSystemLibrary.*b0b113cf35 // Final|Native|Static|Public|BlueprintCallable // @ game+0x671cfe0
	struct FString GetPathName(); // Function Engine.KismetSystemLibrary.GetPathName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6712ad0
	int32 *ae7986d0ae(); // Function Engine.KismetSystemLibrary.*ae7986d0ae // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670bd84
	struct F*badb9cc575 *f17b14a9f0(); // Function Engine.KismetSystemLibrary.*f17b14a9f0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6720a74
	float *6a64e758e6(); // Function Engine.KismetSystemLibrary.*6a64e758e6 // Final|Native|Static|Public|BlueprintCallable // @ game+0xbb66a8
	bool SphereTraceSingleByProfile(); // Function Engine.KismetSystemLibrary.SphereTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67457c8
	int32 *ac99e7cd01(); // Function Engine.KismetSystemLibrary.*ac99e7cd01 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6720fc8
	struct FString GetDisplayName(); // Function Engine.KismetSystemLibrary.GetDisplayName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670ee84
	bool CapsuleTraceSingleByProfile(); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66ffda0
	struct FString *ceceaa19f2(); // Function Engine.KismetSystemLibrary.*ceceaa19f2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670d490
	int32 *e1b6764450(); // Function Engine.KismetSystemLibrary.*e1b6764450 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5948b10
	struct FString ShowPlatformSpecificLeaderboardScreen(); // Function Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen // Final|Native|Static|Public|BlueprintCallable // @ game+0x674121c
	bool IsValid(); // Function Engine.KismetSystemLibrary.IsValid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x9fb9d4
	struct UObject* FlushPersistentDebugLines(); // Function Engine.KismetSystemLibrary.FlushPersistentDebugLines // Final|Native|Static|Public|BlueprintCallable // @ game+0x5908f50
	int32 *d66858ad8b(); // Function Engine.KismetSystemLibrary.*d66858ad8b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6713c00
	struct FString *d9daf9a450(); // Function Engine.KismetSystemLibrary.*d9daf9a450 // Final|Native|Static|Public|BlueprintCallable // @ game+0x671cdfc
	struct FString *ae95121d71(); // Function Engine.KismetSystemLibrary.*ae95121d71 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6712c08
	struct F*2ef3a887d0 *8058ecb40b(); // Function Engine.KismetSystemLibrary.*8058ecb40b // Final|Native|Static|Public|BlueprintCallable // @ game+0x671be30
	struct F*badb9cc575 *355cc24921(); // Function Engine.KismetSystemLibrary.*355cc24921 // Final|Native|Static|Public|BlueprintCallable // @ game+0x672e278
	bool *b4edc3a6df(); // Function Engine.KismetSystemLibrary.*b4edc3a6df // Final|Native|Static|Public|BlueprintCallable // @ game+0x6732808
	bool *ca21cd2f25(); // Function Engine.KismetSystemLibrary.*ca21cd2f25 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6706388
	struct FString *7fb97d8f63(); // Function Engine.KismetSystemLibrary.*7fb97d8f63 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673d01c
	bool *c0f7785b53(); // Function Engine.KismetSystemLibrary.*c0f7785b53 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671ad4c
	float *b2e99b0eab(); // Function Engine.KismetSystemLibrary.*b2e99b0eab // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x672b124
	struct FString *81afc56f73(); // Function Engine.KismetSystemLibrary.*81afc56f73 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670e938
	bool SphereTraceSingle(); // Function Engine.KismetSystemLibrary.SphereTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67452d0
	bool BoxTraceMultiForObjects(); // Function Engine.KismetSystemLibrary.BoxTraceMultiForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fb308
	bool *8ffd20cc4e(); // Function Engine.KismetSystemLibrary.*8ffd20cc4e // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x670d8e8
	bool BoxTraceMultiByProfile(); // Function Engine.KismetSystemLibrary.BoxTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fada4
	bool CapsuleTraceMultiByProfile(); // Function Engine.KismetSystemLibrary.CapsuleTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fedc8
	bool *045ae4e412(); // Function Engine.KismetSystemLibrary.*045ae4e412 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671cbb0
	bool *db3d2ddabe(); // Function Engine.KismetSystemLibrary.*db3d2ddabe // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc12fbc
	float *ccbd275798(); // Function Engine.KismetSystemLibrary.*ccbd275798 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6706fac
	struct FString PrintWarning(); // Function Engine.KismetSystemLibrary.PrintWarning // Final|Native|Static|Public|BlueprintCallable // @ game+0x59661dc
	struct FString *05f3b67ed1(); // Function Engine.KismetSystemLibrary.*05f3b67ed1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x671d6b4
	struct FString *18c763e685(); // Function Engine.KismetSystemLibrary.*18c763e685 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6712538
	bool BoxTraceSingleByProfile(); // Function Engine.KismetSystemLibrary.BoxTraceSingleByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fbdf8
	struct FString *035e049346(); // Function Engine.KismetSystemLibrary.*035e049346 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670e764
	float *c838206a16(); // Function Engine.KismetSystemLibrary.*c838206a16 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671c270
	float *d7b4df07fd(); // Function Engine.KismetSystemLibrary.*d7b4df07fd // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x670601c
	bool *5b095721bd(); // Function Engine.KismetSystemLibrary.*5b095721bd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671c95c
	struct F*2ef3a887d0 *324576f467(); // Function Engine.KismetSystemLibrary.*324576f467 // Final|Native|Static|Public|BlueprintCallable // @ game+0xaa91d8
	bool ShowAdBanner(); // Function Engine.KismetSystemLibrary.ShowAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x6740f28
	bool BoxTraceSingle(); // Function Engine.KismetSystemLibrary.BoxTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fb894
	bool BoxOverlapActors(); // Function Engine.KismetSystemLibrary.BoxOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fa1ec
	bool LineTraceSingleForObjects(); // Function Engine.KismetSystemLibrary.LineTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67202cc
	DelegateProperty *3f258a4a72(); // Function Engine.KismetSystemLibrary.*3f258a4a72 // Final|Native|Static|Public|BlueprintCallable // @ game+0x671bd8c
	struct UObject* *15106e0585(); // Function Engine.KismetSystemLibrary.*15106e0585 // Final|Native|Static|Public|BlueprintCallable // @ game+0xc55a7c
	struct F*badb9cc575 Delay(); // Function Engine.KismetSystemLibrary.Delay // Final|Native|Static|Public|BlueprintCallable // @ game+0x4ef9d0
	void StackTrace(); // Function Engine.KismetSystemLibrary.StackTrace // Final|Native|Static|Public|BlueprintCallable // @ game+0x6746334
	struct FString *9b763844cc(); // Function Engine.KismetSystemLibrary.*9b763844cc // Final|Native|Static|Public|BlueprintCallable // @ game+0x67118b0
	int32 *69eef98a1c(); // Function Engine.KismetSystemLibrary.*69eef98a1c // Final|Native|Static|Public|BlueprintCallable // @ game+0x6737898
	struct TArray<struct AActor*> *3bd656cf5f(); // Function Engine.KismetSystemLibrary.*3bd656cf5f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x670bbf0
	float *6e649c7699(); // Function Engine.KismetSystemLibrary.*6e649c7699 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x670695c
	int32 *e98d1ec086(); // Function Engine.KismetSystemLibrary.*e98d1ec086 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6712164
	bool *fb59516cd6(); // Function Engine.KismetSystemLibrary.*fb59516cd6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671c768
	float *90b9d221f7(); // Function Engine.KismetSystemLibrary.*90b9d221f7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6705bf0
	bool ComponentOverlapActors(); // Function Engine.KismetSystemLibrary.ComponentOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6701404
	float *2651fa0824(); // Function Engine.KismetSystemLibrary.*2651fa0824 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670f59c
	struct UObject* *888f459f71(); // Function Engine.KismetSystemLibrary.*888f459f71 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5908f50
	bool SphereTraceMulti(); // Function Engine.KismetSystemLibrary.SphereTraceMulti // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6744418
	bool *2f038c5bac(); // Function Engine.KismetSystemLibrary.*2f038c5bac // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671b0a8
	float *fc3d1e057a(); // Function Engine.KismetSystemLibrary.*fc3d1e057a // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67077b4
	struct APlayerController* *a349f3249f(); // Function Engine.KismetSystemLibrary.*a349f3249f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6708f48
	struct FText *1f6a2dfc8b(); // Function Engine.KismetSystemLibrary.*1f6a2dfc8b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x7eaff8
	struct F*2ef3a887d0 *3ce3b618a7(); // Function Engine.KismetSystemLibrary.*3ce3b618a7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x671d898
	struct FString *1a10f57532(); // Function Engine.KismetSystemLibrary.*1a10f57532 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6722104
	bool CapsuleTraceSingleForObjects(); // Function Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67002ec
	float *f138f7d733(); // Function Engine.KismetSystemLibrary.*f138f7d733 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6706b2c
	void *a001cb6915(); // Function Engine.KismetSystemLibrary.*a001cb6915 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6741018
	struct UObject* *890ed1dc14(); // Function Engine.KismetSystemLibrary.*890ed1dc14 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67037e8
	void *00faafee11(); // Function Engine.KismetSystemLibrary.*00faafee11 // Final|Native|Static|Public|BlueprintCallable // @ game+0xbdd69c
	bool *f1f07cf313(); // Function Engine.KismetSystemLibrary.*f1f07cf313 // Final|Native|Static|Public|BlueprintCallable // @ game+0x671afd4
	struct FString LaunchURL(); // Function Engine.KismetSystemLibrary.LaunchURL // Final|Native|Static|Public|BlueprintCallable // @ game+0x671df38
	float *aaf922f8b5(); // Function Engine.KismetSystemLibrary.*aaf922f8b5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x670612c
	struct F*badb9cc575 *21b802f111(); // Function Engine.KismetSystemLibrary.*21b802f111 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6720c90
	struct FTransform *615a66ce7c(); // Function Engine.KismetSystemLibrary.*615a66ce7c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x673df10
	int32 *a46dea3647(); // Function Engine.KismetSystemLibrary.*a46dea3647 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6712144
	bool *b14382ed7b(); // Function Engine.KismetSystemLibrary.*b14382ed7b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6715480
	float *cfd79b400b(); // Function Engine.KismetSystemLibrary.*cfd79b400b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670d5f8
	bool *33bc3256ea(); // Function Engine.KismetSystemLibrary.*33bc3256ea // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671d4f4
	struct UObject* *644f523a6d(); // Function Engine.KismetSystemLibrary.*644f523a6d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67025ec
	struct FString *40d1a39194(); // Function Engine.KismetSystemLibrary.*40d1a39194 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67118b0
	struct UObject* *9ee3a9c31e(); // Function Engine.KismetSystemLibrary.*9ee3a9c31e // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67313bc
	void HideAdBanner(); // Function Engine.KismetSystemLibrary.HideAdBanner // Final|Native|Static|Public|BlueprintCallable // @ game+0x6719508
	int32 *049f040f18(); // Function Engine.KismetSystemLibrary.*049f040f18 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x672207c
	float *9fb50d5ba3(); // Function Engine.KismetSystemLibrary.*9fb50d5ba3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6707940
	bool *de4795df35(); // Function Engine.KismetSystemLibrary.*de4795df35 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671b934
	bool *33d3181d53(); // Function Engine.KismetSystemLibrary.*33d3181d53 // Final|Native|Static|Public|BlueprintCallable // @ game+0x5948b10
	bool *a1d0d6d581(); // Function Engine.KismetSystemLibrary.*a1d0d6d581 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671ca70
	float DrawDebugPlane(); // Function Engine.KismetSystemLibrary.DrawDebugPlane // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67075e0
	float *e1c70800e6(); // Function Engine.KismetSystemLibrary.*e1c70800e6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671c324
	int32 *a35a26adee(); // Function Engine.KismetSystemLibrary.*a35a26adee // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6713bdc
	struct F*fc9e379a45 *04a278f17b(); // Function Engine.KismetSystemLibrary.*04a278f17b // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x673e4fc
	struct FString *a8a1dcedc0(); // Function Engine.KismetSystemLibrary.*a8a1dcedc0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670f2fc
	bool *a6005c45a1(); // Function Engine.KismetSystemLibrary.*a6005c45a1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671c8a8
	struct FString *17a88a0d7f(); // Function Engine.KismetSystemLibrary.*17a88a0d7f // Final|Native|Static|Public|BlueprintCallable // @ game+0x670d570
	struct APlayerController* *1c3c6796cf(); // Function Engine.KismetSystemLibrary.*1c3c6796cf // Final|Native|Static|Public|BlueprintCallable // @ game+0x674119c
	struct TArray<struct FString> *51d8a3f453(); // Function Engine.KismetSystemLibrary.*51d8a3f453 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6713544
	bool SetSuppressViewportTransitionMessage(); // Function Engine.KismetSystemLibrary.SetSuppressViewportTransitionMessage // Final|Native|Static|Public|BlueprintCallable // @ game+0x673d328
	bool CapsuleOverlapActors(); // Function Engine.KismetSystemLibrary.CapsuleOverlapActors // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66fe1e0
	bool *3be7749b53(); // Function Engine.KismetSystemLibrary.*3be7749b53 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671b710
	float *486eb23cb8(); // Function Engine.KismetSystemLibrary.*486eb23cb8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671c400
	struct FText *2445fe94a4(); // Function Engine.KismetSystemLibrary.*2445fe94a4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6722244
	float *5706106640(); // Function Engine.KismetSystemLibrary.*5706106640 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6705e08
	bool CapsuleTraceSingle(); // Function Engine.KismetSystemLibrary.CapsuleTraceSingle // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66ff850
	bool LineTraceMultiByProfile(); // Function Engine.KismetSystemLibrary.LineTraceMultiByProfile // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x671f02c
	bool *6b6e3ea5d2(); // Function Engine.KismetSystemLibrary.*6b6e3ea5d2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6721ff4
	bool *c23046513c(); // Function Engine.KismetSystemLibrary.*c23046513c // Final|Native|Static|Public|BlueprintCallable // @ game+0x66fe05c
	float *179f0f0b23(); // Function Engine.KismetSystemLibrary.*179f0f0b23 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6706674
};

// Class Engine.GameplayStatics
// Size: 0x30 (Inherited: 0x30)
struct UGameplayStatics : UBlueprintFunctionLibrary {

	struct APlayerController* *2e69ffc10f(); // Function Engine.GameplayStatics.*2e69ffc10f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6703994
	struct USoundMix* PushSoundMixModifier(); // Function Engine.GameplayStatics.PushSoundMixModifier // Final|Native|Static|Public|BlueprintCallable // @ game+0x672b8bc
	int32 *268c90a3d1(); // Function Engine.GameplayStatics.*268c90a3d1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6718648
	int32 *6a7f5521d5(); // Function Engine.GameplayStatics.*6a7f5521d5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6711154
	struct TArray<struct AActor*> GetAllActorsOfClass(); // Function Engine.GameplayStatics.GetAllActorsOfClass // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xc67ae0
	struct UDecalComponent* SpawnDecalAttached(); // Function Engine.GameplayStatics.SpawnDecalAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67418ec
	struct FString OpenLevel(); // Function Engine.GameplayStatics.OpenLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x6728358
	struct AActor* FinishSpawningActor(); // Function Engine.GameplayStatics.FinishSpawningActor // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x8305a4
	struct AActor* BeginSpawningActorFromClass(); // Function Engine.GameplayStatics.BeginSpawningActorFromClass // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f890c
	bool *fa6473055e(); // Function Engine.GameplayStatics.*fa6473055e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6736a24
	struct UParticleSystemComponent* SpawnEmitterAttached(); // Function Engine.GameplayStatics.SpawnEmitterAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67428a8
	float *e7b535213d(); // Function Engine.GameplayStatics.*e7b535213d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x670b6c0
	float *c1de65e538(); // Function Engine.GameplayStatics.*c1de65e538 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670f638
	struct UClass* *f5b2c55402(); // Function Engine.GameplayStatics.*f5b2c55402 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6712460
	struct UAudioComponent* *d0c8ce14e8(); // Function Engine.GameplayStatics.*d0c8ce14e8 // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6741bcc
	struct APawn* GetPlayerPawn(); // Function Engine.GameplayStatics.GetPlayerPawn // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc554b4
	void *9be43ca0b3(); // Function Engine.GameplayStatics.*9be43ca0b3 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66fe110
	struct ACharacter* *22e1e03c58(); // Function Engine.GameplayStatics.*22e1e03c58 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6712ce8
	bool *fd96551f9b(); // Function Engine.GameplayStatics.*fd96551f9b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6718fb0
	struct TArray<struct AActor*> *d9285c5924(); // Function Engine.GameplayStatics.*d9285c5924 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x670bf2c
	float ClearSoundMixClassOverride(); // Function Engine.GameplayStatics.ClearSoundMixClassOverride // Final|Native|Static|Public|BlueprintCallable // @ game+0x670108c
	bool *220d31dfe0(); // Function Engine.GameplayStatics.*220d31dfe0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x672a1f0
	struct APlayerController* *8b5701c55f(); // Function Engine.GameplayStatics.*8b5701c55f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6712dc0
	struct UAudioComponent* SpawnDialogueAttached(); // Function Engine.GameplayStatics.SpawnDialogueAttached // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6742224
	float SetGlobalPitchModulation(); // Function Engine.GameplayStatics.SetGlobalPitchModulation // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6736e2c
	struct FVector *69c6ea7488(); // Function Engine.GameplayStatics.*69c6ea7488 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x670b800
	struct FVector *4f5847a80f(); // Function Engine.GameplayStatics.*4f5847a80f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672d538
	enum class EPhysicalSurface *6eed6f1ffd(); // Function Engine.GameplayStatics.*6eed6f1ffd // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6715544
	struct UObject* *e64dd4a5ac(); // Function Engine.GameplayStatics.*e64dd4a5ac // Final|Native|Static|Public|BlueprintCallable // @ game+0x670b228
	float *292798350d(); // Function Engine.GameplayStatics.*292798350d // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f637c
	struct AActor* *f8ded2558f(); // Function Engine.GameplayStatics.*f8ded2558f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0xc054f8
	bool *33f31db64b(); // Function Engine.GameplayStatics.*33f31db64b // Final|Native|Static|Public|BlueprintCallable // @ game+0x66f715c
	struct USoundMix* PopSoundMixModifier(); // Function Engine.GameplayStatics.PopSoundMixModifier // Final|Native|Static|Public|BlueprintCallable // @ game+0x672b004
	struct TArray<struct AActor*> *b17fc98e95(); // Function Engine.GameplayStatics.*b17fc98e95 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x670bdcc
	int32 *15d03c0615(); // Function Engine.GameplayStatics.*15d03c0615 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6712e98
	bool *68f1978907(); // Function Engine.GameplayStatics.*68f1978907 // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f69f0
	struct FHitResult MakeHitResult(); // Function Engine.GameplayStatics.MakeHitResult // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6721a70
	struct AGameStateBase* GetGameState(); // Function Engine.GameplayStatics.GetGameState // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xd71140
	float *1a67837a39(); // Function Engine.GameplayStatics.*1a67837a39 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66f3784
	struct FString *f14ae616a6(); // Function Engine.GameplayStatics.*f14ae616a6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67287f4
	bool *9a99527734(); // Function Engine.GameplayStatics.*9a99527734 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671addc
	struct FVector *6808ed15ff(); // Function Engine.GameplayStatics.*6808ed15ff // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672d644
	bool *a18469d3f1(); // Function Engine.GameplayStatics.*a18469d3f1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x670805c
	float *da31648dc5(); // Function Engine.GameplayStatics.*da31648dc5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670c5dc
	struct UForceFeedbackComponent* *c7b0e3192a(); // Function Engine.GameplayStatics.*c7b0e3192a // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6742e54
	struct FString *38b336b91a(); // Function Engine.GameplayStatics.*38b336b91a // Final|Native|Static|Public|BlueprintCallable // @ game+0x670db84
	struct UAudioComponent* *df52015b7d(); // Function Engine.GameplayStatics.*df52015b7d // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6743610
	float *ed2fd0a2b0(); // Function Engine.GameplayStatics.*ed2fd0a2b0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4efba4
	struct UAudioComponent* SpawnSoundAttached(); // Function Engine.GameplayStatics.SpawnSoundAttached // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6743984
	bool *6ce67a7862(); // Function Engine.GameplayStatics.*6ce67a7862 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x66f7020
	struct AActor* BeginSpawningActorFromBlueprint(); // Function Engine.GameplayStatics.BeginSpawningActorFromBlueprint // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f873c
	float *44b57af98e(); // Function Engine.GameplayStatics.*44b57af98e // Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x672922c
	bool *7f9a5846e2(); // Function Engine.GameplayStatics.*7f9a5846e2 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673d298
	struct F*badb9cc575 LoadStreamLevel(); // Function Engine.GameplayStatics.LoadStreamLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x6721058
	bool ApplyRadialDamage(); // Function Engine.GameplayStatics.ApplyRadialDamage // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f6630
	bool *949adcbc56(); // Function Engine.GameplayStatics.*949adcbc56 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6709dbc
	struct UAudioComponent* *f10d1575fc(); // Function Engine.GameplayStatics.*f10d1575fc // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6741e70
	struct USoundMix* SetBaseSoundMix(); // Function Engine.GameplayStatics.SetBaseSoundMix // Final|Native|Static|Public|BlueprintCallable // @ game+0x6731638
	bool SetSoundMixClassOverride(); // Function Engine.GameplayStatics.SetSoundMixClassOverride // Final|Native|Static|Public|BlueprintCallable // @ game+0x673bbb4
	float *c6a9c866fe(); // Function Engine.GameplayStatics.*c6a9c866fe // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4efb30
	struct FIntVector *f8a66a3cc9(); // Function Engine.GameplayStatics.*f8a66a3cc9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6717d80
	struct FName *eb7eb5aa12(); // Function Engine.GameplayStatics.*eb7eb5aa12 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6704650
	bool *c156a41ed0(); // Function Engine.GameplayStatics.*c156a41ed0 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6704eb8
	float SetGlobalListenerFocusParameters(); // Function Engine.GameplayStatics.SetGlobalListenerFocusParameters // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6736b30
	struct UAudioComponent* *ef35493838(); // Function Engine.GameplayStatics.*ef35493838 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6743350
	struct USoundConcurrency* *c34d270697(); // Function Engine.GameplayStatics.*c34d270697 // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6729cd4
	struct APlayerCameraManager* GetPlayerCameraManager(); // Function Engine.GameplayStatics.GetPlayerCameraManager // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4efccc
	struct USaveGame* CreateSaveGameObject(); // Function Engine.GameplayStatics.CreateSaveGameObject // Final|Native|Static|Public|BlueprintCallable // @ game+0x6703ab4
	struct FIntVector *daafec2004(); // Function Engine.GameplayStatics.*daafec2004 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x673f5d0
	int32 *9253c3e886(); // Function Engine.GameplayStatics.*9253c3e886 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673a87c
	struct FVector BreakHitResult(); // Function Engine.GameplayStatics.BreakHitResult // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66fcf78
	bool *68b7c56f19(); // Function Engine.GameplayStatics.*68b7c56f19 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66f8f30
	struct USoundAttenuation* *cc8f86d981(); // Function Engine.GameplayStatics.*cc8f86d981 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6729480
	struct USaveGame* CreateSaveGameObjectFromBlueprint(); // Function Engine.GameplayStatics.CreateSaveGameObjectFromBlueprint // Final|Native|Static|Public|BlueprintCallable // @ game+0x6703b44
	struct AGameModeBase* GetGameMode(); // Function Engine.GameplayStatics.GetGameMode // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670f410
	bool RemovePlayer(); // Function Engine.GameplayStatics.RemovePlayer // Final|Native|Static|Public|BlueprintCallable // @ game+0x672dc00
	bool *7d8f06b2af(); // Function Engine.GameplayStatics.*7d8f06b2af // Final|Native|Static|Public|BlueprintCallable // @ game+0x672e754
	struct UDecalComponent* *b3d1330b1d(); // Function Engine.GameplayStatics.*b3d1330b1d // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67416ac
	float *78cda25b7e(); // Function Engine.GameplayStatics.*78cda25b7e // Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable // @ game+0x66f5de8
	float *fdf44d8cd5(); // Function Engine.GameplayStatics.*fdf44d8cd5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6716d18
	struct UObject* ClearSoundMixModifiers(); // Function Engine.GameplayStatics.ClearSoundMixModifiers // Final|Native|Static|Public|BlueprintCallable // @ game+0x67011f4
	struct ULevelStreaming* *3ad6881f56(); // Function Engine.GameplayStatics.*3ad6881f56 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67153a4
	bool *b5c988a52c(); // Function Engine.GameplayStatics.*b5c988a52c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672b730
	struct FString *5853a030db(); // Function Engine.GameplayStatics.*5853a030db // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67112e4
	struct UForceFeedbackComponent* *06c3782d0a(); // Function Engine.GameplayStatics.*06c3782d0a // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6742b24
	struct UGameInstance* *3d5915f3a5(); // Function Engine.GameplayStatics.*3d5915f3a5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670f380
	struct AActor* *83ea15bd2f(); // Function Engine.GameplayStatics.*83ea15bd2f // Final|Native|Static|Public|BlueprintCallable // @ game+0x670f1f0
	struct FVector *02261e4ab3(); // Function Engine.GameplayStatics.*02261e4ab3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x670b8d4
	struct F*badb9cc575 UnloadStreamLevel(); // Function Engine.GameplayStatics.UnloadStreamLevel // Final|Native|Static|Public|BlueprintCallable // @ game+0x6748248
	float SetGlobalTimeDilation(); // Function Engine.GameplayStatics.SetGlobalTimeDilation // Final|Native|Static|Public|BlueprintCallable // @ game+0x6736f44
	float *967018d3a8(); // Function Engine.GameplayStatics.*967018d3a8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6715d94
	struct UReverbEffect* *aa03e9cc3a(); // Function Engine.GameplayStatics.*aa03e9cc3a // Final|Native|Static|Public|BlueprintCallable // @ game+0x670dcc0
	bool Blueprint_PredictProjectilePath_ByObjectType(); // Function Engine.GameplayStatics.Blueprint_PredictProjectilePath_ByObjectType // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f90fc
	bool *92f2951d87(); // Function Engine.GameplayStatics.*92f2951d87 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671927c
	struct USaveGame* *a6b71fff75(); // Function Engine.GameplayStatics.*a6b71fff75 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6720eac
	struct UObject* *759f8101d5(); // Function Engine.GameplayStatics.*759f8101d5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6743274
	struct UAudioComponent* *8205458c2c(); // Function Engine.GameplayStatics.*8205458c2c // Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable // @ game+0x6703bd4
	struct UParticleSystemComponent* *0ca4ba8abe(); // Function Engine.GameplayStatics.*0ca4ba8abe // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x67426d4
	struct USoundConcurrency* *a7563d00a1(); // Function Engine.GameplayStatics.*a7563d00a1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6729ed8
	bool *bd9a338cd7(); // Function Engine.GameplayStatics.*bd9a338cd7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f8b58
	bool *e05e51287a(); // Function Engine.GameplayStatics.*e05e51287a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6746bf8
	bool *b735aec00f(); // Function Engine.GameplayStatics.*b735aec00f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x66f9790
	bool *8a41e08416(); // Function Engine.GameplayStatics.*8a41e08416 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6704d74
	bool *d9415fc6ff(); // Function Engine.GameplayStatics.*d9415fc6ff // Final|Native|Static|Public|BlueprintCallable // @ game+0x67059d0
};

// Class Engine.HeadMountedDisplayFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {

	enum class EHMDTrackingOrigin SetTrackingOrigin(); // Function Engine.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin // Final|Native|Static|Public|BlueprintCallable // @ game+0x673de74
	enum class EOrientPositionSelector *36131e3c7a(); // Function Engine.HeadMountedDisplayFunctionLibrary.*36131e3c7a // Final|Native|Static|Public|BlueprintCallable // @ game+0x672e02c
	struct FVector *f478e3cb24(); // Function Engine.HeadMountedDisplayFunctionLibrary.*f478e3cb24 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67127d0
	bool *2b6e958d8e(); // Function Engine.HeadMountedDisplayFunctionLibrary.*2b6e958d8e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6719414
	bool *e46d80bf6f(); // Function Engine.HeadMountedDisplayFunctionLibrary.*e46d80bf6f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671ae80
	int32 *f1b28911db(); // Function Engine.HeadMountedDisplayFunctionLibrary.*f1b28911db // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6712404
	bool *7b0c5f0fbf(); // Function Engine.HeadMountedDisplayFunctionLibrary.*7b0c5f0fbf // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671aec8
	bool *16bf8c3c9b(); // Function Engine.HeadMountedDisplayFunctionLibrary.*16bf8c3c9b // Final|Native|Static|Public|BlueprintCallable // @ game+0x5948b10
	bool *204ee3810b(); // Function Engine.HeadMountedDisplayFunctionLibrary.*204ee3810b // Final|Native|Static|Public|BlueprintCallable // @ game+0x6707f7c
	bool *9e317a1251(); // Function Engine.HeadMountedDisplayFunctionLibrary.*9e317a1251 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6717594
	float *22f8fa3e22(); // Function Engine.HeadMountedDisplayFunctionLibrary.*22f8fa3e22 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6714e18
	enum class EHMDTrackingOrigin GetTrackingOrigin(); // Function Engine.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6716288
	bool *6f3337f87b(); // Function Engine.HeadMountedDisplayFunctionLibrary.*6f3337f87b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xa85bb0
	float *4cbb3a7684(); // Function Engine.HeadMountedDisplayFunctionLibrary.*4cbb3a7684 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6733254
	float *dac2527c93(); // Function Engine.HeadMountedDisplayFunctionLibrary.*dac2527c93 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67180b0
	struct FName *004be90739(); // Function Engine.HeadMountedDisplayFunctionLibrary.*004be90739 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670f6e0
	float *390a11ad74(); // Function Engine.HeadMountedDisplayFunctionLibrary.*390a11ad74 // Final|Native|Static|Public|BlueprintCallable // @ game+0x673f76c
	int32 *afc252d57e(); // Function Engine.HeadMountedDisplayFunctionLibrary.*afc252d57e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67162cc
	float *400eb2d4a3(); // Function Engine.HeadMountedDisplayFunctionLibrary.*400eb2d4a3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6713210
};

// Class Engine.KismetArrayLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetArrayLibrary : UBlueprintFunctionLibrary {

	bool *d5af86c153(); // Function Engine.KismetArrayLibrary.*d5af86c153 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xbd42d0
	bool *a6dc1ffb15(); // Function Engine.KismetArrayLibrary.*a6dc1ffb15 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66f7ca4
	int32 *1b773b2c32(); // Function Engine.KismetArrayLibrary.*1b773b2c32 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66f7184
	int32 *eb3cc7f23f(); // Function Engine.KismetArrayLibrary.*eb3cc7f23f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66f7b4c
	struct TArray<int32> *7f38e2bbe0(); // Function Engine.KismetArrayLibrary.*7f38e2bbe0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6730f38
	bool *6df116dc59(); // Function Engine.KismetArrayLibrary.*6df116dc59 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x463cb8
	int32 Array_Add(); // Function Engine.KismetArrayLibrary.Array_Add // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb97b9c
	int32 *0d901ddc2d(); // Function Engine.KismetArrayLibrary.*0d901ddc2d // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66f7a34
	struct TArray<int32> *e3f443c592(); // Function Engine.KismetArrayLibrary.*e3f443c592 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66f8028
	bool *8402dd331b(); // Function Engine.KismetArrayLibrary.*8402dd331b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66f78c8
	int32 *c6306caf73(); // Function Engine.KismetArrayLibrary.*c6306caf73 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x66f73ec
	int32 *d70bb9801a(); // Function Engine.KismetArrayLibrary.*d70bb9801a // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66f7618
	int32 *34ad69eaa1(); // Function Engine.KismetArrayLibrary.*34ad69eaa1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xbeebc0
	int32 Array_Get(); // Function Engine.KismetArrayLibrary.Array_Get // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xc28884
	int32 *768ea64227(); // Function Engine.KismetArrayLibrary.*768ea64227 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x66f7ed0
	struct TArray<struct AActor*> *bef7632380(); // Function Engine.KismetArrayLibrary.*bef7632380 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6709788
	struct TArray<int32> Array_Clear(); // Function Engine.KismetArrayLibrary.Array_Clear // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb4ae84
	struct TArray<int32> *16e9f10f75(); // Function Engine.KismetArrayLibrary.*16e9f10f75 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb97df0
};

// Class Engine.*738148879b
// Size: 0x30 (Inherited: 0x30)
struct U*738148879b : UBlueprintFunctionLibrary {

	struct FGuid *94380b0b43(); // Function Engine.*738148879b.*94380b0b43 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67273f4
	bool *e89af1c327(); // Function Engine.*738148879b.*e89af1c327 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67081c8
	bool *c6154b658d(); // Function Engine.*738148879b.*c6154b658d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6727c38
	bool *f5ed0849a7(); // Function Engine.*738148879b.*f5ed0849a7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671ba50
	struct FGuid *7598072597(); // Function Engine.*738148879b.*7598072597 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x671a45c
	bool *2967135e34(); // Function Engine.*738148879b.*2967135e34 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67289a4
	struct FString *06e40e76bb(); // Function Engine.*738148879b.*06e40e76bb // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6702c34
};

// Class Engine.KismetInputLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetInputLibrary : UBlueprintFunctionLibrary {

	bool *fb6ddacf0b(); // Function Engine.KismetInputLibrary.*fb6ddacf0b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x671a1e0
	bool *e5238ac692(); // Function Engine.KismetInputLibrary.*e5238ac692 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x671dd70
	bool *4564f83027(); // Function Engine.KismetInputLibrary.*4564f83027 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x671a388
	float *35774a6cbf(); // Function Engine.KismetInputLibrary.*35774a6cbf // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67021d4
	bool *0c0adf13a2(); // Function Engine.KismetInputLibrary.*0c0adf13a2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x671da80
	struct FKey *c5fa55bfab(); // Function Engine.KismetInputLibrary.*c5fa55bfab // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x672a554
	int32 GetUserIndex(); // Function Engine.KismetInputLibrary.GetUserIndex // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6717478
	struct FKey *8937d280fc(); // Function Engine.KismetInputLibrary.*8937d280fc // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67022b4
	int32 *1abdaef98b(); // Function Engine.KismetInputLibrary.*1abdaef98b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x670240c
	bool *e574347f12(); // Function Engine.KismetInputLibrary.*e574347f12 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6719e9c
	bool *678c66f972(); // Function Engine.KismetInputLibrary.*678c66f972 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6719dc8
	bool *4f5765c1b1(); // Function Engine.KismetInputLibrary.*4f5765c1b1 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x671a10c
	bool *236d750b1a(); // Function Engine.KismetInputLibrary.*236d750b1a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670856c
	bool *9139c07357(); // Function Engine.KismetInputLibrary.*9139c07357 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6719b4c
	bool *67541d22ea(); // Function Engine.KismetInputLibrary.*67541d22ea // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x671de54
	bool *d3e25995b2(); // Function Engine.KismetInputLibrary.*d3e25995b2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x671a038
	bool *bdb47eed37(); // Function Engine.KismetInputLibrary.*bdb47eed37 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x672ac58
	bool *6c51da6ad3(); // Function Engine.KismetInputLibrary.*6c51da6ad3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x672ade8
	void *8dc696e213(); // Function Engine.KismetInputLibrary.*8dc696e213 // Final|Native|Static|Public|BlueprintCallable // @ game+0x66fe024
	bool *1a9cccb9aa(); // Function Engine.KismetInputLibrary.*1a9cccb9aa // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x671dc8c
	bool *08651cd2be(); // Function Engine.KismetInputLibrary.*08651cd2be // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x671db64
	bool *749263ce44(); // Function Engine.KismetInputLibrary.*749263ce44 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6719f6c
	bool *c584dc7888(); // Function Engine.KismetInputLibrary.*c584dc7888 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67199a4
	int32 *1f572d61e2(); // Function Engine.KismetInputLibrary.*1f572d61e2 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x672aa80
	struct FKey GetKey(); // Function Engine.KismetInputLibrary.GetKey // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0xb720b8
	bool *ee7a7fdcde(); // Function Engine.KismetInputLibrary.*ee7a7fdcde // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6719c20
	struct FVector2D *809c20bb4f(); // Function Engine.KismetInputLibrary.*809c20bb4f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672a6ac
	struct FVector2D *88ad38e838(); // Function Engine.KismetInputLibrary.*88ad38e838 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672a988
	bool *797c499afb(); // Function Engine.KismetInputLibrary.*797c499afb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6719cf4
	bool *a741548012(); // Function Engine.KismetInputLibrary.*a741548012 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x671d99c
	bool *3597fe0e3c(); // Function Engine.KismetInputLibrary.*3597fe0e3c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6719a78
	struct FVector2D *3fdea184c3(); // Function Engine.KismetInputLibrary.*3fdea184c3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672a7a4
	float *37e0973384(); // Function Engine.KismetInputLibrary.*37e0973384 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x670c08c
	int32 *54f961933e(); // Function Engine.KismetInputLibrary.*54f961933e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x672ab6c
	int32 *72cc1f6e40(); // Function Engine.KismetInputLibrary.*72cc1f6e40 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x672a89c
	float *14db901ef6(); // Function Engine.KismetInputLibrary.*14db901ef6 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x7eb154
	struct FText *3187a4c061(); // Function Engine.KismetInputLibrary.*3187a4c061 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xb5bbd8
	struct FVector2D *a6947cf1dd(); // Function Engine.KismetInputLibrary.*a6947cf1dd // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672a45c
	bool *95bae934ad(); // Function Engine.KismetInputLibrary.*95bae934ad // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x671a2b4
	bool *52910cd7a1(); // Function Engine.KismetInputLibrary.*52910cd7a1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67082f8
};

// Class Engine.KismetMaterialLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetMaterialLibrary : UBlueprintFunctionLibrary {

	float SetScalarParameterValue(); // Function Engine.KismetMaterialLibrary.SetScalarParameterValue // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0xb705d4
	struct UMaterialInstanceDynamic* CreateDynamicMaterialInstance(); // Function Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x67038b8
	struct FLinearColor SetVectorParameterValue(); // Function Engine.KismetMaterialLibrary.SetVectorParameterValue // Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x673e71c
	float GetScalarParameterValue(); // Function Engine.KismetMaterialLibrary.GetScalarParameterValue // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x67146ac
	struct FLinearColor GetVectorParameterValue(); // Function Engine.KismetMaterialLibrary.GetVectorParameterValue // Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6717800
};

// Class Engine.KismetMathLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetMathLibrary : UBlueprintFunctionLibrary {

	struct FRotator *a89703fd6b(); // Function Engine.KismetMathLibrary.*a89703fd6b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6727288
	struct FRotator *9bbc443d50(); // Function Engine.KismetMathLibrary.*9bbc443d50 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6726b64
	float *6c83ea40f9(); // Function Engine.KismetMathLibrary.*6c83ea40f9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xae4610
	bool *2880c14cca(); // Function Engine.KismetMathLibrary.*2880c14cca // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x672aed4
	float *671571b455(); // Function Engine.KismetMathLibrary.*671571b455 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6712f28
	bool *045254c93f(); // Function Engine.KismetMathLibrary.*045254c93f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbec384
	struct FTimespan FromDays(); // Function Engine.KismetMathLibrary.FromDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670b3ac
	float *5b61354a81(); // Function Engine.KismetMathLibrary.*5b61354a81 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6748d8c
	bool *c4121cf360(); // Function Engine.KismetMathLibrary.*c4121cf360 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672c82c
	float *d86e0195e6(); // Function Engine.KismetMathLibrary.*d86e0195e6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670ae7c
	struct FVector RandomUnitVector(); // Function Engine.KismetMathLibrary.RandomUnitVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672d1f0
	struct FVector2D *2d3c1aa888(); // Function Engine.KismetMathLibrary.*2d3c1aa888 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67053b0
	int32 FMod(); // Function Engine.KismetMathLibrary.FMod // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x4eed94
	struct FVector *b4d5d966ba(); // Function Engine.KismetMathLibrary.*b4d5d966ba // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672e438
	struct FRotator *9a4d389d23(); // Function Engine.KismetMathLibrary.*9a4d389d23 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672c0c4
	int32 *2362072dd8(); // Function Engine.KismetMathLibrary.*2362072dd8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x673b24c
	struct FVector Normal(); // Function Engine.KismetMathLibrary.Normal // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6727568
	struct FTransform ConvertTransformToRelative(); // Function Engine.KismetMathLibrary.ConvertTransformToRelative // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6703534
	struct FRotator *85287a65e9(); // Function Engine.KismetMathLibrary.*85287a65e9 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67229e4
	struct FLinearColor *693774b92b(); // Function Engine.KismetMathLibrary.*693774b92b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672092c
	float Tan(); // Function Engine.KismetMathLibrary.Tan // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67475f8
	struct FRotator *f1cabbf7da(); // Function Engine.KismetMathLibrary.*f1cabbf7da // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6723024
	struct FIntVector *82d90904be(); // Function Engine.KismetMathLibrary.*82d90904be // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67094dc
	struct FLinearColor *0895d921c7(); // Function Engine.KismetMathLibrary.*0895d921c7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6703274
	int32 *7f30720928(); // Function Engine.KismetMathLibrary.*7f30720928 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6726780
	bool *30d35691f9(); // Function Engine.KismetMathLibrary.*30d35691f9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66f8358
	struct FVector2D *d6bd847bdf(); // Function Engine.KismetMathLibrary.*d6bd847bdf // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66f54a0
	struct FTimespan GetTimeOfDay(); // Function Engine.KismetMathLibrary.GetTimeOfDay // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6715d00
	bool *b3dcd7e35a(); // Function Engine.KismetMathLibrary.*b3dcd7e35a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4ef82c
	float *ace9454687(); // Function Engine.KismetMathLibrary.*ace9454687 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4edee0
	bool BooleanOR(); // Function Engine.KismetMathLibrary.BooleanOR // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4edb48
	struct FVector *31e56582d2(); // Function Engine.KismetMathLibrary.*31e56582d2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6726b64
	struct FDateTime *deabe34fa1(); // Function Engine.KismetMathLibrary.*deabe34fa1 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67044a4
	struct FVector *29f62b02c5(); // Function Engine.KismetMathLibrary.*29f62b02c5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4ee4ec
	struct FDateTime UtcNow(); // Function Engine.KismetMathLibrary.UtcNow // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6748614
	bool *289ae1cc8c(); // Function Engine.KismetMathLibrary.*289ae1cc8c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67265c8
	bool *88262597e6(); // Function Engine.KismetMathLibrary.*88262597e6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6702d3c
	int32 *9ada690ad6(); // Function Engine.KismetMathLibrary.*9ada690ad6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc500a0
	float Square(); // Function Engine.KismetMathLibrary.Square // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67462a0
	float RandomFloatInRangeFromStream(); // Function Engine.KismetMathLibrary.RandomFloatInRangeFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672ca1c
	struct FVector BreakTransform(); // Function Engine.KismetMathLibrary.BreakTransform // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4ee2fc
	bool *a2fdf78d24(); // Function Engine.KismetMathLibrary.*a2fdf78d24 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6727f28
	bool *6916aa495c(); // Function Engine.KismetMathLibrary.*6916aa495c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6718898
	struct FVector *b0b39b695c(); // Function Engine.KismetMathLibrary.*b0b39b695c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672d3dc
	float GetTotalHours(); // Function Engine.KismetMathLibrary.GetTotalHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6716028
	float *9082a5ac7b(); // Function Engine.KismetMathLibrary.*9082a5ac7b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67266a0
	float *36e7381c0a(); // Function Engine.KismetMathLibrary.*36e7381c0a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6704c3c
	struct FLinearColor MakeColor(); // Function Engine.KismetMathLibrary.MakeColor // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6721698
	bool EqualEqual_RotatorRotator(); // Function Engine.KismetMathLibrary.EqualEqual_RotatorRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6708704
	struct FBox MakeBox(); // Function Engine.KismetMathLibrary.MakeBox // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6721588
	float Fraction(); // Function Engine.KismetMathLibrary.Fraction // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670b30c
	bool *29c7de62d6(); // Function Engine.KismetMathLibrary.*29c7de62d6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc26288
	bool *4ad23609a3(); // Function Engine.KismetMathLibrary.*4ad23609a3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6718b50
	struct FVector *9545de35a9(); // Function Engine.KismetMathLibrary.*9545de35a9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672b394
	float *410ed9368a(); // Function Engine.KismetMathLibrary.*410ed9368a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x672c5d8
	float *2f64f5802f(); // Function Engine.KismetMathLibrary.*2f64f5802f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6700994
	struct FVector *aec3180364(); // Function Engine.KismetMathLibrary.*aec3180364 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672733c
	bool *8c720203dd(); // Function Engine.KismetMathLibrary.*8c720203dd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4ee260
	struct FVector *6e127a9bbe(); // Function Engine.KismetMathLibrary.*6e127a9bbe // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6705794
	bool IsMorning(); // Function Engine.KismetMathLibrary.IsMorning // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671b154
	struct FVector2D *f7dca3bfd9(); // Function Engine.KismetMathLibrary.*f7dca3bfd9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6726d54
	struct FTransform TEase(); // Function Engine.KismetMathLibrary.TEase // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6746e80
	struct UObject* *10c7e0c405(); // Function Engine.KismetMathLibrary.*10c7e0c405 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x672f010
	float *7e0da19a6a(); // Function Engine.KismetMathLibrary.*7e0da19a6a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4eecf8
	int32 *0bc93d083e(); // Function Engine.KismetMathLibrary.*0bc93d083e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66f34ec
	struct FVector ProjectVectorOnToVector(); // Function Engine.KismetMathLibrary.ProjectVectorOnToVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672b61c
	bool *26ca8c60bf(); // Function Engine.KismetMathLibrary.*26ca8c60bf // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671e2a8
	struct FVector *c9eb9fcb85(); // Function Engine.KismetMathLibrary.*c9eb9fcb85 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67469e0
	struct FVector2D *8777b4bd7c(); // Function Engine.KismetMathLibrary.*8777b4bd7c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66f5588
	int32 *ecd5f34ba4(); // Function Engine.KismetMathLibrary.*ecd5f34ba4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbe6d0c
	bool *fba7d7ad2b(); // Function Engine.KismetMathLibrary.*fba7d7ad2b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6700d84
	float Asin(); // Function Engine.KismetMathLibrary.Asin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66f8134
	bool *5603cc9615(); // Function Engine.KismetMathLibrary.*5603cc9615 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60de984
	bool *edc1eb99da(); // Function Engine.KismetMathLibrary.*edc1eb99da // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6708498
	float GetTotalSeconds(); // Function Engine.KismetMathLibrary.GetTotalSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67161f0
	struct FTransform *f9fe668b21(); // Function Engine.KismetMathLibrary.*f9fe668b21 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671a850
	struct FVector *f7cd0753f0(); // Function Engine.KismetMathLibrary.*f7cd0753f0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6709c4c
	struct FRandomStream *266e713eb3(); // Function Engine.KismetMathLibrary.*266e713eb3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x672e108
	struct FTimespan *23b6509ccd(); // Function Engine.KismetMathLibrary.*23b6509ccd // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x59af8b4
	struct FVector *2bf5906d99(); // Function Engine.KismetMathLibrary.*2bf5906d99 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6749144
	float *389792c912(); // Function Engine.KismetMathLibrary.*389792c912 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6704a18
	struct FTransform Conv_VectorToTransform(); // Function Engine.KismetMathLibrary.Conv_VectorToTransform // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67033e0
	struct FRotator *7b770ab8ea(); // Function Engine.KismetMathLibrary.*7b770ab8ea // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6722b14
	struct UClass* *b49dceb9ab(); // Function Engine.KismetMathLibrary.*b49dceb9ab // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x672f010
	struct FVector *86221ddc50(); // Function Engine.KismetMathLibrary.*86221ddc50 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670c9b0
	bool *b69b4c5064(); // Function Engine.KismetMathLibrary.*b69b4c5064 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xcd2220
	struct FVector *fd173cae44(); // Function Engine.KismetMathLibrary.*fd173cae44 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67135bc
	struct FRotator *1d408b1d37(); // Function Engine.KismetMathLibrary.*1d408b1d37 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670a2cc
	float *08f2d72911(); // Function Engine.KismetMathLibrary.*08f2d72911 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6728c28
	bool *b524dd628b(); // Function Engine.KismetMathLibrary.*b524dd628b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67088c4
	float *a63fea97f0(); // Function Engine.KismetMathLibrary.*a63fea97f0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6704cdc
	struct FTimespan GetDuration(); // Function Engine.KismetMathLibrary.GetDuration // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670f004
	bool *cf1c284ffe(); // Function Engine.KismetMathLibrary.*cf1c284ffe // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6704330
	struct FVector *9269d42730(); // Function Engine.KismetMathLibrary.*9269d42730 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6713c24
	struct FRotator RandomRotator(); // Function Engine.KismetMathLibrary.RandomRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672cff4
	float FMax(); // Function Engine.KismetMathLibrary.FMax // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4eec5c
	struct FLinearColor *22edafe360(); // Function Engine.KismetMathLibrary.*22edafe360 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672f134
	float FMin(); // Function Engine.KismetMathLibrary.FMin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc72c80
	struct FVector *9b25827cfd(); // Function Engine.KismetMathLibrary.*9b25827cfd // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672d2d8
	float *7528394c64(); // Function Engine.KismetMathLibrary.*7528394c64 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66fc8e4
	struct FVector2D *0062423314(); // Function Engine.KismetMathLibrary.*0062423314 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6748fbc
	struct FVector *2e3ace941d(); // Function Engine.KismetMathLibrary.*2e3ace941d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66f5664
	struct FVector GetDirectionUnitVector(); // Function Engine.KismetMathLibrary.GetDirectionUnitVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670ed70
	int32 *cab3faa422(); // Function Engine.KismetMathLibrary.*cab3faa422 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67052bc
	struct FTimespan *795cccb639(); // Function Engine.KismetMathLibrary.*795cccb639 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6747804
	float *25a5c06a61(); // Function Engine.KismetMathLibrary.*25a5c06a61 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6722608
	float *783ddfe4bf(); // Function Engine.KismetMathLibrary.*783ddfe4bf // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6726454
	float *9e9f800a8e(); // Function Engine.KismetMathLibrary.*9e9f800a8e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4eef94
	float *0ca9990387(); // Function Engine.KismetMathLibrary.*0ca9990387 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6711f58
	struct FLinearColor *3fb9910d78(); // Function Engine.KismetMathLibrary.*3fb9910d78 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6726938
	bool *f367f24a4c(); // Function Engine.KismetMathLibrary.*f367f24a4c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671e1dc
	bool NotEqual_NameName(); // Function Engine.KismetMathLibrary.NotEqual_NameName // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb85450
	struct FRotator *ee4f85d5b2(); // Function Engine.KismetMathLibrary.*ee4f85d5b2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672f278
	float *1fd9fb6a3d(); // Function Engine.KismetMathLibrary.*1fd9fb6a3d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6718c1c
	struct FVector *aa52cd0a1f(); // Function Engine.KismetMathLibrary.*aa52cd0a1f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67135bc
	float Sin(); // Function Engine.KismetMathLibrary.Sin // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6741428
	struct FTransform *3ec1839455(); // Function Engine.KismetMathLibrary.*3ec1839455 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67473ac
	struct FVector RandomUnitVectorFromStream(); // Function Engine.KismetMathLibrary.RandomUnitVectorFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672d228
	int32 GetMonth(); // Function Engine.KismetMathLibrary.GetMonth // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6712248
	struct FVector *b54d9e2e4c(); // Function Engine.KismetMathLibrary.*b54d9e2e4c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6700b90
	struct FVector *ae89c846a0(); // Function Engine.KismetMathLibrary.*ae89c846a0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672b504
	struct FVector *4a84e8b130(); // Function Engine.KismetMathLibrary.*4a84e8b130 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672cedc
	bool *d143d3a455(); // Function Engine.KismetMathLibrary.*d143d3a455 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xb5998c
	bool *0c5ac759c0(); // Function Engine.KismetMathLibrary.*0c5ac759c0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60dcd00
	float *ed668ae38d(); // Function Engine.KismetMathLibrary.*ed668ae38d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6705b10
	struct FLinearColor *7259546a5c(); // Function Engine.KismetMathLibrary.*7259546a5c // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6702a8c
	bool *ce20663cce(); // Function Engine.KismetMathLibrary.*ce20663cce // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67197c4
	int32 *877ea0c225(); // Function Engine.KismetMathLibrary.*877ea0c225 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x674941c
	bool *42b4e4d644(); // Function Engine.KismetMathLibrary.*42b4e4d644 // Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6725530
	struct FVector2D *4fb0313f98(); // Function Engine.KismetMathLibrary.*4fb0313f98 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6748e34
	float *3b9d08585b(); // Function Engine.KismetMathLibrary.*3b9d08585b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67213f8
	float *f2c3c46ce0(); // Function Engine.KismetMathLibrary.*f2c3c46ce0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6703fb8
	bool Not_PreBool(); // Function Engine.KismetMathLibrary.Not_PreBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4edc00
	bool *ab61acee03(); // Function Engine.KismetMathLibrary.*ab61acee03 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4ee824
	float Sqrt(); // Function Engine.KismetMathLibrary.Sqrt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67461e4
	float *efa33693a0(); // Function Engine.KismetMathLibrary.*efa33693a0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4eee6c
	struct FRotator REase(); // Function Engine.KismetMathLibrary.REase // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672bb00
	int32 RandomIntegerInRangeFromStream(); // Function Engine.KismetMathLibrary.RandomIntegerInRangeFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672cd64
	int32 GetDay(); // Function Engine.KismetMathLibrary.GetDay // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670e5a4
	float GetTotalDays(); // Function Engine.KismetMathLibrary.GetTotalDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6715f90
	bool *d1a24bfb4b(); // Function Engine.KismetMathLibrary.*d1a24bfb4b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x674656c
	float *947cf0584f(); // Function Engine.KismetMathLibrary.*947cf0584f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6748c40
	struct FRotator *f9ea40cc4e(); // Function Engine.KismetMathLibrary.*f9ea40cc4e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670332c
	float *6cfa51eb87(); // Function Engine.KismetMathLibrary.*6cfa51eb87 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6724b30
	float *cb3d0fa569(); // Function Engine.KismetMathLibrary.*cb3d0fa569 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4ed8e4
	struct FRotator *88a59d6844(); // Function Engine.KismetMathLibrary.*88a59d6844 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6723154
	bool *4fa5701a45(); // Function Engine.KismetMathLibrary.*4fa5701a45 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671b4ac
	bool *055a659f43(); // Function Engine.KismetMathLibrary.*055a659f43 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4edd5c
	struct FRotator MakeRotator(); // Function Engine.KismetMathLibrary.MakeRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4ed73c
	float *7274af8f2f(); // Function Engine.KismetMathLibrary.*7274af8f2f // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x670af9c
	struct FVector VEase(); // Function Engine.KismetMathLibrary.VEase // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6748644
	struct FVector *b98b710f35(); // Function Engine.KismetMathLibrary.*b98b710f35 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6726f18
	int32 *6c968ff326(); // Function Engine.KismetMathLibrary.*6c968ff326 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x670944c
	int32 *91936e04a3(); // Function Engine.KismetMathLibrary.*91936e04a3 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6702a04
	float *40adc9de7d(); // Function Engine.KismetMathLibrary.*40adc9de7d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4edf7c
	struct FVector *6c0fdb4c43(); // Function Engine.KismetMathLibrary.*6c0fdb4c43 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6703188
	struct FLinearColor *5a4b7d2556(); // Function Engine.KismetMathLibrary.*5a4b7d2556 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6726850
	float BreakVector2D(); // Function Engine.KismetMathLibrary.BreakVector2D // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xb524f4
	bool *f06a8b0f02(); // Function Engine.KismetMathLibrary.*f06a8b0f02 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6747690
	struct FVector TransformLocation(); // Function Engine.KismetMathLibrary.TransformLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6747d30
	struct FTimespan *885278fd75(); // Function Engine.KismetMathLibrary.*885278fd75 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66f53d4
	struct FVector *b6e8c33fb2(); // Function Engine.KismetMathLibrary.*b6e8c33fb2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67054e0
	struct F*eac882126f *9d4f55f7bd(); // Function Engine.KismetMathLibrary.*9d4f55f7bd // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x672e194
	float MultiplyMultiply_FloatFloat(); // Function Engine.KismetMathLibrary.MultiplyMultiply_FloatFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67264ec
	float *c5e00f44d1(); // Function Engine.KismetMathLibrary.*c5e00f44d1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67277f0
	float *467924ecf9(); // Function Engine.KismetMathLibrary.*467924ecf9 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xb87f44
	struct FRotator *44c49b3d1e(); // Function Engine.KismetMathLibrary.*44c49b3d1e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6701a34
	int32 GetSeconds(); // Function Engine.KismetMathLibrary.GetSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6714e40
	int32 RandomIntegerFromStream(); // Function Engine.KismetMathLibrary.RandomIntegerFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672cc34
	struct FString *4395f4f976(); // Function Engine.KismetMathLibrary.*4395f4f976 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x672f3d0
	bool *d99ec0791c(); // Function Engine.KismetMathLibrary.*d99ec0791c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4eebc0
	bool *9d36c7b579(); // Function Engine.KismetMathLibrary.*9d36c7b579 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6727b6c
	int32 GetDayOfYear(); // Function Engine.KismetMathLibrary.GetDayOfYear // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670e63c
	struct FDateTime *efe3c3e245(); // Function Engine.KismetMathLibrary.*efe3c3e245 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6746640
	bool NotEqual_ByteByte(); // Function Engine.KismetMathLibrary.NotEqual_ByteByte // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4edff4
	float Ease(); // Function Engine.KismetMathLibrary.Ease // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6707d70
	struct FTimespan FromHours(); // Function Engine.KismetMathLibrary.FromHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670b44c
	bool *f207f940aa(); // Function Engine.KismetMathLibrary.*f207f940aa // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbb13d8
	float *f2f1c2d8d5(); // Function Engine.KismetMathLibrary.*f2f1c2d8d5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6709288
	float *1a4c972955(); // Function Engine.KismetMathLibrary.*1a4c972955 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67120b0
	struct FVector *29d543f628(); // Function Engine.KismetMathLibrary.*29d543f628 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671e37c
	float *7e35dafa2f(); // Function Engine.KismetMathLibrary.*7e35dafa2f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6700ab4
	struct FDateTime Now(); // Function Engine.KismetMathLibrary.Now // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672824c
	struct FVector *e7516e985b(); // Function Engine.KismetMathLibrary.*e7516e985b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6703e88
	struct FBox2D MakeBox2D(); // Function Engine.KismetMathLibrary.MakeBox2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6721490
	struct FVector2D *21f6383cd0(); // Function Engine.KismetMathLibrary.*21f6383cd0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67034a4
	float FClamp(); // Function Engine.KismetMathLibrary.FClamp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4ed338
	int32 GetMilliseconds(); // Function Engine.KismetMathLibrary.GetMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6711fec
	float *3125d90e01(); // Function Engine.KismetMathLibrary.*3125d90e01 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4edc6c
	int32 GetDays(); // Function Engine.KismetMathLibrary.GetDays // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670e6d0
	struct FLinearColor *eff1a5493d(); // Function Engine.KismetMathLibrary.*eff1a5493d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6702b7c
	struct FTimespan MakeTimespan(); // Function Engine.KismetMathLibrary.MakeTimespan // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67233b4
	float *5a6df88013(); // Function Engine.KismetMathLibrary.*5a6df88013 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6725180
	struct FVector *bcf47bd145(); // Function Engine.KismetMathLibrary.*bcf47bd145 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6748a38
	float BreakVector(); // Function Engine.KismetMathLibrary.BreakVector // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4ee12c
	int32 *2998076f35(); // Function Engine.KismetMathLibrary.*2998076f35 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6724d14
	struct FRandomStream MakeRandomStream(); // Function Engine.KismetMathLibrary.MakeRandomStream // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672275c
	int32 Max(); // Function Engine.KismetMathLibrary.Max // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6724890
	float *b748c09796(); // Function Engine.KismetMathLibrary.*b748c09796 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6748cdc
	struct FVector *a755ac2f4e(); // Function Engine.KismetMathLibrary.*a755ac2f4e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xca6540
	float TimespanRatio(); // Function Engine.KismetMathLibrary.TimespanRatio // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x674783c
	bool *eaa37a3ac5(); // Function Engine.KismetMathLibrary.*eaa37a3ac5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671e494
	struct FTimespan FromSeconds(); // Function Engine.KismetMathLibrary.FromSeconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670b624
	int32 GetMinute(); // Function Engine.KismetMathLibrary.GetMinute // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6712184
	float *2d935bc36a(); // Function Engine.KismetMathLibrary.*2d935bc36a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6704960
	bool *e5cdb7f7de(); // Function Engine.KismetMathLibrary.*e5cdb7f7de // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66f9f24
	bool *d09c71724b(); // Function Engine.KismetMathLibrary.*d09c71724b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66f5300
	struct FIntVector *e49baa78e2(); // Function Engine.KismetMathLibrary.*e49baa78e2 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6702ed8
	bool NotEqual_VectorVector(); // Function Engine.KismetMathLibrary.NotEqual_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6728064
	int32 RandomInteger(); // Function Engine.KismetMathLibrary.RandomInteger // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x672cb80
	struct FRotator *92b677182a(); // Function Engine.KismetMathLibrary.*92b677182a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672c274
	bool *9699bdce26(); // Function Engine.KismetMathLibrary.*9699bdce26 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbe4f44
	bool *563a1a1d89(); // Function Engine.KismetMathLibrary.*563a1a1d89 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6718a7c
	struct FVector MakeVector(); // Function Engine.KismetMathLibrary.MakeVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4ed810
	struct FVector *d0dca55826(); // Function Engine.KismetMathLibrary.*d0dca55826 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672f278
	bool *6678804321(); // Function Engine.KismetMathLibrary.*6678804321 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67080fc
	float MapRangeUnclamped(); // Function Engine.KismetMathLibrary.MapRangeUnclamped // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6723664
	struct FVector *f756a0f59d(); // Function Engine.KismetMathLibrary.*f756a0f59d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67030d4
	bool *7d94f14399(); // Function Engine.KismetMathLibrary.*7d94f14399 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4ee788
	struct FVector *9110203eed(); // Function Engine.KismetMathLibrary.*9110203eed // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6705634
	struct FVector InverseTransformLocation(); // Function Engine.KismetMathLibrary.InverseTransformLocation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671a614
	int32 Min(); // Function Engine.KismetMathLibrary.Min // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6724ee0
	float *ab99a5b12c(); // Function Engine.KismetMathLibrary.*ab99a5b12c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671a4f4
	int32 GetHours(); // Function Engine.KismetMathLibrary.GetHours // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670f7c4
	bool RandomBool(); // Function Engine.KismetMathLibrary.RandomBool // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x672c670
	float *b4e540fa69(); // Function Engine.KismetMathLibrary.*b4e540fa69 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6748ba0
	struct FLinearColor *29950ceaf8(); // Function Engine.KismetMathLibrary.*29950ceaf8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67207a8
	int32 *7a5fa4f5e7(); // Function Engine.KismetMathLibrary.*7a5fa4f5e7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66f5b70
	bool *de1421ea7f(); // Function Engine.KismetMathLibrary.*de1421ea7f // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6718b50
	struct FDateTime Today(); // Function Engine.KismetMathLibrary.Today // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6747920
	struct FRotator *2826e62c6a(); // Function Engine.KismetMathLibrary.*2826e62c6a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6726a54
	bool *b1aff02110(); // Function Engine.KismetMathLibrary.*b1aff02110 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671e920
	struct FVector *c526af6afe(); // Function Engine.KismetMathLibrary.*c526af6afe // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4ef26c
	bool *b25347969e(); // Function Engine.KismetMathLibrary.*b25347969e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66f8434
	struct FVector *29ea778b89(); // Function Engine.KismetMathLibrary.*29ea778b89 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6747964
	bool *886ef0a726(); // Function Engine.KismetMathLibrary.*886ef0a726 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6724fb4
	int32 BreakRandomStream(); // Function Engine.KismetMathLibrary.BreakRandomStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66fd600
	struct FTimespan *b2f43869bb(); // Function Engine.KismetMathLibrary.*b2f43869bb // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6726c74
	struct FLinearColor *c39bcf0804(); // Function Engine.KismetMathLibrary.*c39bcf0804 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6718d30
	bool *737a5a9e15(); // Function Engine.KismetMathLibrary.*737a5a9e15 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6728b2c
	float *11de734d99(); // Function Engine.KismetMathLibrary.*11de734d99 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbb2724
	struct FRotator *2d27b449d9(); // Function Engine.KismetMathLibrary.*2d27b449d9 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67228b4
	struct FLinearColor *2fd7b54052(); // Function Engine.KismetMathLibrary.*2fd7b54052 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6718ebc
	bool *05ed8812ea(); // Function Engine.KismetMathLibrary.*05ed8812ea // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60de984
	struct FRotator *fe3f1835f5(); // Function Engine.KismetMathLibrary.*fe3f1835f5 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6722ef4
	float *29f9c3d09b(); // Function Engine.KismetMathLibrary.*29f9c3d09b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6712a1c
	bool *2b1de19b35(); // Function Engine.KismetMathLibrary.*2b1de19b35 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6718898
	bool *76ec81b123(); // Function Engine.KismetMathLibrary.*76ec81b123 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671e568
	bool EqualEqual_VectorVector(); // Function Engine.KismetMathLibrary.EqualEqual_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6708b84
	float Cos(); // Function Engine.KismetMathLibrary.Cos // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6703750
	struct FVector *53017c5fe1(); // Function Engine.KismetMathLibrary.*53017c5fe1 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67176c4
	float *4c7fe8bf18(); // Function Engine.KismetMathLibrary.*4c7fe8bf18 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4ee090
	bool BooleanXOR(); // Function Engine.KismetMathLibrary.BooleanXOR // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66fa104
	struct FRotator *71d4d2353a(); // Function Engine.KismetMathLibrary.*71d4d2353a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6722e34
	struct FTimespan *e9e8969e07(); // Function Engine.KismetMathLibrary.*e9e8969e07 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6746640
	struct FRotator *9ba7194233(); // Function Engine.KismetMathLibrary.*9ba7194233 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6722d04
	float GetTotalMilliseconds(); // Function Engine.KismetMathLibrary.GetTotalMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67160c0
	struct FVector *96bf1dbe09(); // Function Engine.KismetMathLibrary.*96bf1dbe09 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xc2d6f8
	int32 Clamp(); // Function Engine.KismetMathLibrary.Clamp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6700878
	struct FVector *b41276535f(); // Function Engine.KismetMathLibrary.*b41276535f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xb89928
	bool *e43b7798cb(); // Function Engine.KismetMathLibrary.*e43b7798cb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x60dcd00
	struct FTransform *91edeeffe8(); // Function Engine.KismetMathLibrary.*91edeeffe8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672f5cc
	bool *5c9b815464(); // Function Engine.KismetMathLibrary.*5c9b815464 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6727020
	struct FVector *8d7f3967b6(); // Function Engine.KismetMathLibrary.*8d7f3967b6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67468d0
	bool *2ba1190a3a(); // Function Engine.KismetMathLibrary.*2ba1190a3a // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67080fc
	struct FVector *1429d76ba8(); // Function Engine.KismetMathLibrary.*1429d76ba8 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4ede10
	float RandomFloatInRange(); // Function Engine.KismetMathLibrary.RandomFloatInRange // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4ef900
	struct FTimespan FromMinutes(); // Function Engine.KismetMathLibrary.FromMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670b588
	float Exp(); // Function Engine.KismetMathLibrary.Exp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67090a0
	struct FRotator *2fa3b3f788(); // Function Engine.KismetMathLibrary.*2fa3b3f788 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67227f4
	struct FRotator *fb4e218354(); // Function Engine.KismetMathLibrary.*fb4e218354 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6722bd4
	int32 GetMinutes(); // Function Engine.KismetMathLibrary.GetMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6712184
	float GetTotalMinutes(); // Function Engine.KismetMathLibrary.GetTotalMinutes // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6716158
	bool *33add275b9(); // Function Engine.KismetMathLibrary.*33add275b9 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6708a48
	struct FLinearColor *b1cf67b4f0(); // Function Engine.KismetMathLibrary.*b1cf67b4f0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66fdb04
	float *db2f30b62c(); // Function Engine.KismetMathLibrary.*db2f30b62c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67196b8
	struct FVector *1356d9ef59(); // Function Engine.KismetMathLibrary.*1356d9ef59 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67030d4
	struct FVector *8e6da72636(); // Function Engine.KismetMathLibrary.*8e6da72636 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66fd6ec
	bool *f96bca13a9(); // Function Engine.KismetMathLibrary.*f96bca13a9 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6724964
	float Atan2(); // Function Engine.KismetMathLibrary.Atan2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66f81e4
	int32 GetYear(); // Function Engine.KismetMathLibrary.GetYear // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6718140
	int32 *276c72b689(); // Function Engine.KismetMathLibrary.*276c72b689 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x672853c
	struct FRotator *66ef751869(); // Function Engine.KismetMathLibrary.*66ef751869 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6727910
	struct FTransform *756769abb8(); // Function Engine.KismetMathLibrary.*756769abb8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x674716c
	struct FColor *7993814eb6(); // Function Engine.KismetMathLibrary.*7993814eb6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xc5eacc
	struct FVector2D MakeVector2D(); // Function Engine.KismetMathLibrary.MakeVector2D // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6723588
	bool *f343fca86e(); // Function Engine.KismetMathLibrary.*f343fca86e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6702978
	int32 GetMillisecond(); // Function Engine.KismetMathLibrary.GetMillisecond // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6711fec
	struct FRotator *ef13753365(); // Function Engine.KismetMathLibrary.*ef13753365 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672e594
	struct FDateTime MakeDateTime(); // Function Engine.KismetMathLibrary.MakeDateTime // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6721818
	float *697c8c7e7e(); // Function Engine.KismetMathLibrary.*697c8c7e7e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6715810
	struct FTimespan *09f9460b0e(); // Function Engine.KismetMathLibrary.*09f9460b0e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6746640
	struct FVector2D *e888db70a5(); // Function Engine.KismetMathLibrary.*e888db70a5 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6727424
	struct FVector2D *278590b0cd(); // Function Engine.KismetMathLibrary.*278590b0cd // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x674670c
	int32 *b7c9a3621e(); // Function Engine.KismetMathLibrary.*b7c9a3621e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6725364
	float *33b77439fd(); // Function Engine.KismetMathLibrary.*33b77439fd // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6704b9c
	struct FDateTime GetDate(); // Function Engine.KismetMathLibrary.GetDate // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670e508
	int32 RandomIntegerInRange(); // Function Engine.KismetMathLibrary.RandomIntegerInRange // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbb2bcc
	float Acos(); // Function Engine.KismetMathLibrary.Acos // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66f36bc
	bool BooleanAND(); // Function Engine.KismetMathLibrary.BooleanAND // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4eda90
	int32 *7fcfad6df4(); // Function Engine.KismetMathLibrary.*7fcfad6df4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6728ddc
	bool *0e1ef649ce(); // Function Engine.KismetMathLibrary.*0e1ef649ce // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6727a84
	struct FTransform MakeTransform(); // Function Engine.KismetMathLibrary.MakeTransform // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0xc04484
	struct FLinearColor *d2044787b7(); // Function Engine.KismetMathLibrary.*d2044787b7 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672bfd0
	struct FVector *cae9ec1747(); // Function Engine.KismetMathLibrary.*cae9ec1747 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671704c
	bool *cc41bc76bb(); // Function Engine.KismetMathLibrary.*cc41bc76bb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbc848c
	int32 BreakTimespan(); // Function Engine.KismetMathLibrary.BreakTimespan // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66fd8a0
	struct FDateTime *5eb1d52845(); // Function Engine.KismetMathLibrary.*5eb1d52845 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x59af8b4
	struct FVector2D *3ec09c87b3(); // Function Engine.KismetMathLibrary.*3ec09c87b3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67467f4
	int32 GetHour12(); // Function Engine.KismetMathLibrary.GetHour12 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670f730
	bool *987e625a9c(); // Function Engine.KismetMathLibrary.*987e625a9c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6702dc0
	int32 DaysInMonth(); // Function Engine.KismetMathLibrary.DaysInMonth // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67044c0
	bool *dd166c15a1(); // Function Engine.KismetMathLibrary.*dd166c15a1 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67187c4
	float Atan(); // Function Engine.KismetMathLibrary.Atan // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66f82c0
	struct FVector *75403a48e0(); // Function Engine.KismetMathLibrary.*75403a48e0 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6748888
	struct FRotator *55b7de4b0d(); // Function Engine.KismetMathLibrary.*55b7de4b0d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672c424
	int32 *2c7c53d931(); // Function Engine.KismetMathLibrary.*2c7c53d931 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67091e4
	bool NotEqual_RotatorRotator(); // Function Engine.KismetMathLibrary.NotEqual_RotatorRotator // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6727d68
	bool RandomBoolFromStream(); // Function Engine.KismetMathLibrary.RandomBoolFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672c6bc
	float Lerp(); // Function Engine.KismetMathLibrary.Lerp // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671dfe8
	float *05195c4eb4(); // Function Engine.KismetMathLibrary.*05195c4eb4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6702e48
	struct FVector Cross_VectorVector(); // Function Engine.KismetMathLibrary.Cross_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6704098
	bool *10bc2ac5f8(); // Function Engine.KismetMathLibrary.*10bc2ac5f8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x66fa014
	bool *eba0a1732d(); // Function Engine.KismetMathLibrary.*eba0a1732d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6727b6c
	int32 GetHour(); // Function Engine.KismetMathLibrary.GetHour // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670f7c4
	float Abs(); // Function Engine.KismetMathLibrary.Abs // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4ee5d8
	struct FTransform *a06d50ea47(); // Function Engine.KismetMathLibrary.*a06d50ea47 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6701b48
	struct FVector *cf1d092249(); // Function Engine.KismetMathLibrary.*cf1d092249 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670a420
	int32 BreakDateTime(); // Function Engine.KismetMathLibrary.BreakDateTime // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66fcc5c
	float RandomFloat(); // Function Engine.KismetMathLibrary.RandomFloat // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x672c918
	float *dd85bc6856(); // Function Engine.KismetMathLibrary.*dd85bc6856 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67048a8
	float Log(); // Function Engine.KismetMathLibrary.Log // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x672131c
	bool *05f798cb0e(); // Function Engine.KismetMathLibrary.*05f798cb0e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671e108
	struct FVector *2c738f016b(); // Function Engine.KismetMathLibrary.*2c738f016b // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66f5774
	int32 *ce75b2a71f(); // Function Engine.KismetMathLibrary.*ce75b2a71f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6709138
	bool *b267d44756(); // Function Engine.KismetMathLibrary.*b267d44756 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671e1dc
	float *0ee1ca7908(); // Function Engine.KismetMathLibrary.*0ee1ca7908 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x4ef560
	struct FTimespan *fa22dc5842(); // Function Engine.KismetMathLibrary.*fa22dc5842 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6747820
	float BreakRotator(); // Function Engine.KismetMathLibrary.BreakRotator // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4ee654
	int32 *f53d173295(); // Function Engine.KismetMathLibrary.*f53d173295 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xca5a18
	bool IsAfternoon(); // Function Engine.KismetMathLibrary.IsAfternoon // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671aa50
	struct FVector *2bf6681fa6(); // Function Engine.KismetMathLibrary.*2bf6681fa6 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6702f64
	struct FVector2D *1ba704f384(); // Function Engine.KismetMathLibrary.*1ba704f384 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6726e3c
	struct FRandomStream *7a69b0696a(); // Function Engine.KismetMathLibrary.*7a69b0696a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x672ef74
	int32 *bcbb3a7b6b(); // Function Engine.KismetMathLibrary.*bcbb3a7b6b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6741390
	struct FVector *67c9e4910d(); // Function Engine.KismetMathLibrary.*67c9e4910d // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6718964
	float *0c178cc719(); // Function Engine.KismetMathLibrary.*0c178cc719 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6713088
	struct FPlane *89dd1db704(); // Function Engine.KismetMathLibrary.*89dd1db704 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67224f8
	bool *206af5727b(); // Function Engine.KismetMathLibrary.*206af5727b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67051c0
	float *80f461a53c(); // Function Engine.KismetMathLibrary.*80f461a53c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67412dc
	int32 *1051bbfb1d(); // Function Engine.KismetMathLibrary.*1051bbfb1d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67281c4
	float *ee7c800537(); // Function Engine.KismetMathLibrary.*ee7c800537 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672bda8
	bool *1bc7dcbd64(); // Function Engine.KismetMathLibrary.*1bc7dcbd64 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671e6fc
	float Dot_VectorVector(); // Function Engine.KismetMathLibrary.Dot_VectorVector // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x4ef2f4
	bool IsLeapYear(); // Function Engine.KismetMathLibrary.IsLeapYear // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x671b01c
	struct FRotator RandomRotatorFromStream(); // Function Engine.KismetMathLibrary.RandomRotatorFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672d0e8
	bool *73f3952dd3(); // Function Engine.KismetMathLibrary.*73f3952dd3 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671b348
	int32 *130aa2e9b4(); // Function Engine.KismetMathLibrary.*130aa2e9b4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbad210
	float *ea2aa7be25(); // Function Engine.KismetMathLibrary.*ea2aa7be25 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6704afc
	int32 Round(); // Function Engine.KismetMathLibrary.Round // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x672e698
	struct FVector *e9a4be6fca(); // Function Engine.KismetMathLibrary.*e9a4be6fca // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6709ad8
	float RandomFloatFromStream(); // Function Engine.KismetMathLibrary.RandomFloatFromStream // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x672c950
	struct F*fb8367838c *74163cf754(); // Function Engine.KismetMathLibrary.*74163cf754 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x672dfa0
	bool *bed99de0b7(); // Function Engine.KismetMathLibrary.*bed99de0b7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x671e568
	int32 DaysInYear(); // Function Engine.KismetMathLibrary.DaysInYear // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67045b8
	bool NotEqual_IntInt(); // Function Engine.KismetMathLibrary.NotEqual_IntInt // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbe899c
	struct FDateTime *a422892e91(); // Function Engine.KismetMathLibrary.*a422892e91 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x66f53d4
	int32 GetSecond(); // Function Engine.KismetMathLibrary.GetSecond // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6714e40
	struct FVector *4efcfaba5e(); // Function Engine.KismetMathLibrary.*4efcfaba5e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6746af0
	float *191bd0cc61(); // Function Engine.KismetMathLibrary.*191bd0cc61 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6727708
	bool *c015f4f6ff(); // Function Engine.KismetMathLibrary.*c015f4f6ff // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67041c4
	bool *18190a68a6(); // Function Engine.KismetMathLibrary.*18190a68a6 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x672c798
	struct FTimespan FromMilliseconds(); // Function Engine.KismetMathLibrary.FromMilliseconds // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x670b4ec
};

// Class Engine.*e13d399c17
// Size: 0x30 (Inherited: 0x30)
struct U*e13d399c17 : UBlueprintFunctionLibrary {

	bool *08c3d514e2(); // Function Engine.*e13d399c17.*08c3d514e2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675bcac
	bool *6d99c31b34(); // Function Engine.*e13d399c17.*6d99c31b34 // Final|Native|Static|Public|BlueprintCallable // @ game+0x675c080
	bool *c823e9f8d4(); // Function Engine.*e13d399c17.*c823e9f8d4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x675bf80
	int32 *0c1acae13e(); // Function Engine.*e13d399c17.*0c1acae13e // Final|Native|Static|Public|BlueprintCallable // @ game+0x675bb34
	bool *051348523e(); // Function Engine.*e13d399c17.*051348523e // Final|Native|Static|Public|BlueprintCallable // @ game+0x67524d0
	struct FString *b52a1fe260(); // Function Engine.*e13d399c17.*b52a1fe260 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675968c
	int32 *b4f3a82b0f(); // Function Engine.*e13d399c17.*b4f3a82b0f // Final|Native|Static|Public|BlueprintCallable // @ game+0x67598b0
	struct FName *7306d53246(); // Function Engine.*e13d399c17.*7306d53246 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6759598
	int32 *7ccfe92562(); // Function Engine.*e13d399c17.*7ccfe92562 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67546f8
	bool *54f77b6d82(); // Function Engine.*e13d399c17.*54f77b6d82 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67597c4
	int32 *6d70a73f1c(); // Function Engine.*e13d399c17.*6d70a73f1c // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x6760058
	int32 *13c6a5123a(); // Function Engine.*e13d399c17.*13c6a5123a // Final|Native|Static|Public|BlueprintCallable // @ game+0x675ad74
	int32 *1fc97a81cf(); // Function Engine.*e13d399c17.*1fc97a81cf // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x675477c
};

// Class Engine.KismetRenderingLibrary
// Size: 0x30 (Inherited: 0x30)
struct UKismetRenderingLibrary : UBlueprintFunctionLibrary {

	struct FLinearColor *ae0d0c8ace(); // Function Engine.KismetRenderingLibrary.*ae0d0c8ace // Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6754860
	struct FString ExportTexture2D(); // Function Engine.KismetRenderingLibrary.ExportTexture2D // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x675840c
	struct UTextureRenderTarget2D* *b496a8a566(); // Function Engine.KismetRenderingLibrary.*b496a8a566 // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6756ebc
	struct F*f86f4b653b MakeSkinWeightInfo(); // Function Engine.KismetRenderingLibrary.MakeSkinWeightInfo // Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675fd94
	bool BreakSkinWeightInfo(); // Function Engine.KismetRenderingLibrary.BreakSkinWeightInfo // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67525a4
	struct FString ExportRenderTarget(); // Function Engine.KismetRenderingLibrary.ExportRenderTarget // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6758244
	struct F*8e68bd796f BeginDrawCanvasToRenderTarget(); // Function Engine.KismetRenderingLibrary.BeginDrawCanvasToRenderTarget // Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67522e0
	struct F*8e68bd796f EndDrawCanvasToRenderTarget(); // Function Engine.KismetRenderingLibrary.EndDrawCanvasToRenderTarget // Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67579a0
	struct UTexture2D* *c5c3997d1c(); // Function Engine.KismetRenderingLibrary.*c5c3997d1c // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6756a14
	struct UMaterialInterface* DrawMaterialToRenderTarget(); // Function Engine.KismetRenderingLibrary.DrawMaterialToRenderTarget // Final|RequiredAPI|Native|Static|Public|BlueprintCallable // @ game+0x6757508
};

// Class Engine.*73a69f9d12
// Size: 0x30 (Inherited: 0x30)
struct U*73a69f9d12 : UBlueprintFunctionLibrary {

	struct FString *073aea8bb4(); // Function Engine.*73a69f9d12.*073aea8bb4 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6754ba0
	struct FString *cd51696176(); // Function Engine.*73a69f9d12.*cd51696176 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675f158
	struct FString *e93fd99db6(); // Function Engine.*73a69f9d12.*e93fd99db6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6755918
	struct FString *12c4475030(); // Function Engine.*73a69f9d12.*12c4475030 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6764cfc
	struct FString *2bacb3aafa(); // Function Engine.*73a69f9d12.*2bacb3aafa // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x675557c
	struct FString *df8d6c2033(); // Function Engine.*73a69f9d12.*df8d6c2033 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbae380
	struct FString *7e743598fb(); // Function Engine.*73a69f9d12.*7e743598fb // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x675c8ec
	struct FString *a4f37e3e14(); // Function Engine.*73a69f9d12.*a4f37e3e14 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xaf4a7c
	struct FString *49be24d162(); // Function Engine.*73a69f9d12.*49be24d162 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67651d4
	bool *d19da177ef(); // Function Engine.*73a69f9d12.*d19da177ef // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6757db0
	struct FString *774e459449(); // Function Engine.*73a69f9d12.*774e459449 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67540ac
	struct FString *e987d68786(); // Function Engine.*73a69f9d12.*e987d68786 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6756650
	struct TArray<struct FString> *f9cb5b722b(); // Function Engine.*73a69f9d12.*f9cb5b722b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67611b0
	struct FString *70eb3b45aa(); // Function Engine.*73a69f9d12.*70eb3b45aa // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67542e4
	struct FString Replace(); // Function Engine.*73a69f9d12.Replace // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6761770
	struct FString Mid(); // Function Engine.*73a69f9d12.Mid // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67602d0
	int32 *6017959641(); // Function Engine.*73a69f9d12.*6017959641 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6756fd8
	int32 *b2eb76c758(); // Function Engine.*73a69f9d12.*b2eb76c758 // Final|Native|Static|Public|HasOutParms|BlueprintCallable // @ game+0x67619c4
	int32 *87961101a9(); // Function Engine.*73a69f9d12.*87961101a9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6755d50
	struct FString *9e21e454a6(); // Function Engine.*73a69f9d12.*9e21e454a6 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6754f2c
	struct TArray<struct FString> *2dd72ec551(); // Function Engine.*73a69f9d12.*2dd72ec551 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6758fa4
	bool *99afd38f17(); // Function Engine.*73a69f9d12.*99afd38f17 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67561a4
	bool StartsWith(); // Function Engine.*73a69f9d12.StartsWith // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6763c04
	struct FString Reverse(); // Function Engine.*73a69f9d12.Reverse // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6761bec
	struct FString *f7b6d4ad25(); // Function Engine.*73a69f9d12.*f7b6d4ad25 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6753310
	struct FString *2de0f5cb9b(); // Function Engine.*73a69f9d12.*2de0f5cb9b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x676213c
	struct FString *ede3d62da4(); // Function Engine.*73a69f9d12.*ede3d62da4 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x675378c
	bool Split(); // Function Engine.*73a69f9d12.Split // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6763930
	bool EndsWith(); // Function Engine.*73a69f9d12.EndsWith // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6757a88
	struct FString *e22fa5e649(); // Function Engine.*73a69f9d12.*e22fa5e649 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbde2a4
	struct FString *6f1513cae0(); // Function Engine.*73a69f9d12.*6f1513cae0 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6755760
	struct FString *a67cfe153d(); // Function Engine.*73a69f9d12.*a67cfe153d // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675b578
	struct FString *a6c4484b78(); // Function Engine.*73a69f9d12.*a6c4484b78 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6761f50
	bool NotEqual_StrStr(); // Function Engine.*73a69f9d12.NotEqual_StrStr // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67608ec
	bool *6d5505dd4f(); // Function Engine.*73a69f9d12.*6d5505dd4f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6757f28
	int32 *1da39e2bb2(); // Function Engine.*73a69f9d12.*1da39e2bb2 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67589dc
	struct FString ToLower(); // Function Engine.*73a69f9d12.ToLower // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6764de4
	struct FString *57ec646a1b(); // Function Engine.*73a69f9d12.*57ec646a1b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67539e0
	struct FString *cc1b42f995(); // Function Engine.*73a69f9d12.*cc1b42f995 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6753550
	bool Contains(); // Function Engine.*73a69f9d12.Contains // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67549b0
	struct FString *bcb8f25ef8(); // Function Engine.*73a69f9d12.*bcb8f25ef8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675f334
	struct FString *3888e90eec(); // Function Engine.*73a69f9d12.*3888e90eec // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6756380
	struct FString Right(); // Function Engine.*73a69f9d12.Right // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6761d6c
	struct FString Trim(); // Function Engine.*73a69f9d12.Trim // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6765044
	bool *8e5423cd43(); // Function Engine.*73a69f9d12.*8e5423cd43 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6755e1c
	struct FString *3f364c658a(); // Function Engine.*73a69f9d12.*3f364c658a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6753c1c
	bool *1b84f50975(); // Function Engine.*73a69f9d12.*1b84f50975 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x676013c
	struct FString *65b31f2f19(); // Function Engine.*73a69f9d12.*65b31f2f19 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6753e58
	float *56afa2a25f(); // Function Engine.*73a69f9d12.*56afa2a25f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6755c7c
	struct FString *cc353e651f(); // Function Engine.*73a69f9d12.*cc353e651f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbac324
	struct FString *8f182e3188(); // Function Engine.*73a69f9d12.*8f182e3188 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6754d60
	struct FName *f1902dde76(); // Function Engine.*73a69f9d12.*f1902dde76 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xbaec34
	bool *e5857d8521(); // Function Engine.*73a69f9d12.*e5857d8521 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675c570
	struct FString Left(); // Function Engine.*73a69f9d12.Left // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675ef80
	struct FString ToUpper(); // Function Engine.*73a69f9d12.ToUpper // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6764efc
	bool *500bd8bdb1(); // Function Engine.*73a69f9d12.*500bd8bdb1 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6755b00
	int32 Len(); // Function Engine.*73a69f9d12.Len // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675f4a4
	struct FString *9f1056e997(); // Function Engine.*73a69f9d12.*9f1056e997 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67530c4
	struct FString *5b7c0d7800(); // Function Engine.*73a69f9d12.*5b7c0d7800 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x675682c
	struct FString *cd8a1d51ed(); // Function Engine.*73a69f9d12.*cd8a1d51ed // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6752e78
	int32 *7806dfb910(); // Function Engine.*73a69f9d12.*7806dfb910 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6759088
	bool NotEqual_StriStri(); // Function Engine.*73a69f9d12.NotEqual_StriStri // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6760a64
	bool *762149fa6e(); // Function Engine.*73a69f9d12.*762149fa6e // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6755ff8
};

// Class Engine.*fe549bab68
// Size: 0x30 (Inherited: 0x30)
struct U*fe549bab68 : UBlueprintFunctionLibrary {

	struct FString *d9465df6a9(); // Function Engine.*fe549bab68.*d9465df6a9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675b8d0
	bool *985a27d2c5(); // Function Engine.*fe549bab68.*985a27d2c5 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675c774
	bool *8ba1d6ea1e(); // Function Engine.*fe549bab68.*8ba1d6ea1e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675c658
	struct FString *bf07a9613f(); // Function Engine.*fe549bab68.*bf07a9613f // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675ba3c
	struct TArray<struct FName> *eee91676f7(); // Function Engine.*fe549bab68.*eee91676f7 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675aeb8
	struct TArray<struct FString> *12e86d0328(); // Function Engine.*fe549bab68.*12e86d0328 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6759e0c
	struct TArray<struct FName> *dccf5243c8(); // Function Engine.*fe549bab68.*dccf5243c8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675a1a4
	struct FString *da7a7cee53(); // Function Engine.*fe549bab68.*da7a7cee53 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675b720
};

// Class Engine.*1854f52b3f
// Size: 0x30 (Inherited: 0x30)
struct U*1854f52b3f : UBlueprintFunctionLibrary {

	bool *ace73fcdb8(); // Function Engine.*1854f52b3f.*ace73fcdb8 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6764680
	struct FText *8580638738(); // Function Engine.*1854f52b3f.*8580638738 // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6755020
	struct FText Format(); // Function Engine.*1854f52b3f.Format // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x917de0
	bool *5ff42115da(); // Function Engine.*1854f52b3f.*5ff42115da // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67643e4
	struct FText *1c83b5bfd8(); // Function Engine.*1854f52b3f.*1c83b5bfd8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6755840
	struct FText *88aeae4251(); // Function Engine.*1854f52b3f.*88aeae4251 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6751088
	struct FText *e9b297bd26(); // Function Engine.*1854f52b3f.*e9b297bd26 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67553c0
	bool *1e9dc9a72c(); // Function Engine.*1854f52b3f.*1e9dc9a72c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67645a4
	bool *d77c592423(); // Function Engine.*1854f52b3f.*d77c592423 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6757c1c
	struct FText *763b72ef8c(); // Function Engine.*1854f52b3f.*763b72ef8c // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x676487c
	struct FText *8796a79fd0(); // Function Engine.*1854f52b3f.*8796a79fd0 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6764abc
	bool *897f2b0171(); // Function Engine.*1854f52b3f.*897f2b0171 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6763f54
	bool *ce6c7ef95b(); // Function Engine.*1854f52b3f.*ce6c7ef95b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6760758
	struct FText *73b37409de(); // Function Engine.*1854f52b3f.*73b37409de // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x676499c
	struct FText *cb381bf8ad(); // Function Engine.*1854f52b3f.*cb381bf8ad // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6756758
	struct FText *e784773243(); // Function Engine.*1854f52b3f.*e784773243 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67564c0
	bool *2b503add08(); // Function Engine.*1854f52b3f.*2b503add08 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67580b4
	struct FText *537e50a8a5(); // Function Engine.*1854f52b3f.*537e50a8a5 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6751ef8
	struct FText *4c308bdbc3(); // Function Engine.*1854f52b3f.*4c308bdbc3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67517e4
	struct FText *67c7abda1a(); // Function Engine.*1854f52b3f.*67c7abda1a // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67518c4
	struct FText *62eaa5d275(); // Function Engine.*1854f52b3f.*62eaa5d275 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6755100
	struct FText *7c9bb147cf(); // Function Engine.*1854f52b3f.*7c9bb147cf // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6764bdc
	struct FText *b7b407c05e(); // Function Engine.*1854f52b3f.*b7b407c05e // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x676475c
	struct FText *29ff361299(); // Function Engine.*1854f52b3f.*29ff361299 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6754c84
	struct FText *153f70a923(); // Function Engine.*1854f52b3f.*153f70a923 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6751b84
	bool *722de444d3(); // Function Engine.*1854f52b3f.*722de444d3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x67644c0
	struct FText *e24a772803(); // Function Engine.*1854f52b3f.*e24a772803 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675567c
	struct FText *c86084dd4b(); // Function Engine.*1854f52b3f.*c86084dd4b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67520b0
	struct FText *05802ee632(); // Function Engine.*1854f52b3f.*05802ee632 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6759468
	struct FText *8a82cf7916(); // Function Engine.*1854f52b3f.*8a82cf7916 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0xc4a12c
	struct FText *1efc0cffbb(); // Function Engine.*1854f52b3f.*1efc0cffbb // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6754e54
	struct FString *535f3ea46b(); // Function Engine.*1854f52b3f.*535f3ea46b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0xb72f50
	struct FText *5f4dd75c2e(); // Function Engine.*1854f52b3f.*5f4dd75c2e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x675692c
	struct FText *61db719c70(); // Function Engine.*1854f52b3f.*61db719c70 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6751d40
	struct FText *1f9a986213(); // Function Engine.*1854f52b3f.*1f9a986213 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6750ebc
	bool *96e07faba3(); // Function Engine.*1854f52b3f.*96e07faba3 // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6758bf8
	bool *8e4e21588b(); // Function Engine.*1854f52b3f.*8e4e21588b // Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x6760bf0
	struct FText *c0c8f59ba8(); // Function Engine.*1854f52b3f.*c0c8f59ba8 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67513c8
	struct FText *7eb3d0d9f4(); // Function Engine.*1854f52b3f.*7eb3d0d9f4 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6752190
	struct FText *a37aa2c382(); // Function Engine.*1854f52b3f.*a37aa2c382 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6764280
	struct FText *6a802fec1b(); // Function Engine.*1854f52b3f.*6a802fec1b // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6751704
	struct FText *2b98407e2e(); // Function Engine.*1854f52b3f.*2b98407e2e // Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6755a18
};

// Class Engine.*82aed643ad
// Size: 0x30 (Inherited: 0x30)
struct U*82aed643ad : UBlueprintFunctionLibrary {

	struct UStaticMeshComponent* *14ec77eeef(); // Function Engine.*82aed643ad.*14ec77eeef // Final|Native|Static|Public|BlueprintCallable // @ game+0x67616e0
	bool *128ae1947d(); // Function Engine.*82aed643ad.*128ae1947d // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6761080
	bool *c55f45e387(); // Function Engine.*82aed643ad.*c55f45e387 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6760ea4
};

// Class Engine.World
// Size: 0xc60 (Inherited: 0x30)
struct UWorld : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct UNetDriver* NetDriver; // 0x40(0x08)
	struct U*f86c43296e* *8fb0e63082; // 0x48(0x08)
	struct U*f86c43296e* *3b0c1042e1; // 0x50(0x08)
	struct U*f86c43296e* *d0e27f997f; // 0x58(0x08)
	struct AGameNetworkManager* *3f5c62d694; // 0x60(0x08)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandler; // 0x68(0x08)
	struct TArray<struct UObject*> *aef9542c2e; // 0x70(0x10)
	struct TArray<struct UObject*> *fda2efea45; // 0x80(0x10)
	struct FString *f32cc747a4; // 0x90(0x10)
	struct ULevel* *73cb6d7580; // 0xa0(0x08)
	struct ULevel* *ace3157035; // 0xa8(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0xb0(0x08)
	struct AParticleEventManager* *ec5c3ebc6b; // 0xb8(0x08)
	struct APhysicsVolume* *4acc738e70; // 0xc0(0x08)
	struct TArray<struct ULevelStreaming*> *dfc1b32a2b; // 0xc8(0x10)
	char pad_D8[0x30]; // 0xd8(0x30)
	struct UNavigationSystem* NavigationSystem; // 0x108(0x08)
	struct AGameModeBase* *6d163e35e7; // 0x110(0x08)
	char pad_118[0x8]; // 0x118(0x08)
	struct UAISystemBase* AISystem; // 0x120(0x08)
	struct UAvoidanceManager* AvoidanceManager; // 0x128(0x08)
	struct TArray<struct ULevel*> Levels; // 0x130(0x10)
	struct TArray<struct F*306e3a1221> *5cf7cd27e7; // 0x140(0x10)
	char pad_150[0x8]; // 0x150(0x08)
	struct ULevel* CurrentLevel; // 0x158(0x08)
	char pad_160[0x8]; // 0x160(0x08)
	struct TArray<struct U*83566278c1*> *166a3fbb87; // 0x168(0x10)
	struct UCanvas* *1b40d05ca0; // 0x178(0x08)
	struct UCanvas* *7e9aedb8b9; // 0x180(0x08)
	struct UDirectionalLightComponent* *a75f859367; // 0x188(0x08)
	char pad_190[0x848]; // 0x190(0x848)
	struct UWorldComposition* WorldComposition; // 0x9d8(0x08)
	char pad_9E0[0x4a]; // 0x9e0(0x4a)
	char *c71905e76e : 1; // 0xa2a(0x01)
	char pad_A2A_1 : 7; // 0xa2a(0x01)
	char pad_A2B[0x6d]; // 0xa2b(0x6d)
	struct TMap<struct F*08d289b359, struct F*05429c5581> *81d15e9ce9; // 0xa98(0x50)
	char pad_AE8[0x178]; // 0xae8(0x178)
};

// Class Engine.NavigationSystem
// Size: 0x4e0 (Inherited: 0x30)
struct UNavigationSystem : UBlueprintFunctionLibrary {
	struct ANavigationData* *b2cb2469c8; // 0x30(0x08)
	struct ANavigationData* *b41929222e; // 0x38(0x08)
	char bAutoCreateNavigationData : 1; // 0x40(0x01)
	char bAllowClientSideNavigation : 1; // 0x40(0x01)
	char *bc4d9ab0ba : 1; // 0x40(0x01)
	char bInitialBuildingLocked : 1; // 0x40(0x01)
	char pad_40_4 : 1; // 0x40(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x40(0x01)
	char pad_40_6 : 2; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float ActiveTilesUpdateInterval; // 0x4c(0x04)
	struct TArray<struct F*b03cbfc63f> SupportedAgents; // 0x50(0x10)
	float DirtyAreasUpdateFreq; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct ANavigationData*> *121f6589dd; // 0x68(0x10)
	struct TArray<struct FBox> *7ea6a37295; // 0x78(0x10)
	struct TMap<int32, struct ANavigationData*> *f313754252; // 0x88(0x50)
	struct TArray<struct ANavigationData*> *11359c18e5; // 0xd8(0x10)
	char pad_E8[0x60]; // 0xe8(0x60)
	struct FMulticastDelegate *6b592b1bf9; // 0x148(0x10)
	struct FMulticastDelegate OnNavigationGenerationFinishedDelegate; // 0x158(0x10)
	char pad_168[0x12c]; // 0x168(0x12c)
	enum class FNavigationSystemRunMode OperationMode; // 0x294(0x01)
	char pad_295[0x243]; // 0x295(0x243)
	uint32 DynamicNavThreadNum; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)

	struct UNavigationSystem* *22c0b0c97e(); // Function Engine.NavigationSystem.*22c0b0c97e // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675a310
	struct UNavigationPath* *ff8c94d53c(); // Function Engine.NavigationSystem.*ff8c94d53c // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67585d4
	enum class ENavigationQueryResult *4b20078d80(); // Function Engine.NavigationSystem.*4b20078d80 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x675a494
	struct F*e11f2ef86c *7d1ec64de0(); // Function Engine.NavigationSystem.*7d1ec64de0 // Final|Native|Public|BlueprintCallable // @ game+0x6765648
	enum class ENavigationQueryResult GetPathLength(); // Function Engine.NavigationSystem.GetPathLength // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x675a710
	bool *a2c3194a9a(); // Function Engine.NavigationSystem.*a2c3194a9a // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x675ea90
	bool *d5db22c08c(); // Function Engine.NavigationSystem.*d5db22c08c // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675c3e8
	struct FVector *d35c9eb33f(); // Function Engine.NavigationSystem.*d35c9eb33f // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x67637b4
	int32 *78f3130694(); // Function Engine.NavigationSystem.*78f3130694 // Final|Native|Public|BlueprintCallable // @ game+0x67628d0
	struct FVector ProjectPointToNavigation(); // Function Engine.NavigationSystem.ProjectPointToNavigation // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x67613a8
	struct AActor* *ba44b718ea(); // Function Engine.NavigationSystem.*ba44b718ea // Final|Native|Public|BlueprintCallable // @ game+0x6765554
	struct FVector GetRandomPointInNavigableRadius(); // Function Engine.NavigationSystem.GetRandomPointInNavigableRadius // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x675a994
	void *a901a50e1d(); // Function Engine.NavigationSystem.*a901a50e1d // Final|Native|Public|BlueprintCallable // @ game+0x6761bd8
	bool *9bd027a3c8(); // Function Engine.NavigationSystem.*9bd027a3c8 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x675e45c
	enum class ENavDataGatheringModeConfig *5c8cc2270e(); // Function Engine.NavigationSystem.*5c8cc2270e // Final|Native|Public|BlueprintCallable // @ game+0x6762838
	bool *43cbdf84fe(); // Function Engine.NavigationSystem.*43cbdf84fe // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x675e22c
	bool *3108943cf9(); // Function Engine.NavigationSystem.*3108943cf9 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675c4ac
	struct ANavMeshBoundsVolume* *fd0e38ab9e(); // Function Engine.NavigationSystem.*fd0e38ab9e // Final|Native|Public|BlueprintCallable // @ game+0x6760d80
	struct FVector GetRandomReachablePointInRadius(); // Function Engine.NavigationSystem.GetRandomReachablePointInRadius // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x675ab84
	struct UNavigationPath* *da02dcdbe2(); // Function Engine.NavigationSystem.*da02dcdbe2 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x6758800
	struct AActor* *af9d54cd61(); // Function Engine.NavigationSystem.*af9d54cd61 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67636dc
	float *e8191cdcec(); // Function Engine.NavigationSystem.*e8191cdcec // Final|Native|Public|BlueprintCallable // @ game+0x67615b8
	bool *2dcec5afdb(); // Function Engine.NavigationSystem.*2dcec5afdb // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x676050c
};

// Class Engine.*29ed659913
// Size: 0x30 (Inherited: 0x30)
struct U*29ed659913 : UBlueprintFunctionLibrary {

	void *1b166ad371(); // Function Engine.*29ed659913.*1b166ad371 // Final|Native|Static|Public|BlueprintCallable // @ game+0x675c154
	bool *abf3242c5e(); // Function Engine.*29ed659913.*abf3242c5e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6757668
	void *4aaaa371e8(); // Function Engine.*29ed659913.*4aaaa371e8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x67634dc
	bool *cb456f82fe(); // Function Engine.*29ed659913.*cb456f82fe // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6762f94
};

// Class Engine.*d7c7ca53b6
// Size: 0x38 (Inherited: 0x38)
struct U*d7c7ca53b6 : U*aa1b1772f0 {
};

// Class Engine.*a95d2adb51
// Size: 0x38 (Inherited: 0x38)
struct U*a95d2adb51 : U*fc2452f674 {
};

// Class Engine.*29263d06d8
// Size: 0x30 (Inherited: 0x30)
struct U*29263d06d8 : UBlueprintFunctionLibrary {

	struct U*d7c7ca53b6* *1fff65f345(); // Function Engine.*29263d06d8.*1fff65f345 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x67594fc
	struct U*a95d2adb51* *f9a66e22cf(); // Function Engine.*29263d06d8.*f9a66e22cf // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6759fec
	struct U*c140cbf96a* *1cf3c5d31b(); // Function Engine.*29263d06d8.*1cf3c5d31b // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x6759a18
	struct U*a95d2adb51* *d1b09a3261(); // Function Engine.*29263d06d8.*d1b09a3261 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675a0c8
	struct U*ee34789f9a* *ce79e1d639(); // Function Engine.*29263d06d8.*ce79e1d639 // Final|Native|Static|Public|BlueprintCallable|BlueprintPure // @ game+0x675be8c
};

// Class Engine.*01251ce1bf
// Size: 0x30 (Inherited: 0x30)
struct U*01251ce1bf : UBlueprintFunctionLibrary {

	struct FName *a1fce70043(); // Function Engine.*01251ce1bf.*a1fce70043 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x675f788
	struct FName LogText(); // Function Engine.*01251ce1bf.LogText // Final|Native|Static|Public|BlueprintCallable // @ game+0x675fc08
	struct FName LogLocation(); // Function Engine.*01251ce1bf.LogLocation // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x675f9a0
};

// Class Engine.*62cedba6b9
// Size: 0x40 (Inherited: 0x30)
struct U*62cedba6b9 : UObject {
	struct UEdGraphNode* Node; // 0x30(0x08)
	struct FColor *75eb089f7c; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.AnimBlueprintGeneratedClass
// Size: 0x438 (Inherited: 0x3c8)
struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct TArray<struct F*45829eece0> *073aef8165; // 0x3d0(0x10)
	struct USkeleton* TargetSkeleton; // 0x3e0(0x08)
	struct TArray<struct FAnimNotifyEvent> *7d5fd86b1a; // 0x3e8(0x10)
	int32 *e2f868160f; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct TArray<int32> *175c30b816; // 0x400(0x10)
	char pad_410[0x18]; // 0x410(0x18)
	struct TArray<struct FName> *827cd75a21; // 0x428(0x10)
};

// Class Engine.BodySetup
// Size: 0x3c0 (Inherited: 0x30)
struct UBodySetup : UObject {
	struct F*2e556aea7d *d7fdd2fab9; // 0x30(0x48)
	struct FName BoneName; // 0x78(0x08)
	enum class EPhysicsType PhysicsType; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	char bAlwaysFullAnimWeight : 1; // 0x84(0x01)
	char bConsiderForBounds : 1; // 0x84(0x01)
	char *681d279244 : 1; // 0x84(0x01)
	char *a32c9b021d : 1; // 0x84(0x01)
	char *536be30542 : 1; // 0x84(0x01)
	char *72bb97fdca : 1; // 0x84(0x01)
	char *9036d4855e : 1; // 0x84(0x01)
	char pad_84_7 : 1; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x88(0x08)
	enum class *62a2518dba CollisionReponse; // 0x90(0x01)
	enum class ECollisionTraceFlag *5c8cb7405b; // 0x91(0x01)
	char pad_92[0xe]; // 0x92(0x0e)
	struct FBodyInstance DefaultInstance; // 0xa0(0x240)
	struct F*705bbdf923 *705bbdf923; // 0x2e0(0x10)
	float MinContactOffset; // 0x2f0(0x04)
	float BuildScale; // 0x2f4(0x04)
	struct FVector BuildScale3D; // 0x2f8(0x0c)
	char pad_304[0xbc]; // 0x304(0xbc)
};

// Class Engine.*977ee1fd46
// Size: 0x3f0 (Inherited: 0x3c0)
struct U*977ee1fd46 : UBodySetup {
	struct F*b917cfcde2 *33a792f21a; // 0x3c0(0x30)
};

// Class Engine.PhysicsAsset
// Size: 0x110 (Inherited: 0x30)
struct UPhysicsAsset : UObject {
	struct TArray<int32> *4afefbfeed; // 0x30(0x10)
	struct TArray<struct USkeletalBodySetup*> *f3e370e0a1; // 0x40(0x10)
	struct TArray<struct UPhysicsConstraintTemplate*> *ea35f54601; // 0x50(0x10)
	char pad_60[0xa0]; // 0x60(0xa0)
	struct TArray<struct UBodySetup*> BodySetup; // 0x100(0x10)
};

// Class Engine.SkeletalBodySetup
// Size: 0x3d0 (Inherited: 0x3c0)
struct USkeletalBodySetup : UBodySetup {
	struct TArray<struct F*f00cf5419d> *d61531db2a; // 0x3c0(0x10)
};

// Class Engine.*6ab551cb01
// Size: 0x40 (Inherited: 0x30)
struct U*6ab551cb01 : UObject {
	struct TArray<struct FInputBlendPose> *666963b4f4; // 0x30(0x10)
};

// Class Engine.*8380fce329
// Size: 0x58 (Inherited: 0x30)
struct U*8380fce329 : UObject {
	struct FVector Location; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	struct TArray<struct FString> *259e2b9dba; // 0x48(0x10)
};

// Class Engine.*047a349ead
// Size: 0x40 (Inherited: 0x30)
struct U*047a349ead : UObject {
	float *45af98b148; // 0x30(0x04)
	struct FIntPoint Location; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.Breakpoint
// Size: 0x48 (Inherited: 0x30)
struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UEdGraphNode* Node; // 0x38(0x08)
	char *a9b99064a3 : 1; // 0x40(0x01)
	char *4f6081de6e : 1; // 0x40(0x01)
	char *5ffdb791dc : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.BrushBuilder
// Size: 0x88 (Inherited: 0x30)
struct UBrushBuilder : UObject {
	struct FString *7ae9809697; // 0x30(0x10)
	struct FString Tooltip; // 0x40(0x10)
	char *dae00cbdea : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FVector> Vertices; // 0x58(0x10)
	struct TArray<struct F*1afc032eaa> Polys; // 0x68(0x10)
	struct FName Layer; // 0x78(0x08)
	char *c539635816 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ButtonStyleAsset
// Size: 0x2d8 (Inherited: 0x30)
struct UButtonStyleAsset : UObject {
	struct F*23cea9d391 *23cea9d391; // 0x30(0x2a8)
};

// Class Engine.CameraAnim
// Size: 0x5e0 (Inherited: 0x30)
struct UCameraAnim : UObject {
	struct U*dcbf48820b* *0b4124f610; // 0x30(0x08)
	float AnimLength; // 0x38(0x04)
	struct FBox BoundingBox; // 0x3c(0x1c)
	char *85be0eccfd : 1; // 0x58(0x01)
	char *7813181b4f : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float *1ed2100235; // 0x5c(0x04)
	struct FPostProcessSettings *f3bd368c72; // 0x60(0x570)
	float *212ffdb67f; // 0x5d0(0x04)
	char pad_5D4[0xc]; // 0x5d4(0x0c)
};

// Class Engine.*d3f66f5eff
// Size: 0x120 (Inherited: 0x30)
struct U*d3f66f5eff : UObject {
	struct UCameraAnim* *77485763a7; // 0x30(0x08)
	struct U*9a21d771a7* *9a21d771a7; // 0x38(0x08)
	char pad_40[0x18]; // 0x40(0x18)
	float PlayRate; // 0x58(0x04)
	char pad_5C[0x14]; // 0x5c(0x14)
	struct U*d8af95ff19* *e2cec60f2b; // 0x70(0x08)
	struct U*3749437e8c* *4e89f2b7f3; // 0x78(0x08)
	enum class ECameraAnimPlaySpace *bd31187e3f; // 0x80(0x01)
	char pad_81[0x9f]; // 0x81(0x9f)

	float SetScale(); // Function Engine.*d3f66f5eff.SetScale // Final|Native|Public|BlueprintCallable // @ game+0x6762de8
	bool Stop(); // Function Engine.*d3f66f5eff.Stop // Final|Native|Public|BlueprintCallable // @ game+0x6763d98
	float SetDuration(); // Function Engine.*d3f66f5eff.SetDuration // Final|Native|Public|BlueprintCallable // @ game+0x676254c
};

// Class Engine.*5ff6efacd0
// Size: 0x50 (Inherited: 0x30)
struct U*5ff6efacd0 : UObject {
	char *1036e37579 : 1; // 0x30(0x01)
	char bExclusive : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	bool Priority; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct APlayerCameraManager* CameraOwner; // 0x38(0x08)
	float AlphaInTime; // 0x40(0x04)
	float AlphaOutTime; // 0x44(0x04)
	float Alpha; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	float BlueprintModifyCamera(); // Function Engine.*5ff6efacd0.BlueprintModifyCamera // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintEvent // @ game+0x22c9a0
	struct AActor* *3dcfe68cdd(); // Function Engine.*5ff6efacd0.*3dcfe68cdd // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xd9e92c
	struct FPostProcessSettings BlueprintModifyPostProcess(); // Function Engine.*5ff6efacd0.BlueprintModifyPostProcess // BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent // @ game+0x22c9a0
	bool *125d9eff91(); // Function Engine.*5ff6efacd0.*125d9eff91 // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6754538
	bool *61b8b7f6c7(); // Function Engine.*5ff6efacd0.*61b8b7f6c7 // Native|Public|BlueprintCallable // @ game+0x6757470
	void *3264c0e4b9(); // Function Engine.*5ff6efacd0.*3264c0e4b9 // Native|Public|BlueprintCallable // @ game+0x59b0974
};

// Class Engine.*f2efdc3e42
// Size: 0x68 (Inherited: 0x50)
struct U*f2efdc3e42 : U*5ff6efacd0 {
	struct TArray<struct UCameraShake*> *5207842025; // 0x50(0x10)
	float *4afad756b7; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.Canvas
// Size: 0x2f0 (Inherited: 0x30)
struct UCanvas : UObject {
	float OrgX; // 0x30(0x04)
	float OrgY; // 0x34(0x04)
	float *9fd4bcd09b; // 0x38(0x04)
	float *4dec79c7aa; // 0x3c(0x04)
	struct FColor DrawColor; // 0x40(0x04)
	char *52d72b41b3 : 1; // 0x44(0x01)
	char *ccf31ac64e : 1; // 0x44(0x01)
	char *675b23046f : 1; // 0x44(0x01)
	char pad_44_3 : 5; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32 SizeX; // 0x48(0x04)
	int32 SizeY; // 0x4c(0x04)
	struct FPlane *ef1e1fe358; // 0x50(0x10)
	struct UTexture2D* DefaultTexture; // 0x60(0x08)
	struct UTexture2D* GradientTexture0; // 0x68(0x08)
	struct U*66966b0634* *66966b0634; // 0x70(0x08)
	char pad_78[0x278]; // 0x78(0x278)

	struct FVector2D *9d172bf769(); // Function Engine.Canvas.*9d172bf769 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x675ecc8
	struct FVector2D *16eae130bf(); // Function Engine.Canvas.*16eae130bf // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x675cc74
	float *12021943dd(); // Function Engine.Canvas.*12021943dd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x675d1c8
	struct TArray<struct F*35d6ebc38c> *3be49492f4(); // Function Engine.Canvas.*3be49492f4 // Final|Native|Public|BlueprintCallable // @ game+0x675e0f4
	struct FLinearColor *9db4e596b1(); // Function Engine.Canvas.*9db4e596b1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x675d2f0
	struct FVector *a7714626f6(); // Function Engine.Canvas.*a7714626f6 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x675cb20
	struct FLinearColor *3bc5c348d8(); // Function Engine.Canvas.*3bc5c348d8 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x675d7e8
	struct FVector *7c0cbe1db1(); // Function Engine.Canvas.*7c0cbe1db1 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x675e9cc
	struct FLinearColor *118212454e(); // Function Engine.Canvas.*118212454e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x675d9b4
	struct FVector2D *c8808817bd(); // Function Engine.Canvas.*c8808817bd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x675edf4
	struct FVector2D *8c7b787fb8(); // Function Engine.Canvas.*8c7b787fb8 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x675ddd8
	struct TArray<struct F*35d6ebc38c> *d9da78d0c9(); // Function Engine.Canvas.*d9da78d0c9 // Final|Native|Public|BlueprintCallable // @ game+0x675d6b0
	struct FVector2D *be041b885e(); // Function Engine.Canvas.*be041b885e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x675d444
};

// Class Engine.*a3751957dc
// Size: 0x88 (Inherited: 0x70)
struct U*a3751957dc : UChannel {
	char pad_70[0x18]; // 0x70(0x18)
};

// Class Engine.VoiceChannel
// Size: 0x80 (Inherited: 0x70)
struct UVoiceChannel : UChannel {
	char pad_70[0x10]; // 0x70(0x10)
};

// Class Engine.*2964725840
// Size: 0x610 (Inherited: 0x30)
struct U*2964725840 : UObject {
	struct F*9ea8125f90 *9ea8125f90; // 0x30(0x5e0)
};

// Class Engine.Commandlet
// Size: 0x88 (Inherited: 0x30)
struct UCommandlet : UObject {
	struct FString HelpDescription; // 0x30(0x10)
	struct FString HelpUsage; // 0x40(0x10)
	struct FString HelpWebLink; // 0x50(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x60(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x70(0x10)
	char IsServer : 1; // 0x80(0x01)
	char IsClient : 1; // 0x80(0x01)
	char IsEditor : 1; // 0x80(0x01)
	char LogToConsole : 1; // 0x80(0x01)
	char ShowErrorCount : 1; // 0x80(0x01)
	char pad_80_5 : 3; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*3189c6f422
// Size: 0xd0 (Inherited: 0x30)
struct U*3189c6f422 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UNetDriver* NetDriver; // 0x38(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x40(0x08)
	char pad_48[0x88]; // 0x48(0x88)
};

// Class Engine.GPCFakeEngine
// Size: 0xf50 (Inherited: 0xf50)
struct UGPCFakeEngine : UEngine {
};

// Class Engine.GatherPackageChainCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UGatherPackageChainCommandlet : UCommandlet {
};

// Class Engine.PluginCommandlet
// Size: 0xa8 (Inherited: 0x88)
struct UPluginCommandlet : UCommandlet {
	char pad_88[0x20]; // 0x88(0x20)
};

// Class Engine.SmokeTestCommandlet
// Size: 0x88 (Inherited: 0x88)
struct USmokeTestCommandlet : UCommandlet {
};

// Class Engine.*49a9561c78
// Size: 0x30 (Inherited: 0x30)
struct U*49a9561c78 : UInterface {
};

// Class Engine.*22e8771771
// Size: 0x1f8 (Inherited: 0x38)
struct U*22e8771771 : UCurveBase {
	struct FRichCurve *a77b996849[0x04]; // 0x38(0x1c0)

	struct FLinearColor *727a052ce8(); // Function Engine.*22e8771771.*727a052ce8 // Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6759f3c
};

// Class Engine.*e6746d9844
// Size: 0x188 (Inherited: 0x38)
struct U*e6746d9844 : UCurveBase {
	struct FRichCurve *a77b996849[0x03]; // 0x38(0x150)

	struct FVector *1aeebe9ec1(); // Function Engine.*e6746d9844.*1aeebe9ec1 // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x675bdac
};

// Class Engine.CurveEdPresetCurve
// Size: 0x30 (Inherited: 0x30)
struct UCurveEdPresetCurve : UObject {
};

// Class Engine.*36e98723ce
// Size: 0x30 (Inherited: 0x30)
struct U*36e98723ce : UInterface {

	struct TArray<struct F*5131b63981> GetCurves(); // Function Engine.*36e98723ce.GetCurves // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x6759284
	struct FName GetBindingName(); // Function Engine.*36e98723ce.GetBindingName // Native|Event|Public|BlueprintEvent|Const // @ game+0x597af44
	float GetCurveValue(); // Function Engine.*36e98723ce.GetCurveValue // Native|Event|Public|BlueprintEvent|Const // @ game+0x67591e0
};

// Class Engine.CurveTable
// Size: 0x88 (Inherited: 0x30)
struct UCurveTable : UObject {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class Engine.PreviewMeshCollection
// Size: 0x50 (Inherited: 0x38)
struct UPreviewMeshCollection : UDataAsset {
	struct USkeleton* Skeleton; // 0x38(0x08)
	struct TArray<struct FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40(0x10)
};

// Class Engine.PrimaryAssetLabel
// Size: 0x70 (Inherited: 0x38)
struct UPrimaryAssetLabel : U*c79083df2c {
	struct F*f9ffb81f61 Rules; // 0x38(0x10)
	char *6444f9fa12 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct UObject*> *9bad71ae3d; // 0x50(0x10)
	struct TArray<struct UClass*> *092b913e38; // 0x60(0x10)
};

// Class Engine.*e9cc7f9b0a
// Size: 0x40 (Inherited: 0x38)
struct U*e9cc7f9b0a : UDataAsset {
	float *569dda12ee; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.*094ee9f1e2
// Size: 0xc0 (Inherited: 0x30)
struct U*094ee9f1e2 : UObject {
	int32 *1b5f28f2a0; // 0x30(0x04)
	struct F*720f99d694 *13f9e040d7; // 0x34(0x24)
	int32 RandomSeed; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FVector> *8e81bdf0c3; // 0x60(0x10)
	int32 *96057dc4d8; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x78(0x10)
	struct TArray<struct F*7297c91968> ChunkParameters; // 0x88(0x10)
	char pad_98[0x28]; // 0x98(0x28)
};

// Class Engine.AnimationSettings
// Size: 0x78 (Inherited: 0x40)
struct UAnimationSettings : U*76e94c1d7f {
	int32 CompressCommandletVersion; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FString> KeyEndEffectorsMatchNameArray; // 0x48(0x10)
	struct UClass* DefaultCompressionAlgorithm; // 0x58(0x08)
	enum class AnimationCompressionFormat RotationCompressionFormat; // 0x60(0x01)
	enum class AnimationCompressionFormat TranslationCompressionFormat; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float MaxCurveError; // 0x64(0x04)
	float AlternativeCompressionThreshold; // 0x68(0x04)
	bool ForceRecompression; // 0x6c(0x01)
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x6d(0x01)
	bool bForceBelowThreshold; // 0x6e(0x01)
	bool bFirstRecompressUsingCurrentOrDefault; // 0x6f(0x01)
	bool bRaiseMaxErrorToExisting; // 0x70(0x01)
	bool bTryFixedBitwiseCompression; // 0x71(0x01)
	bool bTryPerTrackBitwiseCompression; // 0x72(0x01)
	bool bTryLinearKeyRemovalCompression; // 0x73(0x01)
	bool bTryIntervalKeyRemoval; // 0x74(0x01)
	bool bEnablePerformanceLog; // 0x75(0x01)
	bool bStripAnimationDataOnDedicatedServer; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
};

// Class Engine.AssetManagerSettings
// Size: 0xa8 (Inherited: 0x40)
struct UAssetManagerSettings : U*76e94c1d7f {
	struct TArray<struct F*e7db86bd45> PrimaryAssetTypesToScan; // 0x40(0x10)
	struct TArray<struct FDirectoryPath> DirectoriesToExclude; // 0x50(0x10)
	struct TArray<struct F*13efe27266> PrimaryAssetRules; // 0x60(0x10)
	bool bOnlyCookProductionAssets; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct F*94dae87bfe> PrimaryAssetIdRedirects; // 0x78(0x10)
	struct TArray<struct F*94dae87bfe> PrimaryAssetTypeRedirects; // 0x88(0x10)
	struct TArray<struct F*94dae87bfe> AssetPathRedirects; // 0x98(0x10)
};

// Class Engine.AudioSettings
// Size: 0xb8 (Inherited: 0x40)
struct UAudioSettings : U*76e94c1d7f {
	struct FStringAssetReference DefaultSoundClassName; // 0x40(0x10)
	struct FStringAssetReference DefaultSoundConcurrencyName; // 0x50(0x10)
	struct FStringAssetReference DefaultBaseSoundMix; // 0x60(0x10)
	struct FStringAssetReference VoiPSoundClass; // 0x70(0x10)
	float LowPassFilterResonance; // 0x80(0x04)
	int32 MaximumConcurrentStreams; // 0x84(0x04)
	struct TArray<struct F*1e6958a1a8> QualityLevels; // 0x88(0x10)
	char bAllowVirtualizedSounds : 1; // 0x98(0x01)
	char bDisableMasterEQ : 1; // 0x98(0x01)
	char bDisableMasterReverb : 1; // 0x98(0x01)
	char bAllowCenterChannel3DPanning : 1; // 0x98(0x01)
	char pad_98_4 : 4; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FString DialogueFilenameFormat; // 0xa0(0x10)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class Engine.ExcludedPackageSettings
// Size: 0x60 (Inherited: 0x40)
struct UExcludedPackageSettings : U*76e94c1d7f {
	struct TArray<struct FString> CommonExcludedPackages; // 0x40(0x10)
	struct TArray<struct FString> MinSpecExcludedPackages; // 0x50(0x10)
};

// Class Engine.StreamingSettings
// Size: 0x78 (Inherited: 0x40)
struct UStreamingSettings : U*76e94c1d7f {
	char AsyncLoadingThreadEnabled : 1; // 0x40(0x01)
	char WarnIfTimeLimitExceeded : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float TimeLimitExceededMultiplier; // 0x44(0x04)
	float TimeLimitExceededMinTime; // 0x48(0x04)
	int32 MinBulkDataSizeForAsyncLoading; // 0x4c(0x04)
	float AsyncIOBandwidthLimit; // 0x50(0x04)
	char UseBackgroundLevelStreaming : 1; // 0x54(0x01)
	char AsyncLoadingUseFullTimeLimit : 1; // 0x54(0x01)
	char LoadAllStreamingLevels : 1; // 0x54(0x01)
	char pad_54_3 : 5; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float AsyncLoadingTimeLimit; // 0x58(0x04)
	float PriorityAsyncLoadingExtraTime; // 0x5c(0x04)
	float LevelStreamingActorsUpdateTimeLimit; // 0x60(0x04)
	int32 LevelStreamingComponentsRegistrationGranularity; // 0x64(0x04)
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x68(0x04)
	int32 LevelStreamingComponentsUnregistrationGranularity; // 0x6c(0x04)
	char EventDrivenLoaderEnabled : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.GarbageCollectionSettings
// Size: 0x60 (Inherited: 0x40)
struct UGarbageCollectionSettings : U*76e94c1d7f {
	float TimeBetweenPurgingPendingKillObjects; // 0x40(0x04)
	char FlushStreamingOnGC : 1; // 0x44(0x01)
	char AllowParallelGC : 1; // 0x44(0x01)
	char IncrementalBeginDestroyEnabled : 1; // 0x44(0x01)
	char CreateGCClusters : 1; // 0x44(0x01)
	char MergeGCClusters : 1; // 0x44(0x01)
	char ActorClusteringEnabled : 1; // 0x44(0x01)
	char BlueprintClusteringEnabled : 1; // 0x44(0x01)
	char pad_44_7 : 1; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32 NumRetriesBeforeForcingGC; // 0x48(0x04)
	int32 MaxObjectsNotConsideredByGC; // 0x4c(0x04)
	int32 SizeOfPermanentObjectPool; // 0x50(0x04)
	int32 MaxObjectsInGame; // 0x54(0x04)
	int32 MaxObjectsInEditor; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.MeshSimplificationSettings
// Size: 0x48 (Inherited: 0x40)
struct UMeshSimplificationSettings : U*76e94c1d7f {
	struct FName MeshReductionModuleName; // 0x40(0x08)
};

// Class Engine.NetworkSettings
// Size: 0x50 (Inherited: 0x40)
struct UNetworkSettings : U*76e94c1d7f {
	char bVerifyPeer : 1; // 0x40(0x01)
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 MaxRepArraySize; // 0x44(0x04)
	int32 MaxRepArrayMemory; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.PhysicsSettings
// Size: 0xf8 (Inherited: 0x40)
struct UPhysicsSettings : U*76e94c1d7f {
	float DefaultGravityZ; // 0x40(0x04)
	float DefaultTerminalVelocity; // 0x44(0x04)
	float DefaultFluidFriction; // 0x48(0x04)
	int32 SimulateScratchMemorySize; // 0x4c(0x04)
	int32 RagdollAggregateThreshold; // 0x50(0x04)
	float TriangleMeshTriangleMinAreaThreshold; // 0x54(0x04)
	bool bEnableAsyncScene; // 0x58(0x01)
	bool bEnableShapeSharing; // 0x59(0x01)
	bool bEnableAsyncSceneOnDedicatedServer; // 0x5a(0x01)
	bool bEnableShapeSharingOnDedicatedServer; // 0x5b(0x01)
	bool bEnableComplexForSim; // 0x5c(0x01)
	bool bEnableComplexForSimOnDedicatedServer; // 0x5d(0x01)
	bool bEnablePCM; // 0x5e(0x01)
	bool bEnableStabilization; // 0x5f(0x01)
	bool bWarnMissingLocks; // 0x60(0x01)
	bool bEnable2DPhysics; // 0x61(0x01)
	enum class ESettingsLockedAxis LockedAxis; // 0x62(0x01)
	enum class ESettingsDOF DefaultDegreesOfFreedom; // 0x63(0x01)
	float BounceThresholdVelocity; // 0x64(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x68(0x01)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	float MaxAngularVelocity; // 0x6c(0x04)
	float MaxDepenetrationVelocity; // 0x70(0x04)
	float ContactOffsetMultiplier; // 0x74(0x04)
	float MinContactOffset; // 0x78(0x04)
	float MaxContactOffset; // 0x7c(0x04)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x80(0x01)
	enum class ECollisionTraceFlag DefaultShapeComplexity; // 0x81(0x01)
	bool bDefaultHasComplexCollision; // 0x82(0x01)
	bool bSuppressFaceRemapTable; // 0x83(0x01)
	bool bSupportUVFromHitResults; // 0x84(0x01)
	bool bDisableActiveActors; // 0x85(0x01)
	bool bDisableCCD; // 0x86(0x01)
	char pad_87[0x1]; // 0x87(0x01)
	float MaxPhysicsDeltaTime; // 0x88(0x04)
	bool bSubstepping; // 0x8c(0x01)
	bool bSubsteppingAsync; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	float MaxSubstepDeltaTime; // 0x90(0x04)
	int32 MaxSubsteps; // 0x94(0x04)
	float SyncSceneSmoothingFactor; // 0x98(0x04)
	float AsyncSceneSmoothingFactor; // 0x9c(0x04)
	float InitialAverageFrameRate; // 0xa0(0x04)
	float MaxPhysicsDeltaTimeOnDedicatedServer; // 0xa4(0x04)
	bool bSubsteppingOnDedicatedServer; // 0xa8(0x01)
	bool bSubsteppingAsyncOnDedicatedServer; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	float MaxSubstepDeltaTimeOnDedicatedServer; // 0xac(0x04)
	int32 MaxSubstepsOnDedicatedServer; // 0xb0(0x04)
	float SyncSceneSmoothingFactorOnDedicatedServer; // 0xb4(0x04)
	float AsyncSceneSmoothingFactorOnDedicatedServer; // 0xb8(0x04)
	float InitialAverageFrameRateOnDedicatedServer; // 0xbc(0x04)
	struct TArray<struct F*7fd8b39aa9> PhysicalSurfaces; // 0xc0(0x10)
	struct F*27e81fb8bf DefaultBroadphaseSettings; // 0xd0(0x28)
};

// Class Engine.RendererSettings
// Size: 0xc8 (Inherited: 0x40)
struct URendererSettings : U*76e94c1d7f {
	char bMobileHDR : 1; // 0x40(0x01)
	char bMobileDisableVertexFog : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32 MaxMobileCascades; // 0x44(0x04)
	enum class EMobileMSAASampleCount MobileMSAASampleCount; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	char bDiscardUnusedQualityLevels : 1; // 0x4c(0x01)
	char bOcclusionCulling : 1; // 0x4c(0x01)
	char pad_4C_2 : 6; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float MinScreenRadiusForLights; // 0x50(0x04)
	float MinScreenRadiusForEarlyZPass; // 0x54(0x04)
	float MinScreenRadiusForCSMdepth; // 0x58(0x04)
	char bPrecomputedVisibilityWarning : 1; // 0x5c(0x01)
	char bTextureStreaming : 1; // 0x5c(0x01)
	char bUseDXT5NormalMaps : 1; // 0x5c(0x01)
	char bClearCoatEnableSecondNormal : 1; // 0x5c(0x01)
	char pad_5C_4 : 4; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32 ReflectionCaptureResolution; // 0x60(0x04)
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x64(0x01)
	char bForwardShading : 1; // 0x64(0x01)
	char bVertexFoggingForOpaque : 1; // 0x64(0x01)
	char bAllowStaticLighting : 1; // 0x64(0x01)
	char bUseNormalMapsForStaticLighting : 1; // 0x64(0x01)
	char bGenerateMeshDistanceFields : 1; // 0x64(0x01)
	char bEightBitMeshDistanceFields : 1; // 0x64(0x01)
	char bGenerateLandscapeGIData : 1; // 0x64(0x01)
	char bCompressMeshDistanceFields : 1; // 0x65(0x01)
	char pad_65_1 : 7; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	float TessellationAdaptivePixelsPerTriangle; // 0x68(0x04)
	char bSeparateTranslucency : 1; // 0x6c(0x01)
	char pad_6C_1 : 7; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	enum class *e8fba6f159 TranslucentSortPolicy; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FVector TranslucentSortAxis; // 0x74(0x0c)
	enum class ECustomDepthStencil CustomDepthStencil; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	char bCustomDepthTaaJitter : 1; // 0x84(0x01)
	char bDefaultFeatureBloom : 1; // 0x84(0x01)
	char bDefaultFeatureAmbientOcclusion : 1; // 0x84(0x01)
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x84(0x01)
	char bDefaultFeatureAutoExposure : 1; // 0x84(0x01)
	char pad_84_5 : 3; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	enum class EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	char bDefaultFeatureMotionBlur : 1; // 0x8c(0x01)
	char bDefaultFeatureLensFlare : 1; // 0x8c(0x01)
	char bTemporalUpsampling : 1; // 0x8c(0x01)
	char pad_8C_3 : 5; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	enum class *833e8192b7 DefaultFeatureAntiAliasing; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	char bStencilForLODDither : 1; // 0x94(0x01)
	char pad_94_1 : 7; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	enum class EEarlyZPass EarlyZPass; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	char bEarlyZPassMovable : 1; // 0x9c(0x01)
	char bEarlyZPassOnlyMaterialMasking : 1; // 0x9c(0x01)
	char bEarlyZPassForceFull : 1; // 0x9c(0x01)
	char bDBuffer : 1; // 0x9c(0x01)
	char pad_9C_4 : 4; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	enum class EClearSceneOptions ClearSceneMethod; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	char bBasePassOutputsVelocity : 1; // 0xa4(0x01)
	char bSelectiveBasePassOutputs : 1; // 0xa4(0x01)
	char bDefaultParticleCutouts : 1; // 0xa4(0x01)
	char bGlobalClipPlane : 1; // 0xa4(0x01)
	char pad_A4_4 : 4; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	enum class EGBufferFormat GBufferFormat; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	char bUseGPUMorphTargets : 1; // 0xac(0x01)
	char bNvidiaAftermathEnabled : 1; // 0xac(0x01)
	char bInstancedStereo : 1; // 0xac(0x01)
	char bMultiView : 1; // 0xac(0x01)
	char bMobileMultiView : 1; // 0xac(0x01)
	char bMobileMultiViewDirect : 1; // 0xac(0x01)
	char bMonoscopicFarField : 1; // 0xac(0x01)
	char pad_AC_7 : 1; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float WireframeCullThreshold; // 0xb0(0x04)
	char bSupportStationarySkylight : 1; // 0xb4(0x01)
	char bSupportLowQualityLightmaps : 1; // 0xb4(0x01)
	char bSupportPointLightWholeSceneShadows : 1; // 0xb4(0x01)
	char bSupportAtmosphericFog : 1; // 0xb4(0x01)
	char bSupportSkinCacheShaders : 1; // 0xb4(0x01)
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xb4(0x01)
	char bMobileAllowDistanceFieldShadows : 1; // 0xb4(0x01)
	char bMobileAllowMovableDirectionalLights : 1; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	uint32 MobileNumDynamicPointLights; // 0xb8(0x04)
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0xbc(0x01)
	char pad_BC_1 : 7; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float SkinCacheSceneMemoryLimitInMB; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class Engine.RendererOverrideSettings
// Size: 0x48 (Inherited: 0x40)
struct URendererOverrideSettings : U*76e94c1d7f {
	char bSupportAllShaderPermutations : 1; // 0x40(0x01)
	char bForceRecomputeTangents : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.UserInterfaceSettings
// Size: 0x210 (Inherited: 0x40)
struct UUserInterfaceSettings : U*76e94c1d7f {
	enum class ERenderFocusRule RenderFocusRule; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TMap<enum class EMouseCursor, struct F*6bfbb25128> HardwareCursors; // 0x48(0x50)
	struct TMap<enum class EMouseCursor, struct FStringClassReference> SoftwareCursors; // 0x98(0x50)
	struct FStringClassReference DefaultCursor; // 0xe8(0x10)
	struct FStringClassReference TextEditBeamCursor; // 0xf8(0x10)
	struct FStringClassReference CrosshairsCursor; // 0x108(0x10)
	struct FStringClassReference HandCursor; // 0x118(0x10)
	struct FStringClassReference GrabHandCursor; // 0x128(0x10)
	struct FStringClassReference GrabHandClosedCursor; // 0x138(0x10)
	struct FStringClassReference SlashedCircleCursor; // 0x148(0x10)
	float ApplicationScale; // 0x158(0x04)
	enum class EUIScalingRule UIScaleRule; // 0x15c(0x01)
	char pad_15D[0x3]; // 0x15d(0x03)
	struct FStringClassReference CustomScalingRuleClass; // 0x160(0x10)
	struct FRuntimeFloatCurve UIScaleCurve; // 0x170(0x78)
	bool bLoadWidgetsOnDedicatedServer; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct TArray<struct UObject*> *3559f24272; // 0x1f0(0x10)
	struct UClass* *ec38a2cf9b; // 0x200(0x08)
	struct UDPICustomScalingRule* *2277f0d3a6; // 0x208(0x08)
};

// Class Engine.DeviceProfileManager
// Size: 0x110 (Inherited: 0x30)
struct UDeviceProfileManager : UObject {
	struct TArray<struct UObject*> Profiles; // 0x30(0x10)
	char pad_40[0xd0]; // 0x40(0xd0)
};

// Class Engine.DialogueVoice
// Size: 0x48 (Inherited: 0x30)
struct UDialogueVoice : UObject {
	enum class EGrammaticalGender Gender; // 0x30(0x01)
	enum class EGrammaticalNumber Plurality; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FGuid *fd66a0035c; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.DialogueWave
// Size: 0x78 (Inherited: 0x30)
struct UDialogueWave : UObject {
	char *a420786d29 : 1; // 0x30(0x01)
	char bOverride_SubtitleOverride : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString *d281ad91dc; // 0x38(0x10)
	struct FString *0686951cfd; // 0x48(0x10)
	struct TArray<struct F*b46bba5fea> ContextMappings; // 0x58(0x10)
	struct FGuid *fd66a0035c; // 0x68(0x10)
};

// Class Engine.Distribution
// Size: 0x38 (Inherited: 0x30)
struct UDistribution : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Engine.*f98789818a
// Size: 0x40 (Inherited: 0x38)
struct U*f98789818a : UDistribution {
	char *76b89cb649 : 1; // 0x38(0x01)
	char pad_38_1 : 1; // 0x38(0x01)
	char *57ccf7c6ac : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.*c90a6700bf
// Size: 0x48 (Inherited: 0x40)
struct U*c90a6700bf : U*f98789818a {
	float Constant; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*966c1142aa
// Size: 0x68 (Inherited: 0x48)
struct U*966c1142aa : U*c90a6700bf {
	struct FName ParameterName; // 0x48(0x08)
	float *12a4722dd3; // 0x50(0x04)
	float *fb347cbc91; // 0x54(0x04)
	float *37abe150e9; // 0x58(0x04)
	float *fdbd0f6df1; // 0x5c(0x04)
	enum class *dcbc474dce *fa2a4dc00e; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.DistributionFloatParticleParameter
// Size: 0x68 (Inherited: 0x68)
struct UDistributionFloatParticleParameter : U*966c1142aa {
};

// Class Engine.*a583118548
// Size: 0x58 (Inherited: 0x40)
struct U*a583118548 : U*f98789818a {
	struct FInterpCurveFloat *a4c0d1349d; // 0x40(0x18)
};

// Class Engine.*52fd99f3d8
// Size: 0x48 (Inherited: 0x40)
struct U*52fd99f3d8 : U*f98789818a {
	float Min; // 0x40(0x04)
	float Max; // 0x44(0x04)
};

// Class Engine.*91cb6e8ed1
// Size: 0x58 (Inherited: 0x40)
struct U*91cb6e8ed1 : U*f98789818a {
	struct FInterpCurveVector2D *a4c0d1349d; // 0x40(0x18)
};

// Class Engine.*00ce0779c7
// Size: 0x40 (Inherited: 0x38)
struct U*00ce0779c7 : UDistribution {
	char *76b89cb649 : 1; // 0x38(0x01)
	char *114cf194fa : 1; // 0x38(0x01)
	char *57ccf7c6ac : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.*680a6fe7bf
// Size: 0x58 (Inherited: 0x40)
struct U*680a6fe7bf : U*00ce0779c7 {
	struct FVector Constant; // 0x40(0x0c)
	char *f85eff0db4 : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	enum class *e54c151ccf *8f87f46c32; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Engine.*c65c59d4e0
// Size: 0x98 (Inherited: 0x58)
struct U*c65c59d4e0 : U*680a6fe7bf {
	struct FName ParameterName; // 0x58(0x08)
	struct FVector *12a4722dd3; // 0x60(0x0c)
	struct FVector *fb347cbc91; // 0x6c(0x0c)
	struct FVector *37abe150e9; // 0x78(0x0c)
	struct FVector *fdbd0f6df1; // 0x84(0x0c)
	enum class *dcbc474dce *01c0ebca10[0x03]; // 0x90(0x03)
	char pad_93[0x5]; // 0x93(0x05)
};

// Class Engine.DistributionVectorParticleParameter
// Size: 0x98 (Inherited: 0x98)
struct UDistributionVectorParticleParameter : U*c65c59d4e0 {
};

// Class Engine.*d70b204e12
// Size: 0x60 (Inherited: 0x40)
struct U*d70b204e12 : U*00ce0779c7 {
	struct FInterpCurveVector *a4c0d1349d; // 0x40(0x18)
	char *f85eff0db4 : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	enum class *e54c151ccf *8f87f46c32; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.*4797a38e86
// Size: 0x68 (Inherited: 0x40)
struct U*4797a38e86 : U*00ce0779c7 {
	struct FVector Max; // 0x40(0x0c)
	struct FVector Min; // 0x4c(0x0c)
	char *f85eff0db4 : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	enum class *e54c151ccf *8f87f46c32; // 0x5c(0x01)
	enum class *4472c1addc *039a4cfd05[0x03]; // 0x5d(0x03)
	char *c10139fcb0 : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*c62ad78386
// Size: 0x68 (Inherited: 0x40)
struct U*c62ad78386 : U*00ce0779c7 {
	struct FInterpCurveTwoVectors *a4c0d1349d; // 0x40(0x18)
	char *06dbb74ffd : 1; // 0x58(0x01)
	char *99e927ae57 : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	enum class *e54c151ccf *8f87f46c32[0x02]; // 0x5c(0x02)
	enum class *4472c1addc *039a4cfd05[0x03]; // 0x5e(0x03)
	char pad_61[0x3]; // 0x61(0x03)
	char *c10139fcb0 : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class Engine.DPICustomScalingRule
// Size: 0x30 (Inherited: 0x30)
struct UDPICustomScalingRule : UObject {
};

// Class Engine.*bc74342338
// Size: 0x30 (Inherited: 0x30)
struct U*bc74342338 : UObject {
};

// Class Engine.*1d3e869c2b
// Size: 0x40 (Inherited: 0x30)
struct U*1d3e869c2b : U*bc74342338 {
	struct TArray<struct F*2af4c8e1e1> *7becdfbe7a; // 0x30(0x10)
};

// Class Engine.*4a1ab4f3d8
// Size: 0x30 (Inherited: 0x30)
struct U*4a1ab4f3d8 : U*bc74342338 {
};

// Class Engine.*5de9e52a04
// Size: 0x40 (Inherited: 0x30)
struct U*5de9e52a04 : U*4a1ab4f3d8 {
	struct TArray<struct F*d0cd7ae40b> *9852b53cc3; // 0x30(0x10)
};

// Class Engine.*66cffbd915
// Size: 0x40 (Inherited: 0x30)
struct U*66cffbd915 : U*4a1ab4f3d8 {
	struct TArray<struct F*5eb8eb973e> *826c93725f; // 0x30(0x10)
};

// Class Engine.*4623812427
// Size: 0x40 (Inherited: 0x30)
struct U*4623812427 : U*4a1ab4f3d8 {
	struct TArray<struct F*85d4f32dee> *a34e8d2d6c; // 0x30(0x10)
};

// Class Engine.*00ea555bc2
// Size: 0x40 (Inherited: 0x40)
struct U*00ea555bc2 : U*4623812427 {
};

// Class Engine.*2f8bf04cdb
// Size: 0x40 (Inherited: 0x30)
struct U*2f8bf04cdb : U*4a1ab4f3d8 {
	struct TArray<struct F*b8f223866d> *7612b9efc6; // 0x30(0x10)
};

// Class Engine.*3aa05e7dbf
// Size: 0x40 (Inherited: 0x30)
struct U*3aa05e7dbf : U*4a1ab4f3d8 {
	struct TArray<struct F*0d447c4c00> *13d851d5fb; // 0x30(0x10)
};

// Class Engine.EdGraph
// Size: 0xc0 (Inherited: 0x30)
struct UEdGraph : UObject {
	struct UClass* Schema; // 0x30(0x08)
	struct TArray<struct UEdGraphNode*> Nodes; // 0x38(0x10)
	char *f67ad7c946 : 1; // 0x48(0x01)
	char *25e59e8cd2 : 1; // 0x48(0x01)
	char *586c5d95b9 : 1; // 0x48(0x01)
	char pad_48_3 : 5; // 0x48(0x01)
	char pad_49[0x77]; // 0x49(0x77)
};

// Class Engine.*bbcc2e9c42
// Size: 0xc8 (Inherited: 0xa8)
struct U*bbcc2e9c42 : UEdGraphNode {
	struct FString Link; // 0xa8(0x10)
	struct FString Excerpt; // 0xb8(0x10)
};

// Class Engine.*074e9f3ab2
// Size: 0x30 (Inherited: 0x30)
struct U*074e9f3ab2 : UObject {
};

// Class Engine.*370bf5a6c1
// Size: 0x30 (Inherited: 0x30)
struct U*370bf5a6c1 : UInterface {
};

// Class Engine.EndUserSettings
// Size: 0x40 (Inherited: 0x30)
struct UEndUserSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	bool bSendAnonymousUsageDataToEpic; // 0x38(0x01)
	bool bSendMeanTimeBetweenFailureDataToEpic; // 0x39(0x01)
	bool bAllowUserIdInUsageData; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// Class Engine.EngineHandlerComponentFactory
// Size: 0x30 (Inherited: 0x30)
struct UEngineHandlerComponentFactory : U*a59c237479 {
};

// Class Engine.*d3a6c71af6
// Size: 0x70 (Inherited: 0x30)
struct U*d3a6c71af6 : UObject {
	struct UClass* *3cbe08992b; // 0x30(0x08)
	struct UObject* *a66ce4cb89; // 0x38(0x08)
	struct TArray<struct FString> *68aa2b52ba; // 0x40(0x10)
	struct TArray<struct FString> *3d490dfc18; // 0x50(0x10)
	int32 *be2d1635d5; // 0x60(0x04)
	int32 *a0449dcfc4; // 0x64(0x04)
	char *8d57884fcc : 1; // 0x68(0x01)
	char *23bea8cb9f : 1; // 0x68(0x01)
	char *72ba8358b5 : 1; // 0x68(0x01)
	char pad_68_3 : 5; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*63ac2ca498
// Size: 0x58 (Inherited: 0x30)
struct U*63ac2ca498 : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class Engine.*6ccf9f6de8
// Size: 0x58 (Inherited: 0x30)
struct U*6ccf9f6de8 : U*803292ecaa {
	struct TArray<struct FVector2D> Points; // 0x30(0x10)
	struct TArray<struct F*16fc3891f4> Instances; // 0x40(0x10)
	struct U*63ac2ca498* Manager; // 0x50(0x08)
};

// Class Engine.*2664e71bf4
// Size: 0xe0 (Inherited: 0x30)
struct U*2664e71bf4 : UObject {
	struct F*a973a8e6eb Data; // 0x30(0xb0)
};

// Class Engine.Font
// Size: 0x1c8 (Inherited: 0x30)
struct UFont : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EFontCacheType *7a77cc009e; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*0238ed319b> Characters; // 0x40(0x10)
	struct TArray<struct UTexture2D*> Textures; // 0x50(0x10)
	int32 *7d0bca523c; // 0x60(0x04)
	float *57d84c77c5; // 0x64(0x04)
	float Ascent; // 0x68(0x04)
	float Descent; // 0x6c(0x04)
	float Leading; // 0x70(0x04)
	int32 Kerning; // 0x74(0x04)
	struct F*a973a8e6eb ImportOptions; // 0x78(0xb0)
	int32 *41ecc02cf3; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<int32> *b879125b19; // 0x130(0x10)
	float *6f29a5839b; // 0x140(0x04)
	int32 *a6c8d69eb3; // 0x144(0x04)
	struct FName *6e9521d9fe; // 0x148(0x08)
	struct F*1f707e25c8 *1f707e25c8; // 0x150(0x28)
	char pad_178[0x50]; // 0x178(0x50)
};

// Class Engine.FontFace
// Size: 0x60 (Inherited: 0x30)
struct UFontFace : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString SourceFilename; // 0x38(0x10)
	enum class EFontHinting Hinting; // 0x48(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x49(0x01)
	enum class EFontLoadingPolicy LoadingPolicyConsole; // 0x4a(0x01)
	enum class EFontLayoutMethod LayoutMethod; // 0x4b(0x01)
	char pad_4C[0x14]; // 0x4c(0x14)
};

// Class Engine.*1badf77bd5
// Size: 0x30 (Inherited: 0x30)
struct U*1badf77bd5 : UObject {
};

// Class Engine.HapticFeedbackEffect_Buffer
// Size: 0x70 (Inherited: 0x30)
struct UHapticFeedbackEffect_Buffer : U*1badf77bd5 {
	struct TArray<bool> *4b544c488f; // 0x30(0x10)
	int32 SampleRate; // 0x40(0x04)
	char pad_44[0x2c]; // 0x44(0x2c)
};

// Class Engine.HapticFeedbackEffect_Curve
// Size: 0x120 (Inherited: 0x30)
struct UHapticFeedbackEffect_Curve : U*1badf77bd5 {
	struct FHapticFeedbackDetails_Curve HapticDetails; // 0x30(0xf0)
};

// Class Engine.HapticFeedbackEffect_SoundWave
// Size: 0x68 (Inherited: 0x30)
struct UHapticFeedbackEffect_SoundWave : U*1badf77bd5 {
	struct USoundWave* SoundWave; // 0x30(0x08)
	char pad_38[0x30]; // 0x38(0x30)
};

// Class Engine.InheritableComponentHandler
// Size: 0x50 (Inherited: 0x30)
struct UInheritableComponentHandler : UObject {
	struct TArray<struct F*459dd2ff54> Records; // 0x30(0x10)
	struct TArray<struct UActorComponent*> *93528fc0ee; // 0x40(0x10)
};

// Class Engine.InputSettings
// Size: 0xb0 (Inherited: 0x30)
struct UInputSettings : UObject {
	struct TArray<struct FInputAxisConfigEntry> AxisConfig; // 0x30(0x10)
	char bAltEnterTogglesFullscreen : 1; // 0x40(0x01)
	char bF11TogglesFullscreen : 1; // 0x40(0x01)
	char bUseMouseForTouch : 1; // 0x40(0x01)
	char bEnableMouseSmoothing : 1; // 0x40(0x01)
	char bEnableFOVScaling : 1; // 0x40(0x01)
	char pad_40_5 : 3; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float FOVScale; // 0x44(0x04)
	float DoubleClickTime; // 0x48(0x04)
	bool bCaptureMouseOnLaunch; // 0x4c(0x01)
	enum class EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x4d(0x01)
	bool bDefaultViewportMouseLock; // 0x4e(0x01)
	enum class EMouseLockMode DefaultViewportMouseLockMode; // 0x4f(0x01)
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x50(0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings; // 0x60(0x10)
	bool bAlwaysShowTouchInterface; // 0x70(0x01)
	bool bShowConsoleOnFourFingerTap; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct FStringAssetReference DefaultTouchInterface; // 0x78(0x10)
	struct FKey ConsoleKey; // 0x88(0x18)
	struct TArray<struct FKey> ConsoleKeys; // 0xa0(0x10)
};

// Class Engine.InterpCurveEdSetup
// Size: 0x48 (Inherited: 0x30)
struct UInterpCurveEdSetup : UObject {
	struct TArray<struct F*84f9130ca0> Tabs; // 0x30(0x10)
	int32 *1b257d4ef6; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.InterpData
// Size: 0x78 (Inherited: 0x30)
struct UInterpData : UObject {
	float InterpLength; // 0x30(0x04)
	float *0737db5641; // 0x34(0x04)
	struct TArray<struct U*dcbf48820b*> *a7aadf63a6; // 0x38(0x10)
	struct UInterpCurveEdSetup* *e617dd163c; // 0x48(0x08)
	float *e5a2a50940; // 0x50(0x04)
	float *ec64459609; // 0x54(0x04)
	char *c6d88eacb6 : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct U*3174ab35ee* *b1f04ad78e; // 0x60(0x08)
	struct TArray<struct FName> *7264b4c5cf; // 0x68(0x10)
};

// Class Engine.*4500a16265
// Size: 0x40 (Inherited: 0x30)
struct U*4500a16265 : UObject {
	struct FString Caption; // 0x30(0x10)
};

// Class Engine.*beaa0dcc53
// Size: 0x40 (Inherited: 0x40)
struct U*beaa0dcc53 : U*4500a16265 {
};

// Class Engine.*122c96dd71
// Size: 0x40 (Inherited: 0x40)
struct U*122c96dd71 : U*4500a16265 {
};

// Class Engine.*dcbf48820b
// Size: 0x58 (Inherited: 0x30)
struct U*dcbf48820b : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct U*392c969c3f*> *1c8b0cb6d9; // 0x38(0x10)
	struct FName GroupName; // 0x48(0x08)
	struct FColor *e142608521; // 0x50(0x04)
	char *ea527af7c6 : 1; // 0x54(0x01)
	char bVisible : 1; // 0x54(0x01)
	char *3b786e42c5 : 1; // 0x54(0x01)
	char *4867f81313 : 1; // 0x54(0x01)
	char *d9c2bf90e2 : 1; // 0x54(0x01)
	char pad_54_5 : 3; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.*d6f7b708e4
// Size: 0x68 (Inherited: 0x58)
struct U*d6f7b708e4 : U*dcbf48820b {
	struct UCameraAnim* *d3f66f5eff; // 0x58(0x08)
	float *9186173540; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.*3174ab35ee
// Size: 0x58 (Inherited: 0x58)
struct U*3174ab35ee : U*dcbf48820b {
};

// Class Engine.*9a21d771a7
// Size: 0x50 (Inherited: 0x30)
struct U*9a21d771a7 : UObject {
	struct U*dcbf48820b* Group; // 0x30(0x08)
	struct AActor* GroupActor; // 0x38(0x08)
	struct TArray<struct U*2e17404cd6*> *99fc0bd2f2; // 0x40(0x10)
};

// Class Engine.*cef89c91cc
// Size: 0x50 (Inherited: 0x50)
struct U*cef89c91cc : U*9a21d771a7 {
};

// Class Engine.*2a3a82df77
// Size: 0x50 (Inherited: 0x50)
struct U*2a3a82df77 : U*9a21d771a7 {
};

// Class Engine.*392c969c3f
// Size: 0x78 (Inherited: 0x30)
struct U*392c969c3f : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct U*392c969c3f*> *f1633ecdde; // 0x40(0x10)
	struct UClass* *e68e88c916; // 0x50(0x08)
	enum class *b351749ddd *088d9f8375; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString TrackTitle; // 0x60(0x10)
	char *6392794243 : 1; // 0x70(0x01)
	char *5df35db04f : 1; // 0x70(0x01)
	char *991edce23d : 1; // 0x70(0x01)
	char *d9c2bf90e2 : 1; // 0x70(0x01)
	char *14805e65ab : 1; // 0x70(0x01)
	char *58952d6157 : 1; // 0x70(0x01)
	char bVisible : 1; // 0x70(0x01)
	char *56b8a2dc5b : 1; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.*a5f71e6672
// Size: 0x90 (Inherited: 0x78)
struct U*a5f71e6672 : U*392c969c3f {
	struct TArray<struct F*7a84b8084d> *4f5b81bb5a; // 0x78(0x10)
	struct FName PropertyName; // 0x88(0x08)
};

// Class Engine.*693d4dad85
// Size: 0x90 (Inherited: 0x78)
struct U*693d4dad85 : U*392c969c3f {
	struct TArray<struct F*f496f763e6> *7e98c1acf7; // 0x78(0x10)
	char *cbc7b60b4c : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*9162ee0c42
// Size: 0x90 (Inherited: 0x78)
struct U*9162ee0c42 : U*392c969c3f {
	struct TArray<struct F*7d3e9407df> *e61b7a7f8f; // 0x78(0x10)
	char *21e23af20d : 1; // 0x88(0x01)
	char *a622a509be : 1; // 0x88(0x01)
	char *c216963877 : 1; // 0x88(0x01)
	char *76a3d5061b : 1; // 0x88(0x01)
	char pad_88_4 : 4; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*031396ff59
// Size: 0x98 (Inherited: 0x78)
struct U*031396ff59 : U*392c969c3f {
	struct FInterpCurveFloat *3113465afd; // 0x78(0x18)
	float *02541a4236; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.*d31ddde23c
// Size: 0xb8 (Inherited: 0x98)
struct U*d31ddde23c : U*031396ff59 {
	struct FName SlotName; // 0x98(0x08)
	struct TArray<struct F*266c5702e7> *faa8fd553a; // 0xa0(0x10)
	char *2caed89a0b : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class Engine.*bf2b9a7732
// Size: 0xb0 (Inherited: 0x98)
struct U*bf2b9a7732 : U*031396ff59 {
	char *a52ce377e6 : 1; // 0x98(0x01)
	char *b1d853a51c : 1; // 0x98(0x01)
	char pad_98_2 : 6; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FLinearColor *c5b49359fd; // 0x9c(0x10)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class Engine.*d59a8b33bc
// Size: 0xb8 (Inherited: 0x98)
struct U*d59a8b33bc : U*031396ff59 {
	struct UAnimBlueprintGeneratedClass* *fdd0a8aa00; // 0x98(0x08)
	struct UClass* *d728b5f9ab; // 0xa0(0x08)
	struct FName ParamName; // 0xa8(0x08)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class Engine.*87c7adc876
// Size: 0xb0 (Inherited: 0x98)
struct U*87c7adc876 : U*031396ff59 {
	struct TArray<struct UMaterialInterface*> *b6c135dbde; // 0x98(0x10)
	struct FName ParamName; // 0xa8(0x08)
};

// Class Engine.*14a1f2c129
// Size: 0xa0 (Inherited: 0x98)
struct U*14a1f2c129 : U*031396ff59 {
	struct FName ParamName; // 0x98(0x08)
};

// Class Engine.*de0fc4bdf4
// Size: 0xa0 (Inherited: 0x98)
struct U*de0fc4bdf4 : U*031396ff59 {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.*d8af95ff19
// Size: 0xd0 (Inherited: 0x78)
struct U*d8af95ff19 : U*392c969c3f {
	struct FInterpCurveVector *ffcd0e3298; // 0x78(0x18)
	struct FInterpCurveVector *a76aa624f1; // 0x90(0x18)
	struct F*d8fc78df14 *88a7376afa; // 0xa8(0x10)
	struct FName *cc61bae9bb; // 0xb8(0x08)
	float *316a68f17e; // 0xc0(0x04)
	float *009c2902fb; // 0xc4(0x04)
	char *0beab29e90 : 1; // 0xc8(0x01)
	char *8d56369802 : 1; // 0xc8(0x01)
	char *814fbbcc4d : 1; // 0xc8(0x01)
	char *646f12e0a5 : 1; // 0xc8(0x01)
	char *414f613e0a : 1; // 0xc8(0x01)
	char *8166d9122c : 1; // 0xc8(0x01)
	char pad_C8_6 : 2; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	enum class *994c03ffeb *e946322571; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
};

// Class Engine.*2b13d18578
// Size: 0xb0 (Inherited: 0x98)
struct U*2b13d18578 : U*031396ff59 {
	enum class *1614f8b52b *e0e809c414; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct F*d8fc78df14 *88a7376afa; // 0xa0(0x10)
};

// Class Engine.*300bdd9e8f
// Size: 0x98 (Inherited: 0x98)
struct U*300bdd9e8f : U*031396ff59 {
};

// Class Engine.*caae59d0e4
// Size: 0x98 (Inherited: 0x78)
struct U*caae59d0e4 : U*392c969c3f {
	struct FInterpCurveLinearColor *08dd2bd824; // 0x78(0x18)
	float *02541a4236; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.*d574b0007c
// Size: 0xa0 (Inherited: 0x98)
struct U*d574b0007c : U*caae59d0e4 {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.*74ee2401d8
// Size: 0x88 (Inherited: 0x78)
struct U*74ee2401d8 : U*392c969c3f {
	struct TArray<struct F*ac5c0aaf1e> *5a51734a82; // 0x78(0x10)
};

// Class Engine.*abacb26681
// Size: 0x90 (Inherited: 0x78)
struct U*abacb26681 : U*392c969c3f {
	struct TArray<struct F*9802bd8e27> *2b62b22ee7; // 0x78(0x10)
	char *8795f5b1b8 : 1; // 0x88(0x01)
	char *1b1853427c : 1; // 0x88(0x01)
	char *21e23af20d : 1; // 0x88(0x01)
	char *a622a509be : 1; // 0x88(0x01)
	char *c216963877 : 1; // 0x88(0x01)
	char pad_88_5 : 3; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*35c972b7e7
// Size: 0x98 (Inherited: 0x78)
struct U*35c972b7e7 : U*392c969c3f {
	struct FInterpCurveVector *a75fc18564; // 0x78(0x18)
	float *02541a4236; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.*abbdd68bbd
// Size: 0x98 (Inherited: 0x98)
struct U*abbdd68bbd : U*35c972b7e7 {
};

// Class Engine.*398530c681
// Size: 0xa0 (Inherited: 0x98)
struct U*398530c681 : U*35c972b7e7 {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.*c58737fd35
// Size: 0x98 (Inherited: 0x98)
struct U*c58737fd35 : U*35c972b7e7 {
};

// Class Engine.*fc4b233ba3
// Size: 0xb0 (Inherited: 0x98)
struct U*fc4b233ba3 : U*35c972b7e7 {
	struct TArray<struct F*08426744e3> Sounds; // 0x98(0x10)
	char *5a6e27581f : 1; // 0xa8(0x01)
	char *c8f61f8522 : 1; // 0xa8(0x01)
	char *38bd8081bb : 1; // 0xa8(0x01)
	char *05d7173b08 : 1; // 0xa8(0x01)
	char *f2242fc46e : 1; // 0xa8(0x01)
	char pad_A8_5 : 3; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.*ccb6f5ed5c
// Size: 0xb0 (Inherited: 0x98)
struct U*ccb6f5ed5c : U*35c972b7e7 {
	struct TArray<struct UMaterialInterface*> *b6c135dbde; // 0x98(0x10)
	struct FName ParamName; // 0xa8(0x08)
};

// Class Engine.*8c8a934954
// Size: 0xa0 (Inherited: 0x98)
struct U*8c8a934954 : U*35c972b7e7 {
	struct FName PropertyName; // 0x98(0x08)
};

// Class Engine.*6a6872f45b
// Size: 0x90 (Inherited: 0x78)
struct U*6a6872f45b : U*392c969c3f {
	struct TArray<struct F*3c7da861f7> *866c205f03; // 0x78(0x10)
	char *21e23af20d : 1; // 0x88(0x01)
	char *a622a509be : 1; // 0x88(0x01)
	char *c216963877 : 1; // 0x88(0x01)
	char pad_88_3 : 5; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*2e17404cd6
// Size: 0x30 (Inherited: 0x30)
struct U*2e17404cd6 : UObject {
};

// Class Engine.*e4575d0378
// Size: 0x38 (Inherited: 0x30)
struct U*e4575d0378 : U*2e17404cd6 {
	float *b70bd2a7cd; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*437d015881
// Size: 0x30 (Inherited: 0x30)
struct U*437d015881 : U*2e17404cd6 {
};

// Class Engine.*6726b636dc
// Size: 0x30 (Inherited: 0x30)
struct U*6726b636dc : U*2e17404cd6 {
};

// Class Engine.*56292a4ba0
// Size: 0x38 (Inherited: 0x30)
struct U*56292a4ba0 : U*2e17404cd6 {
	struct AActor* *a7cfddd595; // 0x30(0x08)
};

// Class Engine.*74b69de451
// Size: 0x38 (Inherited: 0x30)
struct U*74b69de451 : U*2e17404cd6 {
	float *b70bd2a7cd; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*834628650b
// Size: 0x30 (Inherited: 0x30)
struct U*834628650b : U*2e17404cd6 {
};

// Class Engine.*d6d3e3696d
// Size: 0x48 (Inherited: 0x30)
struct U*d6d3e3696d : U*2e17404cd6 {
	struct UAnimInstance* AnimScriptInstance; // 0x30(0x08)
	float *f9e8f7feeb; // 0x38(0x04)
	char pad_3C[0xc]; // 0x3c(0x0c)
};

// Class Engine.*53b076d685
// Size: 0x68 (Inherited: 0x30)
struct U*53b076d685 : U*2e17404cd6 {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x30(0x10)
	struct TArray<float> *41da7ec21a; // 0x40(0x10)
	struct TArray<struct F*ea993fb788> *a10f1ecc3c; // 0x50(0x10)
	struct U*87c7adc876* *f811635120; // 0x60(0x08)
};

// Class Engine.*6fe2a4aceb
// Size: 0x38 (Inherited: 0x30)
struct U*6fe2a4aceb : U*2e17404cd6 {
	float *f9e8f7feeb; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*3749437e8c
// Size: 0x48 (Inherited: 0x30)
struct U*3749437e8c : U*2e17404cd6 {
	struct FVector ResetLocation; // 0x30(0x0c)
	struct FRotator ResetRotation; // 0x3c(0x0c)
};

// Class Engine.*f620d9e5f8
// Size: 0x38 (Inherited: 0x30)
struct U*f620d9e5f8 : U*2e17404cd6 {
	float *b70bd2a7cd; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*192cbb04fd
// Size: 0x40 (Inherited: 0x30)
struct U*192cbb04fd : U*2e17404cd6 {
	struct UProperty* *d326b11a16; // 0x30(0x08)
	struct UObject* *c19f8c4250; // 0x38(0x08)
};

// Class Engine.*9c4f8c5546
// Size: 0x58 (Inherited: 0x40)
struct U*9c4f8c5546 : U*192cbb04fd {
	char pad_40[0x8]; // 0x40(0x08)
	struct UBoolProperty* BoolProperty; // 0x48(0x08)
	bool *fbd0db6bbf; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Engine.*739208015f
// Size: 0x50 (Inherited: 0x40)
struct U*739208015f : U*192cbb04fd {
	char pad_40[0x8]; // 0x40(0x08)
	struct FColor *5f3b0ed5d2; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.*9fffa1b04e
// Size: 0x50 (Inherited: 0x40)
struct U*9fffa1b04e : U*192cbb04fd {
	char pad_40[0x8]; // 0x40(0x08)
	float *f9e8f7feeb; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.*d2fef4ae0e
// Size: 0x58 (Inherited: 0x40)
struct U*d2fef4ae0e : U*192cbb04fd {
	char pad_40[0x8]; // 0x40(0x08)
	struct FLinearColor *5f3b0ed5d2; // 0x48(0x10)
};

// Class Engine.*5d6e685e78
// Size: 0x58 (Inherited: 0x40)
struct U*5d6e685e78 : U*192cbb04fd {
	char pad_40[0x8]; // 0x40(0x08)
	struct FVector *1549dd5ada; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.*81ac8dab29
// Size: 0x38 (Inherited: 0x30)
struct U*81ac8dab29 : U*2e17404cd6 {
	float *94fa6f8294; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*907eb0587a
// Size: 0x40 (Inherited: 0x30)
struct U*907eb0587a : U*2e17404cd6 {
	float *b70bd2a7cd; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UAudioComponent* *70e5efb0c2; // 0x38(0x08)
};

// Class Engine.*8a7938bc8f
// Size: 0x40 (Inherited: 0x30)
struct U*8a7938bc8f : U*2e17404cd6 {
	enum class *b8c9672abe Action; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *b70bd2a7cd; // 0x34(0x04)
	char *591f54fe1e : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.*2d1d9364f4
// Size: 0x68 (Inherited: 0x30)
struct U*2d1d9364f4 : U*2e17404cd6 {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x30(0x10)
	struct TArray<struct FVector> *d351a54de2; // 0x40(0x10)
	struct TArray<struct F*ea993fb788> *a10f1ecc3c; // 0x50(0x10)
	struct U*ccb6f5ed5c* *f811635120; // 0x60(0x08)
};

// Class Engine.*535730b964
// Size: 0x38 (Inherited: 0x30)
struct U*535730b964 : U*2e17404cd6 {
	enum class *0e8e66d5fd Action; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *b70bd2a7cd; // 0x34(0x04)
};

// Class Engine.*96aaefbe5c
// Size: 0x58 (Inherited: 0x30)
struct U*96aaefbe5c : UObject {
	uint16 *cd15a9a944; // 0x30(0x02)
	char pad_32[0x2]; // 0x32(0x02)
	uint32 *ce3c488bf3; // 0x34(0x04)
	uint64 *99e355af3e; // 0x38(0x08)
	int8 *155c167315; // 0x40(0x01)
	char pad_41[0x1]; // 0x41(0x01)
	int16 *a302eaf983; // 0x42(0x02)
	char pad_44[0x4]; // 0x44(0x04)
	int64 *3ad2ab4576; // 0x48(0x08)
	bool *d1e8bc0f52; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 *672a261fbc; // 0x54(0x04)
};

// Class Engine.*61fa57696e
// Size: 0x50 (Inherited: 0x30)
struct U*61fa57696e : U*803292ecaa {
	struct TArray<struct U*de4e4b96bd*> *aca6558cf8; // 0x30(0x10)
	struct TArray<struct F*41da2a7d49> Instances; // 0x40(0x10)
};

// Class Engine.*de4e4b96bd
// Size: 0x1d0 (Inherited: 0x30)
struct U*de4e4b96bd : UObject {
	struct UWorld* World; // 0x30(0x08)
	struct ALandscape* Landscape; // 0x38(0x1c)
	struct FGuid *092efd01cf; // 0x54(0x10)
	struct FIntRect *9a9f9b3007; // 0x64(0x10)
	char pad_74[0xc]; // 0x74(0x0c)
	struct F*41da2a7d49 *f01728ab45; // 0x80(0x110)
	struct UMaterialInterface* LandscapeMaterial; // 0x190(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x198(0x08)
	uint32 *485985d7cc; // 0x1a0(0x04)
	int32 *b608d2c863; // 0x1a4(0x04)
	struct TArray<struct F*9c6bf22dfd> *f936063513; // 0x1a8(0x10)
	struct TArray<struct F*17049021c2> *03b3386d45; // 0x1b8(0x10)
	char pad_1C8[0x8]; // 0x1c8(0x08)
};

// Class Engine.Layer
// Size: 0x50 (Inherited: 0x30)
struct ULayer : UObject {
	struct FName LayerName; // 0x30(0x08)
	char bIsVisible : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*5bfdbde439> ActorStats; // 0x40(0x10)
};

// Class Engine.*55017046d0
// Size: 0x40 (Inherited: 0x30)
struct U*55017046d0 : UObject {
	struct TArray<struct AActor*> Actors; // 0x30(0x10)
};

// Class Engine.*65e6a593d2
// Size: 0x60 (Inherited: 0x30)
struct U*65e6a593d2 : U*803292ecaa {
	struct TArray<struct F*318b74e8fa> Variants; // 0x30(0x10)
	struct TArray<struct FTransform> Instances; // 0x40(0x10)
	struct TArray<struct F*23672d5787> *f0c5382a9a; // 0x50(0x10)
};

// Class Engine.*ce870102ac
// Size: 0x40 (Inherited: 0x30)
struct U*ce870102ac : U*803292ecaa {
	struct TArray<struct F*3a960e3f84> Instances; // 0x30(0x10)
};

// Class Engine.*6c128e19db
// Size: 0x50 (Inherited: 0x30)
struct U*6c128e19db : U*803292ecaa {
	struct TArray<struct F*90b0f1f90d> *7fd670e4a4; // 0x30(0x10)
	struct TArray<struct F*3a68ba7271> Instances; // 0x40(0x10)
};

// Class Engine.TextureRenderTarget
// Size: 0x190 (Inherited: 0x180)
struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0x180(0x04)
	char pad_184[0xc]; // 0x184(0x0c)
};

// Class Engine.TextureRenderTarget2D
// Size: 0x1b0 (Inherited: 0x190)
struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32 SizeX; // 0x188(0x04)
	int32 SizeY; // 0x18c(0x04)
	struct FLinearColor ClearColor; // 0x190(0x10)
	enum class *f13c8e8821 AddressX; // 0x1a0(0x01)
	enum class *f13c8e8821 AddressY; // 0x1a1(0x01)
	char *f6b4164b98 : 1; // 0x1a4(0x01)
	char *19acab9e68 : 1; // 0x1a4(0x01)
	char bHDR : 1; // 0x1a4(0x01)
	char bGPUSharedFlag : 1; // 0x1a4(0x01)
	char bAutoGenerateMips : 1; // 0x1a4(0x01)
	enum class EPixelFormat *e9792ce090; // 0x1a8(0x01)
	char pad_1AB_5 : 3; // 0x1ab(0x01)
	char pad_1AC[0x4]; // 0x1ac(0x04)
};

// Class Engine.*02b901bf68
// Size: 0xa0 (Inherited: 0x30)
struct U*02b901bf68 : UObject {
	char pad_30[0x30]; // 0x30(0x30)
	struct UTexture2D* *3042858509; // 0x60(0x08)
	struct UTextureRenderTarget2D* *28fcd01481; // 0x68(0x08)
	struct TArray<struct F*65dca5f959> *ef74cbb5c2; // 0x70(0x10)
	struct TArray<struct F*6a8547e265> *e58f920b27; // 0x80(0x10)
	struct TArray<struct UObject*> *418018097c; // 0x90(0x10)
};

// Class Engine.*fee855f059
// Size: 0x58 (Inherited: 0x30)
struct U*fee855f059 : U*803292ecaa {
	struct TArray<struct F*65dca5f959> *9ff18c299c; // 0x30(0x10)
	struct TArray<struct F*6a8547e265> *18d439d4ab; // 0x40(0x10)
	struct U*02b901bf68* Manager; // 0x50(0x08)
};

// Class Engine.*a55930d244
// Size: 0x68 (Inherited: 0x30)
struct U*a55930d244 : U*803292ecaa {
	char pad_30[0x38]; // 0x30(0x38)
};

// Class Engine.*3d8b0f5d99
// Size: 0x60 (Inherited: 0x30)
struct U*3d8b0f5d99 : U*803292ecaa {
	struct TArray<struct F*313e4aa24a> Variants; // 0x30(0x10)
	struct TArray<struct FTransform> Instances; // 0x40(0x10)
	struct TArray<struct F*23672d5787> *f0c5382a9a; // 0x50(0x10)
};

// Class Engine.*1537e3dc58
// Size: 0x40 (Inherited: 0x30)
struct U*1537e3dc58 : U*803292ecaa {
	struct TArray<struct F*23672d5787> *f0c5382a9a; // 0x30(0x10)
};

// Class Engine.*e785c7ae2d
// Size: 0x60 (Inherited: 0x30)
struct U*e785c7ae2d : U*803292ecaa {
	struct TArray<struct F*bed2dc5ec6> Variants; // 0x30(0x10)
	struct TArray<struct F*29189f1933> Instances; // 0x40(0x10)
	struct TArray<struct F*23672d5787> *f0c5382a9a; // 0x50(0x10)
};

// Class Engine.LevelStreaming
// Size: 0x190 (Inherited: 0x30)
struct ULevelStreaming : UObject {
	struct FName PackageName; // 0x30(0x08)
	struct UWorld* WorldAsset; // 0x38(0x20)
	char pad_58[0x10]; // 0x58(0x10)
	struct FName *2facc0fbc5; // 0x68(0x08)
	struct TArray<struct FName> *64c94fdd8c; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	char bLocked : 1; // 0x90(0x01)
	char pad_90_1 : 2; // 0x90(0x01)
	char *8d6e4856a7 : 1; // 0x90(0x01)
	char bShouldBeLoaded : 1; // 0x90(0x01)
	char bShouldBeVisible : 1; // 0x90(0x01)
	char bShouldBlockOnLoad : 1; // 0x90(0x01)
	char pad_90_7 : 1; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32 LevelLODIndex; // 0x94(0x04)
	char pad_98[0x4]; // 0x98(0x04)
	struct FColor DrawColor; // 0x9c(0x04)
	struct FLinearColor LevelColor; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)
	struct ULevel* *18a366ef9c; // 0xc0(0x08)
	struct ULevel* *280330ed05; // 0xc8(0x08)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct TArray<struct ALevelStreamingVolume*> *4b2f0b3762; // 0xd8(0x10)
	float *02cc72b5c3; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FMulticastDelegate OnLevelLoaded; // 0xf0(0x10)
	struct FMulticastDelegate OnLevelUnloaded; // 0x100(0x10)
	struct FMulticastDelegate OnLevelShown; // 0x110(0x10)
	struct FMulticastDelegate OnLevelHidden; // 0x120(0x10)
	struct TArray<struct FString> Keywords; // 0x130(0x10)
	struct FTransform LevelTransform; // 0x140(0x30)
	char pad_170[0x14]; // 0x170(0x14)
	char *f271a9f572 : 1; // 0x184(0x01)
	char pad_184_1 : 7; // 0x184(0x01)
	char pad_185[0x7]; // 0x185(0x07)
	char bDisableDistanceStreaming : 1; // 0x18c(0x01)
	char *570687fee1 : 1; // 0x18c(0x01)
	char pad_18C_2 : 6; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)

	bool *62033f9977(); // Function Engine.LevelStreaming.*62033f9977 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675c3c8
	struct ALevelScriptActor* *7fbc5d07ca(); // Function Engine.LevelStreaming.*7fbc5d07ca // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6759f14
	bool *f1b6d4b2ab(); // Function Engine.LevelStreaming.*f1b6d4b2ab // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675c3ac
	bool *f12b559604(); // Function Engine.LevelStreaming.*f12b559604 // Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675c878
	struct ULevelStreaming* CreateInstance(); // Function Engine.LevelStreaming.CreateInstance // Final|Native|Public|BlueprintCallable // @ game+0x6756db4
};

// Class Engine.LevelStreamingAlwaysLoaded
// Size: 0x190 (Inherited: 0x190)
struct ULevelStreamingAlwaysLoaded : ULevelStreaming {
};

// Class Engine.LevelStreamingKismet
// Size: 0x1a0 (Inherited: 0x190)
struct ULevelStreamingKismet : ULevelStreaming {
	char *3fa04c5915 : 1; // 0x190(0x01)
	char *a58c20d653 : 1; // 0x190(0x01)
	char pad_190_2 : 6; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)

	struct ULevelStreamingKismet* *76266de0c3(); // Function Engine.LevelStreamingKismet.*76266de0c3 // Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable // @ game+0x675f564
};

// Class Engine.*63ba92364e
// Size: 0x190 (Inherited: 0x190)
struct U*63ba92364e : ULevelStreaming {
};

// Class Engine.*980487d5d2
// Size: 0x48 (Inherited: 0x30)
struct U*980487d5d2 : UObject {
	struct UModel* *05229917f1; // 0x30(0x08)
	struct TArray<int32> Surfaces; // 0x38(0x10)
};

// Class Engine.*e2d412f5d8
// Size: 0x48 (Inherited: 0x30)
struct U*e2d412f5d8 : UObject {
	struct F*2ca2c467d8 LightmassSettings; // 0x30(0x18)
};

// Class Engine.*b086f3705e
// Size: 0x30 (Inherited: 0x30)
struct U*b086f3705e : UObject {
};

// Class Engine.*23383ff82f
// Size: 0xb0 (Inherited: 0x30)
struct U*23383ff82f : U*b086f3705e {
	struct FString *8758b9871a; // 0x30(0x10)
	struct FString *8a4d696714; // 0x40(0x10)
	struct FString *0c3999c153; // 0x50(0x10)
	struct FString *e0da0820bd; // 0x60(0x10)
	struct FString *bed98a50f2; // 0x70(0x10)
	struct FString *b9937ec277; // 0x80(0x10)
	struct FString *f83c5f01f3; // 0x90(0x10)
	struct FString *69633c5c36; // 0xa0(0x10)
};

// Class Engine.MapBuildDataRegistry
// Size: 0x128 (Inherited: 0x30)
struct UMapBuildDataRegistry : UObject {
	enum class *410dbd0c18 *b13f4f2bf2; // 0x30(0x01)
	char pad_31[0xf7]; // 0x31(0xf7)
};

// Class Engine.*7fd83c441e
// Size: 0xa0 (Inherited: 0x68)
struct U*7fd83c441e : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*4e2986faf8
// Size: 0x68 (Inherited: 0x68)
struct U*4e2986faf8 : UMaterialExpression {
};

// Class Engine.MaterialExpressionAdd
// Size: 0xe0 (Inherited: 0x68)
struct UMaterialExpressionAdd : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *ee427defba; // 0xd8(0x04)
	float *a9d0cb3002; // 0xdc(0x04)
};

// Class Engine.*a17bf6fc30
// Size: 0xd8 (Inherited: 0x68)
struct U*a17bf6fc30 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*d775c4ac3e
// Size: 0xa0 (Inherited: 0x68)
struct U*d775c4ac3e : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*570ce90514
// Size: 0xa0 (Inherited: 0x68)
struct U*570ce90514 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*6b06e8e506
// Size: 0xa0 (Inherited: 0x68)
struct U*6b06e8e506 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*35ecc7adcb
// Size: 0xa0 (Inherited: 0x68)
struct U*35ecc7adcb : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*917e0aaed6
// Size: 0xa0 (Inherited: 0x68)
struct U*917e0aaed6 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*530ed1e338
// Size: 0xd8 (Inherited: 0x68)
struct U*530ed1e338 : UMaterialExpression {
	struct FExpressionInput Y; // 0x68(0x38)
	struct FExpressionInput X; // 0xa0(0x38)
};

// Class Engine.*871afc1e00
// Size: 0xd8 (Inherited: 0x68)
struct U*871afc1e00 : UMaterialExpression {
	struct FExpressionInput Y; // 0x68(0x38)
	struct FExpressionInput X; // 0xa0(0x38)
};

// Class Engine.*1a1edf1ada
// Size: 0xa0 (Inherited: 0x68)
struct U*1a1edf1ada : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*e54b2e986f
// Size: 0xa0 (Inherited: 0x68)
struct U*e54b2e986f : UMaterialExpression {
	struct FExpressionInput WorldPosition; // 0x68(0x38)
};

// Class Engine.MaterialExpressionAtmosphericLightColor
// Size: 0x68 (Inherited: 0x68)
struct UMaterialExpressionAtmosphericLightColor : UMaterialExpression {
};

// Class Engine.MaterialExpressionAtmosphericLightVector
// Size: 0x68 (Inherited: 0x68)
struct UMaterialExpressionAtmosphericLightVector : UMaterialExpression {
};

// Class Engine.MaterialExpressionBlackBody
// Size: 0xa0 (Inherited: 0x68)
struct UMaterialExpressionBlackBody : UMaterialExpression {
	struct FExpressionInput Temp; // 0x68(0x38)
};

// Class Engine.*77939a8a98
// Size: 0x128 (Inherited: 0x68)
struct U*77939a8a98 : UMaterialExpression {
	struct FMaterialAttributesInput A; // 0x68(0x40)
	struct FMaterialAttributesInput B; // 0xa8(0x40)
	struct FExpressionInput Alpha; // 0xe8(0x38)
	enum class EMaterialAttributeBlend *ca504726dc; // 0x120(0x01)
	enum class EMaterialAttributeBlend *78e4af1502; // 0x121(0x01)
	char pad_122[0x6]; // 0x122(0x06)
};

// Class Engine.*9e7de6b92b
// Size: 0xa8 (Inherited: 0x68)
struct U*9e7de6b92b : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x68(0x40)
};

// Class Engine.MaterialExpressionBumpOffset
// Size: 0x120 (Inherited: 0x68)
struct UMaterialExpressionBumpOffset : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x68(0x38)
	struct FExpressionInput Height; // 0xa0(0x38)
	struct FExpressionInput HeightRatioInput; // 0xd8(0x38)
	float *7696dd681a; // 0x110(0x04)
	float *c2521dd2ad; // 0x114(0x04)
	uint32 *f1a2401f68; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class Engine.*093badbef1
// Size: 0x68 (Inherited: 0x68)
struct U*093badbef1 : UMaterialExpression {
};

// Class Engine.*1bfc7bdafb
// Size: 0x68 (Inherited: 0x68)
struct U*1bfc7bdafb : UMaterialExpression {
};

// Class Engine.*0e3b895aa6
// Size: 0xa0 (Inherited: 0x68)
struct U*0e3b895aa6 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*410ba89d07
// Size: 0x120 (Inherited: 0x68)
struct U*410ba89d07 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	struct FExpressionInput Min; // 0xa0(0x38)
	struct FExpressionInput Max; // 0xd8(0x38)
	enum class *b24aa0fa24 *027a929f04; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float *28a0c8d159; // 0x114(0x04)
	float *aa48a24708; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class Engine.*5e990459fa
// Size: 0x88 (Inherited: 0x68)
struct U*5e990459fa : UMaterialExpression {
	struct UMaterialParameterCollection* Collection; // 0x68(0x08)
	struct FName ParameterName; // 0x70(0x08)
	struct FGuid *7d38688f79; // 0x78(0x10)
};

// Class Engine.*510a61fdef
// Size: 0x90 (Inherited: 0x68)
struct U*510a61fdef : UMaterialExpression {
	int32 SizeX; // 0x68(0x04)
	int32 SizeY; // 0x6c(0x04)
	struct FString Text; // 0x70(0x10)
	struct FLinearColor *32cb9197b5; // 0x80(0x10)
};

// Class Engine.*c1a1622b80
// Size: 0xa8 (Inherited: 0x68)
struct U*c1a1622b80 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	char R : 1; // 0xa0(0x01)
	char G : 1; // 0xa0(0x01)
	char B : 1; // 0xa0(0x01)
	char A : 1; // 0xa0(0x01)
	char pad_A0_4 : 4; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.MaterialExpressionConstant
// Size: 0x70 (Inherited: 0x68)
struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionConstant2Vector
// Size: 0x70 (Inherited: 0x68)
struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x68(0x04)
	float G; // 0x6c(0x04)
};

// Class Engine.MaterialExpressionConstant3Vector
// Size: 0x78 (Inherited: 0x68)
struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x68(0x10)
};

// Class Engine.MaterialExpressionConstant4Vector
// Size: 0x78 (Inherited: 0x68)
struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x68(0x10)
};

// Class Engine.*f41dd064a2
// Size: 0xa8 (Inherited: 0x68)
struct U*f41dd064a2 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	float Bias; // 0xa0(0x04)
	float Scale; // 0xa4(0x04)
};

// Class Engine.*4d13141078
// Size: 0xa8 (Inherited: 0x68)
struct U*4d13141078 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	float Period; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*158352f174
// Size: 0xd8 (Inherited: 0x68)
struct U*158352f174 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*01ac74b7ee
// Size: 0xa0 (Inherited: 0x68)
struct U*01ac74b7ee : UMaterialExpression {
	struct FString Code; // 0x68(0x10)
	enum class *cb0aa7aeb7 OutputType; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString Description; // 0x80(0x10)
	struct TArray<struct F*3fe9f2582d> Inputs; // 0x90(0x10)
};

// Class Engine.*57c7616880
// Size: 0xa0 (Inherited: 0x68)
struct U*57c7616880 : U*20b0f316ee {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*442a95560c
// Size: 0xa0 (Inherited: 0x68)
struct U*442a95560c : U*20b0f316ee {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*449f05d147
// Size: 0xb0 (Inherited: 0x68)
struct U*449f05d147 : U*20b0f316ee {
	struct FExpressionInput Input; // 0x68(0x38)
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class Engine.*3212769663
// Size: 0xa0 (Inherited: 0x68)
struct U*3212769663 : UMaterialExpression {
	struct FExpressionInput Value; // 0x68(0x38)
};

// Class Engine.*3f43f80eb8
// Size: 0xa0 (Inherited: 0x68)
struct U*3f43f80eb8 : UMaterialExpression {
	struct FExpressionInput Value; // 0x68(0x38)
};

// Class Engine.*9348490d6f
// Size: 0x68 (Inherited: 0x68)
struct U*9348490d6f : UMaterialExpression {
};

// Class Engine.*fd2e376aae
// Size: 0x68 (Inherited: 0x68)
struct U*fd2e376aae : UMaterialExpression {
};

// Class Engine.*9302d531b7
// Size: 0xa8 (Inherited: 0x68)
struct U*9302d531b7 : UMaterialExpression {
	struct FExpressionInput TextureSize; // 0x68(0x38)
	float *b87e396deb; // 0xa0(0x04)
	float *b08eb8df40; // 0xa4(0x04)
};

// Class Engine.*52951524d8
// Size: 0xe0 (Inherited: 0x68)
struct U*52951524d8 : UMaterialExpression {
	struct FExpressionInput InOpacity; // 0x68(0x38)
	struct FExpressionInput FadeDistance; // 0xa0(0x38)
	float *ef7c7b72bf; // 0xd8(0x04)
	float *d31df1dbe0; // 0xdc(0x04)
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
// Size: 0xa8 (Inherited: 0x68)
struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	enum class *93911cb5e4 *811eb592ac; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FExpressionInput Depth; // 0x70(0x38)
};

// Class Engine.*f43dc5872b
// Size: 0xa0 (Inherited: 0x68)
struct U*f43dc5872b : UMaterialExpression {
	struct FExpressionInput *c98a68e893; // 0x68(0x38)
};

// Class Engine.*535f3766e1
// Size: 0xe8 (Inherited: 0x68)
struct U*535f3766e1 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	struct FExpressionInput Fraction; // 0xa0(0x38)
	struct FLinearColor *c3c16012c0; // 0xd8(0x10)
};

// Class Engine.*dee6deb708
// Size: 0xd8 (Inherited: 0x68)
struct U*dee6deb708 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*262de2d81d
// Size: 0x68 (Inherited: 0x68)
struct U*262de2d81d : UMaterialExpression {
};

// Class Engine.*70a01a3c07
// Size: 0xa0 (Inherited: 0x68)
struct U*70a01a3c07 : UMaterialExpression {
	struct FExpressionInput Position; // 0x68(0x38)
};

// Class Engine.*19698479a0
// Size: 0xa0 (Inherited: 0x68)
struct U*19698479a0 : UMaterialExpression {
	struct FExpressionInput Position; // 0x68(0x38)
};

// Class Engine.MaterialExpressionDivide
// Size: 0xe0 (Inherited: 0x68)
struct UMaterialExpressionDivide : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *ee427defba; // 0xd8(0x04)
	float *a9d0cb3002; // 0xdc(0x04)
};

// Class Engine.*c0c856c827
// Size: 0xd8 (Inherited: 0x68)
struct U*c0c856c827 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*a1fb8d2a58
// Size: 0x88 (Inherited: 0x68)
struct U*a1fb8d2a58 : UMaterialExpression {
	struct TArray<struct FString> ParamNames; // 0x68(0x10)
	struct FLinearColor DefaultValue; // 0x78(0x10)
};

// Class Engine.*28ccee1660
// Size: 0x68 (Inherited: 0x68)
struct U*28ccee1660 : UMaterialExpression {
};

// Class Engine.*db5fd57c3f
// Size: 0x180 (Inherited: 0x68)
struct U*db5fd57c3f : UMaterialExpression {
	struct FExpressionInput Default; // 0x68(0x38)
	struct FExpressionInput Inputs[0x04]; // 0xa0(0xe0)
};

// Class Engine.*f338fe8486
// Size: 0xa0 (Inherited: 0x68)
struct U*f338fe8486 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*3398d77838
// Size: 0xd8 (Inherited: 0x68)
struct U*3398d77838 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
};

// Class Engine.*7300f88936
// Size: 0x78 (Inherited: 0x68)
struct U*7300f88936 : UMaterialExpression {
	struct UFont* Font; // 0x68(0x08)
	int32 *23a7000ccb; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Engine.*7c5c426f53
// Size: 0x98 (Inherited: 0x78)
struct U*7c5c426f53 : U*7300f88936 {
	struct FName ParameterName; // 0x78(0x08)
	struct FGuid *c328c6d3dd; // 0x80(0x10)
	struct FName Group; // 0x90(0x08)
};

// Class Engine.*a9c7ada7e2
// Size: 0xa0 (Inherited: 0x68)
struct U*a9c7ada7e2 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*bef32a49d5
// Size: 0x120 (Inherited: 0x68)
struct U*bef32a49d5 : UMaterialExpression {
	struct FExpressionInput ExponentIn; // 0x68(0x38)
	float Exponent; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FExpressionInput BaseReflectFractionIn; // 0xa8(0x38)
	float *2173aa7737; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FExpressionInput Normal; // 0xe8(0x38)
};

// Class Engine.*9f84bb5c4f
// Size: 0x140 (Inherited: 0x68)
struct U*9f84bb5c4f : UMaterialExpression {
	struct FExpressionInput Preview; // 0x68(0x38)
	struct FString InputName; // 0xa0(0x10)
	struct FString Description; // 0xb0(0x10)
	struct FGuid ID; // 0xc0(0x10)
	enum class *ac8c685758 InputType; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
	struct FVector4 *a25b193ba3; // 0xe0(0x10)
	char *b6c5e25d10 : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32 *5194468f97; // 0xf4(0x04)
	char *4f48928c26 : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x47]; // 0xf9(0x47)
};

// Class Engine.*302a403f81
// Size: 0xe0 (Inherited: 0x68)
struct U*302a403f81 : UMaterialExpression {
	struct FString OutputName; // 0x68(0x10)
	struct FString Description; // 0x78(0x10)
	int32 *5194468f97; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FExpressionInput A; // 0x90(0x38)
	char *0d015fafa7 : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FGuid ID; // 0xcc(0x10)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class Engine.MaterialExpressionGetMaterialAttributes
// Size: 0xb8 (Inherited: 0x68)
struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x68(0x40)
	struct TArray<struct FGuid> *61a3ad25b1; // 0xa8(0x10)
};

// Class Engine.*db80599742
// Size: 0x110 (Inherited: 0x68)
struct U*db80599742 : UMaterialExpression {
	struct FExpressionInput Default; // 0x68(0x38)
	struct FExpressionInput *5da6281d3d; // 0xa0(0x38)
	struct FExpressionInput *ba5808c96c; // 0xd8(0x38)
};

// Class Engine.MaterialExpressionIf
// Size: 0x190 (Inherited: 0x68)
struct UMaterialExpressionIf : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	struct FExpressionInput AGreaterThanB; // 0xd8(0x38)
	struct FExpressionInput AEqualsB; // 0x110(0x38)
	struct FExpressionInput ALessThanB; // 0x148(0x38)
	float *9fe61a3287; // 0x180(0x04)
	float *a9d0cb3002; // 0x184(0x04)
	float ConstAEqualsB; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
};

// Class Engine.*06c4bdde9a
// Size: 0x68 (Inherited: 0x68)
struct U*06c4bdde9a : UMaterialExpression {
};

// Class Engine.*7082088904
// Size: 0xd8 (Inherited: 0x68)
struct U*7082088904 : UMaterialExpression {
	struct FExpressionInput RealTime; // 0x68(0x38)
	struct FExpressionInput Lightmass; // 0xa0(0x38)
};

// Class Engine.*a59ed6abf5
// Size: 0x68 (Inherited: 0x68)
struct U*a59ed6abf5 : UMaterialExpression {
};

// Class Engine.MaterialExpressionLinearInterpolate
// Size: 0x120 (Inherited: 0x68)
struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	struct FExpressionInput Alpha; // 0xd8(0x38)
	float *ee427defba; // 0x110(0x04)
	float *a9d0cb3002; // 0x114(0x04)
	float *d5e1bdf118; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class Engine.*8d917447b4
// Size: 0xa0 (Inherited: 0x68)
struct U*8d917447b4 : UMaterialExpression {
	struct FExpressionInput X; // 0x68(0x38)
};

// Class Engine.*3874a16b76
// Size: 0x650 (Inherited: 0x68)
struct U*3874a16b76 : UMaterialExpression {
	struct FExpressionInput BaseColor; // 0x68(0x38)
	struct FExpressionInput Metallic; // 0xa0(0x38)
	struct FExpressionInput Specular; // 0xd8(0x38)
	struct FExpressionInput Roughness; // 0x110(0x38)
	struct FExpressionInput EmissiveColor; // 0x148(0x38)
	struct FExpressionInput Opacity; // 0x180(0x38)
	struct FExpressionInput OpacityMask; // 0x1b8(0x38)
	struct FExpressionInput Normal; // 0x1f0(0x38)
	struct FExpressionInput WorldPositionOffset; // 0x228(0x38)
	struct FExpressionInput WorldDisplacement; // 0x260(0x38)
	struct FExpressionInput TessellationMultiplier; // 0x298(0x38)
	struct FExpressionInput SubsurfaceColor; // 0x2d0(0x38)
	struct FExpressionInput ClearCoat; // 0x308(0x38)
	struct FExpressionInput ClearCoatRoughness; // 0x340(0x38)
	struct FExpressionInput AmbientOcclusion; // 0x378(0x38)
	struct FExpressionInput Refraction; // 0x3b0(0x38)
	struct FExpressionInput *3a2435c243[0x08]; // 0x3e8(0x1c0)
	struct FExpressionInput PixelDepthOffset; // 0x5a8(0x38)
	struct FExpressionInput Temperature; // 0x5e0(0x38)
	struct FExpressionInput TemperatureAlpha; // 0x618(0x38)
};

// Class Engine.MaterialExpressionMaterialFunctionCall
// Size: 0x90 (Inherited: 0x68)
struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	struct UMaterialFunction* MaterialFunction; // 0x68(0x08)
	struct TArray<struct F*50af2e6b94> *e3f718a166; // 0x70(0x10)
	struct TArray<struct F*db4206dfa4> *739bffb587; // 0x80(0x10)
};

// Class Engine.*1da0887395
// Size: 0xd8 (Inherited: 0x68)
struct U*1da0887395 : UMaterialExpression {
	struct FExpressionInput RealTime; // 0x68(0x38)
	struct FExpressionInput *8129af9cc5; // 0xa0(0x38)
};

// Class Engine.*d148876b4a
// Size: 0xe0 (Inherited: 0x68)
struct U*d148876b4a : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *ee427defba; // 0xd8(0x04)
	float *a9d0cb3002; // 0xdc(0x04)
};

// Class Engine.*825159048b
// Size: 0xe0 (Inherited: 0x68)
struct U*825159048b : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *ee427defba; // 0xd8(0x04)
	float *a9d0cb3002; // 0xdc(0x04)
};

// Class Engine.MaterialExpressionMultiply
// Size: 0xe0 (Inherited: 0x68)
struct UMaterialExpressionMultiply : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *ee427defba; // 0xd8(0x04)
	float *a9d0cb3002; // 0xdc(0x04)
};

// Class Engine.MaterialExpressionNoise
// Size: 0x100 (Inherited: 0x68)
struct UMaterialExpressionNoise : UMaterialExpression {
	struct FExpressionInput Position; // 0x68(0x38)
	struct FExpressionInput *95610aa26f; // 0xa0(0x38)
	float Scale; // 0xd8(0x04)
	int32 Quality; // 0xdc(0x04)
	enum class ENoiseFunction *03f8b00354; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	char *5674c318c6 : 1; // 0xe4(0x01)
	char pad_E4_1 : 7; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	int32 Levels; // 0xe8(0x04)
	float *b4aac0df07; // 0xec(0x04)
	float *92a1d2a940; // 0xf0(0x04)
	float *96c38166c7; // 0xf4(0x04)
	char *1536357cdb : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	uint32 RepeatSize; // 0xfc(0x04)
};

// Class Engine.MaterialExpressionNormalize
// Size: 0xa0 (Inherited: 0x68)
struct UMaterialExpressionNormalize : UMaterialExpression {
	struct FExpressionInput *725ac2e5ba; // 0x68(0x38)
};

// Class Engine.*767b627c18
// Size: 0x68 (Inherited: 0x68)
struct U*767b627c18 : UMaterialExpression {
};

// Class Engine.*5ba91631ef
// Size: 0x68 (Inherited: 0x68)
struct U*5ba91631ef : UMaterialExpression {
};

// Class Engine.*6cddb844bd
// Size: 0x70 (Inherited: 0x68)
struct U*6cddb844bd : UMaterialExpression {
	enum class *cfcb7592fe *4b25a1f19a; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*855508eef4
// Size: 0x68 (Inherited: 0x68)
struct U*855508eef4 : UMaterialExpression {
};

// Class Engine.*859101065a
// Size: 0xe8 (Inherited: 0x68)
struct U*859101065a : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x68(0x38)
	struct FExpressionInput *e9765a6d03; // 0xa0(0x38)
	char pad_D8[0x10]; // 0xd8(0x10)
};

// Class Engine.MaterialExpressionOneMinus
// Size: 0xa0 (Inherited: 0x68)
struct UMaterialExpressionOneMinus : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.MaterialExpressionPanner
// Size: 0x120 (Inherited: 0x68)
struct UMaterialExpressionPanner : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x68(0x38)
	struct FExpressionInput Time; // 0xa0(0x38)
	struct FExpressionInput Speed; // 0xd8(0x38)
	float *249dca9d4a; // 0x110(0x04)
	float *7506e7f16d; // 0x114(0x04)
	uint32 *f1a2401f68; // 0x118(0x04)
	bool *a788cdd8ba; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
};

// Class Engine.*fcdfda1104
// Size: 0x88 (Inherited: 0x68)
struct U*fcdfda1104 : UMaterialExpression {
	struct FName ParameterName; // 0x68(0x08)
	struct FGuid *c328c6d3dd; // 0x70(0x10)
	struct FName Group; // 0x80(0x08)
};

// Class Engine.MaterialExpressionScalarParameter
// Size: 0x98 (Inherited: 0x88)
struct UMaterialExpressionScalarParameter : U*fcdfda1104 {
	float DefaultValue; // 0x88(0x04)
	float SliderMin; // 0x8c(0x04)
	float SliderMax; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class Engine.*8a2bc752c7
// Size: 0x90 (Inherited: 0x88)
struct U*8a2bc752c7 : U*fcdfda1104 {
	char DefaultValue : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*258a6ce035
// Size: 0x100 (Inherited: 0x90)
struct U*258a6ce035 : U*8a2bc752c7 {
	struct FExpressionInput A; // 0x90(0x38)
	struct FExpressionInput B; // 0xc8(0x38)
};

// Class Engine.*f40560f629
// Size: 0xc8 (Inherited: 0x88)
struct U*f40560f629 : U*fcdfda1104 {
	struct FExpressionInput Input; // 0x88(0x38)
	char *bf0d635b00 : 1; // 0xc0(0x01)
	char *7566eea391 : 1; // 0xc0(0x01)
	char *84c632140c : 1; // 0xc0(0x01)
	char *ac83f8f760 : 1; // 0xc0(0x01)
	char pad_C0_4 : 4; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.MaterialExpressionVectorParameter
// Size: 0x98 (Inherited: 0x88)
struct UMaterialExpressionVectorParameter : U*fcdfda1104 {
	struct FLinearColor DefaultValue; // 0x88(0x10)
};

// Class Engine.*f9ba1c801c
// Size: 0x68 (Inherited: 0x68)
struct U*f9ba1c801c : UMaterialExpression {
};

// Class Engine.*2be9381c64
// Size: 0x70 (Inherited: 0x68)
struct U*2be9381c64 : UMaterialExpression {
	struct U*1a381703b9* Layer; // 0x68(0x08)
};

// Class Engine.*23c74ed4b9
// Size: 0x68 (Inherited: 0x68)
struct U*23c74ed4b9 : UMaterialExpression {
};

// Class Engine.*916490d5d6
// Size: 0x68 (Inherited: 0x68)
struct U*916490d5d6 : UMaterialExpression {
};

// Class Engine.*d638877de1
// Size: 0x68 (Inherited: 0x68)
struct U*d638877de1 : UMaterialExpression {
};

// Class Engine.*1f0e5f17ca
// Size: 0x68 (Inherited: 0x68)
struct U*1f0e5f17ca : UMaterialExpression {
};

// Class Engine.*270ac214e0
// Size: 0x68 (Inherited: 0x68)
struct U*270ac214e0 : UMaterialExpression {
};

// Class Engine.*12334f0ede
// Size: 0x68 (Inherited: 0x68)
struct U*12334f0ede : UMaterialExpression {
};

// Class Engine.*0fb440af97
// Size: 0x68 (Inherited: 0x68)
struct U*0fb440af97 : UMaterialExpression {
};

// Class Engine.*2528839d4f
// Size: 0x68 (Inherited: 0x68)
struct U*2528839d4f : UMaterialExpression {
};

// Class Engine.*9647c13272
// Size: 0x68 (Inherited: 0x68)
struct U*9647c13272 : UMaterialExpression {
};

// Class Engine.*10958d1d56
// Size: 0x68 (Inherited: 0x68)
struct U*10958d1d56 : UMaterialExpression {
};

// Class Engine.*fb60013324
// Size: 0x68 (Inherited: 0x68)
struct U*fb60013324 : UMaterialExpression {
};

// Class Engine.*f8c29ee6b7
// Size: 0x68 (Inherited: 0x68)
struct U*f8c29ee6b7 : UMaterialExpression {
};

// Class Engine.*0557af28a7
// Size: 0x68 (Inherited: 0x68)
struct U*0557af28a7 : UMaterialExpression {
};

// Class Engine.*69a2e6c9db
// Size: 0x68 (Inherited: 0x68)
struct U*69a2e6c9db : UMaterialExpression {
};

// Class Engine.MaterialExpressionPower
// Size: 0xe0 (Inherited: 0x68)
struct UMaterialExpressionPower : UMaterialExpression {
	struct FExpressionInput Base; // 0x68(0x38)
	struct FExpressionInput Exponent; // 0xa0(0x38)
	float *f4083b1589; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class Engine.*051216f864
// Size: 0x68 (Inherited: 0x68)
struct U*051216f864 : UMaterialExpression {
};

// Class Engine.*6fbb95dd27
// Size: 0x68 (Inherited: 0x68)
struct U*6fbb95dd27 : UMaterialExpression {
};

// Class Engine.*d5c75b5c18
// Size: 0x68 (Inherited: 0x68)
struct U*d5c75b5c18 : UMaterialExpression {
};

// Class Engine.*396d619fff
// Size: 0xd8 (Inherited: 0x68)
struct U*396d619fff : UMaterialExpression {
	struct FExpressionInput CurrentFrame; // 0x68(0x38)
	struct FExpressionInput *187f2647b9; // 0xa0(0x38)
};

// Class Engine.*f2cc12a8f9
// Size: 0x148 (Inherited: 0x68)
struct U*f2cc12a8f9 : UMaterialExpression {
	struct FExpressionInput Default; // 0x68(0x38)
	struct FExpressionInput Inputs[0x03]; // 0xa0(0xa8)
};

// Class Engine.MaterialExpressionReflectionVectorWS
// Size: 0xa8 (Inherited: 0x68)
struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	struct FExpressionInput *9b885a57e6; // 0x68(0x38)
	char *234e968a26 : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.*21c3dabae0
// Size: 0xa0 (Inherited: 0x68)
struct U*21c3dabae0 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*49c3201fb9
// Size: 0x150 (Inherited: 0x68)
struct U*49c3201fb9 : UMaterialExpression {
	struct FExpressionInput *06874afa62; // 0x68(0x38)
	struct FExpressionInput RotationAngle; // 0xa0(0x38)
	struct FExpressionInput *a767712505; // 0xd8(0x38)
	struct FExpressionInput Position; // 0x110(0x38)
	float Period; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class Engine.*9e854e8a3e
// Size: 0xe8 (Inherited: 0x68)
struct U*9e854e8a3e : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x68(0x38)
	struct FExpressionInput Time; // 0xa0(0x38)
	float *077271e48f; // 0xd8(0x04)
	float *332236d1ed; // 0xdc(0x04)
	float Speed; // 0xe0(0x04)
	uint32 *f1a2401f68; // 0xe4(0x04)
};

// Class Engine.*09430da614
// Size: 0xa0 (Inherited: 0x68)
struct U*09430da614 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*9133d9d287
// Size: 0xa0 (Inherited: 0x68)
struct U*9133d9d287 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*a734febf21
// Size: 0xe8 (Inherited: 0x68)
struct U*a734febf21 : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FExpressionInput Input; // 0x70(0x38)
	struct FExpressionInput OffsetFraction; // 0xa8(0x38)
	struct FVector2D *706b8c4f05; // 0xe0(0x08)
};

// Class Engine.*7eba75227c
// Size: 0xe8 (Inherited: 0x68)
struct U*7eba75227c : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FExpressionInput Input; // 0x70(0x38)
	struct FExpressionInput Coordinates; // 0xa8(0x38)
	struct FVector2D *706b8c4f05; // 0xe0(0x08)
};

// Class Engine.*e276867369
// Size: 0x68 (Inherited: 0x68)
struct U*e276867369 : UMaterialExpression {
};

// Class Engine.*5bb713d638
// Size: 0xa8 (Inherited: 0x68)
struct U*5bb713d638 : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x68(0x38)
	enum class ESceneTextureId *12a623c321; // 0xa0(0x01)
	bool *23118e5e8a; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// Class Engine.*b8f456d8b8
// Size: 0x70 (Inherited: 0x68)
struct U*b8f456d8b8 : UMaterialExpression {
	enum class *99d47c34bb *e739027126; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*2085175943
// Size: 0x68 (Inherited: 0x68)
struct U*2085175943 : UMaterialExpression {
};

// Class Engine.MaterialExpressionSetMaterialAttributes
// Size: 0x88 (Inherited: 0x68)
struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	struct TArray<struct FExpressionInput> Inputs; // 0x68(0x10)
	struct TArray<struct FGuid> *33e96eae77; // 0x78(0x10)
};

// Class Engine.*4cd5646550
// Size: 0xa0 (Inherited: 0x68)
struct U*4cd5646550 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*29ee40c4e4
// Size: 0xa8 (Inherited: 0x68)
struct U*29ee40c4e4 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	float Period; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*a9b57842eb
// Size: 0x158 (Inherited: 0x68)
struct U*a9b57842eb : UMaterialExpression {
	struct FExpressionInput *2fa22b125c; // 0x68(0x38)
	struct FExpressionInput *bbf2451f86; // 0xa0(0x38)
	struct FExpressionInput *ca6613e65f; // 0xd8(0x38)
	struct FExpressionInput *a5d70851de; // 0x110(0x38)
	enum class *4a160ffb21 GeometryType; // 0x148(0x01)
	enum class *66abcb0d1e *b47e1e44f1; // 0x149(0x01)
	enum class *81ca03137a LODType; // 0x14a(0x01)
	char pad_14B[0x1]; // 0x14b(0x01)
	float BillboardThreshold; // 0x14c(0x04)
	bool *82331d2755; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// Class Engine.*64579397e9
// Size: 0x150 (Inherited: 0x68)
struct U*64579397e9 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	struct FExpressionInput Radius; // 0xd8(0x38)
	struct FExpressionInput Hardness; // 0x110(0x38)
	float AttenuationRadius; // 0x148(0x04)
	float *047aef5241; // 0x14c(0x04)
};

// Class Engine.*77989b2fdb
// Size: 0xa8 (Inherited: 0x68)
struct U*77989b2fdb : UMaterialExpression {
	struct FExpressionInput Density; // 0x68(0x38)
	float *a3885b2b9b; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*ecc0d58007
// Size: 0xa0 (Inherited: 0x68)
struct U*ecc0d58007 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*467d9bf4fe
// Size: 0x70 (Inherited: 0x68)
struct U*467d9bf4fe : UMaterialExpression {
	char Value : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*97c903af5a
// Size: 0x118 (Inherited: 0x68)
struct U*97c903af5a : UMaterialExpression {
	char DefaultValue : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FExpressionInput A; // 0x70(0x38)
	struct FExpressionInput B; // 0xa8(0x38)
	struct FExpressionInput Value; // 0xe0(0x38)
};

// Class Engine.*2713b01237
// Size: 0xe0 (Inherited: 0x68)
struct U*2713b01237 : UMaterialExpression {
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	float *ee427defba; // 0xd8(0x04)
	float *a9d0cb3002; // 0xdc(0x04)
};

// Class Engine.*e67527d97e
// Size: 0xa8 (Inherited: 0x68)
struct U*e67527d97e : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	float Period; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*12c0ee0482
// Size: 0xc0 (Inherited: 0x68)
struct U*12c0ee0482 : U*4eb614635f {
	struct FExpressionInput UV; // 0x68(0x38)
	struct TArray<struct F*658ea9fc43> Inputs; // 0xa0(0x10)
	uint32 *f1a2401f68; // 0xb0(0x04)
	char pad_B4[0xc]; // 0xb4(0x0c)
};

// Class Engine.*6fd0dd3a71
// Size: 0xc8 (Inherited: 0x68)
struct U*6fd0dd3a71 : U*4eb614635f {
	struct FExpressionInput UV; // 0x68(0x38)
	struct TArray<struct F*b134dd6495> Inputs; // 0xa0(0x10)
	uint32 *f1a2401f68; // 0xb0(0x04)
	char pad_B4[0x14]; // 0xb4(0x14)
};

// Class Engine.*9d76d0cc0b
// Size: 0x100 (Inherited: 0x68)
struct U*9d76d0cc0b : U*4eb614635f {
	struct FExpressionInput UV; // 0x68(0x38)
	struct FExpressionInput *9efb1b7ad4; // 0xa0(0x38)
	struct TArray<struct F*24557f2ee5> Inputs; // 0xd8(0x10)
	uint32 *f1a2401f68; // 0xe8(0x04)
	char pad_EC[0x14]; // 0xec(0x14)
};

// Class Engine.*bd43e6d7c9
// Size: 0x78 (Inherited: 0x68)
struct U*bd43e6d7c9 : UMaterialExpression {
	struct UTexture* Texture; // 0x68(0x08)
	enum class EMaterialSamplerType *e9cce4019f; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	char IsDefaultMeshpaintTexture : 1; // 0x74(0x01)
	char pad_74_1 : 7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class Engine.*defeb1578f
// Size: 0x78 (Inherited: 0x78)
struct U*defeb1578f : U*bd43e6d7c9 {
};

// Class Engine.MaterialExpressionTextureSample
// Size: 0x1f0 (Inherited: 0x78)
struct UMaterialExpressionTextureSample : U*bd43e6d7c9 {
	struct FExpressionInput Coordinates; // 0x78(0x38)
	struct FExpressionInput TextureObject; // 0xb0(0x38)
	struct FExpressionInput *d99dbeceda; // 0xe8(0x38)
	struct FExpressionInput *e0d8da4cde; // 0x120(0x38)
	struct FExpressionInput *fdf20cbba6; // 0x158(0x38)
	struct FExpressionInput SampleCondition; // 0x190(0x38)
	enum class *7adf0a8cf1 MipValueMode; // 0x1c8(0x01)
	enum class *d18862b868 *0009bc5ac9; // 0x1c9(0x01)
	char pad_1CA[0x2]; // 0x1ca(0x02)
	uint32 *f1a2401f68; // 0x1cc(0x04)
	int32 *0fd46582ae; // 0x1d0(0x04)
	char *7afb94bd63 : 1; // 0x1d4(0x01)
	char pad_1D4_1 : 7; // 0x1d4(0x01)
	char pad_1D5[0x3]; // 0x1d5(0x03)
	bool *8486c55bce; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	struct FLinearColor DefaultValue; // 0x1dc(0x10)
	char pad_1EC[0x4]; // 0x1ec(0x04)
};

// Class Engine.*44f7da4a7b
// Size: 0x1f8 (Inherited: 0x1f0)
struct U*44f7da4a7b : UMaterialExpressionTextureSample {
	char *e805c811e1 : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
};

// Class Engine.*690f3c02e5
// Size: 0x210 (Inherited: 0x1f0)
struct U*690f3c02e5 : UMaterialExpressionTextureSample {
	struct FName ParameterName; // 0x1f0(0x08)
	struct FGuid *c328c6d3dd; // 0x1f8(0x10)
	struct FName Group; // 0x208(0x08)
};

// Class Engine.*72489f2b40
// Size: 0x210 (Inherited: 0x210)
struct U*72489f2b40 : U*690f3c02e5 {
};

// Class Engine.*0a49d994d5
// Size: 0x210 (Inherited: 0x210)
struct U*0a49d994d5 : U*690f3c02e5 {
};

// Class Engine.*21ec55d76a
// Size: 0x218 (Inherited: 0x210)
struct U*21ec55d76a : U*0a49d994d5 {
	float Threshold; // 0x210(0x04)
	enum class *0bc8cf689a Channel; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
};

// Class Engine.*2a6e33b22a
// Size: 0x218 (Inherited: 0x210)
struct U*2a6e33b22a : U*0a49d994d5 {
	char *e805c811e1 : 1; // 0x210(0x01)
	char pad_210_1 : 7; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
};

// Class Engine.*87a4c8e6c4
// Size: 0x210 (Inherited: 0x210)
struct U*87a4c8e6c4 : U*690f3c02e5 {
};

// Class Engine.*b05c72b6fc
// Size: 0x210 (Inherited: 0x210)
struct U*b05c72b6fc : U*690f3c02e5 {
};

// Class Engine.MaterialExpressionTextureCoordinate
// Size: 0x78 (Inherited: 0x68)
struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32 *b9962734ce; // 0x68(0x04)
	float *444ad347d0; // 0x6c(0x04)
	float *e61ef92dd0; // 0x70(0x04)
	char UnMirrorU : 1; // 0x74(0x01)
	char UnMirrorV : 1; // 0x74(0x01)
	char pad_74_2 : 6; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class Engine.*2ec719f63c
// Size: 0xa8 (Inherited: 0x68)
struct U*2ec719f63c : UMaterialExpression {
	struct FExpressionInput TextureObject; // 0x68(0x38)
	enum class EMaterialExposedTextureProperty Property; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.*de8e9c7dce
// Size: 0x70 (Inherited: 0x68)
struct U*de8e9c7dce : UMaterialExpression {
	char *58e44ec376 : 1; // 0x68(0x01)
	char bOverride_Period : 1; // 0x68(0x01)
	char pad_68_2 : 6; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float Period; // 0x6c(0x04)
};

// Class Engine.*02caf794f2
// Size: 0xa8 (Inherited: 0x68)
struct U*02caf794f2 : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	enum class EMaterialVectorCoordTransformSource *fd6eac51cb; // 0xa0(0x01)
	enum class EMaterialVectorCoordTransform TransformType; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// Class Engine.*81797b028b
// Size: 0xa8 (Inherited: 0x68)
struct U*81797b028b : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
	enum class EMaterialPositionTransformSource *fd6eac51cb; // 0xa0(0x01)
	enum class EMaterialPositionTransformSource TransformType; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
};

// Class Engine.*49d24c42fe
// Size: 0xa0 (Inherited: 0x68)
struct U*49d24c42fe : UMaterialExpression {
	struct FExpressionInput Input; // 0x68(0x38)
};

// Class Engine.*e465708ca3
// Size: 0x68 (Inherited: 0x68)
struct U*e465708ca3 : UMaterialExpression {
};

// Class Engine.MaterialExpressionVectorNoise
// Size: 0xb0 (Inherited: 0x68)
struct UMaterialExpressionVectorNoise : UMaterialExpression {
	struct FExpressionInput Position; // 0x68(0x38)
	enum class *f01eeccd92 *03f8b00354; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 Quality; // 0xa4(0x04)
	char *1536357cdb : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	uint32 TileSize; // 0xac(0x04)
};

// Class Engine.*b5f20bee85
// Size: 0x68 (Inherited: 0x68)
struct U*b5f20bee85 : UMaterialExpression {
};

// Class Engine.*ed641a8665
// Size: 0x68 (Inherited: 0x68)
struct U*ed641a8665 : UMaterialExpression {
};

// Class Engine.*3107b5d9a1
// Size: 0x68 (Inherited: 0x68)
struct U*3107b5d9a1 : UMaterialExpression {
};

// Class Engine.*4be8ed93cd
// Size: 0x70 (Inherited: 0x68)
struct U*4be8ed93cd : UMaterialExpression {
	enum class EMaterialExposedViewProperty Property; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*b86c144307
// Size: 0x68 (Inherited: 0x68)
struct U*b86c144307 : UMaterialExpression {
};

// Class Engine.*2b5c3022b5
// Size: 0x70 (Inherited: 0x68)
struct U*2b5c3022b5 : UMaterialExpression {
	enum class *a9ab81e1fd *e1ab753c84; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.MaterialFunction
// Size: 0x70 (Inherited: 0x30)
struct UMaterialFunction : UObject {
	struct FGuid *22e2843827; // 0x30(0x10)
	struct FString Description; // 0x40(0x10)
	char bExposeToLibrary : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct UMaterialExpression*> *8033f470cf; // 0x58(0x10)
	char *92eb61b304 : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.Material
// Size: 0xa88 (Inherited: 0x78)
struct UMaterial : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x78(0x08)
	struct FColorMaterialInput DiffuseColor; // 0x80(0x40)
	struct FColorMaterialInput SpecularColor; // 0xc0(0x40)
	struct FColorMaterialInput BaseColor; // 0x100(0x40)
	struct FScalarMaterialInput Metallic; // 0x140(0x40)
	struct FScalarMaterialInput Specular; // 0x180(0x40)
	struct FScalarMaterialInput Roughness; // 0x1c0(0x40)
	struct FVectorMaterialInput Normal; // 0x200(0x48)
	struct FColorMaterialInput EmissiveColor; // 0x248(0x40)
	struct FScalarMaterialInput Opacity; // 0x288(0x40)
	struct FScalarMaterialInput OpacityMask; // 0x2c8(0x40)
	enum class EMaterialDomain MaterialDomain; // 0x308(0x01)
	enum class EBlendMode BlendMode; // 0x309(0x01)
	enum class *54dd39b5c6 *c903d9790f; // 0x30a(0x01)
	enum class *7dc92c8511 MaterialDecalResponse; // 0x30b(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	float OpacityMaskClipValue; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct FVectorMaterialInput WorldPositionOffset; // 0x318(0x48)
	struct FVectorMaterialInput WorldDisplacement; // 0x360(0x48)
	struct FScalarMaterialInput TessellationMultiplier; // 0x3a8(0x40)
	struct FColorMaterialInput SubsurfaceColor; // 0x3e8(0x40)
	struct FScalarMaterialInput ClearCoat; // 0x428(0x40)
	struct FScalarMaterialInput ClearCoatRoughness; // 0x468(0x40)
	struct FScalarMaterialInput AmbientOcclusion; // 0x4a8(0x40)
	struct FScalarMaterialInput Refraction; // 0x4e8(0x40)
	struct FVector2MaterialInput *3a2435c243[0x08]; // 0x528(0x240)
	struct FMaterialAttributesInput MaterialAttributes; // 0x768(0x40)
	struct FScalarMaterialInput PixelDepthOffset; // 0x7a8(0x40)
	struct FScalarMaterialInput Temperature; // 0x7e8(0x40)
	struct FScalarMaterialInput TemperatureAlpha; // 0x828(0x40)
	char bPrepassMasked : 1; // 0x868(0x01)
	char *d7720e9477 : 1; // 0x868(0x01)
	char *ad5638344e : 1; // 0x868(0x01)
	char *f786fdbcc4 : 1; // 0x868(0x01)
	char *42e7770a35 : 1; // 0x868(0x01)
	char TwoSided : 1; // 0x868(0x01)
	char DitheredLODTransition : 1; // 0x868(0x01)
	char *95148cace4 : 1; // 0x868(0x01)
	char *32a2a456fa : 1; // 0x869(0x01)
	char *a501dffda9 : 1; // 0x869(0x01)
	char pad_869_2 : 6; // 0x869(0x01)
	char pad_86A[0x2]; // 0x86a(0x02)
	int32 *c15e49b910; // 0x86c(0x04)
	enum class ETranslucencyLightingMode *13de54e0be; // 0x870(0x01)
	char pad_871[0x3]; // 0x871(0x03)
	float *d2ef1522f7; // 0x874(0x04)
	char *bcdae413e4 : 1; // 0x878(0x01)
	char pad_878_1 : 7; // 0x878(0x01)
	char pad_879[0x3]; // 0x879(0x03)
	float *6126a19b77; // 0x87c(0x04)
	float *d47286ac24; // 0x880(0x04)
	float *da7c2deace; // 0x884(0x04)
	float *9c37c818a0; // 0x888(0x04)
	float *0de2cedcbe; // 0x88c(0x04)
	struct FLinearColor *bbfec1b78f; // 0x890(0x10)
	float TranslucentShadowStartOffset; // 0x8a0(0x04)
	char *0aa562d091 : 1; // 0x8a4(0x01)
	char *38eb065fda : 1; // 0x8a4(0x01)
	char *faed24520b : 1; // 0x8a4(0x01)
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x8a4(0x01)
	char bBlockGI : 1; // 0x8a4(0x01)
	char *2688ce7bd9 : 1; // 0x8a4(0x01)
	char bUsedWithSkeletalMesh : 1; // 0x8a4(0x01)
	char bUsedWithEditorCompositing : 1; // 0x8a4(0x01)
	char bUsedWithParticleSprites : 1; // 0x8a5(0x01)
	char bUsedWithBeamTrails : 1; // 0x8a5(0x01)
	char bUsedWithMeshParticles : 1; // 0x8a5(0x01)
	char bUsedWithNiagaraSprites : 1; // 0x8a5(0x01)
	char bUsedWithNiagaraRibbons : 1; // 0x8a5(0x01)
	char bUsedWithNiagaraMeshParticles : 1; // 0x8a5(0x01)
	char bUsedWithStaticLighting : 1; // 0x8a5(0x01)
	char bUsedWithMorphTargets : 1; // 0x8a5(0x01)
	char bUsedWithSplineMeshes : 1; // 0x8a6(0x01)
	char bUsedWithInstancedStaticMeshes : 1; // 0x8a6(0x01)
	char bUsedWithInstancedSplineMeshes : 1; // 0x8a6(0x01)
	char bUsedWithInstancedDeferredDecals : 1; // 0x8a6(0x01)
	char bUsesDistortion : 1; // 0x8a6(0x01)
	char bUsedWithClothing : 1; // 0x8a6(0x01)
	char bUsedWithUI : 1; // 0x8a6(0x01)
	char bAutomaticallySetUsageInEditor : 1; // 0x8a6(0x01)
	char bFullyRough : 1; // 0x8a7(0x01)
	char bUseFullPrecision : 1; // 0x8a7(0x01)
	char bUseLightmapDirectionality : 1; // 0x8a7(0x01)
	char bUseHQForwardReflections : 1; // 0x8a7(0x01)
	char bUsePlanarForwardReflections : 1; // 0x8a7(0x01)
	char bNormalCurvatureToRoughness : 1; // 0x8a7(0x01)
	char pad_8A7_6 : 2; // 0x8a7(0x01)
	enum class *60542ade72 D3D11TessellationMode; // 0x8a8(0x01)
	char pad_8A9[0x3]; // 0x8a9(0x03)
	char bEnableCrackFreeDisplacement : 1; // 0x8ac(0x01)
	char bEnableAdaptiveTessellation : 1; // 0x8ac(0x01)
	char pad_8AC_2 : 6; // 0x8ac(0x01)
	char pad_8AD[0x3]; // 0x8ad(0x03)
	float *e543a395f8; // 0x8b0(0x04)
	char Wireframe : 1; // 0x8b4(0x01)
	char *3d2e989df3 : 1; // 0x8b4(0x01)
	char *eba5a3a4c1 : 1; // 0x8b4(0x01)
	char bApplyMaterialClipVolumes : 1; // 0x8b4(0x01)
	char pad_8B4_4 : 4; // 0x8b4(0x01)
	char pad_8B5[0x3]; // 0x8b5(0x03)
	struct F*cbc183fb78 MaterialClipVolumeTypes; // 0x8b8(0x04)
	enum class *f6de29b1ba MaterialClipVolumeImportance; // 0x8bc(0x01)
	char pad_8BD[0x3]; // 0x8bd(0x03)
	float MaterialClipVolumeFadeRange; // 0x8c0(0x04)
	char bMaterialClipVolumesUseDiscardForTranslucent : 1; // 0x8c4(0x01)
	char bIsMaterialClipVolumeWater : 1; // 0x8c4(0x01)
	char bUseMeshClipping : 1; // 0x8c4(0x01)
	char pad_8C4_3 : 5; // 0x8c4(0x01)
	char pad_8C5[0x3]; // 0x8c5(0x03)
	int32 *a7da31fa54; // 0x8c8(0x04)
	int32 *12dc11ace6; // 0x8cc(0x04)
	int32 *d4e0fadf6e; // 0x8d0(0x04)
	int32 *67c3321501; // 0x8d4(0x04)
	struct TArray<struct UMaterialExpression*> Expressions; // 0x8d8(0x10)
	struct TArray<struct F*e38a769251> *b3a4525455; // 0x8e8(0x10)
	struct TArray<struct F*370d1e6725> *8675c3ae76; // 0x8f8(0x10)
	char *8addfadb98 : 1; // 0x908(0x01)
	char bIsMasked : 1; // 0x908(0x01)
	char *963dfb4f07 : 1; // 0x908(0x01)
	char *251417174d : 1; // 0x908(0x01)
	char *c6fbcca14d : 1; // 0x908(0x01)
	char *7bc1f45705 : 1; // 0x908(0x01)
	char *aa4bbe806a : 1; // 0x908(0x01)
	char *0f61e26a38 : 1; // 0x908(0x01)
	char *c3da6f2ba3 : 1; // 0x909(0x01)
	char pad_909_1 : 7; // 0x909(0x01)
	char pad_90A[0x2]; // 0x90a(0x02)
	uint32 *d016225168; // 0x90c(0x04)
	enum class *bab6308d38 BlendableLocation; // 0x910(0x01)
	char pad_911[0x3]; // 0x911(0x03)
	int32 BlendablePriority; // 0x914(0x04)
	bool BlendableOutputAlpha; // 0x918(0x01)
	enum class *1850b152a2 *920b781375; // 0x919(0x01)
	char pad_91A[0x2]; // 0x91a(0x02)
	float RefractionDepthBias; // 0x91c(0x04)
	struct FGuid *22e2843827; // 0x920(0x10)
	char pad_930[0x148]; // 0x930(0x148)
	struct TArray<struct UTexture*> *15daba2076; // 0xa78(0x10)
};

// Class Engine.MaterialInstanceDynamic
// Size: 0x238 (Inherited: 0x1e8)
struct UMaterialInstanceDynamic : UMaterialInstance {
	char pad_1E8[0x50]; // 0x1e8(0x50)

	float SetScalarParameterValue(); // Function Engine.MaterialInstanceDynamic.SetScalarParameterValue // Final|Native|Public|BlueprintCallable // @ game+0x6762d08
	struct FLinearColor *02d0fe09fd(); // Function Engine.MaterialInstanceDynamic.*02d0fe09fd // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x675e7e0
	float *bf06a96f38(); // Function Engine.MaterialInstanceDynamic.*bf06a96f38 // Final|Native|Public|BlueprintCallable // @ game+0x675e68c
	struct UMaterialInstance* CopyInterpParameters(); // Function Engine.MaterialInstanceDynamic.CopyInterpParameters // Final|Native|Public // @ game+0x6756b2c
	struct UMaterialInstance* CopyParameterOverrides(); // Function Engine.MaterialInstanceDynamic.CopyParameterOverrides // Final|Native|Public|BlueprintCallable // @ game+0x6756bbc
	struct FLinearColor SetVectorParameterValue(); // Function Engine.MaterialInstanceDynamic.SetVectorParameterValue // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x676334c
	float K2_InterpolateMaterialInstanceParams(); // Function Engine.MaterialInstanceDynamic.K2_InterpolateMaterialInstanceParams // Final|Native|Public|BlueprintCallable // @ game+0x675e898
	struct UMaterialInterface* K2_CopyMaterialInstanceParameters(); // Function Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters // Final|Native|Public|BlueprintCallable // @ game+0x675ca90
	struct UTexture* *ed738f0c51(); // Function Engine.MaterialInstanceDynamic.*ed738f0c51 // Final|Native|Public|BlueprintCallable // @ game+0x675e734
	struct UTexture* *4509b63595(); // Function Engine.MaterialInstanceDynamic.*4509b63595 // Final|Native|Public|BlueprintCallable // @ game+0x6763158
};

// Class Engine.MaterialParameterCollection
// Size: 0x70 (Inherited: 0x30)
struct UMaterialParameterCollection : UObject {
	struct FGuid *22e2843827; // 0x30(0x10)
	struct TArray<struct F*a1ba061c1d> *43ff8a61b5; // 0x40(0x10)
	struct TArray<struct F*751b50de16> *2ad6093b9c; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class Engine.*83566278c1
// Size: 0xf0 (Inherited: 0x30)
struct U*83566278c1 : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UMaterialParameterCollection* Collection; // 0x38(0x08)
	struct UWorld* World; // 0x40(0x08)
	char pad_48[0xa8]; // 0x48(0xa8)
};

// Class Engine.*748ad1a51c
// Size: 0x30 (Inherited: 0x30)
struct U*748ad1a51c : UInterface {
};

// Class Engine.MorphTarget
// Size: 0x48 (Inherited: 0x30)
struct UMorphTarget : UObject {
	struct USkeletalMesh* *9890a68995; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class Engine.NavArea_Default
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Default : UNavArea {
};

// Class Engine.NavArea_LowHeight
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_LowHeight : UNavArea {
};

// Class Engine.NavArea_Null
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Null : UNavArea {
};

// Class Engine.NavArea_Obstacle
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Obstacle : UNavArea {
};

// Class Engine.NavAreaMeta
// Size: 0x48 (Inherited: 0x48)
struct UNavAreaMeta : UNavArea {
};

// Class Engine.NavAreaMeta_SwitchByAgent
// Size: 0xc8 (Inherited: 0x48)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UClass* *92aa7b1c54; // 0x48(0x08)
	struct UClass* *95a31a0c42; // 0x50(0x08)
	struct UClass* *feaed8830d; // 0x58(0x08)
	struct UClass* *43fb095353; // 0x60(0x08)
	struct UClass* *3404b00cfb; // 0x68(0x08)
	struct UClass* *31231ede77; // 0x70(0x08)
	struct UClass* *afdeb79579; // 0x78(0x08)
	struct UClass* *702d52348c; // 0x80(0x08)
	struct UClass* *73aa5379c0; // 0x88(0x08)
	struct UClass* *ea9525976d; // 0x90(0x08)
	struct UClass* *e44d755156; // 0x98(0x08)
	struct UClass* *a9339d6749; // 0xa0(0x08)
	struct UClass* *efa4dcbd99; // 0xa8(0x08)
	struct UClass* *fe5181a258; // 0xb0(0x08)
	struct UClass* *7940b0ddce; // 0xb8(0x08)
	struct UClass* *a8f90f36e3; // 0xc0(0x08)
};

// Class Engine.NavCollision
// Size: 0x118 (Inherited: 0x30)
struct UNavCollision : UObject {
	char pad_30[0x50]; // 0x30(0x50)
	struct TArray<struct F*e4f24fb012> *d7953eb34f; // 0x80(0x10)
	struct TArray<struct F*7a4700bacd> *eb475cd7bf; // 0x90(0x10)
	struct UClass* AreaClass; // 0xa0(0x08)
	char bIsDynamicObstacle : 1; // 0xa8(0x01)
	char bGatherConvexGeometry : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x6f]; // 0xa9(0x6f)
};

// Class Engine.*0ecc1f3ef6
// Size: 0x30 (Inherited: 0x30)
struct U*0ecc1f3ef6 : UInterface {
};

// Class Engine.*e07a4c78fc
// Size: 0x38 (Inherited: 0x30)
struct U*e07a4c78fc : UObject {
	struct FName *b1e5bc4cb2; // 0x30(0x08)
};

// Class Engine.*a365d81698
// Size: 0x48 (Inherited: 0x38)
struct U*a365d81698 : U*e07a4c78fc {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class Engine.NavigationPath
// Size: 0xd0 (Inherited: 0x30)
struct UNavigationPath : UObject {
	struct FMulticastDelegate PathUpdatedNotifier; // 0x30(0x10)
	struct TArray<struct FVector> PathPoints; // 0x40(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x50(0x01)
	char pad_51[0x7f]; // 0x51(0x7f)

	float GetPathLength(); // Function Engine.NavigationPath.GetPathLength // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675a6e8
	struct FString *fc9e1964c2(); // Function Engine.NavigationPath.*fc9e1964c2 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675934c
	struct FLinearColor *823665197a(); // Function Engine.NavigationPath.*823665197a // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6757700
	enum class ENavigationOptionFlag *86e95237b5(); // Function Engine.NavigationPath.*86e95237b5 // Final|Native|Public|BlueprintCallable // @ game+0x67578e0
	bool *4dae8da871(); // Function Engine.NavigationPath.*4dae8da871 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675c62c
	bool IsValid(); // Function Engine.NavigationPath.IsValid // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675c8d4
	bool *344e288276(); // Function Engine.NavigationPath.*344e288276 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0xa85bb0
	float *4b20078d80(); // Function Engine.NavigationPath.*4b20078d80 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x675a458
};

// Class Engine.*29c5a1239e
// Size: 0x30 (Inherited: 0x30)
struct U*29c5a1239e : UInterface {
};

// Class Engine.*8763313daf
// Size: 0x50 (Inherited: 0x50)
struct U*8763313daf : U*c2b50fe57b {
};

// Class Engine.*b5e9d5c7df
// Size: 0x58 (Inherited: 0x58)
struct U*b5e9d5c7df : U*2b10dd8963 {
};

// Class Engine.*8fdb56dc30
// Size: 0x30 (Inherited: 0x30)
struct U*8fdb56dc30 : UInterface {
};

// Class Engine.*c590d5fb59
// Size: 0x378 (Inherited: 0xe8)
struct U*c590d5fb59 : UPackageMap {
	char pad_E8[0x290]; // 0xe8(0x290)
};

// Class Engine.DemoNetConnection
// Size: 0x659c0 (Inherited: 0x65850)
struct UDemoNetConnection : UNetConnection {
	char pad_65850[0x20]; // 0x65850(0x20)
	struct FStringClassReference OverrideActorChannel; // 0x65870(0x10)
	char pad_65880[0x140]; // 0x65880(0x140)
};

// Class Engine.*d62ab56f60
// Size: 0x30 (Inherited: 0x30)
struct U*d62ab56f60 : UInterface {
};

// Class Engine.*68a7b2dd34
// Size: 0xa0 (Inherited: 0x30)
struct U*68a7b2dd34 : UObject {
	struct TMap<struct FName, struct F*ad5700d99f> NodeMapping; // 0x30(0x50)
	struct UBlueprint* *0b3e5abbe6; // 0x80(0x20)
};

// Class Engine.ObjectLibrary
// Size: 0x160 (Inherited: 0x30)
struct UObjectLibrary : UObject {
	struct UClass* *83da8912a7; // 0x30(0x08)
	bool bHasBlueprintClasses; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct UObject*> Objects; // 0x40(0x10)
	struct TArray<struct UObject*> *b44fce94b2; // 0x50(0x10)
	bool *e41b56e52d; // 0x60(0x01)
	bool *71d706649f; // 0x61(0x01)
	char pad_62[0xfe]; // 0x62(0xfe)
};

// Class Engine.*b0f24f93f7
// Size: 0x40 (Inherited: 0x30)
struct U*b0f24f93f7 : UObject {
	struct TArray<struct UObject*> *867e6b9a46; // 0x30(0x10)
};

// Class Engine.*27f1b06f69
// Size: 0x30 (Inherited: 0x30)
struct U*27f1b06f69 : UObject {

	void Activate(); // Function Engine.*27f1b06f69.Activate // Native|Public|BlueprintCallable // @ game+0x66f376c
};

// Class Engine.*48d25e7d02
// Size: 0x30 (Inherited: 0x30)
struct U*48d25e7d02 : UObject {
};

// Class Engine.*bd40d2e124
// Size: 0x30 (Inherited: 0x30)
struct U*bd40d2e124 : UObject {
};

// Class Engine.ParticleEmitter
// Size: 0x188 (Inherited: 0x30)
struct UParticleEmitter : UObject {
	struct FName *9eda9ea0a8; // 0x30(0x08)
	int32 *e8a2e45708; // 0x38(0x04)
	enum class *226dd4d07e *8e0c9026ff; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct UParticleLODLevel*> *9ccb781d53; // 0x40(0x10)
	char *16ffa74f66 : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 *e4b565860a; // 0x54(0x04)
	int32 *fcb77a58aa; // 0x58(0x04)
	float MediumDetailSpawnRateScale; // 0x5c(0x04)
	float *85a6c2640f; // 0x60(0x04)
	enum class *92a8d5bca4 DetailMode; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	char *1fd168b5c1 : 1; // 0x68(0x01)
	char *23937a5421 : 1; // 0x68(0x01)
	char *7482966f1c : 1; // 0x68(0x01)
	char *b34056688c : 1; // 0x68(0x01)
	char pad_68_4 : 4; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class EParticleSignificanceLevel *9592c42f06; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float *44dd3dc3f5; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct U*1a381703b9* *1a381703b9; // 0x78(0x08)
	char pad_80[0x108]; // 0x80(0x108)
};

// Class Engine.*205d5c314d
// Size: 0x188 (Inherited: 0x188)
struct U*205d5c314d : UParticleEmitter {
};

// Class Engine.ParticleLODLevel
// Size: 0xc0 (Inherited: 0x30)
struct UParticleLODLevel : UObject {
	int32 Level; // 0x30(0x04)
	char bEnabled : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UParticleModuleRequired* *81e4d29b94; // 0x38(0x08)
	struct TArray<struct UParticleModule*> Modules; // 0x40(0x10)
	struct UParticleModuleTypeDataBase* *73489f9986; // 0x50(0x08)
	struct UParticleModuleSpawn* *39a5d5fee2; // 0x58(0x08)
	struct UParticleModuleEventGenerator* *8845b8fa57; // 0x60(0x08)
	struct TArray<struct U*1d88593bf9*> *e169fda058; // 0x68(0x10)
	struct TArray<struct UParticleModule*> *b123169b8f; // 0x78(0x10)
	struct TArray<struct UParticleModule*> *880a99ea01; // 0x88(0x10)
	struct TArray<struct UParticleModuleOrbit*> *7624c22753; // 0x98(0x10)
	struct TArray<struct UParticleModuleEventReceiverBase*> *f9cd3167e8; // 0xa8(0x10)
	char *16ffa74f66 : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 *e4b565860a; // 0xbc(0x04)
};

// Class Engine.ParticleModule
// Size: 0x38 (Inherited: 0x30)
struct UParticleModule : UObject {
	char *42eaf1ec8b : 1; // 0x30(0x01)
	char *83d30d40b7 : 1; // 0x30(0x01)
	char *bb9a7504d9 : 1; // 0x30(0x01)
	char *7c070641ba : 1; // 0x30(0x01)
	char *d3d4fec909 : 1; // 0x30(0x01)
	char *ab991ce2e1 : 1; // 0x30(0x01)
	char *428bc0306a : 1; // 0x30(0x01)
	char bEnabled : 1; // 0x30(0x01)
	char *f67ad7c946 : 1; // 0x31(0x01)
	char *86ca51f97b : 1; // 0x31(0x01)
	char *1f8e5c1c1a : 1; // 0x31(0x01)
	char *2e7a4e6649 : 1; // 0x31(0x01)
	char pad_31_4 : 4; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	bool *baab8b38dd; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// Class Engine.*05b7ca78d0
// Size: 0x40 (Inherited: 0x38)
struct U*05b7ca78d0 : UParticleModule {
	char *b78790a03d : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleAcceleration
// Size: 0x98 (Inherited: 0x40)
struct UParticleModuleAcceleration : U*05b7ca78d0 {
	struct FRawDistributionVector Acceleration; // 0x40(0x50)
	char *def86deef9 : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class Engine.*35c8d9cae6
// Size: 0x50 (Inherited: 0x40)
struct U*35c8d9cae6 : U*05b7ca78d0 {
	struct FVector Acceleration; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.ParticleModuleAccelerationDrag
// Size: 0x80 (Inherited: 0x40)
struct UParticleModuleAccelerationDrag : U*05b7ca78d0 {
	struct U*f98789818a* DragCoefficient; // 0x40(0x08)
	struct F*5f29ae24ef *7de6cc443b; // 0x48(0x38)
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// Size: 0x80 (Inherited: 0x40)
struct UParticleModuleAccelerationDragScaleOverLife : U*05b7ca78d0 {
	struct U*f98789818a* DragScale; // 0x40(0x08)
	struct F*5f29ae24ef *d0cee14a1a; // 0x48(0x38)
};

// Class Engine.ParticleModuleAccelerationOverLifetime
// Size: 0x90 (Inherited: 0x40)
struct UParticleModuleAccelerationOverLifetime : U*05b7ca78d0 {
	struct FRawDistributionVector *030f410b45; // 0x40(0x50)
};

// Class Engine.*3879dd5f57
// Size: 0x38 (Inherited: 0x38)
struct U*3879dd5f57 : UParticleModule {
};

// Class Engine.ParticleModuleAttractorLine
// Size: 0xc0 (Inherited: 0x38)
struct UParticleModuleAttractorLine : U*3879dd5f57 {
	struct FVector *eb1e4e9c8d; // 0x38(0x0c)
	struct FVector *5e62501dc5; // 0x44(0x0c)
	struct F*5f29ae24ef Range; // 0x50(0x38)
	struct F*5f29ae24ef Strength; // 0x88(0x38)
};

// Class Engine.ParticleModuleAttractorParticle
// Size: 0xc8 (Inherited: 0x38)
struct UParticleModuleAttractorParticle : U*3879dd5f57 {
	struct FName *9eda9ea0a8; // 0x38(0x08)
	struct F*5f29ae24ef Range; // 0x40(0x38)
	char *39dcbfe227 : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct F*5f29ae24ef Strength; // 0x80(0x38)
	char *a192063138 : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	enum class *64d3a91a5a *b0f952b0a7; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	char *144463dce7 : 1; // 0xc0(0x01)
	char *42fc7de2b6 : 1; // 0xc0(0x01)
	char pad_C0_2 : 6; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32 *f62d3607df; // 0xc4(0x04)
};

// Class Engine.ParticleModuleAttractorPoint
// Size: 0x100 (Inherited: 0x38)
struct UParticleModuleAttractorPoint : U*3879dd5f57 {
	struct FRawDistributionVector Position; // 0x38(0x50)
	struct F*5f29ae24ef Range; // 0x88(0x38)
	struct F*5f29ae24ef Strength; // 0xc0(0x38)
	char *899b6040db : 1; // 0xf8(0x01)
	char *a192063138 : 1; // 0xf8(0x01)
	char *96d6082f3a : 1; // 0xf8(0x01)
	char *f7b25a8eb0 : 1; // 0xf8(0x01)
	char *239fc5c2b8 : 1; // 0xf8(0x01)
	char *8dad79e54d : 1; // 0xf8(0x01)
	char *a7ff015a48 : 1; // 0xf8(0x01)
	char *93eaa27f3d : 1; // 0xf8(0x01)
	char *4afab0655f : 1; // 0xf9(0x01)
	char *b73785500e : 1; // 0xf9(0x01)
	char pad_F9_2 : 6; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
};

// Class Engine.ParticleModuleAttractorPointGravity
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleAttractorPointGravity : U*3879dd5f57 {
	struct FVector Position; // 0x38(0x0c)
	float Radius; // 0x44(0x04)
	struct U*f98789818a* Strength; // 0x48(0x08)
	struct F*5f29ae24ef *34d0a00422; // 0x50(0x38)
};

// Class Engine.ParticleModuleBeamBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleBeamBase : UParticleModule {
};

// Class Engine.*de5e6645b4
// Size: 0x128 (Inherited: 0x38)
struct U*de5e6645b4 : UParticleModuleBeamBase {
	enum class *c7679867c8 *f07686acb1; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct F*b6803004e6 *0356e2eb7e; // 0x3c(0x04)
	struct FRawDistributionVector Position; // 0x40(0x50)
	struct F*b6803004e6 *7a8871c89a; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FRawDistributionVector Tangent; // 0x98(0x50)
	char *9ab9bfdfc4 : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct F*b6803004e6 *77816f5ef5; // 0xec(0x04)
	struct F*5f29ae24ef Strength; // 0xf0(0x38)
};

// Class Engine.*2b9bb828e3
// Size: 0x1c0 (Inherited: 0x38)
struct U*2b9bb828e3 : UParticleModuleBeamBase {
	char *c365cad1d3 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 Frequency; // 0x3c(0x04)
	int32 *a3f772d13d; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FRawDistributionVector *9c8ba75daa; // 0x48(0x50)
	struct F*5f29ae24ef *d4e8432801; // 0x98(0x38)
	char *8c151c383f : 1; // 0xd0(0x01)
	char pad_D0_1 : 7; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FRawDistributionVector *18b11ae40f; // 0xd8(0x50)
	char *17fee68300 : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float *d8d3586091; // 0x12c(0x04)
	char *ad24d5c12f : 1; // 0x130(0x01)
	char *76e7281caf : 1; // 0x130(0x01)
	char pad_130_2 : 6; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float *4f1d52afac; // 0x134(0x04)
	float *c17c77d8f2; // 0x138(0x04)
	char *f2898f2931 : 1; // 0x13c(0x01)
	char pad_13C_1 : 7; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	struct F*5f29ae24ef *53d0abbfc1; // 0x140(0x38)
	int32 NoiseTessellation; // 0x178(0x04)
	char *baaf7d0e70 : 1; // 0x17c(0x01)
	char pad_17C_1 : 7; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	float *0f35ccf565; // 0x180(0x04)
	char *c7dbd98d7c : 1; // 0x184(0x01)
	char pad_184_1 : 7; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct F*5f29ae24ef NoiseScale; // 0x188(0x38)
};

// Class Engine.*095b1ebec6
// Size: 0x140 (Inherited: 0x38)
struct U*095b1ebec6 : UParticleModuleBeamBase {
	enum class *22f73ca00e *21e845127b; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName SourceName; // 0x40(0x08)
	char *cf9da9945b : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FRawDistributionVector Source; // 0x50(0x50)
	char *4cf35db49c : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	enum class *946ba0509f *2b8cb9bed7; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct FRawDistributionVector *c4f9b4dfaa; // 0xa8(0x50)
	char *325138f707 : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct F*5f29ae24ef *8a00f63d46; // 0x100(0x38)
	char *8a0221dd16 : 1; // 0x138(0x01)
	char pad_138_1 : 7; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
};

// Class Engine.*45a8d25320
// Size: 0x140 (Inherited: 0x38)
struct U*45a8d25320 : UParticleModuleBeamBase {
	enum class *22f73ca00e *b428becaa7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName TargetName; // 0x40(0x08)
	struct FRawDistributionVector Target; // 0x48(0x50)
	char *d0256b28c0 : 1; // 0x98(0x01)
	char *75d93c2d92 : 1; // 0x98(0x01)
	char pad_98_2 : 6; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	enum class *946ba0509f *0abb488d71; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct FRawDistributionVector *c489b8997d; // 0xa0(0x50)
	char *d82373208e : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct F*5f29ae24ef *cb063447e0; // 0xf8(0x38)
	char *c80f058041 : 1; // 0x130(0x01)
	char pad_130_1 : 7; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	float *54dc96ddda; // 0x134(0x04)
	char pad_138[0x8]; // 0x138(0x08)
};

// Class Engine.ParticleModuleCameraBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleCameraBase : UParticleModule {
};

// Class Engine.*ad7b5e2035
// Size: 0x78 (Inherited: 0x38)
struct U*ad7b5e2035 : UParticleModuleCameraBase {
	struct F*5f29ae24ef *939e958190; // 0x38(0x38)
	char *fde17a2d11 : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	enum class *7524a7ddb9 *346d2a8738; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class Engine.*c1a79d0108
// Size: 0x38 (Inherited: 0x38)
struct U*c1a79d0108 : UParticleModule {
};

// Class Engine.ParticleModuleCollision
// Size: 0x1c0 (Inherited: 0x38)
struct UParticleModuleCollision : U*c1a79d0108 {
	struct FRawDistributionVector *12701e7d14; // 0x38(0x50)
	struct FRawDistributionVector *b838376b5e; // 0x88(0x50)
	struct F*5f29ae24ef *e1d1d6d2fe; // 0xd8(0x38)
	enum class *e61d6bcc13 *ace1ea5879; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct TArray<enum class EObjectTypeQuery> *2c54bd32fb; // 0x118(0x10)
	char pad_128[0x8]; // 0x128(0x08)
	char *fa0c73c530 : 1; // 0x130(0x01)
	char *8f51dabddb : 1; // 0x130(0x01)
	char pad_130_2 : 6; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct F*5f29ae24ef ParticleMass; // 0x138(0x38)
	float *ae7fd1f050; // 0x170(0x04)
	char *87d9b72c10 : 1; // 0x174(0x01)
	char *0e55ff2572 : 1; // 0x174(0x01)
	char pad_174_2 : 6; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	float *f635201fe2; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct F*5f29ae24ef *557275cf9b; // 0x180(0x38)
	char *89e401c634 : 1; // 0x1b8(0x01)
	char *900919b29d : 1; // 0x1b8(0x01)
	char *f817059044 : 1; // 0x1b8(0x01)
	char pad_1B8_3 : 5; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float *ffa626b849; // 0x1bc(0x04)
};

// Class Engine.ParticleModuleCollisionGPU
// Size: 0xc0 (Inherited: 0x38)
struct UParticleModuleCollisionGPU : U*c1a79d0108 {
	struct F*5f29ae24ef *43f7f5f660; // 0x38(0x38)
	struct F*5f29ae24ef ResilienceScaleOverLife; // 0x70(0x38)
	float Friction; // 0xa8(0x04)
	float *d34ceeaad7; // 0xac(0x04)
	float *3bfe580559; // 0xb0(0x04)
	float RadiusScale; // 0xb4(0x04)
	float *3440a2eba7; // 0xb8(0x04)
	enum class EParticleCollisionResponse Response; // 0xbc(0x01)
	enum class EParticleCollisionMode *bf4bee24b4; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
};

// Class Engine.*b6f6123135
// Size: 0x38 (Inherited: 0x38)
struct U*b6f6123135 : UParticleModule {
};

// Class Engine.*781996a0d5
// Size: 0xc8 (Inherited: 0x38)
struct U*781996a0d5 : U*b6f6123135 {
	struct FRawDistributionVector *658391accf; // 0x38(0x50)
	struct F*5f29ae24ef *ed0b23cb27; // 0x88(0x38)
	char bClampAlpha : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.*7534d09713
// Size: 0xe8 (Inherited: 0xc8)
struct U*7534d09713 : U*781996a0d5 {
	struct F*f6ca4296c5 *f76caec486; // 0xc8(0x20)
};

// Class Engine.*59850d5e9f
// Size: 0xc8 (Inherited: 0x38)
struct U*59850d5e9f : U*b6f6123135 {
	struct FRawDistributionVector *b509bc9012; // 0x38(0x50)
	struct F*5f29ae24ef *33307b46b5; // 0x88(0x38)
	char bClampAlpha : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.*34bfa3bd4e
// Size: 0xc8 (Inherited: 0x38)
struct U*34bfa3bd4e : U*b6f6123135 {
	struct FRawDistributionVector *5941081bb2; // 0x38(0x50)
	struct F*5f29ae24ef *5d5b07e12b; // 0x88(0x38)
	char *669068be24 : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Engine.*877022ee64
// Size: 0x38 (Inherited: 0x38)
struct U*877022ee64 : UParticleModule {
};

// Class Engine.ParticleModuleEventGenerator
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleEventGenerator : U*877022ee64 {
	struct TArray<struct F*71db7b9762> Events; // 0x38(0x10)
};

// Class Engine.ParticleModuleEventReceiverBase
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleEventReceiverBase : U*877022ee64 {
	enum class EParticleEventType *4df969adec; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName EventName; // 0x40(0x08)
};

// Class Engine.*28f062d1e3
// Size: 0x50 (Inherited: 0x48)
struct U*28f062d1e3 : UParticleModuleEventReceiverBase {
	char *7689c3da3a : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*41fd5e4921
// Size: 0xf0 (Inherited: 0x48)
struct U*41fd5e4921 : UParticleModuleEventReceiverBase {
	struct F*5f29ae24ef SpawnCount; // 0x48(0x38)
	char *a01b78533e : 1; // 0x80(0x01)
	char *0b14d534ce : 1; // 0x80(0x01)
	char *2ceb4e118b : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FRawDistributionVector *bd5fa832ea; // 0x88(0x50)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0xd8(0x10)
	char *873a2ded36 : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
};

// Class Engine.ParticleModuleKillBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleKillBase : UParticleModule {
};

// Class Engine.*344e5d1bc0
// Size: 0xe0 (Inherited: 0x38)
struct U*344e5d1bc0 : UParticleModuleKillBase {
	struct FRawDistributionVector *155005da49; // 0x38(0x50)
	struct FRawDistributionVector *72eea119f0; // 0x88(0x50)
	char *468068b0d5 : 1; // 0xd8(0x01)
	char *74161ace01 : 1; // 0xd8(0x01)
	char *d0da73df33 : 1; // 0xd8(0x01)
	char pad_D8_3 : 5; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class Engine.*7565c906ef
// Size: 0x78 (Inherited: 0x38)
struct U*7565c906ef : UParticleModuleKillBase {
	struct F*5f29ae24ef Height; // 0x38(0x38)
	char *468068b0d5 : 1; // 0x70(0x01)
	char *1ca7c88816 : 1; // 0x70(0x01)
	char *7a38333e02 : 1; // 0x70(0x01)
	char pad_70_3 : 5; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.*f8ddab4dda
// Size: 0x38 (Inherited: 0x38)
struct U*f8ddab4dda : UParticleModule {
};

// Class Engine.*a36528e409
// Size: 0x70 (Inherited: 0x38)
struct U*a36528e409 : U*f8ddab4dda {
	struct F*5f29ae24ef LifeTime; // 0x38(0x38)
};

// Class Engine.*aef4b3238a
// Size: 0x90 (Inherited: 0x70)
struct U*aef4b3238a : U*a36528e409 {
	struct F*f6ca4296c5 *f76caec486; // 0x70(0x20)
};

// Class Engine.ParticleModuleLightBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleLightBase : UParticleModule {
};

// Class Engine.*6a3de4a505
// Size: 0x150 (Inherited: 0x38)
struct U*6a3de4a505 : UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; // 0x38(0x01)
	bool *ce610e0f85; // 0x39(0x01)
	bool *e6da9af71f; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float *3268b06157; // 0x3c(0x04)
	struct FRawDistributionVector *5941081bb2; // 0x40(0x50)
	struct F*5f29ae24ef *c2497550e3; // 0x90(0x38)
	struct F*5f29ae24ef RadiusScale; // 0xc8(0x38)
	struct F*5f29ae24ef *d41b740866; // 0x100(0x38)
	struct FLightingChannels LightingChannels; // 0x138(0x03)
	char pad_13B[0x1]; // 0x13b(0x01)
	float VolumetricScatteringIntensity; // 0x13c(0x04)
	bool *cb5ede5bef; // 0x140(0x01)
	bool *76744b2abe; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
	struct U*cf31a3bb9b* IESTexture; // 0x148(0x08)
};

// Class Engine.*ddf79b13df
// Size: 0x170 (Inherited: 0x150)
struct U*ddf79b13df : U*6a3de4a505 {
	struct F*f6ca4296c5 *f76caec486; // 0x150(0x20)
};

// Class Engine.*809f1ca309
// Size: 0x38 (Inherited: 0x38)
struct U*809f1ca309 : UParticleModule {
};

// Class Engine.*a4f9eeb196
// Size: 0x90 (Inherited: 0x38)
struct U*a4f9eeb196 : U*809f1ca309 {
	struct FRawDistributionVector StartLocation; // 0x38(0x50)
	float *0611cfc1bf; // 0x88(0x04)
	float *31e8958519; // 0x8c(0x04)
};

// Class Engine.*e4cd9942f4
// Size: 0xb0 (Inherited: 0x90)
struct U*e4cd9942f4 : U*a4f9eeb196 {
	struct F*f6ca4296c5 *f76caec486; // 0x90(0x20)
};

// Class Engine.*1c605f4ba1
// Size: 0x90 (Inherited: 0x90)
struct U*1c605f4ba1 : U*a4f9eeb196 {
};

// Class Engine.*8e6275f4ef
// Size: 0xb0 (Inherited: 0x90)
struct U*8e6275f4ef : U*1c605f4ba1 {
	struct F*f6ca4296c5 *f76caec486; // 0x90(0x20)
};

// Class Engine.*9c8e6e32eb
// Size: 0x78 (Inherited: 0x38)
struct U*9c8e6e32eb : U*809f1ca309 {
	enum class *c311fc8e98 SourceType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector *867353b5a9; // 0x3c(0x0c)
	struct TArray<struct F*df5442dd8f> *be428da57a; // 0x48(0x10)
	enum class *cc89c0214f *b0f952b0a7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	char *49da8cb313 : 1; // 0x5c(0x01)
	char *a04500721c : 1; // 0x5c(0x01)
	char *6e96a230a4 : 1; // 0x5c(0x01)
	char pad_5C_3 : 5; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float *bd5fa832ea; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FName *0291066032; // 0x68(0x08)
	int32 *7944796d91; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Engine.ParticleModuleLocationDirect
// Size: 0x178 (Inherited: 0x38)
struct UParticleModuleLocationDirect : U*809f1ca309 {
	struct FRawDistributionVector Location; // 0x38(0x50)
	struct FRawDistributionVector *5d15b09bdc; // 0x88(0x50)
	struct FRawDistributionVector ScaleFactor; // 0xd8(0x50)
	struct FRawDistributionVector Direction; // 0x128(0x50)
};

// Class Engine.*f715ae4013
// Size: 0x58 (Inherited: 0x38)
struct U*f715ae4013 : U*809f1ca309 {
	struct FName *9eda9ea0a8; // 0x38(0x08)
	enum class *a69951d2aa *b0f952b0a7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char *f708f9e0c3 : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *fb3c6c1b98; // 0x48(0x04)
	char *fb9fceb7a4 : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float *12896f4a82; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.ParticleModuleLocationEmitterDirect
// Size: 0x40 (Inherited: 0x38)
struct UParticleModuleLocationEmitterDirect : U*809f1ca309 {
	struct FName *9eda9ea0a8; // 0x38(0x08)
};

// Class Engine.ParticleModuleLocationPrimitiveBase
// Size: 0xc8 (Inherited: 0x38)
struct UParticleModuleLocationPrimitiveBase : U*809f1ca309 {
	char *239fc5c2b8 : 1; // 0x38(0x01)
	char *8dad79e54d : 1; // 0x38(0x01)
	char *a7ff015a48 : 1; // 0x38(0x01)
	char *93eaa27f3d : 1; // 0x38(0x01)
	char *4afab0655f : 1; // 0x38(0x01)
	char *b73785500e : 1; // 0x38(0x01)
	char *0232d1b0bf : 1; // 0x38(0x01)
	char Velocity : 1; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct F*5f29ae24ef *bd88d78d74; // 0x40(0x38)
	struct FRawDistributionVector StartLocation; // 0x78(0x50)
};

// Class Engine.*bb67ac2f47
// Size: 0x148 (Inherited: 0xc8)
struct U*bb67ac2f47 : UParticleModuleLocationPrimitiveBase {
	char *48dc8007f7 : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct F*5f29ae24ef *7bab05ae72; // 0xd0(0x38)
	struct F*5f29ae24ef *4f423b08be; // 0x108(0x38)
	enum class *50be57f232 *e1ad842b35; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// Class Engine.*4fa0956756
// Size: 0x168 (Inherited: 0x148)
struct U*4fa0956756 : U*bb67ac2f47 {
	struct F*f6ca4296c5 *f76caec486; // 0x148(0x20)
};

// Class Engine.*6bd6146826
// Size: 0x100 (Inherited: 0xc8)
struct U*6bd6146826 : UParticleModuleLocationPrimitiveBase {
	struct F*5f29ae24ef *7bab05ae72; // 0xc8(0x38)
};

// Class Engine.*09183cc356
// Size: 0x120 (Inherited: 0x100)
struct U*09183cc356 : U*6bd6146826 {
	struct F*f6ca4296c5 *f76caec486; // 0x100(0x20)
};

// Class Engine.*c468bbe0c6
// Size: 0x130 (Inherited: 0x38)
struct U*c468bbe0c6 : U*809f1ca309 {
	struct FRawDistributionVector StartOffset; // 0x38(0x50)
	struct F*5f29ae24ef Height; // 0x88(0x38)
	struct F*5f29ae24ef Angle; // 0xc0(0x38)
	struct F*5f29ae24ef Thickness; // 0xf8(0x38)
};

// Class Engine.*4499b24acc
// Size: 0x98 (Inherited: 0x38)
struct U*4499b24acc : U*809f1ca309 {
	enum class *dded1e51ff SourceType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector *867353b5a9; // 0x3c(0x0c)
	char *49da8cb313 : 1; // 0x48(0x01)
	char *a04500721c : 1; // 0x48(0x01)
	char *6e96a230a4 : 1; // 0x48(0x01)
	char pad_48_3 : 5; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float *bd5fa832ea; // 0x4c(0x04)
	struct FName *0291066032; // 0x50(0x08)
	struct TArray<struct FName> *e2ae91950e; // 0x58(0x10)
	char *805800e425 : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FVector *c2eaa02b38; // 0x6c(0x0c)
	float NormalCheckToleranceDegrees; // 0x78(0x04)
	float *d3d056be43; // 0x7c(0x04)
	struct TArray<int32> *14abe65e9e; // 0x80(0x10)
	char *15eca9962c : 1; // 0x90(0x01)
	char *b15b4cb32c : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	uint32 *f71034ba1a; // 0x94(0x04)
};

// Class Engine.*0f9ca7765a
// Size: 0x40 (Inherited: 0x38)
struct U*0f9ca7765a : U*809f1ca309 {
	struct FVector2D *5d8cd53ff2; // 0x38(0x08)
};

// Class Engine.ParticleModuleSourceMovement
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleSourceMovement : U*809f1ca309 {
	struct FRawDistributionVector *3ffc99d168; // 0x38(0x50)
};

// Class Engine.*fa7f231d02
// Size: 0x38 (Inherited: 0x38)
struct U*fa7f231d02 : UParticleModule {
};

// Class Engine.ParticleModuleMeshMaterial
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleMeshMaterial : U*fa7f231d02 {
	struct TArray<struct UMaterialInterface*> *d5626ca77c; // 0x38(0x10)
};

// Class Engine.*a662468e51
// Size: 0x40 (Inherited: 0x38)
struct U*a662468e51 : UParticleModule {
	char *b22b1b9957 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleOrbit
// Size: 0x150 (Inherited: 0x40)
struct UParticleModuleOrbit : U*a662468e51 {
	enum class *33101a9594 *f3686c0994; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FRawDistributionVector OffsetAmount; // 0x48(0x50)
	struct F*318eb68704 *7fa56ac18b; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FRawDistributionVector RotationAmount; // 0xa0(0x50)
	struct F*318eb68704 *9df23ac6ab; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FRawDistributionVector RotationRateAmount; // 0xf8(0x50)
	struct F*318eb68704 *8eaec4f75c; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class Engine.*9457789a65
// Size: 0x38 (Inherited: 0x38)
struct U*9457789a65 : UParticleModule {
};

// Class Engine.*fdfed0527d
// Size: 0x40 (Inherited: 0x38)
struct U*fdfed0527d : U*9457789a65 {
	enum class *638bc4a2a0 LockAxisFlags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleParameterBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleParameterBase : UParticleModule {
};

// Class Engine.*1181a4075e
// Size: 0x50 (Inherited: 0x38)
struct U*1181a4075e : UParticleModuleParameterBase {
	struct TArray<struct F*21589f2100> *26708fa0c3; // 0x38(0x10)
	int32 *4fe8ee6608; // 0x48(0x04)
	char *3ffd45fdd6 : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.*847913a503
// Size: 0x70 (Inherited: 0x50)
struct U*847913a503 : U*1181a4075e {
	struct F*f6ca4296c5 *f76caec486; // 0x50(0x20)
};

// Class Engine.SubUVAnimation
// Size: 0x68 (Inherited: 0x30)
struct USubUVAnimation : UObject {
	struct UTexture2D* *c4f2b7968d; // 0x30(0x08)
	int32 *50a8e1a9c0; // 0x38(0x04)
	int32 *89e27c9bac; // 0x3c(0x04)
	enum class *10d2470a2e *b1fde28558; // 0x40(0x01)
	enum class *ca7d4a8963 *d947c5da81; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float *1cfd51e1ae; // 0x44(0x04)
	char pad_48[0x20]; // 0x48(0x20)
};

// Class Engine.ParticleModuleRequired
// Size: 0x190 (Inherited: 0x38)
struct UParticleModuleRequired : UParticleModule {
	struct UMaterialInterface* Material; // 0x38(0x08)
	struct UMaterialInterface* *158ad43b5d; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
	struct FVector4 *33e6893707; // 0x50(0x10)
	struct FVector *805625cd38; // 0x60(0x0c)
	struct FRotator *123603c60a; // 0x6c(0x0c)
	enum class *a53eea5d4f *b08b1f1579; // 0x78(0x01)
	enum class *aa36bf9756 SortMode; // 0x79(0x01)
	enum class *4e04d46b0d *a8d101abfd; // 0x7a(0x01)
	char pad_7B[0x1]; // 0x7b(0x01)
	float *b5b9f5151e; // 0x7c(0x04)
	float *42d4fa0ad4; // 0x80(0x04)
	float *e79d42a31e; // 0x84(0x04)
	char *947b6330f6 : 1; // 0x88(0x01)
	char *eb139e4400 : 1; // 0x88(0x01)
	char *8ce994b839 : 1; // 0x88(0x01)
	char *0e448f1327 : 1; // 0x88(0x01)
	char *bc01a0f1df : 1; // 0x88(0x01)
	char *431bf5ab5b : 1; // 0x88(0x01)
	char *4cb4a11864 : 1; // 0x88(0x01)
	char *97522188e3 : 1; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float *694f698aa4; // 0x8c(0x04)
	float *8452e41029; // 0x90(0x04)
	int32 *b21c8261dd; // 0x94(0x04)
	struct F*5f29ae24ef SpawnRate; // 0x98(0x38)
	struct TArray<struct F*3d359c43af> *50db53965e; // 0xd0(0x10)
	float *884d8becbe; // 0xe0(0x04)
	float *7b2078163e; // 0xe4(0x04)
	char *33bd4aaaf1 : 1; // 0xe8(0x01)
	char *6c572a02be : 1; // 0xe8(0x01)
	char pad_E8_2 : 6; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	enum class EParticleSubUVInterpMethod InterpolationMethod; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	int32 *50a8e1a9c0; // 0xf0(0x04)
	int32 *89e27c9bac; // 0xf4(0x04)
	char *764c1fee2f : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	float *d62c94a8d2; // 0xfc(0x04)
	int32 *75011e550a; // 0x100(0x04)
	char *acb2b194cb : 1; // 0x104(0x01)
	char pad_104_1 : 7; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FVector MacroUVPosition; // 0x108(0x0c)
	float MacroUVRadius; // 0x114(0x04)
	char *6d28276af7 : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	int32 MaxDrawCount; // 0x11c(0x04)
	enum class EParticleUVFlipMode *d375d66a69; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UTexture2D* *3966cc64b4; // 0x128(0x08)
	enum class *10d2470a2e *b1fde28558; // 0x130(0x01)
	enum class *ca7d4a8963 *d947c5da81; // 0x131(0x01)
	char pad_132[0x2]; // 0x132(0x02)
	float *1cfd51e1ae; // 0x134(0x04)
	enum class *eb81cc9fe3 *466bd62083; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	struct FVector *becb0a1675; // 0x13c(0x0c)
	struct FVector *b7f5c6087e; // 0x148(0x0c)
	char *17fdb461b9 : 1; // 0x154(0x01)
	char pad_154_1 : 7; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	struct TArray<struct FName> *9ef9c7c46a; // 0x158(0x10)
	char pad_168[0x28]; // 0x168(0x28)
};

// Class Engine.*ca892d98e0
// Size: 0x38 (Inherited: 0x38)
struct U*ca892d98e0 : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotation
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleMeshRotation : U*ca892d98e0 {
	struct FRawDistributionVector *2a7b0737ae; // 0x38(0x50)
	char *089c4fe5a1 : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleMeshRotation_Seeded
// Size: 0xb0 (Inherited: 0x90)
struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	struct F*f6ca4296c5 *f76caec486; // 0x90(0x20)
};

// Class Engine.*a436b4c710
// Size: 0x70 (Inherited: 0x38)
struct U*a436b4c710 : U*ca892d98e0 {
	struct F*5f29ae24ef *2a7b0737ae; // 0x38(0x38)
};

// Class Engine.*7a67410f46
// Size: 0x90 (Inherited: 0x70)
struct U*7a67410f46 : U*a436b4c710 {
	struct F*f6ca4296c5 *f76caec486; // 0x70(0x20)
};

// Class Engine.ParticleModuleRotationOverLifetime
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleRotationOverLifetime : U*ca892d98e0 {
	struct F*5f29ae24ef *8c44c62b43; // 0x38(0x38)
	char Scale : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.*e4fb09a193
// Size: 0x38 (Inherited: 0x38)
struct U*e4fb09a193 : UParticleModule {
};

// Class Engine.ParticleModuleMeshRotationRate
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleMeshRotationRate : U*e4fb09a193 {
	struct FRawDistributionVector *dfba6fd07f; // 0x38(0x50)
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
// Size: 0xa8 (Inherited: 0x88)
struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	struct F*f6ca4296c5 *f76caec486; // 0x88(0x20)
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleMeshRotationRateMultiplyLife : U*e4fb09a193 {
	struct FRawDistributionVector LifeMultiplier; // 0x38(0x50)
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleMeshRotationRateOverLife : U*e4fb09a193 {
	struct FRawDistributionVector *31c6b73e5c; // 0x38(0x50)
	char *a15561a1d8 : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*31580cacb2
// Size: 0x70 (Inherited: 0x38)
struct U*31580cacb2 : U*e4fb09a193 {
	struct F*5f29ae24ef *dfba6fd07f; // 0x38(0x38)
};

// Class Engine.*fb1b77444b
// Size: 0x90 (Inherited: 0x70)
struct U*fb1b77444b : U*31580cacb2 {
	struct F*f6ca4296c5 *f76caec486; // 0x70(0x20)
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
// Size: 0x70 (Inherited: 0x38)
struct UParticleModuleRotationRateMultiplyLife : U*e4fb09a193 {
	struct F*5f29ae24ef LifeMultiplier; // 0x38(0x38)
};

// Class Engine.*2624069baa
// Size: 0x38 (Inherited: 0x38)
struct U*2624069baa : UParticleModule {
};

// Class Engine.*b90e52e76e
// Size: 0x88 (Inherited: 0x38)
struct U*b90e52e76e : U*2624069baa {
	struct FRawDistributionVector *4b75d25f2f; // 0x38(0x50)
};

// Class Engine.*b997bc3645
// Size: 0xa8 (Inherited: 0x88)
struct U*b997bc3645 : U*b90e52e76e {
	struct F*f6ca4296c5 *f76caec486; // 0x88(0x20)
};

// Class Engine.ParticleModuleSizeMultiplyLife
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleSizeMultiplyLife : U*2624069baa {
	struct FRawDistributionVector LifeMultiplier; // 0x38(0x50)
	char *ba88fa23d4 : 1; // 0x88(0x01)
	char *160681f1c1 : 1; // 0x88(0x01)
	char *45c1d9844f : 1; // 0x88(0x01)
	char pad_88_3 : 5; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleSizeScale
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleSizeScale : U*2624069baa {
	struct FRawDistributionVector SizeScale; // 0x38(0x50)
	char *c4b997dbaa : 1; // 0x88(0x01)
	char *b928ae5155 : 1; // 0x88(0x01)
	char *b45c20b8ac : 1; // 0x88(0x01)
	char pad_88_3 : 5; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.ParticleModuleSizeScaleBySpeed
// Size: 0x48 (Inherited: 0x38)
struct UParticleModuleSizeScaleBySpeed : U*2624069baa {
	struct FVector2D *f538f8f94c; // 0x38(0x08)
	struct FVector2D *903c06f269; // 0x40(0x08)
};

// Class Engine.*1d88593bf9
// Size: 0x40 (Inherited: 0x38)
struct U*1d88593bf9 : UParticleModule {
	char *9b9823ddfa : 1; // 0x38(0x01)
	char *82ce8919f9 : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.ParticleModuleSpawn
// Size: 0x108 (Inherited: 0x40)
struct UParticleModuleSpawn : U*1d88593bf9 {
	struct F*5f29ae24ef Rate; // 0x40(0x38)
	struct F*5f29ae24ef *c6e0e7064b; // 0x78(0x38)
	enum class *4e04d46b0d *a8d101abfd; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct F*3d359c43af> *50db53965e; // 0xb8(0x10)
	struct F*5f29ae24ef *fbe01905b3; // 0xc8(0x38)
	char *68875d8bd5 : 1; // 0x100(0x01)
	char pad_100_1 : 7; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class Engine.*bee627aadd
// Size: 0x90 (Inherited: 0x40)
struct U*bee627aadd : U*1d88593bf9 {
	float *ab4c61f21d; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct F*5f29ae24ef SpawnPerUnit; // 0x48(0x38)
	char *a86c0de544 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float *d2e0d364ca; // 0x84(0x04)
	float *cdbb0342fb; // 0x88(0x04)
	char *71b01a270c : 1; // 0x8c(0x01)
	char *e82eee5134 : 1; // 0x8c(0x01)
	char *a2a3f9580d : 1; // 0x8c(0x01)
	char pad_8C_3 : 5; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// Class Engine.*3f774ceb6b
// Size: 0x38 (Inherited: 0x38)
struct U*3f774ceb6b : UParticleModule {
};

// Class Engine.ParticleModuleSubUV
// Size: 0x80 (Inherited: 0x38)
struct UParticleModuleSubUV : U*3f774ceb6b {
	struct USubUVAnimation* Animation; // 0x38(0x08)
	struct F*5f29ae24ef SubImageIndex; // 0x40(0x38)
	char *55ac662fdc : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class Engine.ParticleModuleSubUVMovie
// Size: 0xc8 (Inherited: 0x80)
struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char *b22b1b9957 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct F*5f29ae24ef FrameRate; // 0x88(0x38)
	int32 *3e528deb3c; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class Engine.ParticleModuleTrailBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleTrailBase : UParticleModule {
};

// Class Engine.*00a11d1a4f
// Size: 0xa0 (Inherited: 0x38)
struct U*00a11d1a4f : UParticleModuleTrailBase {
	enum class *7c31e01eae *21e845127b; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FName SourceName; // 0x40(0x08)
	struct F*5f29ae24ef *8a00f63d46; // 0x48(0x38)
	char *8a0221dd16 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32 SourceOffsetCount; // 0x84(0x04)
	struct TArray<struct FVector> *c3cfcb8618; // 0x88(0x10)
	enum class *154d6c3a55 *b0f952b0a7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	char *c2fbc1d719 : 1; // 0x9c(0x01)
	char pad_9C_1 : 7; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
};

// Class Engine.ParticleModuleTypeDataBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleTypeDataBase : UParticleModule {
};

// Class Engine.*b304680051
// Size: 0x50 (Inherited: 0x38)
struct U*b304680051 : UParticleModuleTypeDataBase {
	char *36b7a229e3 : 1; // 0x38(0x01)
	char *ba60b33963 : 1; // 0x38(0x01)
	char *3a959c9d26 : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *435b583d43; // 0x3c(0x04)
	float *86653012c6; // 0x40(0x04)
	float *9a09085e46; // 0x44(0x04)
	float *d02c402a3a; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.ParticleModuleTypeDataBeam2
// Size: 0x170 (Inherited: 0x38)
struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	enum class *9ef84ad3a9 *d48cd9716d; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 *39d2da1353; // 0x3c(0x04)
	float *92663fc043; // 0x40(0x04)
	int32 Sheets; // 0x44(0x04)
	int32 MaxBeamCount; // 0x48(0x04)
	float Speed; // 0x4c(0x04)
	int32 InterpolationPoints; // 0x50(0x04)
	char *9ed31a7548 : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 *6bfc78f11b; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FName *ab5a9e6dec; // 0x60(0x08)
	struct F*5f29ae24ef Distance; // 0x68(0x38)
	enum class *f2f176f81a *afbb9076e2; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct F*5f29ae24ef TaperFactor; // 0xa8(0x38)
	struct F*5f29ae24ef *9bcde353f0; // 0xe0(0x38)
	char RenderGeometry : 1; // 0x118(0x01)
	char *fbaaabd11d : 1; // 0x118(0x01)
	char *6700a001e8 : 1; // 0x118(0x01)
	char *de5c6e9971 : 1; // 0x118(0x01)
	char pad_118_4 : 4; // 0x118(0x01)
	char pad_119[0x57]; // 0x119(0x57)
};

// Class Engine.ParticleModuleTypeDataGpu
// Size: 0x470 (Inherited: 0x38)
struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct F*db2ffe2210 *afcc9f247c; // 0x40(0x2c0)
	struct F*cb041a1069 *1865c83ff0; // 0x300(0x160)
	float *27cdd1453c; // 0x460(0x04)
	char *27d5ffdcfc : 1; // 0x464(0x01)
	char pad_464_1 : 7; // 0x464(0x01)
	char pad_465[0xb]; // 0x465(0x0b)
};

// Class Engine.ParticleModuleTypeDataMesh
// Size: 0xc0 (Inherited: 0x38)
struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	struct UStaticMesh* Mesh; // 0x38(0x08)
	char *900431cfe5 : 1; // 0x40(0x01)
	char *3f0e978196 : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class *2e18f82e38 *73ee345f81; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	char *dc29a397cd : 1; // 0x48(0x01)
	char bOverrideDefaultMotionBlurSettings : 1; // 0x48(0x01)
	char *04ec0e0918 : 1; // 0x48(0x01)
	char pad_48_3 : 5; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float Pitch; // 0x4c(0x04)
	float Roll; // 0x50(0x04)
	float Yaw; // 0x54(0x04)
	struct FRawDistributionVector *88a8bb3a75; // 0x58(0x50)
	char pad_A8[0x8]; // 0xa8(0x08)
	enum class *638bc4a2a0 *c758a49257; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	char *fc48bf0e7a : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	enum class *4e2379919f CameraFacingUpAxisOption; // 0xb8(0x01)
	enum class *6253d48522 *fa452723b1; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	char *835d781326 : 1; // 0xbc(0x01)
	char *20f4a75a1e : 1; // 0xbc(0x01)
	char *d233bfa385 : 1; // 0xbc(0x01)
	char pad_BC_3 : 5; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
};

// Class Engine.ParticleModuleTypeDataRibbon
// Size: 0x68 (Inherited: 0x38)
struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32 MaxTessellationBetweenParticles; // 0x38(0x04)
	int32 SheetsPerTrail; // 0x3c(0x04)
	int32 MaxTrailCount; // 0x40(0x04)
	int32 MaxParticleInTrailCount; // 0x44(0x04)
	char *36b7a229e3 : 1; // 0x48(0x01)
	char *7509ca6157 : 1; // 0x48(0x01)
	char *f331d08d4d : 1; // 0x48(0x01)
	char *ba60b33963 : 1; // 0x48(0x01)
	char *3a959c9d26 : 1; // 0x48(0x01)
	char *f2c4796869 : 1; // 0x48(0x01)
	char pad_48_6 : 2; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	enum class *72859ab004 *98e8f3f088; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float *74e0b2f230; // 0x50(0x04)
	char *2377ce2165 : 1; // 0x54(0x01)
	char *3be9881f2b : 1; // 0x54(0x01)
	char *f9e3bf51b6 : 1; // 0x54(0x01)
	char *43bc4c69db : 1; // 0x54(0x01)
	char pad_54_4 : 4; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float *435b583d43; // 0x58(0x04)
	float *86653012c6; // 0x5c(0x04)
	char *d06d68b924 : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float *0fd8621312; // 0x64(0x04)
};

// Class Engine.ParticleModuleVectorFieldBase
// Size: 0x38 (Inherited: 0x38)
struct UParticleModuleVectorFieldBase : UParticleModule {
};

// Class Engine.*c7bad31550
// Size: 0x48 (Inherited: 0x38)
struct U*c7bad31550 : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *9911eff9ec; // 0x3c(0x04)
	float *2727da8cfb; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*55bcb7c45b
// Size: 0x70 (Inherited: 0x38)
struct U*55bcb7c45b : UParticleModuleVectorFieldBase {
	struct UVectorField* VectorField; // 0x38(0x08)
	struct FVector RelativeTranslation; // 0x40(0x0c)
	struct FRotator RelativeRotation; // 0x4c(0x0c)
	struct FVector RelativeScale3D; // 0x58(0x0c)
	float Intensity; // 0x64(0x04)
	float *b612f22153; // 0x68(0x04)
	char *f904b8a741 : 1; // 0x6c(0x01)
	char *a50af67b15 : 1; // 0x6c(0x01)
	char *ebb9cd5ae4 : 1; // 0x6c(0x01)
	char *820f376e24 : 1; // 0x6c(0x01)
	char *fea1b04260 : 1; // 0x6c(0x01)
	char pad_6C_5 : 3; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.*b03d14eb58
// Size: 0x50 (Inherited: 0x38)
struct U*b03d14eb58 : UParticleModuleVectorFieldBase {
	struct FVector *12c5f85582; // 0x38(0x0c)
	struct FVector *c2e81398b5; // 0x44(0x0c)
};

// Class Engine.*a16968dbcd
// Size: 0x48 (Inherited: 0x38)
struct U*a16968dbcd : UParticleModuleVectorFieldBase {
	struct FVector RotationRate; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleVectorFieldScale
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	struct U*f98789818a* VectorFieldScale; // 0x38(0x08)
	struct F*5f29ae24ef *3c178a5a1f; // 0x40(0x38)
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	struct U*f98789818a* VectorFieldScaleOverLife; // 0x38(0x08)
	struct F*5f29ae24ef *2e7bdb0457; // 0x40(0x38)
};

// Class Engine.*755a6d585b
// Size: 0x40 (Inherited: 0x38)
struct U*755a6d585b : UParticleModule {
	char *288e9027b9 : 1; // 0x38(0x01)
	char *def86deef9 : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.*52e3268194
// Size: 0xc8 (Inherited: 0x40)
struct U*52e3268194 : U*755a6d585b {
	struct FRawDistributionVector *4789baf564; // 0x40(0x50)
	struct F*5f29ae24ef *77cb10109b; // 0x90(0x38)
};

// Class Engine.*fe5e65de92
// Size: 0xe8 (Inherited: 0xc8)
struct U*fe5e65de92 : U*52e3268194 {
	struct F*f6ca4296c5 *f76caec486; // 0xc8(0x20)
};

// Class Engine.*531f41beb8
// Size: 0xc0 (Inherited: 0x40)
struct U*531f41beb8 : U*755a6d585b {
	struct F*5f29ae24ef Angle; // 0x40(0x38)
	struct F*5f29ae24ef Velocity; // 0x78(0x38)
	struct FVector Direction; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Engine.*7e54b3dace
// Size: 0x90 (Inherited: 0x40)
struct U*7e54b3dace : U*755a6d585b {
	struct FRawDistributionVector Scale; // 0x40(0x50)
};

// Class Engine.ParticleModuleVelocityOverLifetime
// Size: 0x98 (Inherited: 0x40)
struct UParticleModuleVelocityOverLifetime : U*755a6d585b {
	struct FRawDistributionVector *3796d35743; // 0x40(0x50)
	char Absolute : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class Engine.*9051dbf3fc
// Size: 0x48 (Inherited: 0x30)
struct U*9051dbf3fc : UObject {
	int32 *f5885d1d83; // 0x30(0x04)
	char pad_34[0x14]; // 0x34(0x14)
};

// Class Engine.*86bee74f98
// Size: 0xd0 (Inherited: 0xd0)
struct U*86bee74f98 : U*3189c6f422 {
};

// Class Engine.PhysicalMaterial
// Size: 0x88 (Inherited: 0x30)
struct UPhysicalMaterial : UObject {
	float Friction; // 0x30(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x34(0x01)
	bool bOverrideFrictionCombineMode; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float Restitution; // 0x38(0x04)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x3c(0x01)
	bool bOverrideRestitutionCombineMode; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	float Density; // 0x40(0x04)
	float RaiseMassToPower; // 0x44(0x04)
	float DestructibleDamageThresholdScale; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UPhysicalMaterialPropertyBase* *3c3412898e; // 0x50(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float *cc64db6a23; // 0x5c(0x04)
	struct TArray<struct F*527b8ab3b4> *9f45a71333; // 0x60(0x10)
	char pad_70[0x18]; // 0x70(0x18)
};

// Class Engine.PhysicalMaterialPropertyBase
// Size: 0x30 (Inherited: 0x30)
struct UPhysicalMaterialPropertyBase : UObject {
};

// Class Engine.PhysicsCollisionHandler
// Size: 0x48 (Inherited: 0x30)
struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x30(0x04)
	float ImpactReFireDelay; // 0x34(0x04)
	struct USoundBase* DefaultImpactSound; // 0x38(0x08)
	float *bd5e4841a1; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.PhysicsConstraintTemplate
// Size: 0x340 (Inherited: 0x30)
struct UPhysicsConstraintTemplate : UObject {
	struct FConstraintInstance DefaultInstance; // 0x30(0x1f0)
	struct TArray<struct F*a71074c103> *35fcae7bd3; // 0x220(0x10)
	struct F*45e8912236 DefaultProfile; // 0x230(0x104)
	char pad_334[0xc]; // 0x334(0x0c)
};

// Class Engine.PhysicsSerializer
// Size: 0xd8 (Inherited: 0x30)
struct UPhysicsSerializer : UObject {
	char pad_30[0xa8]; // 0x30(0xa8)
};

// Class Engine.*63bd2191c5
// Size: 0x40 (Inherited: 0x30)
struct U*63bd2191c5 : UObject {
	struct TArray<struct F*30600c4384> *ef8a4921bd; // 0x30(0x10)
};

// Class Engine.*d3c51829bb
// Size: 0x58 (Inherited: 0x40)
struct U*d3c51829bb : U*63bd2191c5 {
	struct TArray<struct FString> *65df3e18b3; // 0x40(0x10)
	char *3344e53cd1 : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class Engine.*d13bdf61f6
// Size: 0x68 (Inherited: 0x40)
struct U*d13bdf61f6 : U*63bd2191c5 {
	char *109c3d2686 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<DelegateProperty> *4c90181a84; // 0x48(0x10)
	struct TArray<DelegateProperty> *90afbd44ff; // 0x58(0x10)
};

// Class Engine.*9b0c0e585e
// Size: 0x70 (Inherited: 0x40)
struct U*9b0c0e585e : U*63bd2191c5 {
	struct TArray<struct F*e8f9f12a7a> *6b8414d56a; // 0x40(0x10)
	struct FString LastError; // 0x50(0x10)
	struct FString *d9cca980eb; // 0x60(0x10)
};

// Class Engine.*3aad4a676a
// Size: 0x40 (Inherited: 0x40)
struct U*3aad4a676a : U*63bd2191c5 {

	int32 *9cbfe5114a(); // Function Engine.*3aad4a676a.*9cbfe5114a // Native|Public // @ game+0x675a3a0
	void Init(); // Function Engine.*3aad4a676a.Init // Native|Public // @ game+0x846ee4
	bool *a18c533897(); // Function Engine.*3aad4a676a.*a18c533897 // Native|Public // @ game+0x6754538
	bool *3b4b51e68b(); // Function Engine.*3aad4a676a.*3b4b51e68b // Native|Public // @ game+0x676350c
	bool *cadb422c02(); // Function Engine.*3aad4a676a.*cadb422c02 // Native|Public // @ game+0x67522b8
	bool *43b685b36d(); // Function Engine.*3aad4a676a.*43b685b36d // Native|Public|HasOutParms // @ game+0x6765364
	struct FString *50c948c14d(); // Function Engine.*3aad4a676a.*50c948c14d // Native|Public // @ game+0x6758e84
};

// Class Engine.*81cd072163
// Size: 0xb8 (Inherited: 0x30)
struct U*81cd072163 : UObject {
	struct FString *4820a00119; // 0x30(0x10)
	int32 ResponseCode; // 0x40(0x04)
	int32 Tag; // 0x44(0x04)
	struct FString *ffebbdd361; // 0x48(0x10)
	struct TArray<bool> *b5d7f1f8ec; // 0x58(0x10)
	char pad_68[0x50]; // 0x68(0x50)

	struct FString *fe26dc57f5(); // Function Engine.*81cd072163.*fe26dc57f5 // Native|Public // @ game+0x6759ce8
	int32 *a7eaf42208(); // Function Engine.*81cd072163.*a7eaf42208 // Native|Public // @ game+0x675a3c8
	struct FString GetHeader(); // Function Engine.*81cd072163.GetHeader // Native|Public|HasOutParms // @ game+0x6759b40
};

// Class Engine.ChildConnection
// Size: 0x65858 (Inherited: 0x65850)
struct UChildConnection : UNetConnection {
	struct UNetConnection* Parent; // 0x65850(0x08)
};

// Class Engine.Polys
// Size: 0x40 (Inherited: 0x30)
struct UPolys : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.*08a4c46a4b
// Size: 0x38 (Inherited: 0x30)
struct U*08a4c46a4b : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class Engine.*66966b0634
// Size: 0xb0 (Inherited: 0x38)
struct U*66966b0634 : U*08a4c46a4b {
	char pad_38[0x78]; // 0x38(0x78)
};

// Class Engine.ReverbEffect
// Size: 0x60 (Inherited: 0x30)
struct UReverbEffect : UObject {
	float Density; // 0x30(0x04)
	float Diffusion; // 0x34(0x04)
	float Gain; // 0x38(0x04)
	float GainHF; // 0x3c(0x04)
	float DecayTime; // 0x40(0x04)
	float DecayHFRatio; // 0x44(0x04)
	float ReflectionsGain; // 0x48(0x04)
	float ReflectionsDelay; // 0x4c(0x04)
	float LateGain; // 0x50(0x04)
	float LateDelay; // 0x54(0x04)
	float AirAbsorptionGainHF; // 0x58(0x04)
	float RoomRolloffFactor; // 0x5c(0x04)
};

// Class Engine.Rig
// Size: 0x50 (Inherited: 0x30)
struct URig : UObject {
	struct TArray<struct F*57c2900482> TransformBases; // 0x30(0x10)
	struct TArray<struct FNode> Nodes; // 0x40(0x10)
};

// Class Engine.SimpleConstructionScript
// Size: 0xc0 (Inherited: 0x30)
struct USimpleConstructionScript : UObject {
	struct TArray<struct USCS_Node*> *ec6ebaea6e; // 0x30(0x10)
	struct TArray<struct USCS_Node*> *d1d74b90fe; // 0x40(0x10)
	struct USCS_Node* *2142b6ce55; // 0x50(0x08)
	struct USCS_Node* RootNode; // 0x58(0x08)
	struct TArray<struct USCS_Node*> ActorComponentNodes; // 0x60(0x10)
	char pad_70[0x50]; // 0x70(0x50)
};

// Class Engine.SCS_Node
// Size: 0x150 (Inherited: 0x30)
struct USCS_Node : UObject {
	struct UClass* ComponentClass; // 0x30(0x08)
	struct UActorComponent* *97911ad1aa; // 0x38(0x08)
	struct F*f497c92dc8 *cc5b27c031; // 0x40(0x50)
	struct FName VariableName; // 0x90(0x08)
	struct FName *4a2d8ab40a; // 0x98(0x08)
	struct FName *78aaf646e6; // 0xa0(0x08)
	struct FName *206d042266; // 0xa8(0x08)
	bool *8f16f666fd; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct USCS_Node*> ChildNodes; // 0xb8(0x10)
	struct USCS_Node* *62c50722ea; // 0xc8(0x08)
	struct TArray<struct F*bb43cda882> *5e4ffa4dbd; // 0xd0(0x10)
	struct FGuid VariableGuid; // 0xe0(0x10)
	bool bIsFalseRoot; // 0xf0(0x01)
	bool bIsNative; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
	struct FName NativeComponentName; // 0xf8(0x08)
	bool bVariableNameAutoGenerated; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FName InternalVariableName; // 0x108(0x08)
	char pad_110[0x40]; // 0x110(0x40)
};

// Class Engine.Selection
// Size: 0x98 (Inherited: 0x30)
struct USelection : UObject {
	char pad_30[0x68]; // 0x30(0x68)
};

// Class Engine.DestructibleMesh
// Size: 0x398 (Inherited: 0x2f0)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x2f0(0x88)
	struct TArray<struct F*ab298b5726> *4693fddd1a; // 0x378(0x10)
	char pad_388[0x10]; // 0x388(0x10)
};

// Class Engine.SkeletalMeshReductionSettings
// Size: 0x48 (Inherited: 0x30)
struct USkeletalMeshReductionSettings : UObject {
	struct TArray<struct F*10d154c523> Settings; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class Engine.SkeletalMeshSocket
// Size: 0x68 (Inherited: 0x30)
struct USkeletalMeshSocket : UObject {
	struct FName SocketName; // 0x30(0x08)
	struct FName BoneName; // 0x38(0x08)
	struct FVector RelativeLocation; // 0x40(0x0c)
	struct FRotator RelativeRotation; // 0x4c(0x0c)
	struct FVector RelativeScale; // 0x58(0x0c)
	bool bForceAlwaysAnimated; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)

	struct FVector *7e0d6639bd(); // Function Engine.SkeletalMeshSocket.*7e0d6639bd // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable // @ game+0x675c184
	struct FVector *dd99459d4b(); // Function Engine.SkeletalMeshSocket.*dd99459d4b // Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x675b4c8
};

// Class Engine.SlateBrushAsset
// Size: 0xc0 (Inherited: 0x30)
struct USlateBrushAsset : UObject {
	struct FSlateBrush Brush; // 0x30(0x90)
};

// Class Engine.SlateTextureAtlasInterface
// Size: 0x30 (Inherited: 0x30)
struct USlateTextureAtlasInterface : UInterface {
};

// Class Engine.SoundConcurrency
// Size: 0x40 (Inherited: 0x30)
struct USoundConcurrency : UObject {
	struct F*3eff319a2c Concurrency; // 0x30(0x10)
};

// Class Engine.*30216f2666
// Size: 0x48 (Inherited: 0x30)
struct U*30216f2666 : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Engine.*9d605b393c
// Size: 0x48 (Inherited: 0x48)
struct U*9d605b393c : U*30216f2666 {
};

// Class Engine.SoundSubmix
// Size: 0x58 (Inherited: 0x30)
struct USoundSubmix : UObject {
	struct TArray<struct USoundSubmix*> *eb2c4655df; // 0x30(0x10)
	struct USoundSubmix* *7e9c7067d1; // 0x40(0x08)
	struct TArray<struct U*9d605b393c*> *e5f1c60f37; // 0x48(0x10)
};

// Class Engine.SoundBase
// Size: 0xa8 (Inherited: 0x30)
struct USoundBase : UObject {
	struct USoundClass* *bfc73cdb30; // 0x30(0x08)
	char *1036e37579 : 1; // 0x38(0x01)
	char bOverrideConcurrency : 1; // 0x38(0x01)
	char bIgnoreFocus : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct USoundConcurrency* SoundConcurrencySettings; // 0x40(0x08)
	struct F*3eff319a2c ConcurrencyOverrides; // 0x48(0x10)
	enum class EMaxConcurrentResolutionRule MaxConcurrentResolutionRule; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32 MaxConcurrentPlayCount; // 0x5c(0x04)
	float Duration; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x68(0x08)
	float Priority; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct USoundSubmix* SoundSubmixObject; // 0x78(0x08)
	struct TArray<struct F*f4d80fddcb> SoundSubmixSends; // 0x80(0x10)
	float DefaultMasterReverbSendAmount; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct U*96c8a54059* SourceEffectChain; // 0x98(0x08)
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class Engine.*feb76ff399
// Size: 0xc8 (Inherited: 0xa8)
struct U*feb76ff399 : USoundBase {
	char pad_A8[0x20]; // 0xa8(0x20)
};

// Class Engine.SoundNode
// Size: 0x40 (Inherited: 0x30)
struct USoundNode : UObject {
	struct TArray<struct USoundNode*> ChildNodes; // 0x30(0x10)
};

// Class Engine.SoundCue
// Size: 0x200 (Inherited: 0xa8)
struct USoundCue : USoundBase {
	char bOverrideAttenuation : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct USoundNode* *938bc5315d; // 0xb0(0x08)
	float *41297bb0d6; // 0xb8(0x04)
	float *5e0d174c92; // 0xbc(0x04)
	struct FSoundAttenuationSettings *13f7e2bc4d; // 0xc0(0x130)
	char pad_1F0[0x10]; // 0x1f0(0x10)
};

// Class Engine.SoundGroups
// Size: 0x90 (Inherited: 0x30)
struct USoundGroups : UObject {
	struct TArray<struct FSoundGroup> SoundGroupProfiles; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
};

// Class Engine.SoundWave
// Size: 0x290 (Inherited: 0xa8)
struct USoundWave : USoundBase {
	int32 CompressionQuality; // 0xa8(0x04)
	char bLooping : 1; // 0xac(0x01)
	char *be64aba7ee : 1; // 0xac(0x01)
	char pad_AC_2 : 6; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	int32 *05be51c981; // 0xb0(0x04)
	char pad_B4_0 : 3; // 0xb4(0x01)
	char *a420786d29 : 1; // 0xb4(0x01)
	char *43b02f3d36 : 1; // 0xb4(0x01)
	char *c518c75407 : 1; // 0xb4(0x01)
	char *a0e0d212fb : 1; // 0xb4(0x01)
	char pad_B4_7 : 1; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	enum class ESoundGroup SoundGroup; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FString *d281ad91dc; // 0xc0(0x10)
	float *c4abba06f5; // 0xd0(0x04)
	float Volume; // 0xd4(0x04)
	float Pitch; // 0xd8(0x04)
	int32 *4a3d578517; // 0xdc(0x04)
	int32 SampleRate; // 0xe0(0x04)
	int32 *8dd2e02380; // 0xe4(0x04)
	struct TArray<struct F*f405a0a7cd> Subtitles; // 0xe8(0x10)
	struct TArray<struct F*c9e48fc552> *b1536b7bf0; // 0xf8(0x10)
	struct UCurveTable* Curves; // 0x108(0x08)
	struct UCurveTable* *ad24760bdc; // 0x110(0x08)
	char pad_118[0x178]; // 0x118(0x178)
};

// Class Engine.*1c122710fb
// Size: 0x310 (Inherited: 0x290)
struct U*1c122710fb : USoundWave {
	char pad_290[0x80]; // 0x290(0x80)
};

// Class Engine.SoundClass
// Size: 0x88 (Inherited: 0x30)
struct USoundClass : UObject {
	struct F*91bff4db2e Properties; // 0x30(0x2c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct USoundClass*> ChildClasses; // 0x60(0x10)
	struct TArray<struct FPassiveSoundMixModifier> *aad5a2f09c; // 0x70(0x10)
	struct USoundClass* ParentClass; // 0x80(0x08)
};

// Class Engine.*5cd3bab5e5
// Size: 0x48 (Inherited: 0x48)
struct U*5cd3bab5e5 : U*30216f2666 {
};

// Class Engine.*96c8a54059
// Size: 0x48 (Inherited: 0x30)
struct U*96c8a54059 : UObject {
	struct TArray<struct F*6fabb3d16e> Chain; // 0x30(0x10)
	char *ea97c38168 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.SoundMix
// Size: 0x90 (Inherited: 0x30)
struct USoundMix : UObject {
	char *ad8826826d : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *72c788b6df; // 0x34(0x04)
	struct FAudioEQEffect *e8e2893034; // 0x38(0x38)
	struct TArray<struct F*1f95a9feeb> *b8747aa4e7; // 0x70(0x10)
	float InitialDelay; // 0x80(0x04)
	float *782f302413; // 0x84(0x04)
	float Duration; // 0x88(0x04)
	float *b70830d96a; // 0x8c(0x04)
};

// Class Engine.*bba958a992
// Size: 0x40 (Inherited: 0x40)
struct U*bba958a992 : USoundNode {
};

// Class Engine.SoundNodeWavePlayer
// Size: 0x70 (Inherited: 0x40)
struct USoundNodeWavePlayer : U*bba958a992 {
	struct USoundWave* SoundWaveAssetPtr; // 0x40(0x20)
	struct USoundWave* SoundWave; // 0x60(0x08)
	char pad_68_0 : 1; // 0x68(0x01)
	char bLooping : 1; // 0x68(0x01)
	char pad_68_2 : 6; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*fa68b153b2
// Size: 0x180 (Inherited: 0x40)
struct U*fa68b153b2 : USoundNode {
	struct USoundAttenuation* AttenuationSettings; // 0x40(0x08)
	struct FSoundAttenuationSettings *13f7e2bc4d; // 0x48(0x130)
	char bOverrideAttenuation : 1; // 0x178(0x01)
	char pad_178_1 : 7; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
};

// Class Engine.SoundNodeBranch
// Size: 0x48 (Inherited: 0x40)
struct USoundNodeBranch : USoundNode {
	struct FName *ad867650c2; // 0x40(0x08)
};

// Class Engine.*1f04446c7e
// Size: 0x50 (Inherited: 0x40)
struct U*1f04446c7e : USoundNode {
	struct TArray<float> *6e9d622481; // 0x40(0x10)
};

// Class Engine.*195f05cb2d
// Size: 0x48 (Inherited: 0x40)
struct U*195f05cb2d : USoundNode {
	float *e1709d55d7; // 0x40(0x04)
	float *9d4a08b399; // 0x44(0x04)
};

// Class Engine.SoundNodeDialoguePlayer
// Size: 0x68 (Inherited: 0x40)
struct USoundNodeDialoguePlayer : USoundNode {
	struct FDialogueWaveParameter DialogueWaveParameter; // 0x40(0x20)
	char bLooping : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*b1ccf970a8
// Size: 0x50 (Inherited: 0x40)
struct U*b1ccf970a8 : USoundNode {
	struct TArray<struct FDistanceDatum> *5cd24c73de; // 0x40(0x10)
};

// Class Engine.*d4f36cdde1
// Size: 0x58 (Inherited: 0x50)
struct U*d4f36cdde1 : U*b1ccf970a8 {
	struct FName ParamName; // 0x50(0x08)
};

// Class Engine.*53dd1b1078
// Size: 0x48 (Inherited: 0x40)
struct U*53dd1b1078 : USoundNode {
	float *fcbf7ba331; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*6419c4a82c
// Size: 0x168 (Inherited: 0x40)
struct U*6419c4a82c : USoundNode {
	float *3af00e0470; // 0x40(0x04)
	float LoopEnd; // 0x44(0x04)
	float *21da6c60c8; // 0x48(0x04)
	int32 *f0bba26311; // 0x4c(0x04)
	char *a5be82f04b : 1; // 0x50(0x01)
	char bLoop : 1; // 0x50(0x01)
	char pad_50_2 : 6; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct U*a583118548* VolumeInterpCurve; // 0x58(0x08)
	struct U*a583118548* PitchInterpCurve; // 0x60(0x08)
	struct FRuntimeFloatCurve VolumeCurve; // 0x68(0x78)
	struct FRuntimeFloatCurve *de77f89d48; // 0xe0(0x78)
	float PitchMin; // 0x158(0x04)
	float PitchMax; // 0x15c(0x04)
	float *a486b9cf39; // 0x160(0x04)
	float *0f0f913f9d; // 0x164(0x04)
};

// Class Engine.*adb3fe7296
// Size: 0x50 (Inherited: 0x40)
struct U*adb3fe7296 : USoundNode {
	struct TArray<int32> *03a8f0a981; // 0x40(0x10)
};

// Class Engine.*d19aa33e68
// Size: 0x48 (Inherited: 0x40)
struct U*d19aa33e68 : USoundNode {
	int32 *f0bba26311; // 0x40(0x04)
	char *a5be82f04b : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class Engine.SoundNodeMature
// Size: 0x40 (Inherited: 0x40)
struct USoundNodeMature : USoundNode {
};

// Class Engine.*50a4ec8c6b
// Size: 0x50 (Inherited: 0x40)
struct U*50a4ec8c6b : USoundNode {
	struct TArray<float> *6e9d622481; // 0x40(0x10)
};

// Class Engine.*90c376bd04
// Size: 0x50 (Inherited: 0x40)
struct U*90c376bd04 : USoundNode {
	float PitchMin; // 0x40(0x04)
	float PitchMax; // 0x44(0x04)
	float *a486b9cf39; // 0x48(0x04)
	float *0f0f913f9d; // 0x4c(0x04)
};

// Class Engine.*1c5e2d5bd2
// Size: 0x80 (Inherited: 0x40)
struct U*1c5e2d5bd2 : USoundNode {
	struct F*3b502e6b7b *8a42e62189; // 0x40(0x20)
	struct F*3b502e6b7b *e64914f6c5; // 0x60(0x20)
};

// Class Engine.*d9eb8e6d40
// Size: 0x68 (Inherited: 0x40)
struct U*d9eb8e6d40 : USoundNode {
	char *37ca2d45e2 : 1; // 0x40(0x01)
	char *aadd0d4159 : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float *fd7a05b831; // 0x44(0x04)
	float *ea518b8a6f; // 0x48(0x04)
	float *dd3403fa45; // 0x4c(0x04)
	float *a9cd89fb8e; // 0x50(0x04)
	float *30383db5df; // 0x54(0x04)
	float *a7aa6eab35; // 0x58(0x04)
	float *dc7997e892; // 0x5c(0x04)
	float *43ad1738bf; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.*bbfac49bcf
// Size: 0x40 (Inherited: 0x40)
struct U*bbfac49bcf : USoundNode {
};

// Class Engine.*b27d6ea70c
// Size: 0x70 (Inherited: 0x40)
struct U*b27d6ea70c : USoundNode {
	struct TArray<float> Weights; // 0x40(0x10)
	int32 *aa6084b98e; // 0x50(0x04)
	char *f96a64edf7 : 1; // 0x54(0x01)
	char pad_54_1 : 7; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct TArray<bool> *925017dc8d; // 0x58(0x10)
	int32 *9722a51d6e; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.*640f847dbd
// Size: 0x48 (Inherited: 0x40)
struct U*640f847dbd : USoundNode {
	struct USoundClass* *8c42a2ebda; // 0x40(0x08)
};

// Class Engine.SoundNodeSwitch
// Size: 0x48 (Inherited: 0x40)
struct USoundNodeSwitch : USoundNode {
	struct FName *17a39f72bd; // 0x40(0x08)
};

// Class Engine.*f5cb4fa92d
// Size: 0x48 (Inherited: 0x40)
struct U*f5cb4fa92d : USoundNode {
	struct FName *7ae07bfb65; // 0x40(0x08)
};

// Class Engine.*42332609a2
// Size: 0x70 (Inherited: 0x30)
struct U*42332609a2 : UObject {
	struct FName SocketName; // 0x30(0x08)
	struct FVector RelativeLocation; // 0x38(0x0c)
	struct FRotator RelativeRotation; // 0x44(0x0c)
	struct FVector RelativeScale; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Tag; // 0x60(0x10)
};

// Class Engine.StringTable
// Size: 0x48 (Inherited: 0x30)
struct UStringTable : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Engine.SubsurfaceProfile
// Size: 0x58 (Inherited: 0x30)
struct USubsurfaceProfile : UObject {
	struct FSubsurfaceProfileStruct Settings; // 0x30(0x24)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.*6765374fe8
// Size: 0x78 (Inherited: 0x30)
struct U*6765374fe8 : UObject {
	struct FText DefaultedText; // 0x30(0x18)
	struct FText UndefaultedText; // 0x48(0x18)
	struct FText *75d1454eb0; // 0x60(0x18)
};

// Class Engine.LightMapTexture2D
// Size: 0x280 (Inherited: 0x270)
struct ULightMapTexture2D : UTexture2D {
	char pad_270[0x10]; // 0x270(0x10)
};

// Class Engine.*44d31064d1
// Size: 0x280 (Inherited: 0x270)
struct U*44d31064d1 : UTexture2D {
	enum class *07a6ada526 *5c5b197ff9; // 0x270(0x01)
	char pad_271[0xf]; // 0x271(0x0f)
};

// Class Engine.Texture2DArray
// Size: 0x270 (Inherited: 0x270)
struct UTexture2DArray : UTexture2D {
};

// Class Engine.*cf31a3bb9b
// Size: 0x280 (Inherited: 0x270)
struct U*cf31a3bb9b : UTexture2D {
	float Brightness; // 0x270(0x04)
	float *82befd351c; // 0x274(0x04)
	char pad_278[0x8]; // 0x278(0x08)
};

// Class Engine.*9c2462395a
// Size: 0x1a0 (Inherited: 0x180)
struct U*9c2462395a : UTexture {
	char pad_180[0x8]; // 0x180(0x08)
	enum class EPixelFormat Format; // 0x188(0x01)
	char pad_189[0x17]; // 0x189(0x17)
};

// Class Engine.*50f15a0ce1
// Size: 0x1d0 (Inherited: 0x1b0)
struct U*50f15a0ce1 : UTextureRenderTarget2D {
	struct FMulticastDelegate OnCanvasRenderTargetUpdate; // 0x1b0(0x10)
	struct UWorld* World; // 0x1c0(0x08)
	bool *37c593ce39; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)

	int32 ReceiveUpdate(); // Function Engine.*50f15a0ce1.ReceiveUpdate // Event|Public|BlueprintEvent // @ game+0x22c9a0
	int32 GetSize(); // Function Engine.*50f15a0ce1.GetSize // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure // @ game+0x675b3ac
	struct U*50f15a0ce1* *4b8464d9db(); // Function Engine.*50f15a0ce1.*4b8464d9db // Final|Native|Static|Public|BlueprintCallable // @ game+0x6756c4c
	void *3d06e4ddd6(); // Function Engine.*50f15a0ce1.*3d06e4ddd6 // Native|Public|BlueprintCallable // @ game+0x66f376c
};

// Class Engine.TextureRenderTargetCube
// Size: 0x1b0 (Inherited: 0x190)
struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32 SizeX; // 0x188(0x04)
	struct FLinearColor ClearColor; // 0x18c(0x10)
	enum class EPixelFormat *e9792ce090; // 0x19c(0x01)
	char bHDR : 1; // 0x1a0(0x01)
	char *f6b4164b98 : 1; // 0x1a0(0x01)
	char pad_1A5_2 : 6; // 0x1a5(0x01)
	char pad_1A6[0xa]; // 0x1a6(0x0a)
};

// Class Engine.TextureLODSettings
// Size: 0x40 (Inherited: 0x30)
struct UTextureLODSettings : UObject {
	struct TArray<struct FTextureLODGroup> TextureLODGroups; // 0x30(0x10)
};

// Class Engine.DeviceProfile
// Size: 0xd0 (Inherited: 0x40)
struct UDeviceProfile : UTextureLODSettings {
	struct FString DeviceType; // 0x40(0x10)
	struct FString BaseProfileName; // 0x50(0x10)
	struct UObject* Parent; // 0x60(0x08)
	char pad_68[0x18]; // 0x68(0x18)
	struct TArray<struct FString> CVars; // 0x80(0x10)
	char pad_90[0x40]; // 0x90(0x40)
};

// Class Engine.*ec5706cab5
// Size: 0x30 (Inherited: 0x30)
struct U*ec5706cab5 : UObject {
};

// Class Engine.*21c8ecb21c
// Size: 0xa0 (Inherited: 0x30)
struct U*21c8ecb21c : UObject {
	float *b3d218b42f; // 0x30(0x04)
	enum class *76dbde8383 *183e36a51e; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char *f0981d3ec8 : 1; // 0x38(0x01)
	char bLoop : 1; // 0x38(0x01)
	char bReplicated : 1; // 0x38(0x01)
	char *0f6639882c : 1; // 0x38(0x01)
	char *07c46bc655 : 1; // 0x38(0x01)
	char pad_38_5 : 3; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct F*cda3354a13> *1fad7ea26b; // 0x40(0x10)
	struct TArray<struct F*36f45125d8> *4fed575f64; // 0x50(0x10)
	struct TArray<struct F*407377d95c> *aae0586399; // 0x60(0x10)
	struct TArray<struct F*0e90ebb131> *32349a56d0; // 0x70(0x10)
	struct TArray<struct F*bb43cda882> *5e4ffa4dbd; // 0x80(0x10)
	struct FGuid *c6ac3b72f3; // 0x90(0x10)
};

// Class Engine.TouchInterface
// Size: 0x60 (Inherited: 0x30)
struct UTouchInterface : UObject {
	struct TArray<struct F*59c323535a> Controls; // 0x30(0x10)
	float *9940dd5b38; // 0x40(0x04)
	float *fc5569148e; // 0x44(0x04)
	float *b2ec62f75e; // 0x48(0x04)
	float *4335871192; // 0x4c(0x04)
	float *ec9d4f819c; // 0x50(0x04)
	bool *30f2611daf; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float StartupDelay; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.UserDefinedEnum
// Size: 0xc8 (Inherited: 0x78)
struct UUserDefinedEnum : UEnum {
	struct TMap<struct FName, struct FText> *af32c39108; // 0x78(0x50)
};

// Class Engine.VectorField
// Size: 0x50 (Inherited: 0x30)
struct UVectorField : UObject {
	struct FBox Bounds; // 0x30(0x1c)
	float Intensity; // 0x4c(0x04)
};

// Class Engine.*22c6234d95
// Size: 0x90 (Inherited: 0x50)
struct U*22c6234d95 : UVectorField {
	struct UTexture2D* Texture; // 0x50(0x08)
	enum class *45bf7197dd *cb94013dd3; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32 *2f9ebe2967; // 0x5c(0x04)
	int32 *f2bb886be4; // 0x60(0x04)
	int32 *999e3c0b99; // 0x64(0x04)
	int32 *cde6fc609b; // 0x68(0x04)
	int32 *1e19591980; // 0x6c(0x04)
	int32 FrameCount; // 0x70(0x04)
	float FramesPerSecond; // 0x74(0x04)
	char bLoop : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct U*c5374d0907* NoiseField; // 0x80(0x08)
	float NoiseScale; // 0x88(0x04)
	float *e298767473; // 0x8c(0x04)
};

// Class Engine.*c5374d0907
// Size: 0xe8 (Inherited: 0x50)
struct U*c5374d0907 : UVectorField {
	int32 SizeX; // 0x50(0x04)
	int32 SizeY; // 0x54(0x04)
	int32 *74525c3a93; // 0x58(0x04)
	char pad_5C[0x8c]; // 0x5c(0x8c)
};

// Class Engine.*9c9b5b8082
// Size: 0x30 (Inherited: 0x30)
struct U*9c9b5b8082 : UObject {
};

// Class Engine.*412aa91c16
// Size: 0x30 (Inherited: 0x30)
struct U*412aa91c16 : UInterface {
};

// Class Engine.*1a381703b9
// Size: 0x60 (Inherited: 0x30)
struct U*1a381703b9 : UObject {
	struct FGuid ID; // 0x30(0x10)
	enum class EVolumetricDataFormat Format; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector VoxelSize; // 0x44(0x0c)
	float SamplingScale; // 0x50(0x04)
	float *4742a79c14; // 0x54(0x04)
	float MaxDrawDistance; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.WorldComposition
// Size: 0x98 (Inherited: 0x30)
struct UWorldComposition : UObject {
	char pad_30[0x38]; // 0x30(0x38)
	struct TArray<struct ULevelStreaming*> *7f39db5d42; // 0x68(0x10)
	double TilesStreamingTimeThreshold; // 0x78(0x08)
	bool bLoadAllTilesDuringCinematic; // 0x80(0x01)
	bool bRebaseOriginIn3DSpace; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	float RebaseOriginDistance; // 0x84(0x04)
	struct TArray<struct FString> IgnoreStreamingPrefix; // 0x88(0x10)
};

