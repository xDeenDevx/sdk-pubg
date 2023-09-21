// Class Engine.Actor
// Size: 0x3f8 (Inherited: 0x28)
struct AActor : UObject {
	struct FMulticastDelegate OnActorEndOverlap; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
	struct FMulticastDelegate OnClicked; // 0x48(0x10)
	int32 *2bc7f7749a; // 0x58(0x04)
	char pad_5C_0 : 3; // 0x5c(0x01)
	char *6a29209afc : 1; // 0x5c(0x01)
	char pad_5C_4 : 4; // 0x5c(0x01)
	char pad_5D_0 : 1; // 0x5d(0x01)
	char *6583edce58 : 1; // 0x5d(0x01)
	char bReplicates : 1; // 0x5d(0x01)
	char pad_5D_3 : 5; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	struct FName *332fd811ca; // 0x60(0x08)
	enum class ENetRole RemoteRole; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct AActor* Owner; // 0x70(0x08)
	struct FRepMovement ReplicatedMovement; // 0x78(0x34)
	char pad_AC[0x4]; // 0xac(0x04)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xb0(0x40)
	char pad_F0[0x4]; // 0xf0(0x04)
	float InitialLifeSpan; // 0xf4(0x04)
	struct FMulticastDelegate OnInputTouchLeave; // 0xf8(0x10)
	char pad_108[0x8]; // 0x108(0x08)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x110(0x10)
	struct FGuid DestructibleId; // 0x120(0x10)
	bool bIsDestroyedVersion; // 0x130(0x01)
	bool RemoveFromLevelLOD; // 0x131(0x01)
	char pad_132[0x6]; // 0x132(0x06)
	struct F*2066290a18 PrimaryActorTick; // 0x138(0x58)
	char bAutoDestroyWhenFinished : 1; // 0x190(0x01)
	char bCanBeDamaged : 1; // 0x190(0x01)
	char *50cd51ed38 : 1; // 0x190(0x01)
	char *e002b42072 : 1; // 0x190(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x190(0x01)
	char *a4c704a3e5 : 1; // 0x190(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x190(0x01)
	char *13aea9b43a : 1; // 0x190(0x01)
	char *4211b886bf : 1; // 0x191(0x01)
	char pad_191_1 : 7; // 0x191(0x01)
	char pad_192[0x2]; // 0x192(0x02)
	struct AActor* ParentComponentActor; // 0x194(0x08)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1a0(0x10)
	char pad_1B0[0x8]; // 0x1b0(0x08)
	struct FMulticastDelegate OnEndCursorOver; // 0x1b8(0x10)
	float *ae3e81fc86; // 0x1c8(0x04)
	char pad_1CC[0xc]; // 0x1cc(0x0c)
	char *97cac516e7 : 1; // 0x1d8(0x01)
	char pad_1D8_1 : 4; // 0x1d8(0x01)
	char *cd27b8552b : 1; // 0x1d8(0x01)
	char *8aabd64ff4 : 1; // 0x1d8(0x01)
	char *3cd32b903e : 1; // 0x1d8(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1d9(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1da(0x01)
	char pad_1DB[0x1]; // 0x1db(0x01)
	float CustomTimeDilation; // 0x1dc(0x04)
	char pad_1E0[0x1]; // 0x1e0(0x01)
	enum class ENetRole Role; // 0x1e1(0x01)
	char pad_1E2[0x6]; // 0x1e2(0x06)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1e8(0x10)
	char pad_1F8[0x8]; // 0x1f8(0x08)
	struct FMulticastDelegate OnTakePointDamage; // 0x200(0x10)
	char pad_210[0x50]; // 0x210(0x50)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x260(0x10)
	struct TArray<struct AActor*> Children; // 0x270(0x10)
	int32 *2d89f8ef7f; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct FMulticastDelegate OnInputTouchEnter; // 0x288(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FMulticastDelegate OnInputTouchBegin; // 0x2a0(0x10)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x2b0(0x10)
	struct USceneComponent* RootComponent; // 0x2c0(0x08)
	enum class *66c1dada81 InputConsumeOption; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FMulticastDelegate OnReleased; // 0x2d0(0x10)
	struct FMulticastDelegate OnActorHit; // 0x2e0(0x10)
	enum class EAutoReceiveInput *8606d93d96; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct TArray<struct FName> Layers; // 0x2f8(0x10)
	struct TArray<struct FName> Tags; // 0x308(0x10)
	struct U*63b14265fa* *63b14265fa; // 0x318(0x08)
	float NetUpdateFrequency; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	uint64 *f99b84bc94; // 0x328(0x08)
	struct UChildActorComponent* *129513d23d; // 0x330(0x08)
	char pad_338[0x50]; // 0x338(0x50)
	float MinNetUpdateFrequency; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x390(0x10)
	float NetCullDistanceSquared; // 0x3a0(0x04)
	float NetPriority; // 0x3a4(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x3a8(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x3b8(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3c8(0x10)
	char pad_3D8[0x8]; // 0x3d8(0x08)
	struct APawn* Instigator; // 0x3e0(0x08)
	char bHidden : 1; // 0x3e8(0x01)
	char *0854a90e26 : 1; // 0x3e8(0x01)
	char *013332e5c6 : 1; // 0x3e8(0x01)
	char bOnlyRelevantToOwner : 1; // 0x3e8(0x01)
	char bAlwaysRelevant : 1; // 0x3e8(0x01)
	char *9ddfc785f1 : 1; // 0x3e8(0x01)
	char *05594c4443 : 1; // 0x3e8(0x01)
	char *ef19f6b6c9 : 1; // 0x3e8(0x01)
	char *dca9d9a72a : 1; // 0x3e9(0x01)
	char pad_3E9_1 : 1; // 0x3e9(0x01)
	char *16d69885c9 : 1; // 0x3e9(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x3e9(0x01)
	char *59968c9633 : 1; // 0x3e9(0x01)
	char pad_3E9_5 : 1; // 0x3e9(0x01)
	char *02848ec998 : 1; // 0x3e9(0x01)
	char pad_3E9_7 : 1; // 0x3e9(0x01)
	char pad_3EA[0xe]; // 0x3ea(0x0e)

	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // None // @ game+0x6365248
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // None // @ game+0x637c668
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // None // @ game+0x636a7dc
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // None // @ game+0x637cc50
	void *82b3653b7b(struct AActor* OtherActor); // Function Engine.Actor.*82b3653b7b // None // @ game+0x636b3e8
	struct AController* ReceiveAnyDamage(float Damage); // Function Engine.Actor.ReceiveAnyDamage // None // @ game+0x26a108
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // None // @ game+0x26a108
	struct FName ActorHasTag(); // Function Engine.Actor.ActorHasTag // None // @ game+0x635bf94
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // None // @ game+0x6365214
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // None // @ game+0x26a108
	enum class EAttachLocation K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // None // @ game+0x636e438
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldOffset // None // @ game+0x636cd8c
	enum class EAttachLocation K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // None // @ game+0x636e2b8
	void HasAuthority(); // Function Engine.Actor.HasAuthority // None // @ game+0x9e1498
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // None // @ game+0x636a060
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // None // @ game+0x6369fa8
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // None // @ game+0x6376d90
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // None // @ game+0x6365898
	void *f77af040ad(); // Function Engine.Actor.*f77af040ad // None // @ game+0x6365634
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // None // @ game+0xbe9a6c
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // None // @ game+0x636ed78
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // None // @ game+0x63650f0
	struct FName *43eab6a44c(); // Function Engine.Actor.*43eab6a44c // None // @ game+0x6368648
	enum class EAttachmentRule *ca2fce53c9(struct AActor* ParentActor, struct FName SocketName); // Function Engine.Actor.*ca2fce53c9 // None // @ game+0x636e738
	void K2_AddActorWorldTransform(struct FTransform DeltaTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldTransform // None // @ game+0x636d13c
	bool K2_SetActorLocation(struct FVector NewLocation); // Function Engine.Actor.K2_SetActorLocation // None // @ game+0x636fe08
	struct FKey *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // None // @ game+0x6368554
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // None // @ game+0x6376e28
	struct UObject* AddComponent(struct FName TemplateName); // Function Engine.Actor.AddComponent // None // @ game+0xa5d3a0
	struct FHitResult K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // None // @ game+0x636cf64
	void GetTransform(); // Function Engine.Actor.GetTransform // None // @ game+0xaacdcc
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // None // @ game+0x636ed90
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // None // @ game+0xb99a34
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // None // @ game+0x6364520
	void GetActorBounds(struct FVector Origin); // Function Engine.Actor.GetActorBounds // None // @ game+0x6364cbc
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // None // @ game+0x6367f78
	float MakeNoise(); // Function Engine.Actor.MakeNoise // None // @ game+0x63720f4
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // None // @ game+0x6365288
	void *a487955527(); // Function Engine.Actor.*a487955527 // None // @ game+0x636f250
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // None // @ game+0x6367524
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // None // @ game+0x26a108
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // None // @ game+0x26a108
	void *76b33f89d4(); // Function Engine.Actor.*76b33f89d4 // None // @ game+0x636ac9c
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // None // @ game+0x26a108
	void DisableInput(); // Function Engine.Actor.DisableInput // None // @ game+0x6362a78
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // None // @ game+0x636ba48
	enum class *42e1cdcd79 *694ac52e11(enum class *42e1cdcd79 LocationRule); // Function Engine.Actor.*694ac52e11 // None // @ game+0x636eee0
	struct UClass* *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // None // @ game+0x63669ec
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // None // @ game+0xb40e14
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // None // @ game+0x637c5d0
	void *7952614099(); // Function Engine.Actor.*7952614099 // None // @ game+0x6365260
	struct FHitResult K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // None // @ game+0x636c988
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // None // @ game+0xb6a404
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // None // @ game+0x26a108
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // None // @ game+0x6364aa8
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // None // @ game+0x6369bb8
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // None // @ game+0x6377260
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // None // @ game+0x6364f98
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // None // @ game+0x26a108
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // None // @ game+0x636f734
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // None // @ game+0x8b5060
	void *8ab522db39(); // Function Engine.Actor.*8ab522db39 // None // @ game+0x63672dc
	void *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // None // @ game+0x6366bd4
	struct FHitResult K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // None // @ game+0x63705d4
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // None // @ game+0x26a108
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // None // @ game+0x6373e3c
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // None // @ game+0x635dd54
	struct FHitResult ReceiveRadialDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceiveRadialDamage // None // @ game+0x26a108
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // None // @ game+0x6364abc
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // None // @ game+0x6368e6c
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // None // @ game+0x26a108
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // None // @ game+0x636af68
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // None // @ game+0x63771cc
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // None // @ game+0x26a108
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // None // @ game+0x26a108
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // None // @ game+0x6369e18
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // None // @ game+0x636c7b0
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // None // @ game+0x636a03c
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // None // @ game+0x6370224
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // None // @ game+0xb44448
	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // None // @ game+0x636ba64
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // None // @ game+0x70f418
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // None // @ game+0x26a108
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // None // @ game+0x635dc2c
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // None // @ game+0x636bafc
	void *679babdbe9(struct FVector DestLocation); // Function Engine.Actor.*679babdbe9 // None // @ game+0x6371a40
	float *77574d4d00(); // Function Engine.Actor.*77574d4d00 // None // @ game+0x637f170
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // None // @ game+0x26a108
	void *2bbda76e95(struct UClass* ComponentClass); // Function Engine.Actor.*2bbda76e95 // None // @ game+0x6366ae4
	void *8ff8fb0472(struct FKey InputAxisKey); // Function Engine.Actor.*8ff8fb0472 // None // @ game+0x6368c64
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // None // @ game+0x636586c
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // None // @ game+0x636f318
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // None // @ game+0x63650bc
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // None // @ game+0x637cb38
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // None // @ game+0x636ffec
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // None // @ game+0x637712c
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // None // @ game+0x637708c
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // None // @ game+0x637ea90
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // None // @ game+0x26a108
	struct FVector *4e14239fe2(); // Function Engine.Actor.*4e14239fe2 // None // @ game+0x6364e8c
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // None // @ game+0x6368f34
	void *6f6713dfba(struct AActor* OtherActor); // Function Engine.Actor.*6f6713dfba // None // @ game+0x6368018
	struct FHitResult K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // None // @ game+0x63703fc
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // None // @ game+0x6365848
	void K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // None // @ game+0x605cd0
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // None // @ game+0x6373d14
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // None // @ game+0x6364e64
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // None // @ game+0x26a108
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // None // @ game+0x26a108
	void *58360a298b(struct AActor* Other); // Function Engine.Actor.*58360a298b // None // @ game+0x636c21c
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // None // @ game+0x63629e4
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // None // @ game+0x636b3b0
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // None // @ game+0x26a108
	bool K2_SetActorTransform(bool bSweep); // Function Engine.Actor.K2_SetActorTransform // None // @ game+0x6370800
	void SetOwner(); // Function Engine.Actor.SetOwner // None // @ game+0x637b964
	void *094169766b(); // Function Engine.Actor.*094169766b // None // @ game+0x6368e84
	void *2a43ddf3b4(struct AActor* OtherActor); // Function Engine.Actor.*2a43ddf3b4 // None // @ game+0x636737c
	enum class EAttachmentRule *e13072354b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*e13072354b // None // @ game+0x63d310
	void *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // None // @ game+0x637dda0
	struct FVector ReceivePointDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceivePointDamage // None // @ game+0x26a108
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // None // @ game+0x26a108
	struct FHitResult K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // None // @ game+0x636cb60
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector NormalImpulse); // Function Engine.Actor.ReceiveHit // None // @ game+0x26a108
	struct UMaterialInterface* *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // None // @ game+0x6372078
};

// Class Engine.AnimInstance
// Size: 0x398 (Inherited: 0x28)
struct UAnimInstance : UObject {
	float DeltaTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct USkeleton* *3d26a0f5a9; // 0x30(0x08)
	enum class *70bf4a9cf2 *06b775a106; // 0x38(0x01)
	bool bRunUpdatesInWorkerThreads; // 0x39(0x01)
	bool bCanUseParallelUpdateAnimation; // 0x3a(0x01)
	bool *b16fe671be; // 0x3b(0x01)
	bool bWarnAboutBlueprintUsage; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FMulticastDelegate OnMontageBlendingOut; // 0x40(0x10)
	struct FMulticastDelegate OnMontageStarted; // 0x50(0x10)
	struct FMulticastDelegate OnMontageEnded; // 0x60(0x10)
	struct FMulticastDelegate OnMontageInterrupted; // 0x70(0x10)
	struct FMulticastDelegate OnAllMontageInstancesEnded; // 0x80(0x10)
	char pad_90[0x60]; // 0x90(0x60)
	bool *9e5b2e55cd; // 0xf0(0x01)
	char pad_F1[0x9f]; // 0xf1(0x9f)
	struct TArray<struct FAnimNotifyEvent> *e83d212201; // 0x190(0x10)
	char pad_1A0[0x1f8]; // 0x1a0(0x1f8)

	struct UAnimMontage* *1049bf0142(); // Function Engine.AnimInstance.*1049bf0142 // None // @ game+0x63b5c38
	void *fb3df011d9(); // Function Engine.AnimInstance.*fb3df011d9 // None // @ game+0x639dda0
	void *ad69a18e5a(); // Function Engine.AnimInstance.*ad69a18e5a // None // @ game+0x63aab50
	int32 GetStateWeight(); // Function Engine.AnimInstance.GetStateWeight // None // @ game+0x63a5364
	struct UAnimMontage* *d46dc5dc83(); // Function Engine.AnimInstance.*d46dc5dc83 // None // @ game+0x63b55a0
	int32 PlaySlotAnimation(struct FName SlotNodeName, float BlendOutTime); // Function Engine.AnimInstance.PlaySlotAnimation // None // @ game+0x63b965c
	enum class EMontagePlayReturnType Montage_Play(float InTimeToStartMontageAt); // Function Engine.AnimInstance.Montage_Play // None // @ game+0x63d69c
	void *242396e0df(struct FName NextSection); // Function Engine.AnimInstance.*242396e0df // None // @ game+0x5681e50
	struct FName *0c3e0ee134(); // Function Engine.AnimInstance.*0c3e0ee134 // None // @ game+0x63a5844
	struct UAnimSequenceBase* *8c0c4894ae(struct FName SlotNodeName); // Function Engine.AnimInstance.*8c0c4894ae // None // @ game+0x63ab27c
	void *691ee180b3(struct UAnimMontage* Montage); // Function Engine.AnimInstance.*691ee180b3 // None // @ game+0x63b56dc
	int32 *e267668cef(); // Function Engine.AnimInstance.*e267668cef // None // @ game+0x639fd40
	int32 *723eae25e1(); // Function Engine.AnimInstance.*723eae25e1 // None // @ game+0x63a05b0
	void GetCurrentStateElapsedTime(int32 MachineIndex); // Function Engine.AnimInstance.GetCurrentStateElapsedTime // None // @ game+0x639dd00
	void *91ee611ffd(struct FName SectionName); // Function Engine.AnimInstance.*91ee611ffd // None // @ game+0x985bac
	int32 *e146fc91b1(); // Function Engine.AnimInstance.*e146fc91b1 // None // @ game+0x63a02bc
	struct FName *057fda6034(); // Function Engine.AnimInstance.*057fda6034 // None // @ game+0x63c95a0
	void GetAnimAssetPlayerTimeFromEnd(struct UAnimationAsset* AnimAsset); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd // None // @ game+0x639c268
	int32 *48c662fc37(); // Function Engine.AnimInstance.*48c662fc37 // None // @ game+0x63a0cb0
	int32 *245284edb6(); // Function Engine.AnimInstance.*245284edb6 // None // @ game+0x639fb64
	void *f364c6828d(int32 StateIndex); // Function Engine.AnimInstance.*f364c6828d // None // @ game+0x63a3888
	struct UAnimMontage* *bf78400b8f(); // Function Engine.AnimInstance.*bf78400b8f // None // @ game+0x63b58bc
	struct UAnimMontage* *5eeab7b91c(); // Function Engine.AnimInstance.*5eeab7b91c // None // @ game+0x63b5500
	void *bca340010a(struct UAnimMontage* Montage); // Function Engine.AnimInstance.*bca340010a // None // @ game+0x63b563c
	void *c5fd55eb88(bool bUnlockMovement); // Function Engine.AnimInstance.*c5fd55eb88 // None // @ game+0x63b1074
	int32 *fd0ea4aa33(); // Function Engine.AnimInstance.*fd0ea4aa33 // None // @ game+0x639ff04
	struct UAnimMontage* *ccdbbc4b23(); // Function Engine.AnimInstance.*ccdbbc4b23 // None // @ game+0x63b577c
	void *1ab31cd97b(); // Function Engine.AnimInstance.*1ab31cd97b // None // @ game+0x63cb40c
	void BlueprintInitializeAnimation(); // Function Engine.AnimInstance.BlueprintInitializeAnimation // None // @ game+0x26a108
	bool *3ae29e8bbb(); // Function Engine.AnimInstance.*3ae29e8bbb // None // @ game+0x63ab804
	void *f61ade023a(); // Function Engine.AnimInstance.*f61ade023a // None // @ game+0x63b5b58
	void *9b89db3b5d(int32 MachineIndex); // Function Engine.AnimInstance.*9b89db3b5d // None // @ game+0x63a0a9c
	struct FName *058de0418c(); // Function Engine.AnimInstance.*058de0418c // None // @ game+0x5748e4
	void *66a3995478(struct FName SyncGroup); // Function Engine.AnimInstance.*66a3995478 // None // @ game+0x63a9228
	void *899177a2d7(); // Function Engine.AnimInstance.*899177a2d7 // None // @ game+0x639f988
	void *e8a9ba9091(); // Function Engine.AnimInstance.*e8a9ba9091 // None // @ game+0x63d14c8
	int32 *3c7c31cc75(); // Function Engine.AnimInstance.*3c7c31cc75 // None // @ game+0x63a3970
	void *66f0434692(struct FName MarkerName); // Function Engine.AnimInstance.*66f0434692 // None // @ game+0x63a5ef4
	void *5e755e4562(); // Function Engine.AnimInstance.*5e755e4562 // None // @ game+0x63be71c
	void *79ed44711d(); // Function Engine.AnimInstance.*79ed44711d // None // @ game+0x63b5ac8
	void *ccd070a982(); // Function Engine.AnimInstance.*ccd070a982 // None // @ game+0xb68174
	void *84bfa05c08(struct FVector Velocity); // Function Engine.AnimInstance.*84bfa05c08 // None // @ game+0x638d5cc
	int32 *3ae1a9d556(); // Function Engine.AnimInstance.*3ae1a9d556 // None // @ game+0x63a0ec0
	float *f6100f1f77(); // Function Engine.AnimInstance.*f6100f1f77 // None // @ game+0xb88c10
	void *ec3409ea7b(); // Function Engine.AnimInstance.*ec3409ea7b // None // @ game+0x639d918
	void *905d29ade2(); // Function Engine.AnimInstance.*905d29ade2 // None // @ game+0xbc5c54
	void *3080ec9377(); // Function Engine.AnimInstance.*3080ec9377 // None // @ game+0x63b5a38
	int32 *8c5198f019(); // Function Engine.AnimInstance.*8c5198f019 // None // @ game+0x5e6a48
	float PlaySlotAnimationAsDynamicMontage(struct FName SlotNodeName, float BlendOutTime); // Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage // None // @ game+0x63b9880
	int32 *f36dfe6065(int32 StateIndex); // Function Engine.AnimInstance.*f36dfe6065 // None // @ game+0x5e7014
	void GetAnimAssetPlayerLength(struct UAnimationAsset* AnimAsset); // Function Engine.AnimInstance.GetAnimAssetPlayerLength // None // @ game+0x639c0f4
	bool *0d4faf3909(); // Function Engine.AnimInstance.*0d4faf3909 // None // @ game+0x63b1074
	float GetAnimAssetPlayerTimeFromEndFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction // None // @ game+0x639c36c
	void *24d7f1731e(); // Function Engine.AnimInstance.*24d7f1731e // None // @ game+0x63b595c
	void *a6e097a5c0(); // Function Engine.AnimInstance.*a6e097a5c0 // None // @ game+0x63a00c8
	void *07eb4aa7bc(); // Function Engine.AnimInstance.*07eb4aa7bc // None // @ game+0x6390874
	int32 *d9cbacaeac(); // Function Engine.AnimInstance.*d9cbacaeac // None // @ game+0x63a3b9c
	void *9687b3535a(int32 MachineIndex); // Function Engine.AnimInstance.*9687b3535a // None // @ game+0x5e74e4
	float GetAnimAssetPlayerTimeFraction(); // Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction // None // @ game+0x639c188
	struct UAnimMontage* *771de70e87(); // Function Engine.AnimInstance.*771de70e87 // None // @ game+0x63b581c
	void *53d492fe87(); // Function Engine.AnimInstance.*53d492fe87 // None // @ game+0x63d81dc
	void BlueprintUpdateAnimation(); // Function Engine.AnimInstance.BlueprintUpdateAnimation // None // @ game+0x26a108
	void BlueprintPostEvaluateAnimation(); // Function Engine.AnimInstance.BlueprintPostEvaluateAnimation // None // @ game+0x26a108
	float *3b5b96bdbc(); // Function Engine.AnimInstance.*3b5b96bdbc // None // @ game+0x63d6494
};

// Class Engine.ActorComponent
// Size: 0x1f0 (Inherited: 0x28)
struct UActorComponent : UObject {
	char pad_28[0xe8]; // 0x28(0xe8)
	struct F*64c6f9629b PrimaryComponentTick; // 0x110(0x58)
	struct TArray<struct FName> ComponentTags; // 0x168(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x178(0x10)
	char pad_188_0 : 3; // 0x188(0x01)
	char bReplicates : 1; // 0x188(0x01)
	char bNetAddressable : 1; // 0x188(0x01)
	char *d9de2ce983 : 1; // 0x188(0x01)
	char pad_188_6 : 2; // 0x188(0x01)
	char pad_189[0x1]; // 0x189(0x01)
	char pad_18A_0 : 2; // 0x18a(0x01)
	char bCreatedByConstructionScript : 1; // 0x18a(0x01)
	char bInstanceComponent : 1; // 0x18a(0x01)
	char bAutoActivate : 1; // 0x18a(0x01)
	char *eedbc91ee9 : 1; // 0x18a(0x01)
	char *8016acb0c2 : 1; // 0x18a(0x01)
	char pad_18A_7 : 1; // 0x18a(0x01)
	char pad_18B[0x1]; // 0x18b(0x01)
	struct FGuid DestructibleId; // 0x18c(0x10)
	bool bIsDestroyedVersion; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	char *cb59e077f1 : 1; // 0x1a0(0x01)
	char pad_1A0_1 : 2; // 0x1a0(0x01)
	char bIsEditorOnly : 1; // 0x1a0(0x01)
	char pad_1A0_4 : 4; // 0x1a0(0x01)
	char pad_1A1[0x4]; // 0x1a1(0x04)
	enum class EComponentCreationMethod CreationMethod; // 0x1a5(0x01)
	enum class EPendingCreationType *a029c1f885; // 0x1a6(0x01)
	char pad_1A7[0x9]; // 0x1a7(0x09)
	struct TArray<struct FSimpleMemberReference> *1c5b1ecf7e; // 0x1b0(0x10)
	struct FMulticastDelegate OnComponentActivated; // 0x1c0(0x10)
	struct FMulticastDelegate OnComponentDeactivated; // 0x1d0(0x10)
	char pad_1E0[0x9]; // 0x1e0(0x09)
	char *6583edce58 : 1; // 0x1e9(0x01)
	char pad_1E9_1 : 7; // 0x1e9(0x01)
	char pad_1EA[0x6]; // 0x1ea(0x06)

	void *b3ab644ab0(); // Function Engine.ActorComponent.*b3ab644ab0 // None // @ game+0x6377894
	void *7fc2785714(); // Function Engine.ActorComponent.*7fc2785714 // None // @ game+0x6373da8
	void OnRep_IsActive(); // Function Engine.ActorComponent.OnRep_IsActive // None // @ game+0x637266c
	void AddTickPrerequisiteActor(); // Function Engine.ActorComponent.AddTickPrerequisiteActor // None // @ game+0x635dcc0
	void Activate(); // Function Engine.ActorComponent.Activate // None // @ game+0xbe8680
	void Deactivate(); // Function Engine.ActorComponent.Deactivate // None // @ game+0x646f3c
	void *7e6bf7eb55(); // Function Engine.ActorComponent.*7e6bf7eb55 // None // @ game+0x637aa80
	void *eda0f1fdef(); // Function Engine.ActorComponent.*eda0f1fdef // None // @ game+0x637cce8
	void IsActive(); // Function Engine.ActorComponent.IsActive // None // @ game+0x636ba20
	void *7af955f165(); // Function Engine.ActorComponent.*7af955f165 // None // @ game+0x6373ed0
	void *b6de83bb83(); // Function Engine.ActorComponent.*b6de83bb83 // None // @ game+0x5e2dd20
	void ReceiveTick(); // Function Engine.ActorComponent.ReceiveTick // None // @ game+0x26a108
	void *d30428cd54(); // Function Engine.ActorComponent.*d30428cd54 // None // @ game+0x637cbc4
	void *ef1420b078(); // Function Engine.ActorComponent.*ef1420b078 // None // @ game+0x6366a94
	bool *cc59ee805b(); // Function Engine.ActorComponent.*cc59ee805b // None // @ game+0x6376c9c
	void *7664b363a1(); // Function Engine.ActorComponent.*7664b363a1 // None // @ game+0xae4624
	void *70313663c3(); // Function Engine.ActorComponent.*70313663c3 // None // @ game+0x63794e0
	void ReceiveBeginPlay(); // Function Engine.ActorComponent.ReceiveBeginPlay // None // @ game+0x26a108
	void *9ffc398f85(); // Function Engine.ActorComponent.*9ffc398f85 // None // @ game+0x635dde8
	void *65f31f10a3(); // Function Engine.ActorComponent.*65f31f10a3 // None // @ game+0x6379448
	void ReceiveEndPlay(); // Function Engine.ActorComponent.ReceiveEndPlay // None // @ game+0x26a108
	void *db9ec7e456(); // Function Engine.ActorComponent.*db9ec7e456 // None // @ game+0x636bae0
	void *baf5caeb25(); // Function Engine.ActorComponent.*baf5caeb25 // None // @ game+0x636bc00
	void *298b7db98d(); // Function Engine.ActorComponent.*298b7db98d // None // @ game+0x636ee28
	struct FName *d920280472(); // Function Engine.ActorComponent.*d920280472 // None // @ game+0x6361a14
};

// Class Engine.Pawn
// Size: 0x458 (Inherited: 0x3f8)
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
	enum class EAutoPossessAI *ae9b8791a2; // 0x409(0x01)
	char pad_40A[0x6]; // 0x40a(0x06)
	struct UClass* AIControllerClass; // 0x410(0x08)
	struct AController* Controller; // 0x418(0x08)
	struct APlayerState* PlayerState; // 0x420(0x08)
	char pad_428[0x8]; // 0x428(0x08)
	struct AController* *f127658d48; // 0x430(0x08)
	uint16 *015f228c35; // 0x438(0x02)
	char pad_43A[0x6]; // 0x43a(0x06)
	struct FVector *0bd692bd5a; // 0x440(0x0c)
	struct FVector *77f948b8f9; // 0x44c(0x0c)

	void ReceivePossessed(); // Function Engine.Pawn.ReceivePossessed // None // @ game+0x26a108
	void AddControllerRollInput(); // Function Engine.Pawn.AddControllerRollInput // None // @ game+0x635c2b8
	void *ceaebf3734(); // Function Engine.Pawn.*ceaebf3734 // None // @ game+0x636c1a4
	void AddControllerPitchInput(); // Function Engine.Pawn.AddControllerPitchInput // None // @ game+0x635c21c
	void *aea6d1fc21(bool bNewValue); // Function Engine.Pawn.*aea6d1fc21 // None // @ game+0x6378924
	void *b5c3a53167(); // Function Engine.Pawn.*b5c3a53167 // None // @ game+0xb6155c
	void *e777ec86c5(); // Function Engine.Pawn.*e777ec86c5 // None // @ game+0x6368f0c
	void *f8ca4cbaf3(); // Function Engine.Pawn.*f8ca4cbaf3 // None // @ game+0x5640c18
	void *e6a1adb893(); // Function Engine.Pawn.*e6a1adb893 // None // @ game+0x560eb48
	void OnRep_Controller(); // Function Engine.Pawn.OnRep_Controller // None // @ game+0x5685858
	float *a90e1eb5c4(); // Function Engine.Pawn.*a90e1eb5c4 // None // @ game+0x635d448
	void *3d498218ec(); // Function Engine.Pawn.*3d498218ec // None // @ game+0x6365980
	void *ff0cdc3443(struct APawn* Pawn); // Function Engine.Pawn.*ff0cdc3443 // None // @ game+0x6369690
	void K2_GetMovementInputVector(); // Function Engine.Pawn.K2_GetMovementInputVector // None // @ game+0x636a320
	bool *3faa338288(); // Function Engine.Pawn.*3faa338288 // None // @ game+0x6371c98
	void *85e6be51d8(); // Function Engine.Pawn.*85e6be51d8 // None // @ game+0x636bc2c
	void AddControllerYawInput(); // Function Engine.Pawn.AddControllerYawInput // None // @ game+0x635c354
	void ReceiveUnpossessed(); // Function Engine.Pawn.ReceiveUnpossessed // None // @ game+0x26a108
	void *a62a63aaf3(); // Function Engine.Pawn.*a62a63aaf3 // None // @ game+0x637df84
	void OnRep_PlayerState(); // Function Engine.Pawn.OnRep_PlayerState // None // @ game+0x97e204
	void *1d88abf6ea(); // Function Engine.Pawn.*1d88abf6ea // None // @ game+0x560a694
	void GetControlRotation(); // Function Engine.Pawn.GetControlRotation // None // @ game+0x6366d4c
	void *cd903f5bc1(); // Function Engine.Pawn.*cd903f5bc1 // None // @ game+0x636a320
	void *5a325d1f01(); // Function Engine.Pawn.*5a325d1f01 // None // @ game+0x63697c8
	void *3b0d0a8384(); // Function Engine.Pawn.*3b0d0a8384 // None // @ game+0x6361e2c
	void *1dde1276de(struct FVector NoiseLocation); // Function Engine.Pawn.*1dde1276de // None // @ game+0x6372a90
	void GetController(); // Function Engine.Pawn.GetController // None // @ game+0x56a149c
};

// Class Engine.DataAsset
// Size: 0x30 (Inherited: 0x28)
struct UDataAsset : UObject {
	struct UClass* *d62375829a; // 0x28(0x08)
};

// Class Engine.SceneComponent
// Size: 0x4c0 (Inherited: 0x1f0)
struct USceneComponent : UActorComponent {
	enum class *1d65b135dd DetailMode; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct TArray<struct USceneComponent*> AttachChildren; // 0x1f8(0x10)
	char pad_208_0 : 1; // 0x208(0x01)
	char bReplicatesAttachmentReference : 1; // 0x208(0x01)
	char bReplicatesAttachment : 1; // 0x208(0x01)
	char *9874f81ad0 : 1; // 0x208(0x01)
	char pad_208_4 : 1; // 0x208(0x01)
	char bAbsoluteLocation : 1; // 0x208(0x01)
	char bAbsoluteRotation : 1; // 0x208(0x01)
	char bAbsoluteScale : 1; // 0x208(0x01)
	char bVisible : 1; // 0x209(0x01)
	char bHiddenInGame : 1; // 0x209(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x209(0x01)
	char *131f3529c6 : 1; // 0x209(0x01)
	char bUseAttachParentBound : 1; // 0x209(0x01)
	char bEnableInsensitiveUpdate : 1; // 0x209(0x01)
	char pad_209_6 : 2; // 0x209(0x01)
	char pad_20A[0x2e]; // 0x20a(0x2e)
	char bAbsoluteTranslation : 1; // 0x238(0x01)
	char pad_238_1 : 7; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	struct APhysicsVolume* PhysicsVolume; // 0x23c(0x08)
	struct FVector *49e84c2fad; // 0x244(0x0c)
	struct USceneComponent* AttachParent; // 0x250(0x08)
	SetProperty *815e178173; // 0x258(0x50)
	char pad_2A8[0x9c]; // 0x2a8(0x9c)
	struct FRotator RelativeRotation; // 0x344(0x0c)
	struct FVector RelativeTranslation; // 0x350(0x0c)
	struct FVector RelativeLocation; // 0x35c(0x0c)
	struct FVector RelativeScale3D; // 0x368(0x0c)
	char pad_374[0x14]; // 0x374(0x14)
	enum class EComponentMobility Mobility; // 0x388(0x01)
	char pad_389[0xf]; // 0x389(0x0f)
	struct FName *055f551900; // 0x398(0x08)
	struct FMulticastDelegate PhysicsVolumeChangedDelegate; // 0x3a0(0x10)
	struct FMulticastDelegate AttachmentChangedDelegate; // 0x3b0(0x10)
	char pad_3C0[0x100]; // 0x3c0(0x100)

	void K2_AddWorldTransform(bool bSweep); // Function Engine.SceneComponent.K2_AddWorldTransform // None // @ game+0x636e08c
	struct FHitResult K2_AddLocalRotation(); // Function Engine.SceneComponent.K2_AddLocalRotation // None // @ game+0x636d540
	bool K2_AddWorldOffset(struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_AddWorldOffset // None // @ game+0x636dcdc
	void *24d4692696(); // Function Engine.SceneComponent.*24d4692696 // None // @ game+0x637a948
	struct FHitResult K2_AddWorldRotation(); // Function Engine.SceneComponent.K2_AddWorldRotation // None // @ game+0x636deb4
	bool K2_SetRelativeLocation(struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetRelativeLocation // None // @ game+0x6370a34
	void DetachFromParent(); // Function Engine.SceneComponent.DetachFromParent // None // @ game+0x63628f0
	struct FHitResult K2_SetWorldRotation(); // Function Engine.SceneComponent.K2_SetWorldRotation // None // @ game+0x637163c
	void *a4c0c6dacf(); // Function Engine.SceneComponent.*a4c0c6dacf // None // @ game+0x6373f94
	void K2_SetWorldTransform(struct FTransform NewTransform, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldTransform // None // @ game+0x6371814
	void *c95aa311e1(); // Function Engine.SceneComponent.*c95aa311e1 // None // @ game+0x637da70
	void *64c6a50e0e(); // Function Engine.SceneComponent.*64c6a50e0e // None // @ game+0x636bab8
	void OnRep_Visibility(); // Function Engine.SceneComponent.OnRep_Visibility // None // @ game+0x6372760
	void K2_AddLocalOffset(bool bSweep); // Function Engine.SceneComponent.K2_AddLocalOffset // None // @ game+0x636d368
	void *1ab06a479c(); // Function Engine.SceneComponent.*1ab06a479c // None // @ game+0x6366aac
	int32 *8ecb931576(); // Function Engine.SceneComponent.*8ecb931576 // None // @ game+0x636658c
	void *e94c620b17(struct FName InSocketName); // Function Engine.SceneComponent.*e94c620b17 // None // @ game+0x6362b24
	void K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld // None // @ game+0x636f52c
	void *71b355cc39(); // Function Engine.SceneComponent.*71b355cc39 // None // @ game+0xb9cb40
	struct FName *c7f3749d3f(); // Function Engine.SceneComponent.*c7f3749d3f // None // @ game+0x636c5a4
	void *47f11c6aa4(); // Function Engine.SceneComponent.*47f11c6aa4 // None // @ game+0x636662c
	void *7b9f3977eb(); // Function Engine.SceneComponent.*7b9f3977eb // None // @ game+0x636f4e8
	struct FHitResult K2_AddLocalTransform(); // Function Engine.SceneComponent.K2_AddLocalTransform // None // @ game+0x636d718
	void *d6237c56a2(struct FRotator NewRotation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.*d6237c56a2 // None // @ game+0x637140c
	void *fdc9f4ce48(); // Function Engine.SceneComponent.*fdc9f4ce48 // None // @ game+0x636b1e0
	void *c983529eeb(); // Function Engine.SceneComponent.*c983529eeb // None // @ game+0x637c34c
	void *fadfce2f5c(struct USceneComponent* InParent); // Function Engine.SceneComponent.*fadfce2f5c // None // @ game+0x637de7c
	void *fe65a776a5(); // Function Engine.SceneComponent.*fe65a776a5 // None // @ game+0x636f464
	bool SetVisibility(); // Function Engine.SceneComponent.SetVisibility // None // @ game+0xb6c2dc
	void *e51a15ac42(); // Function Engine.SceneComponent.*e51a15ac42 // None // @ game+0x637a9e4
	void K2_SetRelativeRotation(bool bSweep); // Function Engine.SceneComponent.K2_SetRelativeRotation // None // @ game+0x6370e30
	void *a0c587c4d6(); // Function Engine.SceneComponent.*a0c587c4d6 // None // @ game+0x63699d4
	enum class *42e1cdcd79 *a17d5e84b8(enum class *42e1cdcd79 ScaleRule); // Function Engine.SceneComponent.*a17d5e84b8 // None // @ game+0x63f7b8
	struct FHitResult *f0cbf81c2a(struct FRotator NewRotation); // Function Engine.SceneComponent.*f0cbf81c2a // None // @ game+0x6370c00
	struct FHitResult K2_AddRelativeLocation(); // Function Engine.SceneComponent.K2_AddRelativeLocation // None // @ game+0x636d944
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren // None // @ game+0x99d020
	void *330134b8c2(); // Function Engine.SceneComponent.*330134b8c2 // None // @ game+0x636a784
	void *cb975ed8ba(); // Function Engine.SceneComponent.*cb975ed8ba // None // @ game+0x6367480
	struct FHitResult K2_SetRelativeTransform(); // Function Engine.SceneComponent.K2_SetRelativeTransform // None // @ game+0x6371008
	void *5b447b62b7(bool bNewAbsoluteRotation); // Function Engine.SceneComponent.*5b447b62b7 // None // @ game+0x6376b58
	struct FName *a27f6d4764(); // Function Engine.SceneComponent.*a27f6d4764 // None // @ game+0x636a94c
	bool *287e49cc7e(); // Function Engine.SceneComponent.*287e49cc7e // None // @ game+0x637a670
	void *6f297235ba(); // Function Engine.SceneComponent.*6f297235ba // None // @ game+0x636a57c
	void IsVisible(); // Function Engine.SceneComponent.IsVisible // None // @ game+0x636c698
	void *bb79d1adbb(); // Function Engine.SceneComponent.*bb79d1adbb // None // @ game+0x636a210
	enum class EAttachLocation K2_AttachTo(bool bWeldSimulatedBodies); // Function Engine.SceneComponent.K2_AttachTo // None // @ game+0x636e5b8
	void K2_SetWorldLocation(struct FVector NewLocation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldLocation // None // @ game+0x6371234
	void *709ad87786(); // Function Engine.SceneComponent.*709ad87786 // None // @ game+0x6365764
	struct FName *716c958ce4(enum class *5515701312 TransformSpace); // Function Engine.SceneComponent.*716c958ce4 // None // @ game+0x636ab6c
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent // None // @ game+0xbd36f4
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName // None // @ game+0xbd36f4
	struct FHitResult K2_AddRelativeRotation(); // Function Engine.SceneComponent.K2_AddRelativeRotation // None // @ game+0x636db10
	void *77cf8156db(struct FName InSocketName); // Function Engine.SceneComponent.*77cf8156db // None // @ game+0x636aab4
	void *c786340f98(); // Function Engine.SceneComponent.*c786340f98 // None // @ game+0x56c1d5c
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform // None // @ game+0xb6f418
	void *8686c19d5c(); // Function Engine.SceneComponent.*8686c19d5c // None // @ game+0x636a7f0
	struct USceneComponent* *e13072354b(struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule ScaleRule); // Function Engine.SceneComponent.*e13072354b // None // @ game+0x636e958
	void ToggleVisibility(); // Function Engine.SceneComponent.ToggleVisibility // None // @ game+0x637ebf4
	struct FName *45081e78dc(); // Function Engine.SceneComponent.*45081e78dc // None // @ game+0x636aa04
	void *4883fee90d(); // Function Engine.SceneComponent.*4883fee90d // None // @ game+0x636f420
};

// Class Engine.PrimitiveComponent
// Size: 0x9f0 (Inherited: 0x4c0)
struct UPrimitiveComponent : USceneComponent {
	char pad_4C0[0x8]; // 0x4c0(0x08)
	float MinDrawDistance; // 0x4c8(0x04)
	float LDMaxDrawDistance; // 0x4cc(0x04)
	float CachedMaxDrawDistance; // 0x4d0(0x04)
	enum class *3c659ab94c *7512e3d028; // 0x4d4(0x01)
	enum class *3c659ab94c *d9fcd9b4bb; // 0x4d5(0x01)
	char pad_4D6[0x2]; // 0x4d6(0x02)
	char pad_4D8_0 : 3; // 0x4d8(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x4d8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4d8(0x01)
	char bMultiBodyOverlap : 1; // 0x4d8(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x4d8(0x01)
	char bTraceComplexOnMove : 1; // 0x4d8(0x01)
	char bDisableForceFromCharacter : 1; // 0x4d9(0x01)
	char bReturnMaterialOnMove : 1; // 0x4d9(0x01)
	char *3e4d34552d : 1; // 0x4d9(0x01)
	char bAllowCullDistanceVolume : 1; // 0x4d9(0x01)
	char bImportantMesh : 1; // 0x4d9(0x01)
	char bOverrideCullingDistances : 1; // 0x4d9(0x01)
	char pad_4D9_6 : 2; // 0x4d9(0x01)
	char pad_4DA[0x2]; // 0x4da(0x02)
	float HLODScreenSize; // 0x4dc(0x04)
	char *2f091bbd0e : 1; // 0x4e0(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x4e0(0x01)
	char bRenderInMainPass : 1; // 0x4e0(0x01)
	char bRenderInMono : 1; // 0x4e0(0x01)
	char bOwnerNoSee : 1; // 0x4e0(0x01)
	char bOnlyOwnerSee : 1; // 0x4e0(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x4e0(0x01)
	char bUseAsOccluder : 1; // 0x4e0(0x01)
	char bForceAsOccluder : 1; // 0x4e1(0x01)
	char bForceOcclusionQuerying : 1; // 0x4e1(0x01)
	char bForceDisableOcclusionQuerying : 1; // 0x4e1(0x01)
	char *afd92d8969 : 1; // 0x4e1(0x01)
	char bForceMipStreaming : 1; // 0x4e1(0x01)
	char *4c581fbba9 : 1; // 0x4e1(0x01)
	char pad_4E1_6 : 1; // 0x4e1(0x01)
	char CastShadow : 1; // 0x4e1(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x4e2(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x4e2(0x01)
	char bCastDynamicShadow : 1; // 0x4e2(0x01)
	char bCastStaticShadow : 1; // 0x4e2(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x4e2(0x01)
	char bSelfShadowOnly : 1; // 0x4e2(0x01)
	char bCastFarShadow : 1; // 0x4e2(0x01)
	char bCastInsetShadow : 1; // 0x4e2(0x01)
	char bCastCinematicShadow : 1; // 0x4e3(0x01)
	char bCastHiddenShadow : 1; // 0x4e3(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e3(0x01)
	char bLightAsIfStatic : 1; // 0x4e3(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x4e3(0x01)
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x4e3(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x4e3(0x01)
	char bIgnoreRadialImpulse : 1; // 0x4e3(0x01)
	char bIgnoreRadialForce : 1; // 0x4e4(0x01)
	char bApplyImpulseOnDamage : 1; // 0x4e4(0x01)
	char bSyncBodySleep : 1; // 0x4e4(0x01)
	char *27b0806be5 : 1; // 0x4e4(0x01)
	char *6f3b773115 : 1; // 0x4e4(0x01)
	char *b11801b90d : 1; // 0x4e4(0x01)
	char bRenderCustomDepth : 1; // 0x4e4(0x01)
	char pad_4E4_7 : 1; // 0x4e4(0x01)
	char pad_4E5_0 : 7; // 0x4e5(0x01)
	char *668636af81 : 1; // 0x4e5(0x01)
	char *b3a3eee86b : 1; // 0x4e6(0x01)
	char *07830a14a6 : 1; // 0x4e6(0x01)
	char pad_4E6_2 : 6; // 0x4e6(0x01)
	char pad_4E7[0x1]; // 0x4e7(0x01)
	enum class EDecalChannel DecalChannel; // 0x4e8(0x01)
	enum class *c0765ad24b IndoorOutdoorMask; // 0x4e9(0x01)
	struct FLightingChannels LightingChannels; // 0x4ea(0x03)
	enum class *d315e71b47 IndirectLightingCacheQuality; // 0x4ed(0x01)
	bool CustomDepthStencilValue; // 0x4ee(0x01)
	enum class *6e131cfc7f CustomDepthStencilWriteMask; // 0x4ef(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x4f0(0x10)
	int32 TranslucencySortPriority; // 0x500(0x04)
	int32 *6862844184; // 0x504(0x04)
	char pad_508[0x4]; // 0x508(0x04)
	float LpvBiasMultiplier; // 0x50c(0x04)
	struct FBodyInstance BodyInstance; // 0x510(0x230)
	char pad_740[0x8]; // 0x740(0x08)
	enum class EHasCustomNavigableGeometry *9a13a32dd1; // 0x748(0x01)
	char pad_749[0x3b]; // 0x749(0x3b)
	float BoundsScale; // 0x784(0x04)
	float *aa675c3c9f; // 0x788(0x04)
	float *8aba3be418; // 0x78c(0x04)
	float *69906a8560; // 0x790(0x04)
	enum class *ed39c8987e CanBeCharacterBase; // 0x794(0x01)
	char pad_795[0x1]; // 0x795(0x01)
	enum class *ed39c8987e CanCharacterStepUpOn; // 0x796(0x01)
	char pad_797[0x1]; // 0x797(0x01)
	struct TArray<struct AActor*> *5559023e99; // 0x798(0x10)
	struct TArray<struct UPrimitiveComponent*> *34f682ee35; // 0x7a8(0x10)
	char pad_7B8[0xb8]; // 0x7b8(0xb8)
	struct FMulticastDelegate OnComponentHit; // 0x870(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x880(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x890(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x8a0(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x8b0(0x10)
	char pad_8C0[0x10]; // 0x8c0(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x8d0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x8e0(0x10)
	struct FMulticastDelegate OnClicked; // 0x8f0(0x10)
	struct FMulticastDelegate OnReleased; // 0x900(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x910(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x920(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x930(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x940(0x10)
	char pad_950[0x28]; // 0x950(0x28)
	struct UPrimitiveComponent* *afbfc200cf; // 0x978(0x08)
	struct UPrimitiveComponent* *c423c7f1c7; // 0x980(0x08)
	struct F*1d83c9bd93 *605bfc3d64; // 0x988(0x58)
	char pad_9E0[0x10]; // 0x9e0(0x10)

	struct FVector AddForceAtLocation(); // Function Engine.PrimitiveComponent.AddForceAtLocation // None // @ game+0x635ca48
	void GetMass(); // Function Engine.PrimitiveComponent.GetMass // None // @ game+0x63690c0
	void *3f4951ae21(); // Function Engine.PrimitiveComponent.*3f4951ae21 // None // @ game+0x637ae1c
	void *aa442ff688(); // Function Engine.PrimitiveComponent.*aa442ff688 // None // @ game+0x636bf24
	enum class *d6dc0510f4 *2acabdc4bc(); // Function Engine.PrimitiveComponent.*2acabdc4bc // None // @ game+0x635d7e8
	void *dfb097147a(); // Function Engine.PrimitiveComponent.*dfb097147a // None // @ game+0x8a8688
	void *1d5b572e97(); // Function Engine.PrimitiveComponent.*1d5b572e97 // None // @ game+0x636f7ec
	struct AActor* *58360a298b(); // Function Engine.PrimitiveComponent.*58360a298b // None // @ game+0x636c2bc
	struct UMaterialInterface* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // None // @ game+0x6362104
	void *155e776c01(enum class ECollisionChannel Channel); // Function Engine.PrimitiveComponent.*155e776c01 // None // @ game+0x6366944
	enum class *d6dc0510f4 *776b623f1e(); // Function Engine.PrimitiveComponent.*776b623f1e // None // @ game+0x635d9bc
	void *401e8be8c9(); // Function Engine.PrimitiveComponent.*401e8be8c9 // None // @ game+0x636f81c
	void *6c17800325(); // Function Engine.PrimitiveComponent.*6c17800325 // None // @ game+0x6378f74
	void *1060cf1432(); // Function Engine.PrimitiveComponent.*1060cf1432 // None // @ game+0x63797a8
	void *733d8ffdab(); // Function Engine.PrimitiveComponent.*733d8ffdab // None // @ game+0x637bb54
	void *c09d067d0f(); // Function Engine.PrimitiveComponent.*c09d067d0f // None // @ game+0x637c3f0
	void *dfc478eaef(); // Function Engine.PrimitiveComponent.*dfc478eaef // None // @ game+0x636b5b4
	void *d70adb1efd(float MassInKg); // Function Engine.PrimitiveComponent.*d70adb1efd // None // @ game+0x637b08c
	struct FVector K2_LineTraceComponent(struct FName BoneName); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // None // @ game+0x636f850
	void *8f296e8ac0(); // Function Engine.PrimitiveComponent.*8f296e8ac0 // None // @ game+0x637b9f8
	void *3579dd87c5(); // Function Engine.PrimitiveComponent.*3579dd87c5 // None // @ game+0x636ba90
	int32 *c513e9cfca(); // Function Engine.PrimitiveComponent.*c513e9cfca // None // @ game+0x6369250
	void CreateAndSetMaterialInstanceDynamic(bool bConcurrent); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // None // @ game+0x6362014
	void SetMassScale(); // Function Engine.PrimitiveComponent.SetMassScale // None // @ game+0x568247c
	int32 *c602cc5bf9(); // Function Engine.PrimitiveComponent.*c602cc5bf9 // None // @ game+0x63691ac
	void *6f5a420568(); // Function Engine.PrimitiveComponent.*6f5a420568 // None // @ game+0x637c518
	void *4179761c58(); // Function Engine.PrimitiveComponent.*4179761c58 // None // @ game+0x635e5f4
	struct UMaterialInterface* SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // None // @ game+0xb512e8
	struct FName GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // None // @ game+0x636a394
	void CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // None // @ game+0x6361f04
	void *c4ebdc3c8f(struct AActor* Actor); // Function Engine.PrimitiveComponent.*c4ebdc3c8f // None // @ game+0x636b698
	struct FName AddTorque(); // Function Engine.PrimitiveComponent.AddTorque // None // @ game+0x635de7c
	void *5b3c874cbe(struct FVector NewAngVel); // Function Engine.PrimitiveComponent.*5b3c874cbe // None // @ game+0x6377390
	void *baff305a0b(); // Function Engine.PrimitiveComponent.*baff305a0b // None // @ game+0x6379008
	void *b24da2aba6(); // Function Engine.PrimitiveComponent.*b24da2aba6 // None // @ game+0x6369a0c
	void *6d15f9d7fc(); // Function Engine.PrimitiveComponent.*6d15f9d7fc // None // @ game+0x635ec44
	struct UPrimitiveComponent* *bba26f131c(); // Function Engine.PrimitiveComponent.*bba26f131c // None // @ game+0x636c35c
	void SetPhysicsLinearVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // None // @ game+0x8ed884
	bool SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // None // @ game+0x637bbe8
	void *10c86d98d5(); // Function Engine.PrimitiveComponent.*10c86d98d5 // None // @ game+0x6369b40
	void SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // None // @ game+0x635c2b8
	void *fc3da87902(); // Function Engine.PrimitiveComponent.*fc3da87902 // None // @ game+0x637b778
	void *1e088aa233(); // Function Engine.PrimitiveComponent.*1e088aa233 // None // @ game+0x637d99c
	struct FName *9d203d4e3a(); // Function Engine.PrimitiveComponent.*9d203d4e3a // None // @ game+0x6368118
	void *7ab8b110bc(); // Function Engine.PrimitiveComponent.*7ab8b110bc // None // @ game+0x6368f8c
	void *cefd2a89e7(); // Function Engine.PrimitiveComponent.*cefd2a89e7 // None // @ game+0x637b1b8
	void *4135b69ecb(); // Function Engine.PrimitiveComponent.*4135b69ecb // None // @ game+0x637c484
	struct FName AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse // None // @ game+0x635c034
	void *065d5e11f8(struct FName BoneName); // Function Engine.PrimitiveComponent.*065d5e11f8 // None // @ game+0x6366468
	void *e06446eb04(); // Function Engine.PrimitiveComponent.*e06446eb04 // None // @ game+0x63739f0
	void *f6986ba874(); // Function Engine.PrimitiveComponent.*f6986ba874 // None // @ game+0x637cf08
	bool *285b57600a(); // Function Engine.PrimitiveComponent.*285b57600a // None // @ game+0x637d1ac
	void *5cdc853a89(); // Function Engine.PrimitiveComponent.*5cdc853a89 // None // @ game+0x6379838
	void SetCollisionObjectType(); // Function Engine.PrimitiveComponent.SetCollisionObjectType // None // @ game+0x6378edc
	struct FVector AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // None // @ game+0x635d0e8
	void *b9e13958df(); // Function Engine.PrimitiveComponent.*b9e13958df // None // @ game+0x63668bc
	void SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // None // @ game+0x6377488
	void *29c20efb0b(); // Function Engine.PrimitiveComponent.*29c20efb0b // None // @ game+0x6365804
	void *056cc90593(); // Function Engine.PrimitiveComponent.*056cc90593 // None // @ game+0x6378a40
	struct FVector SetPhysicsAngularVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // None // @ game+0x8ed79c
	void SetAngularDamping(); // Function Engine.PrimitiveComponent.SetAngularDamping // None // @ game+0x6377620
	struct FName AddImpulse(); // Function Engine.PrimitiveComponent.AddImpulse // None // @ game+0x635cfa8
	enum class ECollisionChannel *58f998cca1(); // Function Engine.PrimitiveComponent.*58f998cca1 // None // @ game+0x63790a0
	void *6ad19621d9(); // Function Engine.PrimitiveComponent.*6ad19621d9 // None // @ game+0x637b810
	void *6721a3eb8a(); // Function Engine.PrimitiveComponent.*6721a3eb8a // None // @ game+0x635ec60
	void *601c402444(); // Function Engine.PrimitiveComponent.*601c402444 // None // @ game+0x637eef4
	void GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // None // @ game+0x6369ee0
	void AddForce(struct FVector force); // Function Engine.PrimitiveComponent.AddForce // None // @ game+0x635c908
	void *1f028ad67d(); // Function Engine.PrimitiveComponent.*1f028ad67d // None // @ game+0x636690c
	struct FName *75116bc348(); // Function Engine.PrimitiveComponent.*75116bc348 // None // @ game+0x6374458
	void *46193842e9(); // Function Engine.PrimitiveComponent.*46193842e9 // None // @ game+0x6361f8c
	void *10f75e50ac(); // Function Engine.PrimitiveComponent.*10f75e50ac // None // @ game+0x63787e8
	void *e3b0f43f9e(struct FVector Point); // Function Engine.PrimitiveComponent.*e3b0f43f9e // None // @ game+0x636a444
	struct FName *36ad2d15e7(); // Function Engine.PrimitiveComponent.*36ad2d15e7 // None // @ game+0x6366760
	void *fec7ca08f4(struct FName BoneName); // Function Engine.PrimitiveComponent.*fec7ca08f4 // None // @ game+0x63690ec
	void *0e38375bb9(); // Function Engine.PrimitiveComponent.*0e38375bb9 // None // @ game+0x636b778
	void *23f39ad152(); // Function Engine.PrimitiveComponent.*23f39ad152 // None // @ game+0x6379ae8
	struct FVector AddForceAtLocationLocal(struct FVector Location); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // None // @ game+0x635cb94
	void CreateDynamicMaterialInstance(int32 ElementIndex); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // None // @ game+0x63621f4
	void *923a62a1b9(); // Function Engine.PrimitiveComponent.*923a62a1b9 // None // @ game+0x6379710
	struct FName GetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // None // @ game+0x8eac50
	void *41428e55af(); // Function Engine.PrimitiveComponent.*41428e55af // None // @ game+0x636f7c0
	void *9f5fbe7730(); // Function Engine.PrimitiveComponent.*9f5fbe7730 // None // @ game+0x6379578
	struct FVector SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // None // @ game+0x6378b6c
	void *95f3208c0a(); // Function Engine.PrimitiveComponent.*95f3208c0a // None // @ game+0x6377588
	void *926dc117b6(); // Function Engine.PrimitiveComponent.*926dc117b6 // None // @ game+0x63668e4
	void *d7c852a7d5(); // Function Engine.PrimitiveComponent.*d7c852a7d5 // None // @ game+0x637240c
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // None // @ game+0x6369ce8
	void *b76664dec1(); // Function Engine.PrimitiveComponent.*b76664dec1 // None // @ game+0x637eedc
	void *a306d03f54(); // Function Engine.PrimitiveComponent.*a306d03f54 // None // @ game+0xb055d8
};

// Class Engine.MeshComponent
// Size: 0xaf0 (Inherited: 0x9f0)
struct UMeshComponent : UPrimitiveComponent {
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x9e8(0x10)
	char pad_A00[0xf0]; // 0xa00(0xf0)

	void *dea9e46c09(); // Function Engine.MeshComponent.*dea9e46c09 // None // @ game+0x636939c
	void *2f56f6caf5(); // Function Engine.MeshComponent.*2f56f6caf5 // None // @ game+0x637d51c
	void *86f42457e0(); // Function Engine.MeshComponent.*86f42457e0 // None // @ game+0x636c0d4
	float *e340f5fc1d(); // Function Engine.MeshComponent.*e340f5fc1d // None // @ game+0x7c4e08
	void *514a111da7(); // Function Engine.MeshComponent.*514a111da7 // None // @ game+0x6369428
	void *28b95d47eb(struct FName MaterialSlotName); // Function Engine.MeshComponent.*28b95d47eb // None // @ game+0x63692f4
};

// Class Engine.StaticMeshComponent
// Size: 0xb90 (Inherited: 0xaf0)
struct UStaticMeshComponent : UMeshComponent {
	int32 ForcedLodModel; // 0xaf0(0x04)
	int32 *66a6cd3343; // 0xaf4(0x04)
	bool bOverrideMinLOD; // 0xaf8(0x01)
	char pad_AF9[0x3]; // 0xaf9(0x03)
	int32 MinLOD; // 0xafc(0x04)
	struct UStaticMesh* StaticMesh; // 0xb00(0x08)
	bool bOverrideWireframeColor; // 0xb08(0x01)
	char pad_B09[0x3]; // 0xb09(0x03)
	struct FColor WireframeColorOverride; // 0xb0c(0x04)
	struct FLinearColor PerInstanceCustomData; // 0xb10(0x10)
	char *a28fc20375 : 1; // 0xb20(0x01)
	char *a6e890a6e8 : 1; // 0xb20(0x01)
	char bDisallowMeshPaintPerInstance : 1; // 0xb20(0x01)
	char *72ad19ace5 : 1; // 0xb20(0x01)
	char bIgnoreInstanceForTextureStreaming : 1; // 0xb20(0x01)
	char bOverrideLightMapRes : 1; // 0xb20(0x01)
	char pad_B20_6 : 2; // 0xb20(0x01)
	char pad_B21[0x3]; // 0xb21(0x03)
	int32 OverriddenLightMapRes; // 0xb24(0x04)
	char bCastDistanceFieldIndirectShadow : 1; // 0xb28(0x01)
	char pad_B28_1 : 7; // 0xb28(0x01)
	char pad_B29[0x3]; // 0xb29(0x03)
	float DistanceFieldIndirectShadowMinVisibility; // 0xb2c(0x04)
	float StreamingDistanceMultiplier; // 0xb30(0x04)
	int32 *0f0f75dabf; // 0xb34(0x04)
	char *9a59516d8b : 1; // 0xb38(0x01)
	char pad_B38_1 : 7; // 0xb38(0x01)
	char pad_B39[0x7]; // 0xb39(0x07)
	struct TArray<struct FGuid> IrrelevantLights; // 0xb40(0x10)
	struct TArray<struct F*e52484916f> *6f651a8a78; // 0xb50(0x10)
	struct TArray<struct F*2680edbad5> *65df47e5bb; // 0xb60(0x10)
	bool *5b1ebb8f11; // 0xb70(0x01)
	char pad_B71[0x3]; // 0xb71(0x03)
	struct F*553842a41b LightmassSettings; // 0xb74(0x18)
	char pad_B8C[0x4]; // 0xb8c(0x04)

	struct UStaticMesh* SetStaticMesh(); // Function Engine.StaticMeshComponent.SetStaticMesh // None // @ game+0x5e3ea00
	struct FVector *34b9302e3c(); // Function Engine.StaticMeshComponent.*34b9302e3c // None // @ game+0x6368fb8
	void OnRep_StaticMesh(); // Function Engine.StaticMeshComponent.OnRep_StaticMesh // None // @ game+0x63726b8
	void *488bd86f9f(); // Function Engine.StaticMeshComponent.*488bd86f9f // None // @ game+0x6379ea8
};

// Class Engine.SkinnedMeshComponent
// Size: 0xc90 (Inherited: 0xaf0)
struct USkinnedMeshComponent : UMeshComponent {
	struct USkeletalMesh* SkeletalMesh; // 0xaf0(0x08)
	struct USkinnedMeshComponent* MasterPoseComponent; // 0xaf8(0x08)
	char pad_B00[0x60]; // 0xb00(0x60)
	char bUseBoundsFromMasterPoseComponent : 1; // 0xb60(0x01)
	char pad_B60_1 : 7; // 0xb60(0x01)
	char pad_B61[0x7]; // 0xb61(0x07)
	struct TArray<struct FBoxSphereBounds> *f30ef9aca0; // 0xb68(0x10)
	char pad_B78[0x20]; // 0xb78(0x20)
	struct UPhysicsAsset* PhysicsAssetOverride; // 0xb98(0x08)
	int32 ForcedLodModel; // 0xba0(0x04)
	int32 MinLodModel; // 0xba4(0x04)
	char pad_BA8[0x10]; // 0xba8(0x10)
	struct TArray<struct F*cbe45bb4a6> LODInfo; // 0xbb8(0x10)
	float StreamingDistanceMultiplier; // 0xbc8(0x04)
	struct FColor WireframeColor; // 0xbcc(0x04)
	char *9e69394ecc : 1; // 0xbd0(0x01)
	char *9903a4c840 : 1; // 0xbd0(0x01)
	char bDisableMorphTarget : 1; // 0xbd0(0x01)
	char *355eef0bc4 : 1; // 0xbd0(0x01)
	char pad_BD0_4 : 4; // 0xbd0(0x01)
	char pad_BD1[0x17]; // 0xbd1(0x17)
	char bPerBoneMotionBlur : 1; // 0xbe8(0x01)
	char bComponentUseFixedSkelBounds : 1; // 0xbe8(0x01)
	char bConsiderAllBodiesForBounds : 1; // 0xbe8(0x01)
	char bSyncAttachParentLOD : 1; // 0xbe8(0x01)
	char pad_BE8_4 : 4; // 0xbe8(0x01)
	char pad_BE9[0x3]; // 0xbe9(0x03)
	enum class EMeshComponentUpdateFlag MeshComponentUpdateFlag; // 0xbec(0x01)
	char pad_BED[0x3]; // 0xbed(0x03)
	char *4589ff7cf8 : 1; // 0xbf0(0x01)
	char *96a8417c7f : 1; // 0xbf0(0x01)
	char *f4e5e3198a : 1; // 0xbf0(0x01)
	char pad_BF0_3 : 5; // 0xbf0(0x01)
	char pad_BF1[0x3]; // 0xbf1(0x03)
	bool *0ca1f88bf0; // 0xbf4(0x01)
	char pad_BF5[0x3]; // 0xbf5(0x03)
	char bCastCapsuleDirectShadow : 1; // 0xbf8(0x01)
	char bCastCapsuleIndirectShadow : 1; // 0xbf8(0x01)
	char pad_BF8_2 : 6; // 0xbf8(0x01)
	char pad_BF9[0x3]; // 0xbf9(0x03)
	char bRenderStatic : 1; // 0xbfc(0x01)
	char pad_BFC_1 : 7; // 0xbfc(0x01)
	char pad_BFD[0x3]; // 0xbfd(0x03)
	float CapsuleIndirectShadowMinVisibility; // 0xc00(0x04)
	char *f4e58c294b : 1; // 0xc04(0x01)
	char pad_C04_1 : 7; // 0xc04(0x01)
	char pad_C05[0xf]; // 0xc05(0x0f)
	struct FBoxSphereBounds *cd78e2e3f1; // 0xc14(0x1c)
	bool *51163366b3; // 0xc30(0x01)
	bool bEnableUpdateRateOptimizations; // 0xc31(0x01)
	bool bDisplayDebugUpdateRateOptimizations; // 0xc32(0x01)
	char pad_C33[0x4e]; // 0xc33(0x4e)
	bool *6ee4d78242; // 0xc81(0x01)
	bool *7c960d48b8; // 0xc82(0x01)
	char pad_C83[0xd]; // 0xc83(0x0d)

	struct FName *6a5f21ad4e(); // Function Engine.SkinnedMeshComponent.*6a5f21ad4e // None // @ game+0x63a502c
	void *3c865e7779(); // Function Engine.SkinnedMeshComponent.*3c865e7779 // None // @ game+0x63d8204
	void *fc7ead4db2(); // Function Engine.SkinnedMeshComponent.*fc7ead4db2 // None // @ game+0x63c93b4
	bool *10d664b446(struct FVector BoneLocation); // Function Engine.SkinnedMeshComponent.*10d664b446 // None // @ game+0x6399740
	void *71a2310595(); // Function Engine.SkinnedMeshComponent.*71a2310595 // None // @ game+0x63c2d84
	void *67471412a8(); // Function Engine.SkinnedMeshComponent.*67471412a8 // None // @ game+0x63c2824
	void *e1f9ca9449(); // Function Engine.SkinnedMeshComponent.*e1f9ca9449 // None // @ game+0x63a29f4
	struct USkeletalMesh* SetSkeletalMesh(); // Function Engine.SkinnedMeshComponent.SetSkeletalMesh // None // @ game+0x63cb7cc
	int32 *2400ce1346(); // Function Engine.SkinnedMeshComponent.*2400ce1346 // None // @ game+0x639ce7c
	void *a0035d9d4e(); // Function Engine.SkinnedMeshComponent.*a0035d9d4e // None // @ game+0x63aac1c
	void GetBoneIndex(); // Function Engine.SkinnedMeshComponent.GetBoneIndex // None // @ game+0x639cbc0
	void *0838ed640a(); // Function Engine.SkinnedMeshComponent.*0838ed640a // None // @ game+0x63cb21c
	struct FRotator *6c2f9d9de6(struct FVector OutPosition); // Function Engine.SkinnedMeshComponent.*6c2f9d9de6 // None // @ game+0x63d7bf8
	void *5ee5688cd0(struct FName ParentBoneName); // Function Engine.SkinnedMeshComponent.*5ee5688cd0 // None // @ game+0x6389764
	void *b6a1e57216(); // Function Engine.SkinnedMeshComponent.*b6a1e57216 // None // @ game+0x63a2670
	void *fd2b1bbf5b(); // Function Engine.SkinnedMeshComponent.*fd2b1bbf5b // None // @ game+0x63c667c
	void *c47c945cda(); // Function Engine.SkinnedMeshComponent.*c47c945cda // None // @ game+0x63c9284
	void *b41c79226e(int32 LODIndex); // Function Engine.SkinnedMeshComponent.*b41c79226e // None // @ game+0x63cead0
	struct FName *c8ca57db8d(); // Function Engine.SkinnedMeshComponent.*c8ca57db8d // None // @ game+0x63a9758
	void SetSkinWeightOverride(int32 LODIndex); // Function Engine.SkinnedMeshComponent.SetSkinWeightOverride // None // @ game+0x63cb940
	void *96c3ec4c09(); // Function Engine.SkinnedMeshComponent.*96c3ec4c09 // None // @ game+0x6390ca0
	struct UPhysicsAsset* *feffa71d19(); // Function Engine.SkinnedMeshComponent.*feffa71d19 // None // @ game+0x63ca2ec
	void *ceffae9960(); // Function Engine.SkinnedMeshComponent.*ceffae9960 // None // @ game+0x6390938
	void *727d19e44f(struct FName BoneName, struct FRotator InRotation); // Function Engine.SkinnedMeshComponent.*727d19e44f // None // @ game+0x63d7fcc
	void *a7e2c33601(); // Function Engine.SkinnedMeshComponent.*a7e2c33601 // None // @ game+0x63c2cd4
};

// Class Engine.SkeletalMeshComponent
// Size: 0x1180 (Inherited: 0xc90)
struct USkeletalMeshComponent : USkinnedMeshComponent {
	struct UAnimBlueprintGeneratedClass* AnimBlueprintGeneratedClass; // 0xc90(0x08)
	struct UClass* AnimClass; // 0xc98(0x08)
	struct UAnimInstance* AnimScriptInstance; // 0xca0(0x08)
	struct TArray<struct UAnimInstance*> *b1a0aa7521; // 0xca8(0x10)
	struct UAnimInstance* *08eabd4801; // 0xcb8(0x08)
	struct F*030036a724 AnimationData; // 0xcc0(0x18)
	char pad_CD8[0x30]; // 0xcd8(0x30)
	struct TArray<struct FTransform> *58c21de2e0; // 0xd08(0x10)
	struct TArray<struct FTransform> *545370af98; // 0xd18(0x10)
	char pad_D28[0x20]; // 0xd28(0x20)
	float GlobalAnimRateScale; // 0xd48(0x04)
	enum class EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0xd4c(0x01)
	enum class *ab2c643b8f PhysicsTransformUpdateMode; // 0xd4d(0x01)
	char pad_D4E[0x1]; // 0xd4e(0x01)
	enum class EAnimationMode AnimationMode; // 0xd4f(0x01)
	char pad_D50[0x4]; // 0xd50(0x04)
	char pad_D54_0 : 1; // 0xd54(0x01)
	char *3383585ca2 : 1; // 0xd54(0x01)
	char pad_D54_2 : 1; // 0xd54(0x01)
	char *f16a7a3dd7 : 1; // 0xd54(0x01)
	char pad_D54_4 : 2; // 0xd54(0x01)
	char bEnablePhysicsOnDedicatedServer : 1; // 0xd54(0x01)
	char bUpdateJointsFromAnimation : 1; // 0xd54(0x01)
	char bDisableClothSimulation : 1; // 0xd55(0x01)
	char pad_D55_1 : 2; // 0xd55(0x01)
	char bCollideWithEnvironment : 1; // 0xd55(0x01)
	char bCollideWithAttachedChildren : 1; // 0xd55(0x01)
	char bLocalSpaceSimulation : 1; // 0xd55(0x01)
	char *be67cfdb15 : 1; // 0xd55(0x01)
	char bResetAfterTeleport : 1; // 0xd55(0x01)
	char pad_D56_0 : 1; // 0xd56(0x01)
	char bNoSkeletonUpdate : 1; // 0xd56(0x01)
	char bPauseAnims : 1; // 0xd56(0x01)
	char *39749c2751 : 1; // 0xd56(0x01)
	char bEnablePerPolyCollision : 1; // 0xd56(0x01)
	char *2eab519db0 : 1; // 0xd56(0x01)
	char *e494fcf5fb : 1; // 0xd56(0x01)
	char *4035845260 : 1; // 0xd56(0x01)
	char *c6d7dbb4f5 : 1; // 0xd57(0x01)
	char *ac6a357b1a : 1; // 0xd57(0x01)
	char *36b974a93b : 1; // 0xd57(0x01)
	char *6821fc8c10 : 1; // 0xd57(0x01)
	char bIncludeComponentLocationIntoBounds : 1; // 0xd57(0x01)
	char *602b32a36f : 1; // 0xd57(0x01)
	char pad_D57_6 : 2; // 0xd57(0x01)
	char *660210df46 : 1; // 0xd58(0x01)
	char pad_D58_1 : 7; // 0xd58(0x01)
	char pad_D59_0 : 2; // 0xd59(0x01)
	char bDefaultLooping : 1; // 0xd59(0x01)
	char bDefaultPlaying : 1; // 0xd59(0x01)
	char pad_D59_4 : 4; // 0xd59(0x01)
	uint16 *2fe5eefb66; // 0xd5a(0x02)
	float ClothBlendWeight; // 0xd5c(0x04)
	struct FVector *a41d195774; // 0xd60(0x0c)
	char pad_D6C[0x4]; // 0xd6c(0x04)
	struct UBodySetup* BodySetup; // 0xd70(0x08)
	float TeleportDistanceThreshold; // 0xd78(0x04)
	float TeleportRotationThreshold; // 0xd7c(0x04)
	struct FVector *b77df095c1; // 0xd80(0x0c)
	char pad_D8C[0x4]; // 0xd8c(0x04)
	struct FMulticastDelegate OnConstraintBroken; // 0xd90(0x10)
	char pad_DA0[0xe0]; // 0xda0(0xe0)
	struct UClass* *b14b3c8b7b; // 0xe80(0x08)
	char pad_E88[0x1e8]; // 0xe88(0x1e8)
	struct UAnimSequence* SequenceToPlay; // 0x1070(0x08)
	struct UAnimationAsset* AnimToPlay; // 0x1078(0x08)
	float DefaultPosition; // 0x1080(0x04)
	float DefaultPlayRate; // 0x1084(0x04)
	uint32 *5f8fe91e99; // 0x1088(0x04)
	float *3993dbc972; // 0x108c(0x04)
	char pad_1090[0xf0]; // 0x1090(0xf0)

	void *a9c661b6a0(); // Function Engine.SkeletalMeshComponent.*a9c661b6a0 // None // @ game+0x63c33a4
	int32 *38a8d94d2a(); // Function Engine.SkeletalMeshComponent.*38a8d94d2a // None // @ game+0x6399d48
	void *d6b31f7555(); // Function Engine.SkeletalMeshComponent.*d6b31f7555 // None // @ game+0x757430
	void *5f9211f1eb(); // Function Engine.SkeletalMeshComponent.*5f9211f1eb // None // @ game+0x639b100
	void *78951d1396(); // Function Engine.SkeletalMeshComponent.*78951d1396 // None // @ game+0x639d4c4
	bool *a81e6d31fe(); // Function Engine.SkeletalMeshComponent.*a81e6d31fe // None // @ game+0x63bf77c
	void *1d127e5a31(); // Function Engine.SkeletalMeshComponent.*1d127e5a31 // None // @ game+0x63bf920
	float *057fda6034(); // Function Engine.SkeletalMeshComponent.*057fda6034 // None // @ game+0x63c9680
	void Stop(); // Function Engine.SkeletalMeshComponent.Stop // None // @ game+0x7574e4
	void *01291de0e1(); // Function Engine.SkeletalMeshComponent.*01291de0e1 // None // @ game+0x63be0d0
	void *07eb4aa7bc(); // Function Engine.SkeletalMeshComponent.*07eb4aa7bc // None // @ game+0x6390888
	void *2862b5ed5a(struct FName ProfileName); // Function Engine.SkeletalMeshComponent.*2862b5ed5a // None // @ game+0x63c3934
	void SetAnimation(); // Function Engine.SkeletalMeshComponent.SetAnimation // None // @ game+0x7583c0
	float *2b1529526f(); // Function Engine.SkeletalMeshComponent.*2b1529526f // None // @ game+0x63b846c
	void *8c3e6ac131(bool bEnableTwistDrive); // Function Engine.SkeletalMeshComponent.*8c3e6ac131 // None // @ game+0x63bfb34
	void *fdb6af384f(); // Function Engine.SkeletalMeshComponent.*fdb6af384f // None // @ game+0x639c464
	void GetPlayRate(); // Function Engine.SkeletalMeshComponent.GetPlayRate // None // @ game+0x63a2c50
	void *78c795bb04(bool bEnableSwingDrive); // Function Engine.SkeletalMeshComponent.*78c795bb04 // None // @ game+0x63bfc78
	void *d19cf19dad(bool bNewSimulate); // Function Engine.SkeletalMeshComponent.*d19cf19dad // None // @ game+0x90db58
	bool *bbd30f0694(); // Function Engine.SkeletalMeshComponent.*bbd30f0694 // None // @ game+0x639cd90
	void *8eccb076f1(bool bNewNotifyRigidBodyCollision); // Function Engine.SkeletalMeshComponent.*8eccb076f1 // None // @ game+0x63c18d8
	void *49a5d89dc7(); // Function Engine.SkeletalMeshComponent.*49a5d89dc7 // None // @ game+0x63aab6c
	void *a95306e281(); // Function Engine.SkeletalMeshComponent.*a95306e281 // None // @ game+0x639b118
	void SetPlayRate(); // Function Engine.SkeletalMeshComponent.SetPlayRate // None // @ game+0x7585fc
	void SetAnimInstanceClass(); // Function Engine.SkeletalMeshComponent.SetAnimInstanceClass // None // @ game+0x63c0b58
	void Play(); // Function Engine.SkeletalMeshComponent.Play // None // @ game+0x7584e8
	void *5b7b02a51f(); // Function Engine.SkeletalMeshComponent.*5b7b02a51f // None // @ game+0x63884b0
	void *12330879fc(); // Function Engine.SkeletalMeshComponent.*12330879fc // None // @ game+0x63d6f40
	bool *a1620df48e(); // Function Engine.SkeletalMeshComponent.*a1620df48e // None // @ game+0x638368c
	void *20c9711831(struct FName InBoneName, float TwistLimitAngle); // Function Engine.SkeletalMeshComponent.*20c9711831 // None // @ game+0x63c00f8
	void *7b5470eac3(); // Function Engine.SkeletalMeshComponent.*7b5470eac3 // None // @ game+0x63ca3d0
	void *eafb4489c9(); // Function Engine.SkeletalMeshComponent.*eafb4489c9 // None // @ game+0x63aacd0
	void *3386d7f324(); // Function Engine.SkeletalMeshComponent.*3386d7f324 // None // @ game+0x63c53a0
	void *370e1608b9(struct FVector HitLocation); // Function Engine.SkeletalMeshComponent.*370e1608b9 // None // @ game+0x638c448
	void *b72e6b1694(); // Function Engine.SkeletalMeshComponent.*b72e6b1694 // None // @ game+0x63bddfc
	void *b1a20c6186(); // Function Engine.SkeletalMeshComponent.*b1a20c6186 // None // @ game+0x639c44c
	struct UAnimationAsset* PlayAnimation(); // Function Engine.SkeletalMeshComponent.PlayAnimation // None // @ game+0x63b8fac
	void *30ca989855(); // Function Engine.SkeletalMeshComponent.*30ca989855 // None // @ game+0x63d8294
	void IsPlaying(); // Function Engine.SkeletalMeshComponent.IsPlaying // None // @ game+0x63ab23c
	struct FName *a1048a9859(); // Function Engine.SkeletalMeshComponent.*a1048a9859 // None // @ game+0x63a2574
	void *23cd46227b(); // Function Engine.SkeletalMeshComponent.*23cd46227b // None // @ game+0x63a9610
	void *e8a9ba9091(); // Function Engine.SkeletalMeshComponent.*e8a9ba9091 // None // @ game+0x63d15c0
	float *cc72975abc(struct FVector ClosestWorldPosition); // Function Engine.SkeletalMeshComponent.*cc72975abc // None // @ game+0x63abd38
	float *4200524a62(float InForceLimit); // Function Engine.SkeletalMeshComponent.*4200524a62 // None // @ game+0x63bf9b4
	void *a61324ada6(bool bEnableGravity); // Function Engine.SkeletalMeshComponent.*a61324ada6 // None // @ game+0x63c4ff0
	void *66eace9a8c(); // Function Engine.SkeletalMeshComponent.*66eace9a8c // None // @ game+0x63a4ff8
	struct FName *114aeda594(); // Function Engine.SkeletalMeshComponent.*114aeda594 // None // @ game+0x63c50dc
	void *20b809a325(); // Function Engine.SkeletalMeshComponent.*20b809a325 // None // @ game+0x63bdd58
	void *a3c4621c5f(struct FVector Impulse, bool bVelChange); // Function Engine.SkeletalMeshComponent.*a3c4621c5f // None // @ game+0x6383820
	float *4403e63617(); // Function Engine.SkeletalMeshComponent.*4403e63617 // None // @ game+0x639d93c
	void *5fb2b74dad(float AddPhysicsBlendWeight); // Function Engine.SkeletalMeshComponent.*5fb2b74dad // None // @ game+0x6382f08
	void *04f817017d(); // Function Engine.SkeletalMeshComponent.*04f817017d // None // @ game+0x63a36c8
	float *a5309d0c43(); // Function Engine.SkeletalMeshComponent.*a5309d0c43 // None // @ game+0xb3e7a4
	void *dcf02b5cb4(); // Function Engine.SkeletalMeshComponent.*dcf02b5cb4 // None // @ game+0x560b07c
	void GetPosition(); // Function Engine.SkeletalMeshComponent.GetPosition // None // @ game+0x63a3384
	void *f0efd7be35(struct FName JointName); // Function Engine.SkeletalMeshComponent.*f0efd7be35 // None // @ game+0x63c3804
	float SetPosition(); // Function Engine.SkeletalMeshComponent.SetPosition // None // @ game+0x63ca9b8
	void *34f2079b29(bool bNewNotifyRigidBodyCollision); // Function Engine.SkeletalMeshComponent.*34f2079b29 // None // @ game+0x63c9b0c
};

// Class Engine.Info
// Size: 0x3f8 (Inherited: 0x3f8)
struct AInfo : AActor {
	struct FMulticastDelegate OnActorEndOverlap; // 0x28(0x10)
	struct FMulticastDelegate OnClicked; // 0x48(0x10)
	int32 *2bc7f7749a; // 0x58(0x04)
	char pad_41C_0 : 3; // 0x41c(0x01)
	char *6a29209afc : 1; // 0x5c(0x01)
	char *6583edce58 : 1; // 0x5d(0x01)
	char bReplicates : 1; // 0x5d(0x01)
	struct FName *332fd811ca; // 0x60(0x08)
	enum class ENetRole RemoteRole; // 0x68(0x01)
	struct AActor* Owner; // 0x70(0x08)
	struct FRepMovement ReplicatedMovement; // 0x78(0x34)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xb0(0x40)
	float InitialLifeSpan; // 0xf4(0x04)
	struct FMulticastDelegate OnInputTouchLeave; // 0xf8(0x10)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x110(0x10)
	struct FGuid DestructibleId; // 0x120(0x10)
	bool bIsDestroyedVersion; // 0x130(0x01)
	bool RemoveFromLevelLOD; // 0x131(0x01)
	struct F*2066290a18 PrimaryActorTick; // 0x138(0x58)
	char bAutoDestroyWhenFinished : 1; // 0x190(0x01)
	char bCanBeDamaged : 1; // 0x190(0x01)
	char *50cd51ed38 : 1; // 0x190(0x01)
	char *e002b42072 : 1; // 0x190(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x190(0x01)
	char *a4c704a3e5 : 1; // 0x190(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x190(0x01)
	char *13aea9b43a : 1; // 0x190(0x01)
	char *4211b886bf : 1; // 0x191(0x01)
	struct AActor* ParentComponentActor; // 0x194(0x08)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1a0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x1b8(0x10)
	float *ae3e81fc86; // 0x1c8(0x04)
	char *97cac516e7 : 1; // 0x1d8(0x01)
	char *cd27b8552b : 1; // 0x1d8(0x01)
	char *8aabd64ff4 : 1; // 0x1d8(0x01)
	char *3cd32b903e : 1; // 0x1d8(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1d9(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1da(0x01)
	float CustomTimeDilation; // 0x1dc(0x04)
	enum class ENetRole Role; // 0x1e1(0x01)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1e8(0x10)
	struct FMulticastDelegate OnTakePointDamage; // 0x200(0x10)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x260(0x10)
	struct TArray<struct AActor*> Children; // 0x270(0x10)
	int32 *2d89f8ef7f; // 0x280(0x04)
	struct FMulticastDelegate OnInputTouchEnter; // 0x288(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x298(0x01)
	struct FMulticastDelegate OnInputTouchBegin; // 0x2a0(0x10)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x2b0(0x10)
	struct USceneComponent* RootComponent; // 0x2c0(0x08)
	enum class *66c1dada81 InputConsumeOption; // 0x2c8(0x01)
	struct FMulticastDelegate OnReleased; // 0x2d0(0x10)
	struct FMulticastDelegate OnActorHit; // 0x2e0(0x10)
	enum class EAutoReceiveInput *8606d93d96; // 0x2f0(0x01)
	struct TArray<struct FName> Layers; // 0x2f8(0x10)
	struct TArray<struct FName> Tags; // 0x308(0x10)
	struct U*63b14265fa* *63b14265fa; // 0x318(0x08)
	float NetUpdateFrequency; // 0x320(0x04)
	uint64 *f99b84bc94; // 0x328(0x08)
	struct UChildActorComponent* *129513d23d; // 0x330(0x08)
	float MinNetUpdateFrequency; // 0x388(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x390(0x10)
	float NetCullDistanceSquared; // 0x3a0(0x04)
	float NetPriority; // 0x3a4(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x3a8(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x3b8(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3c8(0x10)
	struct APawn* Instigator; // 0x3e0(0x08)
	char bHidden : 1; // 0x3e8(0x01)
	char *0854a90e26 : 1; // 0x3e8(0x01)
	char *013332e5c6 : 1; // 0x3e8(0x01)
	char bOnlyRelevantToOwner : 1; // 0x3e8(0x01)
	char bAlwaysRelevant : 1; // 0x3e8(0x01)
	char *9ddfc785f1 : 1; // 0x3e8(0x01)
	char *05594c4443 : 1; // 0x3e8(0x01)
	char *ef19f6b6c9 : 1; // 0x3e8(0x01)
	char *dca9d9a72a : 1; // 0x3e9(0x01)
	char *16d69885c9 : 1; // 0x3e9(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x3e9(0x01)
	char *59968c9633 : 1; // 0x3e9(0x01)
	char *02848ec998 : 1; // 0x3e9(0x01)

	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // None // @ game+0x6365248
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // None // @ game+0x637c668
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // None // @ game+0x636a7dc
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // None // @ game+0x637cc50
	void *82b3653b7b(struct AActor* OtherActor); // Function Engine.Actor.*82b3653b7b // None // @ game+0x636b3e8
	struct AController* ReceiveAnyDamage(float Damage); // Function Engine.Actor.ReceiveAnyDamage // None // @ game+0x26a108
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // None // @ game+0x26a108
	struct FName ActorHasTag(); // Function Engine.Actor.ActorHasTag // None // @ game+0x635bf94
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // None // @ game+0x6365214
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // None // @ game+0x26a108
	enum class EAttachLocation K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // None // @ game+0x636e438
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldOffset // None // @ game+0x636cd8c
	enum class EAttachLocation K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // None // @ game+0x636e2b8
	void HasAuthority(); // Function Engine.Actor.HasAuthority // None // @ game+0x9e1498
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // None // @ game+0x636a060
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // None // @ game+0x6369fa8
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // None // @ game+0x6376d90
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // None // @ game+0x6365898
	void *f77af040ad(); // Function Engine.Actor.*f77af040ad // None // @ game+0x6365634
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // None // @ game+0xbe9a6c
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // None // @ game+0x636ed78
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // None // @ game+0x63650f0
	struct FName *43eab6a44c(); // Function Engine.Actor.*43eab6a44c // None // @ game+0x6368648
	enum class EAttachmentRule *ca2fce53c9(struct AActor* ParentActor, struct FName SocketName); // Function Engine.Actor.*ca2fce53c9 // None // @ game+0x636e738
	void K2_AddActorWorldTransform(struct FTransform DeltaTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldTransform // None // @ game+0x636d13c
	bool K2_SetActorLocation(struct FVector NewLocation); // Function Engine.Actor.K2_SetActorLocation // None // @ game+0x636fe08
	struct FKey *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // None // @ game+0x6368554
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // None // @ game+0x6376e28
	struct UObject* AddComponent(struct FName TemplateName); // Function Engine.Actor.AddComponent // None // @ game+0xa5d3a0
	struct FHitResult K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // None // @ game+0x636cf64
	void GetTransform(); // Function Engine.Actor.GetTransform // None // @ game+0xaacdcc
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // None // @ game+0x636ed90
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // None // @ game+0xb99a34
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // None // @ game+0x6364520
	void GetActorBounds(struct FVector Origin); // Function Engine.Actor.GetActorBounds // None // @ game+0x6364cbc
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // None // @ game+0x6367f78
	float MakeNoise(); // Function Engine.Actor.MakeNoise // None // @ game+0x63720f4
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // None // @ game+0x6365288
	void *a487955527(); // Function Engine.Actor.*a487955527 // None // @ game+0x636f250
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // None // @ game+0x6367524
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // None // @ game+0x26a108
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // None // @ game+0x26a108
	void *76b33f89d4(); // Function Engine.Actor.*76b33f89d4 // None // @ game+0x636ac9c
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // None // @ game+0x26a108
	void DisableInput(); // Function Engine.Actor.DisableInput // None // @ game+0x6362a78
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // None // @ game+0x636ba48
	enum class *42e1cdcd79 *694ac52e11(enum class *42e1cdcd79 LocationRule); // Function Engine.Actor.*694ac52e11 // None // @ game+0x636eee0
	struct UClass* *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // None // @ game+0x63669ec
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // None // @ game+0xb40e14
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // None // @ game+0x637c5d0
	void *7952614099(); // Function Engine.Actor.*7952614099 // None // @ game+0x6365260
	struct FHitResult K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // None // @ game+0x636c988
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // None // @ game+0xb6a404
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // None // @ game+0x26a108
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // None // @ game+0x6364aa8
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // None // @ game+0x6369bb8
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // None // @ game+0x6377260
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // None // @ game+0x6364f98
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // None // @ game+0x26a108
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // None // @ game+0x636f734
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // None // @ game+0x8b5060
	void *8ab522db39(); // Function Engine.Actor.*8ab522db39 // None // @ game+0x63672dc
	void *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // None // @ game+0x6366bd4
	struct FHitResult K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // None // @ game+0x63705d4
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // None // @ game+0x26a108
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // None // @ game+0x6373e3c
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // None // @ game+0x635dd54
	struct FHitResult ReceiveRadialDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceiveRadialDamage // None // @ game+0x26a108
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // None // @ game+0x6364abc
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // None // @ game+0x6368e6c
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // None // @ game+0x26a108
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // None // @ game+0x636af68
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // None // @ game+0x63771cc
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // None // @ game+0x26a108
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // None // @ game+0x26a108
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // None // @ game+0x6369e18
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // None // @ game+0x636c7b0
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // None // @ game+0x636a03c
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // None // @ game+0x6370224
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // None // @ game+0xb44448
	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // None // @ game+0x636ba64
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // None // @ game+0x70f418
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // None // @ game+0x26a108
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // None // @ game+0x635dc2c
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // None // @ game+0x636bafc
	void *679babdbe9(struct FVector DestLocation); // Function Engine.Actor.*679babdbe9 // None // @ game+0x6371a40
	float *77574d4d00(); // Function Engine.Actor.*77574d4d00 // None // @ game+0x637f170
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // None // @ game+0x26a108
	void *2bbda76e95(struct UClass* ComponentClass); // Function Engine.Actor.*2bbda76e95 // None // @ game+0x6366ae4
	void *8ff8fb0472(struct FKey InputAxisKey); // Function Engine.Actor.*8ff8fb0472 // None // @ game+0x6368c64
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // None // @ game+0x636586c
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // None // @ game+0x636f318
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // None // @ game+0x63650bc
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // None // @ game+0x637cb38
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // None // @ game+0x636ffec
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // None // @ game+0x637712c
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // None // @ game+0x637708c
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // None // @ game+0x637ea90
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // None // @ game+0x26a108
	struct FVector *4e14239fe2(); // Function Engine.Actor.*4e14239fe2 // None // @ game+0x6364e8c
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // None // @ game+0x6368f34
	void *6f6713dfba(struct AActor* OtherActor); // Function Engine.Actor.*6f6713dfba // None // @ game+0x6368018
	struct FHitResult K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // None // @ game+0x63703fc
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // None // @ game+0x6365848
	void K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // None // @ game+0x605cd0
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // None // @ game+0x6373d14
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // None // @ game+0x6364e64
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // None // @ game+0x26a108
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // None // @ game+0x26a108
	void *58360a298b(struct AActor* Other); // Function Engine.Actor.*58360a298b // None // @ game+0x636c21c
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // None // @ game+0x63629e4
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // None // @ game+0x636b3b0
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // None // @ game+0x26a108
	bool K2_SetActorTransform(bool bSweep); // Function Engine.Actor.K2_SetActorTransform // None // @ game+0x6370800
	void SetOwner(); // Function Engine.Actor.SetOwner // None // @ game+0x637b964
	void *094169766b(); // Function Engine.Actor.*094169766b // None // @ game+0x6368e84
	void *2a43ddf3b4(struct AActor* OtherActor); // Function Engine.Actor.*2a43ddf3b4 // None // @ game+0x636737c
	enum class EAttachmentRule *e13072354b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*e13072354b // None // @ game+0x63d310
	void *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // None // @ game+0x637dda0
	struct FVector ReceivePointDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceivePointDamage // None // @ game+0x26a108
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // None // @ game+0x26a108
	struct FHitResult K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // None // @ game+0x636cb60
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector NormalImpulse); // Function Engine.Actor.ReceiveHit // None // @ game+0x26a108
	struct UMaterialInterface* *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // None // @ game+0x6372078
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
	struct FText *02f2c38855; // 0x468(0x18)
	char bUseSeamlessTravel : 1; // 0x480(0x01)
	char bStartPlayersAsSpectators : 1; // 0x480(0x01)
	char bPauseable : 1; // 0x480(0x01)
	char pad_480_3 : 5; // 0x480(0x01)
	char pad_481[0x17]; // 0x481(0x17)

	void HandleStartingNewPlayer(); // Function Engine.GameModeBase.HandleStartingNewPlayer // None // @ game+0x64532c
	void InitStartSpot(); // Function Engine.GameModeBase.InitStartSpot // None // @ game+0xc89a60
	void K2_OnRestartPlayer(); // Function Engine.GameModeBase.K2_OnRestartPlayer // None // @ game+0x26a108
	struct AController* SpawnDefaultPawnFor(struct AActor* StartSpot); // Function Engine.GameModeBase.SpawnDefaultPawnFor // None // @ game+0xba1fa4
	void *df82bef3d0(); // Function Engine.GameModeBase.*df82bef3d0 // None // @ game+0x8856d0
	void PlayerCanRestart(); // Function Engine.GameModeBase.PlayerCanRestart // None // @ game+0x64526c
	struct FString FindPlayerStart(); // Function Engine.GameModeBase.FindPlayerStart // None // @ game+0xb58600
	void *49c7068d30(struct FString NewName); // Function Engine.GameModeBase.*49c7068d30 // None // @ game+0x635eabc
	void GetDefaultPawnClassForController(struct AController* InController); // Function Engine.GameModeBase.GetDefaultPawnClassForController // None // @ game+0xbbba00
	void ResetLevel(); // Function Engine.GameModeBase.ResetLevel // None // @ game+0x56a8868
	void K2_OnLogout(); // Function Engine.GameModeBase.K2_OnLogout // None // @ game+0x26a108
	void SpawnDefaultPawnAtTransform(struct FTransform SpawnTransform); // Function Engine.GameModeBase.SpawnDefaultPawnAtTransform // None // @ game+0xbe8ecc
	void *a2a2e5aa70(); // Function Engine.GameModeBase.*a2a2e5aa70 // None // @ game+0x5640c18
	struct APlayerController* K2_OnSwapPlayerControllers(); // Function Engine.GameModeBase.K2_OnSwapPlayerControllers // None // @ game+0x26a108
	void *d170795d09(); // Function Engine.GameModeBase.*d170795d09 // None // @ game+0x6369b18
	void *5e6c791ad6(struct AController* Player); // Function Engine.GameModeBase.*5e6c791ad6 // None // @ game+0x636f134
	void StartPlay(); // Function Engine.GameModeBase.StartPlay // None // @ game+0xaeb4b8
	struct APlayerController* MustSpectate(); // Function Engine.GameModeBase.MustSpectate // None // @ game+0xb90dd0
	struct AController* RestartPlayerAtPlayerStart(); // Function Engine.GameModeBase.RestartPlayerAtPlayerStart // None // @ game+0x63740f0
	void *18dad4e118(); // Function Engine.GameModeBase.*18dad4e118 // None // @ game+0x6369a34
	void ChoosePlayerStart(struct AController* Player); // Function Engine.GameModeBase.ChoosePlayerStart // None // @ game+0xba0a4c
	struct AActor* ShouldReset(); // Function Engine.GameModeBase.ShouldReset // None // @ game+0x6373b8c
	struct AController* RestartPlayerAtTransform(); // Function Engine.GameModeBase.RestartPlayerAtTransform // None // @ game+0x63741d0
	void K2_OnChangeName(struct AController* Other); // Function Engine.GameModeBase.K2_OnChangeName // None // @ game+0x26a108
	void K2_PostLogin(); // Function Engine.GameModeBase.K2_PostLogin // None // @ game+0x26a108
	void RestartPlayer(); // Function Engine.GameModeBase.RestartPlayer // None // @ game+0x637405c
	void CanSpectate(struct APlayerController* Viewer); // Function Engine.GameModeBase.CanSpectate // None // @ game+0x635e6e8
	void InitializeHUDForPlayer(); // Function Engine.GameModeBase.InitializeHUDForPlayer // None // @ game+0xc95560
};

// Class Engine.GameMode
// Size: 0x4d8 (Inherited: 0x498)
struct AGameMode : AGameModeBase {
	struct FName *cad7def02a; // 0x498(0x08)
	char bDelayedStart : 1; // 0x4a0(0x01)
	char pad_4A0_1 : 7; // 0x4a0(0x01)
	char pad_4A1[0x3]; // 0x4a1(0x03)
	int32 NumSpectators; // 0x4a4(0x04)
	int32 NumPlayers; // 0x4a8(0x04)
	int32 NumBots; // 0x4ac(0x04)
	float MinRespawnDelay; // 0x4b0(0x04)
	int32 NumTravellingPlayers; // 0x4b4(0x04)
	struct UClass* *aff3dca9f7; // 0x4b8(0x08)
	struct TArray<struct APlayerState*> *27501ccd21; // 0x4c0(0x10)
	float *67a73490ca; // 0x4d0(0x04)
	bool bHandleDedicatedServerReplays; // 0x4d4(0x01)
	char pad_4D5[0x3]; // 0x4d5(0x03)

	void *d8ff867182(); // Function Engine.GameMode.*d8ff867182 // None // @ game+0x564381c
	void *a5ef978767(); // Function Engine.GameMode.*a5ef978767 // None // @ game+0x56433e0
	void *e72bb40788(); // Function Engine.GameMode.*e72bb40788 // None // @ game+0x636c0ac
	void *93681d758c(); // Function Engine.GameMode.*93681d758c // None // @ game+0x636b61c
	void *82e263a9c2(); // Function Engine.GameMode.*82e263a9c2 // None // @ game+0x6369194
	void ReadyToStartMatch(); // Function Engine.GameMode.ReadyToStartMatch // None // @ game+0xbf36d8
	void SetBandwidthLimit(); // Function Engine.GameMode.SetBandwidthLimit // None // @ game+0x6377e10
	void ReadyToEndMatch(); // Function Engine.GameMode.ReadyToEndMatch // None // @ game+0x95604c
	void *7fb112d056(); // Function Engine.GameMode.*7fb112d056 // None // @ game+0x5617898
	void Say(); // Function Engine.GameMode.Say // None // @ game+0x6374394
	void K2_OnSetMatchState(); // Function Engine.GameMode.K2_OnSetMatchState // None // @ game+0x26a108
	void *713722b23e(); // Function Engine.GameMode.*713722b23e // None // @ game+0x6373fa8
};

// Class Engine.*c5e4cb7a4d
// Size: 0x30 (Inherited: 0x28)
struct U*c5e4cb7a4d : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Engine.*ed75cbc976
// Size: 0x30 (Inherited: 0x30)
struct U*ed75cbc976 : U*c5e4cb7a4d {
};

// Class Engine.*401688bf57
// Size: 0x28 (Inherited: 0x28)
struct U*401688bf57 : UObject {
};

// Class Engine.*498af98d1d
// Size: 0x40 (Inherited: 0x28)
struct U*498af98d1d : UObject {
	char bCausedByWorld : 1; // 0x28(0x01)
	char bScaleMomentumByMass : 1; // 0x28(0x01)
	char bRadialDamageVelChange : 1; // 0x28(0x01)
	char pad_28_3 : 5; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float DamageImpulse; // 0x2c(0x04)
	float DestructibleImpulse; // 0x30(0x04)
	float DestructibleDamageSpreadScale; // 0x34(0x04)
	float DamageFalloff; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.MovementComponent
// Size: 0x240 (Inherited: 0x1f0)
struct UMovementComponent : UActorComponent {
	struct USceneComponent* UpdatedComponent; // 0x1f0(0x08)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0x1f8(0x08)
	char pad_200[0x4]; // 0x200(0x04)
	struct FVector Velocity; // 0x204(0x0c)
	char bConstrainToPlane : 1; // 0x210(0x01)
	char bSnapToPlaneAtStart : 1; // 0x210(0x01)
	char pad_210_2 : 6; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	enum class EPlaneConstraintAxisSetting *5ff5e09fff; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	struct FVector PlaneConstraintNormal; // 0x218(0x0c)
	struct FVector PlaneConstraintOrigin; // 0x224(0x0c)
	char bUpdateOnlyIfRendered : 1; // 0x230(0x01)
	char bAutoUpdateTickRegistration : 1; // 0x230(0x01)
	char bTickBeforeOwner : 1; // 0x230(0x01)
	char bAutoRegisterUpdatedComponent : 1; // 0x230(0x01)
	char pad_230_4 : 4; // 0x230(0x01)
	char pad_231[0xf]; // 0x231(0x0f)

	void *b6c8efbdb0(); // Function Engine.MovementComponent.*b6c8efbdb0 // None // @ game+0x637d118
	struct FVector ConstrainLocationToPlane(); // Function Engine.MovementComponent.ConstrainLocationToPlane // None // @ game+0x6361c64
	void *bfb832781f(); // Function Engine.MovementComponent.*bfb832781f // None // @ game+0x6369538
	void *c31d3003ec(); // Function Engine.MovementComponent.*c31d3003ec // None // @ game+0x636754c
	bool *c4f8250805(struct FVector Delta); // Function Engine.MovementComponent.*c4f8250805 // None // @ game+0x636fbbc
	struct FVector *ff3b5ade2b(); // Function Engine.MovementComponent.*ff3b5ade2b // None // @ game+0x637be48
	void *d1555190f1(); // Function Engine.MovementComponent.*d1555190f1 // None // @ game+0x637bd1c
	void *fab8102e5d(); // Function Engine.MovementComponent.*fab8102e5d // None // @ game+0x637bdb0
	void *94b67ee95b(); // Function Engine.MovementComponent.*94b67ee95b // None // @ game+0x636a5e0
	void *c0ba54ba1b(); // Function Engine.MovementComponent.*c0ba54ba1b // None // @ game+0x636a5b8
	void *01f7b059b5(struct FVector Normal); // Function Engine.MovementComponent.*01f7b059b5 // None // @ game+0x6361d2c
	void K2_GetModifiedMaxSpeed(); // Function Engine.MovementComponent.K2_GetModifiedMaxSpeed // None // @ game+0x636f5ec
	void *5950858757(); // Function Engine.MovementComponent.*5950858757 // None // @ game+0x637df6c
	void *6f297235ba(); // Function Engine.MovementComponent.*6f297235ba // None // @ game+0x636a554
	void *318cdd375a(struct FVector Direction); // Function Engine.MovementComponent.*318cdd375a // None // @ game+0x6361b9c
	void *5acff43dcb(); // Function Engine.MovementComponent.*5acff43dcb // None // @ game+0x637bff8
	void PhysicsVolumeChanged(); // Function Engine.MovementComponent.PhysicsVolumeChanged // None // @ game+0xb61b1c
	void K2_GetMaxSpeedModifier(); // Function Engine.MovementComponent.K2_GetMaxSpeedModifier // None // @ game+0x636f594
	void *1283f915c9(); // Function Engine.MovementComponent.*1283f915c9 // None // @ game+0x637bf54
	void *f4e98dfee9(); // Function Engine.MovementComponent.*f4e98dfee9 // None // @ game+0x636a5a0
	float *b8cd8cd7b7(); // Function Engine.MovementComponent.*b8cd8cd7b7 // None // @ game+0x636be28
	void *9ed3de3e6c(); // Function Engine.MovementComponent.*9ed3de3e6c // None // @ game+0x637e8bc
};

// Class Engine.NavMovementComponent
// Size: 0x270 (Inherited: 0x240)
struct UNavMovementComponent : UMovementComponent {
	struct F*112b6d08d9 NavAgentProps; // 0x238(0x20)
	float *77ddb5b058; // 0x258(0x04)
	char *89266b4845 : 1; // 0x25c(0x01)
	char bUseAccelerationForPaths : 1; // 0x25c(0x01)
	char bUseFixedBrakingDistanceForPaths : 1; // 0x25c(0x01)
	struct F*37b25a6e05 *aee1222c17; // 0x260(0x04)
	char pad_268_3 : 5; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)

	void *732c78efb2(); // Function Engine.NavMovementComponent.*732c78efb2 // None // @ game+0x636bdd0
	void *5edeeddff6(); // Function Engine.NavMovementComponent.*5edeeddff6 // None // @ game+0x636befc
	void *8e52db34a0(); // Function Engine.NavMovementComponent.*8e52db34a0 // None // @ game+0x636c1f4
	void *1361befc6e(); // Function Engine.NavMovementComponent.*1361befc6e // None // @ game+0x636c670
	void IsFalling(); // Function Engine.NavMovementComponent.IsFalling // None // @ game+0x636bed4
	void StopActiveMovement(); // Function Engine.NavMovementComponent.StopActiveMovement // None // @ game+0x637e288
	void *bf14594621(); // Function Engine.NavMovementComponent.*bf14594621 // None // @ game+0x637e8d4
};

// Class Engine.PawnMovementComponent
// Size: 0x280 (Inherited: 0x270)
struct UPawnMovementComponent : UNavMovementComponent {
	struct APawn* *dac5b5e3f6; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)

	void *b4adeff535(); // Function Engine.PawnMovementComponent.*b4adeff535 // None // @ game+0x6368eac
	void K2_GetInputVector(); // Function Engine.PawnMovementComponent.K2_GetInputVector // None // @ game+0x636f560
	void *ceaebf3734(); // Function Engine.PawnMovementComponent.*ceaebf3734 // None // @ game+0x636c1cc
	void *449559473e(); // Function Engine.PawnMovementComponent.*449559473e // None // @ game+0x636a2d8
	void *d72920eaf6(); // Function Engine.PawnMovementComponent.*d72920eaf6 // None // @ game+0x6361df4
	void *9abbf4048c(); // Function Engine.PawnMovementComponent.*9abbf4048c // None // @ game+0x635d234
	void *f8c3127bfa(); // Function Engine.PawnMovementComponent.*f8c3127bfa // None // @ game+0x636a2f0
};

// Class Engine.CharacterMovementComponent
// Size: 0x920 (Inherited: 0x280)
struct UCharacterMovementComponent : UPawnMovementComponent {
	char pad_280[0x8]; // 0x280(0x08)
	struct ACharacter* *9715095276; // 0x288(0x08)
	char bApplyGravityWhileJumping : 1; // 0x290(0x01)
	char pad_290_1 : 7; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float GravityScale; // 0x294(0x04)
	float MaxStepHeight; // 0x298(0x04)
	float JumpZVelocity; // 0x29c(0x04)
	float JumpOffJumpZFactor; // 0x2a0(0x04)
	float *6e4a728753; // 0x2a4(0x04)
	float *5d81580070; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	float *14261b064c; // 0x2b0(0x04)
	float *3b0102ed15; // 0x2b4(0x04)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	enum class EMovementMode MovementMode; // 0x2c0(0x01)
	bool CustomMovementMode; // 0x2c1(0x01)
	char pad_2C2[0x1e]; // 0x2c2(0x1e)
	float GroundFriction; // 0x2e0(0x04)
	float MaxWalkSpeed; // 0x2e4(0x04)
	float MaxWalkSpeedCrouched; // 0x2e8(0x04)
	float MaxSwimSpeed; // 0x2ec(0x04)
	float MaxFlySpeed; // 0x2f0(0x04)
	float MaxCustomMovementSpeed; // 0x2f4(0x04)
	float MaxAcceleration; // 0x2f8(0x04)
	float BrakingFrictionFactor; // 0x2fc(0x04)
	float BrakingFriction; // 0x300(0x04)
	char bUseSeparateBrakingFriction : 1; // 0x304(0x01)
	char pad_304_1 : 7; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	float BrakingDecelerationWalking; // 0x308(0x04)
	float BrakingDecelerationFalling; // 0x30c(0x04)
	float BrakingDecelerationSwimming; // 0x310(0x04)
	float BrakingDecelerationFlying; // 0x314(0x04)
	float AirControl; // 0x318(0x04)
	float AirControlBoostMultiplier; // 0x31c(0x04)
	float AirControlBoostVelocityThreshold; // 0x320(0x04)
	float FallingLateralFriction; // 0x324(0x04)
	float CrouchedHalfHeight; // 0x328(0x04)
	float PronedHalfHeight; // 0x32c(0x04)
	float PronedRadius; // 0x330(0x04)
	float Buoyancy; // 0x334(0x04)
	float PerchRadiusThreshold; // 0x338(0x04)
	float PerchAdditionalHeight; // 0x33c(0x04)
	struct FRotator RotationRate; // 0x340(0x0c)
	char bUseControllerDesiredRotation : 1; // 0x34c(0x01)
	char bOrientRotationToMovement : 1; // 0x34c(0x01)
	char bSweepWhileNavWalking : 1; // 0x34c(0x01)
	char pad_34C_3 : 2; // 0x34c(0x01)
	char *6b80ed3b3f : 1; // 0x34c(0x01)
	char *a5883f41aa : 1; // 0x34c(0x01)
	char bForceMaxAccel : 1; // 0x34c(0x01)
	char bRunPhysicsWithNoController : 1; // 0x34d(0x01)
	char bForceNextFloorCheck : 1; // 0x34d(0x01)
	char *6913829b5c : 1; // 0x34d(0x01)
	char bCanWalkOffLedges : 1; // 0x34d(0x01)
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x34d(0x01)
	char pad_34D_5 : 2; // 0x34d(0x01)
	char *2acc0ba126 : 1; // 0x34d(0x01)
	char *bfdbad290e : 1; // 0x34e(0x01)
	char pad_34E_1 : 7; // 0x34e(0x01)
	char pad_34F[0x1]; // 0x34f(0x01)
	struct USceneComponent* *24362ccfd4; // 0x350(0x08)
	float MaxOutOfWaterStepHeight; // 0x358(0x04)
	float OutofWaterZ; // 0x35c(0x04)
	float Mass; // 0x360(0x04)
	bool bEnablePhysicsInteraction; // 0x364(0x01)
	bool bTouchForceScaledToMass; // 0x365(0x01)
	bool bPushForceScaledToMass; // 0x366(0x01)
	bool bPushForceUsingZOffset; // 0x367(0x01)
	bool bScalePushForceToVelocity; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	float StandingDownwardForceScale; // 0x36c(0x04)
	float InitialPushForceFactor; // 0x370(0x04)
	float PushForceFactor; // 0x374(0x04)
	float PushForcePointZOffsetFactor; // 0x378(0x04)
	float TouchForceFactor; // 0x37c(0x04)
	float MinTouchForce; // 0x380(0x04)
	float MaxTouchForce; // 0x384(0x04)
	float RepulsionForce; // 0x388(0x04)
	char bForceBraking : 1; // 0x38c(0x01)
	char pad_38C_1 : 7; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	float CrouchedSpeedMultiplier; // 0x390(0x04)
	float UpperImpactNormalScale; // 0x394(0x04)
	struct FVector Acceleration; // 0x398(0x0c)
	struct FVector *8b5e33641b; // 0x3a4(0x0c)
	struct FQuat *1a53230ea5; // 0x3b0(0x10)
	struct FVector *d6e0b7821e; // 0x3c0(0x0c)
	float *706c733206; // 0x3cc(0x04)
	float *798fbf4376; // 0x3d0(0x04)
	float *2140231fbc; // 0x3d4(0x04)
	struct FVector *3b23e36cb0; // 0x3d8(0x0c)
	struct FVector *ff6cbe42b6; // 0x3e4(0x0c)
	float *d094d992c4; // 0x3f0(0x04)
	char pad_3F4[0x8]; // 0x3f4(0x08)
	float MaxSimulationTimeStep; // 0x3fc(0x04)
	int32 MaxSimulationIterations; // 0x400(0x04)
	float MaxDepenetrationWithGeometry; // 0x404(0x04)
	float MaxDepenetrationWithGeometryAsProxy; // 0x408(0x04)
	float MaxDepenetrationWithPawn; // 0x40c(0x04)
	float MaxDepenetrationWithPawnAsProxy; // 0x410(0x04)
	float *d96e75a69b; // 0x414(0x04)
	float *328143b81d; // 0x418(0x04)
	float *353663b1d9; // 0x41c(0x04)
	float *4490412dcb; // 0x420(0x04)
	float *4a53713c71; // 0x424(0x04)
	float *dbf6f973a9; // 0x428(0x04)
	float *95402cbdcf; // 0x42c(0x04)
	float *217c092b35; // 0x430(0x04)
	enum class ENetworkSmoothingMode NetworkSmoothingMode; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	float *d489da6ed0; // 0x438(0x04)
	float *c12b5bd00f; // 0x43c(0x04)
	float *b066376fab; // 0x440(0x04)
	float *b24861907a; // 0x444(0x04)
	float LedgeCheckThreshold; // 0x448(0x04)
	float JumpOutOfWaterPitch; // 0x44c(0x04)
	struct F*771b3804ba CurrentFloor; // 0x450(0x98)
	enum class EMovementMode DefaultLandMovementMode; // 0x4e8(0x01)
	enum class EMovementMode DefaultWaterMovementMode; // 0x4e9(0x01)
	enum class EMovementMode *138fe62722; // 0x4ea(0x01)
	char pad_4EB[0x1]; // 0x4eb(0x01)
	char bMaintainHorizontalGroundVelocity : 1; // 0x4ec(0x01)
	char bImpartBaseVelocityX : 1; // 0x4ec(0x01)
	char bImpartBaseVelocityY : 1; // 0x4ec(0x01)
	char bImpartBaseVelocityZ : 1; // 0x4ec(0x01)
	char bImpartBaseAngularVelocity : 1; // 0x4ec(0x01)
	char bJustTeleported : 1; // 0x4ec(0x01)
	char *53d48d06f9 : 1; // 0x4ec(0x01)
	char *971521425c : 1; // 0x4ec(0x01)
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x4ed(0x01)
	char bNotifyApex : 1; // 0x4ed(0x01)
	char *be016c8dd7 : 1; // 0x4ed(0x01)
	char bWantsToCrouch : 1; // 0x4ed(0x01)
	char bCrouchMaintainsBaseLocation : 1; // 0x4ed(0x01)
	char pad_4ED_5 : 3; // 0x4ed(0x01)
	char pad_4EE[0x2]; // 0x4ee(0x02)
	enum class EStanceMode StanceMode; // 0x4f0(0x01)
	enum class EStanceMode WantsToStanceMode; // 0x4f1(0x01)
	char pad_4F2[0x2]; // 0x4f2(0x02)
	char bIgnoreBaseRotation : 1; // 0x4f4(0x01)
	char *ba3af84fa8 : 1; // 0x4f4(0x01)
	char bAlwaysCheckFloor : 1; // 0x4f4(0x01)
	char bUseFlatBaseForFloorChecks : 1; // 0x4f4(0x01)
	char *9f41cc585f : 1; // 0x4f4(0x01)
	char *c4ad66876b : 1; // 0x4f4(0x01)
	char bUseRVOAvoidance : 1; // 0x4f4(0x01)
	char bRequestedMoveUseAcceleration : 1; // 0x4f4(0x01)
	char pad_4F5[0xf]; // 0x4f5(0x0f)
	char *3d670ca35e : 1; // 0x504(0x01)
	char *c226f59fd2 : 1; // 0x504(0x01)
	char *0dbc1fe19f : 1; // 0x504(0x01)
	char pad_504_3 : 2; // 0x504(0x01)
	char bProjectNavMeshWalking : 1; // 0x504(0x01)
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x504(0x01)
	char pad_504_7 : 1; // 0x504(0x01)
	char pad_505[0x13]; // 0x505(0x13)
	float AvoidanceConsiderationRadius; // 0x518(0x04)
	struct FVector *512e308fe4; // 0x51c(0x0c)
	int32 AvoidanceUID; // 0x528(0x04)
	struct F*4c8082789d AvoidanceGroup; // 0x52c(0x04)
	struct F*4c8082789d GroupsToAvoid; // 0x530(0x04)
	struct F*4c8082789d GroupsToIgnore; // 0x534(0x04)
	float AvoidanceWeight; // 0x538(0x04)
	struct FVector *2aeb3bd7b1; // 0x53c(0x0c)
	char pad_548[0xa8]; // 0x548(0xa8)
	float NavMeshProjectionInterval; // 0x5f0(0x04)
	float *c4f2aeded7; // 0x5f4(0x04)
	float NavMeshProjectionInterpSpeed; // 0x5f8(0x04)
	float NavMeshProjectionHeightScaleUp; // 0x5fc(0x04)
	float NavMeshProjectionHeightScaleDown; // 0x600(0x04)
	float NavWalkingFloorDistTolerance; // 0x604(0x04)
	char pad_608[0xb0]; // 0x608(0xb0)
	struct F*d33504fa9e *89cb9e5c44; // 0x6b8(0x58)
	char pad_710[0x10]; // 0x710(0x10)
	float *0330c4ec91; // 0x720(0x04)
	char pad_724[0x4]; // 0x724(0x04)
	struct FRootMotionSourceGroup *0bec0f1727; // 0x728(0x100)
	char pad_828[0x98]; // 0x828(0x98)
	struct F*f882669a6a *8ac2e140c6; // 0x8c0(0x40)
	struct FVector *9aff4f664b; // 0x900(0x0c)
	bool *dbe8d61961; // 0x90c(0x01)
	char pad_90D[0x3]; // 0x90d(0x03)
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x910(0x01)
	char pad_910_1 : 7; // 0x910(0x01)
	char pad_911[0xf]; // 0x911(0x0f)

	void *90a546eabb(); // Function Engine.CharacterMovementComponent.*90a546eabb // None // @ game+0x63680b8
	void *71dafd4d4d(); // Function Engine.CharacterMovementComponent.*71dafd4d4d // None // @ game+0x636f7a8
	void *2753af4362(); // Function Engine.CharacterMovementComponent.*2753af4362 // None // @ game+0x637d904
	void *7f80478723(); // Function Engine.CharacterMovementComponent.*7f80478723 // None // @ game+0x637d86c
	void *90faa9aff7(); // Function Engine.CharacterMovementComponent.*90faa9aff7 // None // @ game+0x636966c
	bool *38cde05eb4(); // Function Engine.CharacterMovementComponent.*38cde05eb4 // None // @ game+0x635e3d4
	void *95acad96b5(); // Function Engine.CharacterMovementComponent.*95acad96b5 // None // @ game+0x636a348
	void *74ec3726b8(); // Function Engine.CharacterMovementComponent.*74ec3726b8 // None // @ game+0x636950c
	void AddForce(); // Function Engine.CharacterMovementComponent.AddForce // None // @ game+0x635c864
	void *b32b5ec1b0(); // Function Engine.CharacterMovementComponent.*b32b5ec1b0 // None // @ game+0x6377ce8
	void *7069f250d4(); // Function Engine.CharacterMovementComponent.*7069f250d4 // None // @ game+0x6366518
	void *015f95d0bb(); // Function Engine.CharacterMovementComponent.*015f95d0bb // None // @ game+0x63694b4
	void *462bbc0ddd(); // Function Engine.CharacterMovementComponent.*462bbc0ddd // None // @ game+0x636f5c0
	void *0c170a562b(); // Function Engine.CharacterMovementComponent.*0c170a562b // None // @ game+0x636b284
	void AddImpulse(struct FVector Impulse); // Function Engine.CharacterMovementComponent.AddImpulse // None // @ game+0x635cea8
	void *db1edcad4b(struct FVector CapsuleLocation); // Function Engine.CharacterMovementComponent.*db1edcad4b // None // @ game+0x636f01c
	void *84929fc112(); // Function Engine.CharacterMovementComponent.*84929fc112 // None // @ game+0x637a4a4
	struct FHitResult *43edff4ae6(); // Function Engine.CharacterMovementComponent.*43edff4ae6 // None // @ game+0x636c6c0
	void *e03b5e7dc5(); // Function Engine.CharacterMovementComponent.*e03b5e7dc5 // None // @ game+0x63694e0
	void *2c03648be5(); // Function Engine.CharacterMovementComponent.*2c03648be5 // None // @ game+0x6377c54
	void *c64386b7f7(); // Function Engine.CharacterMovementComponent.*c64386b7f7 // None // @ game+0x636c1f4
	void *9b005623ac(); // Function Engine.CharacterMovementComponent.*9b005623ac // None // @ game+0x79af04
	void *63889f1173(); // Function Engine.CharacterMovementComponent.*63889f1173 // None // @ game+0x563c538
	void *ee419b5fd8(); // Function Engine.CharacterMovementComponent.*ee419b5fd8 // None // @ game+0x637c218
	void DisableMovement(); // Function Engine.CharacterMovementComponent.DisableMovement // None // @ game+0x6362b0c
	void *60ff66bd47(); // Function Engine.CharacterMovementComponent.*60ff66bd47 // None // @ game+0x637a418
	void *8381acd31f(); // Function Engine.CharacterMovementComponent.*8381acd31f // None // @ game+0x637a2f0
	void *c58989e56b(); // Function Engine.CharacterMovementComponent.*c58989e56b // None // @ game+0x637db10
	void *e8afdd8741(); // Function Engine.CharacterMovementComponent.*e8afdd8741 // None // @ game+0x567fa80
	bool CapsuleTouched(struct AActor* Param1); // Function Engine.CharacterMovementComponent.CapsuleTouched // None // @ game+0x635e7d8
	enum class EMovementMode *0f142f89b9(); // Function Engine.CharacterMovementComponent.*0f142f89b9 // None // @ game+0x637b5d4
	void *8514fb3447(); // Function Engine.CharacterMovementComponent.*8514fb3447 // None // @ game+0x6367188
	void *11603f3271(); // Function Engine.CharacterMovementComponent.*11603f3271 // None // @ game+0x637a37c
	float *4f63486679(); // Function Engine.CharacterMovementComponent.*4f63486679 // None // @ game+0x636eb78
	void *2ff626d6d1(); // Function Engine.CharacterMovementComponent.*2ff626d6d1 // None // @ game+0x63657ec
	void *fb06094432(); // Function Engine.CharacterMovementComponent.*fb06094432 // None // @ game+0x6377d74
};

// Class Engine.BlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintFunctionLibrary : UObject {
};

// Class Engine.StaticMeshActor
// Size: 0x408 (Inherited: 0x3f8)
struct AStaticMeshActor : AActor {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x3f8(0x08)
	bool bStaticMeshReplicateMovement; // 0x400(0x01)
	enum class ENavDataGatheringMode *e2328b2504; // 0x401(0x01)
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
	struct TArray<struct AActor*> *e03555f483; // 0x408(0x10)
	char pad_418[0x8]; // 0x418(0x08)
	struct TArray<struct FName> DebugDisplay; // 0x420(0x10)
	struct TArray<struct FName> ToggledDebugCategories; // 0x430(0x10)
	struct UCanvas* Canvas; // 0x440(0x08)
	struct UCanvas* *62b97b751a; // 0x448(0x08)
	struct TArray<struct F*fae183bc56> *fe8d86efa1; // 0x450(0x10)
	struct UClass* *fb904319b5; // 0x460(0x08)
	struct AActor* *463b4dc366; // 0x468(0x08)
	char pad_470[0x70]; // 0x470(0x70)

	void ReceiveHitBoxBeginCursorOver(); // Function Engine.HUD.ReceiveHitBoxBeginCursorOver // None // @ game+0x26a108
	bool *df4061b0be(); // Function Engine.HUD.*df4061b0be // None // @ game+0x63653ac
	void AddHitBox(struct FVector2D Position, struct FName InName); // Function Engine.HUD.AddHitBox // None // @ game+0x635cce0
	struct FVector Project(); // Function Engine.HUD.Project // None // @ game+0x63737d8
	void ReceiveHitBoxClick(); // Function Engine.HUD.ReceiveHitBoxClick // None // @ game+0x26a108
	void *0246c1a4d4(struct FString Text, float OutHeight); // Function Engine.HUD.*0246c1a4d4 // None // @ game+0x636ad3c
	float *fe035ce755(); // Function Engine.HUD.*fe035ce755 // None // @ game+0x6363260
	void *c23d7d1b95(struct FLinearColor TextColor, float ScreenY, float Scale); // Function Engine.HUD.*c23d7d1b95 // None // @ game+0x6363a24
	void ShowHUD(); // Function Engine.HUD.ShowHUD // None // @ game+0xcbeb68
	struct AActor* *96bc26c00a(); // Function Engine.HUD.*96bc26c00a // None // @ game+0x6373c34
	void *7ae35533f0(float ScreenX, float Scale); // Function Engine.HUD.*7ae35533f0 // None // @ game+0x63641ec
	struct FLinearColor *73cee3e4ca(); // Function Engine.HUD.*73cee3e4ca // None // @ game+0x6362bcc
	void ShowDebugToggleSubCategory(); // Function Engine.HUD.ShowDebugToggleSubCategory // None // @ game+0x637dd10
	void *2693eb47f0(); // Function Engine.HUD.*2693eb47f0 // None // @ game+0x636a018
	void *9947d93eda(); // Function Engine.HUD.*9947d93eda // None // @ game+0x56a0ed4
	void ShowDebugForReticleTargetToggle(); // Function Engine.HUD.ShowDebugForReticleTargetToggle // None // @ game+0x637dc50
	void Deproject(float ScreenX, struct FVector WorldPosition); // Function Engine.HUD.Deproject // None // @ game+0x63624b8
	void ReceiveHitBoxEndCursorOver(); // Function Engine.HUD.ReceiveHitBoxEndCursorOver // None // @ game+0x26a108
	float DrawTexture(float TextureV, float TextureVHeight, enum class EBlendMode BlendMode, bool bScalePosition); // Function Engine.HUD.DrawTexture // None // @ game+0x6363cdc
	int32 ReceiveDrawHUD(); // Function Engine.HUD.ReceiveDrawHUD // None // @ game+0x26a108
	void *f7fdb39fc4(struct FLinearColor RectColor, float ScreenY); // Function Engine.HUD.*f7fdb39fc4 // None // @ game+0x6363848
	void *872a042141(); // Function Engine.HUD.*872a042141 // None // @ game+0x6373a80
	float *54873e95c6(float MaterialV, float MaterialVHeight, bool bScalePosition); // Function Engine.HUD.*54873e95c6 // None // @ game+0x6362df8
	void ReceiveHitBoxRelease(); // Function Engine.HUD.ReceiveHitBoxRelease // None // @ game+0x26a108
	struct FVector2D *40f4edae17(struct FVector2D V2_Pos, struct FVector2D V1_UV, struct FLinearColor V0_Color); // Function Engine.HUD.*40f4edae17 // None // @ game+0x63634d8
	void ShowDebug(); // Function Engine.HUD.ShowDebug // None // @ game+0x637dbbc
	float *c5ab2302bc(struct FVector Param3, struct FColor Param5, bool Param7, struct UFont* Param9); // Function Engine.HUD.*c5ab2302bc // None // @ game+0x635c3f0
};

// Class Engine.Brush
// Size: 0x430 (Inherited: 0x3f8)
struct ABrush : AActor {
	enum class *5e5e5eab6b *0b26d2092e; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	struct FColor BrushColor; // 0x3fc(0x04)
	int32 PolyFlags; // 0x400(0x04)
	char *aea2cb31c1 : 1; // 0x404(0x01)
	char *a1acb90bd3 : 1; // 0x404(0x01)
	char *d80e65bbb7 : 1; // 0x404(0x01)
	char *eac65cc66b : 1; // 0x404(0x01)
	char pad_404_4 : 4; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	struct UModel* Brush; // 0x408(0x08)
	struct UBrushComponent* BrushComponent; // 0x410(0x08)
	char *76c1f76587 : 1; // 0x418(0x01)
	char pad_418_1 : 7; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct TArray<struct F*d4dfcacc3f> *39006b633f; // 0x420(0x10)
};

// Class Engine.Volume
// Size: 0x430 (Inherited: 0x430)
struct AVolume : ABrush {
	enum class *5e5e5eab6b *0b26d2092e; // 0x3f8(0x01)
	struct FColor BrushColor; // 0x3fc(0x04)
	int32 PolyFlags; // 0x400(0x04)
	char *aea2cb31c1 : 1; // 0x404(0x01)
	char *a1acb90bd3 : 1; // 0x404(0x01)
	char *d80e65bbb7 : 1; // 0x404(0x01)
	char *eac65cc66b : 1; // 0x404(0x01)
	struct UModel* Brush; // 0x408(0x08)
	struct UBrushComponent* BrushComponent; // 0x410(0x08)
	char *76c1f76587 : 1; // 0x418(0x01)
	struct TArray<struct F*d4dfcacc3f> *39006b633f; // 0x420(0x10)
};

// Class Engine.AnimNotify
// Size: 0x38 (Inherited: 0x28)
struct UAnimNotify : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Engine.AnimNotify_PlayParticleEffect
// Size: 0x80 (Inherited: 0x38)
struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	struct UParticleSystem* PSTemplate; // 0x38(0x08)
	struct FVector LocationOffset; // 0x40(0x0c)
	struct FRotator RotationOffset; // 0x4c(0x0c)
	char pad_58[0x18]; // 0x58(0x18)
	char Attached : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FName SocketName; // 0x78(0x08)
};

// Class Engine.AnimNotifyState
// Size: 0x30 (Inherited: 0x28)
struct UAnimNotifyState : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Engine.DataTable
// Size: 0x80 (Inherited: 0x28)
struct UDataTable : UObject {
	struct UScriptStruct* *6517b67220; // 0x28(0x08)
	char pad_30[0x50]; // 0x30(0x50)
};

// Class Engine.Character
// Size: 0x860 (Inherited: 0x458)
struct ACharacter : APawn {
	bool *c5a0c89d9e; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct F*c6f03cdc0f *98c683696e; // 0x460(0x48)
	int32 JumpMaxCount; // 0x4a8(0x04)
	int32 JumpCurrentCount; // 0x4ac(0x04)
	struct USkeletalMeshComponent* Mesh; // 0x4b0(0x08)
	struct UCharacterMovementComponent* CharacterMovement; // 0x4b8(0x08)
	struct F*c6f03cdc0f *e9a9c9cc0a; // 0x4c0(0x48)
	struct UCapsuleComponent* ProneCapsuleComponent; // 0x508(0x08)
	bool *6588c92738; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	struct FVector *25042cf667; // 0x514(0x0c)
	float *242f050da7; // 0x520(0x04)
	char pad_524[0xc]; // 0x524(0x0c)
	struct FQuat *f12a07eecd; // 0x530(0x10)
	float CrouchedEyeHeight; // 0x540(0x04)
	char bIsCrouched : 1; // 0x544(0x01)
	char bPressedJump : 1; // 0x544(0x01)
	char *1e345fa424 : 1; // 0x544(0x01)
	char *e8e73f092d : 1; // 0x544(0x01)
	char *69cbbf7dd8 : 1; // 0x544(0x01)
	char *8668c6e0ea : 1; // 0x544(0x01)
	char *148d9ff30a : 1; // 0x544(0x01)
	char *cb3edb2730 : 1; // 0x544(0x01)
	char *053cd11427 : 1; // 0x545(0x01)
	char bWasJumping : 1; // 0x545(0x01)
	char pad_545_2 : 6; // 0x545(0x01)
	char pad_546[0x2]; // 0x546(0x02)
	float JumpKeyHoldTime; // 0x548(0x04)
	float *8bd307ef37; // 0x54c(0x04)
	float JumpMaxHoldTime; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct UCapsuleComponent* CapsuleComponent; // 0x558(0x08)
	struct FMulticastDelegate OnReachedJumpApex; // 0x560(0x10)
	char pad_570[0x10]; // 0x570(0x10)
	struct FMulticastDelegate MovementModeChangedDelegate; // 0x580(0x10)
	struct FMulticastDelegate OnCharacterMovementUpdated; // 0x590(0x10)
	struct FRootMotionSourceGroup *c561841b57; // 0x5a0(0x100)
	struct F*f882669a6a *d1160de8cb; // 0x6a0(0x40)
	struct TArray<struct F*f1a5265894> *bfa8d6a6b0; // 0x6e0(0x10)
	struct F*e60dc8ad15 *4ffa8bec6a; // 0x6f0(0x160)
	char pad_850[0x10]; // 0x850(0x10)

	void OnRep_IsCrouched(); // Function Engine.Character.OnRep_IsCrouched // None // @ game+0x56171e4
	void *11701e6c86(struct FVector_NetQuantize10 Param1); // Function Engine.Character.*11701e6c86 // None // @ game+0x6375f6c
	void *ca8dfc4730(); // Function Engine.Character.*ca8dfc4730 // None // @ game+0x635f67c
	bool K2_OnMovementModeChanged(); // Function Engine.Character.K2_OnMovementModeChanged // None // @ game+0x26a108
	void *99ee38b5a3(); // Function Engine.Character.*99ee38b5a3 // None // @ game+0x63659e0
	void OnLanded(); // Function Engine.Character.OnLanded // None // @ game+0x26a108
	void ClientAckGoodMove(); // Function Engine.Character.ClientAckGoodMove // None // @ game+0x2af464
	struct UPrimitiveComponent* *f8a8a87a99(struct FName Param4, bool Param6); // Function Engine.Character.*f8a8a87a99 // None // @ game+0x636165c
	void OnRep_ReplicatedBasedMovement(); // Function Engine.Character.OnRep_ReplicatedBasedMovement // None // @ game+0x931fbc
	struct UPrimitiveComponent* ServerMove(struct FName Param7); // Function Engine.Character.ServerMove // None // @ game+0x6374864
	void *8df9beeffc(); // Function Engine.Character.*8df9beeffc // None // @ game+0x637c5d0
	float *862039a00c(struct UPrimitiveComponent* Param7, bool Param9); // Function Engine.Character.*862039a00c // None // @ game+0x635f168
	void *6539aa112e(); // Function Engine.Character.*6539aa112e // None // @ game+0x63671b0
	struct FName *07222f33a7(); // Function Engine.Character.*07222f33a7 // None // @ game+0x6372e80
	void Jump(); // Function Engine.Character.Jump // None // @ game+0x636c798
	bool *2bca3b9c1d(float Param0, struct FVector Param2); // Function Engine.Character.*2bca3b9c1d // None // @ game+0x635edd4
	void *82691fa526(); // Function Engine.Character.*82691fa526 // None // @ game+0x637e598
	bool *7f0a1239ad(float Param0, bool Param2); // Function Engine.Character.*7f0a1239ad // None // @ game+0x6375760
	void OnWalkingOffLedge(struct FVector PreviousFloorImpactNormal, struct FVector PreviousLocation); // Function Engine.Character.OnWalkingOffLedge // None // @ game+0x63728b0
	void CanJumpInternal(); // Function Engine.Character.CanJumpInternal // None // @ game+0x635e6c0
	void OnJumped(); // Function Engine.Character.OnJumped // None // @ game+0x6372640
	void OnRep_RootMotion(); // Function Engine.Character.OnRep_RootMotion // None // @ game+0x63726a4
	void CanJump(); // Function Engine.Character.CanJump // None // @ game+0x635e69c
	void *866417e915(); // Function Engine.Character.*866417e915 // None // @ game+0x637ed30
	void IsJumpProvidingForce(); // Function Engine.Character.IsJumpProvidingForce // None // @ game+0x636ba90
	bool *1a3809edda(float Param4, struct FVector_NetQuantize100 Param6, bool Param8, struct UPrimitiveComponent* Param10); // Function Engine.Character.*1a3809edda // None // @ game+0x63751e0
	struct FVector *d3e75881e1(struct UPrimitiveComponent* Param4, bool Param6); // Function Engine.Character.*d3e75881e1 // None // @ game+0x36522c
	struct FVector *48d57a327e(); // Function Engine.Character.*48d57a327e // None // @ game+0x635e2c8
	void *b39a015335(); // Function Engine.Character.*b39a015335 // None // @ game+0x635f664
	void *5b41406dd2(); // Function Engine.Character.*5b41406dd2 // None // @ game+0x6365830
	void *56fb21a6d3(); // Function Engine.Character.*56fb21a6d3 // None // @ game+0x6365a28
	void OnLaunched(struct FVector LaunchVelocity); // Function Engine.Character.OnLaunched // None // @ game+0x26a108
	float K2_OnEndCrouch(); // Function Engine.Character.K2_OnEndCrouch // None // @ game+0x26a108
	void *0bf24fb690(); // Function Engine.Character.*0bf24fb690 // None // @ game+0x636c418
	void *779dfbaabd(); // Function Engine.Character.*779dfbaabd // None // @ game+0x636c43c
	bool *fceda4a8d6(uint32 Param9, struct FName Param11); // Function Engine.Character.*fceda4a8d6 // None // @ game+0x6374c60
	void Crouch(); // Function Engine.Character.Crouch // None // @ game+0x63623d4
	void K2_UpdateCustomMovement(); // Function Engine.Character.K2_UpdateCustomMovement // None // @ game+0x26a108
	void *729216e5f2(); // Function Engine.Character.*729216e5f2 // None // @ game+0x55bbedc
	void *7adff78f36(); // Function Engine.Character.*7adff78f36 // None // @ game+0x637e88c
	bool *82e7d06301(struct FVector_NetQuantize10 Param1, bool Param3); // Function Engine.Character.*82e7d06301 // None // @ game+0x6375c28
	bool LaunchCharacter(); // Function Engine.Character.LaunchCharacter // None // @ game+0x6371b54
	void K2_OnStartCrouch(); // Function Engine.Character.K2_OnStartCrouch // None // @ game+0x26a108
};

// Class Engine.Controller
// Size: 0x478 (Inherited: 0x3f8)
struct AController : AActor {
	char pad_3F8[0x18]; // 0x3f8(0x18)
	struct USceneComponent* TransformComponent; // 0x410(0x08)
	char pad_418[0x8]; // 0x418(0x08)
	struct APawn* Pawn; // 0x420(0x08)
	struct ACharacter* Character; // 0x428(0x08)
	char pad_430[0xc]; // 0x430(0x0c)
	char *a05757ae10 : 1; // 0x43c(0x01)
	char *68b329ef67 : 1; // 0x43c(0x01)
	char pad_43C_2 : 6; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	struct FName StateName; // 0x440(0x08)
	char pad_448[0x4]; // 0x448(0x04)
	struct FRotator *e40e8dabb2; // 0x44c(0x0c)
	char pad_458[0x8]; // 0x458(0x08)
	struct APlayerState* PlayerState; // 0x460(0x08)
	struct FMulticastDelegate OnInstigatedAnyDamage; // 0x468(0x10)

	void *d35e8bc247(); // Function Engine.Controller.*d35e8bc247 // None // @ game+0x636b488
	void *6e6db3fd99(); // Function Engine.Controller.*6e6db3fd99 // None // @ game+0x636bf24
	void GetControlRotation(); // Function Engine.Controller.GetControlRotation // None // @ game+0x6366d14
	void *36e4787827(); // Function Engine.Controller.*36e4787827 // None // @ game+0x5641890
	void OnRep_PlayerState(); // Function Engine.Controller.OnRep_PlayerState // None // @ game+0x55aad54
	void *1e35afc686(); // Function Engine.Controller.*1e35afc686 // None // @ game+0x635ea2c
	void *27250128fa(); // Function Engine.Controller.*27250128fa // None // @ game+0x636c3fc
	void *f2a72b13b5(); // Function Engine.Controller.*f2a72b13b5 // None // @ game+0x63672a4
	void K2_GetPawn(); // Function Engine.Controller.K2_GetPawn // None // @ game+0x636f618
	void *19175e6cf7(); // Function Engine.Controller.*19175e6cf7 // None // @ game+0x6373f64
	struct FRotator *15f0d36de2(); // Function Engine.Controller.*15f0d36de2 // None // @ game+0xba2660
	void ReceiveInstigatedAnyDamage(struct U*498af98d1d* DamageType); // Function Engine.Controller.ReceiveInstigatedAnyDamage // None // @ game+0x26a108
	void *ceaebf3734(); // Function Engine.Controller.*ceaebf3734 // None // @ game+0x636c17c
	void *ee8f3b4c63(); // Function Engine.Controller.*ee8f3b4c63 // None // @ game+0x637a764
	void *ed16c719d1(); // Function Engine.Controller.*ed16c719d1 // None // @ game+0x6360a8c
	void *8a22f11f09(struct FVector ViewPoint); // Function Engine.Controller.*8a22f11f09 // None // @ game+0x6371dd8
	void StopMovement(); // Function Engine.Controller.StopMovement // None // @ game+0x637e8a4
	void *bd544094f0(); // Function Engine.Controller.*bd544094f0 // None // @ game+0x636c068
	void *128814cef7(); // Function Engine.Controller.*128814cef7 // None // @ game+0x56039b0
	void Possess(); // Function Engine.Controller.Possess // None // @ game+0x55f4888
	void *70f7882012(); // Function Engine.Controller.*70f7882012 // None // @ game+0x636c040
	void *205665ad55(); // Function Engine.Controller.*205665ad55 // None // @ game+0x6379610
	void *a590a631c1(); // Function Engine.Controller.*a590a631c1 // None // @ game+0x637edc8
	void *c9e2d88f05(); // Function Engine.Controller.*c9e2d88f05 // None // @ game+0x6373f7c
	void OnRep_Pawn(); // Function Engine.Controller.OnRep_Pawn // None // @ game+0x2e86e0
};

// Class Engine.SpringArmComponent
// Size: 0x550 (Inherited: 0x4c0)
struct USpringArmComponent : USceneComponent {
	float TargetArmLength; // 0x4c0(0x04)
	struct FVector SocketOffset; // 0x4c4(0x0c)
	struct FVector TargetOffset; // 0x4d0(0x0c)
	float ProbeSize; // 0x4dc(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	char bDoCollisionTest : 1; // 0x4e4(0x01)
	char bUsePawnControlRotation : 1; // 0x4e4(0x01)
	char bInheritPitch : 1; // 0x4e4(0x01)
	char bInheritYaw : 1; // 0x4e4(0x01)
	char bInheritRoll : 1; // 0x4e4(0x01)
	char bLockPitchLag : 1; // 0x4e4(0x01)
	char bLockYawLag : 1; // 0x4e4(0x01)
	char bLockRollLag : 1; // 0x4e4(0x01)
	char bEnableCameraLag : 1; // 0x4e5(0x01)
	char bEnableCameraRotationLag : 1; // 0x4e5(0x01)
	char bUseCameraLagSubstepping : 1; // 0x4e5(0x01)
	char bDrawDebugLagMarkers : 1; // 0x4e5(0x01)
	char pad_4E5_4 : 4; // 0x4e5(0x01)
	char pad_4E6[0x2]; // 0x4e6(0x02)
	float CameraLagSpeed; // 0x4e8(0x04)
	float CameraRotationLagSpeed; // 0x4ec(0x04)
	float CameraLagMaxTimeStep; // 0x4f0(0x04)
	float CameraLagMaxDistance; // 0x4f4(0x04)
	char pad_4F8[0x58]; // 0x4f8(0x58)
};

// Class Engine.PlayerController
// Size: 0x7b0 (Inherited: 0x478)
struct APlayerController : AController {
	struct UPlayer* Player; // 0x478(0x08)
	char pad_480[0x8]; // 0x480(0x08)
	struct APawn* *52577c9cf3; // 0x488(0x08)
	struct U*bf68adb116* *2118536042; // 0x490(0x08)
	char pad_498[0x8]; // 0x498(0x08)
	struct AHUD* *0174a95ec0; // 0x4a0(0x08)
	struct APlayerCameraManager* PlayerCameraManager; // 0x4a8(0x08)
	struct UClass* PlayerCameraManagerClass; // 0x4b0(0x08)
	bool *a3e4cbf23c; // 0x4b8(0x01)
	char pad_4B9[0x3]; // 0x4b9(0x03)
	struct FRotator TargetViewRotation; // 0x4bc(0x0c)
	char pad_4C8[0xc]; // 0x4c8(0x0c)
	float SmoothTargetViewRotationSpeed; // 0x4d4(0x04)
	struct TArray<struct AActor*> *96a0afe110; // 0x4d8(0x10)
	char pad_4E8[0x4]; // 0x4e8(0x04)
	float *744175bbfd; // 0x4ec(0x04)
	struct FVector *91545f0f7d; // 0x4f0(0x0c)
	struct FRotator *1aa871ab47; // 0x4fc(0x0c)
	int32 *c1e8e27c17; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct UCheatManager* CheatManager; // 0x510(0x08)
	struct UClass* CheatClass; // 0x518(0x08)
	struct UPlayerInput* PlayerInput; // 0x520(0x08)
	struct TArray<struct F*846c4d8d15> *00b46b06f5; // 0x528(0x10)
	char pad_538[0x90]; // 0x538(0x90)
	char pad_5C8_0 : 3; // 0x5c8(0x01)
	char bPlayerIsWaiting : 1; // 0x5c8(0x01)
	char pad_5C8_4 : 4; // 0x5c8(0x01)
	char pad_5C9[0x3]; // 0x5c9(0x03)
	bool *de61ed25a1; // 0x5cc(0x01)
	char pad_5CD[0x3b]; // 0x5cd(0x3b)
	struct UNetConnection* *4d8dd0dd7c; // 0x608(0x08)
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
	struct U*63b14265fa* *a84aed1ac2; // 0x6d0(0x08)
	char pad_6D8_0 : 3; // 0x6d8(0x01)
	char bShouldPerformFullTickWhenPaused : 1; // 0x6d8(0x01)
	char pad_6D8_4 : 4; // 0x6d8(0x01)
	char pad_6D9[0x17]; // 0x6d9(0x17)
	struct UTouchInterface* *353d824492; // 0x6f0(0x08)
	char pad_6F8[0x40]; // 0x6f8(0x40)
	struct ASpectatorPawn* SpectatorPawn; // 0x738(0x08)
	struct FVector SpawnLocation; // 0x740(0x0c)
	char pad_74C[0x4]; // 0x74c(0x04)
	bool *66411eec05; // 0x750(0x01)
	char pad_751[0x1]; // 0x751(0x01)
	uint16 *3d54acd8a3; // 0x752(0x02)
	uint16 *e5470d9a99; // 0x754(0x02)
	char pad_756[0x2]; // 0x756(0x02)
	struct AActor* *2f9c762523; // 0x758(0x08)
	struct AActor* *dd387e3bdd; // 0x760(0x08)
	char pad_768[0x48]; // 0x768(0x48)

	void *9414589630(); // Function Engine.PlayerController.*9414589630 // None // @ game+0x635fa88
	void *234979df54(struct AActor* Param0); // Function Engine.PlayerController.*234979df54 // None // @ game+0x9a3a7c
	void *5b13f1daeb(); // Function Engine.PlayerController.*5b13f1daeb // None // @ game+0x63686f0
	struct UForceFeedbackEffect* *d53e3d94e0(); // Function Engine.PlayerController.*d53e3d94e0 // None // @ game+0x6360e3c
	struct UClass* *bee6588995(); // Function Engine.PlayerController.*bee6588995 // None // @ game+0x6360d58
	enum class EDynamicForceFeedbackAction *27660cb1ad(float Intensity, bool bAffectsLeftLarge, bool bAffectsRightLarge); // Function Engine.PlayerController.*27660cb1ad // None // @ game+0x6373348
	void *138bf4a368(); // Function Engine.PlayerController.*138bf4a368 // None // @ game+0x6374818
	struct AActor* *808761b431(float Param1); // Function Engine.PlayerController.*808761b431 // None // @ game+0x63602b0
	struct FHitResult *58ac560ffc(); // Function Engine.PlayerController.*58ac560ffc // None // @ game+0x6367d70
	void *207d75612e(); // Function Engine.PlayerController.*207d75612e // None // @ game+0xcbc53c
	void *82afa3a7b9(); // Function Engine.PlayerController.*82afa3a7b9 // None // @ game+0xbcf9ec
	enum class ECameraAnimPlaySpace *5b0dec685d(struct UCameraAnim* AnimToPlay, float Rate); // Function Engine.PlayerController.*5b0dec685d // None // @ game+0x635fba4
	void *b6936626e5(); // Function Engine.PlayerController.*b6936626e5 // None // @ game+0x63765cc
	void ConsoleKey(); // Function Engine.PlayerController.ConsoleKey // None // @ game+0x6361ab4
	void EnableDLSS(); // Function Engine.PlayerController.EnableDLSS // None // @ game+0x63643c0
	bool *80ddefce3e(); // Function Engine.PlayerController.*80ddefce3e // None // @ game+0x642e10
	void *0ef4224a1c(); // Function Engine.PlayerController.*0ef4224a1c // None // @ game+0x63689ac
	void *f403e28121(float LocationX); // Function Engine.PlayerController.*f403e28121 // None // @ game+0x6368ab0
	void *58d19cd040(); // Function Engine.PlayerController.*58d19cd040 // None // @ game+0x6379684
	void *f2732fc920(); // Function Engine.PlayerController.*f2732fc920 // None // @ game+0x635f6c4
	void *b9be4bfa5c(); // Function Engine.PlayerController.*b9be4bfa5c // None // @ game+0x6360774
	void *1b9bad8269(struct FString Param0, bool Param2); // Function Engine.PlayerController.*1b9bad8269 // None // @ game+0x63610d8
	void OnRep_TargetViewRotation(); // Function Engine.PlayerController.OnRep_TargetViewRotation // None // @ game+0x5617664
	float *fbc51829ff(); // Function Engine.PlayerController.*fbc51829ff // None // @ game+0x635fff4
	void *2f8889f3a5(struct UMaterialInterface* Param0); // Function Engine.PlayerController.*2f8889f3a5 // None // @ game+0x6360964
	bool *b56aa098d6(); // Function Engine.PlayerController.*b56aa098d6 // None // @ game+0xaf56cc
	void SetName(); // Function Engine.PlayerController.SetName // None // @ game+0x637b6b4
	void *3fc73b6f13(); // Function Engine.PlayerController.*3fc73b6f13 // None // @ game+0x744a5c
	void *088499e4d0(); // Function Engine.PlayerController.*088499e4d0 // None // @ game+0xba976c
	void *eeb30ba19c(); // Function Engine.PlayerController.*eeb30ba19c // None // @ game+0x6372818
	bool *dd4c51e1e3(); // Function Engine.PlayerController.*dd4c51e1e3 // None // @ game+0xa8ec90
	void *2d910e8d72(); // Function Engine.PlayerController.*2d910e8d72 // None // @ game+0x635f888
	void ServerUpdateLevelVisibility(); // Function Engine.PlayerController.ServerUpdateLevelVisibility // None // @ game+0xac30f4
	void *2918ec2068(); // Function Engine.PlayerController.*2918ec2068 // None // @ game+0x6360c30
	void SwitchLevel(); // Function Engine.PlayerController.SwitchLevel // None // @ game+0x637e9cc
	void *d916e2a943(struct FString Param0); // Function Engine.PlayerController.*d916e2a943 // None // @ game+0x635f920
	struct FHitResult *2c45b56710(); // Function Engine.PlayerController.*2c45b56710 // None // @ game+0x6367bc0
	void *34a03dd82e(); // Function Engine.PlayerController.*34a03dd82e // None // @ game+0x637632c
	void DecDISPSharpness(); // Function Engine.PlayerController.DecDISPSharpness // None // @ game+0x63624a0
	void *f2ad11dc1b(struct AActor* Param0); // Function Engine.PlayerController.*f2ad11dc1b // None // @ game+0x2ed794
	void EnableTAA(); // Function Engine.PlayerController.EnableTAA // None // @ game+0x63645b4
	void *c5ab1bf288(); // Function Engine.PlayerController.*c5ab1bf288 // None // @ game+0x6361940
	void *f01c6ad62c(); // Function Engine.PlayerController.*f01c6ad62c // None // @ game+0x635f744
	void *60e8fd4016(); // Function Engine.PlayerController.*60e8fd4016 // None // @ game+0x6376858
	void *9806f2220c(); // Function Engine.PlayerController.*9806f2220c // None // @ game+0x6376580
	void *2e287bf09c(); // Function Engine.PlayerController.*2e287bf09c // None // @ game+0x637e7f4
	void EnableCheats(); // Function Engine.PlayerController.EnableCheats // None // @ game+0x5644cb0
	void *2a9d12a666(); // Function Engine.PlayerController.*2a9d12a666 // None // @ game+0x6360cc4
	void *8cada05a90(bool Param1); // Function Engine.PlayerController.*8cada05a90 // None // @ game+0x6360178
	bool *0fc967239a(); // Function Engine.PlayerController.*0fc967239a // None // @ game+0x6373898
	void *c2427940d5(); // Function Engine.PlayerController.*c2427940d5 // None // @ game+0x63764c0
	void *d884ceb98a(); // Function Engine.PlayerController.*d884ceb98a // None // @ game+0x6376a34
	void *c693ef733b(struct FVector Param0); // Function Engine.PlayerController.*c693ef733b // None // @ game+0x635ec90
	void *4d701bd8a2(); // Function Engine.PlayerController.*4d701bd8a2 // None // @ game+0x6361484
	void *1d880e774d(); // Function Engine.PlayerController.*1d880e774d // None // @ game+0x635f64c
	void *498dad03e0(); // Function Engine.PlayerController.*498dad03e0 // None // @ game+0x63615a0
	void FOV(); // Function Engine.PlayerController.FOV // None // @ game+0x63645e0
	struct FKey *9fe7d18e40(); // Function Engine.PlayerController.*9fe7d18e40 // None // @ game+0x63681d0
	struct FVector_NetQuantize ServerUpdateCamera(); // Function Engine.PlayerController.ServerUpdateCamera // None // @ game+0x637672c
	void *d98ebc4243(); // Function Engine.PlayerController.*d98ebc4243 // None // @ game+0x635f75c
	struct FHitResult *3347c2ead1(); // Function Engine.PlayerController.*3347c2ead1 // None // @ game+0x6367858
	void *a7b14ec9b0(); // Function Engine.PlayerController.*a7b14ec9b0 // None // @ game+0x635f694
	void *d36fe357cf(struct AActor* NewViewTarget, enum class *5d3636c297 BlendFunc); // Function Engine.PlayerController.*d36fe357cf // None // @ game+0x637d60c
	void *d488eaf060(); // Function Engine.PlayerController.*d488eaf060 // None // @ game+0x56a8d24
	void RestartLevel(); // Function Engine.PlayerController.RestartLevel // None // @ game+0x56198f8
	float *6da664389f(); // Function Engine.PlayerController.*6da664389f // None // @ game+0x6369564
	void *9d04a2a54b(struct FString Param0, bool Param2); // Function Engine.PlayerController.*9d04a2a54b // None // @ game+0x63612ac
	struct FHitResult *6f13f17807(); // Function Engine.PlayerController.*6f13f17807 // None // @ game+0x6367578
	enum class *b5888c2b03 *2c95dc8fa1(float StickX); // Function Engine.PlayerController.*2c95dc8fa1 // None // @ game+0x636840c
	float *693b11e6e8(struct U*3e3af884c4* HapticEffect); // Function Engine.PlayerController.*693b11e6e8 // None // @ game+0x6373654
	void *125ef13e4f(); // Function Engine.PlayerController.*125ef13e4f // None // @ game+0x6374630
	void StartFire(); // Function Engine.PlayerController.StartFire // None // @ game+0x637e1c8
	void *1cd2062287(struct FVector Location); // Function Engine.PlayerController.*1cd2062287 // None // @ game+0x637774c
	void *83f70de997(); // Function Engine.PlayerController.*83f70de997 // None // @ game+0x63746e4
	void ClientRetryClientRestart(); // Function Engine.PlayerController.ClientRetryClientRestart // None // @ game+0x56a4084
	void Pause(); // Function Engine.PlayerController.Pause // None // @ game+0x6372a78
	void *8ad4a54cf6(enum class ETouchIndex FingerIndex, bool bTraceComplex); // Function Engine.PlayerController.*8ad4a54cf6 // None // @ game+0x6367a10
	void *9674400037(); // Function Engine.PlayerController.*9674400037 // None // @ game+0x636ac84
	bool *930cb558f2(bool bAffectsMovement); // Function Engine.PlayerController.*930cb558f2 // None // @ game+0x6378cec
	void *b41250e3ae(); // Function Engine.PlayerController.*b41250e3ae // None // @ game+0x6376378
	void *a31819daef(); // Function Engine.PlayerController.*a31819daef // None // @ game+0x635ec20
	void IncDISPSharpness(); // Function Engine.PlayerController.IncDISPSharpness // None // @ game+0x636b858
	void LocalTravel(); // Function Engine.PlayerController.LocalTravel // None // @ game+0x6371f1c
	void *c11f968a6d(); // Function Engine.PlayerController.*c11f968a6d // None // @ game+0xcc559c
	void *a235b1fcfa(struct UClass* Param0, struct APlayerState* Param2); // Function Engine.PlayerController.*a235b1fcfa // None // @ game+0x636043c
	void AddYawInput(); // Function Engine.PlayerController.AddYawInput // None // @ game+0x635dfb8
	void *90c95e2107(); // Function Engine.PlayerController.*90c95e2107 // None // @ game+0xcc5b70
	void *7fa4dd7244(struct FString Param1); // Function Engine.PlayerController.*7fa4dd7244 // None // @ game+0x6360f1c
	enum class ECameraAnimPlaySpace *c56a5327cc(); // Function Engine.PlayerController.*c56a5327cc // None // @ game+0xa6c608
	void *977cb2e1ec(struct USoundBase* Param0); // Function Engine.PlayerController.*977cb2e1ec // None // @ game+0x635fed0
	float *bad6120f6b(struct FColor Param1); // Function Engine.PlayerController.*bad6120f6b // None // @ game+0x636078c
	int32 *71377d6c43(); // Function Engine.PlayerController.*71377d6c43 // None // @ game+0x637b464
	void *c7482859e6(); // Function Engine.PlayerController.*c7482859e6 // None // @ game+0x636bf4c
	void SendToConsole(); // Function Engine.PlayerController.SendToConsole // None // @ game+0x637456c
	void *46d7f5c82f(); // Function Engine.PlayerController.*46d7f5c82f // None // @ game+0x63747cc
	void *90034fd277(); // Function Engine.PlayerController.*90034fd277 // None // @ game+0x63762e0
	void AddPitchInput(); // Function Engine.PlayerController.AddPitchInput // None // @ game+0x635d74c
	void *894d5aab0c(); // Function Engine.PlayerController.*894d5aab0c // None // @ game+0x6360b98
	void *8a25e3a3ec(); // Function Engine.PlayerController.*8a25e3a3ec // None // @ game+0x635f6ac
	void *91fb0f1f53(); // Function Engine.PlayerController.*91fb0f1f53 // None // @ game+0x637d7d4
	void Camera(); // Function Engine.PlayerController.Camera // None // @ game+0x635e560
	struct FVector DeprojectMousePositionToWorld(struct FVector WorldDirection); // Function Engine.PlayerController.DeprojectMousePositionToWorld // None // @ game+0x636264c
	void *e7688c5ab7(int32 SizeX); // Function Engine.PlayerController.*e7688c5ab7 // None // @ game+0x636b4b0
	struct FKey *73cf67a757(); // Function Engine.PlayerController.*73cf67a757 // None // @ game+0x6368d68
	void *86b835f913(); // Function Engine.PlayerController.*86b835f913 // None // @ game+0x6367448
	void *52a0531220(); // Function Engine.PlayerController.*52a0531220 // None // @ game+0x6376234
	void *a41eb8f989(struct FKey Key); // Function Engine.PlayerController.*a41eb8f989 // None // @ game+0x637ef88
	void *929bd9b49d(); // Function Engine.PlayerController.*929bd9b49d // None // @ game+0x635bf00
	void *6b7eb93d95(); // Function Engine.PlayerController.*6b7eb93d95 // None // @ game+0x63760d4
	void *162964937a(); // Function Engine.PlayerController.*162964937a // None // @ game+0x63769e8
	void *4e12e82776(float ScreenX, struct FVector WorldLocation); // Function Engine.PlayerController.*4e12e82776 // None // @ game+0x6362754
	void *5d69b1297b(); // Function Engine.PlayerController.*5d69b1297b // None // @ game+0xbe5d20
	void *07bb10948f(); // Function Engine.PlayerController.*07bb10948f // None // @ game+0x63606b0
	void *7f7a5cd988(); // Function Engine.PlayerController.*7f7a5cd988 // None // @ game+0x6360604
	void *b94ca05f4b(); // Function Engine.PlayerController.*b94ca05f4b // None // @ game+0x56a8744
	void *f330680f5c(); // Function Engine.PlayerController.*f330680f5c // None // @ game+0x637699c
	void *c0e5d05621(); // Function Engine.PlayerController.*c0e5d05621 // None // @ game+0x6360698
	struct FHitResult *8e5ce08dca(); // Function Engine.PlayerController.*8e5ce08dca // None // @ game+0x63676e8
	void *23d2eeffeb(); // Function Engine.PlayerController.*23d2eeffeb // None // @ game+0x6376950
	void ToggleSpeaking(); // Function Engine.PlayerController.ToggleSpeaking // None // @ game+0x637eb5c
	float *a5bdbf96a2(); // Function Engine.PlayerController.*a5bdbf96a2 // None // @ game+0x63682c4
	void ClientRestart(); // Function Engine.PlayerController.ClientRestart // None // @ game+0x335724
	void *e5134f0647(); // Function Engine.PlayerController.*e5134f0647 // None // @ game+0x637a540
	struct FVector *a3ca820659(); // Function Engine.PlayerController.*a3ca820659 // None // @ game+0x63687e4
	void AddRollInput(); // Function Engine.PlayerController.AddRollInput // None // @ game+0x635db90
	void *36545cdce1(); // Function Engine.PlayerController.*36545cdce1 // None // @ game+0x635f7f0
	void *adaa944e6a(); // Function Engine.PlayerController.*adaa944e6a // None // @ game+0x637f07c
	void *2fa8097c4a(); // Function Engine.PlayerController.*2fa8097c4a // None // @ game+0xbfa560
};

// Class Engine.PlayerState
// Size: 0x490 (Inherited: 0x3f8)
struct APlayerState : AInfo {
	char bIsSpectator : 1; // 0x3f8(0x01)
	char *9f71f07fd6 : 1; // 0x3f8(0x01)
	char bIsABot : 1; // 0x3f8(0x01)
	char pad_3F8_3 : 1; // 0x3f8(0x01)
	char *7750580eb7 : 1; // 0x3f8(0x01)
	char *019f6d2826 : 1; // 0x3f8(0x01)
	char pad_3F8_6 : 2; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	bool Ping; // 0x3fc(0x01)
	char pad_3FD[0x3]; // 0x3fd(0x03)
	float Score; // 0x400(0x04)
	char pad_404[0x4]; // 0x404(0x04)
	struct FString PlayerName; // 0x408(0x10)
	int32 StartTime; // 0x418(0x04)
	int32 PlayerId; // 0x41c(0x04)
	char pad_420[0x8]; // 0x420(0x08)
	struct FUniqueNetIdRepl UniqueId; // 0x428(0x18)
	struct UClass* *aff3dca9f7; // 0x440(0x08)
	struct FString *de846607a1; // 0x448(0x10)
	char pad_458[0x30]; // 0x458(0x30)
	bool *4f96db3413; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)

	void OnRep_bIsInactive(); // Function Engine.PlayerState.OnRep_bIsInactive // None // @ game+0x7a35ac
	void ReceiveCopyProperties(); // Function Engine.PlayerState.ReceiveCopyProperties // None // @ game+0x26a108
	void OnRep_UniqueId(); // Function Engine.PlayerState.OnRep_UniqueId // None // @ game+0x567b1d0
	void ReceiveOverrideWith(); // Function Engine.PlayerState.ReceiveOverrideWith // None // @ game+0x26a108
	void OnRep_Score(); // Function Engine.PlayerState.OnRep_Score // None // @ game+0xcbeb68
	void OnRep_PlayerName(); // Function Engine.PlayerState.OnRep_PlayerName // None // @ game+0x7a3ba0
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
	struct USkeletalMesh* *986438ef50; // 0x410(0x08)
	struct UPhysicsAsset* *eddbd99a3c; // 0x418(0x08)
	struct UMaterialInterface* *71ff89817b; // 0x420(0x08)
	struct UMaterialInterface* *36ea37d0f9; // 0x428(0x08)
	char pad_430[0x50]; // 0x430(0x50)

	void OnRep_ReplicatedPhysAsset(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset // None // @ game+0x7a3ba0
	void OnRep_ReplicatedMaterial1(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1 // None // @ game+0x567b1d0
	void OnRep_ReplicatedMesh(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMesh // None // @ game+0xcbeb68
	void OnRep_ReplicatedMaterial0(); // Function Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0 // None // @ game+0x7a35ac
};

// Class Engine.SaveGame
// Size: 0x28 (Inherited: 0x28)
struct USaveGame : UObject {
};

// Class Engine.*9de72ef8ed
// Size: 0xa10 (Inherited: 0x9f0)
struct U*9de72ef8ed : UPrimitiveComponent {
	struct FColor ShapeColor; // 0x9e8(0x04)
	struct UBodySetup* *461f84b5c9; // 0x9f0(0x08)
	char *9bba926356 : 1; // 0x9f8(0x01)
	char *c85f8034f3 : 1; // 0x9f8(0x01)
	char *838f7c099e : 1; // 0x9f8(0x01)
	char pad_9FC_3 : 5; // 0x9fc(0x01)
	char pad_9FD[0x3]; // 0x9fd(0x03)
	struct UClass* AreaClass; // 0xa00(0x08)
	char pad_A08[0x8]; // 0xa08(0x08)
};

// Class Engine.TargetPoint
// Size: 0x3f8 (Inherited: 0x3f8)
struct ATargetPoint : AActor {
	struct FMulticastDelegate OnActorEndOverlap; // 0x28(0x10)
	struct FMulticastDelegate OnClicked; // 0x48(0x10)
	int32 *2bc7f7749a; // 0x58(0x04)
	char pad_41C_0 : 3; // 0x41c(0x01)
	char *6a29209afc : 1; // 0x5c(0x01)
	char *6583edce58 : 1; // 0x5d(0x01)
	char bReplicates : 1; // 0x5d(0x01)
	struct FName *332fd811ca; // 0x60(0x08)
	enum class ENetRole RemoteRole; // 0x68(0x01)
	struct AActor* Owner; // 0x70(0x08)
	struct FRepMovement ReplicatedMovement; // 0x78(0x34)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xb0(0x40)
	float InitialLifeSpan; // 0xf4(0x04)
	struct FMulticastDelegate OnInputTouchLeave; // 0xf8(0x10)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x110(0x10)
	struct FGuid DestructibleId; // 0x120(0x10)
	bool bIsDestroyedVersion; // 0x130(0x01)
	bool RemoveFromLevelLOD; // 0x131(0x01)
	struct F*2066290a18 PrimaryActorTick; // 0x138(0x58)
	char bAutoDestroyWhenFinished : 1; // 0x190(0x01)
	char bCanBeDamaged : 1; // 0x190(0x01)
	char *50cd51ed38 : 1; // 0x190(0x01)
	char *e002b42072 : 1; // 0x190(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x190(0x01)
	char *a4c704a3e5 : 1; // 0x190(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x190(0x01)
	char *13aea9b43a : 1; // 0x190(0x01)
	char *4211b886bf : 1; // 0x191(0x01)
	struct AActor* ParentComponentActor; // 0x194(0x08)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1a0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x1b8(0x10)
	float *ae3e81fc86; // 0x1c8(0x04)
	char *97cac516e7 : 1; // 0x1d8(0x01)
	char *cd27b8552b : 1; // 0x1d8(0x01)
	char *8aabd64ff4 : 1; // 0x1d8(0x01)
	char *3cd32b903e : 1; // 0x1d8(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1d9(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1da(0x01)
	float CustomTimeDilation; // 0x1dc(0x04)
	enum class ENetRole Role; // 0x1e1(0x01)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1e8(0x10)
	struct FMulticastDelegate OnTakePointDamage; // 0x200(0x10)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x260(0x10)
	struct TArray<struct AActor*> Children; // 0x270(0x10)
	int32 *2d89f8ef7f; // 0x280(0x04)
	struct FMulticastDelegate OnInputTouchEnter; // 0x288(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x298(0x01)
	struct FMulticastDelegate OnInputTouchBegin; // 0x2a0(0x10)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x2b0(0x10)
	struct USceneComponent* RootComponent; // 0x2c0(0x08)
	enum class *66c1dada81 InputConsumeOption; // 0x2c8(0x01)
	struct FMulticastDelegate OnReleased; // 0x2d0(0x10)
	struct FMulticastDelegate OnActorHit; // 0x2e0(0x10)
	enum class EAutoReceiveInput *8606d93d96; // 0x2f0(0x01)
	struct TArray<struct FName> Layers; // 0x2f8(0x10)
	struct TArray<struct FName> Tags; // 0x308(0x10)
	struct U*63b14265fa* *63b14265fa; // 0x318(0x08)
	float NetUpdateFrequency; // 0x320(0x04)
	uint64 *f99b84bc94; // 0x328(0x08)
	struct UChildActorComponent* *129513d23d; // 0x330(0x08)
	float MinNetUpdateFrequency; // 0x388(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x390(0x10)
	float NetCullDistanceSquared; // 0x3a0(0x04)
	float NetPriority; // 0x3a4(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x3a8(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x3b8(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3c8(0x10)
	struct APawn* Instigator; // 0x3e0(0x08)
	char bHidden : 1; // 0x3e8(0x01)
	char *0854a90e26 : 1; // 0x3e8(0x01)
	char *013332e5c6 : 1; // 0x3e8(0x01)
	char bOnlyRelevantToOwner : 1; // 0x3e8(0x01)
	char bAlwaysRelevant : 1; // 0x3e8(0x01)
	char *9ddfc785f1 : 1; // 0x3e8(0x01)
	char *05594c4443 : 1; // 0x3e8(0x01)
	char *ef19f6b6c9 : 1; // 0x3e8(0x01)
	char *dca9d9a72a : 1; // 0x3e9(0x01)
	char *16d69885c9 : 1; // 0x3e9(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x3e9(0x01)
	char *59968c9633 : 1; // 0x3e9(0x01)
	char *02848ec998 : 1; // 0x3e9(0x01)

	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // None // @ game+0x6365248
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // None // @ game+0x637c668
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // None // @ game+0x636a7dc
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // None // @ game+0x637cc50
	void *82b3653b7b(struct AActor* OtherActor); // Function Engine.Actor.*82b3653b7b // None // @ game+0x636b3e8
	struct AController* ReceiveAnyDamage(float Damage); // Function Engine.Actor.ReceiveAnyDamage // None // @ game+0x26a108
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // None // @ game+0x26a108
	struct FName ActorHasTag(); // Function Engine.Actor.ActorHasTag // None // @ game+0x635bf94
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // None // @ game+0x6365214
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // None // @ game+0x26a108
	enum class EAttachLocation K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // None // @ game+0x636e438
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldOffset // None // @ game+0x636cd8c
	enum class EAttachLocation K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // None // @ game+0x636e2b8
	void HasAuthority(); // Function Engine.Actor.HasAuthority // None // @ game+0x9e1498
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // None // @ game+0x636a060
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // None // @ game+0x6369fa8
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // None // @ game+0x6376d90
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // None // @ game+0x6365898
	void *f77af040ad(); // Function Engine.Actor.*f77af040ad // None // @ game+0x6365634
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // None // @ game+0xbe9a6c
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // None // @ game+0x636ed78
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // None // @ game+0x63650f0
	struct FName *43eab6a44c(); // Function Engine.Actor.*43eab6a44c // None // @ game+0x6368648
	enum class EAttachmentRule *ca2fce53c9(struct AActor* ParentActor, struct FName SocketName); // Function Engine.Actor.*ca2fce53c9 // None // @ game+0x636e738
	void K2_AddActorWorldTransform(struct FTransform DeltaTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldTransform // None // @ game+0x636d13c
	bool K2_SetActorLocation(struct FVector NewLocation); // Function Engine.Actor.K2_SetActorLocation // None // @ game+0x636fe08
	struct FKey *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // None // @ game+0x6368554
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // None // @ game+0x6376e28
	struct UObject* AddComponent(struct FName TemplateName); // Function Engine.Actor.AddComponent // None // @ game+0xa5d3a0
	struct FHitResult K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // None // @ game+0x636cf64
	void GetTransform(); // Function Engine.Actor.GetTransform // None // @ game+0xaacdcc
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // None // @ game+0x636ed90
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // None // @ game+0xb99a34
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // None // @ game+0x6364520
	void GetActorBounds(struct FVector Origin); // Function Engine.Actor.GetActorBounds // None // @ game+0x6364cbc
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // None // @ game+0x6367f78
	float MakeNoise(); // Function Engine.Actor.MakeNoise // None // @ game+0x63720f4
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // None // @ game+0x6365288
	void *a487955527(); // Function Engine.Actor.*a487955527 // None // @ game+0x636f250
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // None // @ game+0x6367524
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // None // @ game+0x26a108
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // None // @ game+0x26a108
	void *76b33f89d4(); // Function Engine.Actor.*76b33f89d4 // None // @ game+0x636ac9c
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // None // @ game+0x26a108
	void DisableInput(); // Function Engine.Actor.DisableInput // None // @ game+0x6362a78
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // None // @ game+0x636ba48
	enum class *42e1cdcd79 *694ac52e11(enum class *42e1cdcd79 LocationRule); // Function Engine.Actor.*694ac52e11 // None // @ game+0x636eee0
	struct UClass* *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // None // @ game+0x63669ec
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // None // @ game+0xb40e14
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // None // @ game+0x637c5d0
	void *7952614099(); // Function Engine.Actor.*7952614099 // None // @ game+0x6365260
	struct FHitResult K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // None // @ game+0x636c988
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // None // @ game+0xb6a404
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // None // @ game+0x26a108
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // None // @ game+0x6364aa8
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // None // @ game+0x6369bb8
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // None // @ game+0x6377260
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // None // @ game+0x6364f98
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // None // @ game+0x26a108
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // None // @ game+0x636f734
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // None // @ game+0x8b5060
	void *8ab522db39(); // Function Engine.Actor.*8ab522db39 // None // @ game+0x63672dc
	void *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // None // @ game+0x6366bd4
	struct FHitResult K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // None // @ game+0x63705d4
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // None // @ game+0x26a108
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // None // @ game+0x6373e3c
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // None // @ game+0x635dd54
	struct FHitResult ReceiveRadialDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceiveRadialDamage // None // @ game+0x26a108
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // None // @ game+0x6364abc
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // None // @ game+0x6368e6c
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // None // @ game+0x26a108
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // None // @ game+0x636af68
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // None // @ game+0x63771cc
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // None // @ game+0x26a108
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // None // @ game+0x26a108
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // None // @ game+0x6369e18
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // None // @ game+0x636c7b0
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // None // @ game+0x636a03c
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // None // @ game+0x6370224
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // None // @ game+0xb44448
	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // None // @ game+0x636ba64
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // None // @ game+0x70f418
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // None // @ game+0x26a108
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // None // @ game+0x635dc2c
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // None // @ game+0x636bafc
	void *679babdbe9(struct FVector DestLocation); // Function Engine.Actor.*679babdbe9 // None // @ game+0x6371a40
	float *77574d4d00(); // Function Engine.Actor.*77574d4d00 // None // @ game+0x637f170
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // None // @ game+0x26a108
	void *2bbda76e95(struct UClass* ComponentClass); // Function Engine.Actor.*2bbda76e95 // None // @ game+0x6366ae4
	void *8ff8fb0472(struct FKey InputAxisKey); // Function Engine.Actor.*8ff8fb0472 // None // @ game+0x6368c64
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // None // @ game+0x636586c
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // None // @ game+0x636f318
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // None // @ game+0x63650bc
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // None // @ game+0x637cb38
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // None // @ game+0x636ffec
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // None // @ game+0x637712c
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // None // @ game+0x637708c
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // None // @ game+0x637ea90
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // None // @ game+0x26a108
	struct FVector *4e14239fe2(); // Function Engine.Actor.*4e14239fe2 // None // @ game+0x6364e8c
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // None // @ game+0x6368f34
	void *6f6713dfba(struct AActor* OtherActor); // Function Engine.Actor.*6f6713dfba // None // @ game+0x6368018
	struct FHitResult K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // None // @ game+0x63703fc
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // None // @ game+0x6365848
	void K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // None // @ game+0x605cd0
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // None // @ game+0x6373d14
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // None // @ game+0x6364e64
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // None // @ game+0x26a108
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // None // @ game+0x26a108
	void *58360a298b(struct AActor* Other); // Function Engine.Actor.*58360a298b // None // @ game+0x636c21c
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // None // @ game+0x63629e4
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // None // @ game+0x636b3b0
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // None // @ game+0x26a108
	bool K2_SetActorTransform(bool bSweep); // Function Engine.Actor.K2_SetActorTransform // None // @ game+0x6370800
	void SetOwner(); // Function Engine.Actor.SetOwner // None // @ game+0x637b964
	void *094169766b(); // Function Engine.Actor.*094169766b // None // @ game+0x6368e84
	void *2a43ddf3b4(struct AActor* OtherActor); // Function Engine.Actor.*2a43ddf3b4 // None // @ game+0x636737c
	enum class EAttachmentRule *e13072354b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*e13072354b // None // @ game+0x63d310
	void *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // None // @ game+0x637dda0
	struct FVector ReceivePointDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceivePointDamage // None // @ game+0x26a108
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // None // @ game+0x26a108
	struct FHitResult K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // None // @ game+0x636cb60
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector NormalImpulse); // Function Engine.Actor.ReceiveHit // None // @ game+0x26a108
	struct UMaterialInterface* *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // None // @ game+0x6372078
};

// Class Engine.GameStateBase
// Size: 0x438 (Inherited: 0x3f8)
struct AGameStateBase : AInfo {
	struct UClass* GameModeClass; // 0x3f8(0x08)
	struct AGameModeBase* AuthorityGameMode; // 0x400(0x08)
	struct UClass* SpectatorClass; // 0x408(0x08)
	struct TArray<struct APlayerState*> PlayerArray; // 0x410(0x10)
	bool *b3165990bb; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float *0f4cbda7e4; // 0x424(0x04)
	float *beee9616a2; // 0x428(0x04)
	float *72d0135ba7; // 0x42c(0x04)
	char pad_430[0x8]; // 0x430(0x08)

	void *3a712c20b7(); // Function Engine.GameStateBase.*3a712c20b7 // None // @ game+0x636a6dc
	void *a2a2e5aa70(); // Function Engine.GameStateBase.*a2a2e5aa70 // None // @ game+0x636b644
	void *16cf218094(); // Function Engine.GameStateBase.*16cf218094 // None // @ game+0x56c2494
	void OnRep_ReplicatedWorldTimeSeconds(); // Function Engine.GameStateBase.OnRep_ReplicatedWorldTimeSeconds // None // @ game+0xaeb4b8
	void OnRep_SpectatorClass(); // Function Engine.GameStateBase.OnRep_SpectatorClass // None // @ game+0x79af04
	void OnRep_GameModeClass(); // Function Engine.GameStateBase.OnRep_GameModeClass // None // @ game+0xbd299c
	struct AController* *a8f929f84f(); // Function Engine.GameStateBase.*a8f929f84f // None // @ game+0x636a634
	void *32d9e0fcf6(); // Function Engine.GameStateBase.*32d9e0fcf6 // None // @ game+0x563d92c
	void *c133fde381(); // Function Engine.GameStateBase.*c133fde381 // None // @ game+0x636b5f4
	void OnRep_ReplicatedHasBegunPlay(); // Function Engine.GameStateBase.OnRep_ReplicatedHasBegunPlay // None // @ game+0x56653bc
	void *3712aecb1b(); // Function Engine.GameStateBase.*3712aecb1b // None // @ game+0x63694b4
};

// Class Engine.GameState
// Size: 0x458 (Inherited: 0x438)
struct AGameState : AGameStateBase {
	struct FName MatchState; // 0x438(0x08)
	struct FName PreviousMatchState; // 0x440(0x08)
	int32 ElapsedTime; // 0x448(0x04)
	char pad_44C[0xc]; // 0x44c(0x0c)

	void OnRep_MatchState(); // Function Engine.GameState.OnRep_MatchState // None // @ game+0x8856d0
	void OnRep_ElapsedTime(); // Function Engine.GameState.OnRep_ElapsedTime // None // @ game+0x560a694
};

// Class Engine.BoxComponent
// Size: 0xa20 (Inherited: 0xa10)
struct UBoxComponent : U*9de72ef8ed {
	struct FVector BoxExtent; // 0xa08(0x0c)
	char pad_A1C[0x4]; // 0xa1c(0x04)

	void *98e9dedda9(); // Function Engine.BoxComponent.*98e9dedda9 // None // @ game+0x63a4b04
	void *0f9344886a(); // Function Engine.BoxComponent.*0f9344886a // None // @ game+0x63a6e84
	struct FVector *47e32f31b3(); // Function Engine.BoxComponent.*47e32f31b3 // None // @ game+0x63c2524
};

// Class Engine.ProjectileMovementComponent
// Size: 0x300 (Inherited: 0x240)
struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; // 0x238(0x04)
	float MaxSpeed; // 0x23c(0x04)
	char bRotationFollowsVelocity : 1; // 0x240(0x01)
	char bShouldBounce : 1; // 0x240(0x01)
	char bInitialVelocityInLocalSpace : 1; // 0x240(0x01)
	char bForceSubStepping : 1; // 0x240(0x01)
	char bSimulationEnabled : 1; // 0x240(0x01)
	char bSweepCollision : 1; // 0x240(0x01)
	char bIsHomingProjectile : 1; // 0x240(0x01)
	char bBounceAngleAffectsFriction : 1; // 0x240(0x01)
	char bIsSliding : 1; // 0x241(0x01)
	char bInterpMovement : 1; // 0x241(0x01)
	char bInterpRotation : 1; // 0x241(0x01)
	float PreviousHitTime; // 0x244(0x04)
	struct FVector PreviousHitNormal; // 0x248(0x0c)
	float ProjectileGravityScale; // 0x254(0x04)
	float *e4135d57da; // 0x258(0x04)
	float Bounciness; // 0x25c(0x04)
	float Friction; // 0x260(0x04)
	float BounceVelocityStopSimulatingThreshold; // 0x264(0x04)
	float MinFrictionFraction; // 0x268(0x04)
	struct FMulticastDelegate OnProjectileBounce; // 0x270(0x10)
	struct FMulticastDelegate OnProjectileStop; // 0x280(0x10)
	float HomingAccelerationMagnitude; // 0x290(0x04)
	struct USceneComponent* HomingTargetComponent; // 0x294(0x08)
	float MaxSimulationTimeStep; // 0x29c(0x04)
	int32 MaxSimulationIterations; // 0x2a0(0x04)
	int32 BounceAdditionalIterations; // 0x2a4(0x04)
	float InterpLocationTime; // 0x2a8(0x04)
	float InterpRotationTime; // 0x2ac(0x04)
	float InterpLocationMaxLagDistance; // 0x2b0(0x04)
	float InterpLocationSnapToTargetDistance; // 0x2b4(0x04)
	char pad_2B9[0x47]; // 0x2b9(0x47)

	void *831dfc768a(); // Function Engine.ProjectileMovementComponent.*831dfc768a // None // @ game+0x63ce98c
	void OnProjectileBounceDelegate__DelegateSignature(); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileBounceDelegate__DelegateSignature // None // @ game+0x26a108
	void *00e85c5c6c(); // Function Engine.ProjectileMovementComponent.*00e85c5c6c // None // @ game+0x63c7ccc
	void StopSimulating(); // Function Engine.ProjectileMovementComponent.StopSimulating // None // @ game+0x63d63cc
	void *623c7ebb72(); // Function Engine.ProjectileMovementComponent.*623c7ebb72 // None // @ game+0x63aba2c
	void *09e7043d49(struct FVector NewLocation); // Function Engine.ProjectileMovementComponent.*09e7043d49 // None // @ game+0x63b6080
	void *b58938a410(); // Function Engine.ProjectileMovementComponent.*b58938a410 // None // @ game+0x5644c98
	struct FVector LimitVelocity(); // Function Engine.ProjectileMovementComponent.LimitVelocity // None // @ game+0x63ae464
	void *6da4a97058(); // Function Engine.ProjectileMovementComponent.*6da4a97058 // None // @ game+0x63aaf90
	void OnProjectileStopDelegate__DelegateSignature(); // DelegateFunction Engine.ProjectileMovementComponent.OnProjectileStopDelegate__DelegateSignature // None // @ game+0x26a108
};

// Class Engine.CurveBase
// Size: 0x30 (Inherited: 0x28)
struct UCurveBase : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Engine.GameUserSettings
// Size: 0x110 (Inherited: 0x28)
struct UGameUserSettings : UObject {
	bool bUseVSync; // 0x28(0x01)
	bool bUseDynamicResolution; // 0x29(0x01)
	char pad_2A[0x4e]; // 0x2a(0x4e)
	uint32 ResolutionSizeX; // 0x78(0x04)
	uint32 ResolutionSizeY; // 0x7c(0x04)
	uint32 LastUserConfirmedResolutionSizeX; // 0x80(0x04)
	uint32 LastUserConfirmedResolutionSizeY; // 0x84(0x04)
	int32 WindowPosX; // 0x88(0x04)
	int32 WindowPosY; // 0x8c(0x04)
	int32 FullscreenMode; // 0x90(0x04)
	int32 LastConfirmedFullscreenMode; // 0x94(0x04)
	int32 PreferredFullscreenMode; // 0x98(0x04)
	uint32 Version; // 0x9c(0x04)
	int32 AudioQualityLevel; // 0xa0(0x04)
	float FrameRateLimit; // 0xa4(0x04)
	char pad_A8[0x4]; // 0xa8(0x04)
	int32 DesiredScreenWidth; // 0xac(0x04)
	bool bUseDesiredScreenHeight; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32 DesiredScreenHeight; // 0xb4(0x04)
	float LastRecommendedScreenWidth; // 0xb8(0x04)
	float LastRecommendedScreenHeight; // 0xbc(0x04)
	float LastCPUBenchmarkResult; // 0xc0(0x04)
	float LastGPUBenchmarkResult; // 0xc4(0x04)
	struct TArray<float> LastCPUBenchmarkSteps; // 0xc8(0x10)
	struct TArray<float> LastGPUBenchmarkSteps; // 0xd8(0x10)
	float LastGPUBenchmarkMultiplier; // 0xe8(0x04)
	bool bUseHDRDisplayOutput; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	int32 HDRDisplayOutputNits; // 0xf0(0x04)
	enum class EGraphicsAPIType GraphicsAPI; // 0xf4(0x01)
	bool bGPUDebug; // 0xf5(0x01)
	char pad_F6[0x2]; // 0xf6(0x02)
	struct FDateTime GPUDebugActiveDateTime; // 0xf8(0x08)
	struct FMulticastDelegate OnGameUserSettingsUINeedsUpdate; // 0x100(0x10)

	void *ff165ed312(); // Function Engine.GameUserSettings.*ff165ed312 // None // @ game+0x63f2630
	void *f99fd71384(); // Function Engine.GameUserSettings.*f99fd71384 // None // @ game+0x63eada4
	int32 GetResolutionScaleInformation(float CurrentScaleNormalized); // Function Engine.GameUserSettings.GetResolutionScaleInformation // None // @ game+0x63eaeb4
	void *b90135664f(); // Function Engine.GameUserSettings.*b90135664f // None // @ game+0x63e930c
	void *d578d2b56d(); // Function Engine.GameUserSettings.*d578d2b56d // None // @ game+0x63f23cc
	void *aa506a5c7e(); // Function Engine.GameUserSettings.*aa506a5c7e // None // @ game+0x63eb2a8
	void *4e377c31c3(); // Function Engine.GameUserSettings.*4e377c31c3 // None // @ game+0x63f2594
	void *12bb8cc58b(); // Function Engine.GameUserSettings.*12bb8cc58b // None // @ game+0x63ec248
	void *1b246fdda3(); // Function Engine.GameUserSettings.*1b246fdda3 // None // @ game+0x63e9de4
	void *e712800bb5(); // Function Engine.GameUserSettings.*e712800bb5 // None // @ game+0x5e2dd20
	void *005b909a0a(); // Function Engine.GameUserSettings.*005b909a0a // None // @ game+0x63f417c
	void *8d0b38839e(); // Function Engine.GameUserSettings.*8d0b38839e // None // @ game+0x63ebd74
	void *e8aec7750c(); // Function Engine.GameUserSettings.*e8aec7750c // None // @ game+0x63f2340
	void *e6f6ac1408(); // Function Engine.GameUserSettings.*e6f6ac1408 // None // @ game+0x63eb28c
	void *7028637d24(); // Function Engine.GameUserSettings.*7028637d24 // None // @ game+0x63ec280
	void *694048f68a(); // Function Engine.GameUserSettings.*694048f68a // None // @ game+0x63eba30
	void *34010b7d81(); // Function Engine.GameUserSettings.*34010b7d81 // None // @ game+0x63e9338
	void *e79626d820(); // Function Engine.GameUserSettings.*e79626d820 // None // @ game+0x63f26c8
	void *5bd816f8fd(); // Function Engine.GameUserSettings.*5bd816f8fd // None // @ game+0x63e9e08
	void *8dfb8f9e1f(); // Function Engine.GameUserSettings.*8dfb8f9e1f // None // @ game+0x63f2930
	void *e4cadefc91(); // Function Engine.GameUserSettings.*e4cadefc91 // None // @ game+0x63e9350
	void *0919531070(); // Function Engine.GameUserSettings.*0919531070 // None // @ game+0x63e990c
	void *8d4e34d1cd(); // Function Engine.GameUserSettings.*8d4e34d1cd // None // @ game+0x63ec7d0
	void *037ccbd6e4(); // Function Engine.GameUserSettings.*037ccbd6e4 // None // @ game+0x63ea308
	void *0f8563b766(); // Function Engine.GameUserSettings.*0f8563b766 // None // @ game+0x63f1c64
	void *8816de7f70(); // Function Engine.GameUserSettings.*8816de7f70 // None // @ game+0x63e0f90
	void *fcb1fc9a28(); // Function Engine.GameUserSettings.*fcb1fc9a28 // None // @ game+0x63f2a50
	void *a5f557ab6c(); // Function Engine.GameUserSettings.*a5f557ab6c // None // @ game+0x63f31fc
	void *eea34f3e4c(int32 WorkScale); // Function Engine.GameUserSettings.*eea34f3e4c // None // @ game+0x63f21d0
	void *f589301822(); // Function Engine.GameUserSettings.*f589301822 // None // @ game+0x63ebd88
	void *9df0b9d539(); // Function Engine.GameUserSettings.*9df0b9d539 // None // @ game+0x63e4abc
	void *881d90f45c(); // Function Engine.GameUserSettings.*881d90f45c // None // @ game+0x63e98f4
	void *9305fec020(); // Function Engine.GameUserSettings.*9305fec020 // None // @ game+0x63f3158
	void *0f1c6cd359(); // Function Engine.GameUserSettings.*0f1c6cd359 // None // @ game+0x90618c
	void *b4854cc3a2(); // Function Engine.GameUserSettings.*b4854cc3a2 // None // @ game+0x63f2b94
	void *9f9b7968e7(); // Function Engine.GameUserSettings.*9f9b7968e7 // None // @ game+0x9f2120
	void *27602f449d(); // Function Engine.GameUserSettings.*27602f449d // None // @ game+0x63f2da0
	void *0d72aba354(); // Function Engine.GameUserSettings.*0d72aba354 // None // @ game+0x63ec768
	void *929ac2c34a(float CurrentScaleValue); // Function Engine.GameUserSettings.*929ac2c34a // None // @ game+0x63eb0ac
	void LoadSettings(); // Function Engine.GameUserSettings.LoadSettings // None // @ game+0x63e7388
	void *37684c88cb(); // Function Engine.GameUserSettings.*37684c88cb // None // @ game+0x63f31e4
	void *35535da485(); // Function Engine.GameUserSettings.*35535da485 // None // @ game+0x63ec2a4
	void *83a6aa3d9c(); // Function Engine.GameUserSettings.*83a6aa3d9c // None // @ game+0x5648e20
	void *a40f28e95a(); // Function Engine.GameUserSettings.*a40f28e95a // None // @ game+0x63e9a0c
	void SetResolutionScaleValue(); // Function Engine.GameUserSettings.SetResolutionScaleValue // None // @ game+0x63f2b00
	void *461f940e49(); // Function Engine.GameUserSettings.*461f940e49 // None // @ game+0x63e92ec
	void *b114a91f6a(); // Function Engine.GameUserSettings.*b114a91f6a // None // @ game+0x63e8e90
	void *15262d6763(); // Function Engine.GameUserSettings.*15262d6763 // None // @ game+0x63ec26c
	void *1a1197a006(); // Function Engine.GameUserSettings.*1a1197a006 // None // @ game+0x55f2394
	void *bbfc2c9965(); // Function Engine.GameUserSettings.*bbfc2c9965 // None // @ game+0x63f3378
	void *483de8d97e(); // Function Engine.GameUserSettings.*483de8d97e // None // @ game+0x63e98e0
	void *a2b82d5ffa(); // Function Engine.GameUserSettings.*a2b82d5ffa // None // @ game+0x63e0f78
	void *8f07a62fc0(); // Function Engine.GameUserSettings.*8f07a62fc0 // None // @ game+0x63e8ea4
	void *a0cc2f9b1f(); // Function Engine.GameUserSettings.*a0cc2f9b1f // None // @ game+0x63ec7ac
	void *f17918e2e4(); // Function Engine.GameUserSettings.*f17918e2e4 // None // @ game+0x63f29c4
	void *791bb98775(); // Function Engine.GameUserSettings.*791bb98775 // None // @ game+0x63e4678
	void *edc46fa1a0(); // Function Engine.GameUserSettings.*edc46fa1a0 // None // @ game+0x63f2458
	void *a0bcd9f088(); // Function Engine.GameUserSettings.*a0bcd9f088 // None // @ game+0x63ea87c
	void SaveSettings(); // Function Engine.GameUserSettings.SaveSettings // None // @ game+0x5672b24
	void *d99fdc2874(); // Function Engine.GameUserSettings.*d99fdc2874 // None // @ game+0x63f2e2c
	void *ea56882abd(); // Function Engine.GameUserSettings.*ea56882abd // None // @ game+0x63f2508
	void *20ab35464e(); // Function Engine.GameUserSettings.*20ab35464e // None // @ game+0x564e96c
	bool *714d4f65b8(); // Function Engine.GameUserSettings.*714d4f65b8 // None // @ game+0x63e770c
	void *d685dce1b6(); // Function Engine.GameUserSettings.*d685dce1b6 // None // @ game+0x63ea890
	void *f390c26976(); // Function Engine.GameUserSettings.*f390c26976 // None // @ game+0x564e8bc
	void *922b274ba7(); // Function Engine.GameUserSettings.*922b274ba7 // None // @ game+0x63e90d0
};

// Class Engine.GameInstance
// Size: 0x1f0 (Inherited: 0x28)
struct UGameInstance : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct U*41ff50be2e* *41ff50be2e; // 0x30(0x08)
	struct U*6653cc84aa* *6653cc84aa; // 0x38(0x08)
	char pad_40[0xc0]; // 0x40(0xc0)
	struct FMulticastDelegate OnKillcamLoadingFinished; // 0x100(0x10)
	char pad_110[0xe0]; // 0x110(0xe0)

	void DebugCreatePlayer(); // Function Engine.GameInstance.DebugCreatePlayer // None // @ game+0x63943cc
	void HandleTravelError(); // Function Engine.GameInstance.HandleTravelError // None // @ game+0x26a108
	void ReceiveShutdown(); // Function Engine.GameInstance.ReceiveShutdown // None // @ game+0x26a108
	void HandleNetworkError(enum class ENetworkFailure FailureType); // Function Engine.GameInstance.HandleNetworkError // None // @ game+0x26a108
	void DebugRemovePlayer(); // Function Engine.GameInstance.DebugRemovePlayer // None // @ game+0x6394460
	void KillcamLoadingFinishedDelegate__DelegateSignature(); // DelegateFunction Engine.GameInstance.KillcamLoadingFinishedDelegate__DelegateSignature // None // @ game+0x26a108
	void ReceiveInit(); // Function Engine.GameInstance.ReceiveInit // None // @ game+0x26a108
};

// Class Engine.TriggerBase
// Size: 0x400 (Inherited: 0x3f8)
struct ATriggerBase : AActor {
	struct U*9de72ef8ed* CollisionComponent; // 0x3f8(0x08)
};

// Class Engine.TriggerBox
// Size: 0x400 (Inherited: 0x400)
struct ATriggerBox : ATriggerBase {
	struct U*9de72ef8ed* CollisionComponent; // 0x3f8(0x08)
};

// Class Engine.CapsuleComponent
// Size: 0xa20 (Inherited: 0xa10)
struct UCapsuleComponent : U*9de72ef8ed {
	float CapsuleHalfHeight; // 0xa08(0x04)
	float CapsuleRadius; // 0xa0c(0x04)
	float CapsuleHeight; // 0xa10(0x04)
	char pad_A1C[0x4]; // 0xa1c(0x04)

	void *5e7387deea(); // Function Engine.CapsuleComponent.*5e7387deea // None // @ game+0x63a4c4c
	void *6c17800325(); // Function Engine.CapsuleComponent.*6c17800325 // None // @ game+0x6378f74
	void *15572a149a(); // Function Engine.CapsuleComponent.*15572a149a // None // @ game+0x63a6ee8
	void *baff305a0b(); // Function Engine.CapsuleComponent.*baff305a0b // None // @ game+0x6379008
	void *00f4749d00(); // Function Engine.CapsuleComponent.*00f4749d00 // None // @ game+0x63a4c00
	void *4ecc54f469(); // Function Engine.CapsuleComponent.*4ecc54f469 // None // @ game+0x63a6ec4
	float *01db1cc2f0(); // Function Engine.CapsuleComponent.*01db1cc2f0 // None // @ game+0x63a7008
	void *f7e693ed7e(); // Function Engine.CapsuleComponent.*f7e693ed7e // None // @ game+0x63a4bac
	void *c03bd11c98(); // Function Engine.CapsuleComponent.*c03bd11c98 // None // @ game+0x63a4b60
	void *6b957cfb76(); // Function Engine.CapsuleComponent.*6b957cfb76 // None // @ game+0x63a6eac
	float *038749a2fe(); // Function Engine.CapsuleComponent.*038749a2fe // None // @ game+0x63c2738
	void *58f998cca1(); // Function Engine.CapsuleComponent.*58f998cca1 // None // @ game+0x63790a0
	void *4fba3aec1b(float InHalfHeight); // Function Engine.CapsuleComponent.*4fba3aec1b // None // @ game+0x63c29bc
	float *fed358e535(); // Function Engine.CapsuleComponent.*fed358e535 // None // @ game+0x63a4d80
	float *2e030b6a4a(); // Function Engine.CapsuleComponent.*2e030b6a4a // None // @ game+0x63c28d0
	void *7f740f17f8(float OutRadius); // Function Engine.CapsuleComponent.*7f740f17f8 // None // @ game+0x63a6f00
	void *b260e3db57(); // Function Engine.CapsuleComponent.*b260e3db57 // None // @ game+0x63a4fb4
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
	bool *1ffd8a4414; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
};

// Class Engine.DebugCameraController
// Size: 0x800 (Inherited: 0x7b0)
struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; // 0x7b0(0x01)
	char *a68cb7b46b : 1; // 0x7b0(0x01)
	char pad_7B0_2 : 6; // 0x7b0(0x01)
	char pad_7B1[0x7]; // 0x7b1(0x07)
	struct U*7516137630* *fbb1cd85af; // 0x7b8(0x08)
	char pad_7C0[0x20]; // 0x7c0(0x20)
	float SpeedScale; // 0x7e0(0x04)
	float InitialMaxSpeed; // 0x7e4(0x04)
	float InitialAccel; // 0x7e8(0x04)
	float InitialDecel; // 0x7ec(0x04)
	char pad_7F0[0x10]; // 0x7f0(0x10)

	void *d4e8039368(); // Function Engine.DebugCameraController.*d4e8039368 // None // @ game+0x636a894
	struct FVector ReceiveOnActorSelected(); // Function Engine.DebugCameraController.ReceiveOnActorSelected // None // @ game+0x26a108
	void ReceiveOnActivate(); // Function Engine.DebugCameraController.ReceiveOnActivate // None // @ game+0x26a108
	void ReceiveOnDeactivate(); // Function Engine.DebugCameraController.ReceiveOnDeactivate // None // @ game+0x26a108
	void *5048ac03eb(); // Function Engine.DebugCameraController.*5048ac03eb // None // @ game+0x637bab0
	void ShowDebugSelectedInfo(); // Function Engine.DebugCameraController.ShowDebugSelectedInfo // None // @ game+0x637dcf8
	void *2a0c85c652(); // Function Engine.DebugCameraController.*2a0c85c652 // None // @ game+0x637eaf8
};

// Class Engine.Channel
// Size: 0x68 (Inherited: 0x28)
struct UChannel : UObject {
	struct UNetConnection* Connection; // 0x28(0x08)
	char pad_30[0x38]; // 0x30(0x38)
};

// Class Engine.ActorChannel
// Size: 0x370 (Inherited: 0x68)
struct UActorChannel : UChannel {
	struct AActor* Actor; // 0x68(0x08)
	char pad_70[0x300]; // 0x70(0x300)
};

// Class Engine.DemoActorChannel
// Size: 0x390 (Inherited: 0x370)
struct UDemoActorChannel : UActorChannel {
	struct AActor* Actor; // 0x68(0x08)
	char pad_378[0x18]; // 0x378(0x18)
};

// Class Engine.NavigationObjectBase
// Size: 0x420 (Inherited: 0x3f8)
struct ANavigationObjectBase : AActor {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct UCapsuleComponent* CapsuleComponent; // 0x400(0x08)
	struct UBillboardComponent* *e995b1374d; // 0x408(0x08)
	struct UBillboardComponent* *3a07fdffe9; // 0x410(0x08)
	char *13444ae17a : 1; // 0x418(0x01)
	char pad_418_1 : 7; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
};

// Class Engine.PlayerStart
// Size: 0x428 (Inherited: 0x420)
struct APlayerStart : ANavigationObjectBase {
	struct FName PlayerStartTag; // 0x420(0x08)
};

// Class Engine.CheatManager
// Size: 0x78 (Inherited: 0x28)
struct UCheatManager : UObject {
	struct ADebugCameraController* *fd70a6f96b; // 0x28(0x08)
	struct UClass* DebugCameraControllerClass; // 0x30(0x08)
	char pad_38[0x40]; // 0x38(0x40)

	void StreamLevelIn(); // Function Engine.CheatManager.StreamLevelIn // None // @ game+0x63f3d68
	void LogLoc(); // Function Engine.CheatManager.LogLoc // None // @ game+0x63ef8b0
	void InvertMouse(); // Function Engine.CheatManager.InvertMouse // None // @ game+0x63ec1dc
	void FlushLog(); // Function Engine.CheatManager.FlushLog // None // @ game+0x63e8ce8
	void CheatScript(); // Function Engine.CheatManager.CheatScript // None // @ game+0x63e473c
	void TestCollisionDistance(); // Function Engine.CheatManager.TestCollisionDistance // None // @ game+0x63f41a4
	void DumpChatState(); // Function Engine.CheatManager.DumpChatState // None // @ game+0x63e7538
	void PlayersOnly(); // Function Engine.CheatManager.PlayersOnly // None // @ game+0x63f12b8
	void StreamLevelOut(); // Function Engine.CheatManager.StreamLevelOut // None // @ game+0x63f3dfc
	void God(); // Function Engine.CheatManager.God // None // @ game+0x5672acc
	void ViewSelf(); // Function Engine.CheatManager.ViewSelf // None // @ game+0x63f588c
	void ViewPlayer(); // Function Engine.CheatManager.ViewPlayer // None // @ game+0x63f57c8
	void DebugCapsuleSweepCapture(); // Function Engine.CheatManager.DebugCapsuleSweepCapture // None // @ game+0x63e7118
	void Slomo(); // Function Engine.CheatManager.Slomo // None // @ game+0x63f37d0
	void DestroyPawns(); // Function Engine.CheatManager.DestroyPawns // None // @ game+0x5d4d648
	void RebuildNavigation(); // Function Engine.CheatManager.RebuildNavigation // None // @ game+0x63f14c8
	void Summon(); // Function Engine.CheatManager.Summon // None // @ game+0x63f40b8
	void DumpPartyState(); // Function Engine.CheatManager.DumpPartyState // None // @ game+0x63e7550
	void ToggleDebugCamera(); // Function Engine.CheatManager.ToggleDebugCamera // None // @ game+0x63f4f68
	void DebugCapsuleSweepSize(); // Function Engine.CheatManager.DebugCapsuleSweepSize // None // @ game+0x63e7290
	void OnlyLoadLevel(); // Function Engine.CheatManager.OnlyLoadLevel // None // @ game+0x63f0d38
	void Ghost(); // Function Engine.CheatManager.Ghost // None // @ game+0x564e8bc
	void Fly(); // Function Engine.CheatManager.Fly // None // @ game+0x5672b3c
	void ToggleAILogging(); // Function Engine.CheatManager.ToggleAILogging // None // @ game+0x63f4f50
	void DebugCapsuleSweep(); // Function Engine.CheatManager.DebugCapsuleSweep // None // @ game+0xb6a404
	float BugItGo(); // Function Engine.CheatManager.BugItGo // None // @ game+0x63e2b70
	void DestroyAllPawnsExceptTarget(); // Function Engine.CheatManager.DestroyAllPawnsExceptTarget // None // @ game+0x63e7370
	void *9806f2220c(); // Function Engine.CheatManager.*9806f2220c // None // @ game+0x63f22f4
	void SetMouseSensitivityToDefault(); // Function Engine.CheatManager.SetMouseSensitivityToDefault // None // @ game+0x63f2884
	void *1dc29b1854(); // Function Engine.CheatManager.*1dc29b1854 // None // @ game+0x63e7600
	void DamageTarget(); // Function Engine.CheatManager.DamageTarget // None // @ game+0x63e707c
	void DebugCapsuleSweepPawn(); // Function Engine.CheatManager.DebugCapsuleSweepPawn // None // @ game+0x63e7278
	void DumpVoiceMutingState(); // Function Engine.CheatManager.DumpVoiceMutingState // None // @ game+0x63e7568
	void ReceiveEndPlay(); // Function Engine.CheatManager.ReceiveEndPlay // None // @ game+0x26a108
	void Walk(); // Function Engine.CheatManager.Walk // None // @ game+0x5672b24
	void ChangeSize(); // Function Engine.CheatManager.ChangeSize // None // @ game+0x63e46a0
	void DestroyTarget(); // Function Engine.CheatManager.DestroyTarget // None // @ game+0x5672b54
	void Teleport(); // Function Engine.CheatManager.Teleport // None // @ game+0x5672ae4
	void ViewActor(); // Function Engine.CheatManager.ViewActor // None // @ game+0x63f56a0
	void FreezeFrame(); // Function Engine.CheatManager.FreezeFrame // None // @ game+0x63e8d00
	struct FString BugItStringCreator(); // Function Engine.CheatManager.BugItStringCreator // None // @ game+0x63e2d8c
	void DestroyAll(); // Function Engine.CheatManager.DestroyAll // None // @ game+0x6364520
	void BugIt(); // Function Engine.CheatManager.BugIt // None // @ game+0x63e2aac
	void DebugCapsuleSweepComplex(); // Function Engine.CheatManager.DebugCapsuleSweepComplex // None // @ game+0x63e71e0
	void DebugCapsuleSweepChannel(); // Function Engine.CheatManager.DebugCapsuleSweepChannel // None // @ game+0x63e7130
	void SetNavDrawDistance(); // Function Engine.CheatManager.SetNavDrawDistance // None // @ game+0x63f2898
	void SetWorldOrigin(); // Function Engine.CheatManager.SetWorldOrigin // None // @ game+0x63f3404
	void *9548b29d4b(); // Function Engine.CheatManager.*9548b29d4b // None // @ game+0xbd506c
	void DumpOnlineSessionState(); // Function Engine.CheatManager.DumpOnlineSessionState // None // @ game+0x55f45b4
	void DebugCapsuleSweepClear(); // Function Engine.CheatManager.DebugCapsuleSweepClear // None // @ game+0x63e71c8
	void ReceiveInitCheatManager(); // Function Engine.CheatManager.ReceiveInitCheatManager // None // @ game+0x26a108
	void ViewClass(); // Function Engine.CheatManager.ViewClass // None // @ game+0x63f5734
};

// Class Engine.*1b1f1e4584
// Size: 0xa00 (Inherited: 0x9f0)
struct U*1b1f1e4584 : UPrimitiveComponent {
	struct TArray<struct FNavigationLink> Links; // 0x9f0(0x10)
};

// Class Engine.NavArea
// Size: 0x40 (Inherited: 0x28)
struct UNavArea : UObject {
	float DefaultCost; // 0x28(0x04)
	float FixedAreaEnteringCost; // 0x2c(0x04)
	struct FColor DrawColor; // 0x30(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x34(0x04)
	char bSupportsAgent0 : 1; // 0x38(0x01)
	char bSupportsAgent1 : 1; // 0x38(0x01)
	char bSupportsAgent2 : 1; // 0x38(0x01)
	char bSupportsAgent3 : 1; // 0x38(0x01)
	char bSupportsAgent4 : 1; // 0x38(0x01)
	char bSupportsAgent5 : 1; // 0x38(0x01)
	char bSupportsAgent6 : 1; // 0x38(0x01)
	char bSupportsAgent7 : 1; // 0x38(0x01)
	char bSupportsAgent8 : 1; // 0x39(0x01)
	char bSupportsAgent9 : 1; // 0x39(0x01)
	char bSupportsAgent10 : 1; // 0x39(0x01)
	char bSupportsAgent11 : 1; // 0x39(0x01)
	char bSupportsAgent12 : 1; // 0x39(0x01)
	char bSupportsAgent13 : 1; // 0x39(0x01)
	char bSupportsAgent14 : 1; // 0x39(0x01)
	char bSupportsAgent15 : 1; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// Class Engine.LevelScriptActor
// Size: 0x400 (Inherited: 0x3f8)
struct ALevelScriptActor : AActor {
	char *9fe0b32409 : 1; // 0x3f8(0x01)
	char pad_3F8_1 : 7; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)

	void *930cb558f2(bool bCinematicMode, bool bAffectsHUD); // Function Engine.LevelScriptActor.*930cb558f2 // None // @ game+0xa8e590
	struct FIntVector WorldOriginLocationChanged(); // Function Engine.LevelScriptActor.WorldOriginLocationChanged // None // @ game+0x26a108
	struct FName *60b99c5d37(); // Function Engine.LevelScriptActor.*60b99c5d37 // None // @ game+0x5678a78
	void LevelReset(); // Function Engine.LevelScriptActor.LevelReset // None // @ game+0x26a108
};

// Class Engine.ChildActorComponent
// Size: 0x4f0 (Inherited: 0x4c0)
struct UChildActorComponent : USceneComponent {
	struct UClass* ChildActorClass; // 0x4c0(0x08)
	struct AActor* ChildActor; // 0x4c8(0x08)
	struct AActor* ChildActorTemplate; // 0x4d0(0x08)
	char pad_4D8[0x18]; // 0x4d8(0x18)

	void *d9cb75fbb5(); // Function Engine.ChildActorComponent.*d9cb75fbb5 // None // @ game+0x6378c5c
};

// Class Engine.CameraComponent
// Size: 0xab0 (Inherited: 0x4c0)
struct UCameraComponent : USceneComponent {
	float FieldOfView; // 0x4c0(0x04)
	float OrthoWidth; // 0x4c4(0x04)
	float OrthoNearClipPlane; // 0x4c8(0x04)
	float OrthoFarClipPlane; // 0x4cc(0x04)
	float AspectRatio; // 0x4d0(0x04)
	char bConstrainAspectRatio : 1; // 0x4d4(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x4d4(0x01)
	char bLockToHmd : 1; // 0x4d4(0x01)
	char bUsePawnControlRotation : 1; // 0x4d4(0x01)
	char pad_4D4_4 : 4; // 0x4d4(0x01)
	char pad_4D5[0x3]; // 0x4d5(0x03)
	enum class ECameraProjectionMode ProjectionMode; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	float PostProcessBlendWeight; // 0x4dc(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x4e0(0x570)
	char pad_A50[0x58]; // 0xa50(0x58)
	char bUseControllerViewRotation : 1; // 0xaa8(0x01)
	char pad_AA8_1 : 7; // 0xaa8(0x01)
	char pad_AA9[0x7]; // 0xaa9(0x07)

	void *8a619a71fe(); // Function Engine.CameraComponent.*8a619a71fe // None // @ game+0x63c0fb8
	void *79844d1a03(); // Function Engine.CameraComponent.*79844d1a03 // None // @ game+0x63c7b0c
	void *334e73d773(); // Function Engine.CameraComponent.*334e73d773 // None // @ game+0x63ca128
	void *ecceb55aba(); // Function Engine.CameraComponent.*ecceb55aba // None // @ game+0x63842d8
	void *5c14709928(); // Function Engine.CameraComponent.*5c14709928 // None // @ game+0x63cabd0
	void *05dd1e25b7(); // Function Engine.CameraComponent.*05dd1e25b7 // None // @ game+0x63caf5c
	void *c77d39d54d(); // Function Engine.CameraComponent.*c77d39d54d // None // @ game+0x63c376c
	void *cb0966e862(); // Function Engine.CameraComponent.*cb0966e862 // None // @ game+0x63c5dc0
	void *06060d8a3e(); // Function Engine.CameraComponent.*06060d8a3e // None // @ game+0x63ca090
	float *f1c8bde037(); // Function Engine.CameraComponent.*f1c8bde037 // None // @ game+0x639d2a0
	void *cb5cdd69b3(); // Function Engine.CameraComponent.*cb5cdd69b3 // None // @ game+0x63ce444
};

// Class Engine.Engine
// Size: 0xf50 (Inherited: 0x28)
struct UEngine : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UFont* TinyFont; // 0x30(0x08)
	struct FStringAssetReference TinyFontName; // 0x38(0x10)
	struct UFont* SmallFont; // 0x48(0x08)
	struct FStringAssetReference SmallFontName; // 0x50(0x10)
	struct UFont* *b2fb6d5918; // 0x60(0x08)
	struct FStringAssetReference MediumFontName; // 0x68(0x10)
	struct UFont* LargeFont; // 0x78(0x08)
	struct FStringAssetReference LargeFontName; // 0x80(0x10)
	struct UFont* *17d1a5c92f; // 0x90(0x08)
	struct FStringAssetReference SubtitleFontName; // 0x98(0x10)
	struct TArray<struct UFont*> *dddf4c9088; // 0xa8(0x10)
	float NetClientTicksPerSecond; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct UTexture2D* *cdaf3acb6f; // 0xc0(0x08)
	struct FString WireframeMaterialName; // 0xc8(0x10)
	struct FStringClassReference AvoidanceManagerClassName; // 0xd8(0x10)
	struct FString VertexColorViewModeMaterialName_RedOnly; // 0xe8(0x10)
	struct FStringClassReference GameViewportClientClassName; // 0xf8(0x10)
	struct FString PlayOnConsoleSaveDir; // 0x108(0x10)
	struct FString VertexColorViewModeMaterialName_GreenOnly; // 0x118(0x10)
	struct UTexture2D* *9735291500; // 0x128(0x08)
	float MaxPixelShaderAdditiveComplexityCount; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct FString LevelColorationUnlitMaterialName; // 0x138(0x10)
	struct UMaterialInstanceDynamic* *882cf2b119; // 0x148(0x08)
	struct FString LevelColorationLitMaterialName; // 0x150(0x10)
	struct UClass* *3b5143fa7c; // 0x160(0x08)
	struct TArray<struct FLinearColor> ShaderComplexityColors; // 0x168(0x10)
	struct FStringAssetReference MiniFontTextureName; // 0x178(0x10)
	struct TArray<struct FLinearColor> LightComplexityColors; // 0x188(0x10)
	struct TArray<struct F*1c8a6a1959> StatColorMappings; // 0x198(0x10)
	struct FColor *f8920bc53c; // 0x1a8(0x04)
	char pad_1AC[0x54]; // 0x1ac(0x54)
	struct FStringAssetReference HighFrequencyNoiseTextureName; // 0x200(0x10)
	struct TArray<struct FString> AdditionalFontNames; // 0x210(0x10)
	struct FStringAssetReference DefaultTextureName; // 0x220(0x10)
	char bPauseOnLossOfFocus : 1; // 0x230(0x01)
	char pad_230_1 : 7; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	int32 MaxParticleResize; // 0x234(0x04)
	struct FColor *c2b218ca0a; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct FStringAssetReference InvalidLightmapSettingsMaterialName; // 0x240(0x10)
	struct FStringAssetReference DefaultDiffuseTextureName; // 0x250(0x10)
	struct FString ShadedLevelColorationLitMaterialName; // 0x260(0x10)
	struct UMaterialInstanceDynamic* *67a2670d5b; // 0x270(0x08)
	char bSubtitlesEnabled : 1; // 0x278(0x01)
	char pad_278_1 : 7; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	struct FColor *1786a736fd; // 0x27c(0x04)
	float FixedFrameRate; // 0x280(0x04)
	float DisplayGamma; // 0x284(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x288(0x08)
	int32 *3fd60cfe7a; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct TArray<struct F*ecc95ccbfb> *6ae7184684; // 0x298(0x10)
	struct UTexture2D* DefaultTexture; // 0x2a8(0x08)
	struct UMaterial* WireframeMaterial; // 0x2b0(0x08)
	struct UMaterial* *904e29baa1; // 0x2b8(0x08)
	struct FString LightingTexelDensityName; // 0x2c0(0x10)
	struct UMaterialInstanceDynamic* *41801eae84; // 0x2d0(0x08)
	struct FStringClassReference AIControllerClassName; // 0x2d8(0x10)
	struct UTexture2D* MiniFontTexture; // 0x2e8(0x08)
	struct UMaterial* *6095551fc5; // 0x2f0(0x08)
	char pad_2F8[0x8]; // 0x2f8(0x08)
	struct UTexture2D* *3354aa5029; // 0x300(0x08)
	struct FString VertexColorMaterialName; // 0x308(0x10)
	struct UMaterial* *158ef2b728; // 0x318(0x08)
	struct UClass* *bae4c5214e; // 0x320(0x08)
	struct UClass* *db10b3ff9c; // 0x328(0x08)
	int32 MaxParticleResizeWarn; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct UMaterial* RemoveSurfaceMaterial; // 0x338(0x08)
	struct FColor *f649ca17a3; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct UMaterialInstanceDynamic* *419956b350; // 0x348(0x08)
	struct UClass* *cfd562edce; // 0x350(0x08)
	float PrimitiveProbablyVisibleTime; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct FStringAssetReference DefaultBokehTextureName; // 0x360(0x10)
	float RenderLightMapDensityColorScale; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct UClass* *920ed2f2c5; // 0x378(0x08)
	char bRenderLightMapDensityGrayscale : 1; // 0x380(0x01)
	char pad_380_1 : 7; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	struct FColor *4c5bc6371e; // 0x384(0x04)
	struct UTexture2D* *8bd6845839; // 0x388(0x08)
	struct FColor *18889b23a4; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct UTextureCube* *c142ea92cf; // 0x398(0x08)
	struct TArray<struct FLinearColor> HLODColorationColors; // 0x3a0(0x10)
	struct FLinearColor LightMapDensityVertexMappedColor; // 0x3b0(0x10)
	char bCanBlueprintsTickByDefault : 1; // 0x3c0(0x01)
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x3c0(0x01)
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x3c0(0x01)
	char bEnableEditorPSysRealtimeLOD : 1; // 0x3c0(0x01)
	char pad_3C0_4 : 1; // 0x3c0(0x01)
	char bSmoothFrameRate : 1; // 0x3c0(0x01)
	char bUseFixedFrameRate : 1; // 0x3c0(0x01)
	char pad_3C0_7 : 1; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct FStringClassReference DefaultBlueprintBaseClassName; // 0x3c8(0x10)
	struct UMaterial* *8c96c8d713; // 0x3d8(0x08)
	struct FStringClassReference GameSingletonClassName; // 0x3e0(0x10)
	struct TArray<struct F*305cf84e03> ActiveStructRedirects; // 0x3f0(0x10)
	struct TArray<struct FString> *4fa0bda95b; // 0x400(0x10)
	char pad_410[0x18]; // 0x410(0x18)
	float CameraTranslationThreshold; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct UMaterial* *289fbcf95e; // 0x430(0x08)
	char pad_438[0x8]; // 0x438(0x08)
	struct FString VertexColorViewModeMaterialName_ColorOnly; // 0x440(0x10)
	struct TArray<struct FLinearColor> LODColorationColors; // 0x450(0x10)
	int32 *4a63163b75; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct UClass* *6618489028; // 0x468(0x08)
	struct TArray<struct F*93620d28f2> ActivePluginRedirects; // 0x470(0x10)
	float MinLightMapDensity; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct UMaterial* LevelColorationLitMaterial; // 0x488(0x08)
	struct UMaterialInstanceDynamic* *5ecd46dbd6; // 0x490(0x08)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x498(0x10)
	float RenderLightMapDensityGrayscaleScale; // 0x4a8(0x04)
	float MinDesiredFrameRate; // 0x4ac(0x04)
	struct UGameUserSettings* GameUserSettings; // 0x4b0(0x08)
	struct UClass* *7ebef4665a; // 0x4b8(0x08)
	struct UMaterial* *569ed0c9a4; // 0x4c0(0x08)
	struct TArray<struct FLinearColor> StreamingAccuracyColors; // 0x4c8(0x10)
	float MaxES2PixelShaderAdditiveComplexityCount; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct UMaterial* DebugMeshMaterial; // 0x4e0(0x08)
	float MaxLightMapDensity; // 0x4e8(0x04)
	struct FColor *57697de8c8; // 0x4ec(0x04)
	struct UMaterialInstanceDynamic* *5b15e6100a; // 0x4f0(0x08)
	struct FStringAssetReference WeightMapPlaceholderTextureName; // 0x4f8(0x10)
	float MeshLODRange; // 0x508(0x04)
	struct FColor *d488e8b15f; // 0x50c(0x04)
	struct TArray<struct F*588c0e2b3a> ActiveGameNameRedirects; // 0x510(0x10)
	float NearClipPlane; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct FString VertexColorViewModeMaterialName_BlueOnly; // 0x528(0x10)
	struct FColor *701230078d; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct FStringAssetReference ArrowMaterialName; // 0x540(0x10)
	struct UAssetManager* AssetManager; // 0x550(0x08)
	struct UMaterial* *13a610002f; // 0x558(0x08)
	struct FColor *0aed2d0bb7; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct FString *9a7e172902; // 0x568(0x10)
	struct UMaterial* ShadedLevelColorationLitMaterial; // 0x578(0x08)
	struct UObject* *bc69c4c2bd; // 0x580(0x08)
	struct UMaterial* *d4696a6c50; // 0x588(0x08)
	struct FStringClassReference NavigationSystemClassName; // 0x590(0x10)
	struct UMaterial* LevelColorationUnlitMaterial; // 0x5a0(0x08)
	struct UMaterial* *fdd0f56f71; // 0x5a8(0x08)
	enum class *ea60031bfe *52dc8ce7e2; // 0x5b0(0x01)
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct FStringAssetReference DefaultPhysMaterialName; // 0x5b8(0x10)
	struct FStringAssetReference RemoveSurfaceMaterialName; // 0x5c8(0x10)
	struct UTexture* WeightMapPlaceholderTexture; // 0x5d8(0x08)
	struct FStringClassReference LocalPlayerClassName; // 0x5e0(0x10)
	struct UTexture* DefaultDiffuseTexture; // 0x5f0(0x08)
	struct FStringAssetReference DefaultBSPVertexTextureName; // 0x5f8(0x10)
	struct UMaterial* *e7a58e7605; // 0x608(0x08)
	struct FFloatRange SmoothedFrameRateRange; // 0x610(0x10)
	struct FStringClassReference WorldSettingsClassName; // 0x620(0x10)
	struct FColor *c79f672cb1; // 0x630(0x04)
	char pad_634[0x4]; // 0x634(0x04)
	struct UClass* *e7983e4706; // 0x638(0x08)
	struct UTexture2D* *d8417c9941; // 0x640(0x08)
	struct FColor *cb2dd6ab2d; // 0x648(0x04)
	char pad_64C[0x4]; // 0x64c(0x04)
	struct UTexture2D* *07a2faa8d2; // 0x650(0x08)
	struct FLinearColor LightMapDensitySelectedColor; // 0x658(0x10)
	struct FLinearColor DefaultSelectedMaterialColor; // 0x668(0x10)
	struct FLinearColor *44bd42ad56; // 0x678(0x10)
	struct FLinearColor *ba04574914; // 0x688(0x10)
	struct FLinearColor *8e0bdb2efe; // 0x698(0x10)
	struct FLinearColor *613128785f; // 0x6a8(0x10)
	bool *f9293e381d; // 0x6b8(0x01)
	char pad_6B9[0x3]; // 0x6b9(0x03)
	char bEnableOnScreenDebugMessages : 1; // 0x6bc(0x01)
	char *216307556a : 1; // 0x6bc(0x01)
	char bSuppressMapWarnings : 1; // 0x6bc(0x01)
	char bDisableAILogging : 1; // 0x6bc(0x01)
	char pad_6BC_4 : 4; // 0x6bc(0x01)
	char pad_6BD[0x3]; // 0x6bd(0x03)
	uint32 bEnableVisualLogRecordingOnStart; // 0x6c0(0x04)
	struct FBox *3dc6cbcd94; // 0x6c4(0x1c)
	char pad_6E0[0x4]; // 0x6e0(0x04)
	int32 *7b0f12bdd7; // 0x6e4(0x04)
	char *8bdcda74ad : 1; // 0x6e8(0x01)
	char pad_6E8_1 : 7; // 0x6e8(0x01)
	char pad_6E9[0x7]; // 0x6e9(0x07)
	struct FString ParticleEventManagerClassPath; // 0x6f0(0x10)
	char pad_700[0x20]; // 0x700(0x20)
	float SelectionHighlightIntensity; // 0x720(0x04)
	float *460eba5c32; // 0x724(0x04)
	float BSPSelectionHighlightIntensity; // 0x728(0x04)
	float HoverHighlightIntensity; // 0x72c(0x04)
	float *fdb4353d84; // 0x730(0x04)
	float PrimitiveBaseIntensity; // 0x734(0x04)
	float PrimitiveSelectedIntensity; // 0x738(0x04)
	float PrimitiveHoverIntensity; // 0x73c(0x04)
	char pad_740[0x290]; // 0x740(0x290)
	struct FStringClassReference PhysicsCollisionHandlerClassName; // 0x9d0(0x10)
	struct FStringAssetReference DebugMeshMaterialName; // 0x9e0(0x10)
	struct FStringAssetReference PreIntegratedSkinBRDFTextureName; // 0x9f0(0x10)
	struct TArray<struct FLinearColor> StationaryLightOverlapColors; // 0xa00(0x10)
	struct FStringClassReference AssetManagerClassName; // 0xa10(0x10)
	struct UClass* *ec063d291c; // 0xa20(0x08)
	char bHardwareSurveyEnabled : 1; // 0xa28(0x01)
	char pad_A28_1 : 7; // 0xa28(0x01)
	char pad_A29[0x7]; // 0xa29(0x07)
	struct TArray<struct F*96501223f2> ActiveClassRedirects; // 0xa30(0x10)
	struct UMaterial* VertexColorMaterial; // 0xa40(0x08)
	int32 MaximumLoopIterationCount; // 0xa48(0x04)
	char pad_A4C[0x4]; // 0xa4c(0x04)
	struct FStringAssetReference LightMapDensityTextureName; // 0xa50(0x10)
	char pad_A60[0x1d0]; // 0xa60(0x1d0)
	struct TArray<struct F*34e3a3f3fe> NetDriverDefinitions; // 0xc30(0x10)
	struct TArray<struct FString> ServerActors; // 0xc40(0x10)
	struct TArray<struct FString> *ac79ee85a0; // 0xc50(0x10)
	char *2eec60230d : 1; // 0xc60(0x01)
	char pad_C60_1 : 7; // 0xc60(0x01)
	char pad_C61[0x3]; // 0xc61(0x03)
	struct FLinearColor LightingOnlyBrightness; // 0xc64(0x10)
	struct FLinearColor LightingOnlySpecular; // 0xc74(0x10)
	char pad_C84[0x4]; // 0xc84(0x04)
	struct UMaterialInstanceDynamic* *7d728f8e49; // 0xc88(0x08)
	struct FStringClassReference GameUserSettingsClassName; // 0xc90(0x10)
	struct FStringAssetReference PreviewShadowsIndicatorMaterialName; // 0xca0(0x10)
	char bAllowMatureLanguage : 1; // 0xcb0(0x01)
	char pad_CB0_1 : 7; // 0xcb0(0x01)
	char pad_CB1[0x3]; // 0xcb1(0x03)
	float CameraRotationThreshold; // 0xcb4(0x04)
	int32 *6953cade36; // 0xcb8(0x04)
	char pad_CBC[0x4]; // 0xcbc(0x04)
	struct FString ShadedLevelColorationUnlitMaterialName; // 0xcc0(0x10)
	struct FStringAssetReference DefaultBloomKernelTextureName; // 0xcd0(0x10)
	float *b1796a28c0; // 0xce0(0x04)
	char pad_CE4[0x4]; // 0xce4(0x04)
	struct FStringAssetReference DefaultReflectionCaptureTextureName; // 0xce8(0x10)
	struct FStringClassReference LevelScriptActorClassName; // 0xcf8(0x10)
	char bSubtitlesForcedOff : 1; // 0xd08(0x01)
	char pad_D08_1 : 7; // 0xd08(0x01)
	char pad_D09[0x7]; // 0xd09(0x07)
	struct FStringClassReference ConsoleClassName; // 0xd10(0x10)
	struct UGameViewportClient* GameViewport; // 0xd20(0x08)
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0xd28(0x01)
	char pad_D28_1 : 7; // 0xd28(0x01)
	char pad_D29[0x3]; // 0xd29(0x03)
	int32 NumPawnsAllowedToBeSpawnedInAFrame; // 0xd2c(0x04)
	char bShouldGenerateLowQualityLightmaps : 1; // 0xd30(0x01)
	char pad_D30_1 : 7; // 0xd30(0x01)
	char pad_D31[0x7]; // 0xd31(0x07)
	struct FString *258f8c994b; // 0xd38(0x10)
	struct FColor *a1f148b920; // 0xd48(0x04)
	char pad_D4C[0x4]; // 0xd4c(0x04)
	struct UMaterial* *b2d86d5e63; // 0xd50(0x08)
	float MaxOcclusionPixelsFraction; // 0xd58(0x04)
	struct F*eab1f0d427 PhysicErrorCorrection; // 0xd5c(0x1c)
	struct TArray<struct FLinearColor> QuadComplexityColors; // 0xd78(0x10)
	float IdealLightMapDensity; // 0xd88(0x04)
	char pad_D8C[0x14]; // 0xd8c(0x14)
	int32 *978b7abcd7; // 0xda0(0x04)
	char pad_DA4[0x1ac]; // 0xda4(0x1ac)
};

// Class Engine.*e0f0196484
// Size: 0x38 (Inherited: 0x28)
struct U*e0f0196484 : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Engine.GameViewportClient
// Size: 0x660 (Inherited: 0x38)
struct UGameViewportClient : U*e0f0196484 {
	char pad_38[0x150]; // 0x38(0x150)
	struct TArray<struct F*a821055bfd> *74869acfa5; // 0x188(0x10)
	char pad_198[0xd0]; // 0x198(0xd0)
	struct UConsole* *9690a62fe8; // 0x268(0x08)
	char pad_270[0x1f8]; // 0x270(0x1f8)
	struct UGameInstance* GameInstance; // 0x468(0x08)
	char pad_470[0x1f0]; // 0x470(0x1f0)

	void ShowTitleSafeArea(); // Function Engine.GameViewportClient.ShowTitleSafeArea // None // @ game+0x63d12cc
	void SetConsoleTarget(); // Function Engine.GameViewportClient.SetConsoleTarget // None // @ game+0x63c3558
	void SSSwapControllers(); // Function Engine.GameViewportClient.SSSwapControllers // None // @ game+0x63be5b0
};

// Class Engine.Console
// Size: 0x108 (Inherited: 0x28)
struct UConsole : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct ULocalPlayer* *2d14c03552; // 0x38(0x08)
	struct UTexture2D* *a3cbd11a2c; // 0x40(0x08)
	struct UTexture2D* *102ee2a7c7; // 0x48(0x08)
	char pad_50[0x18]; // 0x50(0x18)
	struct TArray<struct FString> HistoryBuffer; // 0x68(0x10)
	char pad_78[0x90]; // 0x78(0x90)
};

// Class Engine.NetDriver
// Size: 0x4c0 (Inherited: 0x28)
struct UNetDriver : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString NetConnectionClassName; // 0x30(0x10)
	int32 MaxDownloadSize; // 0x40(0x04)
	char bClampListenServerTickRate : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32 NetServerMaxTickRate; // 0x48(0x04)
	int32 MaxInternetClientRate; // 0x4c(0x04)
	int32 MaxClientRate; // 0x50(0x04)
	float ServerTravelPause; // 0x54(0x04)
	float SpawnPrioritySeconds; // 0x58(0x04)
	float RelevantTimeout; // 0x5c(0x04)
	float KeepAliveTime; // 0x60(0x04)
	float InitialConnectTimeout; // 0x64(0x04)
	float ConnectionTimeout; // 0x68(0x04)
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x6c(0x04)
	bool bNoTimeouts; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct UNetConnection* *4c8591292a; // 0x78(0x08)
	struct TArray<struct UNetConnection*> *b7c94b0f77; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)
	struct UWorld* World; // 0xb8(0x08)
	struct UPackage* *2848450d7c; // 0xc0(0x08)
	char pad_C8[0x20]; // 0xc8(0x20)
	struct UClass* *b10fcf621a; // 0xe8(0x08)
	struct UProperty* *85730e860f; // 0xf0(0x08)
	struct UProperty* *225fd045d9; // 0xf8(0x08)
	struct FName NetDriverName; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)
	float Time; // 0x110(0x04)
	char pad_114[0x3ac]; // 0x114(0x3ac)
};

// Class Engine.DemoNetDriver
// Size: 0xc60 (Inherited: 0x4c0)
struct UDemoNetDriver : UNetDriver {
	char pad_4C0[0xf8]; // 0x4c0(0xf8)
	struct TMap<struct FString, struct F*5a3c4c23cd> *32f47fcbd9; // 0x5b8(0x50)
	char pad_608[0x438]; // 0x608(0x438)
	bool *6235ee652d; // 0xa40(0x01)
	char pad_A41[0x21f]; // 0xa41(0x21f)
};

// Class Engine.DestructibleComponent
// Size: 0xd50 (Inherited: 0xc90)
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0xc88(0x01)
	struct TArray<struct F*ea886402eb> FractureEffects; // 0xc90(0x10)
	bool bEnableHardSleeping; // 0xca0(0x01)
	char pad_CA1_1 : 7; // 0xca1(0x01)
	char pad_CA2[0x2]; // 0xca2(0x02)
	float LargeChunkThreshold; // 0xca4(0x04)
	char pad_CA8[0x10]; // 0xca8(0x10)
	struct FMulticastDelegate OnComponentFracture; // 0xcb8(0x10)
	char pad_CC8[0x88]; // 0xcc8(0x88)

	float *d2f2b4878a(); // Function Engine.DestructibleComponent.*d2f2b4878a // None // @ game+0x63867b4
	void *8719907661(); // Function Engine.DestructibleComponent.*8719907661 // None // @ game+0x639e83c
	void *ead89ecafd(struct FVector HitLocation); // Function Engine.DestructibleComponent.*ead89ecafd // None // @ game+0x63855b8
	void *68e3b0e890(); // Function Engine.DestructibleComponent.*68e3b0e890 // None // @ game+0x63c46d8
};

// Class Engine.GameEngine
// Size: 0xfb0 (Inherited: 0xf50)
struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xf48(0x04)
	float ServerFlushLogInterval; // 0xf4c(0x04)
	struct UGameInstance* GameInstance; // 0xf50(0x08)
	char pad_F60[0x38]; // 0xf60(0x38)
	struct TArray<struct UWorld*> *3c599a0734; // 0xf98(0x10)
	char pad_FA8[0x8]; // 0xfa8(0x08)
};

// Class Engine.Player
// Size: 0x48 (Inherited: 0x28)
struct UPlayer : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	int32 *271682eb8c; // 0x38(0x04)
	int32 ConfiguredInternetSpeed; // 0x3c(0x04)
	int32 ConfiguredLanSpeed; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.NetConnection
// Size: 0x65848 (Inherited: 0x48)
struct UNetConnection : UPlayer {
	struct TArray<struct UChildConnection*> Children; // 0x48(0x10)
	struct UNetDriver* Driver; // 0x58(0x08)
	struct UClass* *2620c0f95a; // 0x60(0x08)
	struct UPackageMap* PackageMap; // 0x68(0x08)
	struct TArray<struct UChannel*> *db17e81f9a; // 0x70(0x10)
	struct TArray<struct AActor*> *4c97345279; // 0x80(0x10)
	struct AActor* ViewTarget; // 0x90(0x08)
	struct AActor* *52a10bb853; // 0x98(0x08)
	int32 *31a15aa452; // 0xa0(0x04)
	char *2b1c0c33d1 : 1; // 0xa4(0x01)
	char pad_A4_1 : 1; // 0xa4(0x01)
	char *ae08848d84 : 1; // 0xa4(0x01)
	char pad_A4_3 : 5; // 0xa4(0x01)
	char pad_A5[0x8b]; // 0xa5(0x8b)
	struct TArray<struct UChannel*> *c0c274a36f; // 0x130(0x10)
	char pad_140[0x28]; // 0x140(0x28)
	struct FUniqueNetIdRepl PlayerId; // 0x168(0x18)
	char pad_180[0x68]; // 0x180(0x68)
	double *5be392aec6; // 0x1e8(0x08)
	char pad_1F0[0x65538]; // 0x1f0(0x65538)
	struct TArray<struct UChannel*> *923a8e82b0; // 0x65728(0x10)
	char pad_65738[0x110]; // 0x65738(0x110)
};

// Class Engine.ForceFeedbackEffect
// Size: 0x40 (Inherited: 0x28)
struct UForceFeedbackEffect : UObject {
	struct TArray<struct F*4d87801027> ChannelDetails; // 0x28(0x10)
	float Duration; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.GameSession
// Size: 0x410 (Inherited: 0x3f8)
struct AGameSession : AInfo {
	int32 MaxSpectators; // 0x3f8(0x04)
	int32 MaxPlayers; // 0x3fc(0x04)
	int32 *9a06514058; // 0x400(0x04)
	bool MaxSplitscreensPerConnection; // 0x404(0x01)
	bool bRequiresPushToTalk; // 0x405(0x01)
	char pad_406[0x2]; // 0x406(0x02)
	struct FName SessionName; // 0x408(0x08)
};

// Class Engine.InstancedStaticMeshComponent
// Size: 0xc70 (Inherited: 0xb90)
struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	struct TArray<struct F*75ea8e2bf3> PerInstanceSMData; // 0xb90(0x10)
	int32 InstancingRandomSeed; // 0xba0(0x04)
	int32 InstanceStartCullDistance; // 0xba4(0x04)
	int32 InstanceEndCullDistance; // 0xba8(0x04)
	char pad_BAC[0x4]; // 0xbac(0x04)
	struct TArray<int32> *6f47c66abe; // 0xbb0(0x10)
	struct TArray<int32> *56331a2d03; // 0xbc0(0x10)
	char pad_BD0[0x78]; // 0xbd0(0x78)
	struct UPhysicsSerializer* PhysicsSerializer; // 0xc48(0x08)
	bool *66d9b36bd0; // 0xc50(0x01)
	char pad_C51[0x3]; // 0xc51(0x03)
	int32 *0f124e2c4d; // 0xc54(0x04)
	struct TArray<struct F*379f451670> *98820ffda4; // 0xc58(0x10)
	char pad_C68[0x8]; // 0xc68(0x08)

	struct FVector4 *ceef77ed7f(); // Function Engine.InstancedStaticMeshComponent.*ceef77ed7f // None // @ game+0x63c761c
	void *2a75f57149(); // Function Engine.InstancedStaticMeshComponent.*2a75f57149 // None // @ game+0x63bd85c
	struct FVector4 *a984b9a9ce(); // Function Engine.InstancedStaticMeshComponent.*a984b9a9ce // None // @ game+0x63840e4
	bool *19b8138a81(); // Function Engine.InstancedStaticMeshComponent.*19b8138a81 // None // @ game+0x63a0920
	void *028d8429ac(struct FVector4 InPerInstanceCustomData); // Function Engine.InstancedStaticMeshComponent.*028d8429ac // None // @ game+0x6383ca4
	void *7786d1a996(); // Function Engine.InstancedStaticMeshComponent.*7786d1a996 // None // @ game+0x63a02a4
	bool *43aa6233e3(); // Function Engine.InstancedStaticMeshComponent.*43aa6233e3 // None // @ game+0x63a10d4
	void *b96a030999(); // Function Engine.InstancedStaticMeshComponent.*b96a030999 // None // @ game+0x63c4108
	struct FVector4 *1ab6a18aad(); // Function Engine.InstancedStaticMeshComponent.*1ab6a18aad // None // @ game+0x63a0490
	float *0b1ef7cb51(bool bSphereInWorldSpace); // Function Engine.InstancedStaticMeshComponent.*0b1ef7cb51 // None // @ game+0x63a123c
	void *95a4257f8b(); // Function Engine.InstancedStaticMeshComponent.*95a4257f8b // None // @ game+0xbcac8c
	bool *6075d3ac8a(); // Function Engine.InstancedStaticMeshComponent.*6075d3ac8a // None // @ game+0x63d845c
};

// Class Engine.HierarchicalInstancedStaticMeshComponent
// Size: 0xda0 (Inherited: 0xc70)
struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	char pad_C70[0x68]; // 0xc70(0x68)
	struct TArray<int32> *6f5dc765ea; // 0xcd8(0x10)
	int32 *eaed97f0e4; // 0xce8(0x04)
	char pad_CEC[0x4]; // 0xcec(0x04)
	struct FBox *1bd5797291; // 0xcf0(0x1c)
	struct FBox *cf161024f3; // 0xd0c(0x1c)
	struct TArray<struct FBox> *7d5adf59ca; // 0xd28(0x10)
	char pad_D38[0x20]; // 0xd38(0x20)
	int32 *64f5d9de39; // 0xd58(0x04)
	struct FBoxSphereBounds *bfbf84d4cc; // 0xd5c(0x1c)
	char *0870e284ac : 1; // 0xd78(0x01)
	char *bea543a7e6 : 1; // 0xd78(0x01)
	char pad_D78_2 : 6; // 0xd78(0x01)
	char pad_D79[0x27]; // 0xd79(0x27)

	struct TArray<int32> *ba760e9eef(); // Function Engine.HierarchicalInstancedStaticMeshComponent.*ba760e9eef // None // @ game+0x63bd900
};

// Class Engine.*fc79daab3f
// Size: 0xda0 (Inherited: 0xda0)
struct U*fc79daab3f : UHierarchicalInstancedStaticMeshComponent {
	int32 MinVertsToSplitNodeForGrid; // 0xd98(0x04)
};

// Class Engine.LocalPlayer
// Size: 0x290 (Inherited: 0x48)
struct ULocalPlayer : UPlayer {
	char pad_48[0x28]; // 0x48(0x28)
	struct UClass* *2d967ee0dc; // 0x70(0x08)
	char pad_78[0x60]; // 0x78(0x60)
	char *87852b9d3b : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x1b7]; // 0xd9(0x1b7)
};

// Class Engine.*4d0023a102
// Size: 0x28 (Inherited: 0x28)
struct U*4d0023a102 : UObject {
};

// Class Engine.PlayerCameraManager
// Size: 0x1d00 (Inherited: 0x3f8)
struct APlayerCameraManager : AActor {
	struct APlayerController* *9709ac5021; // 0x3f8(0x08)
	struct USceneComponent* TransformComponent; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)
	struct F*af5ae819d5 *5e40474673; // 0x410(0x5d0)
	char pad_9E0[0x4]; // 0x9e0(0x04)
	float ViewYawMax; // 0x9e4(0x04)
	char pad_9E8[0x4]; // 0x9e8(0x04)
	float DefaultOrthoWidth; // 0x9ec(0x04)
	char pad_9F0[0x8]; // 0x9f0(0x08)
	struct TArray<struct UClass*> DefaultModifiers; // 0x9f8(0x10)
	float DefaultFOV; // 0xa08(0x04)
	float ViewRollMax; // 0xa0c(0x04)
	float ViewRollMin; // 0xa10(0x04)
	float FreeCamDistance; // 0xa14(0x04)
	char pad_A18[0x28]; // 0xa18(0x28)
	struct F*0653442295 ViewTarget; // 0xa40(0x5e0)
	char pad_1020[0x14]; // 0x1020(0x14)
	struct FVector FreeCamOffset; // 0x1034(0x0c)
	struct TArray<struct U*ea345062c7*> *a8a6f91d9b; // 0x1040(0x10)
	struct FVector ViewTargetOffset; // 0x1050(0x0c)
	float ViewYawMin; // 0x105c(0x04)
	float ViewPitchMin; // 0x1060(0x04)
	char pad_1064[0x1c]; // 0x1064(0x1c)
	struct F*0653442295 *41f267243b; // 0x1080(0x5e0)
	struct TArray<struct AEmitterCameraLensEffectBase*> *d3c8bed385; // 0x1660(0x10)
	struct U*436388bfde* *c32a2345bf; // 0x1670(0x08)
	struct U*de6aae17ea* *480f64fe2f[0x08]; // 0x1678(0x40)
	struct TArray<struct FPostProcessSettings> *3626307aef; // 0x16b8(0x10)
	char pad_16C8[0x10]; // 0x16c8(0x10)
	struct TArray<struct U*de6aae17ea*> *0ec866bd4e; // 0x16d8(0x10)
	struct TArray<struct U*de6aae17ea*> *295e276da3; // 0x16e8(0x10)
	struct ACameraActor* *463d40d827; // 0x16f8(0x08)
	char bIsOrthographic : 1; // 0x1700(0x01)
	char bDefaultConstrainAspectRatio : 1; // 0x1700(0x01)
	char pad_1700_2 : 5; // 0x1700(0x01)
	char bUseClientSideCameraUpdates : 1; // 0x1700(0x01)
	char pad_1701[0x7]; // 0x1701(0x07)
	float ViewPitchMax; // 0x1708(0x04)
	char pad_170C[0x4]; // 0x170c(0x04)
	struct F*af5ae819d5 *bdd4a92675; // 0x1710(0x5d0)
	char pad_1CE0[0x18]; // 0x1ce0(0x18)
	float DefaultAspectRatio; // 0x1cf8(0x04)
	char pad_1CFC[0x4]; // 0x1cfc(0x04)

	void *fd287b77ad(); // Function Engine.PlayerCameraManager.*fd287b77ad // None // @ game+0x636741c
	struct FRotator *ed9ad74d63(float Rate, float BlendInTime, bool bLoop, float Duration); // Function Engine.PlayerCameraManager.*ed9ad74d63 // None // @ game+0x6372fb8
	struct UCameraAnim* *71bebfc691(); // Function Engine.PlayerCameraManager.*71bebfc691 // None // @ game+0x637e3d0
	void *b93793f9f5(); // Function Engine.PlayerCameraManager.*b93793f9f5 // None // @ game+0x569f71c
	void *2c3667dab0(struct UClass* ModifierClass); // Function Engine.PlayerCameraManager.*2c3667dab0 // None // @ game+0x6364870
	void *abe4210355(); // Function Engine.PlayerCameraManager.*abe4210355 // None // @ game+0x9c7ef8
	void *c109a4af55(); // Function Engine.PlayerCameraManager.*c109a4af55 // None // @ game+0x637e338
	struct UClass* *99927376d9(); // Function Engine.PlayerCameraManager.*99927376d9 // None // @ game+0x635c174
	void PhotographyCameraModify(struct FVector NewCameraLocation, struct FVector OriginalCameraLocation); // Function Engine.PlayerCameraManager.PhotographyCameraModify // None // @ game+0x6372c24
	void *9947d93eda(); // Function Engine.PlayerCameraManager.*9947d93eda // None // @ game+0x5661510
	struct UCameraShake* *ecad5d6db1(); // Function Engine.PlayerCameraManager.*ecad5d6db1 // None // @ game+0x637e710
	void *310c2a0c34(); // Function Engine.PlayerCameraManager.*310c2a0c34 // None // @ game+0x6373af8
	void OnPhotographySessionEnd(); // Function Engine.PlayerCameraManager.OnPhotographySessionEnd // None // @ game+0x7a35ac
	void *bc8833b492(); // Function Engine.PlayerCameraManager.*bc8833b492 // None // @ game+0x637e2a0
	struct U*de6aae17ea* *9bb7469531(); // Function Engine.PlayerCameraManager.*9bb7469531 // None // @ game+0x637e62c
	void OnPhotographyMultiPartCaptureStart(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureStart // None // @ game+0x7a3ba0
	void *46f1bc277b(struct FLinearColor Color); // Function Engine.PlayerCameraManager.*46f1bc277b // None // @ game+0x637af4c
	void *b9aa07e814(); // Function Engine.PlayerCameraManager.*b9aa07e814 // None // @ game+0x6366440
	struct FRotator *1f3d8a2b99(); // Function Engine.PlayerCameraManager.*1f3d8a2b99 // None // @ game+0xa6cd2c
	void *e931c3da1d(struct UClass* ModifierClass); // Function Engine.PlayerCameraManager.*e931c3da1d // None // @ game+0x635d590
	void *0d58a7376f(); // Function Engine.PlayerCameraManager.*0d58a7376f // None // @ game+0x56039c8
	float BlueprintUpdateCamera(); // Function Engine.PlayerCameraManager.BlueprintUpdateCamera // None // @ game+0x26a108
	void *98b7b74d50(struct UClass* Shake); // Function Engine.PlayerCameraManager.*98b7b74d50 // None // @ game+0x637e4b4
	void *bfe31feb0f(); // Function Engine.PlayerCameraManager.*bfe31feb0f // None // @ game+0x6373b8c
	bool *101753f358(); // Function Engine.PlayerCameraManager.*101753f358 // None // @ game+0x637df9c
	void OnPhotographySessionStart(); // Function Engine.PlayerCameraManager.OnPhotographySessionStart // None // @ game+0x567b1d0
	void OnPhotographyMultiPartCaptureEnd(); // Function Engine.PlayerCameraManager.OnPhotographyMultiPartCaptureEnd // None // @ game+0xcbeb68
};

// Class Engine.PlayerInput
// Size: 0x488 (Inherited: 0x28)
struct UPlayerInput : UObject {
	char pad_28[0xf8]; // 0x28(0xf8)
	struct TArray<struct F*c1a57810c7> DebugExecBindings; // 0x120(0x10)
	char pad_130[0x30]; // 0x130(0x30)
	struct TArray<struct FName> InvertedAxis; // 0x160(0x10)
	char pad_170[0x318]; // 0x170(0x318)

	void SetGamePadDeadZone(); // Function Engine.PlayerInput.SetGamePadDeadZone // None // @ game+0x6379f48
	void SetGamePadSensitivityOf(); // Function Engine.PlayerInput.SetGamePadSensitivityOf // None // @ game+0x637a1b4
	void SetMouseSensitivity(); // Function Engine.PlayerInput.SetMouseSensitivity // None // @ game+0x637b53c
	struct FKey SetGamePadDeadZoneOf(); // Function Engine.PlayerInput.SetGamePadDeadZoneOf // None // @ game+0x6379fe0
	void SetGamePadSensitivity(); // Function Engine.PlayerInput.SetGamePadSensitivity // None // @ game+0x637a11c
	void InvertAxisKey(); // Function Engine.PlayerInput.InvertAxisKey // None // @ game+0x636b900
	void SetBind(struct FName Param0); // Function Engine.PlayerInput.SetBind // None // @ game+0x63786e8
	void ClearSmoothing(); // Function Engine.PlayerInput.ClearSmoothing // None // @ game+0x635ec7c
	void InvertAxis(); // Function Engine.PlayerInput.InvertAxis // None // @ game+0x636b870
};

// Class Engine.NavigationData
// Size: 0x5a0 (Inherited: 0x3f8)
struct ANavigationData : AActor {
	struct UPrimitiveComponent* RenderingComp; // 0x3f8(0x08)
	struct F*b471f00637 *b471f00637; // 0x400(0x50)
	char *df1535e956 : 1; // 0x450(0x01)
	char bForceRebuildOnLoad : 1; // 0x450(0x01)
	char bCanBeMainNavData : 1; // 0x450(0x01)
	char bCanSpawnOnRebuild : 1; // 0x450(0x01)
	char bRebuildAtRuntime : 1; // 0x450(0x01)
	char pad_450_5 : 3; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	float ObservedPathsTickInterval; // 0x458(0x04)
	char *706aa73b33 : 1; // 0x45c(0x01)
	char pad_45C_1 : 7; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	uint32 DataVersion; // 0x460(0x04)
	char pad_464[0xd4]; // 0x464(0xd4)
	struct TArray<struct F*4474e4d98f> *2b8f015cb0; // 0x538(0x10)
	char pad_548[0x58]; // 0x548(0x58)
};

// Class Engine.RecastNavMesh
// Size: 0x6b0 (Inherited: 0x5a0)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x5a0(0x01)
	char bDrawPolyEdges : 1; // 0x5a0(0x01)
	char bDrawFilledPolys : 1; // 0x5a0(0x01)
	char bDrawNavMeshEdges : 1; // 0x5a0(0x01)
	char *46090cb9f2 : 1; // 0x5a0(0x01)
	char *a1477ce159 : 1; // 0x5a0(0x01)
	char *5db3fd3ad2 : 1; // 0x5a0(0x01)
	char *5fb9c971a8 : 1; // 0x5a0(0x01)
	char *002079ed4a : 1; // 0x5a1(0x01)
	char *b21e7a7c06 : 1; // 0x5a1(0x01)
	char *eeca050b48 : 1; // 0x5a1(0x01)
	char *d3d77d15ca : 1; // 0x5a1(0x01)
	char *643ea53fc0 : 1; // 0x5a1(0x01)
	char *4ed371a330 : 1; // 0x5a1(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x5a1(0x01)
	char *05cdc8618a : 1; // 0x5a1(0x01)
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
	int32 *b2cc0e49e0; // 0x5e4(0x04)
	int32 *eceaad5847; // 0x5e8(0x04)
	int32 *b000b456cd; // 0x5ec(0x04)
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

// Class Engine.*6653cc84aa
// Size: 0x38 (Inherited: 0x28)
struct U*6653cc84aa : UObject {
	struct TArray<struct F*1d24f23e59> *c899da6a1d; // 0x28(0x10)
};

// Class Engine.SceneCaptureComponent
// Size: 0x540 (Inherited: 0x4c0)
struct USceneCaptureComponent : USceneComponent {
	struct TArray<struct UPrimitiveComponent*> *1b85a647bc; // 0x4c0(0x10)
	struct TArray<struct AActor*> HiddenActors; // 0x4d0(0x10)
	struct TArray<struct UPrimitiveComponent*> *2c21281200; // 0x4e0(0x10)
	struct TArray<struct AActor*> ShowOnlyActors; // 0x4f0(0x10)
	bool bIsLobbyCapture; // 0x500(0x01)
	bool bCaptureEveryFrame; // 0x501(0x01)
	bool bCaptureOnMovement; // 0x502(0x01)
	char pad_503[0x1]; // 0x503(0x01)
	float LODDistanceFactor; // 0x504(0x04)
	float MaxViewDistanceOverride; // 0x508(0x04)
	int32 CaptureSortPriority; // 0x50c(0x04)
	struct TArray<struct F*8f41bd28ce> ShowFlagSettings; // 0x510(0x10)
	char pad_520[0x20]; // 0x520(0x20)

	void *c79e20c089(); // Function Engine.SceneCaptureComponent.*c79e20c089 // None // @ game+0x63d103c
	void *a013f7703f(); // Function Engine.SceneCaptureComponent.*a013f7703f // None // @ game+0x63c2af0
	void *e10656b7d7(); // Function Engine.SceneCaptureComponent.*e10656b7d7 // None // @ game+0x63d10cc
	void *501173f52c(); // Function Engine.SceneCaptureComponent.*501173f52c // None // @ game+0x63908a4
	void *603a4566ca(); // Function Engine.SceneCaptureComponent.*603a4566ca // None // @ game+0x63a9694
	void *6b6e40642f(); // Function Engine.SceneCaptureComponent.*6b6e40642f // None // @ game+0x63a9834
	void *37577cf286(); // Function Engine.SceneCaptureComponent.*37577cf286 // None // @ game+0x63bdb4c
	void *ec2de27f06(); // Function Engine.SceneCaptureComponent.*ec2de27f06 // None // @ game+0x63bdbdc
};

// Class Engine.SceneCaptureComponent2D
// Size: 0xb80 (Inherited: 0x540)
struct USceneCaptureComponent2D : USceneCaptureComponent {
	enum class ECameraProjectionMode ProjectionType; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	float FOVAngle; // 0x544(0x04)
	bool *7ed08cdd15; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	float *447c892cd2; // 0x54c(0x04)
	float OrthoWidth; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct UTextureRenderTarget2D* TextureTarget; // 0x558(0x08)
	enum class *fc99d3fe06 CaptureSource; // 0x560(0x01)
	enum class *0a7c972e56 CompositeMode; // 0x561(0x01)
	char pad_562[0x2]; // 0x562(0x02)
	struct FLinearColor LightingOnlyBrightness; // 0x564(0x10)
	struct FLinearColor LightingOnlySpecular; // 0x574(0x10)
	struct FLinearColor LightingOnlyCustomData; // 0x584(0x10)
	float LightingOnlyCustomDataAlpha; // 0x594(0x04)
	char pad_598[0x8]; // 0x598(0x08)
	struct FPostProcessSettings PostProcessSettings; // 0x5a0(0x570)
	float PostProcessBlendWeight; // 0xb10(0x04)
	bool bUseCustomProjectionMatrix; // 0xb14(0x01)
	char pad_B15[0xb]; // 0xb15(0x0b)
	struct FMatrix CustomProjectionMatrix; // 0xb20(0x40)
	char *02c554f858 : 1; // 0xb60(0x01)
	char pad_B60_1 : 7; // 0xb60(0x01)
	char pad_B61[0x3]; // 0xb61(0x03)
	bool bEnableClipPlane; // 0xb64(0x01)
	char pad_B65[0x3]; // 0xb65(0x03)
	struct FVector ClipPlaneBase; // 0xb68(0x0c)
	struct FVector ClipPlaneNormal; // 0xb74(0x0c)

	TScriptInterface<struct UBlendableInterface> *ecceb55aba(); // Function Engine.SceneCaptureComponent2D.*ecceb55aba // None // @ game+0x6384500
	void CaptureScene(); // Function Engine.SceneCaptureComponent2D.CaptureScene // None // @ game+0x63901a8
};

// Class Engine.ArrowComponent
// Size: 0xa00 (Inherited: 0x9f0)
struct UArrowComponent : UPrimitiveComponent {
	struct FColor ArrowColor; // 0x9e8(0x04)
	float ArrowSize; // 0x9ec(0x04)
	bool bIsScreenSizeScaled; // 0x9f0(0x01)
	float ScreenSize; // 0x9f4(0x04)
	char bTreatAsASprite : 1; // 0x9f8(0x01)
	char pad_9FD_1 : 7; // 0x9fd(0x01)
	char pad_9FE[0x2]; // 0x9fe(0x02)

	void SetArrowColor(); // Function Engine.ArrowComponent.SetArrowColor // None // @ game+0x63c0f1c
};

// Class Engine.ParticleSystemComponent
// Size: 0xc50 (Inherited: 0x9f0)
struct UParticleSystemComponent : UPrimitiveComponent {
	struct UParticleSystem* Template; // 0x9e8(0x08)
	struct TArray<struct UMaterialInterface*> *cdc8d40e7a; // 0x9f0(0x10)
	struct TArray<struct USkeletalMeshComponent*> *edfb091a25; // 0xa00(0x10)
	char pad_A18_0 : 7; // 0xa18(0x01)
	char bResetOnDetach : 1; // 0xa10(0x01)
	char *806c2063a4 : 1; // 0xa11(0x01)
	char bAllowRecycling : 1; // 0xa11(0x01)
	char bAutoManageAttachment : 1; // 0xa11(0x01)
	char *30c974bd36 : 1; // 0xa11(0x01)
	char bOverrideLODMethod : 1; // 0xa12(0x01)
	char *5a36da03b4 : 1; // 0xa12(0x01)
	char *338b144ca2 : 1; // 0xa12(0x01)
	struct TArray<struct FParticleSysParam> InstanceParameters; // 0xa18(0x10)
	struct FMulticastDelegate OnParticleSpawn; // 0xa28(0x10)
	struct FMulticastDelegate OnParticleBurst; // 0xa38(0x10)
	struct FMulticastDelegate OnParticleDeath; // 0xa48(0x10)
	struct FMulticastDelegate OnParticleCollide; // 0xa58(0x10)
	struct FVector *780596f89d; // 0xa68(0x0c)
	struct FVector *34a7719c48; // 0xa74(0x0c)
	float WarmupTime; // 0xa80(0x04)
	float *05a26e85b5; // 0xa84(0x04)
	char pad_A89[0x3]; // 0xa89(0x03)
	float SecondsBeforeInactive; // 0xa8c(0x04)
	char pad_A90[0x4]; // 0xa90(0x04)
	float *94ce59f5f2; // 0xa94(0x04)
	char pad_A98[0x8]; // 0xa98(0x08)
	enum class *22978e1300 LODMethod; // 0xaa0(0x01)
	enum class EParticleSignificanceLevel RequiredSignificance; // 0xaa1(0x01)
	char pad_AA2[0x16]; // 0xaa2(0x16)
	struct TArray<struct U*0fc7361301*> *b22bc451b7; // 0xab8(0x10)
	char pad_AC8[0x60]; // 0xac8(0x60)
	float CustomTimeDilation; // 0xb28(0x04)
	char pad_B2C[0x4]; // 0xb2c(0x04)
	struct FMulticastDelegate OnSystemFinished; // 0xb30(0x10)
	struct USceneComponent* AutoAttachParent; // 0xb40(0x08)
	struct FName AutoAttachSocketName; // 0xb48(0x08)
	enum class EAttachLocation AutoAttachLocationType; // 0xb50(0x01)
	enum class EAttachmentRule AutoAttachLocationRule; // 0xb51(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0xb52(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0xb53(0x01)
	char pad_B54[0xfc]; // 0xb54(0xfc)

	void *0f4a05e7ce(int32 SourceIndex); // Function Engine.ParticleSystemComponent.*0f4a05e7ce // None // @ game+0x6365dcc
	struct FName *27ac79d500(); // Function Engine.ParticleSystemComponent.*27ac79d500 // None // @ game+0x6369720
	void *93ce0c42a3(struct USceneComponent* Parent, struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule); // Function Engine.ParticleSystemComponent.*93ce0c42a3 // None // @ game+0x6377a74
	enum class *7c7293e9c8 *d95cd5304d(); // Function Engine.ParticleSystemComponent.*d95cd5304d // None // @ game+0x635e140
	void *03d49cfae4(struct FVector NewTangentPoint); // Function Engine.ParticleSystemComponent.*03d49cfae4 // None // @ game+0x63785ac
	void *1978396d1f(); // Function Engine.ParticleSystemComponent.*1978396d1f // None // @ game+0x6376fb0
	float *956e07ae37(); // Function Engine.ParticleSystemComponent.*956e07ae37 // None // @ game+0x6365c8c
	void *932c7c018d(int32 emitterIndex); // Function Engine.ParticleSystemComponent.*932c7c018d // None // @ game+0x6378484
	struct FVector *8ef0a658ae(); // Function Engine.ParticleSystemComponent.*8ef0a658ae // None // @ game+0x6365f10
	struct FVector *4e7a6e62b5(); // Function Engine.ParticleSystemComponent.*4e7a6e62b5 // None // @ game+0x637820c
	void *92fa2201de(struct FVector NewTargetPoint); // Function Engine.ParticleSystemComponent.*92fa2201de // None // @ game+0x6378348
	void *1ec3649205(); // Function Engine.ParticleSystemComponent.*1ec3649205 // None // @ game+0x6369968
	struct FName *4cd338f0fb(); // Function Engine.ParticleSystemComponent.*4cd338f0fb // None // @ game+0x6379a04
	void *e7af8658ce(float NewSourceStrength); // Function Engine.ParticleSystemComponent.*e7af8658ce // None // @ game+0x63780e4
	void *c00c5b640d(struct FName InName); // Function Engine.ParticleSystemComponent.*c00c5b640d // None // @ game+0x63622e4
	struct FVector *70c41e648e(); // Function Engine.ParticleSystemComponent.*70c41e648e // None // @ game+0x6366194
	void *3e55e7d95c(struct FName ParameterName); // Function Engine.ParticleSystemComponent.*3e55e7d95c // None // @ game+0x637b388
	struct FVector *cb9b6e1f75(); // Function Engine.ParticleSystemComponent.*cb9b6e1f75 // None // @ game+0x6365a50
	void *9b5dcbfbeb(); // Function Engine.ParticleSystemComponent.*9b5dcbfbeb // None // @ game+0x637caa8
	void *3ed14454d9(struct FName ParameterName); // Function Engine.ParticleSystemComponent.*3ed14454d9 // None // @ game+0x637d42c
	void *090136d69a(int32 emitterIndex, struct FVector OutSourcePoint); // Function Engine.ParticleSystemComponent.*090136d69a // None // @ game+0x6365b48
	struct FName *7f2d6dd8db(); // Function Engine.ParticleSystemComponent.*7f2d6dd8db // None // @ game+0x637792c
	void *03bf17d814(int32 emitterIndex); // Function Engine.ParticleSystemComponent.*03bf17d814 // None // @ game+0x6377eac
	void *7c98b28202(int32 TargetIndex); // Function Engine.ParticleSystemComponent.*7c98b28202 // None // @ game+0x6366054
	void *565424fca2(); // Function Engine.ParticleSystemComponent.*565424fca2 // None // @ game+0x63645cc
	struct FName *9252cbf5cf(); // Function Engine.ParticleSystemComponent.*9252cbf5cf // None // @ game+0x6379358
	void *72c115cb68(int32 emitterIndex); // Function Engine.ParticleSystemComponent.*72c115cb68 // None // @ game+0x6377fa8
	struct FName SetFloatParameter(); // Function Engine.ParticleSystemComponent.SetFloatParameter // None // @ game+0x6379dc8
	enum class *7c7293e9c8 *0ba4a0733f(); // Function Engine.ParticleSystemComponent.*0ba4a0733f // None // @ game+0x637cd80
	void *5aad5cdf33(float InEmitterTime, struct FVector InDirection); // Function Engine.ParticleSystemComponent.*5aad5cdf33 // None // @ game+0x6364ad4
};

// Class Engine.DefaultPawn
// Size: 0x480 (Inherited: 0x458)
struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x458(0x04)
	float BaseLookUpRate; // 0x45c(0x04)
	struct UPawnMovementComponent* MovementComponent; // 0x460(0x08)
	struct USphereComponent* CollisionComponent; // 0x468(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x470(0x08)
	char bAddDefaultMovementBindings : 1; // 0x478(0x01)
	char pad_478_1 : 7; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)

	void MoveRight(); // Function Engine.DefaultPawn.MoveRight // None // @ game+0x6372370
	void *b29ee3df94(); // Function Engine.DefaultPawn.*b29ee3df94 // None // @ game+0x637ec98
	void MoveForward(); // Function Engine.DefaultPawn.MoveForward // None // @ game+0x63722d4
	void *db93078038(); // Function Engine.DefaultPawn.*db93078038 // None // @ game+0x637240c
	void *0067206425(); // Function Engine.DefaultPawn.*0067206425 // None // @ game+0x6371fe0
};

// Class Engine.SpectatorPawn
// Size: 0x480 (Inherited: 0x480)
struct ASpectatorPawn : ADefaultPawn {
	float BaseTurnRate; // 0x458(0x04)
	float BaseLookUpRate; // 0x45c(0x04)
	struct UPawnMovementComponent* MovementComponent; // 0x460(0x08)
	struct USphereComponent* CollisionComponent; // 0x468(0x08)
	struct UStaticMeshComponent* MeshComponent; // 0x470(0x08)
	char bAddDefaultMovementBindings : 1; // 0x478(0x01)

	void MoveRight(); // Function Engine.DefaultPawn.MoveRight // None // @ game+0x6372370
	void *b29ee3df94(); // Function Engine.DefaultPawn.*b29ee3df94 // None // @ game+0x637ec98
	void MoveForward(); // Function Engine.DefaultPawn.MoveForward // None // @ game+0x63722d4
	void *db93078038(); // Function Engine.DefaultPawn.*db93078038 // None // @ game+0x637240c
	void *0067206425(); // Function Engine.DefaultPawn.*0067206425 // None // @ game+0x6371fe0
};

// Class Engine.FloatingPawnMovement
// Size: 0x290 (Inherited: 0x280)
struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x278(0x04)
	float Acceleration; // 0x27c(0x04)
	float Deceleration; // 0x280(0x04)
	float TurningBoost; // 0x284(0x04)
	char *502d899bf1 : 1; // 0x288(0x01)
};

// Class Engine.SpectatorPawnMovement
// Size: 0x2a0 (Inherited: 0x290)
struct USpectatorPawnMovement : UFloatingPawnMovement {
	char *8499a67b55 : 1; // 0x290(0x01)
	char pad_290_1 : 7; // 0x290(0x01)
	char pad_291[0xf]; // 0x291(0x0f)
};

// Class Engine.SplineComponent
// Size: 0xae0 (Inherited: 0x9f0)
struct USplineComponent : UPrimitiveComponent {
	struct FSplineCurves *5d0c3695ca; // 0x9e8(0x60)
	struct FInterpCurveVector SplineInfo; // 0xa48(0x18)
	struct FInterpCurveQuat SplineRotInfo; // 0xa60(0x18)
	struct FInterpCurveVector SplineScaleInfo; // 0xa78(0x18)
	struct FInterpCurveFloat SplineReparamTable; // 0xa90(0x18)
	bool bAllowSplineEditingPerInstance; // 0xaa8(0x01)
	int32 *12ac1bfde3; // 0xaac(0x04)
	bool *0fe780b02b; // 0xab0(0x01)
	bool *ebdb0cb481; // 0xab1(0x01)
	float *5deaafa98f; // 0xab4(0x04)
	float Duration; // 0xab8(0x04)
	bool bStationaryEndpoints; // 0xabc(0x01)
	bool *90c9232a35; // 0xabd(0x01)
	bool *cfa2a7f9d6; // 0xabe(0x01)
	bool bInputSplinePointsToConstructionScript; // 0xabf(0x01)
	bool bDrawDebug; // 0xac0(0x01)
	bool *f088e06431; // 0xac1(0x01)
	bool bLoopPositionOverride; // 0xac2(0x01)
	float *0c6302c5b8; // 0xac4(0x04)
	struct FVector DefaultUpVector; // 0xac8(0x0c)
	char pad_AD6[0xa]; // 0xad6(0x0a)

	bool *f521037389(); // Function Engine.SplineComponent.*f521037389 // None // @ game+0x639a9f4
	void GetNumberOfSplinePoints(); // Function Engine.SplineComponent.GetNumberOfSplinePoints // None // @ game+0x63a26dc
	void *f2d9795463(bool bInClosedLoop); // Function Engine.SplineComponent.*f2d9795463 // None // @ game+0x63c3260
	void *279afd97e4(); // Function Engine.SplineComponent.*279afd97e4 // None // @ game+0x63cc4f8
	void *61729ae40b(float Distance); // Function Engine.SplineComponent.*61729ae40b // None // @ game+0x63a4410
	void *14c6ac2ad7(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*14c6ac2ad7 // None // @ game+0x63a71cc
	bool *8e0da38491(); // Function Engine.SplineComponent.*8e0da38491 // None // @ game+0x63a67ec
	void *2442c3cfda(); // Function Engine.SplineComponent.*2442c3cfda // None // @ game+0x6384614
	void *0d1539b16e(int32 Index); // Function Engine.SplineComponent.*0d1539b16e // None // @ game+0x63bdc7c
	bool *0bd297ec0c(); // Function Engine.SplineComponent.*0bd297ec0c // None // @ game+0x63a20a4
	void *715e15771d(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*715e15771d // None // @ game+0x63a5a10
	int32 *eaeef389ef(); // Function Engine.SplineComponent.*eaeef389ef // None // @ game+0x63a19e4
	enum class ESplineCoordinateSpace *482c918b00(); // Function Engine.SplineComponent.*482c918b00 // None // @ game+0x63a40f8
	void *8168c7d440(int32 PointIndex, struct FVector InLeaveTangent); // Function Engine.SplineComponent.*8168c7d440 // None // @ game+0x63cd568
	bool *0535ea2b38(); // Function Engine.SplineComponent.*0535ea2b38 // None // @ game+0x63a42d8
	void *5bc3f87938(float Distance); // Function Engine.SplineComponent.*5bc3f87938 // None // @ game+0x63a79f8
	void *c031841270(); // Function Engine.SplineComponent.*c031841270 // None // @ game+0x63a7ef0
	bool *37ea769ce6(); // Function Engine.SplineComponent.*37ea769ce6 // None // @ game+0x63a4a00
	float *8342ca28b4(); // Function Engine.SplineComponent.*8342ca28b4 // None // @ game+0x63a7bc8
	void *93e1ad9183(); // Function Engine.SplineComponent.*93e1ad9183 // None // @ game+0x63a50c8
	void *b2051880fc(); // Function Engine.SplineComponent.*b2051880fc // None // @ game+0x63a492c
	enum class ESplineCoordinateSpace *53522ec073(); // Function Engine.SplineComponent.*53522ec073 // None // @ game+0x639a6d8
	void *7241eb6d5b(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*7241eb6d5b // None // @ game+0x63a5910
	enum class ESplineCoordinateSpace *8e2c528b3c(int32 PointIndex); // Function Engine.SplineComponent.*8e2c528b3c // None // @ game+0x63cd3dc
	bool *ae66b82b13(); // Function Engine.SplineComponent.*ae66b82b13 // None // @ game+0x63a6960
	void *561d92dd32(); // Function Engine.SplineComponent.*561d92dd32 // None // @ game+0x639e788
	enum class ESplineCoordinateSpace *1e53d88498(); // Function Engine.SplineComponent.*1e53d88498 // None // @ game+0x63a18c0
	enum class ESplineCoordinateSpace AddSplinePoint(); // Function Engine.SplineComponent.AddSplinePoint // None // @ game+0x6384900
	void *ace558dfb0(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*ace558dfb0 // None // @ game+0x6399fdc
	void *9bc798c6dd(); // Function Engine.SplineComponent.*9bc798c6dd // None // @ game+0x6390c0c
	float *a497bf4f60(); // Function Engine.SplineComponent.*a497bf4f60 // None // @ game+0x639f8e0
	void *93587c57a4(); // Function Engine.SplineComponent.*93587c57a4 // None // @ game+0x6384730
	void *eb8b8b03c8(float Time); // Function Engine.SplineComponent.*eb8b8b03c8 // None // @ game+0x63a7d40
	enum class ESplineCoordinateSpace *2a5354556b(); // Function Engine.SplineComponent.*2a5354556b // None // @ game+0x63a3e7c
	void *b2334fe3c5(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*b2334fe3c5 // None // @ game+0x639a5d4
	enum class ESplineCoordinateSpace *a4b5846717(struct FVector Position); // Function Engine.SplineComponent.*a4b5846717 // None // @ game+0x6384a48
	void *8e0b29167c(); // Function Engine.SplineComponent.*8e0b29167c // None // @ game+0x55eb11c
	void *e4d7315f08(int32 PointIndex, struct FVector Tangent); // Function Engine.SplineComponent.*e4d7315f08 // None // @ game+0x63a1d08
	void *d0fbe1200b(); // Function Engine.SplineComponent.*d0fbe1200b // None // @ game+0x6379610
	int32 *f936f6802a(); // Function Engine.SplineComponent.*f936f6802a // None // @ game+0x639eefc
	float *0008f1c73b(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*0008f1c73b // None // @ game+0x63a460c
	void *d5b3bb04f1(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*d5b3bb04f1 // None // @ game+0x639ab7c
	int32 *4dcb5b3bb8(); // Function Engine.SplineComponent.*4dcb5b3bb8 // None // @ game+0x63cf4d0
	struct FVector *267f16087a(); // Function Engine.SplineComponent.*267f16087a // None // @ game+0x6399f30
	void *1ccda6641b(int32 PointIndex); // Function Engine.SplineComponent.*1ccda6641b // None // @ game+0x63a7c88
	void *841cb0b102(); // Function Engine.SplineComponent.*841cb0b102 // None // @ game+0x6384bd4
	enum class ESplineCoordinateSpace *b6f1ea618d(); // Function Engine.SplineComponent.*b6f1ea618d // None // @ game+0x63cc290
	void *f5754b1a86(int32 PointIndex); // Function Engine.SplineComponent.*f5754b1a86 // None // @ game+0x63a1fa8
	enum class ESplineCoordinateSpace *6f43d569e7(); // Function Engine.SplineComponent.*6f43d569e7 // None // @ game+0x63c8fcc
	enum class ESplineCoordinateSpace *68e4d63e31(); // Function Engine.SplineComponent.*68e4d63e31 // None // @ game+0x63a18c0
	void *78cf24de3f(float Distance); // Function Engine.SplineComponent.*78cf24de3f // None // @ game+0x63a1ea8
	bool *8b89c44917(); // Function Engine.SplineComponent.*8b89c44917 // None // @ game+0x63a6b0c
	void *34595addba(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*34595addba // None // @ game+0x639eac4
	void *817d1e31e3(); // Function Engine.SplineComponent.*817d1e31e3 // None // @ game+0x63cc094
	enum class ESplineCoordinateSpace *ca13fcab0a(); // Function Engine.SplineComponent.*ca13fcab0a // None // @ game+0x6399e0c
	void *57c75d8184(float Distance); // Function Engine.SplineComponent.*57c75d8184 // None // @ game+0x63a3d7c
	void *0764c61ef4(float Distance); // Function Engine.SplineComponent.*0764c61ef4 // None // @ game+0x63a4874
	void *805ba4563a(); // Function Engine.SplineComponent.*805ba4563a // None // @ game+0x6384860
	struct FVector *b4f2515961(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*b4f2515961 // None // @ game+0x63ce2b8
	void *24ae13b599(struct FVector WorldLocation); // Function Engine.SplineComponent.*24ae13b599 // None // @ game+0x639a808
	int32 *b7c16d3638(); // Function Engine.SplineComponent.*b7c16d3638 // None // @ game+0x63a50f0
	void *25df325ea2(); // Function Engine.SplineComponent.*25df325ea2 // None // @ game+0x63d86d8
	void *ce1badd0f1(int32 PointIndex); // Function Engine.SplineComponent.*ce1badd0f1 // None // @ game+0x63a72cc
	void SetSplinePointType(enum class ESplinePointType Type); // Function Engine.SplineComponent.SetSplinePointType // None // @ game+0x63cc160
	enum class ESplineCoordinateSpace *81a349303e(); // Function Engine.SplineComponent.*81a349303e // None // @ game+0x63a4510
	void *2fbe7e676d(); // Function Engine.SplineComponent.*2fbe7e676d // None // @ game+0x6379610
	void *175855f7ad(); // Function Engine.SplineComponent.*175855f7ad // None // @ game+0x63c4c78
	bool *04eb39a8ec(); // Function Engine.SplineComponent.*04eb39a8ec // None // @ game+0x63a7fb0
	float *597a0fd09e(); // Function Engine.SplineComponent.*597a0fd09e // None // @ game+0x63a80c0
	void *f0e4b56ae4(bool bUseConstantVelocity); // Function Engine.SplineComponent.*f0e4b56ae4 // None // @ game+0x63a7ab8
	bool *938009a2b9(); // Function Engine.SplineComponent.*938009a2b9 // None // @ game+0x63a3fb0
	struct FVector *4b9fad82e6(); // Function Engine.SplineComponent.*4b9fad82e6 // None // @ game+0x63c448c
	void *f4221d3f9b(float Distance); // Function Engine.SplineComponent.*f4221d3f9b // None // @ game+0x639e9c4
	void *092a5c45dd(); // Function Engine.SplineComponent.*092a5c45dd // None // @ game+0x63c3168
	enum class ESplineCoordinateSpace *6f307b627d(); // Function Engine.SplineComponent.*6f307b627d // None // @ game+0x639a8d0
	void *b923bdee7e(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*b923bdee7e // None // @ game+0x63a41ec
	bool *7ed08d336d(); // Function Engine.SplineComponent.*7ed08d336d // None // @ game+0x63a7400
	bool *17cdd5e7dd(); // Function Engine.SplineComponent.*17cdd5e7dd // None // @ game+0x639ebc0
	void *6b603f80ab(struct FVector WorldLocation); // Function Engine.SplineComponent.*6b603f80ab // None // @ game+0x639a4b0
	struct FVector *0997d90b54(); // Function Engine.SplineComponent.*0997d90b54 // None // @ game+0x63a1bb0
	int32 *5387c29b2a(enum class ESplineCoordinateSpace CoordinateSpace); // Function Engine.SplineComponent.*5387c29b2a // None // @ game+0x639c47c
};

// Class Engine.MaterialInterface
// Size: 0x70 (Inherited: 0x28)
struct UMaterialInterface : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct USubsurfaceProfile* SubsurfaceProfile; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct F*5dc70d11a6 LightmassSettings; // 0x40(0x14)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*bed7a8a90d> *e928e50296; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)

	void *a8f9fd13ce(); // Function Engine.MaterialInterface.*a8f9fd13ce // None // @ game+0x63659b8
	void *858264d1dd(); // Function Engine.MaterialInterface.*858264d1dd // None // @ game+0x636a36c
};

// Class Engine.MaterialInstance
// Size: 0x1e0 (Inherited: 0x70)
struct UMaterialInstance : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x70(0x08)
	struct UMaterialInterface* Parent; // 0x78(0x08)
	char *8301cd2f62 : 1; // 0x80(0x01)
	char *7f383fa02f : 1; // 0x80(0x01)
	char pad_80_2 : 1; // 0x80(0x01)
	char bOverrideSubsurfaceProfile : 1; // 0x80(0x01)
	char pad_80_4 : 4; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct F*e1e5e1e8bc> FontParameterValues; // 0x88(0x10)
	struct TArray<struct F*fffe4f3fbb> ScalarParameterValues; // 0x98(0x10)
	struct TArray<struct F*d64a96c518> TextureParameterValues; // 0xa8(0x10)
	struct TArray<struct F*8b44e564ca> VectorParameterValues; // 0xb8(0x10)
	bool bOverrideBaseProperties; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0xcc(0x24)
	char pad_F0[0xf0]; // 0xf0(0xf0)
};

// Class Engine.MaterialInstanceConstant
// Size: 0x1e0 (Inherited: 0x1e0)
struct UMaterialInstanceConstant : UMaterialInstance {
	struct UPhysicalMaterial* PhysMaterial; // 0x70(0x08)
	struct UMaterialInterface* Parent; // 0x78(0x08)
	char *8301cd2f62 : 1; // 0x80(0x01)
	char *7f383fa02f : 1; // 0x80(0x01)
	char pad_1F0_2 : 1; // 0x1f0(0x01)
	char bOverrideSubsurfaceProfile : 1; // 0x80(0x01)
	struct TArray<struct F*e1e5e1e8bc> FontParameterValues; // 0x88(0x10)
	struct TArray<struct F*fffe4f3fbb> ScalarParameterValues; // 0x98(0x10)
	struct TArray<struct F*d64a96c518> TextureParameterValues; // 0xa8(0x10)
	struct TArray<struct F*8b44e564ca> VectorParameterValues; // 0xb8(0x10)
	bool bOverrideBaseProperties; // 0xc8(0x01)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0xcc(0x24)
};

// Class Engine.MaterialExpression
// Size: 0x60 (Inherited: 0x28)
struct UMaterialExpression : UObject {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	char pad_4D_3 : 5; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*699123f0e5
// Size: 0x60 (Inherited: 0x60)
struct U*699123f0e5 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*c9284c4e3d
// Size: 0x60 (Inherited: 0x60)
struct U*c9284c4e3d : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*4471bd9586
// Size: 0x28 (Inherited: 0x28)
struct U*4471bd9586 : UObject {
};

// Class Engine.BlueprintGeneratedClass
// Size: 0x3b8 (Inherited: 0x2b0)
struct UBlueprintGeneratedClass : UClass {
	int32 NumReplicatedProperties; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<struct U*cdcaa442f5*> *a7317b54d6; // 0x2b8(0x10)
	struct TArray<struct UActorComponent*> *9ef71c20e3; // 0x2c8(0x10)
	struct TArray<struct U*a7a0563fde*> *259f597d99; // 0x2d8(0x10)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x2e8(0x08)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x2f0(0x08)
	struct UStructProperty* *c9e96efa09; // 0x2f8(0x08)
	struct UFunction* *2dc08a4ade; // 0x300(0x08)
	struct TArray<struct F*3600aa5c0a> FastCallPairs; // 0x308(0x10)
	bool *6234aa4ebc; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct TMap<struct FName, struct F*02431ea27c> *54cd37d868; // 0x320(0x50)
	bool *e0afe426c6; // 0x370(0x01)
	char pad_371[0x47]; // 0x371(0x47)
};

// Class Engine.CameraActor
// Size: 0x9a0 (Inherited: 0x3f8)
struct ACameraActor : AActor {
	enum class EAutoReceiveInput *c43918eaa7; // 0x3f8(0x01)
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

	void *d8f12ba800(); // Function Engine.CameraActor.*d8f12ba800 // None // @ game+0x6365960
};

// Class Engine.UserDefinedStruct
// Size: 0x100 (Inherited: 0xf0)
struct UUserDefinedStruct : UScriptStruct {
	struct FGuid Guid; // 0xf0(0x10)
};

// Class Engine.AISystemBase
// Size: 0x48 (Inherited: 0x28)
struct UAISystemBase : UObject {
	struct FStringClassReference AISystemClassName; // 0x28(0x10)
	struct FName AISystemModuleName; // 0x38(0x08)
	bool bInstantiateAISystemOnClient; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.*7faddb26b3
// Size: 0x48 (Inherited: 0x28)
struct U*7faddb26b3 : UObject {
	struct TArray<struct F*614c6831c7> Areas; // 0x28(0x10)
	struct F*dd97a4099e IncludeFlags; // 0x38(0x04)
	struct F*dd97a4099e ExcludeFlags; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class Engine.*5cde8540b3
// Size: 0x38 (Inherited: 0x28)
struct U*5cde8540b3 : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Engine.Model
// Size: 0x560 (Inherited: 0x28)
struct UModel : UObject {
	char pad_28[0x538]; // 0x28(0x538)
};

// Class Engine.*0e4851fd83
// Size: 0x28 (Inherited: 0x28)
struct U*0e4851fd83 : UObject {
};

// Class Engine.*ac81b8ce3c
// Size: 0x28 (Inherited: 0x28)
struct U*ac81b8ce3c : UObject {
};

// Class Engine.EdGraphNode
// Size: 0xa0 (Inherited: 0x28)
struct UEdGraphNode : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> DeprecatedPins; // 0x38(0x10)
	int32 *7fd1966a66; // 0x48(0x04)
	int32 *39ee486500; // 0x4c(0x04)
	int32 *24c5dc7d16; // 0x50(0x04)
	int32 *a3c4327bc9; // 0x54(0x04)
	char *a6a3b5d5fe : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString NodeComment; // 0x60(0x10)
	bool *28c2068cc1; // 0x70(0x01)
	bool *fcfa3c4f53; // 0x71(0x01)
	bool *3c855ef06e; // 0x72(0x01)
	char pad_73[0x1]; // 0x73(0x01)
	int32 *b5ee58d6de; // 0x74(0x04)
	struct FString *25e7648d30; // 0x78(0x10)
	struct FGuid NodeGuid; // 0x88(0x10)
	enum class ENodeAdvancedPins *a60922bdd6; // 0x98(0x01)
	enum class ENodeEnabledState *a1d48742a2; // 0x99(0x01)
	bool *bcbc8fe9b4; // 0x9a(0x01)
	bool bIsNodeEnabled; // 0x9b(0x01)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.EdGraphPin_Deprecated
// Size: 0x140 (Inherited: 0x28)
struct UEdGraphPin_Deprecated : UObject {
	struct FString PinName; // 0x28(0x10)
	struct FString PinToolTip; // 0x38(0x10)
	enum class EEdGraphPinDirection Direction; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct F*c760683241 PinType; // 0x50(0x80)
	struct FString DefaultValue; // 0xd0(0x10)
	struct FString *6681b284ab; // 0xe0(0x10)
	struct UObject* *3a208b4b78; // 0xf0(0x08)
	struct FText *e2e1d469ef; // 0xf8(0x18)
	struct TArray<struct UEdGraphPin_Deprecated*> *fe4bb925c1; // 0x110(0x10)
	struct TArray<struct UEdGraphPin_Deprecated*> *4138ba5f80; // 0x120(0x10)
	struct UEdGraphPin_Deprecated* *e0e888d50f; // 0x130(0x08)
	struct UEdGraphPin_Deprecated* *cdfc22b853; // 0x138(0x08)
};

// Class Engine.*484eacf266
// Size: 0x28 (Inherited: 0x28)
struct U*484eacf266 : UInterface {
};

// Class Engine.Level
// Size: 0x330 (Inherited: 0x28)
struct ULevel : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct ANavigationObjectBase* *285a8fdd46; // 0x30(0x08)
	struct UModel* Model; // 0x38(0x08)
	struct FIntVector *b01974b4ce; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FVector> *c941c0bf37; // 0x50(0x10)
	char pad_60[0x80]; // 0x60(0x80)
	char pad_E0_0 : 2; // 0xe0(0x01)
	char *04c05013b7 : 1; // 0xe0(0x01)
	char bIsVisible : 1; // 0xe0(0x01)
	char bLocked : 1; // 0xe0(0x01)
	char *a243b3e55e : 1; // 0xe0(0x01)
	char pad_E0_6 : 2; // 0xe0(0x01)
	char pad_E1[0x17]; // 0xe1(0x17)
	struct TArray<struct FGuid> *452e3ab3b7; // 0xf8(0x10)
	char pad_108[0x78]; // 0x108(0x78)
	struct TArray<struct U*204470fe3a*> *b8d105c335; // 0x180(0x10)
	struct UWorld* *0c2ed5c6ba; // 0x190(0x08)
	struct ANavigationObjectBase* *49596c1750; // 0x198(0x08)
	char pad_1A0[0x58]; // 0x1a0(0x58)
	struct UMapBuildDataRegistry* *355caf4b0c; // 0x1f8(0x08)
	bool *e41f9fc895; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	int32 *255d9e4e74; // 0x204(0x04)
	struct U*5b918d4999* ActorCluster; // 0x208(0x08)
	char pad_210[0x8]; // 0x210(0x08)
	int32 *41942aff95; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct TArray<struct U*d83febdd27*> *1988633d5a; // 0x220(0x10)
	char pad_230[0x8]; // 0x230(0x08)
	float *2bc81c7841; // 0x238(0x04)
	struct FGuid *47880ed3ea; // 0x23c(0x10)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct ALevelScriptActor* LevelScriptActor; // 0x250(0x08)
	float *2013658f1c; // 0x258(0x04)
	char pad_25C[0xa4]; // 0x25c(0xa4)
	struct AWorldSettings* WorldSettings; // 0x300(0x08)
	char pad_308[0x8]; // 0x308(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x310(0x10)
	char pad_320[0x10]; // 0x320(0x10)
};

// Class Engine.*078dd500bb
// Size: 0x28 (Inherited: 0x28)
struct U*078dd500bb : UInterface {
};

// Class Engine.AmbientSound
// Size: 0x400 (Inherited: 0x3f8)
struct AAmbientSound : AActor {
	struct UAudioComponent* AudioComponent; // 0x3f8(0x08)

	void FadeOut(float FadeOutDuration); // Function Engine.AmbientSound.FadeOut // None // @ game+0x636476c
	void Play(); // Function Engine.AmbientSound.Play // None // @ game+0x6372de8
	float *c8b0393496(); // Function Engine.AmbientSound.*c8b0393496 // None // @ game+0x636467c
	void AdjustVolume(float AdjustVolumeDuration); // Function Engine.AmbientSound.AdjustVolume // None // @ game+0x635e054
	void Stop(); // Function Engine.AmbientSound.Stop // None // @ game+0x637e25c
};

// Class Engine.AutoBenchSettings
// Size: 0x40 (Inherited: 0x28)
struct UAutoBenchSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct F*fc49b70054> Settings; // 0x30(0x10)
};

// Class Engine.AutoBenchControlActor
// Size: 0x3f8 (Inherited: 0x3f8)
struct AAutoBenchControlActor : AActor {
	struct FMulticastDelegate OnActorEndOverlap; // 0x28(0x10)
	struct FMulticastDelegate OnClicked; // 0x48(0x10)
	int32 *2bc7f7749a; // 0x58(0x04)
	char pad_41C_0 : 3; // 0x41c(0x01)
	char *6a29209afc : 1; // 0x5c(0x01)
	char *6583edce58 : 1; // 0x5d(0x01)
	char bReplicates : 1; // 0x5d(0x01)
	struct FName *332fd811ca; // 0x60(0x08)
	enum class ENetRole RemoteRole; // 0x68(0x01)
	struct AActor* Owner; // 0x70(0x08)
	struct FRepMovement ReplicatedMovement; // 0x78(0x34)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xb0(0x40)
	float InitialLifeSpan; // 0xf4(0x04)
	struct FMulticastDelegate OnInputTouchLeave; // 0xf8(0x10)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x110(0x10)
	struct FGuid DestructibleId; // 0x120(0x10)
	bool bIsDestroyedVersion; // 0x130(0x01)
	bool RemoveFromLevelLOD; // 0x131(0x01)
	struct F*2066290a18 PrimaryActorTick; // 0x138(0x58)
	char bAutoDestroyWhenFinished : 1; // 0x190(0x01)
	char bCanBeDamaged : 1; // 0x190(0x01)
	char *50cd51ed38 : 1; // 0x190(0x01)
	char *e002b42072 : 1; // 0x190(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x190(0x01)
	char *a4c704a3e5 : 1; // 0x190(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x190(0x01)
	char *13aea9b43a : 1; // 0x190(0x01)
	char *4211b886bf : 1; // 0x191(0x01)
	struct AActor* ParentComponentActor; // 0x194(0x08)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1a0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x1b8(0x10)
	float *ae3e81fc86; // 0x1c8(0x04)
	char *97cac516e7 : 1; // 0x1d8(0x01)
	char *cd27b8552b : 1; // 0x1d8(0x01)
	char *8aabd64ff4 : 1; // 0x1d8(0x01)
	char *3cd32b903e : 1; // 0x1d8(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1d9(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1da(0x01)
	float CustomTimeDilation; // 0x1dc(0x04)
	enum class ENetRole Role; // 0x1e1(0x01)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1e8(0x10)
	struct FMulticastDelegate OnTakePointDamage; // 0x200(0x10)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x260(0x10)
	struct TArray<struct AActor*> Children; // 0x270(0x10)
	int32 *2d89f8ef7f; // 0x280(0x04)
	struct FMulticastDelegate OnInputTouchEnter; // 0x288(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x298(0x01)
	struct FMulticastDelegate OnInputTouchBegin; // 0x2a0(0x10)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x2b0(0x10)
	struct USceneComponent* RootComponent; // 0x2c0(0x08)
	enum class *66c1dada81 InputConsumeOption; // 0x2c8(0x01)
	struct FMulticastDelegate OnReleased; // 0x2d0(0x10)
	struct FMulticastDelegate OnActorHit; // 0x2e0(0x10)
	enum class EAutoReceiveInput *8606d93d96; // 0x2f0(0x01)
	struct TArray<struct FName> Layers; // 0x2f8(0x10)
	struct TArray<struct FName> Tags; // 0x308(0x10)
	struct U*63b14265fa* *63b14265fa; // 0x318(0x08)
	float NetUpdateFrequency; // 0x320(0x04)
	uint64 *f99b84bc94; // 0x328(0x08)
	struct UChildActorComponent* *129513d23d; // 0x330(0x08)
	float MinNetUpdateFrequency; // 0x388(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x390(0x10)
	float NetCullDistanceSquared; // 0x3a0(0x04)
	float NetPriority; // 0x3a4(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x3a8(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x3b8(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3c8(0x10)
	struct APawn* Instigator; // 0x3e0(0x08)
	char bHidden : 1; // 0x3e8(0x01)
	char *0854a90e26 : 1; // 0x3e8(0x01)
	char *013332e5c6 : 1; // 0x3e8(0x01)
	char bOnlyRelevantToOwner : 1; // 0x3e8(0x01)
	char bAlwaysRelevant : 1; // 0x3e8(0x01)
	char *9ddfc785f1 : 1; // 0x3e8(0x01)
	char *05594c4443 : 1; // 0x3e8(0x01)
	char *ef19f6b6c9 : 1; // 0x3e8(0x01)
	char *dca9d9a72a : 1; // 0x3e9(0x01)
	char *16d69885c9 : 1; // 0x3e9(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x3e9(0x01)
	char *59968c9633 : 1; // 0x3e9(0x01)
	char *02848ec998 : 1; // 0x3e9(0x01)

	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // None // @ game+0x6365248
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // None // @ game+0x637c668
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // None // @ game+0x636a7dc
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // None // @ game+0x637cc50
	void *82b3653b7b(struct AActor* OtherActor); // Function Engine.Actor.*82b3653b7b // None // @ game+0x636b3e8
	struct AController* ReceiveAnyDamage(float Damage); // Function Engine.Actor.ReceiveAnyDamage // None // @ game+0x26a108
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // None // @ game+0x26a108
	struct FName ActorHasTag(); // Function Engine.Actor.ActorHasTag // None // @ game+0x635bf94
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // None // @ game+0x6365214
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // None // @ game+0x26a108
	enum class EAttachLocation K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // None // @ game+0x636e438
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldOffset // None // @ game+0x636cd8c
	enum class EAttachLocation K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // None // @ game+0x636e2b8
	void HasAuthority(); // Function Engine.Actor.HasAuthority // None // @ game+0x9e1498
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // None // @ game+0x636a060
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // None // @ game+0x6369fa8
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // None // @ game+0x6376d90
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // None // @ game+0x6365898
	void *f77af040ad(); // Function Engine.Actor.*f77af040ad // None // @ game+0x6365634
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // None // @ game+0xbe9a6c
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // None // @ game+0x636ed78
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // None // @ game+0x63650f0
	struct FName *43eab6a44c(); // Function Engine.Actor.*43eab6a44c // None // @ game+0x6368648
	enum class EAttachmentRule *ca2fce53c9(struct AActor* ParentActor, struct FName SocketName); // Function Engine.Actor.*ca2fce53c9 // None // @ game+0x636e738
	void K2_AddActorWorldTransform(struct FTransform DeltaTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldTransform // None // @ game+0x636d13c
	bool K2_SetActorLocation(struct FVector NewLocation); // Function Engine.Actor.K2_SetActorLocation // None // @ game+0x636fe08
	struct FKey *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // None // @ game+0x6368554
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // None // @ game+0x6376e28
	struct UObject* AddComponent(struct FName TemplateName); // Function Engine.Actor.AddComponent // None // @ game+0xa5d3a0
	struct FHitResult K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // None // @ game+0x636cf64
	void GetTransform(); // Function Engine.Actor.GetTransform // None // @ game+0xaacdcc
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // None // @ game+0x636ed90
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // None // @ game+0xb99a34
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // None // @ game+0x6364520
	void GetActorBounds(struct FVector Origin); // Function Engine.Actor.GetActorBounds // None // @ game+0x6364cbc
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // None // @ game+0x6367f78
	float MakeNoise(); // Function Engine.Actor.MakeNoise // None // @ game+0x63720f4
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // None // @ game+0x6365288
	void *a487955527(); // Function Engine.Actor.*a487955527 // None // @ game+0x636f250
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // None // @ game+0x6367524
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // None // @ game+0x26a108
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // None // @ game+0x26a108
	void *76b33f89d4(); // Function Engine.Actor.*76b33f89d4 // None // @ game+0x636ac9c
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // None // @ game+0x26a108
	void DisableInput(); // Function Engine.Actor.DisableInput // None // @ game+0x6362a78
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // None // @ game+0x636ba48
	enum class *42e1cdcd79 *694ac52e11(enum class *42e1cdcd79 LocationRule); // Function Engine.Actor.*694ac52e11 // None // @ game+0x636eee0
	struct UClass* *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // None // @ game+0x63669ec
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // None // @ game+0xb40e14
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // None // @ game+0x637c5d0
	void *7952614099(); // Function Engine.Actor.*7952614099 // None // @ game+0x6365260
	struct FHitResult K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // None // @ game+0x636c988
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // None // @ game+0xb6a404
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // None // @ game+0x26a108
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // None // @ game+0x6364aa8
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // None // @ game+0x6369bb8
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // None // @ game+0x6377260
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // None // @ game+0x6364f98
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // None // @ game+0x26a108
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // None // @ game+0x636f734
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // None // @ game+0x8b5060
	void *8ab522db39(); // Function Engine.Actor.*8ab522db39 // None // @ game+0x63672dc
	void *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // None // @ game+0x6366bd4
	struct FHitResult K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // None // @ game+0x63705d4
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // None // @ game+0x26a108
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // None // @ game+0x6373e3c
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // None // @ game+0x635dd54
	struct FHitResult ReceiveRadialDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceiveRadialDamage // None // @ game+0x26a108
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // None // @ game+0x6364abc
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // None // @ game+0x6368e6c
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // None // @ game+0x26a108
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // None // @ game+0x636af68
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // None // @ game+0x63771cc
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // None // @ game+0x26a108
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // None // @ game+0x26a108
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // None // @ game+0x6369e18
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // None // @ game+0x636c7b0
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // None // @ game+0x636a03c
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // None // @ game+0x6370224
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // None // @ game+0xb44448
	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // None // @ game+0x636ba64
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // None // @ game+0x70f418
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // None // @ game+0x26a108
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // None // @ game+0x635dc2c
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // None // @ game+0x636bafc
	void *679babdbe9(struct FVector DestLocation); // Function Engine.Actor.*679babdbe9 // None // @ game+0x6371a40
	float *77574d4d00(); // Function Engine.Actor.*77574d4d00 // None // @ game+0x637f170
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // None // @ game+0x26a108
	void *2bbda76e95(struct UClass* ComponentClass); // Function Engine.Actor.*2bbda76e95 // None // @ game+0x6366ae4
	void *8ff8fb0472(struct FKey InputAxisKey); // Function Engine.Actor.*8ff8fb0472 // None // @ game+0x6368c64
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // None // @ game+0x636586c
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // None // @ game+0x636f318
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // None // @ game+0x63650bc
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // None // @ game+0x637cb38
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // None // @ game+0x636ffec
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // None // @ game+0x637712c
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // None // @ game+0x637708c
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // None // @ game+0x637ea90
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // None // @ game+0x26a108
	struct FVector *4e14239fe2(); // Function Engine.Actor.*4e14239fe2 // None // @ game+0x6364e8c
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // None // @ game+0x6368f34
	void *6f6713dfba(struct AActor* OtherActor); // Function Engine.Actor.*6f6713dfba // None // @ game+0x6368018
	struct FHitResult K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // None // @ game+0x63703fc
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // None // @ game+0x6365848
	void K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // None // @ game+0x605cd0
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // None // @ game+0x6373d14
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // None // @ game+0x6364e64
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // None // @ game+0x26a108
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // None // @ game+0x26a108
	void *58360a298b(struct AActor* Other); // Function Engine.Actor.*58360a298b // None // @ game+0x636c21c
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // None // @ game+0x63629e4
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // None // @ game+0x636b3b0
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // None // @ game+0x26a108
	bool K2_SetActorTransform(bool bSweep); // Function Engine.Actor.K2_SetActorTransform // None // @ game+0x6370800
	void SetOwner(); // Function Engine.Actor.SetOwner // None // @ game+0x637b964
	void *094169766b(); // Function Engine.Actor.*094169766b // None // @ game+0x6368e84
	void *2a43ddf3b4(struct AActor* OtherActor); // Function Engine.Actor.*2a43ddf3b4 // None // @ game+0x636737c
	enum class EAttachmentRule *e13072354b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*e13072354b // None // @ game+0x63d310
	void *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // None // @ game+0x637dda0
	struct FVector ReceivePointDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceivePointDamage // None // @ game+0x26a108
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // None // @ game+0x26a108
	struct FHitResult K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // None // @ game+0x636cb60
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector NormalImpulse); // Function Engine.Actor.ReceiveHit // None // @ game+0x26a108
	struct UMaterialInterface* *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // None // @ game+0x6372078
};

// Class Engine.*2f0001d6bf
// Size: 0x28 (Inherited: 0x28)
struct U*2f0001d6bf : UObject {
};

// Class Engine.*0a30f37bbc
// Size: 0x28 (Inherited: 0x28)
struct U*0a30f37bbc : UInterface {
};

// Class Engine.BillboardComponent
// Size: 0xa10 (Inherited: 0x9f0)
struct UBillboardComponent : UPrimitiveComponent {
	struct UTexture2D* Sprite; // 0x9e8(0x08)
	char bIsScreenSizeScaled : 1; // 0x9f0(0x01)
	float ScreenSize; // 0x9f4(0x04)
	float U; // 0x9f8(0x04)
	float UL; // 0x9fc(0x04)
	float V; // 0xa00(0x04)
	float VL; // 0xa04(0x04)
	struct FColor Color; // 0xa08(0x04)

	int32 *de3bcd9efe(); // Function Engine.BillboardComponent.*de3bcd9efe // None // @ game+0x637cfa8
	void SetColor(); // Function Engine.BillboardComponent.SetColor // None // @ game+0x6379180
	void *d73d19ce7c(); // Function Engine.BillboardComponent.*d73d19ce7c // None // @ game+0x637c854
	int32 *bcd91c059a(); // Function Engine.BillboardComponent.*bcd91c059a // None // @ game+0x637c8e8
};

// Class Engine.*526b625f4a
// Size: 0x28 (Inherited: 0x28)
struct U*526b625f4a : UInterface {
};

// Class Engine.StaticMesh
// Size: 0x170 (Inherited: 0x28)
struct UStaticMesh : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	int32 MinLOD; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x48(0x10)
	struct TArray<struct F*43af02caf0> StaticMaterials; // 0x58(0x10)
	float *7732c89687; // 0x68(0x04)
	int32 LightMapResolution; // 0x6c(0x04)
	int32 *9726a81429; // 0x70(0x04)
	float *02c4f73f59; // 0x74(0x04)
	struct UBodySetup* BodySetup; // 0x78(0x08)
	int32 *c247be02b2; // 0x80(0x04)
	char *c76a126daa : 1; // 0x84(0x01)
	char *a54083ef41 : 1; // 0x84(0x01)
	char bStripComplexCollisionForConsole : 1; // 0x84(0x01)
	char *5fad43e82d : 1; // 0x84(0x01)
	char bRequiresAreaWeightedSampling : 1; // 0x84(0x01)
	char pad_84_5 : 3; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float LpvBiasMultiplier; // 0x88(0x04)
	bool *ecb84c8f41; // 0x8c(0x01)
	char pad_8D[0x33]; // 0x8d(0x33)
	struct TArray<struct U*51ab10dd10*> Sockets; // 0xc0(0x10)
	char pad_D0[0x10]; // 0xd0(0x10)
	struct FVector *288824cc7d; // 0xe0(0x0c)
	struct FVector *f93bcbf265; // 0xec(0x0c)
	struct FBoxSphereBounds *a5cca5147a; // 0xf8(0x1c)
	bool *f7f2e560f1; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	int32 *0f0507e036; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x120(0x10)
	struct UNavCollision* NavCollision; // 0x130(0x08)
	struct F*1dd977ee69 *e93e77c09b; // 0x138(0x28)
	struct TArray<struct UMaterialInstanceConstant*> *431663e11f; // 0x160(0x10)

	void *f36fae672e(); // Function Engine.StaticMesh.*f36fae672e // None // @ game+0x63663e0
	void *ba56162d2e(); // Function Engine.StaticMesh.*ba56162d2e // None // @ game+0x6369a5c
	void *7bd3928ea5(); // Function Engine.StaticMesh.*7bd3928ea5 // None // @ game+0x63699ec
	void *c8e9b0a557(); // Function Engine.StaticMesh.*c8e9b0a557 // None // @ game+0x63662d8
};

// Class Engine.*00b670dc95
// Size: 0x5e0 (Inherited: 0x4c0)
struct U*00b670dc95 : USceneComponent {
	struct FVector Extents; // 0x4c0(0x0c)
	struct FVector FadeExtents_Neg; // 0x4cc(0x0c)
	struct FVector FadeExtents_Pos; // 0x4d8(0x0c)
	bool bOutdoorTransition; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	float VolumeAlpha; // 0x4e8(0x04)
	float Brightness; // 0x4ec(0x04)
	float SkyIntensity; // 0x4f0(0x04)
	int32 Priority; // 0x4f4(0x04)
	struct F*47c2c57997 AmbientCube2; // 0x4f8(0xc8)
	char pad_5C0[0x20]; // 0x5c0(0x20)

	void *0c5a7fd6a0(); // Function Engine.*00b670dc95.*0c5a7fd6a0 // None // @ game+0xaf438c
};

// Class Engine.GIVolumesContainerComponent
// Size: 0x4e0 (Inherited: 0x4c0)
struct UGIVolumesContainerComponent : USceneComponent {
	enum class *1d65b135dd DetailMode; // 0x1f0(0x01)
	struct TArray<struct USceneComponent*> AttachChildren; // 0x1f8(0x10)
	char pad_4D1_0 : 1; // 0x4d1(0x01)
	char bReplicatesAttachmentReference : 1; // 0x208(0x01)
	char bReplicatesAttachment : 1; // 0x208(0x01)
	char *9874f81ad0 : 1; // 0x208(0x01)
	char pad_4D1_4 : 1; // 0x4d1(0x01)
	char bAbsoluteLocation : 1; // 0x208(0x01)
	char bAbsoluteRotation : 1; // 0x208(0x01)
	char bAbsoluteScale : 1; // 0x208(0x01)
	char bVisible : 1; // 0x209(0x01)
	char bHiddenInGame : 1; // 0x209(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x209(0x01)
	char *131f3529c6 : 1; // 0x209(0x01)
	char bUseAttachParentBound : 1; // 0x209(0x01)
	char bEnableInsensitiveUpdate : 1; // 0x209(0x01)
	char bAbsoluteTranslation : 1; // 0x238(0x01)
	struct APhysicsVolume* PhysicsVolume; // 0x23c(0x08)
	struct FVector *49e84c2fad; // 0x244(0x0c)
	struct USceneComponent* AttachParent; // 0x250(0x08)
	SetProperty *815e178173; // 0x258(0x50)
	struct FRotator RelativeRotation; // 0x344(0x0c)
	struct FVector RelativeTranslation; // 0x350(0x0c)
	struct FVector RelativeLocation; // 0x35c(0x0c)
	struct FVector RelativeScale3D; // 0x368(0x0c)
	enum class EComponentMobility Mobility; // 0x388(0x01)
	struct FName *055f551900; // 0x398(0x08)
	struct FMulticastDelegate PhysicsVolumeChangedDelegate; // 0x3a0(0x10)
	struct FMulticastDelegate AttachmentChangedDelegate; // 0x3b0(0x10)

	void K2_AddWorldTransform(bool bSweep); // Function Engine.SceneComponent.K2_AddWorldTransform // None // @ game+0x636e08c
	struct FHitResult K2_AddLocalRotation(); // Function Engine.SceneComponent.K2_AddLocalRotation // None // @ game+0x636d540
	bool K2_AddWorldOffset(struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_AddWorldOffset // None // @ game+0x636dcdc
	void *24d4692696(); // Function Engine.SceneComponent.*24d4692696 // None // @ game+0x637a948
	struct FHitResult K2_AddWorldRotation(); // Function Engine.SceneComponent.K2_AddWorldRotation // None // @ game+0x636deb4
	bool K2_SetRelativeLocation(struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetRelativeLocation // None // @ game+0x6370a34
	void DetachFromParent(); // Function Engine.SceneComponent.DetachFromParent // None // @ game+0x63628f0
	struct FHitResult K2_SetWorldRotation(); // Function Engine.SceneComponent.K2_SetWorldRotation // None // @ game+0x637163c
	void *a4c0c6dacf(); // Function Engine.SceneComponent.*a4c0c6dacf // None // @ game+0x6373f94
	void K2_SetWorldTransform(struct FTransform NewTransform, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldTransform // None // @ game+0x6371814
	void *c95aa311e1(); // Function Engine.SceneComponent.*c95aa311e1 // None // @ game+0x637da70
	void *64c6a50e0e(); // Function Engine.SceneComponent.*64c6a50e0e // None // @ game+0x636bab8
	void OnRep_Visibility(); // Function Engine.SceneComponent.OnRep_Visibility // None // @ game+0x6372760
	void K2_AddLocalOffset(bool bSweep); // Function Engine.SceneComponent.K2_AddLocalOffset // None // @ game+0x636d368
	void *1ab06a479c(); // Function Engine.SceneComponent.*1ab06a479c // None // @ game+0x6366aac
	int32 *8ecb931576(); // Function Engine.SceneComponent.*8ecb931576 // None // @ game+0x636658c
	void *e94c620b17(struct FName InSocketName); // Function Engine.SceneComponent.*e94c620b17 // None // @ game+0x6362b24
	void K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld // None // @ game+0x636f52c
	void *71b355cc39(); // Function Engine.SceneComponent.*71b355cc39 // None // @ game+0xb9cb40
	struct FName *c7f3749d3f(); // Function Engine.SceneComponent.*c7f3749d3f // None // @ game+0x636c5a4
	void *47f11c6aa4(); // Function Engine.SceneComponent.*47f11c6aa4 // None // @ game+0x636662c
	void *7b9f3977eb(); // Function Engine.SceneComponent.*7b9f3977eb // None // @ game+0x636f4e8
	struct FHitResult K2_AddLocalTransform(); // Function Engine.SceneComponent.K2_AddLocalTransform // None // @ game+0x636d718
	void *d6237c56a2(struct FRotator NewRotation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.*d6237c56a2 // None // @ game+0x637140c
	void *fdc9f4ce48(); // Function Engine.SceneComponent.*fdc9f4ce48 // None // @ game+0x636b1e0
	void *c983529eeb(); // Function Engine.SceneComponent.*c983529eeb // None // @ game+0x637c34c
	void *fadfce2f5c(struct USceneComponent* InParent); // Function Engine.SceneComponent.*fadfce2f5c // None // @ game+0x637de7c
	void *fe65a776a5(); // Function Engine.SceneComponent.*fe65a776a5 // None // @ game+0x636f464
	bool SetVisibility(); // Function Engine.SceneComponent.SetVisibility // None // @ game+0xb6c2dc
	void *e51a15ac42(); // Function Engine.SceneComponent.*e51a15ac42 // None // @ game+0x637a9e4
	void K2_SetRelativeRotation(bool bSweep); // Function Engine.SceneComponent.K2_SetRelativeRotation // None // @ game+0x6370e30
	void *a0c587c4d6(); // Function Engine.SceneComponent.*a0c587c4d6 // None // @ game+0x63699d4
	enum class *42e1cdcd79 *a17d5e84b8(enum class *42e1cdcd79 ScaleRule); // Function Engine.SceneComponent.*a17d5e84b8 // None // @ game+0x63f7b8
	struct FHitResult *f0cbf81c2a(struct FRotator NewRotation); // Function Engine.SceneComponent.*f0cbf81c2a // None // @ game+0x6370c00
	struct FHitResult K2_AddRelativeLocation(); // Function Engine.SceneComponent.K2_AddRelativeLocation // None // @ game+0x636d944
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren // None // @ game+0x99d020
	void *330134b8c2(); // Function Engine.SceneComponent.*330134b8c2 // None // @ game+0x636a784
	void *cb975ed8ba(); // Function Engine.SceneComponent.*cb975ed8ba // None // @ game+0x6367480
	struct FHitResult K2_SetRelativeTransform(); // Function Engine.SceneComponent.K2_SetRelativeTransform // None // @ game+0x6371008
	void *5b447b62b7(bool bNewAbsoluteRotation); // Function Engine.SceneComponent.*5b447b62b7 // None // @ game+0x6376b58
	struct FName *a27f6d4764(); // Function Engine.SceneComponent.*a27f6d4764 // None // @ game+0x636a94c
	bool *287e49cc7e(); // Function Engine.SceneComponent.*287e49cc7e // None // @ game+0x637a670
	void *6f297235ba(); // Function Engine.SceneComponent.*6f297235ba // None // @ game+0x636a57c
	void IsVisible(); // Function Engine.SceneComponent.IsVisible // None // @ game+0x636c698
	void *bb79d1adbb(); // Function Engine.SceneComponent.*bb79d1adbb // None // @ game+0x636a210
	enum class EAttachLocation K2_AttachTo(bool bWeldSimulatedBodies); // Function Engine.SceneComponent.K2_AttachTo // None // @ game+0x636e5b8
	void K2_SetWorldLocation(struct FVector NewLocation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldLocation // None // @ game+0x6371234
	void *709ad87786(); // Function Engine.SceneComponent.*709ad87786 // None // @ game+0x6365764
	struct FName *716c958ce4(enum class *5515701312 TransformSpace); // Function Engine.SceneComponent.*716c958ce4 // None // @ game+0x636ab6c
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent // None // @ game+0xbd36f4
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName // None // @ game+0xbd36f4
	struct FHitResult K2_AddRelativeRotation(); // Function Engine.SceneComponent.K2_AddRelativeRotation // None // @ game+0x636db10
	void *77cf8156db(struct FName InSocketName); // Function Engine.SceneComponent.*77cf8156db // None // @ game+0x636aab4
	void *c786340f98(); // Function Engine.SceneComponent.*c786340f98 // None // @ game+0x56c1d5c
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform // None // @ game+0xb6f418
	void *8686c19d5c(); // Function Engine.SceneComponent.*8686c19d5c // None // @ game+0x636a7f0
	struct USceneComponent* *e13072354b(struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule ScaleRule); // Function Engine.SceneComponent.*e13072354b // None // @ game+0x636e958
	void ToggleVisibility(); // Function Engine.SceneComponent.ToggleVisibility // None // @ game+0x637ebf4
	struct FName *45081e78dc(); // Function Engine.SceneComponent.*45081e78dc // None // @ game+0x636aa04
	void *4883fee90d(); // Function Engine.SceneComponent.*4883fee90d // None // @ game+0x636f420
};

// Class Engine.BoxGIVolume
// Size: 0x400 (Inherited: 0x3f8)
struct ABoxGIVolume : AActor {
	struct U*00b670dc95* VolumeComponent; // 0x3f8(0x08)
};

// Class Engine.BrushShape
// Size: 0x430 (Inherited: 0x430)
struct ABrushShape : ABrush {
	enum class *5e5e5eab6b *0b26d2092e; // 0x3f8(0x01)
	struct FColor BrushColor; // 0x3fc(0x04)
	int32 PolyFlags; // 0x400(0x04)
	char *aea2cb31c1 : 1; // 0x404(0x01)
	char *a1acb90bd3 : 1; // 0x404(0x01)
	char *d80e65bbb7 : 1; // 0x404(0x01)
	char *eac65cc66b : 1; // 0x404(0x01)
	struct UModel* Brush; // 0x408(0x08)
	struct UBrushComponent* BrushComponent; // 0x410(0x08)
	char *76c1f76587 : 1; // 0x418(0x01)
	struct TArray<struct F*d4dfcacc3f> *39006b633f; // 0x420(0x10)
};

// Class Engine.AudioVolume
// Size: 0x478 (Inherited: 0x430)
struct AAudioVolume : AVolume {
	float Priority; // 0x430(0x04)
	char bEnabled : 1; // 0x434(0x01)
	char pad_434_1 : 7; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct FReverbSettings Settings; // 0x438(0x18)
	struct F*2b1daf3feb AmbientZoneSettings; // 0x450(0x24)
	char pad_474[0x4]; // 0x474(0x04)

	void *f938159d44(); // Function Engine.AudioVolume.*f938159d44 // None // @ game+0x6379b80
	void *bbd4275724(); // Function Engine.AudioVolume.*bbd4275724 // None // @ game+0x637a898
	void SetPriority(); // Function Engine.AudioVolume.SetPriority // None // @ game+0x637c180
	void SetReverbSettings(); // Function Engine.AudioVolume.SetReverbSettings // None // @ game+0x637c6fc
	void OnRep_bEnabled(); // Function Engine.AudioVolume.OnRep_bEnabled // None // @ game+0x56447ac
};

// Class Engine.BlockingVolume
// Size: 0x430 (Inherited: 0x430)
struct ABlockingVolume : AVolume {
	enum class *5e5e5eab6b *0b26d2092e; // 0x3f8(0x01)
	struct FColor BrushColor; // 0x3fc(0x04)
	int32 PolyFlags; // 0x400(0x04)
	char *aea2cb31c1 : 1; // 0x404(0x01)
	char *a1acb90bd3 : 1; // 0x404(0x01)
	char *d80e65bbb7 : 1; // 0x404(0x01)
	char *eac65cc66b : 1; // 0x404(0x01)
	struct UModel* Brush; // 0x408(0x08)
	struct UBrushComponent* BrushComponent; // 0x410(0x08)
	char *76c1f76587 : 1; // 0x418(0x01)
	struct TArray<struct F*d4dfcacc3f> *39006b633f; // 0x420(0x10)
};

// Class Engine.CameraBlockingVolume
// Size: 0x430 (Inherited: 0x430)
struct ACameraBlockingVolume : AVolume {
	enum class *5e5e5eab6b *0b26d2092e; // 0x3f8(0x01)
	struct FColor BrushColor; // 0x3fc(0x04)
	int32 PolyFlags; // 0x400(0x04)
	char *aea2cb31c1 : 1; // 0x404(0x01)
	char *a1acb90bd3 : 1; // 0x404(0x01)
	char *d80e65bbb7 : 1; // 0x404(0x01)
	char *eac65cc66b : 1; // 0x404(0x01)
	struct UModel* Brush; // 0x408(0x08)
	struct UBrushComponent* BrushComponent; // 0x410(0x08)
	char *76c1f76587 : 1; // 0x418(0x01)
	struct TArray<struct F*d4dfcacc3f> *39006b633f; // 0x420(0x10)
};

// Class Engine.CullDistanceVolume
// Size: 0x458 (Inherited: 0x430)
struct ACullDistanceVolume : AVolume {
	struct TArray<struct F*a4caa301c7> CullDistances; // 0x430(0x10)
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
	enum class *bae5a64964 StreamingUsage; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
};

// Class Engine.LightmassCharacterIndirectDetailVolume
// Size: 0x430 (Inherited: 0x430)
struct ALightmassCharacterIndirectDetailVolume : AVolume {
	enum class *5e5e5eab6b *0b26d2092e; // 0x3f8(0x01)
	struct FColor BrushColor; // 0x3fc(0x04)
	int32 PolyFlags; // 0x400(0x04)
	char *aea2cb31c1 : 1; // 0x404(0x01)
	char *a1acb90bd3 : 1; // 0x404(0x01)
	char *d80e65bbb7 : 1; // 0x404(0x01)
	char *eac65cc66b : 1; // 0x404(0x01)
	struct UModel* Brush; // 0x408(0x08)
	struct UBrushComponent* BrushComponent; // 0x410(0x08)
	char *76c1f76587 : 1; // 0x418(0x01)
	struct TArray<struct F*d4dfcacc3f> *39006b633f; // 0x420(0x10)
};

// Class Engine.LightmassImportanceVolume
// Size: 0x430 (Inherited: 0x430)
struct ALightmassImportanceVolume : AVolume {
	enum class *5e5e5eab6b *0b26d2092e; // 0x3f8(0x01)
	struct FColor BrushColor; // 0x3fc(0x04)
	int32 PolyFlags; // 0x400(0x04)
	char *aea2cb31c1 : 1; // 0x404(0x01)
	char *a1acb90bd3 : 1; // 0x404(0x01)
	char *d80e65bbb7 : 1; // 0x404(0x01)
	char *eac65cc66b : 1; // 0x404(0x01)
	struct UModel* Brush; // 0x408(0x08)
	struct UBrushComponent* BrushComponent; // 0x410(0x08)
	char *76c1f76587 : 1; // 0x418(0x01)
	struct TArray<struct F*d4dfcacc3f> *39006b633f; // 0x420(0x10)
};

// Class Engine.MeshMergeCullingVolume
// Size: 0x430 (Inherited: 0x430)
struct AMeshMergeCullingVolume : AVolume {
	enum class *5e5e5eab6b *0b26d2092e; // 0x3f8(0x01)
	struct FColor BrushColor; // 0x3fc(0x04)
	int32 PolyFlags; // 0x400(0x04)
	char *aea2cb31c1 : 1; // 0x404(0x01)
	char *a1acb90bd3 : 1; // 0x404(0x01)
	char *d80e65bbb7 : 1; // 0x404(0x01)
	char *eac65cc66b : 1; // 0x404(0x01)
	struct UModel* Brush; // 0x408(0x08)
	struct UBrushComponent* BrushComponent; // 0x410(0x08)
	char *76c1f76587 : 1; // 0x418(0x01)
	struct TArray<struct F*d4dfcacc3f> *39006b633f; // 0x420(0x10)
};

// Class Engine.NavMeshBoundsVolume
// Size: 0x438 (Inherited: 0x430)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
};

// Class Engine.NavModifierVolume
// Size: 0x440 (Inherited: 0x430)
struct ANavModifierVolume : AVolume {
	char pad_430[0x8]; // 0x430(0x08)
	struct UClass* AreaClass; // 0x438(0x08)

	void *17584ae5c0(); // Function Engine.NavModifierVolume.*17584ae5c0 // None // @ game+0x63776bc
};

// Class Engine.DefaultPhysicsVolume
// Size: 0x448 (Inherited: 0x448)
struct ADefaultPhysicsVolume : APhysicsVolume {
	float TerminalVelocity; // 0x430(0x04)
	int32 Priority; // 0x434(0x04)
	float FluidFriction; // 0x438(0x04)
	char bWaterVolume : 1; // 0x43c(0x01)
	char bPhysicsOnContact : 1; // 0x43c(0x01)
	bool *1ffd8a4414; // 0x440(0x01)
};

// Class Engine.KillZVolume
// Size: 0x448 (Inherited: 0x448)
struct AKillZVolume : APhysicsVolume {
	float TerminalVelocity; // 0x430(0x04)
	int32 Priority; // 0x434(0x04)
	float FluidFriction; // 0x438(0x04)
	char bWaterVolume : 1; // 0x43c(0x01)
	char bPhysicsOnContact : 1; // 0x43c(0x01)
	bool *1ffd8a4414; // 0x440(0x01)
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
	char *79b99203af : 1; // 0x45c(0x01)
	char pad_45C_2 : 6; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	struct AController* *f6a0b7550d; // 0x460(0x08)
	char pad_468[0x8]; // 0x468(0x08)
};

// Class Engine.BlendableInterface
// Size: 0x28 (Inherited: 0x28)
struct UBlendableInterface : UInterface {
};

// Class Engine.Scene
// Size: 0x28 (Inherited: 0x28)
struct UScene : UObject {
};

// Class Engine.*c0fb985655
// Size: 0x28 (Inherited: 0x28)
struct U*c0fb985655 : UInterface {
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

	void *ecceb55aba(TScriptInterface<struct UBlendableInterface> InBlendableObject); // Function Engine.PostProcessVolume.*ecceb55aba // None // @ game+0x635d638
	void *7bdf8efba3(); // Function Engine.PostProcessVolume.*7bdf8efba3 // None // @ game+0x637ede0
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
	enum class *5e5e5eab6b *0b26d2092e; // 0x3f8(0x01)
	struct FColor BrushColor; // 0x3fc(0x04)
	int32 PolyFlags; // 0x400(0x04)
	char *aea2cb31c1 : 1; // 0x404(0x01)
	char *a1acb90bd3 : 1; // 0x404(0x01)
	char *d80e65bbb7 : 1; // 0x404(0x01)
	char *eac65cc66b : 1; // 0x404(0x01)
	struct UModel* Brush; // 0x408(0x08)
	struct UBrushComponent* BrushComponent; // 0x410(0x08)
	char *76c1f76587 : 1; // 0x418(0x01)
	struct TArray<struct F*d4dfcacc3f> *39006b633f; // 0x420(0x10)
};

// Class Engine.TriggerVolume
// Size: 0x430 (Inherited: 0x430)
struct ATriggerVolume : AVolume {
	enum class *5e5e5eab6b *0b26d2092e; // 0x3f8(0x01)
	struct FColor BrushColor; // 0x3fc(0x04)
	int32 PolyFlags; // 0x400(0x04)
	char *aea2cb31c1 : 1; // 0x404(0x01)
	char *a1acb90bd3 : 1; // 0x404(0x01)
	char *d80e65bbb7 : 1; // 0x404(0x01)
	char *eac65cc66b : 1; // 0x404(0x01)
	struct UModel* Brush; // 0x408(0x08)
	struct UBrushComponent* BrushComponent; // 0x410(0x08)
	char *76c1f76587 : 1; // 0x418(0x01)
	struct TArray<struct F*d4dfcacc3f> *39006b633f; // 0x420(0x10)
};

// Class Engine.*e0a79ad73f
// Size: 0x28 (Inherited: 0x28)
struct U*e0a79ad73f : UInterface {
};

// Class Engine.CameraShake
// Size: 0x160 (Inherited: 0x28)
struct UCameraShake : UObject {
	char *1bcf2af904 : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *bf3553f181; // 0x2c(0x04)
	float *3148f5c3c5; // 0x30(0x04)
	float *8698cd9385; // 0x34(0x04)
	struct F*673e053786 *ac240f8630; // 0x38(0x24)
	struct F*eff78d75d0 *b8c7dd6819; // 0x5c(0x24)
	struct F*58787e3608 *511d76dce3; // 0x80(0x0c)
	float AnimPlayRate; // 0x8c(0x04)
	float *5aee86e63b; // 0x90(0x04)
	float *b54198ecd1; // 0x94(0x04)
	float *43bfb06925; // 0x98(0x04)
	float *968bd93263; // 0x9c(0x04)
	struct UCameraAnim* Anim; // 0xa0(0x08)
	char bRandomAnimSegment : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x17]; // 0xa9(0x17)
	struct APlayerCameraManager* CameraOwner; // 0xc0(0x08)
	char pad_C8[0x80]; // 0xc8(0x80)
	float ShakeScale; // 0x148(0x04)
	float OscillatorTimeRemaining; // 0x14c(0x04)
	struct U*de6aae17ea* AnimInst; // 0x150(0x08)
	char pad_158[0x8]; // 0x158(0x08)

	void ReceivePlayShake(); // Function Engine.CameraShake.ReceivePlayShake // None // @ game+0x26a108
	void ReceiveStopShake(); // Function Engine.CameraShake.ReceiveStopShake // None // @ game+0x26a108
	struct F*cfcaca8725 BlueprintUpdateCameraShake(); // Function Engine.CameraShake.BlueprintUpdateCameraShake // None // @ game+0x26a108
	void ReceiveIsFinished(); // Function Engine.CameraShake.ReceiveIsFinished // None // @ game+0xbd66ac
};

// Class Engine.*63b14265fa
// Size: 0x280 (Inherited: 0x1f0)
struct U*63b14265fa : UActorComponent {
	char pad_1F0[0x70]; // 0x1f0(0x70)
	struct TArray<struct F*08ee4d66ce> *08ee4d66ce; // 0x260(0x10)
	char pad_270[0x10]; // 0x270(0x10)

	void *813159274a(); // Function Engine.*63b14265fa.*813159274a // None // @ game+0x636bcc8
	struct AActor* OnInputOwnerEndPlayed(); // Function Engine.*63b14265fa.OnInputOwnerEndPlayed // None // @ game+0x63724c8
	struct FKey *c51a2b8470(); // Function Engine.*63b14265fa.*c51a2b8470 // None // @ game+0x6367070
	void *7e45599f79(); // Function Engine.*63b14265fa.*7e45599f79 // None // @ game+0x6366d80
	void *a04458f0a0(); // Function Engine.*63b14265fa.*a04458f0a0 // None // @ game+0x636bcc8
	float *f02eefa657(); // Function Engine.*63b14265fa.*f02eefa657 // None // @ game+0x636b088
	void *cd26f7604c(struct FKey Key); // Function Engine.*63b14265fa.*cd26f7604c // None // @ game+0x6366d80
	void *d2538d0575(float StickX); // Function Engine.*63b14265fa.*d2538d0575 // None // @ game+0x6366e88
	float *4f1eccd288(); // Function Engine.*63b14265fa.*4f1eccd288 // None // @ game+0x6366fa0
	struct FKey *dd977a3fde(); // Function Engine.*63b14265fa.*dd977a3fde // None // @ game+0x636bcc8
};

// Class Engine.CurveFloat
// Size: 0xa8 (Inherited: 0x30)
struct UCurveFloat : UCurveBase {
	struct FRichCurve *2d625a83c8; // 0x30(0x70)
	bool *2df1ab8272; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	float *f3987cbe77(); // Function Engine.CurveFloat.*f3987cbe77 // None // @ game+0x92f85c
	float *1bf4f700b6(); // Function Engine.CurveFloat.*1bf4f700b6 // None // @ game+0x63671fc
};

// Class Engine.DecalActor
// Size: 0x400 (Inherited: 0x3f8)
struct ADecalActor : AActor {
	struct UDecalComponent* Decal; // 0x3f8(0x08)

	void *5ef8202fe7(); // Function Engine.DecalActor.*5ef8202fe7 // None // @ game+0x63671d4
	void CreateDynamicMaterialInstance(); // Function Engine.DecalActor.CreateDynamicMaterialInstance // None // @ game+0x560eb48
	void *e5a6406b5b(); // Function Engine.DecalActor.*e5a6406b5b // None // @ game+0x63798d8
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
	struct U*8aed76bbf2* CaptureComponent; // 0x3f8(0x08)
};

// Class Engine.DocumentationActor
// Size: 0x400 (Inherited: 0x3f8)
struct ADocumentationActor : AActor {
	struct FMulticastDelegate OnActorEndOverlap; // 0x28(0x10)
	struct FMulticastDelegate OnClicked; // 0x48(0x10)
	int32 *2bc7f7749a; // 0x58(0x04)
	char pad_41C_0 : 3; // 0x41c(0x01)
	char *6a29209afc : 1; // 0x5c(0x01)
	char *6583edce58 : 1; // 0x5d(0x01)
	char bReplicates : 1; // 0x5d(0x01)
	struct FName *332fd811ca; // 0x60(0x08)
	enum class ENetRole RemoteRole; // 0x68(0x01)
	struct AActor* Owner; // 0x70(0x08)
	struct FRepMovement ReplicatedMovement; // 0x78(0x34)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xb0(0x40)
	float InitialLifeSpan; // 0xf4(0x04)
	struct FMulticastDelegate OnInputTouchLeave; // 0xf8(0x10)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x110(0x10)
	struct FGuid DestructibleId; // 0x120(0x10)
	bool bIsDestroyedVersion; // 0x130(0x01)
	bool RemoveFromLevelLOD; // 0x131(0x01)
	struct F*2066290a18 PrimaryActorTick; // 0x138(0x58)
	char bAutoDestroyWhenFinished : 1; // 0x190(0x01)
	char bCanBeDamaged : 1; // 0x190(0x01)
	char *50cd51ed38 : 1; // 0x190(0x01)
	char *e002b42072 : 1; // 0x190(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x190(0x01)
	char *a4c704a3e5 : 1; // 0x190(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x190(0x01)
	char *13aea9b43a : 1; // 0x190(0x01)
	char *4211b886bf : 1; // 0x191(0x01)
	struct AActor* ParentComponentActor; // 0x194(0x08)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1a0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x1b8(0x10)
	float *ae3e81fc86; // 0x1c8(0x04)
	char *97cac516e7 : 1; // 0x1d8(0x01)
	char *cd27b8552b : 1; // 0x1d8(0x01)
	char *8aabd64ff4 : 1; // 0x1d8(0x01)
	char *3cd32b903e : 1; // 0x1d8(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1d9(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1da(0x01)
	float CustomTimeDilation; // 0x1dc(0x04)
	enum class ENetRole Role; // 0x1e1(0x01)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1e8(0x10)
	struct FMulticastDelegate OnTakePointDamage; // 0x200(0x10)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x260(0x10)
	struct TArray<struct AActor*> Children; // 0x270(0x10)
	int32 *2d89f8ef7f; // 0x280(0x04)
	struct FMulticastDelegate OnInputTouchEnter; // 0x288(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x298(0x01)
	struct FMulticastDelegate OnInputTouchBegin; // 0x2a0(0x10)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x2b0(0x10)
	struct USceneComponent* RootComponent; // 0x2c0(0x08)
	enum class *66c1dada81 InputConsumeOption; // 0x2c8(0x01)
	struct FMulticastDelegate OnReleased; // 0x2d0(0x10)
	struct FMulticastDelegate OnActorHit; // 0x2e0(0x10)
	enum class EAutoReceiveInput *8606d93d96; // 0x2f0(0x01)
	struct TArray<struct FName> Layers; // 0x2f8(0x10)
	struct TArray<struct FName> Tags; // 0x308(0x10)
	struct U*63b14265fa* *63b14265fa; // 0x318(0x08)
	float NetUpdateFrequency; // 0x320(0x04)
	uint64 *f99b84bc94; // 0x328(0x08)
	struct UChildActorComponent* *129513d23d; // 0x330(0x08)
	float MinNetUpdateFrequency; // 0x388(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x390(0x10)
	float NetCullDistanceSquared; // 0x3a0(0x04)
	float NetPriority; // 0x3a4(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x3a8(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x3b8(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3c8(0x10)
	struct APawn* Instigator; // 0x3e0(0x08)
	char bHidden : 1; // 0x3e8(0x01)
	char *0854a90e26 : 1; // 0x3e8(0x01)
	char *013332e5c6 : 1; // 0x3e8(0x01)
	char bOnlyRelevantToOwner : 1; // 0x3e8(0x01)
	char bAlwaysRelevant : 1; // 0x3e8(0x01)
	char *9ddfc785f1 : 1; // 0x3e8(0x01)
	char *05594c4443 : 1; // 0x3e8(0x01)
	char *ef19f6b6c9 : 1; // 0x3e8(0x01)
	char *dca9d9a72a : 1; // 0x3e9(0x01)
	char *16d69885c9 : 1; // 0x3e9(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x3e9(0x01)
	char *59968c9633 : 1; // 0x3e9(0x01)
	char *02848ec998 : 1; // 0x3e9(0x01)

	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // None // @ game+0x6365248
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // None // @ game+0x637c668
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // None // @ game+0x636a7dc
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // None // @ game+0x637cc50
	void *82b3653b7b(struct AActor* OtherActor); // Function Engine.Actor.*82b3653b7b // None // @ game+0x636b3e8
	struct AController* ReceiveAnyDamage(float Damage); // Function Engine.Actor.ReceiveAnyDamage // None // @ game+0x26a108
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // None // @ game+0x26a108
	struct FName ActorHasTag(); // Function Engine.Actor.ActorHasTag // None // @ game+0x635bf94
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // None // @ game+0x6365214
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // None // @ game+0x26a108
	enum class EAttachLocation K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // None // @ game+0x636e438
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldOffset // None // @ game+0x636cd8c
	enum class EAttachLocation K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // None // @ game+0x636e2b8
	void HasAuthority(); // Function Engine.Actor.HasAuthority // None // @ game+0x9e1498
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // None // @ game+0x636a060
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // None // @ game+0x6369fa8
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // None // @ game+0x6376d90
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // None // @ game+0x6365898
	void *f77af040ad(); // Function Engine.Actor.*f77af040ad // None // @ game+0x6365634
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // None // @ game+0xbe9a6c
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // None // @ game+0x636ed78
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // None // @ game+0x63650f0
	struct FName *43eab6a44c(); // Function Engine.Actor.*43eab6a44c // None // @ game+0x6368648
	enum class EAttachmentRule *ca2fce53c9(struct AActor* ParentActor, struct FName SocketName); // Function Engine.Actor.*ca2fce53c9 // None // @ game+0x636e738
	void K2_AddActorWorldTransform(struct FTransform DeltaTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldTransform // None // @ game+0x636d13c
	bool K2_SetActorLocation(struct FVector NewLocation); // Function Engine.Actor.K2_SetActorLocation // None // @ game+0x636fe08
	struct FKey *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // None // @ game+0x6368554
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // None // @ game+0x6376e28
	struct UObject* AddComponent(struct FName TemplateName); // Function Engine.Actor.AddComponent // None // @ game+0xa5d3a0
	struct FHitResult K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // None // @ game+0x636cf64
	void GetTransform(); // Function Engine.Actor.GetTransform // None // @ game+0xaacdcc
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // None // @ game+0x636ed90
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // None // @ game+0xb99a34
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // None // @ game+0x6364520
	void GetActorBounds(struct FVector Origin); // Function Engine.Actor.GetActorBounds // None // @ game+0x6364cbc
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // None // @ game+0x6367f78
	float MakeNoise(); // Function Engine.Actor.MakeNoise // None // @ game+0x63720f4
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // None // @ game+0x6365288
	void *a487955527(); // Function Engine.Actor.*a487955527 // None // @ game+0x636f250
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // None // @ game+0x6367524
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // None // @ game+0x26a108
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // None // @ game+0x26a108
	void *76b33f89d4(); // Function Engine.Actor.*76b33f89d4 // None // @ game+0x636ac9c
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // None // @ game+0x26a108
	void DisableInput(); // Function Engine.Actor.DisableInput // None // @ game+0x6362a78
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // None // @ game+0x636ba48
	enum class *42e1cdcd79 *694ac52e11(enum class *42e1cdcd79 LocationRule); // Function Engine.Actor.*694ac52e11 // None // @ game+0x636eee0
	struct UClass* *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // None // @ game+0x63669ec
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // None // @ game+0xb40e14
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // None // @ game+0x637c5d0
	void *7952614099(); // Function Engine.Actor.*7952614099 // None // @ game+0x6365260
	struct FHitResult K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // None // @ game+0x636c988
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // None // @ game+0xb6a404
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // None // @ game+0x26a108
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // None // @ game+0x6364aa8
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // None // @ game+0x6369bb8
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // None // @ game+0x6377260
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // None // @ game+0x6364f98
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // None // @ game+0x26a108
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // None // @ game+0x636f734
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // None // @ game+0x8b5060
	void *8ab522db39(); // Function Engine.Actor.*8ab522db39 // None // @ game+0x63672dc
	void *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // None // @ game+0x6366bd4
	struct FHitResult K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // None // @ game+0x63705d4
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // None // @ game+0x26a108
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // None // @ game+0x6373e3c
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // None // @ game+0x635dd54
	struct FHitResult ReceiveRadialDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceiveRadialDamage // None // @ game+0x26a108
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // None // @ game+0x6364abc
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // None // @ game+0x6368e6c
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // None // @ game+0x26a108
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // None // @ game+0x636af68
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // None // @ game+0x63771cc
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // None // @ game+0x26a108
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // None // @ game+0x26a108
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // None // @ game+0x6369e18
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // None // @ game+0x636c7b0
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // None // @ game+0x636a03c
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // None // @ game+0x6370224
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // None // @ game+0xb44448
	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // None // @ game+0x636ba64
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // None // @ game+0x70f418
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // None // @ game+0x26a108
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // None // @ game+0x635dc2c
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // None // @ game+0x636bafc
	void *679babdbe9(struct FVector DestLocation); // Function Engine.Actor.*679babdbe9 // None // @ game+0x6371a40
	float *77574d4d00(); // Function Engine.Actor.*77574d4d00 // None // @ game+0x637f170
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // None // @ game+0x26a108
	void *2bbda76e95(struct UClass* ComponentClass); // Function Engine.Actor.*2bbda76e95 // None // @ game+0x6366ae4
	void *8ff8fb0472(struct FKey InputAxisKey); // Function Engine.Actor.*8ff8fb0472 // None // @ game+0x6368c64
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // None // @ game+0x636586c
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // None // @ game+0x636f318
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // None // @ game+0x63650bc
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // None // @ game+0x637cb38
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // None // @ game+0x636ffec
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // None // @ game+0x637712c
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // None // @ game+0x637708c
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // None // @ game+0x637ea90
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // None // @ game+0x26a108
	struct FVector *4e14239fe2(); // Function Engine.Actor.*4e14239fe2 // None // @ game+0x6364e8c
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // None // @ game+0x6368f34
	void *6f6713dfba(struct AActor* OtherActor); // Function Engine.Actor.*6f6713dfba // None // @ game+0x6368018
	struct FHitResult K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // None // @ game+0x63703fc
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // None // @ game+0x6365848
	void K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // None // @ game+0x605cd0
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // None // @ game+0x6373d14
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // None // @ game+0x6364e64
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // None // @ game+0x26a108
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // None // @ game+0x26a108
	void *58360a298b(struct AActor* Other); // Function Engine.Actor.*58360a298b // None // @ game+0x636c21c
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // None // @ game+0x63629e4
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // None // @ game+0x636b3b0
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // None // @ game+0x26a108
	bool K2_SetActorTransform(bool bSweep); // Function Engine.Actor.K2_SetActorTransform // None // @ game+0x6370800
	void SetOwner(); // Function Engine.Actor.SetOwner // None // @ game+0x637b964
	void *094169766b(); // Function Engine.Actor.*094169766b // None // @ game+0x6368e84
	void *2a43ddf3b4(struct AActor* OtherActor); // Function Engine.Actor.*2a43ddf3b4 // None // @ game+0x636737c
	enum class EAttachmentRule *e13072354b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*e13072354b // None // @ game+0x63d310
	void *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // None // @ game+0x637dda0
	struct FVector ReceivePointDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceivePointDamage // None // @ game+0x26a108
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // None // @ game+0x26a108
	struct FHitResult K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // None // @ game+0x636cb60
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector NormalImpulse); // Function Engine.Actor.ReceiveHit // None // @ game+0x26a108
	struct UMaterialInterface* *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // None // @ game+0x6372078
};

// Class Engine.Emitter
// Size: 0x448 (Inherited: 0x3f8)
struct AEmitter : AActor {
	struct UParticleSystemComponent* ParticleSystemComponent; // 0x3f8(0x08)
	char *9139d37487 : 1; // 0x400(0x01)
	char bPostUpdateTickGroup : 1; // 0x400(0x01)
	char *1ba7876da8 : 1; // 0x400(0x01)
	char pad_400_3 : 5; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FMulticastDelegate OnParticleSpawn; // 0x408(0x10)
	struct FMulticastDelegate OnParticleBurst; // 0x418(0x10)
	struct FMulticastDelegate OnParticleDeath; // 0x428(0x10)
	struct FMulticastDelegate OnParticleCollide; // 0x438(0x10)

	void *b6de83bb83(); // Function Engine.Emitter.*b6de83bb83 // None // @ game+0x637eaa8
	void *9b5dcbfbeb(); // Function Engine.Emitter.*9b5dcbfbeb // None // @ game+0x56a5de4
	void OnRep_bCurrentlyActive(); // Function Engine.Emitter.OnRep_bCurrentlyActive // None // @ game+0x7a3ba0
	void Activate(); // Function Engine.Emitter.Activate // None // @ game+0x635bec8
	void OnParticleSystemFinished(); // Function Engine.Emitter.OnParticleSystemFinished // None // @ game+0x55c5d30
	struct FName *3ed14454d9(); // Function Engine.Emitter.*3ed14454d9 // None // @ game+0x637d32c
	struct FName *3e55e7d95c(); // Function Engine.Emitter.*3e55e7d95c // None // @ game+0x637b298
	void *9252cbf5cf(); // Function Engine.Emitter.*9252cbf5cf // None // @ game+0x6379264
	void Deactivate(); // Function Engine.Emitter.Deactivate // None // @ game+0x636246c
	struct FName *1978396d1f(); // Function Engine.Emitter.*1978396d1f // None // @ game+0x6376ec0
	struct FName SetFloatParameter(); // Function Engine.Emitter.SetFloatParameter // None // @ game+0x6379cd4
	void IsActive(); // Function Engine.Emitter.IsActive // None // @ game+0x636b9e4
};

// Class Engine.EmitterCameraLensEffectBase
// Size: 0x4b0 (Inherited: 0x448)
struct AEmitterCameraLensEffectBase : AEmitter {
	struct UParticleSystem* *b70d2a0387; // 0x448(0x08)
	struct UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x450(0x08)
	struct APlayerCameraManager* *26b4993c40; // 0x458(0x08)
	struct FTransform RelativeTransform; // 0x460(0x30)
	float *5d0f61c14f; // 0x490(0x04)
	char *5d42685f42 : 1; // 0x494(0x01)
	char *15ffb9a242 : 1; // 0x494(0x01)
	char pad_494_2 : 6; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	struct TArray<struct UClass*> *b15eb3abf8; // 0x498(0x10)
	float DistFromCamera; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
};

// Class Engine.FoliageBlockingVolumeActor
// Size: 0x400 (Inherited: 0x3f8)
struct AFoliageBlockingVolumeActor : AActor {
	struct U*1ee70631d9* FoliageBlockingVolumeComponent; // 0x3f8(0x08)
};

// Class Engine.DebugCameraHUD
// Size: 0x4e0 (Inherited: 0x4e0)
struct ADebugCameraHUD : AHUD {
	struct APlayerController* PlayerOwner; // 0x3f8(0x08)
	char bLostFocusPaused : 1; // 0x400(0x01)
	char bShowHUD : 1; // 0x400(0x01)
	char bShowDebugInfo : 1; // 0x400(0x01)
	char bShowHitBoxDebugInfo : 1; // 0x400(0x01)
	char bShowOverlays : 1; // 0x400(0x01)
	char bEnableDebugTextShadow : 1; // 0x400(0x01)
	struct TArray<struct AActor*> *e03555f483; // 0x408(0x10)
	struct TArray<struct FName> DebugDisplay; // 0x420(0x10)
	struct TArray<struct FName> ToggledDebugCategories; // 0x430(0x10)
	struct UCanvas* Canvas; // 0x440(0x08)
	struct UCanvas* *62b97b751a; // 0x448(0x08)
	struct TArray<struct F*fae183bc56> *fe8d86efa1; // 0x450(0x10)
	struct UClass* *fb904319b5; // 0x460(0x08)
	struct AActor* *463b4dc366; // 0x468(0x08)

	void ReceiveHitBoxBeginCursorOver(); // Function Engine.HUD.ReceiveHitBoxBeginCursorOver // None // @ game+0x26a108
	bool *df4061b0be(); // Function Engine.HUD.*df4061b0be // None // @ game+0x63653ac
	void AddHitBox(struct FVector2D Position, struct FName InName); // Function Engine.HUD.AddHitBox // None // @ game+0x635cce0
	struct FVector Project(); // Function Engine.HUD.Project // None // @ game+0x63737d8
	void ReceiveHitBoxClick(); // Function Engine.HUD.ReceiveHitBoxClick // None // @ game+0x26a108
	void *0246c1a4d4(struct FString Text, float OutHeight); // Function Engine.HUD.*0246c1a4d4 // None // @ game+0x636ad3c
	float *fe035ce755(); // Function Engine.HUD.*fe035ce755 // None // @ game+0x6363260
	void *c23d7d1b95(struct FLinearColor TextColor, float ScreenY, float Scale); // Function Engine.HUD.*c23d7d1b95 // None // @ game+0x6363a24
	void ShowHUD(); // Function Engine.HUD.ShowHUD // None // @ game+0xcbeb68
	struct AActor* *96bc26c00a(); // Function Engine.HUD.*96bc26c00a // None // @ game+0x6373c34
	void *7ae35533f0(float ScreenX, float Scale); // Function Engine.HUD.*7ae35533f0 // None // @ game+0x63641ec
	struct FLinearColor *73cee3e4ca(); // Function Engine.HUD.*73cee3e4ca // None // @ game+0x6362bcc
	void ShowDebugToggleSubCategory(); // Function Engine.HUD.ShowDebugToggleSubCategory // None // @ game+0x637dd10
	void *2693eb47f0(); // Function Engine.HUD.*2693eb47f0 // None // @ game+0x636a018
	void *9947d93eda(); // Function Engine.HUD.*9947d93eda // None // @ game+0x56a0ed4
	void ShowDebugForReticleTargetToggle(); // Function Engine.HUD.ShowDebugForReticleTargetToggle // None // @ game+0x637dc50
	void Deproject(float ScreenX, struct FVector WorldPosition); // Function Engine.HUD.Deproject // None // @ game+0x63624b8
	void ReceiveHitBoxEndCursorOver(); // Function Engine.HUD.ReceiveHitBoxEndCursorOver // None // @ game+0x26a108
	float DrawTexture(float TextureV, float TextureVHeight, enum class EBlendMode BlendMode, bool bScalePosition); // Function Engine.HUD.DrawTexture // None // @ game+0x6363cdc
	int32 ReceiveDrawHUD(); // Function Engine.HUD.ReceiveDrawHUD // None // @ game+0x26a108
	void *f7fdb39fc4(struct FLinearColor RectColor, float ScreenY); // Function Engine.HUD.*f7fdb39fc4 // None // @ game+0x6363848
	void *872a042141(); // Function Engine.HUD.*872a042141 // None // @ game+0x6373a80
	float *54873e95c6(float MaterialV, float MaterialVHeight, bool bScalePosition); // Function Engine.HUD.*54873e95c6 // None // @ game+0x6362df8
	void ReceiveHitBoxRelease(); // Function Engine.HUD.ReceiveHitBoxRelease // None // @ game+0x26a108
	struct FVector2D *40f4edae17(struct FVector2D V2_Pos, struct FVector2D V1_UV, struct FLinearColor V0_Color); // Function Engine.HUD.*40f4edae17 // None // @ game+0x63634d8
	void ShowDebug(); // Function Engine.HUD.ShowDebug // None // @ game+0x637dbbc
	float *c5ab2302bc(struct FVector Param3, struct FColor Param5, bool Param7, struct UFont* Param9); // Function Engine.HUD.*c5ab2302bc // None // @ game+0x635c3f0
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

	void OnRep_bEnabled(); // Function Engine.ExponentialHeightFog.OnRep_bEnabled // None // @ game+0xcbeb68
};

// Class Engine.GameNetworkManager
// Size: 0x480 (Inherited: 0x3f8)
struct AGameNetworkManager : AInfo {
	int32 *f74a0bfe74; // 0x3f8(0x04)
	float *c5440b9f3d; // 0x3fc(0x04)
	int32 TotalNetBandwidth; // 0x400(0x04)
	int32 MinDynamicBandwidth; // 0x404(0x04)
	int32 MaxDynamicBandwidth; // 0x408(0x04)
	char bIsStandbyCheckingEnabled : 1; // 0x40c(0x01)
	char *734f9b33bb : 1; // 0x40c(0x01)
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

	void OnRep_bEnabled(); // Function Engine.SkyLight.OnRep_bEnabled // None // @ game+0xcbeb68
};

// Class Engine.WindDirectionalSource
// Size: 0x400 (Inherited: 0x3f8)
struct AWindDirectionalSource : AInfo {
	struct U*4f57f7c40f* Component; // 0x3f8(0x08)
};

// Class Engine.WorldSettings
// Size: 0x5e0 (Inherited: 0x3f8)
struct AWorldSettings : AInfo {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	char bEnableWorldBoundsChecks : 1; // 0x400(0x01)
	char bEnableNavigationSystem : 1; // 0x400(0x01)
	char bEnableAISystem : 1; // 0x400(0x01)
	char bEnableWorldComposition : 1; // 0x400(0x01)
	char bUseClientSideLevelStreamingVolumes : 1; // 0x400(0x01)
	char bEnableWorldOriginRebasing : 1; // 0x400(0x01)
	char *9b24f35904 : 1; // 0x400(0x01)
	char bGlobalGravitySet : 1; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	float KillZ; // 0x404(0x04)
	struct AInfo* LevelAttribute; // 0x408(0x08)
	struct UClass* KillZDamageType; // 0x410(0x08)
	float *31017d6152; // 0x418(0x04)
	float GlobalGravityZ; // 0x41c(0x04)
	struct UClass* DefaultPhysicsVolumeClass; // 0x420(0x08)
	struct UClass* PhysicsCollisionHandlerClass; // 0x428(0x08)
	struct UClass* DefaultGameMode; // 0x430(0x08)
	struct UClass* *2c0407c054; // 0x438(0x08)
	int32 *481b17bd39; // 0x440(0x04)
	char *a0f57a4d2d : 1; // 0x444(0x01)
	char pad_444_1 : 7; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	struct FVector DefaultColorScale; // 0x448(0x0c)
	float *68b59b1aed; // 0x454(0x04)
	float *4cf3ade969; // 0x458(0x04)
	float *5e36eee532; // 0x45c(0x04)
	char *481faab933 : 1; // 0x460(0x01)
	char *832f46d73e : 1; // 0x460(0x01)
	char pad_460_2 : 6; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	int32 *3d149187d7; // 0x464(0x04)
	enum class *c5fa5b0d34 *8406c10b95; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	char *e13421b851 : 1; // 0x46c(0x01)
	char pad_46C_1 : 7; // 0x46c(0x01)
	char pad_46D[0x3]; // 0x46d(0x03)
	struct FLightmassWorldInfoSettings LightmassSettings; // 0x470(0x44)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct FReverbSettings DefaultReverbSettings; // 0x4b8(0x18)
	struct F*2b1daf3feb DefaultAmbientZoneSettings; // 0x4d0(0x24)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct USoundMix* *8ec9299a48; // 0x4f8(0x08)
	float WorldToMeters; // 0x500(0x04)
	float MonoCullingDistance; // 0x504(0x04)
	struct U*ba77e92031* BookMarks[0x0a]; // 0x508(0x50)
	float TimeDilation; // 0x558(0x04)
	float *f46a1a2170; // 0x55c(0x04)
	float DemoPlayTimeDilation; // 0x560(0x04)
	float MinGlobalTimeDilation; // 0x564(0x04)
	float MaxGlobalTimeDilation; // 0x568(0x04)
	char pad_56C[0x8]; // 0x56c(0x08)
	struct FBox MBPBounds; // 0x574(0x1c)
	char bOverrideDefaultBroadphaseSettings : 1; // 0x590(0x01)
	char pad_590_1 : 7; // 0x590(0x01)
	char pad_591[0x3]; // 0x591(0x03)
	char *5132123374 : 1; // 0x594(0x01)
	char *d43a2de1ac : 1; // 0x594(0x01)
	char pad_594_2 : 6; // 0x594(0x01)
	char pad_595[0x3]; // 0x595(0x03)
	struct TArray<struct F*6ca3c6038b> *260958dbb0; // 0x598(0x10)
	struct FMulticastDelegate *9f875f1f06; // 0x5a8(0x10)
	struct FMulticastDelegate *6e6574d2dd; // 0x5b8(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x5c8(0x10)
	struct APlayerState* *50a0801c85; // 0x5d8(0x08)

	void OnRep_WorldGravityZ(); // Function Engine.WorldSettings.OnRep_WorldGravityZ // None // @ game+0x7a3ba0
	void TakeMBPBounds(); // Function Engine.WorldSettings.TakeMBPBounds // None // @ game+0xcbeb68
};

// Class Engine.InstancedDeferredDecalActor
// Size: 0x430 (Inherited: 0x3f8)
struct AInstancedDeferredDecalActor : AActor {
	bool bUseInstancePool; // 0x3f8(0x01)
	bool bUseDynamicInstance; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
	struct UMaterialInterface* SharedMaterial; // 0x400(0x08)
	struct U*23111f4fe9* RootDecalComponent; // 0x408(0x08)
	struct TArray<struct U*23111f4fe9*> decals; // 0x410(0x10)
	char pad_420[0x10]; // 0x420(0x10)

	void *028d8429ac(); // Function Engine.InstancedDeferredDecalActor.*028d8429ac // None // @ game+0x635d334
	void *f5d3b0ecf2(); // Function Engine.InstancedDeferredDecalActor.*f5d3b0ecf2 // None // @ game+0x55cd9d4
	void CreateDynamicMaterialInstance(); // Function Engine.InstancedDeferredDecalActor.CreateDynamicMaterialInstance // None // @ game+0x560eb48
	void *473627bd49(); // Function Engine.InstancedDeferredDecalActor.*473627bd49 // None // @ game+0x55bec48
	void *5ef8202fe7(); // Function Engine.InstancedDeferredDecalActor.*5ef8202fe7 // None // @ game+0x563d400
	void *e5a6406b5b(); // Function Engine.InstancedDeferredDecalActor.*e5a6406b5b // None // @ game+0x6379974
	void *ba91a053fa(); // Function Engine.InstancedDeferredDecalActor.*ba91a053fa // None // @ game+0x637d29c
	void *e44e849db7(); // Function Engine.InstancedDeferredDecalActor.*e44e849db7 // None // @ game+0x55bec0c
};

// Class Engine.InstancedSplineDecalActor
// Size: 0x400 (Inherited: 0x3f8)
struct AInstancedSplineDecalActor : AActor {
	struct U*611beb24ff* InstancedSplineDecalComponent; // 0x3f8(0x08)
};

// Class Engine.LevelBlockLandscapeGizmoActor
// Size: 0x400 (Inherited: 0x3f8)
struct ALevelBlockLandscapeGizmoActor : AActor {
	struct U*5c7832fd96* LandscapeGizmoComponent; // 0x3f8(0x08)
};

// Class Engine.LevelBlocksDataActor
// Size: 0x400 (Inherited: 0x3f8)
struct ALevelBlocksDataActor : AActor {
	struct U*686d9ef451* LevelBlocksDataComponent; // 0x3f8(0x08)
};

// Class Engine.LevelBlockSpawnedActor
// Size: 0x3f8 (Inherited: 0x3f8)
struct ALevelBlockSpawnedActor : AActor {
	struct FMulticastDelegate OnActorEndOverlap; // 0x28(0x10)
	struct FMulticastDelegate OnClicked; // 0x48(0x10)
	int32 *2bc7f7749a; // 0x58(0x04)
	char pad_41C_0 : 3; // 0x41c(0x01)
	char *6a29209afc : 1; // 0x5c(0x01)
	char *6583edce58 : 1; // 0x5d(0x01)
	char bReplicates : 1; // 0x5d(0x01)
	struct FName *332fd811ca; // 0x60(0x08)
	enum class ENetRole RemoteRole; // 0x68(0x01)
	struct AActor* Owner; // 0x70(0x08)
	struct FRepMovement ReplicatedMovement; // 0x78(0x34)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xb0(0x40)
	float InitialLifeSpan; // 0xf4(0x04)
	struct FMulticastDelegate OnInputTouchLeave; // 0xf8(0x10)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x110(0x10)
	struct FGuid DestructibleId; // 0x120(0x10)
	bool bIsDestroyedVersion; // 0x130(0x01)
	bool RemoveFromLevelLOD; // 0x131(0x01)
	struct F*2066290a18 PrimaryActorTick; // 0x138(0x58)
	char bAutoDestroyWhenFinished : 1; // 0x190(0x01)
	char bCanBeDamaged : 1; // 0x190(0x01)
	char *50cd51ed38 : 1; // 0x190(0x01)
	char *e002b42072 : 1; // 0x190(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x190(0x01)
	char *a4c704a3e5 : 1; // 0x190(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x190(0x01)
	char *13aea9b43a : 1; // 0x190(0x01)
	char *4211b886bf : 1; // 0x191(0x01)
	struct AActor* ParentComponentActor; // 0x194(0x08)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1a0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x1b8(0x10)
	float *ae3e81fc86; // 0x1c8(0x04)
	char *97cac516e7 : 1; // 0x1d8(0x01)
	char *cd27b8552b : 1; // 0x1d8(0x01)
	char *8aabd64ff4 : 1; // 0x1d8(0x01)
	char *3cd32b903e : 1; // 0x1d8(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1d9(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1da(0x01)
	float CustomTimeDilation; // 0x1dc(0x04)
	enum class ENetRole Role; // 0x1e1(0x01)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1e8(0x10)
	struct FMulticastDelegate OnTakePointDamage; // 0x200(0x10)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x260(0x10)
	struct TArray<struct AActor*> Children; // 0x270(0x10)
	int32 *2d89f8ef7f; // 0x280(0x04)
	struct FMulticastDelegate OnInputTouchEnter; // 0x288(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x298(0x01)
	struct FMulticastDelegate OnInputTouchBegin; // 0x2a0(0x10)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x2b0(0x10)
	struct USceneComponent* RootComponent; // 0x2c0(0x08)
	enum class *66c1dada81 InputConsumeOption; // 0x2c8(0x01)
	struct FMulticastDelegate OnReleased; // 0x2d0(0x10)
	struct FMulticastDelegate OnActorHit; // 0x2e0(0x10)
	enum class EAutoReceiveInput *8606d93d96; // 0x2f0(0x01)
	struct TArray<struct FName> Layers; // 0x2f8(0x10)
	struct TArray<struct FName> Tags; // 0x308(0x10)
	struct U*63b14265fa* *63b14265fa; // 0x318(0x08)
	float NetUpdateFrequency; // 0x320(0x04)
	uint64 *f99b84bc94; // 0x328(0x08)
	struct UChildActorComponent* *129513d23d; // 0x330(0x08)
	float MinNetUpdateFrequency; // 0x388(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x390(0x10)
	float NetCullDistanceSquared; // 0x3a0(0x04)
	float NetPriority; // 0x3a4(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x3a8(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x3b8(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3c8(0x10)
	struct APawn* Instigator; // 0x3e0(0x08)
	char bHidden : 1; // 0x3e8(0x01)
	char *0854a90e26 : 1; // 0x3e8(0x01)
	char *013332e5c6 : 1; // 0x3e8(0x01)
	char bOnlyRelevantToOwner : 1; // 0x3e8(0x01)
	char bAlwaysRelevant : 1; // 0x3e8(0x01)
	char *9ddfc785f1 : 1; // 0x3e8(0x01)
	char *05594c4443 : 1; // 0x3e8(0x01)
	char *ef19f6b6c9 : 1; // 0x3e8(0x01)
	char *dca9d9a72a : 1; // 0x3e9(0x01)
	char *16d69885c9 : 1; // 0x3e9(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x3e9(0x01)
	char *59968c9633 : 1; // 0x3e9(0x01)
	char *02848ec998 : 1; // 0x3e9(0x01)

	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // None // @ game+0x6365248
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // None // @ game+0x637c668
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // None // @ game+0x636a7dc
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // None // @ game+0x637cc50
	void *82b3653b7b(struct AActor* OtherActor); // Function Engine.Actor.*82b3653b7b // None // @ game+0x636b3e8
	struct AController* ReceiveAnyDamage(float Damage); // Function Engine.Actor.ReceiveAnyDamage // None // @ game+0x26a108
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // None // @ game+0x26a108
	struct FName ActorHasTag(); // Function Engine.Actor.ActorHasTag // None // @ game+0x635bf94
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // None // @ game+0x6365214
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // None // @ game+0x26a108
	enum class EAttachLocation K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // None // @ game+0x636e438
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldOffset // None // @ game+0x636cd8c
	enum class EAttachLocation K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // None // @ game+0x636e2b8
	void HasAuthority(); // Function Engine.Actor.HasAuthority // None // @ game+0x9e1498
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // None // @ game+0x636a060
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // None // @ game+0x6369fa8
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // None // @ game+0x6376d90
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // None // @ game+0x6365898
	void *f77af040ad(); // Function Engine.Actor.*f77af040ad // None // @ game+0x6365634
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // None // @ game+0xbe9a6c
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // None // @ game+0x636ed78
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // None // @ game+0x63650f0
	struct FName *43eab6a44c(); // Function Engine.Actor.*43eab6a44c // None // @ game+0x6368648
	enum class EAttachmentRule *ca2fce53c9(struct AActor* ParentActor, struct FName SocketName); // Function Engine.Actor.*ca2fce53c9 // None // @ game+0x636e738
	void K2_AddActorWorldTransform(struct FTransform DeltaTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldTransform // None // @ game+0x636d13c
	bool K2_SetActorLocation(struct FVector NewLocation); // Function Engine.Actor.K2_SetActorLocation // None // @ game+0x636fe08
	struct FKey *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // None // @ game+0x6368554
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // None // @ game+0x6376e28
	struct UObject* AddComponent(struct FName TemplateName); // Function Engine.Actor.AddComponent // None // @ game+0xa5d3a0
	struct FHitResult K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // None // @ game+0x636cf64
	void GetTransform(); // Function Engine.Actor.GetTransform // None // @ game+0xaacdcc
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // None // @ game+0x636ed90
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // None // @ game+0xb99a34
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // None // @ game+0x6364520
	void GetActorBounds(struct FVector Origin); // Function Engine.Actor.GetActorBounds // None // @ game+0x6364cbc
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // None // @ game+0x6367f78
	float MakeNoise(); // Function Engine.Actor.MakeNoise // None // @ game+0x63720f4
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // None // @ game+0x6365288
	void *a487955527(); // Function Engine.Actor.*a487955527 // None // @ game+0x636f250
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // None // @ game+0x6367524
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // None // @ game+0x26a108
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // None // @ game+0x26a108
	void *76b33f89d4(); // Function Engine.Actor.*76b33f89d4 // None // @ game+0x636ac9c
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // None // @ game+0x26a108
	void DisableInput(); // Function Engine.Actor.DisableInput // None // @ game+0x6362a78
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // None // @ game+0x636ba48
	enum class *42e1cdcd79 *694ac52e11(enum class *42e1cdcd79 LocationRule); // Function Engine.Actor.*694ac52e11 // None // @ game+0x636eee0
	struct UClass* *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // None // @ game+0x63669ec
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // None // @ game+0xb40e14
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // None // @ game+0x637c5d0
	void *7952614099(); // Function Engine.Actor.*7952614099 // None // @ game+0x6365260
	struct FHitResult K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // None // @ game+0x636c988
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // None // @ game+0xb6a404
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // None // @ game+0x26a108
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // None // @ game+0x6364aa8
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // None // @ game+0x6369bb8
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // None // @ game+0x6377260
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // None // @ game+0x6364f98
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // None // @ game+0x26a108
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // None // @ game+0x636f734
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // None // @ game+0x8b5060
	void *8ab522db39(); // Function Engine.Actor.*8ab522db39 // None // @ game+0x63672dc
	void *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // None // @ game+0x6366bd4
	struct FHitResult K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // None // @ game+0x63705d4
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // None // @ game+0x26a108
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // None // @ game+0x6373e3c
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // None // @ game+0x635dd54
	struct FHitResult ReceiveRadialDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceiveRadialDamage // None // @ game+0x26a108
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // None // @ game+0x6364abc
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // None // @ game+0x6368e6c
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // None // @ game+0x26a108
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // None // @ game+0x636af68
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // None // @ game+0x63771cc
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // None // @ game+0x26a108
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // None // @ game+0x26a108
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // None // @ game+0x6369e18
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // None // @ game+0x636c7b0
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // None // @ game+0x636a03c
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // None // @ game+0x6370224
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // None // @ game+0xb44448
	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // None // @ game+0x636ba64
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // None // @ game+0x70f418
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // None // @ game+0x26a108
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // None // @ game+0x635dc2c
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // None // @ game+0x636bafc
	void *679babdbe9(struct FVector DestLocation); // Function Engine.Actor.*679babdbe9 // None // @ game+0x6371a40
	float *77574d4d00(); // Function Engine.Actor.*77574d4d00 // None // @ game+0x637f170
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // None // @ game+0x26a108
	void *2bbda76e95(struct UClass* ComponentClass); // Function Engine.Actor.*2bbda76e95 // None // @ game+0x6366ae4
	void *8ff8fb0472(struct FKey InputAxisKey); // Function Engine.Actor.*8ff8fb0472 // None // @ game+0x6368c64
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // None // @ game+0x636586c
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // None // @ game+0x636f318
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // None // @ game+0x63650bc
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // None // @ game+0x637cb38
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // None // @ game+0x636ffec
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // None // @ game+0x637712c
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // None // @ game+0x637708c
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // None // @ game+0x637ea90
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // None // @ game+0x26a108
	struct FVector *4e14239fe2(); // Function Engine.Actor.*4e14239fe2 // None // @ game+0x6364e8c
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // None // @ game+0x6368f34
	void *6f6713dfba(struct AActor* OtherActor); // Function Engine.Actor.*6f6713dfba // None // @ game+0x6368018
	struct FHitResult K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // None // @ game+0x63703fc
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // None // @ game+0x6365848
	void K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // None // @ game+0x605cd0
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // None // @ game+0x6373d14
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // None // @ game+0x6364e64
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // None // @ game+0x26a108
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // None // @ game+0x26a108
	void *58360a298b(struct AActor* Other); // Function Engine.Actor.*58360a298b // None // @ game+0x636c21c
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // None // @ game+0x63629e4
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // None // @ game+0x636b3b0
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // None // @ game+0x26a108
	bool K2_SetActorTransform(bool bSweep); // Function Engine.Actor.K2_SetActorTransform // None // @ game+0x6370800
	void SetOwner(); // Function Engine.Actor.SetOwner // None // @ game+0x637b964
	void *094169766b(); // Function Engine.Actor.*094169766b // None // @ game+0x6368e84
	void *2a43ddf3b4(struct AActor* OtherActor); // Function Engine.Actor.*2a43ddf3b4 // None // @ game+0x636737c
	enum class EAttachmentRule *e13072354b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*e13072354b // None // @ game+0x63d310
	void *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // None // @ game+0x637dda0
	struct FVector ReceivePointDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceivePointDamage // None // @ game+0x26a108
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // None // @ game+0x26a108
	struct FHitResult K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // None // @ game+0x636cb60
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector NormalImpulse); // Function Engine.Actor.ReceiveHit // None // @ game+0x26a108
	struct UMaterialInterface* *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // None // @ game+0x6372078
};

// Class Engine.LevelBlockSpawnPointActor
// Size: 0x400 (Inherited: 0x3f8)
struct ALevelBlockSpawnPointActor : AActor {
	struct U*fe01a1312a* SpawnPointComponent; // 0x3f8(0x08)
};

// Class Engine.LevelBounds
// Size: 0x400 (Inherited: 0x3f8)
struct ALevelBounds : AActor {
	bool *34ffd6f27e; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
};

// Class Engine.Light
// Size: 0x408 (Inherited: 0x3f8)
struct ALight : AActor {
	struct ULightComponent* LightComponent; // 0x3f8(0x08)
	char bEnabled : 1; // 0x400(0x01)
	char pad_400_1 : 7; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)

	void SetBrightness(); // Function Engine.Light.SetBrightness // None // @ game+0x6378890
	void *2754dcd2c9(); // Function Engine.Light.*2754dcd2c9 // None // @ game+0x6378ad4
	void *a183414a4c(); // Function Engine.Light.*a183414a4c // None // @ game+0x6366414
	void *87ec9d9ecc(); // Function Engine.Light.*87ec9d9ecc // None // @ game+0x637eb24
	void OnRep_bEnabled(); // Function Engine.Light.OnRep_bEnabled // None // @ game+0xcbeb68
	void *c2ca621058(); // Function Engine.Light.*c2ca621058 // None // @ game+0x637ace4
	void IsEnabled(); // Function Engine.Light.IsEnabled // None // @ game+0x636bdf8
	void *22316da662(); // Function Engine.Light.*22316da662 // None // @ game+0x63772f8
	void *f938159d44(); // Function Engine.Light.*f938159d44 // None // @ game+0x6379c3c
	void *9f60627cae(); // Function Engine.Light.*9f60627cae // None // @ game+0x637ab14
	void *fc39c3eb5f(); // Function Engine.Light.*fc39c3eb5f // None // @ game+0x6368f60
	void *b21589b6db(); // Function Engine.Light.*b21589b6db // None // @ game+0x637ad78
	void *3a0fe26cd5(); // Function Engine.Light.*3a0fe26cd5 // None // @ game+0x637ac48
};

// Class Engine.DirectionalLight
// Size: 0x408 (Inherited: 0x408)
struct ADirectionalLight : ALight {
	struct ULightComponent* LightComponent; // 0x3f8(0x08)
	char bEnabled : 1; // 0x400(0x01)

	void SetBrightness(); // Function Engine.Light.SetBrightness // None // @ game+0x6378890
	void *2754dcd2c9(); // Function Engine.Light.*2754dcd2c9 // None // @ game+0x6378ad4
	void *a183414a4c(); // Function Engine.Light.*a183414a4c // None // @ game+0x6366414
	void *87ec9d9ecc(); // Function Engine.Light.*87ec9d9ecc // None // @ game+0x637eb24
	void OnRep_bEnabled(); // Function Engine.Light.OnRep_bEnabled // None // @ game+0xcbeb68
	void *c2ca621058(); // Function Engine.Light.*c2ca621058 // None // @ game+0x637ace4
	void IsEnabled(); // Function Engine.Light.IsEnabled // None // @ game+0x636bdf8
	void *22316da662(); // Function Engine.Light.*22316da662 // None // @ game+0x63772f8
	void *f938159d44(); // Function Engine.Light.*f938159d44 // None // @ game+0x6379c3c
	void *9f60627cae(); // Function Engine.Light.*9f60627cae // None // @ game+0x637ab14
	void *fc39c3eb5f(); // Function Engine.Light.*fc39c3eb5f // None // @ game+0x6368f60
	void *b21589b6db(); // Function Engine.Light.*b21589b6db // None // @ game+0x637ad78
	void *3a0fe26cd5(); // Function Engine.Light.*3a0fe26cd5 // None // @ game+0x637ac48
};

// Class Engine.PointLight
// Size: 0x410 (Inherited: 0x408)
struct APointLight : ALight {
	struct UPointLightComponent* PointLightComponent; // 0x408(0x08)

	void SetRadius(); // Function Engine.PointLight.SetRadius // None // @ game+0x637c2b0
	void *6d22a703f6(); // Function Engine.PointLight.*6d22a703f6 // None // @ game+0x637abac
};

// Class Engine.spotlight
// Size: 0x410 (Inherited: 0x408)
struct Aspotlight : ALight {
	struct USpotLightComponent* SpotLightComponent; // 0x408(0x08)

	void *a41703425a(); // Function Engine.spotlight.*a41703425a // None // @ game+0x637a7fc
	void *88580bae0d(); // Function Engine.spotlight.*88580bae0d // None // @ game+0x637b8c8
};

// Class Engine.GeneratedMeshAreaLight
// Size: 0x410 (Inherited: 0x410)
struct AGeneratedMeshAreaLight : Aspotlight {
	struct USpotLightComponent* SpotLightComponent; // 0x408(0x08)

	void *a41703425a(); // Function Engine.spotlight.*a41703425a // None // @ game+0x637a7fc
	void *88580bae0d(); // Function Engine.spotlight.*88580bae0d // None // @ game+0x637b8c8
};

// Class Engine.LightmassPortal
// Size: 0x400 (Inherited: 0x3f8)
struct ALightmassPortal : AActor {
	struct U*e5ec23d71f* PortalComponent; // 0x3f8(0x08)
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
	struct FName *d517108a89; // 0x400(0x08)
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
	struct TArray<struct F*d41fb53a74> GroupActorInfos; // 0x420(0x10)
	char *f5ed413053 : 1; // 0x430(0x01)
	char pad_430_1 : 7; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct TArray<struct U*27ba39bd87*> *97e1eb552f; // 0x438(0x10)
	struct TArray<struct F*b584e80f7c> CameraCuts; // 0x448(0x10)
	char bIsPlaying : 1; // 0x458(0x01)
	char *c74475af73 : 1; // 0x458(0x01)
	char *76e306fd2a : 1; // 0x458(0x01)
	char *f22a656563 : 1; // 0x458(0x01)
	char pad_458_4 : 4; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	float InterpPosition; // 0x45c(0x04)
	char pad_460[0x4]; // 0x460(0x04)
	bool *9a7736495d; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	struct FMulticastDelegate OnPlay; // 0x468(0x10)
	struct FMulticastDelegate OnStop; // 0x478(0x10)
	struct FMulticastDelegate OnPause; // 0x488(0x10)
	char pad_498[0x8]; // 0x498(0x08)

	void Pause(); // Function Engine.MatineeActor.Pause // None // @ game+0x5658df0
	struct FString *7e27b907ea(); // Function Engine.MatineeActor.*7e27b907ea // None // @ game+0x63643d8
	void Reverse(); // Function Engine.MatineeActor.Reverse // None // @ game+0x567b1d0
	void *a193765da7(); // Function Engine.MatineeActor.*a193765da7 // None // @ game+0x637aeb4
	void Stop(); // Function Engine.MatineeActor.Stop // None // @ game+0x7a35ac
	void Play(); // Function Engine.MatineeActor.Play // None // @ game+0x7a3ba0
	void *84b1451f3a(); // Function Engine.MatineeActor.*84b1451f3a // None // @ game+0x56447ac
	float SetPosition(); // Function Engine.MatineeActor.SetPosition // None // @ game+0x637c09c
};

// Class Engine.MatineeActorCameraAnim
// Size: 0x4a8 (Inherited: 0x4a0)
struct AMatineeActorCameraAnim : AMatineeActor {
	struct UCameraAnim* CameraAnim; // 0x4a0(0x08)
};

// Class Engine.MinimapLabelActor
// Size: 0x400 (Inherited: 0x3f8)
struct AMinimapLabelActor : AActor {
	struct U*c155f3445f* MinimapLabelComponent; // 0x3f8(0x08)
};

// Class Engine.MinimapObjectActor
// Size: 0x400 (Inherited: 0x3f8)
struct AMinimapObjectActor : AActor {
	struct U*8fb9a22a45* MinimapObjectComponent; // 0x3f8(0x08)
};

// Class Engine.AbstractNavData
// Size: 0x5a0 (Inherited: 0x5a0)
struct AAbstractNavData : ANavigationData {
	struct UPrimitiveComponent* RenderingComp; // 0x3f8(0x08)
	struct F*b471f00637 *b471f00637; // 0x400(0x50)
	char *df1535e956 : 1; // 0x450(0x01)
	char bForceRebuildOnLoad : 1; // 0x450(0x01)
	char bCanBeMainNavData : 1; // 0x450(0x01)
	char bCanSpawnOnRebuild : 1; // 0x450(0x01)
	char bRebuildAtRuntime : 1; // 0x450(0x01)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x454(0x01)
	float ObservedPathsTickInterval; // 0x458(0x04)
	char *706aa73b33 : 1; // 0x45c(0x01)
	uint32 DataVersion; // 0x460(0x04)
	struct TArray<struct F*4474e4d98f> *2b8f015cb0; // 0x538(0x10)
};

// Class Engine.NavigationGraph
// Size: 0x5a0 (Inherited: 0x5a0)
struct ANavigationGraph : ANavigationData {
	struct UPrimitiveComponent* RenderingComp; // 0x3f8(0x08)
	struct F*b471f00637 *b471f00637; // 0x400(0x50)
	char *df1535e956 : 1; // 0x450(0x01)
	char bForceRebuildOnLoad : 1; // 0x450(0x01)
	char bCanBeMainNavData : 1; // 0x450(0x01)
	char bCanSpawnOnRebuild : 1; // 0x450(0x01)
	char bRebuildAtRuntime : 1; // 0x450(0x01)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x454(0x01)
	float ObservedPathsTickInterval; // 0x458(0x04)
	char *706aa73b33 : 1; // 0x45c(0x01)
	uint32 DataVersion; // 0x460(0x04)
	struct TArray<struct F*4474e4d98f> *2b8f015cb0; // 0x538(0x10)
};

// Class Engine.NavigationGraphNode
// Size: 0x3f8 (Inherited: 0x3f8)
struct ANavigationGraphNode : AActor {
	struct FMulticastDelegate OnActorEndOverlap; // 0x28(0x10)
	struct FMulticastDelegate OnClicked; // 0x48(0x10)
	int32 *2bc7f7749a; // 0x58(0x04)
	char pad_41C_0 : 3; // 0x41c(0x01)
	char *6a29209afc : 1; // 0x5c(0x01)
	char *6583edce58 : 1; // 0x5d(0x01)
	char bReplicates : 1; // 0x5d(0x01)
	struct FName *332fd811ca; // 0x60(0x08)
	enum class ENetRole RemoteRole; // 0x68(0x01)
	struct AActor* Owner; // 0x70(0x08)
	struct FRepMovement ReplicatedMovement; // 0x78(0x34)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xb0(0x40)
	float InitialLifeSpan; // 0xf4(0x04)
	struct FMulticastDelegate OnInputTouchLeave; // 0xf8(0x10)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x110(0x10)
	struct FGuid DestructibleId; // 0x120(0x10)
	bool bIsDestroyedVersion; // 0x130(0x01)
	bool RemoveFromLevelLOD; // 0x131(0x01)
	struct F*2066290a18 PrimaryActorTick; // 0x138(0x58)
	char bAutoDestroyWhenFinished : 1; // 0x190(0x01)
	char bCanBeDamaged : 1; // 0x190(0x01)
	char *50cd51ed38 : 1; // 0x190(0x01)
	char *e002b42072 : 1; // 0x190(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x190(0x01)
	char *a4c704a3e5 : 1; // 0x190(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x190(0x01)
	char *13aea9b43a : 1; // 0x190(0x01)
	char *4211b886bf : 1; // 0x191(0x01)
	struct AActor* ParentComponentActor; // 0x194(0x08)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1a0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x1b8(0x10)
	float *ae3e81fc86; // 0x1c8(0x04)
	char *97cac516e7 : 1; // 0x1d8(0x01)
	char *cd27b8552b : 1; // 0x1d8(0x01)
	char *8aabd64ff4 : 1; // 0x1d8(0x01)
	char *3cd32b903e : 1; // 0x1d8(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1d9(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1da(0x01)
	float CustomTimeDilation; // 0x1dc(0x04)
	enum class ENetRole Role; // 0x1e1(0x01)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1e8(0x10)
	struct FMulticastDelegate OnTakePointDamage; // 0x200(0x10)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x260(0x10)
	struct TArray<struct AActor*> Children; // 0x270(0x10)
	int32 *2d89f8ef7f; // 0x280(0x04)
	struct FMulticastDelegate OnInputTouchEnter; // 0x288(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x298(0x01)
	struct FMulticastDelegate OnInputTouchBegin; // 0x2a0(0x10)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x2b0(0x10)
	struct USceneComponent* RootComponent; // 0x2c0(0x08)
	enum class *66c1dada81 InputConsumeOption; // 0x2c8(0x01)
	struct FMulticastDelegate OnReleased; // 0x2d0(0x10)
	struct FMulticastDelegate OnActorHit; // 0x2e0(0x10)
	enum class EAutoReceiveInput *8606d93d96; // 0x2f0(0x01)
	struct TArray<struct FName> Layers; // 0x2f8(0x10)
	struct TArray<struct FName> Tags; // 0x308(0x10)
	struct U*63b14265fa* *63b14265fa; // 0x318(0x08)
	float NetUpdateFrequency; // 0x320(0x04)
	uint64 *f99b84bc94; // 0x328(0x08)
	struct UChildActorComponent* *129513d23d; // 0x330(0x08)
	float MinNetUpdateFrequency; // 0x388(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x390(0x10)
	float NetCullDistanceSquared; // 0x3a0(0x04)
	float NetPriority; // 0x3a4(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x3a8(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x3b8(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3c8(0x10)
	struct APawn* Instigator; // 0x3e0(0x08)
	char bHidden : 1; // 0x3e8(0x01)
	char *0854a90e26 : 1; // 0x3e8(0x01)
	char *013332e5c6 : 1; // 0x3e8(0x01)
	char bOnlyRelevantToOwner : 1; // 0x3e8(0x01)
	char bAlwaysRelevant : 1; // 0x3e8(0x01)
	char *9ddfc785f1 : 1; // 0x3e8(0x01)
	char *05594c4443 : 1; // 0x3e8(0x01)
	char *ef19f6b6c9 : 1; // 0x3e8(0x01)
	char *dca9d9a72a : 1; // 0x3e9(0x01)
	char *16d69885c9 : 1; // 0x3e9(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x3e9(0x01)
	char *59968c9633 : 1; // 0x3e9(0x01)
	char *02848ec998 : 1; // 0x3e9(0x01)

	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // None // @ game+0x6365248
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // None // @ game+0x637c668
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // None // @ game+0x636a7dc
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // None // @ game+0x637cc50
	void *82b3653b7b(struct AActor* OtherActor); // Function Engine.Actor.*82b3653b7b // None // @ game+0x636b3e8
	struct AController* ReceiveAnyDamage(float Damage); // Function Engine.Actor.ReceiveAnyDamage // None // @ game+0x26a108
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // None // @ game+0x26a108
	struct FName ActorHasTag(); // Function Engine.Actor.ActorHasTag // None // @ game+0x635bf94
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // None // @ game+0x6365214
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // None // @ game+0x26a108
	enum class EAttachLocation K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // None // @ game+0x636e438
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldOffset // None // @ game+0x636cd8c
	enum class EAttachLocation K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // None // @ game+0x636e2b8
	void HasAuthority(); // Function Engine.Actor.HasAuthority // None // @ game+0x9e1498
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // None // @ game+0x636a060
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // None // @ game+0x6369fa8
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // None // @ game+0x6376d90
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // None // @ game+0x6365898
	void *f77af040ad(); // Function Engine.Actor.*f77af040ad // None // @ game+0x6365634
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // None // @ game+0xbe9a6c
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // None // @ game+0x636ed78
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // None // @ game+0x63650f0
	struct FName *43eab6a44c(); // Function Engine.Actor.*43eab6a44c // None // @ game+0x6368648
	enum class EAttachmentRule *ca2fce53c9(struct AActor* ParentActor, struct FName SocketName); // Function Engine.Actor.*ca2fce53c9 // None // @ game+0x636e738
	void K2_AddActorWorldTransform(struct FTransform DeltaTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldTransform // None // @ game+0x636d13c
	bool K2_SetActorLocation(struct FVector NewLocation); // Function Engine.Actor.K2_SetActorLocation // None // @ game+0x636fe08
	struct FKey *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // None // @ game+0x6368554
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // None // @ game+0x6376e28
	struct UObject* AddComponent(struct FName TemplateName); // Function Engine.Actor.AddComponent // None // @ game+0xa5d3a0
	struct FHitResult K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // None // @ game+0x636cf64
	void GetTransform(); // Function Engine.Actor.GetTransform // None // @ game+0xaacdcc
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // None // @ game+0x636ed90
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // None // @ game+0xb99a34
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // None // @ game+0x6364520
	void GetActorBounds(struct FVector Origin); // Function Engine.Actor.GetActorBounds // None // @ game+0x6364cbc
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // None // @ game+0x6367f78
	float MakeNoise(); // Function Engine.Actor.MakeNoise // None // @ game+0x63720f4
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // None // @ game+0x6365288
	void *a487955527(); // Function Engine.Actor.*a487955527 // None // @ game+0x636f250
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // None // @ game+0x6367524
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // None // @ game+0x26a108
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // None // @ game+0x26a108
	void *76b33f89d4(); // Function Engine.Actor.*76b33f89d4 // None // @ game+0x636ac9c
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // None // @ game+0x26a108
	void DisableInput(); // Function Engine.Actor.DisableInput // None // @ game+0x6362a78
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // None // @ game+0x636ba48
	enum class *42e1cdcd79 *694ac52e11(enum class *42e1cdcd79 LocationRule); // Function Engine.Actor.*694ac52e11 // None // @ game+0x636eee0
	struct UClass* *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // None // @ game+0x63669ec
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // None // @ game+0xb40e14
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // None // @ game+0x637c5d0
	void *7952614099(); // Function Engine.Actor.*7952614099 // None // @ game+0x6365260
	struct FHitResult K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // None // @ game+0x636c988
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // None // @ game+0xb6a404
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // None // @ game+0x26a108
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // None // @ game+0x6364aa8
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // None // @ game+0x6369bb8
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // None // @ game+0x6377260
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // None // @ game+0x6364f98
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // None // @ game+0x26a108
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // None // @ game+0x636f734
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // None // @ game+0x8b5060
	void *8ab522db39(); // Function Engine.Actor.*8ab522db39 // None // @ game+0x63672dc
	void *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // None // @ game+0x6366bd4
	struct FHitResult K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // None // @ game+0x63705d4
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // None // @ game+0x26a108
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // None // @ game+0x6373e3c
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // None // @ game+0x635dd54
	struct FHitResult ReceiveRadialDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceiveRadialDamage // None // @ game+0x26a108
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // None // @ game+0x6364abc
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // None // @ game+0x6368e6c
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // None // @ game+0x26a108
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // None // @ game+0x636af68
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // None // @ game+0x63771cc
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // None // @ game+0x26a108
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // None // @ game+0x26a108
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // None // @ game+0x6369e18
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // None // @ game+0x636c7b0
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // None // @ game+0x636a03c
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // None // @ game+0x6370224
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // None // @ game+0xb44448
	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // None // @ game+0x636ba64
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // None // @ game+0x70f418
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // None // @ game+0x26a108
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // None // @ game+0x635dc2c
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // None // @ game+0x636bafc
	void *679babdbe9(struct FVector DestLocation); // Function Engine.Actor.*679babdbe9 // None // @ game+0x6371a40
	float *77574d4d00(); // Function Engine.Actor.*77574d4d00 // None // @ game+0x637f170
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // None // @ game+0x26a108
	void *2bbda76e95(struct UClass* ComponentClass); // Function Engine.Actor.*2bbda76e95 // None // @ game+0x6366ae4
	void *8ff8fb0472(struct FKey InputAxisKey); // Function Engine.Actor.*8ff8fb0472 // None // @ game+0x6368c64
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // None // @ game+0x636586c
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // None // @ game+0x636f318
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // None // @ game+0x63650bc
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // None // @ game+0x637cb38
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // None // @ game+0x636ffec
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // None // @ game+0x637712c
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // None // @ game+0x637708c
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // None // @ game+0x637ea90
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // None // @ game+0x26a108
	struct FVector *4e14239fe2(); // Function Engine.Actor.*4e14239fe2 // None // @ game+0x6364e8c
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // None // @ game+0x6368f34
	void *6f6713dfba(struct AActor* OtherActor); // Function Engine.Actor.*6f6713dfba // None // @ game+0x6368018
	struct FHitResult K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // None // @ game+0x63703fc
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // None // @ game+0x6365848
	void K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // None // @ game+0x605cd0
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // None // @ game+0x6373d14
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // None // @ game+0x6364e64
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // None // @ game+0x26a108
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // None // @ game+0x26a108
	void *58360a298b(struct AActor* Other); // Function Engine.Actor.*58360a298b // None // @ game+0x636c21c
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // None // @ game+0x63629e4
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // None // @ game+0x636b3b0
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // None // @ game+0x26a108
	bool K2_SetActorTransform(bool bSweep); // Function Engine.Actor.K2_SetActorTransform // None // @ game+0x6370800
	void SetOwner(); // Function Engine.Actor.SetOwner // None // @ game+0x637b964
	void *094169766b(); // Function Engine.Actor.*094169766b // None // @ game+0x6368e84
	void *2a43ddf3b4(struct AActor* OtherActor); // Function Engine.Actor.*2a43ddf3b4 // None // @ game+0x636737c
	enum class EAttachmentRule *e13072354b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*e13072354b // None // @ game+0x63d310
	void *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // None // @ game+0x637dda0
	struct FVector ReceivePointDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceivePointDamage // None // @ game+0x26a108
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // None // @ game+0x26a108
	struct FHitResult K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // None // @ game+0x636cb60
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector NormalImpulse); // Function Engine.Actor.ReceiveHit // None // @ game+0x26a108
	struct UMaterialInterface* *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // None // @ game+0x6372078
};

// Class Engine.PlayerStartPIE
// Size: 0x428 (Inherited: 0x428)
struct APlayerStartPIE : APlayerStart {
	struct FName PlayerStartTag; // 0x420(0x08)
};

// Class Engine.*015d0a26e0
// Size: 0x28 (Inherited: 0x28)
struct U*015d0a26e0 : UInterface {
};

// Class Engine.NavigationTestingActor
// Size: 0x500 (Inherited: 0x3f8)
struct ANavigationTestingActor : AActor {
	char pad_3F8[0x10]; // 0x3f8(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x408(0x08)
	struct U*12d62400b6* InvokerComponent; // 0x410(0x08)
	char bActAsNavigationInvoker : 1; // 0x418(0x01)
	char pad_418_1 : 7; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct F*112b6d08d9 *e8b9ac779a; // 0x420(0x20)
	struct FVector *429f6f1422; // 0x440(0x0c)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct ANavigationData* *e412750adf; // 0x450(0x08)
	struct FVector ProjectedLocation; // 0x458(0x0c)
	char bProjectedLocationValid : 1; // 0x464(0x01)
	char *9e99278733 : 1; // 0x464(0x01)
	char *4de10e3942 : 1; // 0x464(0x01)
	char *e6a488844c : 1; // 0x464(0x01)
	char *98d4a95d21 : 1; // 0x464(0x01)
	char *a7fc9c764a : 1; // 0x464(0x01)
	char *fbb629a10e : 1; // 0x464(0x01)
	char *123b53e566 : 1; // 0x464(0x01)
	char *8427b0c737 : 1; // 0x465(0x01)
	char pad_465_1 : 7; // 0x465(0x01)
	char pad_466[0x2]; // 0x466(0x02)
	enum class *37e79f34c9 *ba55c3b4dd; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	struct FVector2D *88e5e50062; // 0x46c(0x08)
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
	struct UClass* *a2da6fc5f4; // 0x490(0x08)
	int32 *4498c148db; // 0x498(0x04)
	float *3f832759c3; // 0x49c(0x04)
	char pad_4A0[0x60]; // 0x4a0(0x60)
};

// Class Engine.*d63c27cc87
// Size: 0x50 (Inherited: 0x28)
struct U*d63c27cc87 : UObject {
	struct TArray<struct FNavigationLink> Links; // 0x28(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class Engine.*e7dfee5ab5
// Size: 0x28 (Inherited: 0x28)
struct U*e7dfee5ab5 : UInterface {
};

// Class Engine.NavLinkProxy
// Size: 0x448 (Inherited: 0x3f8)
struct ANavLinkProxy : AActor {
	char pad_3F8[0x10]; // 0x3f8(0x10)
	struct TArray<struct FNavigationLink> PointLinks; // 0x408(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x418(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x428(0x08)
	bool *f231981172; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct FMulticastDelegate OnSmartLinkReached; // 0x438(0x10)

	void *4d93b30a1c(); // Function Engine.NavLinkProxy.*4d93b30a1c // None // @ game+0x6374304
	void *de034659c2(); // Function Engine.NavLinkProxy.*de034659c2 // None // @ game+0x637c7bc
	struct AActor* ReceiveSmartLinkReached(); // Function Engine.NavLinkProxy.ReceiveSmartLinkReached // None // @ game+0x26a108
	void *7771ab0955(); // Function Engine.NavLinkProxy.*7771ab0955 // None // @ game+0x636c64c
	void *3a1f0e1247(); // Function Engine.NavLinkProxy.*3a1f0e1247 // None // @ game+0x636b66c
};

// Class Engine.Note
// Size: 0x3f8 (Inherited: 0x3f8)
struct ANote : AActor {
	struct FMulticastDelegate OnActorEndOverlap; // 0x28(0x10)
	struct FMulticastDelegate OnClicked; // 0x48(0x10)
	int32 *2bc7f7749a; // 0x58(0x04)
	char pad_41C_0 : 3; // 0x41c(0x01)
	char *6a29209afc : 1; // 0x5c(0x01)
	char *6583edce58 : 1; // 0x5d(0x01)
	char bReplicates : 1; // 0x5d(0x01)
	struct FName *332fd811ca; // 0x60(0x08)
	enum class ENetRole RemoteRole; // 0x68(0x01)
	struct AActor* Owner; // 0x70(0x08)
	struct FRepMovement ReplicatedMovement; // 0x78(0x34)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xb0(0x40)
	float InitialLifeSpan; // 0xf4(0x04)
	struct FMulticastDelegate OnInputTouchLeave; // 0xf8(0x10)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x110(0x10)
	struct FGuid DestructibleId; // 0x120(0x10)
	bool bIsDestroyedVersion; // 0x130(0x01)
	bool RemoveFromLevelLOD; // 0x131(0x01)
	struct F*2066290a18 PrimaryActorTick; // 0x138(0x58)
	char bAutoDestroyWhenFinished : 1; // 0x190(0x01)
	char bCanBeDamaged : 1; // 0x190(0x01)
	char *50cd51ed38 : 1; // 0x190(0x01)
	char *e002b42072 : 1; // 0x190(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x190(0x01)
	char *a4c704a3e5 : 1; // 0x190(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x190(0x01)
	char *13aea9b43a : 1; // 0x190(0x01)
	char *4211b886bf : 1; // 0x191(0x01)
	struct AActor* ParentComponentActor; // 0x194(0x08)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1a0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x1b8(0x10)
	float *ae3e81fc86; // 0x1c8(0x04)
	char *97cac516e7 : 1; // 0x1d8(0x01)
	char *cd27b8552b : 1; // 0x1d8(0x01)
	char *8aabd64ff4 : 1; // 0x1d8(0x01)
	char *3cd32b903e : 1; // 0x1d8(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1d9(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1da(0x01)
	float CustomTimeDilation; // 0x1dc(0x04)
	enum class ENetRole Role; // 0x1e1(0x01)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1e8(0x10)
	struct FMulticastDelegate OnTakePointDamage; // 0x200(0x10)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x260(0x10)
	struct TArray<struct AActor*> Children; // 0x270(0x10)
	int32 *2d89f8ef7f; // 0x280(0x04)
	struct FMulticastDelegate OnInputTouchEnter; // 0x288(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x298(0x01)
	struct FMulticastDelegate OnInputTouchBegin; // 0x2a0(0x10)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x2b0(0x10)
	struct USceneComponent* RootComponent; // 0x2c0(0x08)
	enum class *66c1dada81 InputConsumeOption; // 0x2c8(0x01)
	struct FMulticastDelegate OnReleased; // 0x2d0(0x10)
	struct FMulticastDelegate OnActorHit; // 0x2e0(0x10)
	enum class EAutoReceiveInput *8606d93d96; // 0x2f0(0x01)
	struct TArray<struct FName> Layers; // 0x2f8(0x10)
	struct TArray<struct FName> Tags; // 0x308(0x10)
	struct U*63b14265fa* *63b14265fa; // 0x318(0x08)
	float NetUpdateFrequency; // 0x320(0x04)
	uint64 *f99b84bc94; // 0x328(0x08)
	struct UChildActorComponent* *129513d23d; // 0x330(0x08)
	float MinNetUpdateFrequency; // 0x388(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x390(0x10)
	float NetCullDistanceSquared; // 0x3a0(0x04)
	float NetPriority; // 0x3a4(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x3a8(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x3b8(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3c8(0x10)
	struct APawn* Instigator; // 0x3e0(0x08)
	char bHidden : 1; // 0x3e8(0x01)
	char *0854a90e26 : 1; // 0x3e8(0x01)
	char *013332e5c6 : 1; // 0x3e8(0x01)
	char bOnlyRelevantToOwner : 1; // 0x3e8(0x01)
	char bAlwaysRelevant : 1; // 0x3e8(0x01)
	char *9ddfc785f1 : 1; // 0x3e8(0x01)
	char *05594c4443 : 1; // 0x3e8(0x01)
	char *ef19f6b6c9 : 1; // 0x3e8(0x01)
	char *dca9d9a72a : 1; // 0x3e9(0x01)
	char *16d69885c9 : 1; // 0x3e9(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x3e9(0x01)
	char *59968c9633 : 1; // 0x3e9(0x01)
	char *02848ec998 : 1; // 0x3e9(0x01)

	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // None // @ game+0x6365248
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // None // @ game+0x637c668
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // None // @ game+0x636a7dc
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // None // @ game+0x637cc50
	void *82b3653b7b(struct AActor* OtherActor); // Function Engine.Actor.*82b3653b7b // None // @ game+0x636b3e8
	struct AController* ReceiveAnyDamage(float Damage); // Function Engine.Actor.ReceiveAnyDamage // None // @ game+0x26a108
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // None // @ game+0x26a108
	struct FName ActorHasTag(); // Function Engine.Actor.ActorHasTag // None // @ game+0x635bf94
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // None // @ game+0x6365214
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // None // @ game+0x26a108
	enum class EAttachLocation K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // None // @ game+0x636e438
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldOffset // None // @ game+0x636cd8c
	enum class EAttachLocation K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // None // @ game+0x636e2b8
	void HasAuthority(); // Function Engine.Actor.HasAuthority // None // @ game+0x9e1498
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // None // @ game+0x636a060
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // None // @ game+0x6369fa8
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // None // @ game+0x6376d90
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // None // @ game+0x6365898
	void *f77af040ad(); // Function Engine.Actor.*f77af040ad // None // @ game+0x6365634
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // None // @ game+0xbe9a6c
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // None // @ game+0x636ed78
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // None // @ game+0x63650f0
	struct FName *43eab6a44c(); // Function Engine.Actor.*43eab6a44c // None // @ game+0x6368648
	enum class EAttachmentRule *ca2fce53c9(struct AActor* ParentActor, struct FName SocketName); // Function Engine.Actor.*ca2fce53c9 // None // @ game+0x636e738
	void K2_AddActorWorldTransform(struct FTransform DeltaTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldTransform // None // @ game+0x636d13c
	bool K2_SetActorLocation(struct FVector NewLocation); // Function Engine.Actor.K2_SetActorLocation // None // @ game+0x636fe08
	struct FKey *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // None // @ game+0x6368554
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // None // @ game+0x6376e28
	struct UObject* AddComponent(struct FName TemplateName); // Function Engine.Actor.AddComponent // None // @ game+0xa5d3a0
	struct FHitResult K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // None // @ game+0x636cf64
	void GetTransform(); // Function Engine.Actor.GetTransform // None // @ game+0xaacdcc
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // None // @ game+0x636ed90
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // None // @ game+0xb99a34
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // None // @ game+0x6364520
	void GetActorBounds(struct FVector Origin); // Function Engine.Actor.GetActorBounds // None // @ game+0x6364cbc
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // None // @ game+0x6367f78
	float MakeNoise(); // Function Engine.Actor.MakeNoise // None // @ game+0x63720f4
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // None // @ game+0x6365288
	void *a487955527(); // Function Engine.Actor.*a487955527 // None // @ game+0x636f250
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // None // @ game+0x6367524
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // None // @ game+0x26a108
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // None // @ game+0x26a108
	void *76b33f89d4(); // Function Engine.Actor.*76b33f89d4 // None // @ game+0x636ac9c
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // None // @ game+0x26a108
	void DisableInput(); // Function Engine.Actor.DisableInput // None // @ game+0x6362a78
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // None // @ game+0x636ba48
	enum class *42e1cdcd79 *694ac52e11(enum class *42e1cdcd79 LocationRule); // Function Engine.Actor.*694ac52e11 // None // @ game+0x636eee0
	struct UClass* *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // None // @ game+0x63669ec
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // None // @ game+0xb40e14
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // None // @ game+0x637c5d0
	void *7952614099(); // Function Engine.Actor.*7952614099 // None // @ game+0x6365260
	struct FHitResult K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // None // @ game+0x636c988
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // None // @ game+0xb6a404
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // None // @ game+0x26a108
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // None // @ game+0x6364aa8
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // None // @ game+0x6369bb8
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // None // @ game+0x6377260
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // None // @ game+0x6364f98
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // None // @ game+0x26a108
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // None // @ game+0x636f734
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // None // @ game+0x8b5060
	void *8ab522db39(); // Function Engine.Actor.*8ab522db39 // None // @ game+0x63672dc
	void *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // None // @ game+0x6366bd4
	struct FHitResult K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // None // @ game+0x63705d4
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // None // @ game+0x26a108
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // None // @ game+0x6373e3c
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // None // @ game+0x635dd54
	struct FHitResult ReceiveRadialDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceiveRadialDamage // None // @ game+0x26a108
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // None // @ game+0x6364abc
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // None // @ game+0x6368e6c
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // None // @ game+0x26a108
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // None // @ game+0x636af68
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // None // @ game+0x63771cc
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // None // @ game+0x26a108
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // None // @ game+0x26a108
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // None // @ game+0x6369e18
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // None // @ game+0x636c7b0
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // None // @ game+0x636a03c
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // None // @ game+0x6370224
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // None // @ game+0xb44448
	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // None // @ game+0x636ba64
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // None // @ game+0x70f418
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // None // @ game+0x26a108
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // None // @ game+0x635dc2c
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // None // @ game+0x636bafc
	void *679babdbe9(struct FVector DestLocation); // Function Engine.Actor.*679babdbe9 // None // @ game+0x6371a40
	float *77574d4d00(); // Function Engine.Actor.*77574d4d00 // None // @ game+0x637f170
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // None // @ game+0x26a108
	void *2bbda76e95(struct UClass* ComponentClass); // Function Engine.Actor.*2bbda76e95 // None // @ game+0x6366ae4
	void *8ff8fb0472(struct FKey InputAxisKey); // Function Engine.Actor.*8ff8fb0472 // None // @ game+0x6368c64
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // None // @ game+0x636586c
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // None // @ game+0x636f318
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // None // @ game+0x63650bc
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // None // @ game+0x637cb38
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // None // @ game+0x636ffec
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // None // @ game+0x637712c
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // None // @ game+0x637708c
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // None // @ game+0x637ea90
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // None // @ game+0x26a108
	struct FVector *4e14239fe2(); // Function Engine.Actor.*4e14239fe2 // None // @ game+0x6364e8c
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // None // @ game+0x6368f34
	void *6f6713dfba(struct AActor* OtherActor); // Function Engine.Actor.*6f6713dfba // None // @ game+0x6368018
	struct FHitResult K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // None // @ game+0x63703fc
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // None // @ game+0x6365848
	void K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // None // @ game+0x605cd0
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // None // @ game+0x6373d14
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // None // @ game+0x6364e64
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // None // @ game+0x26a108
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // None // @ game+0x26a108
	void *58360a298b(struct AActor* Other); // Function Engine.Actor.*58360a298b // None // @ game+0x636c21c
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // None // @ game+0x63629e4
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // None // @ game+0x636b3b0
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // None // @ game+0x26a108
	bool K2_SetActorTransform(bool bSweep); // Function Engine.Actor.K2_SetActorTransform // None // @ game+0x6370800
	void SetOwner(); // Function Engine.Actor.SetOwner // None // @ game+0x637b964
	void *094169766b(); // Function Engine.Actor.*094169766b // None // @ game+0x6368e84
	void *2a43ddf3b4(struct AActor* OtherActor); // Function Engine.Actor.*2a43ddf3b4 // None // @ game+0x636737c
	enum class EAttachmentRule *e13072354b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*e13072354b // None // @ game+0x63d310
	void *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // None // @ game+0x637dda0
	struct FVector ReceivePointDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceivePointDamage // None // @ game+0x26a108
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // None // @ game+0x26a108
	struct FHitResult K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // None // @ game+0x636cb60
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector NormalImpulse); // Function Engine.Actor.ReceiveHit // None // @ game+0x26a108
	struct UMaterialInterface* *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // None // @ game+0x6372078
};

// Class Engine.ParticleSystem
// Size: 0x138 (Inherited: 0x28)
struct UParticleSystem : UObject {
	enum class *eb1687f01e *68fcd8e9ea; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float UpdateTime_FPS; // 0x2c(0x04)
	float *32afe5b66e; // 0x30(0x04)
	float WarmupTime; // 0x34(0x04)
	float *05a26e85b5; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct UParticleEmitter*> Emitters; // 0x40(0x10)
	struct UParticleSystemComponent* PreviewComponent; // 0x50(0x08)
	struct UInterpCurveEdSetup* *ff525ff7dd; // 0x58(0x08)
	char *70ce6c4b0d : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float *e1074ba83a; // 0x64(0x04)
	enum class *22978e1300 LODMethod; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<float> *439ee0d4a3; // 0x70(0x10)
	char *8223960c17 : 1; // 0x80(0x01)
	char *27d8d17909 : 1; // 0x80(0x01)
	char pad_80_2 : 6; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct F*ace7ccc201> LODSettings; // 0x88(0x10)
	char *ac07f373ed : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FBox *2d3d0ab58d; // 0x9c(0x1c)
	float *226294f92c; // 0xb8(0x04)
	char *a3996677f4 : 1; // 0xbc(0x01)
	char *ec875597df : 1; // 0xbc(0x01)
	char *eac174e3f1 : 1; // 0xbc(0x01)
	char *e6111571e6 : 1; // 0xbc(0x01)
	char pad_BC_4 : 4; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float Delay; // 0xc0(0x04)
	float *339a372f82; // 0xc4(0x04)
	char *160eb36400 : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	bool *cb8bf7fc91; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	uint32 *cb3d6c55fc; // 0xd0(0x04)
	enum class EParticleSystemInsignificanceReaction *cdecc94606; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	float *00e3a95c95; // 0xd8(0x04)
	enum class EParticleSignificanceLevel *ecb76fc088; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct FVector MacroUVPosition; // 0xe0(0x0c)
	float MacroUVRadius; // 0xec(0x04)
	enum class *3ef3e21fb0 *e0fa25a6be; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FBox *e4645a93e7; // 0xf4(0x1c)
	struct TArray<struct F*87ee2611df> *e7818e194f; // 0x110(0x10)
	struct TArray<struct F*dead56482b> *b11fa76f6b; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)

	void *9d70b5f343(); // Function Engine.ParticleSystem.*9d70b5f343 // None // @ game+0x6361e64
};

// Class Engine.ParticleEventManager
// Size: 0x3f8 (Inherited: 0x3f8)
struct AParticleEventManager : AActor {
	struct FMulticastDelegate OnActorEndOverlap; // 0x28(0x10)
	struct FMulticastDelegate OnClicked; // 0x48(0x10)
	int32 *2bc7f7749a; // 0x58(0x04)
	char pad_41C_0 : 3; // 0x41c(0x01)
	char *6a29209afc : 1; // 0x5c(0x01)
	char *6583edce58 : 1; // 0x5d(0x01)
	char bReplicates : 1; // 0x5d(0x01)
	struct FName *332fd811ca; // 0x60(0x08)
	enum class ENetRole RemoteRole; // 0x68(0x01)
	struct AActor* Owner; // 0x70(0x08)
	struct FRepMovement ReplicatedMovement; // 0x78(0x34)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xb0(0x40)
	float InitialLifeSpan; // 0xf4(0x04)
	struct FMulticastDelegate OnInputTouchLeave; // 0xf8(0x10)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x110(0x10)
	struct FGuid DestructibleId; // 0x120(0x10)
	bool bIsDestroyedVersion; // 0x130(0x01)
	bool RemoveFromLevelLOD; // 0x131(0x01)
	struct F*2066290a18 PrimaryActorTick; // 0x138(0x58)
	char bAutoDestroyWhenFinished : 1; // 0x190(0x01)
	char bCanBeDamaged : 1; // 0x190(0x01)
	char *50cd51ed38 : 1; // 0x190(0x01)
	char *e002b42072 : 1; // 0x190(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x190(0x01)
	char *a4c704a3e5 : 1; // 0x190(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x190(0x01)
	char *13aea9b43a : 1; // 0x190(0x01)
	char *4211b886bf : 1; // 0x191(0x01)
	struct AActor* ParentComponentActor; // 0x194(0x08)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1a0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x1b8(0x10)
	float *ae3e81fc86; // 0x1c8(0x04)
	char *97cac516e7 : 1; // 0x1d8(0x01)
	char *cd27b8552b : 1; // 0x1d8(0x01)
	char *8aabd64ff4 : 1; // 0x1d8(0x01)
	char *3cd32b903e : 1; // 0x1d8(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1d9(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1da(0x01)
	float CustomTimeDilation; // 0x1dc(0x04)
	enum class ENetRole Role; // 0x1e1(0x01)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1e8(0x10)
	struct FMulticastDelegate OnTakePointDamage; // 0x200(0x10)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x260(0x10)
	struct TArray<struct AActor*> Children; // 0x270(0x10)
	int32 *2d89f8ef7f; // 0x280(0x04)
	struct FMulticastDelegate OnInputTouchEnter; // 0x288(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x298(0x01)
	struct FMulticastDelegate OnInputTouchBegin; // 0x2a0(0x10)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x2b0(0x10)
	struct USceneComponent* RootComponent; // 0x2c0(0x08)
	enum class *66c1dada81 InputConsumeOption; // 0x2c8(0x01)
	struct FMulticastDelegate OnReleased; // 0x2d0(0x10)
	struct FMulticastDelegate OnActorHit; // 0x2e0(0x10)
	enum class EAutoReceiveInput *8606d93d96; // 0x2f0(0x01)
	struct TArray<struct FName> Layers; // 0x2f8(0x10)
	struct TArray<struct FName> Tags; // 0x308(0x10)
	struct U*63b14265fa* *63b14265fa; // 0x318(0x08)
	float NetUpdateFrequency; // 0x320(0x04)
	uint64 *f99b84bc94; // 0x328(0x08)
	struct UChildActorComponent* *129513d23d; // 0x330(0x08)
	float MinNetUpdateFrequency; // 0x388(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x390(0x10)
	float NetCullDistanceSquared; // 0x3a0(0x04)
	float NetPriority; // 0x3a4(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x3a8(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x3b8(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3c8(0x10)
	struct APawn* Instigator; // 0x3e0(0x08)
	char bHidden : 1; // 0x3e8(0x01)
	char *0854a90e26 : 1; // 0x3e8(0x01)
	char *013332e5c6 : 1; // 0x3e8(0x01)
	char bOnlyRelevantToOwner : 1; // 0x3e8(0x01)
	char bAlwaysRelevant : 1; // 0x3e8(0x01)
	char *9ddfc785f1 : 1; // 0x3e8(0x01)
	char *05594c4443 : 1; // 0x3e8(0x01)
	char *ef19f6b6c9 : 1; // 0x3e8(0x01)
	char *dca9d9a72a : 1; // 0x3e9(0x01)
	char *16d69885c9 : 1; // 0x3e9(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x3e9(0x01)
	char *59968c9633 : 1; // 0x3e9(0x01)
	char *02848ec998 : 1; // 0x3e9(0x01)

	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // None // @ game+0x6365248
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // None // @ game+0x637c668
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // None // @ game+0x636a7dc
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // None // @ game+0x637cc50
	void *82b3653b7b(struct AActor* OtherActor); // Function Engine.Actor.*82b3653b7b // None // @ game+0x636b3e8
	struct AController* ReceiveAnyDamage(float Damage); // Function Engine.Actor.ReceiveAnyDamage // None // @ game+0x26a108
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // None // @ game+0x26a108
	struct FName ActorHasTag(); // Function Engine.Actor.ActorHasTag // None // @ game+0x635bf94
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // None // @ game+0x6365214
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // None // @ game+0x26a108
	enum class EAttachLocation K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // None // @ game+0x636e438
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldOffset // None // @ game+0x636cd8c
	enum class EAttachLocation K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // None // @ game+0x636e2b8
	void HasAuthority(); // Function Engine.Actor.HasAuthority // None // @ game+0x9e1498
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // None // @ game+0x636a060
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // None // @ game+0x6369fa8
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // None // @ game+0x6376d90
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // None // @ game+0x6365898
	void *f77af040ad(); // Function Engine.Actor.*f77af040ad // None // @ game+0x6365634
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // None // @ game+0xbe9a6c
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // None // @ game+0x636ed78
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // None // @ game+0x63650f0
	struct FName *43eab6a44c(); // Function Engine.Actor.*43eab6a44c // None // @ game+0x6368648
	enum class EAttachmentRule *ca2fce53c9(struct AActor* ParentActor, struct FName SocketName); // Function Engine.Actor.*ca2fce53c9 // None // @ game+0x636e738
	void K2_AddActorWorldTransform(struct FTransform DeltaTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldTransform // None // @ game+0x636d13c
	bool K2_SetActorLocation(struct FVector NewLocation); // Function Engine.Actor.K2_SetActorLocation // None // @ game+0x636fe08
	struct FKey *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // None // @ game+0x6368554
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // None // @ game+0x6376e28
	struct UObject* AddComponent(struct FName TemplateName); // Function Engine.Actor.AddComponent // None // @ game+0xa5d3a0
	struct FHitResult K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // None // @ game+0x636cf64
	void GetTransform(); // Function Engine.Actor.GetTransform // None // @ game+0xaacdcc
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // None // @ game+0x636ed90
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // None // @ game+0xb99a34
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // None // @ game+0x6364520
	void GetActorBounds(struct FVector Origin); // Function Engine.Actor.GetActorBounds // None // @ game+0x6364cbc
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // None // @ game+0x6367f78
	float MakeNoise(); // Function Engine.Actor.MakeNoise // None // @ game+0x63720f4
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // None // @ game+0x6365288
	void *a487955527(); // Function Engine.Actor.*a487955527 // None // @ game+0x636f250
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // None // @ game+0x6367524
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // None // @ game+0x26a108
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // None // @ game+0x26a108
	void *76b33f89d4(); // Function Engine.Actor.*76b33f89d4 // None // @ game+0x636ac9c
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // None // @ game+0x26a108
	void DisableInput(); // Function Engine.Actor.DisableInput // None // @ game+0x6362a78
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // None // @ game+0x636ba48
	enum class *42e1cdcd79 *694ac52e11(enum class *42e1cdcd79 LocationRule); // Function Engine.Actor.*694ac52e11 // None // @ game+0x636eee0
	struct UClass* *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // None // @ game+0x63669ec
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // None // @ game+0xb40e14
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // None // @ game+0x637c5d0
	void *7952614099(); // Function Engine.Actor.*7952614099 // None // @ game+0x6365260
	struct FHitResult K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // None // @ game+0x636c988
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // None // @ game+0xb6a404
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // None // @ game+0x26a108
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // None // @ game+0x6364aa8
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // None // @ game+0x6369bb8
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // None // @ game+0x6377260
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // None // @ game+0x6364f98
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // None // @ game+0x26a108
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // None // @ game+0x636f734
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // None // @ game+0x8b5060
	void *8ab522db39(); // Function Engine.Actor.*8ab522db39 // None // @ game+0x63672dc
	void *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // None // @ game+0x6366bd4
	struct FHitResult K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // None // @ game+0x63705d4
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // None // @ game+0x26a108
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // None // @ game+0x6373e3c
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // None // @ game+0x635dd54
	struct FHitResult ReceiveRadialDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceiveRadialDamage // None // @ game+0x26a108
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // None // @ game+0x6364abc
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // None // @ game+0x6368e6c
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // None // @ game+0x26a108
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // None // @ game+0x636af68
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // None // @ game+0x63771cc
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // None // @ game+0x26a108
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // None // @ game+0x26a108
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // None // @ game+0x6369e18
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // None // @ game+0x636c7b0
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // None // @ game+0x636a03c
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // None // @ game+0x6370224
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // None // @ game+0xb44448
	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // None // @ game+0x636ba64
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // None // @ game+0x70f418
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // None // @ game+0x26a108
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // None // @ game+0x635dc2c
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // None // @ game+0x636bafc
	void *679babdbe9(struct FVector DestLocation); // Function Engine.Actor.*679babdbe9 // None // @ game+0x6371a40
	float *77574d4d00(); // Function Engine.Actor.*77574d4d00 // None // @ game+0x637f170
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // None // @ game+0x26a108
	void *2bbda76e95(struct UClass* ComponentClass); // Function Engine.Actor.*2bbda76e95 // None // @ game+0x6366ae4
	void *8ff8fb0472(struct FKey InputAxisKey); // Function Engine.Actor.*8ff8fb0472 // None // @ game+0x6368c64
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // None // @ game+0x636586c
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // None // @ game+0x636f318
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // None // @ game+0x63650bc
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // None // @ game+0x637cb38
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // None // @ game+0x636ffec
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // None // @ game+0x637712c
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // None // @ game+0x637708c
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // None // @ game+0x637ea90
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // None // @ game+0x26a108
	struct FVector *4e14239fe2(); // Function Engine.Actor.*4e14239fe2 // None // @ game+0x6364e8c
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // None // @ game+0x6368f34
	void *6f6713dfba(struct AActor* OtherActor); // Function Engine.Actor.*6f6713dfba // None // @ game+0x6368018
	struct FHitResult K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // None // @ game+0x63703fc
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // None // @ game+0x6365848
	void K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // None // @ game+0x605cd0
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // None // @ game+0x6373d14
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // None // @ game+0x6364e64
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // None // @ game+0x26a108
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // None // @ game+0x26a108
	void *58360a298b(struct AActor* Other); // Function Engine.Actor.*58360a298b // None // @ game+0x636c21c
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // None // @ game+0x63629e4
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // None // @ game+0x636b3b0
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // None // @ game+0x26a108
	bool K2_SetActorTransform(bool bSweep); // Function Engine.Actor.K2_SetActorTransform // None // @ game+0x6370800
	void SetOwner(); // Function Engine.Actor.SetOwner // None // @ game+0x637b964
	void *094169766b(); // Function Engine.Actor.*094169766b // None // @ game+0x6368e84
	void *2a43ddf3b4(struct AActor* OtherActor); // Function Engine.Actor.*2a43ddf3b4 // None // @ game+0x636737c
	enum class EAttachmentRule *e13072354b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*e13072354b // None // @ game+0x63d310
	void *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // None // @ game+0x637dda0
	struct FVector ReceivePointDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceivePointDamage // None // @ game+0x26a108
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // None // @ game+0x26a108
	struct FHitResult K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // None // @ game+0x636cb60
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector NormalImpulse); // Function Engine.Actor.ReceiveHit // None // @ game+0x26a108
	struct UMaterialInterface* *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // None // @ game+0x6372078
};

// Class Engine.SkeletalMesh
// Size: 0x2e8 (Inherited: 0x28)
struct USkeletalMesh : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	struct USkeleton* Skeleton; // 0x48(0x08)
	struct FBoxSphereBounds *de1d2f9b97; // 0x50(0x1c)
	struct FBoxSphereBounds *a5cca5147a; // 0x6c(0x1c)
	struct FVector PositiveBoundsExtension; // 0x88(0x0c)
	struct FVector NegativeBoundsExtension; // 0x94(0x0c)
	struct TArray<struct F*c98fa22526> Materials; // 0xa0(0x10)
	struct TArray<struct F*e996e4d3f5> *c6c7d39287; // 0xb0(0x10)
	enum class EAxis *a96d44c1c1; // 0xc0(0x01)
	enum class EAxis *4d3eabcc94; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct TArray<struct FSkeletalMeshLODInfo> LODInfo; // 0xc8(0x10)
	char bUseFullPrecisionUVs : 1; // 0xd8(0x01)
	char *7d0a6ca518 : 1; // 0xd8(0x01)
	char *fb78bdbbc5 : 1; // 0xd8(0x01)
	char bEnablePerPolyCollision : 1; // 0xd8(0x01)
	char pad_D8_4 : 4; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UBodySetup* BodySetup; // 0xe0(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0xe8(0x08)
	struct UPhysicsAsset* ShadowPhysicsAsset; // 0xf0(0x08)
	struct TArray<struct U*d7b54547d6*> NodeMappingData; // 0xf8(0x10)
	struct TArray<struct UMorphTarget*> MorphTargets; // 0x108(0x10)
	char pad_118[0x168]; // 0x118(0x168)
	struct TArray<struct FClothingAssetData_Legacy> ClothingAssets; // 0x280(0x10)
	struct UClass* PostProcessAnimBlueprint; // 0x290(0x08)
	struct TArray<struct U*9695c7a28c*> MeshClothingAssets; // 0x298(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x2a8(0x10)
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x2c0(0x10)
	char pad_2D0[0x18]; // 0x2d0(0x18)

	void *6efa11e736(); // Function Engine.SkeletalMesh.*6efa11e736 // None // @ game+0x6364918
	bool *69093f5697(); // Function Engine.SkeletalMesh.*69093f5697 // None // @ game+0x636c460
	void *25ae708602(); // Function Engine.SkeletalMesh.*25ae708602 // None // @ game+0x6369804
	void *26bed055db(); // Function Engine.SkeletalMesh.*26bed055db // None // @ game+0x636a8ac
	void *9e3042eac3(); // Function Engine.SkeletalMesh.*9e3042eac3 // None // @ game+0x63680f0
	void *f36fae672e(); // Function Engine.SkeletalMesh.*f36fae672e // None // @ game+0x63663b4
	void *b4c1251f88(); // Function Engine.SkeletalMesh.*b4c1251f88 // None // @ game+0x63724a8
	void *fe20524fd1(struct FName InSocketName); // Function Engine.SkeletalMesh.*fe20524fd1 // None // @ game+0x63649b0
};

// Class Engine.AnimationAsset
// Size: 0x78 (Inherited: 0x28)
struct UAnimationAsset : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct USkeleton* Skeleton; // 0x30(0x08)
	char pad_38[0x20]; // 0x38(0x20)
	struct TArray<struct U*460f026d00*> MetaData; // 0x58(0x10)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x68(0x10)
};

// Class Engine.ReflectionCapture
// Size: 0x400 (Inherited: 0x3f8)
struct AReflectionCapture : AActor {
	struct UReflectionCaptureComponent* CaptureComponent; // 0x3f8(0x08)
};

// Class Engine.BoxReflectionCapture
// Size: 0x400 (Inherited: 0x400)
struct ABoxReflectionCapture : AReflectionCapture {
	struct UReflectionCaptureComponent* CaptureComponent; // 0x3f8(0x08)
};

// Class Engine.PlaneReflectionCapture
// Size: 0x400 (Inherited: 0x400)
struct APlaneReflectionCapture : AReflectionCapture {
	struct UReflectionCaptureComponent* CaptureComponent; // 0x3f8(0x08)
};

// Class Engine.SphereReflectionCapture
// Size: 0x408 (Inherited: 0x400)
struct ASphereReflectionCapture : AReflectionCapture {
	struct U*9dff3f6d02* *cadc00535e; // 0x400(0x08)
};

// Class Engine.RigidBodyBase
// Size: 0x3f8 (Inherited: 0x3f8)
struct ARigidBodyBase : AActor {
	struct FMulticastDelegate OnActorEndOverlap; // 0x28(0x10)
	struct FMulticastDelegate OnClicked; // 0x48(0x10)
	int32 *2bc7f7749a; // 0x58(0x04)
	char pad_41C_0 : 3; // 0x41c(0x01)
	char *6a29209afc : 1; // 0x5c(0x01)
	char *6583edce58 : 1; // 0x5d(0x01)
	char bReplicates : 1; // 0x5d(0x01)
	struct FName *332fd811ca; // 0x60(0x08)
	enum class ENetRole RemoteRole; // 0x68(0x01)
	struct AActor* Owner; // 0x70(0x08)
	struct FRepMovement ReplicatedMovement; // 0x78(0x34)
	struct F*e5bda3d960 *e3fb0d68ff; // 0xb0(0x40)
	float InitialLifeSpan; // 0xf4(0x04)
	struct FMulticastDelegate OnInputTouchLeave; // 0xf8(0x10)
	struct FMulticastDelegate OnTakeAnyDamage; // 0x110(0x10)
	struct FGuid DestructibleId; // 0x120(0x10)
	bool bIsDestroyedVersion; // 0x130(0x01)
	bool RemoveFromLevelLOD; // 0x131(0x01)
	struct F*2066290a18 PrimaryActorTick; // 0x138(0x58)
	char bAutoDestroyWhenFinished : 1; // 0x190(0x01)
	char bCanBeDamaged : 1; // 0x190(0x01)
	char *50cd51ed38 : 1; // 0x190(0x01)
	char *e002b42072 : 1; // 0x190(0x01)
	char bFindCameraComponentWhenViewTarget : 1; // 0x190(0x01)
	char *a4c704a3e5 : 1; // 0x190(0x01)
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x190(0x01)
	char *13aea9b43a : 1; // 0x190(0x01)
	char *4211b886bf : 1; // 0x191(0x01)
	struct AActor* ParentComponentActor; // 0x194(0x08)
	struct TArray<struct UActorComponent*> InstanceComponents; // 0x1a0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x1b8(0x10)
	float *ae3e81fc86; // 0x1c8(0x04)
	char *97cac516e7 : 1; // 0x1d8(0x01)
	char *cd27b8552b : 1; // 0x1d8(0x01)
	char *8aabd64ff4 : 1; // 0x1d8(0x01)
	char *3cd32b903e : 1; // 0x1d8(0x01)
	enum class EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x1d9(0x01)
	enum class EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x1da(0x01)
	float CustomTimeDilation; // 0x1dc(0x04)
	enum class ENetRole Role; // 0x1e1(0x01)
	struct FMulticastDelegate OnActorBeginOverlap; // 0x1e8(0x10)
	struct FMulticastDelegate OnTakePointDamage; // 0x200(0x10)
	struct TArray<struct UActorComponent*> BlueprintCreatedComponents; // 0x260(0x10)
	struct TArray<struct AActor*> Children; // 0x270(0x10)
	int32 *2d89f8ef7f; // 0x280(0x04)
	struct FMulticastDelegate OnInputTouchEnter; // 0x288(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x298(0x01)
	struct FMulticastDelegate OnInputTouchBegin; // 0x2a0(0x10)
	struct TArray<struct AMatineeActor*> *6220728ad0; // 0x2b0(0x10)
	struct USceneComponent* RootComponent; // 0x2c0(0x08)
	enum class *66c1dada81 InputConsumeOption; // 0x2c8(0x01)
	struct FMulticastDelegate OnReleased; // 0x2d0(0x10)
	struct FMulticastDelegate OnActorHit; // 0x2e0(0x10)
	enum class EAutoReceiveInput *8606d93d96; // 0x2f0(0x01)
	struct TArray<struct FName> Layers; // 0x2f8(0x10)
	struct TArray<struct FName> Tags; // 0x308(0x10)
	struct U*63b14265fa* *63b14265fa; // 0x318(0x08)
	float NetUpdateFrequency; // 0x320(0x04)
	uint64 *f99b84bc94; // 0x328(0x08)
	struct UChildActorComponent* *129513d23d; // 0x330(0x08)
	float MinNetUpdateFrequency; // 0x388(0x04)
	struct FMulticastDelegate OnInputTouchEnd; // 0x390(0x10)
	float NetCullDistanceSquared; // 0x3a0(0x04)
	float NetPriority; // 0x3a4(0x04)
	struct FMulticastDelegate OnBeginCursorOver; // 0x3a8(0x10)
	struct FMulticastDelegate OnDestroyed; // 0x3b8(0x10)
	struct FMulticastDelegate OnEndPlay; // 0x3c8(0x10)
	struct APawn* Instigator; // 0x3e0(0x08)
	char bHidden : 1; // 0x3e8(0x01)
	char *0854a90e26 : 1; // 0x3e8(0x01)
	char *013332e5c6 : 1; // 0x3e8(0x01)
	char bOnlyRelevantToOwner : 1; // 0x3e8(0x01)
	char bAlwaysRelevant : 1; // 0x3e8(0x01)
	char *9ddfc785f1 : 1; // 0x3e8(0x01)
	char *05594c4443 : 1; // 0x3e8(0x01)
	char *ef19f6b6c9 : 1; // 0x3e8(0x01)
	char *dca9d9a72a : 1; // 0x3e9(0x01)
	char *16d69885c9 : 1; // 0x3e9(0x01)
	char bNetUseOwnerRelevancy : 1; // 0x3e9(0x01)
	char *59968c9633 : 1; // 0x3e9(0x01)
	char *02848ec998 : 1; // 0x3e9(0x01)

	void *ccaa7ce1d0(); // Function Engine.Actor.*ccaa7ce1d0 // None // @ game+0x6365248
	void *2f371b4576(); // Function Engine.Actor.*2f371b4576 // None // @ game+0x637c668
	void *3a00f3bb48(); // Function Engine.Actor.*3a00f3bb48 // None // @ game+0x636a7dc
	void *eda0f1fdef(); // Function Engine.Actor.*eda0f1fdef // None // @ game+0x637cc50
	void *82b3653b7b(struct AActor* OtherActor); // Function Engine.Actor.*82b3653b7b // None // @ game+0x636b3e8
	struct AController* ReceiveAnyDamage(float Damage); // Function Engine.Actor.ReceiveAnyDamage // None // @ game+0x26a108
	void UserConstructionScript(); // Function Engine.Actor.UserConstructionScript // None // @ game+0x26a108
	struct FName ActorHasTag(); // Function Engine.Actor.ActorHasTag // None // @ game+0x635bf94
	void *28809cb5e5(); // Function Engine.Actor.*28809cb5e5 // None // @ game+0x6365214
	void ReceiveDestroyed(); // Function Engine.Actor.ReceiveDestroyed // None // @ game+0x26a108
	enum class EAttachLocation K2_AttachRootComponentToActor(); // Function Engine.Actor.K2_AttachRootComponentToActor // None // @ game+0x636e438
	void K2_AddActorWorldOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldOffset // None // @ game+0x636cd8c
	enum class EAttachLocation K2_AttachRootComponentTo(); // Function Engine.Actor.K2_AttachRootComponentTo // None // @ game+0x636e2b8
	void HasAuthority(); // Function Engine.Actor.HasAuthority // None // @ game+0x9e1498
	void *4aadbb23a5(); // Function Engine.Actor.*4aadbb23a5 // None // @ game+0x636a060
	void *7664b363a1(); // Function Engine.Actor.*7664b363a1 // None // @ game+0x6369fa8
	void *fd605f1fa8(); // Function Engine.Actor.*fd605f1fa8 // None // @ game+0x6376d90
	void *2f98c34a3e(); // Function Engine.Actor.*2f98c34a3e // None // @ game+0x6365898
	void *f77af040ad(); // Function Engine.Actor.*f77af040ad // None // @ game+0x6365634
	void *c1c64c0f03(); // Function Engine.Actor.*c1c64c0f03 // None // @ game+0xbe9a6c
	void K2_DestroyActor(); // Function Engine.Actor.K2_DestroyActor // None // @ game+0x636ed78
	void *b0466cb89a(); // Function Engine.Actor.*b0466cb89a // None // @ game+0x63650f0
	struct FName *43eab6a44c(); // Function Engine.Actor.*43eab6a44c // None // @ game+0x6368648
	enum class EAttachmentRule *ca2fce53c9(struct AActor* ParentActor, struct FName SocketName); // Function Engine.Actor.*ca2fce53c9 // None // @ game+0x636e738
	void K2_AddActorWorldTransform(struct FTransform DeltaTransform, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorWorldTransform // None // @ game+0x636d13c
	bool K2_SetActorLocation(struct FVector NewLocation); // Function Engine.Actor.K2_SetActorLocation // None // @ game+0x636fe08
	struct FKey *a84ae826d7(); // Function Engine.Actor.*a84ae826d7 // None // @ game+0x6368554
	void SetActorHiddenInGame(); // Function Engine.Actor.SetActorHiddenInGame // None // @ game+0x6376e28
	struct UObject* AddComponent(struct FName TemplateName); // Function Engine.Actor.AddComponent // None // @ game+0xa5d3a0
	struct FHitResult K2_AddActorWorldRotation(); // Function Engine.Actor.K2_AddActorWorldRotation // None // @ game+0x636cf64
	void GetTransform(); // Function Engine.Actor.GetTransform // None // @ game+0xaacdcc
	void *298b7db98d(); // Function Engine.Actor.*298b7db98d // None // @ game+0x636ed90
	void OnRep_Role(); // Function Engine.Actor.OnRep_Role // None // @ game+0xb99a34
	void *927c0af560(); // Function Engine.Actor.*927c0af560 // None // @ game+0x6364520
	void GetActorBounds(struct FVector Origin); // Function Engine.Actor.GetActorBounds // None // @ game+0x6364cbc
	void *3fb2f52d1d(); // Function Engine.Actor.*3fb2f52d1d // None // @ game+0x6367f78
	float MakeNoise(); // Function Engine.Actor.MakeNoise // None // @ game+0x63720f4
	void *1f7d6b60c4(); // Function Engine.Actor.*1f7d6b60c4 // None // @ game+0x6365288
	void *a487955527(); // Function Engine.Actor.*a487955527 // None // @ game+0x636f250
	void *8e0bd09921(); // Function Engine.Actor.*8e0bd09921 // None // @ game+0x6367524
	void ReceiveActorBeginOverlap(); // Function Engine.Actor.ReceiveActorBeginOverlap // None // @ game+0x26a108
	void ReceiveActorOnInputTouchEnd(); // Function Engine.Actor.ReceiveActorOnInputTouchEnd // None // @ game+0x26a108
	void *76b33f89d4(); // Function Engine.Actor.*76b33f89d4 // None // @ game+0x636ac9c
	void K2_OnEndViewTarget(); // Function Engine.Actor.K2_OnEndViewTarget // None // @ game+0x26a108
	void DisableInput(); // Function Engine.Actor.DisableInput // None // @ game+0x6362a78
	void *9fc33c71b8(); // Function Engine.Actor.*9fc33c71b8 // None // @ game+0x636ba48
	enum class *42e1cdcd79 *694ac52e11(enum class *42e1cdcd79 LocationRule); // Function Engine.Actor.*694ac52e11 // None // @ game+0x636eee0
	struct UClass* *3d2b57891f(); // Function Engine.Actor.*3d2b57891f // None // @ game+0x63669ec
	void OnRep_ReplicateMovement(); // Function Engine.Actor.OnRep_ReplicateMovement // None // @ game+0xb40e14
	void *8df9beeffc(); // Function Engine.Actor.*8df9beeffc // None // @ game+0x637c5d0
	void *7952614099(); // Function Engine.Actor.*7952614099 // None // @ game+0x6365260
	struct FHitResult K2_AddActorLocalRotation(); // Function Engine.Actor.K2_AddActorLocalRotation // None // @ game+0x636c988
	void OnRep_Instigator(); // Function Engine.Actor.OnRep_Instigator // None // @ game+0xb6a404
	void ReceiveActorOnClicked(); // Function Engine.Actor.ReceiveActorOnClicked // None // @ game+0x26a108
	void *3dcb8c828c(); // Function Engine.Actor.*3dcb8c828c // None // @ game+0x6364aa8
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.Actor.GetOverlappingActors // None // @ game+0x6369bb8
	void *2ad230fb6c(); // Function Engine.Actor.*2ad230fb6c // None // @ game+0x6377260
	void *b01fc0cf78(); // Function Engine.Actor.*b01fc0cf78 // None // @ game+0x6364f98
	void K2_OnBecomeViewTarget(); // Function Engine.Actor.K2_OnBecomeViewTarget // None // @ game+0x26a108
	void *6237fb723e(); // Function Engine.Actor.*6237fb723e // None // @ game+0x636f734
	void OnRep_AttachmentReplication(); // Function Engine.Actor.OnRep_AttachmentReplication // None // @ game+0x8b5060
	void *8ab522db39(); // Function Engine.Actor.*8ab522db39 // None // @ game+0x63672dc
	void *7915dcfee8(); // Function Engine.Actor.*7915dcfee8 // None // @ game+0x6366bd4
	struct FHitResult K2_SetActorRelativeTransform(); // Function Engine.Actor.K2_SetActorRelativeTransform // None // @ game+0x63705d4
	void ReceiveActorBeginCursorOver(); // Function Engine.Actor.ReceiveActorBeginCursorOver // None // @ game+0x26a108
	void *7af955f165(); // Function Engine.Actor.*7af955f165 // None // @ game+0x6373e3c
	void *9ffc398f85(); // Function Engine.Actor.*9ffc398f85 // None // @ game+0x635dd54
	struct FHitResult ReceiveRadialDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceiveRadialDamage // None // @ game+0x26a108
	void ForceNetUpdate(); // Function Engine.Actor.ForceNetUpdate // None // @ game+0x6364abc
	void *34c6511ade(); // Function Engine.Actor.*34c6511ade // None // @ game+0x6368e6c
	void ReceiveActorOnInputTouchEnter(); // Function Engine.Actor.ReceiveActorOnInputTouchEnter // None // @ game+0x26a108
	void *17f595f9ac(); // Function Engine.Actor.*17f595f9ac // None // @ game+0x636af68
	void SetActorTickEnabled(); // Function Engine.Actor.SetActorTickEnabled // None // @ game+0x63771cc
	void ReceiveActorOnInputTouchLeave(); // Function Engine.Actor.ReceiveActorOnInputTouchLeave // None // @ game+0x26a108
	void ReceiveEndPlay(); // Function Engine.Actor.ReceiveEndPlay // None // @ game+0x26a108
	void GetOverlappingComponents(); // Function Engine.Actor.GetOverlappingComponents // None // @ game+0x6369e18
	void K2_AddActorLocalOffset(struct FVector DeltaLocation, struct FHitResult SweepHitResult); // Function Engine.Actor.K2_AddActorLocalOffset // None // @ game+0x636c7b0
	void *d21a3baa7f(); // Function Engine.Actor.*d21a3baa7f // None // @ game+0x636a03c
	struct FHitResult K2_SetActorRelativeLocation(); // Function Engine.Actor.K2_SetActorRelativeLocation // None // @ game+0x6370224
	void OnRep_Owner(); // Function Engine.Actor.OnRep_Owner // None // @ game+0xb44448
	void *a80dd65dbf(); // Function Engine.Actor.*a80dd65dbf // None // @ game+0x636ba64
	void OnRep_ReplicatedMovement(); // Function Engine.Actor.OnRep_ReplicatedMovement // None // @ game+0x70f418
	void ReceiveActorOnInputTouchBegin(); // Function Engine.Actor.ReceiveActorOnInputTouchBegin // None // @ game+0x26a108
	void AddTickPrerequisiteActor(); // Function Engine.Actor.AddTickPrerequisiteActor // None // @ game+0x635dc2c
	void *5c10316bc8(); // Function Engine.Actor.*5c10316bc8 // None // @ game+0x636bafc
	void *679babdbe9(struct FVector DestLocation); // Function Engine.Actor.*679babdbe9 // None // @ game+0x6371a40
	float *77574d4d00(); // Function Engine.Actor.*77574d4d00 // None // @ game+0x637f170
	void ReceiveActorEndCursorOver(); // Function Engine.Actor.ReceiveActorEndCursorOver // None // @ game+0x26a108
	void *2bbda76e95(struct UClass* ComponentClass); // Function Engine.Actor.*2bbda76e95 // None // @ game+0x6366ae4
	void *8ff8fb0472(struct FKey InputAxisKey); // Function Engine.Actor.*8ff8fb0472 // None // @ game+0x6368c64
	void *96888c26b2(); // Function Engine.Actor.*96888c26b2 // None // @ game+0x636586c
	void K2_GetActorRotation(); // Function Engine.Actor.K2_GetActorRotation // None // @ game+0x636f318
	void *e14d0605bc(); // Function Engine.Actor.*e14d0605bc // None // @ game+0x63650bc
	void *d30428cd54(); // Function Engine.Actor.*d30428cd54 // None // @ game+0x637cb38
	bool K2_SetActorLocationAndRotation(); // Function Engine.Actor.K2_SetActorLocationAndRotation // None // @ game+0x636ffec
	void *6d495b918e(); // Function Engine.Actor.*6d495b918e // None // @ game+0x637712c
	void *3b635a9905(); // Function Engine.Actor.*3b635a9905 // None // @ game+0x637708c
	void *12680bdeab(); // Function Engine.Actor.*12680bdeab // None // @ game+0x637ea90
	void ReceiveActorEndOverlap(); // Function Engine.Actor.ReceiveActorEndOverlap // None // @ game+0x26a108
	struct FVector *4e14239fe2(); // Function Engine.Actor.*4e14239fe2 // None // @ game+0x6364e8c
	void *553025a5b6(); // Function Engine.Actor.*553025a5b6 // None // @ game+0x6368f34
	void *6f6713dfba(struct AActor* OtherActor); // Function Engine.Actor.*6f6713dfba // None // @ game+0x6368018
	struct FHitResult K2_SetActorRelativeRotation(); // Function Engine.Actor.K2_SetActorRelativeRotation // None // @ game+0x63703fc
	void *f2d13d9497(); // Function Engine.Actor.*f2d13d9497 // None // @ game+0x6365848
	void K2_SetActorRotation(bool bTeleportPhysics); // Function Engine.Actor.K2_SetActorRotation // None // @ game+0x605cd0
	void *7fc2785714(); // Function Engine.Actor.*7fc2785714 // None // @ game+0x6373d14
	void *2cfa65e375(); // Function Engine.Actor.*2cfa65e375 // None // @ game+0x6364e64
	void ReceiveBeginPlay(); // Function Engine.Actor.ReceiveBeginPlay // None // @ game+0x26a108
	void K2_OnReset(); // Function Engine.Actor.K2_OnReset // None // @ game+0x26a108
	void *58360a298b(struct AActor* Other); // Function Engine.Actor.*58360a298b // None // @ game+0x636c21c
	void DetachRootComponentFromParent(); // Function Engine.Actor.DetachRootComponentFromParent // None // @ game+0x63629e4
	void *724cefc729(); // Function Engine.Actor.*724cefc729 // None // @ game+0x636b3b0
	void ReceiveActorOnReleased(); // Function Engine.Actor.ReceiveActorOnReleased // None // @ game+0x26a108
	bool K2_SetActorTransform(bool bSweep); // Function Engine.Actor.K2_SetActorTransform // None // @ game+0x6370800
	void SetOwner(); // Function Engine.Actor.SetOwner // None // @ game+0x637b964
	void *094169766b(); // Function Engine.Actor.*094169766b // None // @ game+0x6368e84
	void *2a43ddf3b4(struct AActor* OtherActor); // Function Engine.Actor.*2a43ddf3b4 // None // @ game+0x636737c
	enum class EAttachmentRule *e13072354b(enum class EAttachmentRule ScaleRule); // Function Engine.Actor.*e13072354b // None // @ game+0x63d310
	void *bf3d34531f(); // Function Engine.Actor.*bf3d34531f // None // @ game+0x637dda0
	struct FVector ReceivePointDamage(struct AController* InstigatedBy); // Function Engine.Actor.ReceivePointDamage // None // @ game+0x26a108
	void ReceiveTick(); // Function Engine.Actor.ReceiveTick // None // @ game+0x26a108
	struct FHitResult K2_AddActorLocalTransform(); // Function Engine.Actor.K2_AddActorLocalTransform // None // @ game+0x636cb60
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector NormalImpulse); // Function Engine.Actor.ReceiveHit // None // @ game+0x26a108
	struct UMaterialInterface* *ea2a94b7da(); // Function Engine.Actor.*ea2a94b7da // None // @ game+0x6372078
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

	void *eb9db3d068(); // Function Engine.RadialForceActor.*eb9db3d068 // None // @ game+0x7a3ba0
	void *5842739238(); // Function Engine.RadialForceActor.*5842739238 // None // @ game+0x567b1d0
	void *9d3f73d5f3(); // Function Engine.RadialForceActor.*9d3f73d5f3 // None // @ game+0xcbeb68
	void *4826c1c9b4(); // Function Engine.RadialForceActor.*4826c1c9b4 // None // @ game+0x7a35ac
};

// Class Engine.SceneCapture
// Size: 0x400 (Inherited: 0x3f8)
struct ASceneCapture : AActor {
	struct UStaticMeshComponent* MeshComp; // 0x3f8(0x08)
};

// Class Engine.PlanarReflection
// Size: 0x410 (Inherited: 0x400)
struct APlanarReflection : ASceneCapture {
	struct U*30ab50e62e* PlanarReflectionComponent; // 0x400(0x08)
	bool *aaed5a4262; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)

	void OnInterpToggle(); // Function Engine.PlanarReflection.OnInterpToggle // None // @ game+0x63725a4
};

// Class Engine.SceneCapture2D
// Size: 0x410 (Inherited: 0x400)
struct ASceneCapture2D : ASceneCapture {
	struct USceneCaptureComponent2D* CaptureComponent2D; // 0x400(0x08)
	struct U*7516137630* *fbb1cd85af; // 0x408(0x08)

	void OnInterpToggle(); // Function Engine.SceneCapture2D.OnInterpToggle // None // @ game+0x63725a4
};

// Class Engine.SceneCaptureCube
// Size: 0x410 (Inherited: 0x400)
struct ASceneCaptureCube : ASceneCapture {
	struct USceneCaptureComponentCube* CaptureComponentCube; // 0x400(0x08)
	struct U*7516137630* *fbb1cd85af; // 0x408(0x08)

	void OnInterpToggle(); // Function Engine.SceneCaptureCube.OnInterpToggle // None // @ game+0x63725a4
};

// Class Engine.*fe3ba32e6b
// Size: 0x28 (Inherited: 0x28)
struct U*fe3ba32e6b : UInterface {
};

// Class Engine.SplineMeshActor
// Size: 0x400 (Inherited: 0x3f8)
struct ASplineMeshActor : AActor {
	struct USplineMeshComponent* SplineMeshComponent; // 0x3f8(0x08)
};

// Class Engine.StaticMeshIndoorVolumeComponent
// Size: 0x520 (Inherited: 0x4c0)
struct UStaticMeshIndoorVolumeComponent : USceneComponent {
	struct UStaticMesh* StaticMesh; // 0x4c0(0x08)
	char pad_4C8[0x58]; // 0x4c8(0x58)
};

// Class Engine.StaticMeshIndoorVolumeContainerComponent
// Size: 0x500 (Inherited: 0x4c0)
struct UStaticMeshIndoorVolumeContainerComponent : USceneComponent {
	struct TArray<struct UStaticMesh*> StaticMeshes; // 0x4c0(0x10)
	struct TArray<struct F*d4bdb64586> *6735174b80; // 0x4d0(0x10)
	char pad_4E0[0x20]; // 0x4e0(0x20)
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
	struct U*9de72ef8ed* CollisionComponent; // 0x3f8(0x08)
};

// Class Engine.TriggerSphere
// Size: 0x400 (Inherited: 0x400)
struct ATriggerSphere : ATriggerBase {
	struct U*9de72ef8ed* CollisionComponent; // 0x3f8(0x08)
};

// Class Engine.VectorFieldVolume
// Size: 0x400 (Inherited: 0x3f8)
struct AVectorFieldVolume : AActor {
	struct UVectorFieldComponent* VectorFieldComponent; // 0x3f8(0x08)
};

// Class Engine.ApplicationLifecycleComponent
// Size: 0x240 (Inherited: 0x1f0)
struct UApplicationLifecycleComponent : UActorComponent {
	struct FMulticastDelegate ApplicationWillDeactivateDelegate; // 0x1f0(0x10)
	struct FMulticastDelegate ApplicationHasReactivatedDelegate; // 0x200(0x10)
	struct FMulticastDelegate ApplicationWillEnterBackgroundDelegate; // 0x210(0x10)
	struct FMulticastDelegate ApplicationHasEnteredForegroundDelegate; // 0x220(0x10)
	struct FMulticastDelegate ApplicationWillTerminateDelegate; // 0x230(0x10)

	void ApplicationLifetimeDelegate__DelegateSignature(); // DelegateFunction Engine.ApplicationLifecycleComponent.ApplicationLifetimeDelegate__DelegateSignature // None // @ game+0x26a108
};

// Class Engine.LevelBlocksData
// Size: 0x38 (Inherited: 0x28)
struct ULevelBlocksData : UObject {
	struct TArray<struct U*401688bf57*> *619bd0911f; // 0x28(0x10)
};

// Class Engine.*686d9ef451
// Size: 0x2b0 (Inherited: 0x1f0)
struct U*686d9ef451 : UActorComponent {
	char pad_1F0[0x8]; // 0x1f0(0x08)
	struct ULevelBlocksData* LevelBlocksData; // 0x1f8(0x08)
	char pad_200[0x18]; // 0x200(0x18)
	int32 RandomSeed; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct TArray<struct AActor*> *eeff6da04e; // 0x220(0x10)
	char pad_230[0x80]; // 0x230(0x80)

	void OnRep_RandomSeed(); // Function Engine.*686d9ef451.OnRep_RandomSeed // None // @ game+0x6372690
	void OnKillcamLoadingFinished(); // Function Engine.*686d9ef451.OnKillcamLoadingFinished // None // @ game+0x6372658
};

// Class Engine.*4e1a53212d
// Size: 0x2e0 (Inherited: 0x240)
struct U*4e1a53212d : UMovementComponent {
	float Duration; // 0x238(0x04)
	char bPauseOnImpact : 1; // 0x23c(0x01)
	enum class EInterpToBehaviourType BehaviourType; // 0x240(0x01)
	char bForceSubStepping : 1; // 0x244(0x01)
	char pad_245_2 : 6; // 0x245(0x01)
	char pad_246[0x2]; // 0x246(0x02)
	struct FMulticastDelegate OnInterpToReverse; // 0x248(0x10)
	struct FMulticastDelegate OnInterpToStop; // 0x258(0x10)
	struct FMulticastDelegate OnWaitBeginDelegate; // 0x268(0x10)
	struct FMulticastDelegate OnWaitEndDelegate; // 0x278(0x10)
	struct FMulticastDelegate OnResetDelegate; // 0x288(0x10)
	float MaxSimulationTimeStep; // 0x298(0x04)
	int32 MaxSimulationIterations; // 0x29c(0x04)
	struct TArray<struct F*b7b753c7d1> ControlPoints; // 0x2a0(0x10)
	char pad_2B0[0x30]; // 0x2b0(0x30)

	struct FHitResult OnInterpToWaitEndDelegate__DelegateSignature(); // DelegateFunction Engine.*4e1a53212d.OnInterpToWaitEndDelegate__DelegateSignature // None // @ game+0x26a108
	void *6fe3ff1caf(); // Function Engine.*4e1a53212d.*6fe3ff1caf // None // @ game+0x636485c
	void OnInterpToWaitBeginDelegate__DelegateSignature(); // DelegateFunction Engine.*4e1a53212d.OnInterpToWaitBeginDelegate__DelegateSignature // None // @ game+0x26a108
	void *2be2680041(); // Function Engine.*4e1a53212d.*2be2680041 // None // @ game+0x6373fc0
	struct FHitResult OnInterpToStopDelegate__DelegateSignature(); // DelegateFunction Engine.*4e1a53212d.OnInterpToStopDelegate__DelegateSignature // None // @ game+0x26a108
	struct FHitResult OnInterpToReverseDelegate__DelegateSignature(); // DelegateFunction Engine.*4e1a53212d.OnInterpToReverseDelegate__DelegateSignature // None // @ game+0x26a108
	void StopSimulating(); // Function Engine.*4e1a53212d.StopSimulating // None // @ game+0x637e908
	void OnInterpToResetDelegate__DelegateSignature(); // DelegateFunction Engine.*4e1a53212d.OnInterpToResetDelegate__DelegateSignature // None // @ game+0x26a108
};

// Class Engine.AssetUserData
// Size: 0x28 (Inherited: 0x28)
struct UAssetUserData : UObject {
};

// Class Engine.Skeleton
// Size: 0x3a0 (Inherited: 0x28)
struct USkeleton : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct F*7c53f3877f> *4f46d16686; // 0x30(0x10)
	struct TArray<struct FTransform> RefLocalPoses; // 0x40(0x10)
	char pad_50[0x110]; // 0x50(0x110)
	struct FGuid *653333d3e6; // 0x160(0x10)
	struct TArray<struct F*58d120ed00> *a77ebe0430; // 0x170(0x10)
	struct TArray<struct F*6d20fa54b7> *982bb84834; // 0x180(0x10)
	struct TArray<struct USkeletalMeshSocket*> Sockets; // 0x190(0x10)
	char pad_1A0[0x50]; // 0x1a0(0x50)
	struct F*c7095221f3 *082dff64b9; // 0x1f0(0x50)
	char pad_240[0x18]; // 0x240(0x18)
	struct TArray<struct UBlendProfile*> *3d4acaeca3; // 0x258(0x10)
	struct TArray<struct F*6d4e23887b> *e50f12f238; // 0x268(0x10)
	char pad_278[0x118]; // 0x278(0x118)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x390(0x10)
};

// Class Engine.AnimSequenceBase
// Size: 0xa0 (Inherited: 0x78)
struct UAnimSequenceBase : UAnimationAsset {
	struct TArray<struct FAnimNotifyEvent> Notifies; // 0x78(0x10)
	float SequenceLength; // 0x88(0x04)
	float *5d1245bca9; // 0x8c(0x04)
	struct F*861f26b4bb *50311a4812; // 0x90(0x10)

	void *7d91abc633(); // Function Engine.AnimSequenceBase.*7d91abc633 // None // @ game+0x636a608
};

// Class Engine.*24a15a77a5
// Size: 0xa0 (Inherited: 0xa0)
struct U*24a15a77a5 : UAnimSequenceBase {
	struct TArray<struct FAnimNotifyEvent> Notifies; // 0x78(0x10)
	float SequenceLength; // 0x88(0x04)
	float *5d1245bca9; // 0x8c(0x04)
	struct F*861f26b4bb *50311a4812; // 0x90(0x10)

	void *7d91abc633(); // Function Engine.AnimSequenceBase.*7d91abc633 // None // @ game+0x636a608
};

// Class Engine.AnimMontage
// Size: 0x1a8 (Inherited: 0xa0)
struct UAnimMontage : U*24a15a77a5 {
	struct FAlphaBlend *d735d492d3; // 0xa0(0x38)
	float BlendInTime; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FAlphaBlend *ed75150f57; // 0xe0(0x38)
	float BlendOutTime; // 0x118(0x04)
	float *cf4bee3266; // 0x11c(0x04)
	struct FName SyncGroup; // 0x120(0x08)
	int32 *0cabdd544e; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct F*744d0d8f9a *b05b099a65; // 0x130(0x20)
	struct TArray<struct F*e65551b591> *932a39c870; // 0x150(0x10)
	struct TArray<struct F*e4cf0cd6cd> *874a3d370b; // 0x160(0x10)
	struct TArray<struct FBranchingPoint> BranchingPoints; // 0x170(0x10)
	bool *44e45914b5; // 0x180(0x01)
	bool *7f09fe2f3d; // 0x181(0x01)
	enum class ERootMotionRootLock *07020cca27; // 0x182(0x01)
	char pad_183[0x5]; // 0x183(0x05)
	struct TArray<struct F*053a0453d8> *b4cee45506; // 0x188(0x10)
	struct TArray<int32> *f6f5752009; // 0x198(0x10)

	void OnMontageClosedMulticaster__DelegateSignature(); // DelegateFunction Engine.AnimMontage.OnMontageClosedMulticaster__DelegateSignature // None // @ game+0x26a108
};

// Class Engine.*8baf89a61b
// Size: 0x28 (Inherited: 0x28)
struct U*8baf89a61b : UInterface {
};

// Class Engine.*24e2a79452
// Size: 0x28 (Inherited: 0x28)
struct U*24e2a79452 : UInterface {
};

// Class Engine.RotatingMovementComponent
// Size: 0x260 (Inherited: 0x240)
struct URotatingMovementComponent : UMovementComponent {
	struct FRotator RotationRate; // 0x238(0x0c)
	struct FVector PivotTranslation; // 0x244(0x0c)
	char bRotationInLocalSpace : 1; // 0x250(0x01)
	char pad_258_1 : 7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
};

// Class Engine.*12d62400b6
// Size: 0x200 (Inherited: 0x1f0)
struct U*12d62400b6 : UActorComponent {
	float *70a8f2bec5; // 0x1f0(0x04)
	float *8c62b864b4; // 0x1f4(0x04)
	char pad_1F8[0x8]; // 0x1f8(0x08)
};

// Class Engine.*45007992b8
// Size: 0x220 (Inherited: 0x1f0)
struct U*45007992b8 : UActorComponent {
	char pad_1F0[0x24]; // 0x1f0(0x24)
	char *671324be81 : 1; // 0x214(0x01)
	char pad_214_1 : 7; // 0x214(0x01)
	char pad_215[0x3]; // 0x215(0x03)
	struct UObject* *274952ca68; // 0x218(0x08)

	void *8d87d87718(); // Function Engine.*45007992b8.*8d87d87718 // None // @ game+0x63c9930
};

// Class Engine.*3de3a6b8f1
// Size: 0x28 (Inherited: 0x28)
struct U*3de3a6b8f1 : UInterface {
};

// Class Engine.NavLinkCustomComponent
// Size: 0x330 (Inherited: 0x220)
struct UNavLinkCustomComponent : U*45007992b8 {
	char pad_220[0x8]; // 0x220(0x08)
	uint32 *5523f831eb; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct UClass* *0fc66b56f8; // 0x230(0x08)
	struct UClass* *1d7f0d4d70; // 0x238(0x08)
	struct FVector *8d7fd94284; // 0x240(0x0c)
	struct FVector *d0e69e785c; // 0x24c(0x0c)
	enum class ENavLinkDirection *1441f2d063; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	char *3cf2a4fe3a : 1; // 0x25c(0x01)
	char *21787b5d01 : 1; // 0x25c(0x01)
	char *ebff935628 : 1; // 0x25c(0x01)
	char *9cdf2c06e1 : 1; // 0x25c(0x01)
	char pad_25C_4 : 4; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct FVector *31f7f8460c; // 0x260(0x0c)
	struct FVector *9591ddb654; // 0x26c(0x0c)
	struct UClass* *61254f8c39; // 0x278(0x08)
	float *f02ad0b613; // 0x280(0x04)
	float *c31405aecb; // 0x284(0x04)
	enum class ECollisionChannel *f153424fb9; // 0x288(0x01)
	char pad_289[0xa7]; // 0x289(0xa7)
};

// Class Engine.NavModifierComponent
// Size: 0x250 (Inherited: 0x220)
struct UNavModifierComponent : U*45007992b8 {
	struct UClass* AreaClass; // 0x220(0x08)
	struct FVector *a7f47a9a32; // 0x228(0x0c)
	char pad_234[0x1c]; // 0x234(0x1c)

	void *17584ae5c0(); // Function Engine.NavModifierComponent.*17584ae5c0 // None // @ game+0x63c0d20
};

// Class Engine.PawnNoiseEmitterComponent
// Size: 0x220 (Inherited: 0x1f0)
struct UPawnNoiseEmitterComponent : UActorComponent {
	char *e3e8436a88 : 1; // 0x1f0(0x01)
	char pad_1F0_1 : 7; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	struct FVector *e9b710b95d; // 0x1f4(0x0c)
	float NoiseLifetime; // 0x200(0x04)
	float *a216c50f1d; // 0x204(0x04)
	float *6ee5db9527; // 0x208(0x04)
	float *5d661a7b1f; // 0x20c(0x04)
	float *50624e8f69; // 0x210(0x04)
	char pad_214[0xc]; // 0x214(0x0c)

	void MakeNoise(struct AActor* NoiseMaker); // Function Engine.PawnNoiseEmitterComponent.MakeNoise // None // @ game+0x63b2064
};

// Class Engine.*ac0300a030
// Size: 0x230 (Inherited: 0x1f0)
struct U*ac0300a030 : UActorComponent {
	float StrengthMultiplyer; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x1f8(0x08)
	char pad_200[0x30]; // 0x200(0x30)

	void *c27ff35db6(struct F*a8d9e92905 PhysicalAnimationData); // Function Engine.*ac0300a030.*c27ff35db6 // None // @ game+0x6385ba4
	struct FName *cd40829f63(); // Function Engine.*ac0300a030.*cd40829f63 // None // @ game+0x639caf8
	void *30969388af(); // Function Engine.*ac0300a030.*30969388af // None // @ game+0x63ccf60
	void *6ac4cee3ef(struct FName ProfileName); // Function Engine.*ac0300a030.*6ac4cee3ef // None // @ game+0x6385920
	void *f528898007(); // Function Engine.*ac0300a030.*f528898007 // None // @ game+0x63cb8b0
	struct FName *0f758bb9e7(); // Function Engine.*ac0300a030.*0f758bb9e7 // None // @ game+0x6385aa0
};

// Class Engine.PhysicsHandleComponent
// Size: 0x2a0 (Inherited: 0x1f0)
struct UPhysicsHandleComponent : UActorComponent {
	struct UPrimitiveComponent* *6008847753; // 0x1f0(0x08)
	char pad_1F8[0xc]; // 0x1f8(0x0c)
	char pad_204_0 : 1; // 0x204(0x01)
	char bSoftAngularConstraint : 1; // 0x204(0x01)
	char bSoftLinearConstraint : 1; // 0x204(0x01)
	char bInterpolateTarget : 1; // 0x204(0x01)
	char pad_204_4 : 4; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	float LinearDamping; // 0x208(0x04)
	float LinearStiffness; // 0x20c(0x04)
	float AngularDamping; // 0x210(0x04)
	float AngularStiffness; // 0x214(0x04)
	char pad_218[0x68]; // 0x218(0x68)
	float InterpolationSpeed; // 0x280(0x04)
	char pad_284[0x1c]; // 0x284(0x1c)

	void *72380cd0b1(); // Function Engine.PhysicsHandleComponent.*72380cd0b1 // None // @ game+0x63cd758
	void *ad527cd63e(); // Function Engine.PhysicsHandleComponent.*ad527cd63e // None // @ game+0x63c0408
	struct FVector *961ae85ded(); // Function Engine.PhysicsHandleComponent.*961ae85ded // None // @ game+0x63a5b58
	void *6aa1484aa0(); // Function Engine.PhysicsHandleComponent.*6aa1484aa0 // None // @ game+0x63c7d60
	struct FVector *1b9079209d(struct UPrimitiveComponent* Component); // Function Engine.PhysicsHandleComponent.*1b9079209d // None // @ game+0x63a82a8
	void SetLinearDamping(); // Function Engine.PhysicsHandleComponent.SetLinearDamping // None // @ game+0x63c85ec
	void *5c2ffae88a(); // Function Engine.PhysicsHandleComponent.*5c2ffae88a // None // @ game+0x63c8a00
	void *724f2aa897(struct UPrimitiveComponent* Component, struct FVector Location); // Function Engine.PhysicsHandleComponent.*724f2aa897 // None // @ game+0x63a8574
	struct FName *ffece8c08e(); // Function Engine.PhysicsHandleComponent.*ffece8c08e // None // @ game+0x63a8428
	void *acef9b33a4(); // Function Engine.PhysicsHandleComponent.*acef9b33a4 // None // @ game+0x63cd904
	void *295e94144c(); // Function Engine.PhysicsHandleComponent.*295e94144c // None // @ game+0x63cd7fc
	void *52304d7bbc(); // Function Engine.PhysicsHandleComponent.*52304d7bbc // None // @ game+0x639f708
	void *543b90d6fe(); // Function Engine.PhysicsHandleComponent.*543b90d6fe // None // @ game+0xc099d4
	void SetAngularDamping(); // Function Engine.PhysicsHandleComponent.SetAngularDamping // None // @ game+0x63bfe68
};

// Class Engine.*1a02c66d00
// Size: 0x210 (Inherited: 0x1f0)
struct U*1a02c66d00 : UActorComponent {
	struct FMulticastDelegate PlatformChangedToLaptopModeDelegate; // 0x1f0(0x10)
	struct FMulticastDelegate PlatformChangedToTabletModeDelegate; // 0x200(0x10)

	void *4ed3e8ba43(); // Function Engine.*1a02c66d00.*4ed3e8ba43 // None // @ game+0x63aaf64
	void PlatformEventDelegate__DelegateSignature(); // DelegateFunction Engine.*1a02c66d00.PlatformEventDelegate__DelegateSignature // None // @ game+0x26a108
	void *a04761368f(); // Function Engine.*1a02c66d00.*a04761368f // None // @ game+0x63aaf38
	void *9d75660e1a(); // Function Engine.*1a02c66d00.*9d75660e1a // None // @ game+0x63d6f18
};

// Class Engine.AtmosphericFogComponent
// Size: 0x6e0 (Inherited: 0x4c0)
struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; // 0x4c0(0x04)
	float FogMultiplier; // 0x4c4(0x04)
	float DensityMultiplier; // 0x4c8(0x04)
	float DensityOffset; // 0x4cc(0x04)
	float DistanceScale; // 0x4d0(0x04)
	float AltitudeScale; // 0x4d4(0x04)
	float DistanceOffset; // 0x4d8(0x04)
	float GroundOffset; // 0x4dc(0x04)
	float StartDistance; // 0x4e0(0x04)
	float SunDiscScale; // 0x4e4(0x04)
	struct TArray<struct F*4ac06f229c> HeightDensityLayers; // 0x4e8(0x10)
	float DefaultBrightness; // 0x4f8(0x04)
	struct FColor DefaultLightColor; // 0x4fc(0x04)
	char bDisableSunDisk : 1; // 0x500(0x01)
	char bDisableGroundScattering : 1; // 0x500(0x01)
	char pad_500_2 : 6; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	struct F*662319d9f9 PrecomputeParams; // 0x504(0x2c)
	struct UTexture2D* TransmittanceTexture; // 0x530(0x08)
	struct UTexture2D* IrradianceTexture; // 0x538(0x08)
	char pad_540[0x1a0]; // 0x540(0x1a0)

	void *143b1e3469(); // Function Engine.AtmosphericFogComponent.*143b1e3469 // None // @ game+0x63c462c
	void *b7b64fbe2b(float DensityHeight); // Function Engine.AtmosphericFogComponent.*b7b64fbe2b // None // @ game+0x63cac68
	void *984883a967(); // Function Engine.AtmosphericFogComponent.*984883a967 // None // @ game+0x63cc7d4
	void *03221c70a5(); // Function Engine.AtmosphericFogComponent.*03221c70a5 // None // @ game+0xaf438c
	void *a7e4091f18(); // Function Engine.AtmosphericFogComponent.*a7e4091f18 // None // @ game+0x63c4328
	void *2b4c6efb08(); // Function Engine.AtmosphericFogComponent.*2b4c6efb08 // None // @ game+0x63c4a74
	void *f824bc6577(); // Function Engine.AtmosphericFogComponent.*f824bc6577 // None // @ game+0x6394d60
	void *4085348853(); // Function Engine.AtmosphericFogComponent.*4085348853 // None // @ game+0x63c6108
	void *ee2a14d31b(); // Function Engine.AtmosphericFogComponent.*ee2a14d31b // None // @ game+0x63c43d4
	void *780064cb88(); // Function Engine.AtmosphericFogComponent.*780064cb88 // None // @ game+0x63c4b20
	void *bf93b14931(); // Function Engine.AtmosphericFogComponent.*bf93b14931 // None // @ game+0x63bfdbc
	void *be2a7a2c3c(); // Function Engine.AtmosphericFogComponent.*be2a7a2c3c // None // @ game+0x63c4580
	void *8bd2b3571c(); // Function Engine.AtmosphericFogComponent.*8bd2b3571c // None // @ game+0x63c63a4
	void *e152e71c6c(); // Function Engine.AtmosphericFogComponent.*e152e71c6c // None // @ game+0x6394ca8
};

// Class Engine.*dd82106d9d
// Size: 0x28 (Inherited: 0x28)
struct U*dd82106d9d : UObject {
};

// Class Engine.*c56adf0d9d
// Size: 0x28 (Inherited: 0x28)
struct U*c56adf0d9d : UObject {
};

// Class Engine.*7ac139f02b
// Size: 0x28 (Inherited: 0x28)
struct U*7ac139f02b : UObject {
};

// Class Engine.SoundAttenuation
// Size: 0x158 (Inherited: 0x28)
struct USoundAttenuation : UObject {
	struct FSoundAttenuationSettings Attenuation; // 0x28(0x130)
};

// Class Engine.AudioComponent
// Size: 0x790 (Inherited: 0x4c0)
struct UAudioComponent : USceneComponent {
	struct USoundBase* Sound; // 0x4c0(0x08)
	struct TArray<struct F*71fadb6221> InstanceParameters; // 0x4c8(0x10)
	struct USoundClass* *74b597268e; // 0x4d8(0x08)
	char *2e8753955a : 1; // 0x4e0(0x01)
	char *d6fc981176 : 1; // 0x4e0(0x01)
	char *9635c18944 : 1; // 0x4e0(0x01)
	char bAllowSpatialization : 1; // 0x4e0(0x01)
	char bOverrideAttenuation : 1; // 0x4e0(0x01)
	char pad_4E0_5 : 3; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	char bOverrideSubtitlePriority : 1; // 0x4e4(0x01)
	char pad_4E4_1 : 7; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	char bIsUISound : 1; // 0x4e8(0x01)
	char bEnableLowPassFilter : 1; // 0x4e8(0x01)
	char bOverridePriority : 1; // 0x4e8(0x01)
	char bSuppressSubtitles : 1; // 0x4e8(0x01)
	char pad_4E8_4 : 4; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct FName *ceae817621; // 0x4f0(0x08)
	float PitchModulationMin; // 0x4f8(0x04)
	float PitchModulationMax; // 0x4fc(0x04)
	float VolumeModulationMin; // 0x500(0x04)
	float VolumeModulationMax; // 0x504(0x04)
	float VolumeMultiplier; // 0x508(0x04)
	float Priority; // 0x50c(0x04)
	float SubtitlePriority; // 0x510(0x04)
	float VolumeWeightedPriorityScale; // 0x514(0x04)
	float PitchMultiplier; // 0x518(0x04)
	float HighFrequencyGainMultiplier; // 0x51c(0x04)
	float LowPassFilterFrequency; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x528(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x530(0x130)
	struct USoundConcurrency* ConcurrencySettings; // 0x660(0x08)
	char pad_668[0x8]; // 0x668(0x08)
	struct FMulticastDelegate OnAudioFinished; // 0x670(0x10)
	char pad_680[0x70]; // 0x680(0x70)
	struct FMulticastDelegate OnAudioPlaybackPercent; // 0x6f0(0x10)
	char pad_700[0x70]; // 0x700(0x70)
	DelegateProperty *6c1db6614a; // 0x770(0x10)
	char pad_780[0x10]; // 0x780(0x10)

	void IsPlaying(); // Function Engine.AudioComponent.IsPlaying // None // @ game+0x636c1f4
	void AdjustAttenuation(); // Function Engine.AudioComponent.AdjustAttenuation // None // @ game+0x63851fc
	void SetFloatParameter(); // Function Engine.AudioComponent.SetFloatParameter // None // @ game+0x63c5f7c
	float FadeOut(); // Function Engine.AudioComponent.FadeOut // None // @ game+0x63994cc
	void SetWaveParameter(struct FName InName); // Function Engine.AudioComponent.SetWaveParameter // None // @ game+0x63cf280
	void SetBoolParameter(); // Function Engine.AudioComponent.SetBoolParameter // None // @ game+0x63c1f48
	void *91a0b62f1d(); // Function Engine.AudioComponent.*91a0b62f1d // None // @ game+0x63ca258
	void SetVolumeMultiplier(); // Function Engine.AudioComponent.SetVolumeMultiplier // None // @ game+0x63cec88
	void *172bd6cd1a(struct USoundSubmix* Submix); // Function Engine.AudioComponent.*172bd6cd1a // None // @ game+0x63cd194
	void SetIntParameter(); // Function Engine.AudioComponent.SetIntParameter // None // @ game+0x63c773c
	void Play(); // Function Engine.AudioComponent.Play // None // @ game+0x63b8d30
	void SetPitchMultiplier(); // Function Engine.AudioComponent.SetPitchMultiplier // None // @ game+0x63ca468
	void AdjustVolume(float AdjustVolumeDuration); // Function Engine.AudioComponent.AdjustVolume // None // @ game+0x638540c
	void *8da7bf332c(); // Function Engine.AudioComponent.*8da7bf332c // None // @ game+0x63cbaf8
	float *c8b0393496(); // Function Engine.AudioComponent.*c8b0393496 // None // @ game+0x63993a8
	struct FSoundAttenuationSettings *3e910ce8f1(); // Function Engine.AudioComponent.*3e910ce8f1 // None // @ game+0x6387e7c
	void *0c299b72ca(); // Function Engine.AudioComponent.*0c299b72ca // None // @ game+0x63ce068
	void Stop(); // Function Engine.AudioComponent.Stop // None // @ game+0x63d6388
};

// Class Engine.DecalComponent
// Size: 0x550 (Inherited: 0x4c0)
struct UDecalComponent : USceneComponent {
	struct UMaterialInterface* DecalMaterial; // 0x4c0(0x08)
	int32 SortOrder; // 0x4c8(0x04)
	float FadeScreenSize; // 0x4cc(0x04)
	float FadeStartDelay; // 0x4d0(0x04)
	float FadeDuration; // 0x4d4(0x04)
	char bDestroyOwnerAfterFade : 1; // 0x4d8(0x01)
	char pad_4D8_1 : 7; // 0x4d8(0x01)
	struct F*09352ad00b DecalChannels; // 0x4d9(0x01)
	char pad_4DA[0x2]; // 0x4da(0x02)
	struct FVector DecalSize; // 0x4dc(0x0c)
	float NormalFadeStart; // 0x4e8(0x04)
	float NormalFadeEnd; // 0x4ec(0x04)
	char pad_4F0[0x60]; // 0x4f0(0x60)

	void *07d1205642(float StartDelay); // Function Engine.DecalComponent.*07d1205642 // None // @ game+0x63c5c8c
	void CreateDynamicMaterialInstance(); // Function Engine.DecalComponent.CreateDynamicMaterialInstance // None // @ game+0x63934b4
	void *e5a6406b5b(); // Function Engine.DecalComponent.*e5a6406b5b // None // @ game+0x63c41f0
	void *5ef8202fe7(); // Function Engine.DecalComponent.*5ef8202fe7 // None // @ game+0x639e6cc
	void *ed3298e045(); // Function Engine.DecalComponent.*ed3298e045 // None // @ game+0x63cba60
	void *8c6583d073(); // Function Engine.DecalComponent.*8c6583d073 // None // @ game+0x639f188
	void *92db0ab782(); // Function Engine.DecalComponent.*92db0ab782 // None // @ game+0x639f170
};

// Class Engine.*8aed76bbf2
// Size: 0x4d0 (Inherited: 0x4c0)
struct U*8aed76bbf2 : USceneComponent {
	enum class *1d65b135dd DetailMode; // 0x1f0(0x01)
	struct TArray<struct USceneComponent*> AttachChildren; // 0x1f8(0x10)
	char pad_4D1_0 : 1; // 0x4d1(0x01)
	char bReplicatesAttachmentReference : 1; // 0x208(0x01)
	char bReplicatesAttachment : 1; // 0x208(0x01)
	char *9874f81ad0 : 1; // 0x208(0x01)
	char pad_4D1_4 : 1; // 0x4d1(0x01)
	char bAbsoluteLocation : 1; // 0x208(0x01)
	char bAbsoluteRotation : 1; // 0x208(0x01)
	char bAbsoluteScale : 1; // 0x208(0x01)
	char bVisible : 1; // 0x209(0x01)
	char bHiddenInGame : 1; // 0x209(0x01)
	char bShouldUpdatePhysicsVolume : 1; // 0x209(0x01)
	char *131f3529c6 : 1; // 0x209(0x01)
	char bUseAttachParentBound : 1; // 0x209(0x01)
	char bEnableInsensitiveUpdate : 1; // 0x209(0x01)
	char bAbsoluteTranslation : 1; // 0x238(0x01)
	struct APhysicsVolume* PhysicsVolume; // 0x23c(0x08)
	struct FVector *49e84c2fad; // 0x244(0x0c)
	struct USceneComponent* AttachParent; // 0x250(0x08)
	SetProperty *815e178173; // 0x258(0x50)
	struct FRotator RelativeRotation; // 0x344(0x0c)
	struct FVector RelativeTranslation; // 0x350(0x0c)
	struct FVector RelativeLocation; // 0x35c(0x0c)
	struct FVector RelativeScale3D; // 0x368(0x0c)
	enum class EComponentMobility Mobility; // 0x388(0x01)
	struct FName *055f551900; // 0x398(0x08)
	struct FMulticastDelegate PhysicsVolumeChangedDelegate; // 0x3a0(0x10)
	struct FMulticastDelegate AttachmentChangedDelegate; // 0x3b0(0x10)

	void K2_AddWorldTransform(bool bSweep); // Function Engine.SceneComponent.K2_AddWorldTransform // None // @ game+0x636e08c
	struct FHitResult K2_AddLocalRotation(); // Function Engine.SceneComponent.K2_AddLocalRotation // None // @ game+0x636d540
	bool K2_AddWorldOffset(struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_AddWorldOffset // None // @ game+0x636dcdc
	void *24d4692696(); // Function Engine.SceneComponent.*24d4692696 // None // @ game+0x637a948
	struct FHitResult K2_AddWorldRotation(); // Function Engine.SceneComponent.K2_AddWorldRotation // None // @ game+0x636deb4
	bool K2_SetRelativeLocation(struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetRelativeLocation // None // @ game+0x6370a34
	void DetachFromParent(); // Function Engine.SceneComponent.DetachFromParent // None // @ game+0x63628f0
	struct FHitResult K2_SetWorldRotation(); // Function Engine.SceneComponent.K2_SetWorldRotation // None // @ game+0x637163c
	void *a4c0c6dacf(); // Function Engine.SceneComponent.*a4c0c6dacf // None // @ game+0x6373f94
	void K2_SetWorldTransform(struct FTransform NewTransform, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldTransform // None // @ game+0x6371814
	void *c95aa311e1(); // Function Engine.SceneComponent.*c95aa311e1 // None // @ game+0x637da70
	void *64c6a50e0e(); // Function Engine.SceneComponent.*64c6a50e0e // None // @ game+0x636bab8
	void OnRep_Visibility(); // Function Engine.SceneComponent.OnRep_Visibility // None // @ game+0x6372760
	void K2_AddLocalOffset(bool bSweep); // Function Engine.SceneComponent.K2_AddLocalOffset // None // @ game+0x636d368
	void *1ab06a479c(); // Function Engine.SceneComponent.*1ab06a479c // None // @ game+0x6366aac
	int32 *8ecb931576(); // Function Engine.SceneComponent.*8ecb931576 // None // @ game+0x636658c
	void *e94c620b17(struct FName InSocketName); // Function Engine.SceneComponent.*e94c620b17 // None // @ game+0x6362b24
	void K2_GetComponentToWorld(); // Function Engine.SceneComponent.K2_GetComponentToWorld // None // @ game+0x636f52c
	void *71b355cc39(); // Function Engine.SceneComponent.*71b355cc39 // None // @ game+0xb9cb40
	struct FName *c7f3749d3f(); // Function Engine.SceneComponent.*c7f3749d3f // None // @ game+0x636c5a4
	void *47f11c6aa4(); // Function Engine.SceneComponent.*47f11c6aa4 // None // @ game+0x636662c
	void *7b9f3977eb(); // Function Engine.SceneComponent.*7b9f3977eb // None // @ game+0x636f4e8
	struct FHitResult K2_AddLocalTransform(); // Function Engine.SceneComponent.K2_AddLocalTransform // None // @ game+0x636d718
	void *d6237c56a2(struct FRotator NewRotation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.*d6237c56a2 // None // @ game+0x637140c
	void *fdc9f4ce48(); // Function Engine.SceneComponent.*fdc9f4ce48 // None // @ game+0x636b1e0
	void *c983529eeb(); // Function Engine.SceneComponent.*c983529eeb // None // @ game+0x637c34c
	void *fadfce2f5c(struct USceneComponent* InParent); // Function Engine.SceneComponent.*fadfce2f5c // None // @ game+0x637de7c
	void *fe65a776a5(); // Function Engine.SceneComponent.*fe65a776a5 // None // @ game+0x636f464
	bool SetVisibility(); // Function Engine.SceneComponent.SetVisibility // None // @ game+0xb6c2dc
	void *e51a15ac42(); // Function Engine.SceneComponent.*e51a15ac42 // None // @ game+0x637a9e4
	void K2_SetRelativeRotation(bool bSweep); // Function Engine.SceneComponent.K2_SetRelativeRotation // None // @ game+0x6370e30
	void *a0c587c4d6(); // Function Engine.SceneComponent.*a0c587c4d6 // None // @ game+0x63699d4
	enum class *42e1cdcd79 *a17d5e84b8(enum class *42e1cdcd79 ScaleRule); // Function Engine.SceneComponent.*a17d5e84b8 // None // @ game+0x63f7b8
	struct FHitResult *f0cbf81c2a(struct FRotator NewRotation); // Function Engine.SceneComponent.*f0cbf81c2a // None // @ game+0x6370c00
	struct FHitResult K2_AddRelativeLocation(); // Function Engine.SceneComponent.K2_AddRelativeLocation // None // @ game+0x636d944
	void OnRep_AttachChildren(); // Function Engine.SceneComponent.OnRep_AttachChildren // None // @ game+0x99d020
	void *330134b8c2(); // Function Engine.SceneComponent.*330134b8c2 // None // @ game+0x636a784
	void *cb975ed8ba(); // Function Engine.SceneComponent.*cb975ed8ba // None // @ game+0x6367480
	struct FHitResult K2_SetRelativeTransform(); // Function Engine.SceneComponent.K2_SetRelativeTransform // None // @ game+0x6371008
	void *5b447b62b7(bool bNewAbsoluteRotation); // Function Engine.SceneComponent.*5b447b62b7 // None // @ game+0x6376b58
	struct FName *a27f6d4764(); // Function Engine.SceneComponent.*a27f6d4764 // None // @ game+0x636a94c
	bool *287e49cc7e(); // Function Engine.SceneComponent.*287e49cc7e // None // @ game+0x637a670
	void *6f297235ba(); // Function Engine.SceneComponent.*6f297235ba // None // @ game+0x636a57c
	void IsVisible(); // Function Engine.SceneComponent.IsVisible // None // @ game+0x636c698
	void *bb79d1adbb(); // Function Engine.SceneComponent.*bb79d1adbb // None // @ game+0x636a210
	enum class EAttachLocation K2_AttachTo(bool bWeldSimulatedBodies); // Function Engine.SceneComponent.K2_AttachTo // None // @ game+0x636e5b8
	void K2_SetWorldLocation(struct FVector NewLocation, struct FHitResult SweepHitResult); // Function Engine.SceneComponent.K2_SetWorldLocation // None // @ game+0x6371234
	void *709ad87786(); // Function Engine.SceneComponent.*709ad87786 // None // @ game+0x6365764
	struct FName *716c958ce4(enum class *5515701312 TransformSpace); // Function Engine.SceneComponent.*716c958ce4 // None // @ game+0x636ab6c
	void OnRep_AttachParent(); // Function Engine.SceneComponent.OnRep_AttachParent // None // @ game+0xbd36f4
	void OnRep_AttachSocketName(); // Function Engine.SceneComponent.OnRep_AttachSocketName // None // @ game+0xbd36f4
	struct FHitResult K2_AddRelativeRotation(); // Function Engine.SceneComponent.K2_AddRelativeRotation // None // @ game+0x636db10
	void *77cf8156db(struct FName InSocketName); // Function Engine.SceneComponent.*77cf8156db // None // @ game+0x636aab4
	void *c786340f98(); // Function Engine.SceneComponent.*c786340f98 // None // @ game+0x56c1d5c
	void OnRep_Transform(); // Function Engine.SceneComponent.OnRep_Transform // None // @ game+0xb6f418
	void *8686c19d5c(); // Function Engine.SceneComponent.*8686c19d5c // None // @ game+0x636a7f0
	struct USceneComponent* *e13072354b(struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule ScaleRule); // Function Engine.SceneComponent.*e13072354b // None // @ game+0x636e958
	void ToggleVisibility(); // Function Engine.SceneComponent.ToggleVisibility // None // @ game+0x637ebf4
	struct FName *45081e78dc(); // Function Engine.SceneComponent.*45081e78dc // None // @ game+0x636aa04
	void *4883fee90d(); // Function Engine.SceneComponent.*4883fee90d // None // @ game+0x636f420
};

// Class Engine.ExponentialHeightFogComponent
// Size: 0x580 (Inherited: 0x4c0)
struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; // 0x4c0(0x04)
	struct FLinearColor FogInscatteringColor; // 0x4c4(0x10)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct TArray<struct F*22fe4d4845> HeightDensityLayers; // 0x4d8(0x10)
	struct UTextureCube* InscatteringColorCubemap; // 0x4e8(0x08)
	float InscatteringColorCubemapAngle; // 0x4f0(0x04)
	struct FLinearColor InscatteringTextureTint; // 0x4f4(0x10)
	float FullyDirectionalInscatteringColorDistance; // 0x504(0x04)
	float NonDirectionalInscatteringColorDistance; // 0x508(0x04)
	float DirectionalInscatteringExponent; // 0x50c(0x04)
	float DirectionalInscatteringStartDistance; // 0x510(0x04)
	struct FLinearColor DirectionalInscatteringColor; // 0x514(0x10)
	float FogHeightFalloff; // 0x524(0x04)
	float FogMaxOpacity; // 0x528(0x04)
	float StartDistance; // 0x52c(0x04)
	float FogCutoffDistance; // 0x530(0x04)
	bool bEnableVolumetricFog; // 0x534(0x01)
	char pad_535[0x3]; // 0x535(0x03)
	float VolumetricFogScatteringDistribution; // 0x538(0x04)
	struct FColor VolumetricFogAlbedo; // 0x53c(0x04)
	struct FLinearColor VolumetricFogEmissive; // 0x540(0x10)
	float VolumetricFogExtinctionScale; // 0x550(0x04)
	float VolumetricFogDistance; // 0x554(0x04)
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x558(0x01)
	bool bUseExtendedFog; // 0x559(0x01)
	char pad_55A[0x2]; // 0x55a(0x02)
	float ExtendedFogStartDistance; // 0x55c(0x04)
	float ExtendedFogStartFalloffDistance; // 0x560(0x04)
	float ExtendedHeight; // 0x564(0x04)
	float ExtendedFallOff; // 0x568(0x04)
	float ExtendedFogDensity; // 0x56c(0x04)
	float UpDensity; // 0x570(0x04)
	float DownDensity; // 0x574(0x04)
	float Intensity; // 0x578(0x04)
	bool bUseAtmosphereScattering; // 0x57c(0x01)
	char pad_57D[0x3]; // 0x57d(0x03)

	void *ca2c6ce97a(); // Function Engine.ExponentialHeightFogComponent.*ca2c6ce97a // None // @ game+0x63c61b4
	void *84655b8f8a(); // Function Engine.ExponentialHeightFogComponent.*84655b8f8a // None // @ game+0x63c5930
	void *0b8f11951b(); // Function Engine.ExponentialHeightFogComponent.*0b8f11951b // None // @ game+0x63ce20c
	void *d2b8e8de6a(); // Function Engine.ExponentialHeightFogComponent.*d2b8e8de6a // None // @ game+0x63c5b34
	void *5ab1142897(); // Function Engine.ExponentialHeightFogComponent.*5ab1142897 // None // @ game+0x63c4854
	void *6ea8586081(); // Function Engine.ExponentialHeightFogComponent.*6ea8586081 // None // @ game+0x63cef0c
	void *828c4a331a(); // Function Engine.ExponentialHeightFogComponent.*828c4a331a // None // @ game+0x63ceff8
	void *78c504e527(); // Function Engine.ExponentialHeightFogComponent.*78c504e527 // None // @ game+0x63c605c
	void *1a7e95478d(); // Function Engine.ExponentialHeightFogComponent.*1a7e95478d // None // @ game+0x63c6108
	void *6bb9ce0153(); // Function Engine.ExponentialHeightFogComponent.*6bb9ce0153 // None // @ game+0x63c7530
	void *15c8257b98(); // Function Engine.ExponentialHeightFogComponent.*15c8257b98 // None // @ game+0x63c4768
	void *bf13cbfd97(); // Function Engine.ExponentialHeightFogComponent.*bf13cbfd97 // None // @ game+0x63c5be0
	void *55840c330a(); // Function Engine.ExponentialHeightFogComponent.*55840c330a // None // @ game+0x63c68ec
	void SetIntensity(); // Function Engine.ExponentialHeightFogComponent.SetIntensity // None // @ game+0x63c7930
	void *561c494f49(); // Function Engine.ExponentialHeightFogComponent.*561c494f49 // None // @ game+0x63c73e0
	void *9cb24428aa(); // Function Engine.ExponentialHeightFogComponent.*9cb24428aa // None // @ game+0x63cedc4
	void *ff88f259b9(); // Function Engine.ExponentialHeightFogComponent.*ff88f259b9 // None // @ game+0x63c7484
	void *ee6f5e9774(); // Function Engine.ExponentialHeightFogComponent.*ee6f5e9774 // None // @ game+0x63c62f8
	void *6a86934360(); // Function Engine.ExponentialHeightFogComponent.*6a86934360 // None // @ game+0x63c59dc
	void *235b40669e(); // Function Engine.ExponentialHeightFogComponent.*235b40669e // None // @ game+0x63c6260
	void *c6a2988444(); // Function Engine.ExponentialHeightFogComponent.*c6a2988444 // None // @ game+0x63cf0a4
	void *5f52c731e0(); // Function Engine.ExponentialHeightFogComponent.*5f52c731e0 // None // @ game+0x63c9a60
	void *e638edd607(); // Function Engine.ExponentialHeightFogComponent.*e638edd607 // None // @ game+0x63c5a88
	void *c86d814cb9(); // Function Engine.ExponentialHeightFogComponent.*c86d814cb9 // None // @ game+0x63ced20
	void *d7268210c6(); // Function Engine.ExponentialHeightFogComponent.*d7268210c6 // None // @ game+0x63c4900
	void *f161ea0761(); // Function Engine.ExponentialHeightFogComponent.*f161ea0761 // None // @ game+0x63cee60
	void *984883a967(); // Function Engine.ExponentialHeightFogComponent.*984883a967 // None // @ game+0x63cc880
	void *0631f3959d(); // Function Engine.ExponentialHeightFogComponent.*0631f3959d // None // @ game+0x63c4bcc
};

// Class Engine.*676c05a686
// Size: 0xd0 (Inherited: 0x28)
struct U*676c05a686 : UObject {
	struct FForceFeedbackAttenuationSettings Attenuation; // 0x28(0xa8)
};

// Class Engine.ForceFeedbackComponent
// Size: 0x5a0 (Inherited: 0x4c0)
struct UForceFeedbackComponent : USceneComponent {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x4c0(0x08)
	char *2e8753955a : 1; // 0x4c8(0x01)
	char *d6fc981176 : 1; // 0x4c8(0x01)
	char bLooping : 1; // 0x4c8(0x01)
	char bOverrideAttenuation : 1; // 0x4c8(0x01)
	char pad_4C8_4 : 4; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	float IntensityMultiplier; // 0x4cc(0x04)
	struct U*676c05a686* AttenuationSettings; // 0x4d0(0x08)
	struct FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x4d8(0xa8)
	struct FMulticastDelegate OnForceFeedbackFinished; // 0x580(0x10)
	char pad_590[0x10]; // 0x590(0x10)

	void Stop(); // Function Engine.ForceFeedbackComponent.Stop // None // @ game+0x56107b4
	void *3e910ce8f1(); // Function Engine.ForceFeedbackComponent.*3e910ce8f1 // None // @ game+0x6387f88
	void *22a2af0c38(); // Function Engine.ForceFeedbackComponent.*22a2af0c38 // None // @ game+0x63c7b0c
	void AdjustAttenuation(); // Function Engine.ForceFeedbackComponent.AdjustAttenuation // None // @ game+0x63852f8
	void *eb40df9e94(); // Function Engine.ForceFeedbackComponent.*eb40df9e94 // None // @ game+0x63c6508
	void Play(); // Function Engine.ForceFeedbackComponent.Play // None // @ game+0x63b8dcc
};

// Class Engine.*23111f4fe9
// Size: 0x560 (Inherited: 0x4c0)
struct U*23111f4fe9 : USceneComponent {
	struct UMaterialInterface* DecalMaterial; // 0x4c0(0x08)
	bool KeepInstanceBufferCPUAccess; // 0x4c8(0x01)
	struct F*09352ad00b DecalChannels; // 0x4c9(0x01)
	char pad_4CA[0x96]; // 0x4ca(0x96)

	void *5ef8202fe7(); // Function Engine.*23111f4fe9.*5ef8202fe7 // None // @ game+0x639e6cc
	void CreateDynamicMaterialInstance(); // Function Engine.*23111f4fe9.CreateDynamicMaterialInstance // None // @ game+0x63934b4
	void *e5a6406b5b(); // Function Engine.*23111f4fe9.*e5a6406b5b // None // @ game+0x63c41f0
};

// Class Engine.*611beb24ff
// Size: 0x530 (Inherited: 0x4c0)
struct U*611beb24ff : USceneComponent {
	bool UseDynamicInstanceBuffer; // 0x4c0(0x01)
	bool KeepInstanceBufferCPUAccess; // 0x4c1(0x01)
	char pad_4C2[0x6]; // 0x4c2(0x06)
	struct TArray<struct F*56ae635e0d> PerInstanceDecalData; // 0x4c8(0x10)
	struct UStaticMesh* StaticMesh; // 0x4d8(0x08)
	struct UMaterialInterface* DecalMaterial; // 0x4e0(0x08)
	char pad_4E8[0x48]; // 0x4e8(0x48)

	void *95a4257f8b(); // Function Engine.*611beb24ff.*95a4257f8b // None // @ game+0x5644c98
	struct FSplineParams *028d8429ac(); // Function Engine.*611beb24ff.*028d8429ac // None // @ game+0x63839b4
	void *e5a6406b5b(); // Function Engine.*611beb24ff.*e5a6406b5b // None // @ game+0x63c428c
	void *7786d1a996(); // Function Engine.*611beb24ff.*7786d1a996 // None // @ game+0x639f188
	void *2a75f57149(); // Function Engine.*611beb24ff.*2a75f57149 // None // @ game+0x63bd6c8
	void *5ef8202fe7(); // Function Engine.*611beb24ff.*5ef8202fe7 // None // @ game+0x639e6e4
	void CreateDynamicMaterialInstance(); // Function Engine.*611beb24ff.CreateDynamicMaterialInstance // None // @ game+0x63934dc
	struct UStaticMesh* SetStaticMesh(); // Function Engine.*611beb24ff.SetStaticMesh // None // @ game+0x63cce20
	void OnRep_StaticMesh(); // Function Engine.*611beb24ff.OnRep_StaticMesh // None // @ game+0x63b80dc
	struct FSplineParams *a984b9a9ce(); // Function Engine.*611beb24ff.*a984b9a9ce // None // @ game+0x6383dfc
};

// Class Engine.*d3fa1ca322
// Size: 0x30 (Inherited: 0x30)
struct U*d3fa1ca322 : UDataAsset {
	struct UClass* *d62375829a; // 0x28(0x08)
};

// Class Engine.LevelBlockType
// Size: 0x58 (Inherited: 0x30)
struct ULevelBlockType : UDataAsset {
	enum class ESpawnPointRollType *3989035db7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct F*feddb3650a> Variants; // 0x38(0x10)
	struct TArray<struct F*24ee776f52> *c4fea64397; // 0x48(0x10)
};

// Class Engine.*fe01a1312a
// Size: 0x4d0 (Inherited: 0x4c0)
struct U*fe01a1312a : USceneComponent {
	struct ULevelBlockType* LevelBlockType; // 0x4c0(0x08)
	bool *14ebdf2b40; // 0x4c8(0x01)
	enum class EPreviewIndexType *b84d7a9ba9; // 0x4c9(0x01)
	char pad_4CA[0x2]; // 0x4ca(0x02)
	int32 *3db831a6c6; // 0x4cc(0x04)
};

// Class Engine.LightComponentBase
// Size: 0x4f0 (Inherited: 0x4c0)
struct ULightComponentBase : USceneComponent {
	struct FGuid *1b62b9fe46; // 0x4c0(0x10)
	float Brightness; // 0x4d0(0x04)
	float Intensity; // 0x4d4(0x04)
	struct FColor LightColor; // 0x4d8(0x04)
	char bAffectsWorld : 1; // 0x4dc(0x01)
	char CastShadows : 1; // 0x4dc(0x01)
	char CastStaticShadows : 1; // 0x4dc(0x01)
	char CastDynamicShadows : 1; // 0x4dc(0x01)
	char bAffectTranslucentLighting : 1; // 0x4dc(0x01)
	char bCastVolumetricShadow : 1; // 0x4dc(0x01)
	char pad_4DC_6 : 2; // 0x4dc(0x01)
	char pad_4DD[0x3]; // 0x4dd(0x03)
	float IndirectLightingIntensity; // 0x4e0(0x04)
	float VolumetricScatteringIntensity; // 0x4e4(0x04)
	bool *8ff0181bcd; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)

	void *fc39c3eb5f(); // Function Engine.LightComponentBase.*fc39c3eb5f // None // @ game+0x63a1acc
	void *4c8a691dc8(); // Function Engine.LightComponentBase.*4c8a691dc8 // None // @ game+0x63c2ed0
	void *2754dcd2c9(); // Function Engine.LightComponentBase.*2754dcd2c9 // None // @ game+0x63c2e3c
};

// Class Engine.LightComponent
// Size: 0x5e0 (Inherited: 0x4f0)
struct ULightComponent : ULightComponentBase {
	float Temperature; // 0x4f0(0x04)
	float MaxDrawDistance; // 0x4f4(0x04)
	float *e7a4eb8e90; // 0x4f8(0x04)
	char bUseTemperature : 1; // 0x4fc(0x01)
	char pad_4FC_1 : 7; // 0x4fc(0x01)
	char pad_4FD[0x3]; // 0x4fd(0x03)
	int32 ShadowMapChannel; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	float MinRoughness; // 0x508(0x04)
	float ShadowResolutionScale; // 0x50c(0x04)
	float ShadowBias; // 0x510(0x04)
	float ShadowSharpen; // 0x514(0x04)
	float ContactShadowLength; // 0x518(0x04)
	char InverseSquaredFalloff : 1; // 0x51c(0x01)
	char CastTranslucentShadows : 1; // 0x51c(0x01)
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x51c(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x51c(0x01)
	char pad_51C_4 : 4; // 0x51c(0x01)
	char pad_51D[0x3]; // 0x51d(0x03)
	struct FLightingChannels LightingChannels; // 0x520(0x03)
	char pad_523[0x5]; // 0x523(0x05)
	struct UMaterialInterface* LightFunctionMaterial; // 0x528(0x08)
	struct FVector LightFunctionScale; // 0x530(0x0c)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct U*b63877ce42* IESTexture; // 0x540(0x08)
	char bUseIESBrightness : 1; // 0x548(0x01)
	char pad_548_1 : 7; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	float IESBrightnessScale; // 0x54c(0x04)
	float LightFunctionFadeDistance; // 0x550(0x04)
	float DisabledBrightness; // 0x554(0x04)
	char bEnableLightShaftBloom : 1; // 0x558(0x01)
	char pad_558_1 : 7; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	float BloomScale; // 0x55c(0x04)
	float BloomThreshold; // 0x560(0x04)
	struct FColor BloomTint; // 0x564(0x04)
	bool bUseRayTracedDistanceFieldShadows; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	float RayStartOffsetDepthScale; // 0x56c(0x04)
	char pad_570[0x70]; // 0x570(0x70)

	void *b21589b6db(); // Function Engine.LightComponent.*b21589b6db // None // @ game+0x63c820c
	void *3884be81c6(); // Function Engine.LightComponent.*3884be81c6 // None // @ game+0x63c182c
	void *03c68eba20(); // Function Engine.LightComponent.*03c68eba20 // None // @ game+0x63c804c
	void *18fc77f460(); // Function Engine.LightComponent.*18fc77f460 // None // @ game+0x63c16fc
	void *4f9245bf81(); // Function Engine.LightComponent.*4f9245bf81 // None // @ game+0x63c1794
	void *22316da662(); // Function Engine.LightComponent.*22316da662 // None // @ game+0x63bf6e8
	void *9202409e75(); // Function Engine.LightComponent.*9202409e75 // None // @ game+0x63c5210
	void *c2ca621058(); // Function Engine.LightComponent.*c2ca621058 // None // @ game+0x63c817c
	void *f706a38288(); // Function Engine.LightComponent.*f706a38288 // None // @ game+0x63bf618
	void *15cc30e505(); // Function Engine.LightComponent.*15cc30e505 // None // @ game+0x63c70cc
	void *3a0fe26cd5(); // Function Engine.LightComponent.*3a0fe26cd5 // None // @ game+0x63c80e4
	void *42bfac96e0(); // Function Engine.LightComponent.*42bfac96e0 // None // @ game+0x63c7218
	void SetIntensity(); // Function Engine.LightComponent.SetIntensity // None // @ game+0x63c79dc
	void *019843ccd3(); // Function Engine.LightComponent.*019843ccd3 // None // @ game+0x63cf150
	void *2a0a6fe701(); // Function Engine.LightComponent.*2a0a6fe701 // None // @ game+0x63cd9b0
	void *9f60627cae(); // Function Engine.LightComponent.*9f60627cae // None // @ game+0x63c7df8
};

// Class Engine.DirectionalLightComponent
// Size: 0x660 (Inherited: 0x5e0)
struct UDirectionalLightComponent : ULightComponent {
	char bEnableLightShaftOcclusion : 1; // 0x5e0(0x01)
	char pad_5E0_1 : 7; // 0x5e0(0x01)
	char pad_5E1[0x3]; // 0x5e1(0x03)
	float OcclusionMaskDarkness; // 0x5e4(0x04)
	float OcclusionDepthRange; // 0x5e8(0x04)
	struct FVector LightShaftOverrideDirection; // 0x5ec(0x0c)
	float WholeSceneDynamicShadowRadius; // 0x5f8(0x04)
	float DynamicShadowDistanceMovableLight; // 0x5fc(0x04)
	float DynamicShadowDistanceStationaryLight; // 0x600(0x04)
	int32 DynamicShadowCascades; // 0x604(0x04)
	float CascadeDistributionExponent; // 0x608(0x04)
	float CascadeTransitionFraction; // 0x60c(0x04)
	float ShadowDistanceFadeoutFraction; // 0x610(0x04)
	char bUseInsetShadowsForMovableObjects : 1; // 0x614(0x01)
	char pad_614_1 : 7; // 0x614(0x01)
	char pad_615[0x3]; // 0x615(0x03)
	int32 FarShadowCascadeCount; // 0x618(0x04)
	float FarShadowDistance; // 0x61c(0x04)
	float DistanceFieldShadowDistance; // 0x620(0x04)
	float LightSourceAngle; // 0x624(0x04)
	float TraceDistance; // 0x628(0x04)
	struct F*5257c413f1 LightmassSettings; // 0x62c(0x10)
	char bCastModulatedShadows : 1; // 0x63c(0x01)
	char pad_63C_1 : 7; // 0x63c(0x01)
	char pad_63D[0x3]; // 0x63d(0x03)
	struct FColor ModulatedShadowColor; // 0x640(0x04)
	char bUsedAsAtmosphereSunLight : 1; // 0x644(0x01)
	char bUseGridShadow : 1; // 0x644(0x01)
	char pad_644_2 : 6; // 0x644(0x01)
	char pad_645[0x3]; // 0x645(0x03)
	struct TArray<struct F*0cc15d87bf> GridShadowSplitSettings; // 0x648(0x10)
	char pad_658[0x8]; // 0x658(0x08)

	void *b1c31bf504(); // Function Engine.DirectionalLightComponent.*b1c31bf504 // None // @ game+0x63c2b7c
	void *1433186171(); // Function Engine.DirectionalLightComponent.*1433186171 // None // @ game+0x63c4d14
	void *51e1a0412a(); // Function Engine.DirectionalLightComponent.*51e1a0412a // None // @ game+0x63c4db4
	void *05392cb4ed(); // Function Engine.DirectionalLightComponent.*05392cb4ed // None // @ game+0x63c2c28
	void *d064d94619(); // Function Engine.DirectionalLightComponent.*d064d94619 // None // @ game+0x63c4e60
	void *18903c7f0e(); // Function Engine.DirectionalLightComponent.*18903c7f0e // None // @ game+0x63c52d8
	void *601112413a(); // Function Engine.DirectionalLightComponent.*601112413a // None // @ game+0x63cb720
	void *9730da13e9(); // Function Engine.DirectionalLightComponent.*9730da13e9 // None // @ game+0x63c82ac
	void *0a2484197c(); // Function Engine.DirectionalLightComponent.*0a2484197c // None // @ game+0x63c9d74
};

// Class Engine.PointLightComponent
// Size: 0x610 (Inherited: 0x5e0)
struct UPointLightComponent : ULightComponent {
	float Radius; // 0x5e0(0x04)
	float AttenuationRadius; // 0x5e4(0x04)
	char bUseInverseSquaredFalloff : 1; // 0x5e8(0x01)
	char pad_5E8_1 : 7; // 0x5e8(0x01)
	char pad_5E9[0x3]; // 0x5e9(0x03)
	float LightFalloffExponent; // 0x5ec(0x04)
	float SourceRadius; // 0x5f0(0x04)
	float SourceLength; // 0x5f4(0x04)
	struct F*e2c22c44c3 LightmassSettings; // 0x5f8(0x0c)
	char pad_604[0xc]; // 0x604(0x0c)

	void *6d22a703f6(); // Function Engine.PointLightComponent.*6d22a703f6 // None // @ game+0x63c7fb4
	void *769f31cfdc(); // Function Engine.PointLightComponent.*769f31cfdc // None // @ game+0x63cbde0
	void SetAttenuationRadius(); // Function Engine.PointLightComponent.SetAttenuationRadius // None // @ game+0x63c1418
	void *77d533bc3a(); // Function Engine.PointLightComponent.*77d533bc3a // None // @ game+0x63cbe78
};

// Class Engine.SpotLightComponent
// Size: 0x620 (Inherited: 0x610)
struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x608(0x04)
	float OuterConeAngle; // 0x60c(0x04)
	float *b1cbf4dcff; // 0x610(0x04)
	char pad_61C[0x4]; // 0x61c(0x04)

	void *a41703425a(); // Function Engine.SpotLightComponent.*a41703425a // None // @ game+0x63c7348
	void *88580bae0d(); // Function Engine.SpotLightComponent.*88580bae0d // None // @ game+0x63ca1c0
};

// Class Engine.SkyLightComponent
// Size: 0x6a0 (Inherited: 0x4f0)
struct USkyLightComponent : ULightComponentBase {
	enum class *c7ef9ae059 SourceType; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct UTextureCube* Cubemap; // 0x4f8(0x08)
	float SourceCubemapAngle; // 0x500(0x04)
	int32 CubemapResolution; // 0x504(0x04)
	float SkyDistanceThreshold; // 0x508(0x04)
	bool bCaptureEmissiveOnly; // 0x50c(0x01)
	bool bLowerHemisphereIsBlack; // 0x50d(0x01)
	char pad_50E[0x2]; // 0x50e(0x02)
	struct FLinearColor LowerHemisphereColor; // 0x510(0x10)
	float OcclusionMaxDistance; // 0x520(0x04)
	float Contrast; // 0x524(0x04)
	float OcclusionExponent; // 0x528(0x04)
	float MinOcclusion; // 0x52c(0x04)
	struct FColor OcclusionTint; // 0x530(0x04)
	enum class *efcdbf70d1 OcclusionCombineMode; // 0x534(0x01)
	char pad_535[0xa3]; // 0x535(0xa3)
	struct UTextureCube* *17e49282c0; // 0x5d8(0x08)
	char pad_5E0[0xc0]; // 0x5e0(0xc0)

	void *725f335b96(); // Function Engine.SkyLightComponent.*725f335b96 // None // @ game+0x63c3de4
	void *9f60627cae(); // Function Engine.SkyLightComponent.*9f60627cae // None // @ game+0x63c7eec
	void *42bfac96e0(); // Function Engine.SkyLightComponent.*42bfac96e0 // None // @ game+0x63c72b0
	void *501134db27(); // Function Engine.SkyLightComponent.*501134db27 // None // @ game+0x63bd5c4
	void *e7aed419a5(); // Function Engine.SkyLightComponent.*e7aed419a5 // None // @ game+0x63c9cdc
	void *a2352450ce(); // Function Engine.SkyLightComponent.*a2352450ce // None // @ game+0x63c9c44
	struct UTextureCube* *af8e634b2d(); // Function Engine.SkyLightComponent.*af8e634b2d // None // @ game+0x63c3ea0
	void SetIntensity(); // Function Engine.SkyLightComponent.SetIntensity // None // @ game+0x63c7a74
	void *019843ccd3(); // Function Engine.SkyLightComponent.*019843ccd3 // None // @ game+0x63cf1e8
	void *202bcba166(); // Function Engine.SkyLightComponent.*202bcba166 // None // @ game+0x63c9468
	void *3aceabb4c4(); // Function Engine.SkyLightComponent.*3aceabb4c4 // None // @ game+0x63c9e0c
};

// Class Engine.*e5ec23d71f
// Size: 0x4d0 (Inherited: 0x4c0)
struct U*e5ec23d71f : USceneComponent {
	struct UBoxComponent* *a04c6cef4b; // 0x4c0(0x08)
	char pad_4C8[0x8]; // 0x4c8(0x08)
};

// Class Engine.*a8796beffb
// Size: 0x4f0 (Inherited: 0x4c0)
struct U*a8796beffb : USceneComponent {
	struct F*ba6500be87 Node; // 0x4c0(0x18)
	struct U*a8796beffb* *741163ac67; // 0x4d8(0x08)
	struct U*a8796beffb* *4aceda5cf4; // 0x4e0(0x08)
	char pad_4E8[0x8]; // 0x4e8(0x08)
};

// Class Engine.PhysicsConstraintComponent
// Size: 0x700 (Inherited: 0x4c0)
struct UPhysicsConstraintComponent : USceneComponent {
	struct AActor* *35c8107d2b; // 0x4c0(0x08)
	struct F*9fec3d1c28 *ac0b67a613; // 0x4c8(0x08)
	struct AActor* *572abf2a37; // 0x4d0(0x08)
	struct F*9fec3d1c28 *2a1cab35c9; // 0x4d8(0x08)
	char pad_4E0[0x10]; // 0x4e0(0x10)
	struct UPhysicsConstraintTemplate* ConstraintSetup; // 0x4f0(0x08)
	struct FMulticastDelegate OnConstraintBroken; // 0x4f8(0x10)
	char pad_508[0x8]; // 0x508(0x08)
	struct FConstraintInstance ConstraintInstance; // 0x510(0x1f0)

	void *425e5d81af(); // Function Engine.PhysicsConstraintComponent.*425e5d81af // None // @ game+0x63c88ec
	void *708c7d6e4e(struct FVector PriAxis); // Function Engine.PhysicsConstraintComponent.*708c7d6e4e // None // @ game+0x63c3b48
	void *370e1608b9(); // Function Engine.PhysicsConstraintComponent.*370e1608b9 // None // @ game+0x638c42c
	void *eb2d73fd60(); // Function Engine.PhysicsConstraintComponent.*eb2d73fd60 // None // @ game+0x639de6c
	void *cfee95face(); // Function Engine.PhysicsConstraintComponent.*cfee95face // None // @ game+0x63c49ac
	void *1a54851b11(bool bEnableSwingDrive); // Function Engine.PhysicsConstraintComponent.*1a54851b11 // None // @ game+0x63c0788
	struct UPrimitiveComponent* *131d112baf(); // Function Engine.PhysicsConstraintComponent.*131d112baf // None // @ game+0x63c35ec
	bool *d1cca28288(); // Function Engine.PhysicsConstraintComponent.*d1cca28288 // None // @ game+0x63c0950
	void *572f1b7763(float PositionStrength); // Function Engine.PhysicsConstraintComponent.*572f1b7763 // None // @ game+0x63c8690
	void *ba8890b74f(); // Function Engine.PhysicsConstraintComponent.*ba8890b74f // None // @ game+0x63c0278
	void *e4dca5022c(); // Function Engine.PhysicsConstraintComponent.*e4dca5022c // None // @ game+0x63c9ecc
	float *e6a59e245f(float VelocityStrength); // Function Engine.PhysicsConstraintComponent.*e6a59e245f // None // @ game+0x63bffd4
	void *d6b18ed128(); // Function Engine.PhysicsConstraintComponent.*d6b18ed128 // None // @ game+0x639dea0
	enum class *b5888d5fa8 *035489ce50(); // Function Engine.PhysicsConstraintComponent.*035489ce50 // None // @ game+0x63c04ac
	void *2677fbc364(); // Function Engine.PhysicsConstraintComponent.*2677fbc364 // None // @ game+0x63c8bdc
	void *3974017caa(); // Function Engine.PhysicsConstraintComponent.*3974017caa // None // @ game+0x63c036c
	void *72f39068b2(bool bEnableDriveX); // Function Engine.PhysicsConstraintComponent.*72f39068b2 // None // @ game+0x63c8aa4
	bool *3ae68ba0fc(); // Function Engine.PhysicsConstraintComponent.*3ae68ba0fc // None // @ game+0x63c87b4
	void *b68202cbe8(); // Function Engine.PhysicsConstraintComponent.*b68202cbe8 // None // @ game+0x63c087c
	void *ff59413164(enum class *d4f3ed8c24 ConstraintType); // Function Engine.PhysicsConstraintComponent.*ff59413164 // None // @ game+0x63c8de4
	void *432fcf33f0(); // Function Engine.PhysicsConstraintComponent.*432fcf33f0 // None // @ game+0x63c3a14
	void *6d5610fd63(); // Function Engine.PhysicsConstraintComponent.*6d5610fd63 // None // @ game+0x63c0a44
	enum class *b5888d5fa8 *ce4ed0cd83(); // Function Engine.PhysicsConstraintComponent.*ce4ed0cd83 // None // @ game+0x63c05a0
	void *08befd12c6(); // Function Engine.PhysicsConstraintComponent.*08befd12c6 // None // @ game+0x63c8cf0
	bool *18791ddfd8(); // Function Engine.PhysicsConstraintComponent.*18791ddfd8 // None // @ game+0x63c9f9c
	enum class *b5888d5fa8 *1de68540e8(); // Function Engine.PhysicsConstraintComponent.*1de68540e8 // None // @ game+0x63c0694
	void *4febb9026a(); // Function Engine.PhysicsConstraintComponent.*4febb9026a // None // @ game+0x63c8ed8
	void *7de97efbeb(); // Function Engine.PhysicsConstraintComponent.*7de97efbeb // None // @ game+0x639de38
	enum class *e43f4aa9f8 *b04b60caca(); // Function Engine.PhysicsConstraintComponent.*b04b60caca // None // @ game+0x63c3c98
	struct FVector *0ff411d931(); // Function Engine.PhysicsConstraintComponent.*0ff411d931 // None // @ game+0x639d6fc
	void *2f229ed86e(); // Function Engine.PhysicsConstraintComponent.*2f229ed86e // None // @ game+0x63bff0c
};

// Class Engine.*b82d9a729f
// Size: 0x4f0 (Inherited: 0x4c0)
struct U*b82d9a729f : USceneComponent {
	float SpringStiffness; // 0x4c0(0x04)
	float SpringDamping; // 0x4c4(0x04)
	float SpringLengthAtRest; // 0x4c8(0x04)
	float SpringRadius; // 0x4cc(0x04)
	enum class ECollisionChannel SpringChannel; // 0x4d0(0x01)
	bool bIgnoreSelf; // 0x4d1(0x01)
	char pad_4D2[0x2]; // 0x4d2(0x02)
	float SpringCompression; // 0x4d4(0x04)
	char pad_4D8[0x18]; // 0x4d8(0x18)

	void *b93f5f0d8c(); // Function Engine.*b82d9a729f.*b93f5f0d8c // None // @ game+0x63a526c
	void *d2cedcae53(); // Function Engine.*b82d9a729f.*d2cedcae53 // None // @ game+0x63a523c
	void *72c09ee616(); // Function Engine.*b82d9a729f.*72c09ee616 // None // @ game+0x63a2638
	void *1f91f8670f(); // Function Engine.*b82d9a729f.*1f91f8670f // None // @ game+0x63a5208
};

// Class Engine.PhysicsThrusterComponent
// Size: 0x4d0 (Inherited: 0x4c0)
struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x4c0(0x04)
	char pad_4C4[0xc]; // 0x4c4(0x0c)
};

// Class Engine.PostProcessComponent
// Size: 0xa50 (Inherited: 0x4c0)
struct UPostProcessComponent : USceneComponent {
	char pad_4C0[0x10]; // 0x4c0(0x10)
	struct FPostProcessSettings Settings; // 0x4d0(0x570)
	float Priority; // 0xa40(0x04)
	float BlendRadius; // 0xa44(0x04)
	float BlendWeight; // 0xa48(0x04)
	char bEnabled : 1; // 0xa4c(0x01)
	char bUnbound : 1; // 0xa4c(0x01)
	char pad_A4C_2 : 6; // 0xa4c(0x01)
	char pad_A4D[0x3]; // 0xa4d(0x03)

	TScriptInterface<struct UBlendableInterface> *ecceb55aba(); // Function Engine.PostProcessComponent.*ecceb55aba // None // @ game+0x63843ec
};

// Class Engine.BrushComponent
// Size: 0xa10 (Inherited: 0x9f0)
struct UBrushComponent : UPrimitiveComponent {
	struct UModel* Brush; // 0x9e8(0x08)
	struct UBodySetup* BrushBodySetup; // 0x9f0(0x08)
	struct FVector PrePivot; // 0x9f8(0x0c)
	char pad_A0C[0x4]; // 0xa0c(0x04)
};

// Class Engine.*33a93474c7
// Size: 0xa20 (Inherited: 0x9f0)
struct U*33a93474c7 : UPrimitiveComponent {
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x9f0(0x10)
	struct TArray<struct F*8558347a38> *1bb4efe87c; // 0xa00(0x10)
	struct UBodySetup* BodySetup; // 0xa10(0x08)
	char pad_A18[0x8]; // 0xa18(0x08)
};

// Class Engine.*7516137630
// Size: 0xa10 (Inherited: 0x9f0)
struct U*7516137630 : UPrimitiveComponent {
	struct FColor FrustumColor; // 0x9e8(0x04)
	float FrustumAngle; // 0x9ec(0x04)
	float FrustumAspectRatio; // 0x9f0(0x04)
	float FrustumStartDist; // 0x9f4(0x04)
	float FrustumEndDist; // 0x9f8(0x04)
	struct UTexture* Texture; // 0xa00(0x08)
	char pad_A0C[0x4]; // 0xa0c(0x04)
};

// Class Engine.*1ee70631d9
// Size: 0xa00 (Inherited: 0x9f0)
struct U*1ee70631d9 : UPrimitiveComponent {
	struct TArray<struct FVector2D> Points; // 0x9e8(0x10)
};

// Class Engine.GrassVolumeComponent
// Size: 0xa20 (Inherited: 0xa20)
struct UGrassVolumeComponent : UBoxComponent {
	struct FVector BoxExtent; // 0xa08(0x0c)

	void *98e9dedda9(); // Function Engine.BoxComponent.*98e9dedda9 // None // @ game+0x63a4b04
	void *0f9344886a(); // Function Engine.BoxComponent.*0f9344886a // None // @ game+0x63a6e84
	struct FVector *47e32f31b3(); // Function Engine.BoxComponent.*47e32f31b3 // None // @ game+0x63c2524
};

// Class Engine.GrassVolumesContainerComponent
// Size: 0xa00 (Inherited: 0x9f0)
struct UGrassVolumesContainerComponent : UPrimitiveComponent {
	struct TArray<struct F*3f1ec42700> *0cab476336; // 0x9e8(0x10)
};

// Class Engine.*5c7832fd96
// Size: 0xa40 (Inherited: 0x9f0)
struct U*5c7832fd96 : UPrimitiveComponent {
	struct ALandscape* *7ebbb3ad89; // 0x9e8(0x1c)
	struct ALandscape* *8ed8c5b3b2; // 0xa04(0x1c)
	struct UTexture2D* *444dd6e00f; // 0xa20(0x08)
	struct FVector2D Extent; // 0xa28(0x08)
	struct FIntPoint *7f65cf71fa; // 0xa30(0x08)
	char *65f51e30f6 : 1; // 0xa38(0x01)
	char *165d2a4d50 : 1; // 0xa38(0x01)
	char *cc1157a8e7 : 1; // 0xa38(0x01)
	char *f5d55e540e : 1; // 0xa38(0x01)
};

// Class Engine.*d7f53fe8ac
// Size: 0xa30 (Inherited: 0x9f0)
struct U*d7f53fe8ac : UPrimitiveComponent {
	float MinDrawDistance; // 0x4c8(0x04)
	float LDMaxDrawDistance; // 0x4cc(0x04)
	float CachedMaxDrawDistance; // 0x4d0(0x04)
	enum class *3c659ab94c *7512e3d028; // 0x4d4(0x01)
	enum class *3c659ab94c *d9fcd9b4bb; // 0x4d5(0x01)
	char pad_9FE_0 : 3; // 0x9fe(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x4d8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4d8(0x01)
	char bMultiBodyOverlap : 1; // 0x4d8(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x4d8(0x01)
	char bTraceComplexOnMove : 1; // 0x4d8(0x01)
	char bDisableForceFromCharacter : 1; // 0x4d9(0x01)
	char bReturnMaterialOnMove : 1; // 0x4d9(0x01)
	char *3e4d34552d : 1; // 0x4d9(0x01)
	char bAllowCullDistanceVolume : 1; // 0x4d9(0x01)
	char bImportantMesh : 1; // 0x4d9(0x01)
	char bOverrideCullingDistances : 1; // 0x4d9(0x01)
	float HLODScreenSize; // 0x4dc(0x04)
	char *2f091bbd0e : 1; // 0x4e0(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x4e0(0x01)
	char bRenderInMainPass : 1; // 0x4e0(0x01)
	char bRenderInMono : 1; // 0x4e0(0x01)
	char bOwnerNoSee : 1; // 0x4e0(0x01)
	char bOnlyOwnerSee : 1; // 0x4e0(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x4e0(0x01)
	char bUseAsOccluder : 1; // 0x4e0(0x01)
	char bForceAsOccluder : 1; // 0x4e1(0x01)
	char bForceOcclusionQuerying : 1; // 0x4e1(0x01)
	char bForceDisableOcclusionQuerying : 1; // 0x4e1(0x01)
	char *afd92d8969 : 1; // 0x4e1(0x01)
	char bForceMipStreaming : 1; // 0x4e1(0x01)
	char *4c581fbba9 : 1; // 0x4e1(0x01)
	char CastShadow : 1; // 0x4e1(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x4e2(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x4e2(0x01)
	char bCastDynamicShadow : 1; // 0x4e2(0x01)
	char bCastStaticShadow : 1; // 0x4e2(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x4e2(0x01)
	char bSelfShadowOnly : 1; // 0x4e2(0x01)
	char bCastFarShadow : 1; // 0x4e2(0x01)
	char bCastInsetShadow : 1; // 0x4e2(0x01)
	char bCastCinematicShadow : 1; // 0x4e3(0x01)
	char bCastHiddenShadow : 1; // 0x4e3(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e3(0x01)
	char bLightAsIfStatic : 1; // 0x4e3(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x4e3(0x01)
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x4e3(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x4e3(0x01)
	char bIgnoreRadialImpulse : 1; // 0x4e3(0x01)
	char bIgnoreRadialForce : 1; // 0x4e4(0x01)
	char bApplyImpulseOnDamage : 1; // 0x4e4(0x01)
	char bSyncBodySleep : 1; // 0x4e4(0x01)
	char *27b0806be5 : 1; // 0x4e4(0x01)
	char *6f3b773115 : 1; // 0x4e4(0x01)
	char *b11801b90d : 1; // 0x4e4(0x01)
	char bRenderCustomDepth : 1; // 0x4e4(0x01)
	char *668636af81 : 1; // 0x4e5(0x01)
	char *b3a3eee86b : 1; // 0x4e6(0x01)
	char *07830a14a6 : 1; // 0x4e6(0x01)
	enum class EDecalChannel DecalChannel; // 0x4e8(0x01)
	enum class *c0765ad24b IndoorOutdoorMask; // 0x4e9(0x01)
	struct FLightingChannels LightingChannels; // 0x4ea(0x03)
	enum class *d315e71b47 IndirectLightingCacheQuality; // 0x4ed(0x01)
	bool CustomDepthStencilValue; // 0x4ee(0x01)
	enum class *6e131cfc7f CustomDepthStencilWriteMask; // 0x4ef(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x4f0(0x10)
	int32 TranslucencySortPriority; // 0x500(0x04)
	int32 *6862844184; // 0x504(0x04)
	float LpvBiasMultiplier; // 0x50c(0x04)
	struct FBodyInstance BodyInstance; // 0x510(0x230)
	enum class EHasCustomNavigableGeometry *9a13a32dd1; // 0x748(0x01)
	float BoundsScale; // 0x784(0x04)
	float *aa675c3c9f; // 0x788(0x04)
	float *8aba3be418; // 0x78c(0x04)
	float *69906a8560; // 0x790(0x04)
	enum class *ed39c8987e CanBeCharacterBase; // 0x794(0x01)
	enum class *ed39c8987e CanCharacterStepUpOn; // 0x796(0x01)
	struct TArray<struct AActor*> *5559023e99; // 0x798(0x10)
	struct TArray<struct UPrimitiveComponent*> *34f682ee35; // 0x7a8(0x10)
	struct FMulticastDelegate OnComponentHit; // 0x870(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x880(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x890(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x8a0(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x8b0(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x8d0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x8e0(0x10)
	struct FMulticastDelegate OnClicked; // 0x8f0(0x10)
	struct FMulticastDelegate OnReleased; // 0x900(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x910(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x920(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x930(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x940(0x10)
	struct UPrimitiveComponent* *afbfc200cf; // 0x978(0x08)
	struct UPrimitiveComponent* *c423c7f1c7; // 0x980(0x08)
	struct F*1d83c9bd93 *605bfc3d64; // 0x988(0x58)

	struct FVector AddForceAtLocation(); // Function Engine.PrimitiveComponent.AddForceAtLocation // None // @ game+0x635ca48
	void GetMass(); // Function Engine.PrimitiveComponent.GetMass // None // @ game+0x63690c0
	void *3f4951ae21(); // Function Engine.PrimitiveComponent.*3f4951ae21 // None // @ game+0x637ae1c
	void *aa442ff688(); // Function Engine.PrimitiveComponent.*aa442ff688 // None // @ game+0x636bf24
	enum class *d6dc0510f4 *2acabdc4bc(); // Function Engine.PrimitiveComponent.*2acabdc4bc // None // @ game+0x635d7e8
	void *dfb097147a(); // Function Engine.PrimitiveComponent.*dfb097147a // None // @ game+0x8a8688
	void *1d5b572e97(); // Function Engine.PrimitiveComponent.*1d5b572e97 // None // @ game+0x636f7ec
	struct AActor* *58360a298b(); // Function Engine.PrimitiveComponent.*58360a298b // None // @ game+0x636c2bc
	struct UMaterialInterface* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // None // @ game+0x6362104
	void *155e776c01(enum class ECollisionChannel Channel); // Function Engine.PrimitiveComponent.*155e776c01 // None // @ game+0x6366944
	enum class *d6dc0510f4 *776b623f1e(); // Function Engine.PrimitiveComponent.*776b623f1e // None // @ game+0x635d9bc
	void *401e8be8c9(); // Function Engine.PrimitiveComponent.*401e8be8c9 // None // @ game+0x636f81c
	void *6c17800325(); // Function Engine.PrimitiveComponent.*6c17800325 // None // @ game+0x6378f74
	void *1060cf1432(); // Function Engine.PrimitiveComponent.*1060cf1432 // None // @ game+0x63797a8
	void *733d8ffdab(); // Function Engine.PrimitiveComponent.*733d8ffdab // None // @ game+0x637bb54
	void *c09d067d0f(); // Function Engine.PrimitiveComponent.*c09d067d0f // None // @ game+0x637c3f0
	void *dfc478eaef(); // Function Engine.PrimitiveComponent.*dfc478eaef // None // @ game+0x636b5b4
	void *d70adb1efd(float MassInKg); // Function Engine.PrimitiveComponent.*d70adb1efd // None // @ game+0x637b08c
	struct FVector K2_LineTraceComponent(struct FName BoneName); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // None // @ game+0x636f850
	void *8f296e8ac0(); // Function Engine.PrimitiveComponent.*8f296e8ac0 // None // @ game+0x637b9f8
	void *3579dd87c5(); // Function Engine.PrimitiveComponent.*3579dd87c5 // None // @ game+0x636ba90
	int32 *c513e9cfca(); // Function Engine.PrimitiveComponent.*c513e9cfca // None // @ game+0x6369250
	void CreateAndSetMaterialInstanceDynamic(bool bConcurrent); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // None // @ game+0x6362014
	void SetMassScale(); // Function Engine.PrimitiveComponent.SetMassScale // None // @ game+0x568247c
	int32 *c602cc5bf9(); // Function Engine.PrimitiveComponent.*c602cc5bf9 // None // @ game+0x63691ac
	void *6f5a420568(); // Function Engine.PrimitiveComponent.*6f5a420568 // None // @ game+0x637c518
	void *4179761c58(); // Function Engine.PrimitiveComponent.*4179761c58 // None // @ game+0x635e5f4
	struct UMaterialInterface* SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // None // @ game+0xb512e8
	struct FName GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // None // @ game+0x636a394
	void CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // None // @ game+0x6361f04
	void *c4ebdc3c8f(struct AActor* Actor); // Function Engine.PrimitiveComponent.*c4ebdc3c8f // None // @ game+0x636b698
	struct FName AddTorque(); // Function Engine.PrimitiveComponent.AddTorque // None // @ game+0x635de7c
	void *5b3c874cbe(struct FVector NewAngVel); // Function Engine.PrimitiveComponent.*5b3c874cbe // None // @ game+0x6377390
	void *baff305a0b(); // Function Engine.PrimitiveComponent.*baff305a0b // None // @ game+0x6379008
	void *b24da2aba6(); // Function Engine.PrimitiveComponent.*b24da2aba6 // None // @ game+0x6369a0c
	void *6d15f9d7fc(); // Function Engine.PrimitiveComponent.*6d15f9d7fc // None // @ game+0x635ec44
	struct UPrimitiveComponent* *bba26f131c(); // Function Engine.PrimitiveComponent.*bba26f131c // None // @ game+0x636c35c
	void SetPhysicsLinearVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // None // @ game+0x8ed884
	bool SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // None // @ game+0x637bbe8
	void *10c86d98d5(); // Function Engine.PrimitiveComponent.*10c86d98d5 // None // @ game+0x6369b40
	void SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // None // @ game+0x635c2b8
	void *fc3da87902(); // Function Engine.PrimitiveComponent.*fc3da87902 // None // @ game+0x637b778
	void *1e088aa233(); // Function Engine.PrimitiveComponent.*1e088aa233 // None // @ game+0x637d99c
	struct FName *9d203d4e3a(); // Function Engine.PrimitiveComponent.*9d203d4e3a // None // @ game+0x6368118
	void *7ab8b110bc(); // Function Engine.PrimitiveComponent.*7ab8b110bc // None // @ game+0x6368f8c
	void *cefd2a89e7(); // Function Engine.PrimitiveComponent.*cefd2a89e7 // None // @ game+0x637b1b8
	void *4135b69ecb(); // Function Engine.PrimitiveComponent.*4135b69ecb // None // @ game+0x637c484
	struct FName AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse // None // @ game+0x635c034
	void *065d5e11f8(struct FName BoneName); // Function Engine.PrimitiveComponent.*065d5e11f8 // None // @ game+0x6366468
	void *e06446eb04(); // Function Engine.PrimitiveComponent.*e06446eb04 // None // @ game+0x63739f0
	void *f6986ba874(); // Function Engine.PrimitiveComponent.*f6986ba874 // None // @ game+0x637cf08
	bool *285b57600a(); // Function Engine.PrimitiveComponent.*285b57600a // None // @ game+0x637d1ac
	void *5cdc853a89(); // Function Engine.PrimitiveComponent.*5cdc853a89 // None // @ game+0x6379838
	void SetCollisionObjectType(); // Function Engine.PrimitiveComponent.SetCollisionObjectType // None // @ game+0x6378edc
	struct FVector AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // None // @ game+0x635d0e8
	void *b9e13958df(); // Function Engine.PrimitiveComponent.*b9e13958df // None // @ game+0x63668bc
	void SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // None // @ game+0x6377488
	void *29c20efb0b(); // Function Engine.PrimitiveComponent.*29c20efb0b // None // @ game+0x6365804
	void *056cc90593(); // Function Engine.PrimitiveComponent.*056cc90593 // None // @ game+0x6378a40
	struct FVector SetPhysicsAngularVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // None // @ game+0x8ed79c
	void SetAngularDamping(); // Function Engine.PrimitiveComponent.SetAngularDamping // None // @ game+0x6377620
	struct FName AddImpulse(); // Function Engine.PrimitiveComponent.AddImpulse // None // @ game+0x635cfa8
	enum class ECollisionChannel *58f998cca1(); // Function Engine.PrimitiveComponent.*58f998cca1 // None // @ game+0x63790a0
	void *6ad19621d9(); // Function Engine.PrimitiveComponent.*6ad19621d9 // None // @ game+0x637b810
	void *6721a3eb8a(); // Function Engine.PrimitiveComponent.*6721a3eb8a // None // @ game+0x635ec60
	void *601c402444(); // Function Engine.PrimitiveComponent.*601c402444 // None // @ game+0x637eef4
	void GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // None // @ game+0x6369ee0
	void AddForce(struct FVector force); // Function Engine.PrimitiveComponent.AddForce // None // @ game+0x635c908
	void *1f028ad67d(); // Function Engine.PrimitiveComponent.*1f028ad67d // None // @ game+0x636690c
	struct FName *75116bc348(); // Function Engine.PrimitiveComponent.*75116bc348 // None // @ game+0x6374458
	void *46193842e9(); // Function Engine.PrimitiveComponent.*46193842e9 // None // @ game+0x6361f8c
	void *10f75e50ac(); // Function Engine.PrimitiveComponent.*10f75e50ac // None // @ game+0x63787e8
	void *e3b0f43f9e(struct FVector Point); // Function Engine.PrimitiveComponent.*e3b0f43f9e // None // @ game+0x636a444
	struct FName *36ad2d15e7(); // Function Engine.PrimitiveComponent.*36ad2d15e7 // None // @ game+0x6366760
	void *fec7ca08f4(struct FName BoneName); // Function Engine.PrimitiveComponent.*fec7ca08f4 // None // @ game+0x63690ec
	void *0e38375bb9(); // Function Engine.PrimitiveComponent.*0e38375bb9 // None // @ game+0x636b778
	void *23f39ad152(); // Function Engine.PrimitiveComponent.*23f39ad152 // None // @ game+0x6379ae8
	struct FVector AddForceAtLocationLocal(struct FVector Location); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // None // @ game+0x635cb94
	void CreateDynamicMaterialInstance(int32 ElementIndex); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // None // @ game+0x63621f4
	void *923a62a1b9(); // Function Engine.PrimitiveComponent.*923a62a1b9 // None // @ game+0x6379710
	struct FName GetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // None // @ game+0x8eac50
	void *41428e55af(); // Function Engine.PrimitiveComponent.*41428e55af // None // @ game+0x636f7c0
	void *9f5fbe7730(); // Function Engine.PrimitiveComponent.*9f5fbe7730 // None // @ game+0x6379578
	struct FVector SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // None // @ game+0x6378b6c
	void *95f3208c0a(); // Function Engine.PrimitiveComponent.*95f3208c0a // None // @ game+0x6377588
	void *926dc117b6(); // Function Engine.PrimitiveComponent.*926dc117b6 // None // @ game+0x63668e4
	void *d7c852a7d5(); // Function Engine.PrimitiveComponent.*d7c852a7d5 // None // @ game+0x637240c
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // None // @ game+0x6369ce8
	void *b76664dec1(); // Function Engine.PrimitiveComponent.*b76664dec1 // None // @ game+0x637eedc
	void *a306d03f54(); // Function Engine.PrimitiveComponent.*a306d03f54 // None // @ game+0xb055d8
};

// Class Engine.MaterialBillboardComponent
// Size: 0xa00 (Inherited: 0x9f0)
struct UMaterialBillboardComponent : UPrimitiveComponent {
	struct TArray<struct F*001d4a8b3e> Elements; // 0x9e8(0x10)

	void *50e35084ca(); // Function Engine.MaterialBillboardComponent.*50e35084ca // None // @ game+0x63c4f0c
	float *ba9565b730(struct UCurveFloat* DistanceToOpacityCurve); // Function Engine.MaterialBillboardComponent.*ba9565b730 // None // @ game+0x6383300
};

// Class Engine.*e40182d502
// Size: 0xd70 (Inherited: 0xc90)
struct U*e40182d502 : USkinnedMeshComponent {
	struct USkeletalMesh* SkeletalMesh; // 0xaf0(0x08)
	struct USkinnedMeshComponent* MasterPoseComponent; // 0xaf8(0x08)
	char bUseBoundsFromMasterPoseComponent : 1; // 0xb60(0x01)
	struct TArray<struct FBoxSphereBounds> *f30ef9aca0; // 0xb68(0x10)
	struct UPhysicsAsset* PhysicsAssetOverride; // 0xb98(0x08)
	int32 ForcedLodModel; // 0xba0(0x04)
	int32 MinLodModel; // 0xba4(0x04)
	struct TArray<struct F*cbe45bb4a6> LODInfo; // 0xbb8(0x10)
	float StreamingDistanceMultiplier; // 0xbc8(0x04)
	struct FColor WireframeColor; // 0xbcc(0x04)
	char *9e69394ecc : 1; // 0xbd0(0x01)
	char *9903a4c840 : 1; // 0xbd0(0x01)
	char bDisableMorphTarget : 1; // 0xbd0(0x01)
	char *355eef0bc4 : 1; // 0xbd0(0x01)
	char bPerBoneMotionBlur : 1; // 0xbe8(0x01)
	char bComponentUseFixedSkelBounds : 1; // 0xbe8(0x01)
	char bConsiderAllBodiesForBounds : 1; // 0xbe8(0x01)
	char bSyncAttachParentLOD : 1; // 0xbe8(0x01)
	enum class EMeshComponentUpdateFlag MeshComponentUpdateFlag; // 0xbec(0x01)
	char *4589ff7cf8 : 1; // 0xbf0(0x01)
	char *96a8417c7f : 1; // 0xbf0(0x01)
	char *f4e5e3198a : 1; // 0xbf0(0x01)
	bool *0ca1f88bf0; // 0xbf4(0x01)
	char bCastCapsuleDirectShadow : 1; // 0xbf8(0x01)
	char bCastCapsuleIndirectShadow : 1; // 0xbf8(0x01)
	char bRenderStatic : 1; // 0xbfc(0x01)
	float CapsuleIndirectShadowMinVisibility; // 0xc00(0x04)
	char *f4e58c294b : 1; // 0xc04(0x01)
	struct FBoxSphereBounds *cd78e2e3f1; // 0xc14(0x1c)
	bool *51163366b3; // 0xc30(0x01)
	bool bEnableUpdateRateOptimizations; // 0xc31(0x01)
	bool bDisplayDebugUpdateRateOptimizations; // 0xc32(0x01)
	bool *6ee4d78242; // 0xc81(0x01)
	bool *7c960d48b8; // 0xc82(0x01)
	char pad_D00[0x70]; // 0xd00(0x70)

	struct FName *6a5f21ad4e(); // Function Engine.SkinnedMeshComponent.*6a5f21ad4e // None // @ game+0x63a502c
	void *3c865e7779(); // Function Engine.SkinnedMeshComponent.*3c865e7779 // None // @ game+0x63d8204
	void *fc7ead4db2(); // Function Engine.SkinnedMeshComponent.*fc7ead4db2 // None // @ game+0x63c93b4
	bool *10d664b446(struct FVector BoneLocation); // Function Engine.SkinnedMeshComponent.*10d664b446 // None // @ game+0x6399740
	void *71a2310595(); // Function Engine.SkinnedMeshComponent.*71a2310595 // None // @ game+0x63c2d84
	void *67471412a8(); // Function Engine.SkinnedMeshComponent.*67471412a8 // None // @ game+0x63c2824
	void *e1f9ca9449(); // Function Engine.SkinnedMeshComponent.*e1f9ca9449 // None // @ game+0x63a29f4
	struct USkeletalMesh* SetSkeletalMesh(); // Function Engine.SkinnedMeshComponent.SetSkeletalMesh // None // @ game+0x63cb7cc
	int32 *2400ce1346(); // Function Engine.SkinnedMeshComponent.*2400ce1346 // None // @ game+0x639ce7c
	void *a0035d9d4e(); // Function Engine.SkinnedMeshComponent.*a0035d9d4e // None // @ game+0x63aac1c
	void GetBoneIndex(); // Function Engine.SkinnedMeshComponent.GetBoneIndex // None // @ game+0x639cbc0
	void *0838ed640a(); // Function Engine.SkinnedMeshComponent.*0838ed640a // None // @ game+0x63cb21c
	struct FRotator *6c2f9d9de6(struct FVector OutPosition); // Function Engine.SkinnedMeshComponent.*6c2f9d9de6 // None // @ game+0x63d7bf8
	void *5ee5688cd0(struct FName ParentBoneName); // Function Engine.SkinnedMeshComponent.*5ee5688cd0 // None // @ game+0x6389764
	void *b6a1e57216(); // Function Engine.SkinnedMeshComponent.*b6a1e57216 // None // @ game+0x63a2670
	void *fd2b1bbf5b(); // Function Engine.SkinnedMeshComponent.*fd2b1bbf5b // None // @ game+0x63c667c
	void *c47c945cda(); // Function Engine.SkinnedMeshComponent.*c47c945cda // None // @ game+0x63c9284
	void *b41c79226e(int32 LODIndex); // Function Engine.SkinnedMeshComponent.*b41c79226e // None // @ game+0x63cead0
	struct FName *c8ca57db8d(); // Function Engine.SkinnedMeshComponent.*c8ca57db8d // None // @ game+0x63a9758
	void SetSkinWeightOverride(int32 LODIndex); // Function Engine.SkinnedMeshComponent.SetSkinWeightOverride // None // @ game+0x63cb940
	void *96c3ec4c09(); // Function Engine.SkinnedMeshComponent.*96c3ec4c09 // None // @ game+0x6390ca0
	struct UPhysicsAsset* *feffa71d19(); // Function Engine.SkinnedMeshComponent.*feffa71d19 // None // @ game+0x63ca2ec
	void *ceffae9960(); // Function Engine.SkinnedMeshComponent.*ceffae9960 // None // @ game+0x6390938
	void *727d19e44f(struct FName BoneName, struct FRotator InRotation); // Function Engine.SkinnedMeshComponent.*727d19e44f // None // @ game+0x63d7fcc
	void *a7e2c33601(); // Function Engine.SkinnedMeshComponent.*a7e2c33601 // None // @ game+0x63c2cd4
};

// Class Engine.SplineMeshComponent
// Size: 0xc30 (Inherited: 0xb90)
struct USplineMeshComponent : UStaticMeshComponent {
	char pad_B90[0x8]; // 0xb90(0x08)
	struct F*08d1cc2639 SplineParams; // 0xb98(0x58)
	struct FVector SplineUpDir; // 0xbf0(0x0c)
	char *957f8c4d83 : 1; // 0xbfc(0x01)
	char *efd1d07b7b : 1; // 0xbfc(0x01)
	char pad_BFC_2 : 6; // 0xbfc(0x01)
	char pad_BFD[0x3]; // 0xbfd(0x03)
	enum class ESplineMeshAxis *95ac533207; // 0xc00(0x01)
	char pad_C01[0x3]; // 0xc01(0x03)
	float *c4492a0fef; // 0xc04(0x04)
	float *73c5371aee; // 0xc08(0x04)
	char pad_C0C[0x4]; // 0xc0c(0x04)
	struct UBodySetup* BodySetup; // 0xc10(0x08)
	struct FGuid *8adbbd2e25; // 0xc18(0x10)
	char *3dc8623213 : 1; // 0xc28(0x01)
	char pad_C28_1 : 7; // 0xc28(0x01)
	char pad_C29[0x7]; // 0xc29(0x07)

	void *f3362554d9(); // Function Engine.SplineMeshComponent.*f3362554d9 // None // @ game+0x63ccc24
	void *923d84a9d1(); // Function Engine.SplineMeshComponent.*923d84a9d1 // None // @ game+0x560b694
	void *6c9558dae5(); // Function Engine.SplineMeshComponent.*6c9558dae5 // None // @ game+0x63a52d4
	void *faa8756c5d(struct FVector InSplineUpDir); // Function Engine.SplineMeshComponent.*faa8756c5d // None // @ game+0x63cc404
	void *baf6db0bae(); // Function Engine.SplineMeshComponent.*baf6db0bae // None // @ game+0x63c2238
	void *af57b824e3(); // Function Engine.SplineMeshComponent.*af57b824e3 // None // @ game+0x639f0b0
	void *c9c864a1d3(); // Function Engine.SplineMeshComponent.*c9c864a1d3 // None // @ game+0x63d86b4
	void *371554fefa(); // Function Engine.SplineMeshComponent.*371554fefa // None // @ game+0x63c5834
	void *7074b54885(float StartRoll); // Function Engine.SplineMeshComponent.*7074b54885 // None // @ game+0x63ccb28
	struct FVector *7247037fee(); // Function Engine.SplineMeshComponent.*7247037fee // None // @ game+0x63ccd24
	struct FVector *bf3055c969(); // Function Engine.SplineMeshComponent.*bf3055c969 // None // @ game+0x63c553c
	void *5a749815e3(); // Function Engine.SplineMeshComponent.*5a749815e3 // None // @ game+0x639f088
	void *728567aed5(); // Function Engine.SplineMeshComponent.*728567aed5 // None // @ game+0x63c67f8
	void *72505d6334(); // Function Engine.SplineMeshComponent.*72505d6334 // None // @ game+0x639f020
	void *ce475a92fb(); // Function Engine.SplineMeshComponent.*ce475a92fb // None // @ game+0x63a52fc
	void *7c3f5159a8(); // Function Engine.SplineMeshComponent.*7c3f5159a8 // None // @ game+0x63a52ac
	void *f597cb4f37(); // Function Engine.SplineMeshComponent.*f597cb4f37 // None // @ game+0x63a533c
	struct FVector *520ccf9b95(); // Function Engine.SplineMeshComponent.*520ccf9b95 // None // @ game+0x63cca2c
	struct FVector *ea6365bce8(struct FVector EndPos); // Function Engine.SplineMeshComponent.*ea6365bce8 // None // @ game+0x63cc5c8
	void *367e39b59e(); // Function Engine.SplineMeshComponent.*367e39b59e // None // @ game+0x639f070
	void *652066da65(); // Function Engine.SplineMeshComponent.*652066da65 // None // @ game+0x560b6ac
	struct FVector2D *ba854f8fcd(); // Function Engine.SplineMeshComponent.*ba854f8fcd // None // @ game+0x63cc92c
	void *7e6913c9f3(); // Function Engine.SplineMeshComponent.*7e6913c9f3 // None // @ game+0x63c543c
	void *fd7cfa1b07(); // Function Engine.SplineMeshComponent.*fd7cfa1b07 // None // @ game+0x63c5734
	void *a1507d32ff(); // Function Engine.SplineMeshComponent.*a1507d32ff // None // @ game+0x639f048
	void *f68504edc2(); // Function Engine.SplineMeshComponent.*f68504edc2 // None // @ game+0x639f294
	void *3e30e2570d(); // Function Engine.SplineMeshComponent.*3e30e2570d // None // @ game+0x63c5638
	void *ef0580d8d0(); // Function Engine.SplineMeshComponent.*ef0580d8d0 // None // @ game+0x63a51e0
	float *9160d9e068(); // Function Engine.SplineMeshComponent.*9160d9e068 // None // @ game+0x63c2428
	int32 *130f68972e(); // Function Engine.SplineMeshComponent.*130f68972e // None // @ game+0x638d6d4
	void *bfd48539a5(); // Function Engine.SplineMeshComponent.*bfd48539a5 // None // @ game+0x63a5314
};

// Class Engine.*b2159bc4a0
// Size: 0xc10 (Inherited: 0xb90)
struct U*b2159bc4a0 : UStaticMeshComponent {
	char pad_B90[0x8]; // 0xb90(0x08)
	struct TArray<struct F*be7798eda9> PerInstanceSMData; // 0xb98(0x10)
	struct FVector SplineUpDir; // 0xba8(0x0c)
	char *efd1d07b7b : 1; // 0xbb4(0x01)
	char pad_BB4_1 : 7; // 0xbb4(0x01)
	char pad_BB5[0x3]; // 0xbb5(0x03)
	enum class ESplineMeshAxis *95ac533207; // 0xbb8(0x01)
	char pad_BB9[0x3]; // 0xbb9(0x03)
	float *c4492a0fef; // 0xbbc(0x04)
	float *73c5371aee; // 0xbc0(0x04)
	struct FVector *d842fc714f; // 0xbc4(0x0c)
	int32 InstanceStartCullDistance; // 0xbd0(0x04)
	int32 InstanceEndCullDistance; // 0xbd4(0x04)
	char pad_BD8[0x18]; // 0xbd8(0x18)
	struct UBodySetup* BodySetup; // 0xbf0(0x08)
	struct FGuid *8adbbd2e25; // 0xbf8(0x10)
	uint32 *44013c9268; // 0xc08(0x04)
	char pad_C0C[0x4]; // 0xc0c(0x04)

	void *7786d1a996(); // Function Engine.*b2159bc4a0.*7786d1a996 // None // @ game+0x63a028c
	float *baf6db0bae(); // Function Engine.*b2159bc4a0.*baf6db0bae // None // @ game+0x63c2144
	void *652066da65(); // Function Engine.*b2159bc4a0.*652066da65 // None // @ game+0x639d288
	void *c9c864a1d3(); // Function Engine.*b2159bc4a0.*c9c864a1d3 // None // @ game+0x63d86a0
	bool *028d8429ac(); // Function Engine.*b2159bc4a0.*028d8429ac // None // @ game+0x6383b30
	void *923d84a9d1(); // Function Engine.*b2159bc4a0.*923d84a9d1 // None // @ game+0x560ec58
	void *728567aed5(enum class ESplineMeshAxis InForwardAxis); // Function Engine.*b2159bc4a0.*728567aed5 // None // @ game+0x63c670c
	bool *fa21ef9a0b(); // Function Engine.*b2159bc4a0.*fa21ef9a0b // None // @ game+0x63a0774
	void *a984b9a9ce(struct F*08d1cc2639 WorldSplineSegment, bool bUpdateMesh); // Function Engine.*b2159bc4a0.*a984b9a9ce // None // @ game+0x6383f74
	void *b96a030999(int32 StartCullDistance); // Function Engine.*b2159bc4a0.*b96a030999 // None // @ game+0x63c3fd4
	void *f68504edc2(); // Function Engine.*b2159bc4a0.*f68504edc2 // None // @ game+0x639f27c
	void *95a4257f8b(); // Function Engine.*b2159bc4a0.*95a4257f8b // None // @ game+0x63907dc
	void *2a75f57149(bool bUpdateMesh); // Function Engine.*b2159bc4a0.*2a75f57149 // None // @ game+0x63bd76c
	float *9160d9e068(); // Function Engine.*b2159bc4a0.*9160d9e068 // None // @ game+0x63c2334
};

// Class Engine.*65fe268759
// Size: 0xb90 (Inherited: 0xb90)
struct U*65fe268759 : UStaticMeshComponent {
	int32 ForcedLodModel; // 0xaf0(0x04)
	int32 *66a6cd3343; // 0xaf4(0x04)
	bool bOverrideMinLOD; // 0xaf8(0x01)
	int32 MinLOD; // 0xafc(0x04)
	struct UStaticMesh* StaticMesh; // 0xb00(0x08)
	bool bOverrideWireframeColor; // 0xb08(0x01)
	struct FColor WireframeColorOverride; // 0xb0c(0x04)
	struct FLinearColor PerInstanceCustomData; // 0xb10(0x10)
	char *a28fc20375 : 1; // 0xb20(0x01)
	char *a6e890a6e8 : 1; // 0xb20(0x01)
	char bDisallowMeshPaintPerInstance : 1; // 0xb20(0x01)
	char *72ad19ace5 : 1; // 0xb20(0x01)
	char bIgnoreInstanceForTextureStreaming : 1; // 0xb20(0x01)
	char bOverrideLightMapRes : 1; // 0xb20(0x01)
	int32 OverriddenLightMapRes; // 0xb24(0x04)
	char bCastDistanceFieldIndirectShadow : 1; // 0xb28(0x01)
	float DistanceFieldIndirectShadowMinVisibility; // 0xb2c(0x04)
	float StreamingDistanceMultiplier; // 0xb30(0x04)
	int32 *0f0f75dabf; // 0xb34(0x04)
	char *9a59516d8b : 1; // 0xb38(0x01)
	struct TArray<struct FGuid> IrrelevantLights; // 0xb40(0x10)
	struct TArray<struct F*e52484916f> *6f651a8a78; // 0xb50(0x10)
	struct TArray<struct F*2680edbad5> *65df47e5bb; // 0xb60(0x10)
	bool *5b1ebb8f11; // 0xb70(0x01)
	struct F*553842a41b LightmassSettings; // 0xb74(0x18)

	struct UStaticMesh* SetStaticMesh(); // Function Engine.StaticMeshComponent.SetStaticMesh // None // @ game+0x5e3ea00
	struct FVector *34b9302e3c(); // Function Engine.StaticMeshComponent.*34b9302e3c // None // @ game+0x6368fb8
	void OnRep_StaticMesh(); // Function Engine.StaticMeshComponent.OnRep_StaticMesh // None // @ game+0x63726b8
	void *488bd86f9f(); // Function Engine.StaticMeshComponent.*488bd86f9f // None // @ game+0x6379ea8
};

// Class Engine.Texture
// Size: 0xb8 (Inherited: 0x28)
struct UTexture : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FGuid *72dc592e4f; // 0x30(0x10)
	int32 LODBias; // 0x40(0x04)
	int32 NumCinematicMipLevels; // 0x44(0x04)
	int32 GlobalLODBias; // 0x48(0x04)
	char SRGB : 1; // 0x4c(0x01)
	char NeverStream : 1; // 0x4c(0x01)
	char *ee6fb9b455 : 1; // 0x4c(0x01)
	char *020082ffed : 1; // 0x4c(0x01)
	char *794d619cef : 1; // 0x4c(0x01)
	char pad_4C_5 : 3; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32 *49b55c7409; // 0x50(0x04)
	enum class TextureCompressionSettings CompressionSettings; // 0x54(0x01)
	enum class TextureFilter Filter; // 0x55(0x01)
	enum class TextureGroup LODGroup; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	struct FPerPlatformFloat *6391458466; // 0x58(0x04)
	enum class ETextureDownscaleOptions *dfb62cc908; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x60(0x10)
	char pad_70[0x48]; // 0x70(0x48)
};

// Class Engine.Texture2D
// Size: 0xf8 (Inherited: 0xb8)
struct UTexture2D : UTexture {
	int32 *7236cc8f05; // 0xb8(0x04)
	int32 *018f2f6278; // 0xbc(0x04)
	int32 *7addae35f1; // 0xc0(0x04)
	struct FIntPoint *df15f4859d; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	double *6ab965470d; // 0xd0(0x08)
	char *c11c956f83 : 1; // 0xd8(0x01)
	char *8308a3a0af : 1; // 0xd8(0x01)
	char *f2f0197326 : 1; // 0xd8(0x01)
	char *28e0f53cbc : 1; // 0xd8(0x01)
	char *89b6eea276 : 1; // 0xd8(0x01)
	char bGlobalForceMipLevelsToBeResident : 1; // 0xd8(0x01)
	char *2a91aef5b9 : 1; // 0xd8(0x01)
	char pad_D8_7 : 1; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	enum class *6486b70fc0 AddressX; // 0xdc(0x01)
	enum class *6486b70fc0 AddressY; // 0xdd(0x01)
	char pad_DE[0x1a]; // 0xde(0x1a)

	void *3f69542928(); // Function Engine.Texture2D.*3f69542928 // None // @ game+0x638884c
	void *0d452de5c1(); // Function Engine.Texture2D.*0d452de5c1 // None // @ game+0x6388874
	float *77e5a6ccb5(); // Function Engine.Texture2D.*77e5a6ccb5 // None // @ game+0x63c6598
};

// Class Engine.*ae010490f6
// Size: 0x50 (Inherited: 0x30)
struct U*ae010490f6 : UDataAsset {
	struct UTexture2D* Color; // 0x30(0x20)
};

// Class Engine.*c155f3445f
// Size: 0xa00 (Inherited: 0x9f0)
struct U*c155f3445f : UPrimitiveComponent {
	struct U*ae010490f6* LabelData; // 0x9e8(0x08)
	struct FVector2D Offset; // 0x9f0(0x08)
};

// Class Engine.*51d3af11ce
// Size: 0xf0 (Inherited: 0x30)
struct U*51d3af11ce : UDataAsset {
	struct UTexture2D* Color; // 0x30(0x20)
	struct UTexture2D* Normal; // 0x50(0x20)
	float Height; // 0x70(0x04)
	char pad_74[0x7c]; // 0x74(0x7c)
};

// Class Engine.*8fb9a22a45
// Size: 0x9f0 (Inherited: 0x9f0)
struct U*8fb9a22a45 : UPrimitiveComponent {
	struct U*51d3af11ce* ObjectData; // 0x9e8(0x08)
};

// Class Engine.*204470fe3a
// Size: 0xa30 (Inherited: 0x9f0)
struct U*204470fe3a : UPrimitiveComponent {
	char pad_9F0[0x10]; // 0x9f0(0x10)
	struct UBodySetup* *4da416d40d; // 0xa00(0x08)
	char pad_A08[0x28]; // 0xa08(0x28)
};

// Class Engine.*7c1b3933ee
// Size: 0x9f0 (Inherited: 0x9f0)
struct U*7c1b3933ee : UPrimitiveComponent {
	float MinDrawDistance; // 0x4c8(0x04)
	float LDMaxDrawDistance; // 0x4cc(0x04)
	float CachedMaxDrawDistance; // 0x4d0(0x04)
	enum class *3c659ab94c *7512e3d028; // 0x4d4(0x01)
	enum class *3c659ab94c *d9fcd9b4bb; // 0x4d5(0x01)
	char pad_9FE_0 : 3; // 0x9fe(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x4d8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4d8(0x01)
	char bMultiBodyOverlap : 1; // 0x4d8(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x4d8(0x01)
	char bTraceComplexOnMove : 1; // 0x4d8(0x01)
	char bDisableForceFromCharacter : 1; // 0x4d9(0x01)
	char bReturnMaterialOnMove : 1; // 0x4d9(0x01)
	char *3e4d34552d : 1; // 0x4d9(0x01)
	char bAllowCullDistanceVolume : 1; // 0x4d9(0x01)
	char bImportantMesh : 1; // 0x4d9(0x01)
	char bOverrideCullingDistances : 1; // 0x4d9(0x01)
	float HLODScreenSize; // 0x4dc(0x04)
	char *2f091bbd0e : 1; // 0x4e0(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x4e0(0x01)
	char bRenderInMainPass : 1; // 0x4e0(0x01)
	char bRenderInMono : 1; // 0x4e0(0x01)
	char bOwnerNoSee : 1; // 0x4e0(0x01)
	char bOnlyOwnerSee : 1; // 0x4e0(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x4e0(0x01)
	char bUseAsOccluder : 1; // 0x4e0(0x01)
	char bForceAsOccluder : 1; // 0x4e1(0x01)
	char bForceOcclusionQuerying : 1; // 0x4e1(0x01)
	char bForceDisableOcclusionQuerying : 1; // 0x4e1(0x01)
	char *afd92d8969 : 1; // 0x4e1(0x01)
	char bForceMipStreaming : 1; // 0x4e1(0x01)
	char *4c581fbba9 : 1; // 0x4e1(0x01)
	char CastShadow : 1; // 0x4e1(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x4e2(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x4e2(0x01)
	char bCastDynamicShadow : 1; // 0x4e2(0x01)
	char bCastStaticShadow : 1; // 0x4e2(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x4e2(0x01)
	char bSelfShadowOnly : 1; // 0x4e2(0x01)
	char bCastFarShadow : 1; // 0x4e2(0x01)
	char bCastInsetShadow : 1; // 0x4e2(0x01)
	char bCastCinematicShadow : 1; // 0x4e3(0x01)
	char bCastHiddenShadow : 1; // 0x4e3(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e3(0x01)
	char bLightAsIfStatic : 1; // 0x4e3(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x4e3(0x01)
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x4e3(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x4e3(0x01)
	char bIgnoreRadialImpulse : 1; // 0x4e3(0x01)
	char bIgnoreRadialForce : 1; // 0x4e4(0x01)
	char bApplyImpulseOnDamage : 1; // 0x4e4(0x01)
	char bSyncBodySleep : 1; // 0x4e4(0x01)
	char *27b0806be5 : 1; // 0x4e4(0x01)
	char *6f3b773115 : 1; // 0x4e4(0x01)
	char *b11801b90d : 1; // 0x4e4(0x01)
	char bRenderCustomDepth : 1; // 0x4e4(0x01)
	char *668636af81 : 1; // 0x4e5(0x01)
	char *b3a3eee86b : 1; // 0x4e6(0x01)
	char *07830a14a6 : 1; // 0x4e6(0x01)
	enum class EDecalChannel DecalChannel; // 0x4e8(0x01)
	enum class *c0765ad24b IndoorOutdoorMask; // 0x4e9(0x01)
	struct FLightingChannels LightingChannels; // 0x4ea(0x03)
	enum class *d315e71b47 IndirectLightingCacheQuality; // 0x4ed(0x01)
	bool CustomDepthStencilValue; // 0x4ee(0x01)
	enum class *6e131cfc7f CustomDepthStencilWriteMask; // 0x4ef(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x4f0(0x10)
	int32 TranslucencySortPriority; // 0x500(0x04)
	int32 *6862844184; // 0x504(0x04)
	float LpvBiasMultiplier; // 0x50c(0x04)
	struct FBodyInstance BodyInstance; // 0x510(0x230)
	enum class EHasCustomNavigableGeometry *9a13a32dd1; // 0x748(0x01)
	float BoundsScale; // 0x784(0x04)
	float *aa675c3c9f; // 0x788(0x04)
	float *8aba3be418; // 0x78c(0x04)
	float *69906a8560; // 0x790(0x04)
	enum class *ed39c8987e CanBeCharacterBase; // 0x794(0x01)
	enum class *ed39c8987e CanCharacterStepUpOn; // 0x796(0x01)
	struct TArray<struct AActor*> *5559023e99; // 0x798(0x10)
	struct TArray<struct UPrimitiveComponent*> *34f682ee35; // 0x7a8(0x10)
	struct FMulticastDelegate OnComponentHit; // 0x870(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x880(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x890(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x8a0(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x8b0(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x8d0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x8e0(0x10)
	struct FMulticastDelegate OnClicked; // 0x8f0(0x10)
	struct FMulticastDelegate OnReleased; // 0x900(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x910(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x920(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x930(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x940(0x10)
	struct UPrimitiveComponent* *afbfc200cf; // 0x978(0x08)
	struct UPrimitiveComponent* *c423c7f1c7; // 0x980(0x08)
	struct F*1d83c9bd93 *605bfc3d64; // 0x988(0x58)

	struct FVector AddForceAtLocation(); // Function Engine.PrimitiveComponent.AddForceAtLocation // None // @ game+0x635ca48
	void GetMass(); // Function Engine.PrimitiveComponent.GetMass // None // @ game+0x63690c0
	void *3f4951ae21(); // Function Engine.PrimitiveComponent.*3f4951ae21 // None // @ game+0x637ae1c
	void *aa442ff688(); // Function Engine.PrimitiveComponent.*aa442ff688 // None // @ game+0x636bf24
	enum class *d6dc0510f4 *2acabdc4bc(); // Function Engine.PrimitiveComponent.*2acabdc4bc // None // @ game+0x635d7e8
	void *dfb097147a(); // Function Engine.PrimitiveComponent.*dfb097147a // None // @ game+0x8a8688
	void *1d5b572e97(); // Function Engine.PrimitiveComponent.*1d5b572e97 // None // @ game+0x636f7ec
	struct AActor* *58360a298b(); // Function Engine.PrimitiveComponent.*58360a298b // None // @ game+0x636c2bc
	struct UMaterialInterface* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // None // @ game+0x6362104
	void *155e776c01(enum class ECollisionChannel Channel); // Function Engine.PrimitiveComponent.*155e776c01 // None // @ game+0x6366944
	enum class *d6dc0510f4 *776b623f1e(); // Function Engine.PrimitiveComponent.*776b623f1e // None // @ game+0x635d9bc
	void *401e8be8c9(); // Function Engine.PrimitiveComponent.*401e8be8c9 // None // @ game+0x636f81c
	void *6c17800325(); // Function Engine.PrimitiveComponent.*6c17800325 // None // @ game+0x6378f74
	void *1060cf1432(); // Function Engine.PrimitiveComponent.*1060cf1432 // None // @ game+0x63797a8
	void *733d8ffdab(); // Function Engine.PrimitiveComponent.*733d8ffdab // None // @ game+0x637bb54
	void *c09d067d0f(); // Function Engine.PrimitiveComponent.*c09d067d0f // None // @ game+0x637c3f0
	void *dfc478eaef(); // Function Engine.PrimitiveComponent.*dfc478eaef // None // @ game+0x636b5b4
	void *d70adb1efd(float MassInKg); // Function Engine.PrimitiveComponent.*d70adb1efd // None // @ game+0x637b08c
	struct FVector K2_LineTraceComponent(struct FName BoneName); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // None // @ game+0x636f850
	void *8f296e8ac0(); // Function Engine.PrimitiveComponent.*8f296e8ac0 // None // @ game+0x637b9f8
	void *3579dd87c5(); // Function Engine.PrimitiveComponent.*3579dd87c5 // None // @ game+0x636ba90
	int32 *c513e9cfca(); // Function Engine.PrimitiveComponent.*c513e9cfca // None // @ game+0x6369250
	void CreateAndSetMaterialInstanceDynamic(bool bConcurrent); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // None // @ game+0x6362014
	void SetMassScale(); // Function Engine.PrimitiveComponent.SetMassScale // None // @ game+0x568247c
	int32 *c602cc5bf9(); // Function Engine.PrimitiveComponent.*c602cc5bf9 // None // @ game+0x63691ac
	void *6f5a420568(); // Function Engine.PrimitiveComponent.*6f5a420568 // None // @ game+0x637c518
	void *4179761c58(); // Function Engine.PrimitiveComponent.*4179761c58 // None // @ game+0x635e5f4
	struct UMaterialInterface* SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // None // @ game+0xb512e8
	struct FName GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // None // @ game+0x636a394
	void CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // None // @ game+0x6361f04
	void *c4ebdc3c8f(struct AActor* Actor); // Function Engine.PrimitiveComponent.*c4ebdc3c8f // None // @ game+0x636b698
	struct FName AddTorque(); // Function Engine.PrimitiveComponent.AddTorque // None // @ game+0x635de7c
	void *5b3c874cbe(struct FVector NewAngVel); // Function Engine.PrimitiveComponent.*5b3c874cbe // None // @ game+0x6377390
	void *baff305a0b(); // Function Engine.PrimitiveComponent.*baff305a0b // None // @ game+0x6379008
	void *b24da2aba6(); // Function Engine.PrimitiveComponent.*b24da2aba6 // None // @ game+0x6369a0c
	void *6d15f9d7fc(); // Function Engine.PrimitiveComponent.*6d15f9d7fc // None // @ game+0x635ec44
	struct UPrimitiveComponent* *bba26f131c(); // Function Engine.PrimitiveComponent.*bba26f131c // None // @ game+0x636c35c
	void SetPhysicsLinearVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // None // @ game+0x8ed884
	bool SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // None // @ game+0x637bbe8
	void *10c86d98d5(); // Function Engine.PrimitiveComponent.*10c86d98d5 // None // @ game+0x6369b40
	void SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // None // @ game+0x635c2b8
	void *fc3da87902(); // Function Engine.PrimitiveComponent.*fc3da87902 // None // @ game+0x637b778
	void *1e088aa233(); // Function Engine.PrimitiveComponent.*1e088aa233 // None // @ game+0x637d99c
	struct FName *9d203d4e3a(); // Function Engine.PrimitiveComponent.*9d203d4e3a // None // @ game+0x6368118
	void *7ab8b110bc(); // Function Engine.PrimitiveComponent.*7ab8b110bc // None // @ game+0x6368f8c
	void *cefd2a89e7(); // Function Engine.PrimitiveComponent.*cefd2a89e7 // None // @ game+0x637b1b8
	void *4135b69ecb(); // Function Engine.PrimitiveComponent.*4135b69ecb // None // @ game+0x637c484
	struct FName AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse // None // @ game+0x635c034
	void *065d5e11f8(struct FName BoneName); // Function Engine.PrimitiveComponent.*065d5e11f8 // None // @ game+0x6366468
	void *e06446eb04(); // Function Engine.PrimitiveComponent.*e06446eb04 // None // @ game+0x63739f0
	void *f6986ba874(); // Function Engine.PrimitiveComponent.*f6986ba874 // None // @ game+0x637cf08
	bool *285b57600a(); // Function Engine.PrimitiveComponent.*285b57600a // None // @ game+0x637d1ac
	void *5cdc853a89(); // Function Engine.PrimitiveComponent.*5cdc853a89 // None // @ game+0x6379838
	void SetCollisionObjectType(); // Function Engine.PrimitiveComponent.SetCollisionObjectType // None // @ game+0x6378edc
	struct FVector AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // None // @ game+0x635d0e8
	void *b9e13958df(); // Function Engine.PrimitiveComponent.*b9e13958df // None // @ game+0x63668bc
	void SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // None // @ game+0x6377488
	void *29c20efb0b(); // Function Engine.PrimitiveComponent.*29c20efb0b // None // @ game+0x6365804
	void *056cc90593(); // Function Engine.PrimitiveComponent.*056cc90593 // None // @ game+0x6378a40
	struct FVector SetPhysicsAngularVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // None // @ game+0x8ed79c
	void SetAngularDamping(); // Function Engine.PrimitiveComponent.SetAngularDamping // None // @ game+0x6377620
	struct FName AddImpulse(); // Function Engine.PrimitiveComponent.AddImpulse // None // @ game+0x635cfa8
	enum class ECollisionChannel *58f998cca1(); // Function Engine.PrimitiveComponent.*58f998cca1 // None // @ game+0x63790a0
	void *6ad19621d9(); // Function Engine.PrimitiveComponent.*6ad19621d9 // None // @ game+0x637b810
	void *6721a3eb8a(); // Function Engine.PrimitiveComponent.*6721a3eb8a // None // @ game+0x635ec60
	void *601c402444(); // Function Engine.PrimitiveComponent.*601c402444 // None // @ game+0x637eef4
	void GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // None // @ game+0x6369ee0
	void AddForce(struct FVector force); // Function Engine.PrimitiveComponent.AddForce // None // @ game+0x635c908
	void *1f028ad67d(); // Function Engine.PrimitiveComponent.*1f028ad67d // None // @ game+0x636690c
	struct FName *75116bc348(); // Function Engine.PrimitiveComponent.*75116bc348 // None // @ game+0x6374458
	void *46193842e9(); // Function Engine.PrimitiveComponent.*46193842e9 // None // @ game+0x6361f8c
	void *10f75e50ac(); // Function Engine.PrimitiveComponent.*10f75e50ac // None // @ game+0x63787e8
	void *e3b0f43f9e(struct FVector Point); // Function Engine.PrimitiveComponent.*e3b0f43f9e // None // @ game+0x636a444
	struct FName *36ad2d15e7(); // Function Engine.PrimitiveComponent.*36ad2d15e7 // None // @ game+0x6366760
	void *fec7ca08f4(struct FName BoneName); // Function Engine.PrimitiveComponent.*fec7ca08f4 // None // @ game+0x63690ec
	void *0e38375bb9(); // Function Engine.PrimitiveComponent.*0e38375bb9 // None // @ game+0x636b778
	void *23f39ad152(); // Function Engine.PrimitiveComponent.*23f39ad152 // None // @ game+0x6379ae8
	struct FVector AddForceAtLocationLocal(struct FVector Location); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // None // @ game+0x635cb94
	void CreateDynamicMaterialInstance(int32 ElementIndex); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // None // @ game+0x63621f4
	void *923a62a1b9(); // Function Engine.PrimitiveComponent.*923a62a1b9 // None // @ game+0x6379710
	struct FName GetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // None // @ game+0x8eac50
	void *41428e55af(); // Function Engine.PrimitiveComponent.*41428e55af // None // @ game+0x636f7c0
	void *9f5fbe7730(); // Function Engine.PrimitiveComponent.*9f5fbe7730 // None // @ game+0x6379578
	struct FVector SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // None // @ game+0x6378b6c
	void *95f3208c0a(); // Function Engine.PrimitiveComponent.*95f3208c0a // None // @ game+0x6377588
	void *926dc117b6(); // Function Engine.PrimitiveComponent.*926dc117b6 // None // @ game+0x63668e4
	void *d7c852a7d5(); // Function Engine.PrimitiveComponent.*d7c852a7d5 // None // @ game+0x637240c
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // None // @ game+0x6369ce8
	void *b76664dec1(); // Function Engine.PrimitiveComponent.*b76664dec1 // None // @ game+0x637eedc
	void *a306d03f54(); // Function Engine.PrimitiveComponent.*a306d03f54 // None // @ game+0xb055d8
};

// Class Engine.NavMeshRenderingComponent
// Size: 0xa00 (Inherited: 0x9f0)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	float MinDrawDistance; // 0x4c8(0x04)
	float LDMaxDrawDistance; // 0x4cc(0x04)
	float CachedMaxDrawDistance; // 0x4d0(0x04)
	enum class *3c659ab94c *7512e3d028; // 0x4d4(0x01)
	enum class *3c659ab94c *d9fcd9b4bb; // 0x4d5(0x01)
	char pad_9FE_0 : 3; // 0x9fe(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x4d8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4d8(0x01)
	char bMultiBodyOverlap : 1; // 0x4d8(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x4d8(0x01)
	char bTraceComplexOnMove : 1; // 0x4d8(0x01)
	char bDisableForceFromCharacter : 1; // 0x4d9(0x01)
	char bReturnMaterialOnMove : 1; // 0x4d9(0x01)
	char *3e4d34552d : 1; // 0x4d9(0x01)
	char bAllowCullDistanceVolume : 1; // 0x4d9(0x01)
	char bImportantMesh : 1; // 0x4d9(0x01)
	char bOverrideCullingDistances : 1; // 0x4d9(0x01)
	float HLODScreenSize; // 0x4dc(0x04)
	char *2f091bbd0e : 1; // 0x4e0(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x4e0(0x01)
	char bRenderInMainPass : 1; // 0x4e0(0x01)
	char bRenderInMono : 1; // 0x4e0(0x01)
	char bOwnerNoSee : 1; // 0x4e0(0x01)
	char bOnlyOwnerSee : 1; // 0x4e0(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x4e0(0x01)
	char bUseAsOccluder : 1; // 0x4e0(0x01)
	char bForceAsOccluder : 1; // 0x4e1(0x01)
	char bForceOcclusionQuerying : 1; // 0x4e1(0x01)
	char bForceDisableOcclusionQuerying : 1; // 0x4e1(0x01)
	char *afd92d8969 : 1; // 0x4e1(0x01)
	char bForceMipStreaming : 1; // 0x4e1(0x01)
	char *4c581fbba9 : 1; // 0x4e1(0x01)
	char CastShadow : 1; // 0x4e1(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x4e2(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x4e2(0x01)
	char bCastDynamicShadow : 1; // 0x4e2(0x01)
	char bCastStaticShadow : 1; // 0x4e2(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x4e2(0x01)
	char bSelfShadowOnly : 1; // 0x4e2(0x01)
	char bCastFarShadow : 1; // 0x4e2(0x01)
	char bCastInsetShadow : 1; // 0x4e2(0x01)
	char bCastCinematicShadow : 1; // 0x4e3(0x01)
	char bCastHiddenShadow : 1; // 0x4e3(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e3(0x01)
	char bLightAsIfStatic : 1; // 0x4e3(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x4e3(0x01)
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x4e3(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x4e3(0x01)
	char bIgnoreRadialImpulse : 1; // 0x4e3(0x01)
	char bIgnoreRadialForce : 1; // 0x4e4(0x01)
	char bApplyImpulseOnDamage : 1; // 0x4e4(0x01)
	char bSyncBodySleep : 1; // 0x4e4(0x01)
	char *27b0806be5 : 1; // 0x4e4(0x01)
	char *6f3b773115 : 1; // 0x4e4(0x01)
	char *b11801b90d : 1; // 0x4e4(0x01)
	char bRenderCustomDepth : 1; // 0x4e4(0x01)
	char *668636af81 : 1; // 0x4e5(0x01)
	char *b3a3eee86b : 1; // 0x4e6(0x01)
	char *07830a14a6 : 1; // 0x4e6(0x01)
	enum class EDecalChannel DecalChannel; // 0x4e8(0x01)
	enum class *c0765ad24b IndoorOutdoorMask; // 0x4e9(0x01)
	struct FLightingChannels LightingChannels; // 0x4ea(0x03)
	enum class *d315e71b47 IndirectLightingCacheQuality; // 0x4ed(0x01)
	bool CustomDepthStencilValue; // 0x4ee(0x01)
	enum class *6e131cfc7f CustomDepthStencilWriteMask; // 0x4ef(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x4f0(0x10)
	int32 TranslucencySortPriority; // 0x500(0x04)
	int32 *6862844184; // 0x504(0x04)
	float LpvBiasMultiplier; // 0x50c(0x04)
	struct FBodyInstance BodyInstance; // 0x510(0x230)
	enum class EHasCustomNavigableGeometry *9a13a32dd1; // 0x748(0x01)
	float BoundsScale; // 0x784(0x04)
	float *aa675c3c9f; // 0x788(0x04)
	float *8aba3be418; // 0x78c(0x04)
	float *69906a8560; // 0x790(0x04)
	enum class *ed39c8987e CanBeCharacterBase; // 0x794(0x01)
	enum class *ed39c8987e CanCharacterStepUpOn; // 0x796(0x01)
	struct TArray<struct AActor*> *5559023e99; // 0x798(0x10)
	struct TArray<struct UPrimitiveComponent*> *34f682ee35; // 0x7a8(0x10)
	struct FMulticastDelegate OnComponentHit; // 0x870(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x880(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x890(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x8a0(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x8b0(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x8d0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x8e0(0x10)
	struct FMulticastDelegate OnClicked; // 0x8f0(0x10)
	struct FMulticastDelegate OnReleased; // 0x900(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x910(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x920(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x930(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x940(0x10)
	struct UPrimitiveComponent* *afbfc200cf; // 0x978(0x08)
	struct UPrimitiveComponent* *c423c7f1c7; // 0x980(0x08)
	struct F*1d83c9bd93 *605bfc3d64; // 0x988(0x58)

	struct FVector AddForceAtLocation(); // Function Engine.PrimitiveComponent.AddForceAtLocation // None // @ game+0x635ca48
	void GetMass(); // Function Engine.PrimitiveComponent.GetMass // None // @ game+0x63690c0
	void *3f4951ae21(); // Function Engine.PrimitiveComponent.*3f4951ae21 // None // @ game+0x637ae1c
	void *aa442ff688(); // Function Engine.PrimitiveComponent.*aa442ff688 // None // @ game+0x636bf24
	enum class *d6dc0510f4 *2acabdc4bc(); // Function Engine.PrimitiveComponent.*2acabdc4bc // None // @ game+0x635d7e8
	void *dfb097147a(); // Function Engine.PrimitiveComponent.*dfb097147a // None // @ game+0x8a8688
	void *1d5b572e97(); // Function Engine.PrimitiveComponent.*1d5b572e97 // None // @ game+0x636f7ec
	struct AActor* *58360a298b(); // Function Engine.PrimitiveComponent.*58360a298b // None // @ game+0x636c2bc
	struct UMaterialInterface* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // None // @ game+0x6362104
	void *155e776c01(enum class ECollisionChannel Channel); // Function Engine.PrimitiveComponent.*155e776c01 // None // @ game+0x6366944
	enum class *d6dc0510f4 *776b623f1e(); // Function Engine.PrimitiveComponent.*776b623f1e // None // @ game+0x635d9bc
	void *401e8be8c9(); // Function Engine.PrimitiveComponent.*401e8be8c9 // None // @ game+0x636f81c
	void *6c17800325(); // Function Engine.PrimitiveComponent.*6c17800325 // None // @ game+0x6378f74
	void *1060cf1432(); // Function Engine.PrimitiveComponent.*1060cf1432 // None // @ game+0x63797a8
	void *733d8ffdab(); // Function Engine.PrimitiveComponent.*733d8ffdab // None // @ game+0x637bb54
	void *c09d067d0f(); // Function Engine.PrimitiveComponent.*c09d067d0f // None // @ game+0x637c3f0
	void *dfc478eaef(); // Function Engine.PrimitiveComponent.*dfc478eaef // None // @ game+0x636b5b4
	void *d70adb1efd(float MassInKg); // Function Engine.PrimitiveComponent.*d70adb1efd // None // @ game+0x637b08c
	struct FVector K2_LineTraceComponent(struct FName BoneName); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // None // @ game+0x636f850
	void *8f296e8ac0(); // Function Engine.PrimitiveComponent.*8f296e8ac0 // None // @ game+0x637b9f8
	void *3579dd87c5(); // Function Engine.PrimitiveComponent.*3579dd87c5 // None // @ game+0x636ba90
	int32 *c513e9cfca(); // Function Engine.PrimitiveComponent.*c513e9cfca // None // @ game+0x6369250
	void CreateAndSetMaterialInstanceDynamic(bool bConcurrent); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // None // @ game+0x6362014
	void SetMassScale(); // Function Engine.PrimitiveComponent.SetMassScale // None // @ game+0x568247c
	int32 *c602cc5bf9(); // Function Engine.PrimitiveComponent.*c602cc5bf9 // None // @ game+0x63691ac
	void *6f5a420568(); // Function Engine.PrimitiveComponent.*6f5a420568 // None // @ game+0x637c518
	void *4179761c58(); // Function Engine.PrimitiveComponent.*4179761c58 // None // @ game+0x635e5f4
	struct UMaterialInterface* SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // None // @ game+0xb512e8
	struct FName GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // None // @ game+0x636a394
	void CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // None // @ game+0x6361f04
	void *c4ebdc3c8f(struct AActor* Actor); // Function Engine.PrimitiveComponent.*c4ebdc3c8f // None // @ game+0x636b698
	struct FName AddTorque(); // Function Engine.PrimitiveComponent.AddTorque // None // @ game+0x635de7c
	void *5b3c874cbe(struct FVector NewAngVel); // Function Engine.PrimitiveComponent.*5b3c874cbe // None // @ game+0x6377390
	void *baff305a0b(); // Function Engine.PrimitiveComponent.*baff305a0b // None // @ game+0x6379008
	void *b24da2aba6(); // Function Engine.PrimitiveComponent.*b24da2aba6 // None // @ game+0x6369a0c
	void *6d15f9d7fc(); // Function Engine.PrimitiveComponent.*6d15f9d7fc // None // @ game+0x635ec44
	struct UPrimitiveComponent* *bba26f131c(); // Function Engine.PrimitiveComponent.*bba26f131c // None // @ game+0x636c35c
	void SetPhysicsLinearVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // None // @ game+0x8ed884
	bool SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // None // @ game+0x637bbe8
	void *10c86d98d5(); // Function Engine.PrimitiveComponent.*10c86d98d5 // None // @ game+0x6369b40
	void SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // None // @ game+0x635c2b8
	void *fc3da87902(); // Function Engine.PrimitiveComponent.*fc3da87902 // None // @ game+0x637b778
	void *1e088aa233(); // Function Engine.PrimitiveComponent.*1e088aa233 // None // @ game+0x637d99c
	struct FName *9d203d4e3a(); // Function Engine.PrimitiveComponent.*9d203d4e3a // None // @ game+0x6368118
	void *7ab8b110bc(); // Function Engine.PrimitiveComponent.*7ab8b110bc // None // @ game+0x6368f8c
	void *cefd2a89e7(); // Function Engine.PrimitiveComponent.*cefd2a89e7 // None // @ game+0x637b1b8
	void *4135b69ecb(); // Function Engine.PrimitiveComponent.*4135b69ecb // None // @ game+0x637c484
	struct FName AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse // None // @ game+0x635c034
	void *065d5e11f8(struct FName BoneName); // Function Engine.PrimitiveComponent.*065d5e11f8 // None // @ game+0x6366468
	void *e06446eb04(); // Function Engine.PrimitiveComponent.*e06446eb04 // None // @ game+0x63739f0
	void *f6986ba874(); // Function Engine.PrimitiveComponent.*f6986ba874 // None // @ game+0x637cf08
	bool *285b57600a(); // Function Engine.PrimitiveComponent.*285b57600a // None // @ game+0x637d1ac
	void *5cdc853a89(); // Function Engine.PrimitiveComponent.*5cdc853a89 // None // @ game+0x6379838
	void SetCollisionObjectType(); // Function Engine.PrimitiveComponent.SetCollisionObjectType // None // @ game+0x6378edc
	struct FVector AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // None // @ game+0x635d0e8
	void *b9e13958df(); // Function Engine.PrimitiveComponent.*b9e13958df // None // @ game+0x63668bc
	void SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // None // @ game+0x6377488
	void *29c20efb0b(); // Function Engine.PrimitiveComponent.*29c20efb0b // None // @ game+0x6365804
	void *056cc90593(); // Function Engine.PrimitiveComponent.*056cc90593 // None // @ game+0x6378a40
	struct FVector SetPhysicsAngularVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // None // @ game+0x8ed79c
	void SetAngularDamping(); // Function Engine.PrimitiveComponent.SetAngularDamping // None // @ game+0x6377620
	struct FName AddImpulse(); // Function Engine.PrimitiveComponent.AddImpulse // None // @ game+0x635cfa8
	enum class ECollisionChannel *58f998cca1(); // Function Engine.PrimitiveComponent.*58f998cca1 // None // @ game+0x63790a0
	void *6ad19621d9(); // Function Engine.PrimitiveComponent.*6ad19621d9 // None // @ game+0x637b810
	void *6721a3eb8a(); // Function Engine.PrimitiveComponent.*6721a3eb8a // None // @ game+0x635ec60
	void *601c402444(); // Function Engine.PrimitiveComponent.*601c402444 // None // @ game+0x637eef4
	void GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // None // @ game+0x6369ee0
	void AddForce(struct FVector force); // Function Engine.PrimitiveComponent.AddForce // None // @ game+0x635c908
	void *1f028ad67d(); // Function Engine.PrimitiveComponent.*1f028ad67d // None // @ game+0x636690c
	struct FName *75116bc348(); // Function Engine.PrimitiveComponent.*75116bc348 // None // @ game+0x6374458
	void *46193842e9(); // Function Engine.PrimitiveComponent.*46193842e9 // None // @ game+0x6361f8c
	void *10f75e50ac(); // Function Engine.PrimitiveComponent.*10f75e50ac // None // @ game+0x63787e8
	void *e3b0f43f9e(struct FVector Point); // Function Engine.PrimitiveComponent.*e3b0f43f9e // None // @ game+0x636a444
	struct FName *36ad2d15e7(); // Function Engine.PrimitiveComponent.*36ad2d15e7 // None // @ game+0x6366760
	void *fec7ca08f4(struct FName BoneName); // Function Engine.PrimitiveComponent.*fec7ca08f4 // None // @ game+0x63690ec
	void *0e38375bb9(); // Function Engine.PrimitiveComponent.*0e38375bb9 // None // @ game+0x636b778
	void *23f39ad152(); // Function Engine.PrimitiveComponent.*23f39ad152 // None // @ game+0x6379ae8
	struct FVector AddForceAtLocationLocal(struct FVector Location); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // None // @ game+0x635cb94
	void CreateDynamicMaterialInstance(int32 ElementIndex); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // None // @ game+0x63621f4
	void *923a62a1b9(); // Function Engine.PrimitiveComponent.*923a62a1b9 // None // @ game+0x6379710
	struct FName GetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // None // @ game+0x8eac50
	void *41428e55af(); // Function Engine.PrimitiveComponent.*41428e55af // None // @ game+0x636f7c0
	void *9f5fbe7730(); // Function Engine.PrimitiveComponent.*9f5fbe7730 // None // @ game+0x6379578
	struct FVector SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // None // @ game+0x6378b6c
	void *95f3208c0a(); // Function Engine.PrimitiveComponent.*95f3208c0a // None // @ game+0x6377588
	void *926dc117b6(); // Function Engine.PrimitiveComponent.*926dc117b6 // None // @ game+0x63668e4
	void *d7c852a7d5(); // Function Engine.PrimitiveComponent.*d7c852a7d5 // None // @ game+0x637240c
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // None // @ game+0x6369ce8
	void *b76664dec1(); // Function Engine.PrimitiveComponent.*b76664dec1 // None // @ game+0x637eedc
	void *a306d03f54(); // Function Engine.PrimitiveComponent.*a306d03f54 // None // @ game+0xb055d8
};

// Class Engine.*c8c3c0f3e4
// Size: 0x9f0 (Inherited: 0x9f0)
struct U*c8c3c0f3e4 : UPrimitiveComponent {
	float MinDrawDistance; // 0x4c8(0x04)
	float LDMaxDrawDistance; // 0x4cc(0x04)
	float CachedMaxDrawDistance; // 0x4d0(0x04)
	enum class *3c659ab94c *7512e3d028; // 0x4d4(0x01)
	enum class *3c659ab94c *d9fcd9b4bb; // 0x4d5(0x01)
	char pad_9FE_0 : 3; // 0x9fe(0x01)
	char bAlwaysCreatePhysicsState : 1; // 0x4d8(0x01)
	char bGenerateOverlapEvents : 1; // 0x4d8(0x01)
	char bMultiBodyOverlap : 1; // 0x4d8(0x01)
	char bCheckAsyncSceneOnMove : 1; // 0x4d8(0x01)
	char bTraceComplexOnMove : 1; // 0x4d8(0x01)
	char bDisableForceFromCharacter : 1; // 0x4d9(0x01)
	char bReturnMaterialOnMove : 1; // 0x4d9(0x01)
	char *3e4d34552d : 1; // 0x4d9(0x01)
	char bAllowCullDistanceVolume : 1; // 0x4d9(0x01)
	char bImportantMesh : 1; // 0x4d9(0x01)
	char bOverrideCullingDistances : 1; // 0x4d9(0x01)
	float HLODScreenSize; // 0x4dc(0x04)
	char *2f091bbd0e : 1; // 0x4e0(0x01)
	char bVisibleInReflectionCaptures : 1; // 0x4e0(0x01)
	char bRenderInMainPass : 1; // 0x4e0(0x01)
	char bRenderInMono : 1; // 0x4e0(0x01)
	char bOwnerNoSee : 1; // 0x4e0(0x01)
	char bOnlyOwnerSee : 1; // 0x4e0(0x01)
	char bTreatAsBackgroundForOcclusion : 1; // 0x4e0(0x01)
	char bUseAsOccluder : 1; // 0x4e0(0x01)
	char bForceAsOccluder : 1; // 0x4e1(0x01)
	char bForceOcclusionQuerying : 1; // 0x4e1(0x01)
	char bForceDisableOcclusionQuerying : 1; // 0x4e1(0x01)
	char *afd92d8969 : 1; // 0x4e1(0x01)
	char bForceMipStreaming : 1; // 0x4e1(0x01)
	char *4c581fbba9 : 1; // 0x4e1(0x01)
	char CastShadow : 1; // 0x4e1(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x4e2(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x4e2(0x01)
	char bCastDynamicShadow : 1; // 0x4e2(0x01)
	char bCastStaticShadow : 1; // 0x4e2(0x01)
	char bCastVolumetricTranslucentShadow : 1; // 0x4e2(0x01)
	char bSelfShadowOnly : 1; // 0x4e2(0x01)
	char bCastFarShadow : 1; // 0x4e2(0x01)
	char bCastInsetShadow : 1; // 0x4e2(0x01)
	char bCastCinematicShadow : 1; // 0x4e3(0x01)
	char bCastHiddenShadow : 1; // 0x4e3(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e3(0x01)
	char bLightAsIfStatic : 1; // 0x4e3(0x01)
	char bLightAttachmentsAsGroup : 1; // 0x4e3(0x01)
	char bReceiveCombinedCSMAndStaticShadowsFromStationaryLights : 1; // 0x4e3(0x01)
	char bSingleSampleShadowFromStationaryLights : 1; // 0x4e3(0x01)
	char bIgnoreRadialImpulse : 1; // 0x4e3(0x01)
	char bIgnoreRadialForce : 1; // 0x4e4(0x01)
	char bApplyImpulseOnDamage : 1; // 0x4e4(0x01)
	char bSyncBodySleep : 1; // 0x4e4(0x01)
	char *27b0806be5 : 1; // 0x4e4(0x01)
	char *6f3b773115 : 1; // 0x4e4(0x01)
	char *b11801b90d : 1; // 0x4e4(0x01)
	char bRenderCustomDepth : 1; // 0x4e4(0x01)
	char *668636af81 : 1; // 0x4e5(0x01)
	char *b3a3eee86b : 1; // 0x4e6(0x01)
	char *07830a14a6 : 1; // 0x4e6(0x01)
	enum class EDecalChannel DecalChannel; // 0x4e8(0x01)
	enum class *c0765ad24b IndoorOutdoorMask; // 0x4e9(0x01)
	struct FLightingChannels LightingChannels; // 0x4ea(0x03)
	enum class *d315e71b47 IndirectLightingCacheQuality; // 0x4ed(0x01)
	bool CustomDepthStencilValue; // 0x4ee(0x01)
	enum class *6e131cfc7f CustomDepthStencilWriteMask; // 0x4ef(0x01)
	struct TArray<enum class ECollisionChannel> IgnoreCollisionMaskOnSweep; // 0x4f0(0x10)
	int32 TranslucencySortPriority; // 0x500(0x04)
	int32 *6862844184; // 0x504(0x04)
	float LpvBiasMultiplier; // 0x50c(0x04)
	struct FBodyInstance BodyInstance; // 0x510(0x230)
	enum class EHasCustomNavigableGeometry *9a13a32dd1; // 0x748(0x01)
	float BoundsScale; // 0x784(0x04)
	float *aa675c3c9f; // 0x788(0x04)
	float *8aba3be418; // 0x78c(0x04)
	float *69906a8560; // 0x790(0x04)
	enum class *ed39c8987e CanBeCharacterBase; // 0x794(0x01)
	enum class *ed39c8987e CanCharacterStepUpOn; // 0x796(0x01)
	struct TArray<struct AActor*> *5559023e99; // 0x798(0x10)
	struct TArray<struct UPrimitiveComponent*> *34f682ee35; // 0x7a8(0x10)
	struct FMulticastDelegate OnComponentHit; // 0x870(0x10)
	struct FMulticastDelegate OnComponentBeginOverlap; // 0x880(0x10)
	struct FMulticastDelegate OnComponentEndOverlap; // 0x890(0x10)
	struct FMulticastDelegate OnComponentWake; // 0x8a0(0x10)
	struct FMulticastDelegate OnComponentSleep; // 0x8b0(0x10)
	struct FMulticastDelegate OnBeginCursorOver; // 0x8d0(0x10)
	struct FMulticastDelegate OnEndCursorOver; // 0x8e0(0x10)
	struct FMulticastDelegate OnClicked; // 0x8f0(0x10)
	struct FMulticastDelegate OnReleased; // 0x900(0x10)
	struct FMulticastDelegate OnInputTouchBegin; // 0x910(0x10)
	struct FMulticastDelegate OnInputTouchEnd; // 0x920(0x10)
	struct FMulticastDelegate OnInputTouchEnter; // 0x930(0x10)
	struct FMulticastDelegate OnInputTouchLeave; // 0x940(0x10)
	struct UPrimitiveComponent* *afbfc200cf; // 0x978(0x08)
	struct UPrimitiveComponent* *c423c7f1c7; // 0x980(0x08)
	struct F*1d83c9bd93 *605bfc3d64; // 0x988(0x58)

	struct FVector AddForceAtLocation(); // Function Engine.PrimitiveComponent.AddForceAtLocation // None // @ game+0x635ca48
	void GetMass(); // Function Engine.PrimitiveComponent.GetMass // None // @ game+0x63690c0
	void *3f4951ae21(); // Function Engine.PrimitiveComponent.*3f4951ae21 // None // @ game+0x637ae1c
	void *aa442ff688(); // Function Engine.PrimitiveComponent.*aa442ff688 // None // @ game+0x636bf24
	enum class *d6dc0510f4 *2acabdc4bc(); // Function Engine.PrimitiveComponent.*2acabdc4bc // None // @ game+0x635d7e8
	void *dfb097147a(); // Function Engine.PrimitiveComponent.*dfb097147a // None // @ game+0x8a8688
	void *1d5b572e97(); // Function Engine.PrimitiveComponent.*1d5b572e97 // None // @ game+0x636f7ec
	struct AActor* *58360a298b(); // Function Engine.PrimitiveComponent.*58360a298b // None // @ game+0x636c2bc
	struct UMaterialInterface* CreateAndSetMaterialInstanceDynamicFromMaterial(); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial // None // @ game+0x6362104
	void *155e776c01(enum class ECollisionChannel Channel); // Function Engine.PrimitiveComponent.*155e776c01 // None // @ game+0x6366944
	enum class *d6dc0510f4 *776b623f1e(); // Function Engine.PrimitiveComponent.*776b623f1e // None // @ game+0x635d9bc
	void *401e8be8c9(); // Function Engine.PrimitiveComponent.*401e8be8c9 // None // @ game+0x636f81c
	void *6c17800325(); // Function Engine.PrimitiveComponent.*6c17800325 // None // @ game+0x6378f74
	void *1060cf1432(); // Function Engine.PrimitiveComponent.*1060cf1432 // None // @ game+0x63797a8
	void *733d8ffdab(); // Function Engine.PrimitiveComponent.*733d8ffdab // None // @ game+0x637bb54
	void *c09d067d0f(); // Function Engine.PrimitiveComponent.*c09d067d0f // None // @ game+0x637c3f0
	void *dfc478eaef(); // Function Engine.PrimitiveComponent.*dfc478eaef // None // @ game+0x636b5b4
	void *d70adb1efd(float MassInKg); // Function Engine.PrimitiveComponent.*d70adb1efd // None // @ game+0x637b08c
	struct FVector K2_LineTraceComponent(struct FName BoneName); // Function Engine.PrimitiveComponent.K2_LineTraceComponent // None // @ game+0x636f850
	void *8f296e8ac0(); // Function Engine.PrimitiveComponent.*8f296e8ac0 // None // @ game+0x637b9f8
	void *3579dd87c5(); // Function Engine.PrimitiveComponent.*3579dd87c5 // None // @ game+0x636ba90
	int32 *c513e9cfca(); // Function Engine.PrimitiveComponent.*c513e9cfca // None // @ game+0x6369250
	void CreateAndSetMaterialInstanceDynamic(bool bConcurrent); // Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic // None // @ game+0x6362014
	void SetMassScale(); // Function Engine.PrimitiveComponent.SetMassScale // None // @ game+0x568247c
	int32 *c602cc5bf9(); // Function Engine.PrimitiveComponent.*c602cc5bf9 // None // @ game+0x63691ac
	void *6f5a420568(); // Function Engine.PrimitiveComponent.*6f5a420568 // None // @ game+0x637c518
	void *4179761c58(); // Function Engine.PrimitiveComponent.*4179761c58 // None // @ game+0x635e5f4
	struct UMaterialInterface* SetMaterial(); // Function Engine.PrimitiveComponent.SetMaterial // None // @ game+0xb512e8
	struct FName GetPhysicsAngularVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity // None // @ game+0x636a394
	void CopyArrayOfMoveIgnoreActors(); // Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors // None // @ game+0x6361f04
	void *c4ebdc3c8f(struct AActor* Actor); // Function Engine.PrimitiveComponent.*c4ebdc3c8f // None // @ game+0x636b698
	struct FName AddTorque(); // Function Engine.PrimitiveComponent.AddTorque // None // @ game+0x635de7c
	void *5b3c874cbe(struct FVector NewAngVel); // Function Engine.PrimitiveComponent.*5b3c874cbe // None // @ game+0x6377390
	void *baff305a0b(); // Function Engine.PrimitiveComponent.*baff305a0b // None // @ game+0x6379008
	void *b24da2aba6(); // Function Engine.PrimitiveComponent.*b24da2aba6 // None // @ game+0x6369a0c
	void *6d15f9d7fc(); // Function Engine.PrimitiveComponent.*6d15f9d7fc // None // @ game+0x635ec44
	struct UPrimitiveComponent* *bba26f131c(); // Function Engine.PrimitiveComponent.*bba26f131c // None // @ game+0x636c35c
	void SetPhysicsLinearVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity // None // @ game+0x8ed884
	bool SetPhysicsMaxAngularVelocity(); // Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity // None // @ game+0x637bbe8
	void *10c86d98d5(); // Function Engine.PrimitiveComponent.*10c86d98d5 // None // @ game+0x6369b40
	void SetLinearDamping(); // Function Engine.PrimitiveComponent.SetLinearDamping // None // @ game+0x635c2b8
	void *fc3da87902(); // Function Engine.PrimitiveComponent.*fc3da87902 // None // @ game+0x637b778
	void *1e088aa233(); // Function Engine.PrimitiveComponent.*1e088aa233 // None // @ game+0x637d99c
	struct FName *9d203d4e3a(); // Function Engine.PrimitiveComponent.*9d203d4e3a // None // @ game+0x6368118
	void *7ab8b110bc(); // Function Engine.PrimitiveComponent.*7ab8b110bc // None // @ game+0x6368f8c
	void *cefd2a89e7(); // Function Engine.PrimitiveComponent.*cefd2a89e7 // None // @ game+0x637b1b8
	void *4135b69ecb(); // Function Engine.PrimitiveComponent.*4135b69ecb // None // @ game+0x637c484
	struct FName AddAngularImpulse(); // Function Engine.PrimitiveComponent.AddAngularImpulse // None // @ game+0x635c034
	void *065d5e11f8(struct FName BoneName); // Function Engine.PrimitiveComponent.*065d5e11f8 // None // @ game+0x6366468
	void *e06446eb04(); // Function Engine.PrimitiveComponent.*e06446eb04 // None // @ game+0x63739f0
	void *f6986ba874(); // Function Engine.PrimitiveComponent.*f6986ba874 // None // @ game+0x637cf08
	bool *285b57600a(); // Function Engine.PrimitiveComponent.*285b57600a // None // @ game+0x637d1ac
	void *5cdc853a89(); // Function Engine.PrimitiveComponent.*5cdc853a89 // None // @ game+0x6379838
	void SetCollisionObjectType(); // Function Engine.PrimitiveComponent.SetCollisionObjectType // None // @ game+0x6378edc
	struct FVector AddImpulseAtLocation(); // Function Engine.PrimitiveComponent.AddImpulseAtLocation // None // @ game+0x635d0e8
	void *b9e13958df(); // Function Engine.PrimitiveComponent.*b9e13958df // None // @ game+0x63668bc
	void SetAllPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity // None // @ game+0x6377488
	void *29c20efb0b(); // Function Engine.PrimitiveComponent.*29c20efb0b // None // @ game+0x6365804
	void *056cc90593(); // Function Engine.PrimitiveComponent.*056cc90593 // None // @ game+0x6378a40
	struct FVector SetPhysicsAngularVelocity(bool bAddToCurrent); // Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity // None // @ game+0x8ed79c
	void SetAngularDamping(); // Function Engine.PrimitiveComponent.SetAngularDamping // None // @ game+0x6377620
	struct FName AddImpulse(); // Function Engine.PrimitiveComponent.AddImpulse // None // @ game+0x635cfa8
	enum class ECollisionChannel *58f998cca1(); // Function Engine.PrimitiveComponent.*58f998cca1 // None // @ game+0x63790a0
	void *6ad19621d9(); // Function Engine.PrimitiveComponent.*6ad19621d9 // None // @ game+0x637b810
	void *6721a3eb8a(); // Function Engine.PrimitiveComponent.*6721a3eb8a // None // @ game+0x635ec60
	void *601c402444(); // Function Engine.PrimitiveComponent.*601c402444 // None // @ game+0x637eef4
	void GetOverlappingComponents(); // Function Engine.PrimitiveComponent.GetOverlappingComponents // None // @ game+0x6369ee0
	void AddForce(struct FVector force); // Function Engine.PrimitiveComponent.AddForce // None // @ game+0x635c908
	void *1f028ad67d(); // Function Engine.PrimitiveComponent.*1f028ad67d // None // @ game+0x636690c
	struct FName *75116bc348(); // Function Engine.PrimitiveComponent.*75116bc348 // None // @ game+0x6374458
	void *46193842e9(); // Function Engine.PrimitiveComponent.*46193842e9 // None // @ game+0x6361f8c
	void *10f75e50ac(); // Function Engine.PrimitiveComponent.*10f75e50ac // None // @ game+0x63787e8
	void *e3b0f43f9e(struct FVector Point); // Function Engine.PrimitiveComponent.*e3b0f43f9e // None // @ game+0x636a444
	struct FName *36ad2d15e7(); // Function Engine.PrimitiveComponent.*36ad2d15e7 // None // @ game+0x6366760
	void *fec7ca08f4(struct FName BoneName); // Function Engine.PrimitiveComponent.*fec7ca08f4 // None // @ game+0x63690ec
	void *0e38375bb9(); // Function Engine.PrimitiveComponent.*0e38375bb9 // None // @ game+0x636b778
	void *23f39ad152(); // Function Engine.PrimitiveComponent.*23f39ad152 // None // @ game+0x6379ae8
	struct FVector AddForceAtLocationLocal(struct FVector Location); // Function Engine.PrimitiveComponent.AddForceAtLocationLocal // None // @ game+0x635cb94
	void CreateDynamicMaterialInstance(int32 ElementIndex); // Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance // None // @ game+0x63621f4
	void *923a62a1b9(); // Function Engine.PrimitiveComponent.*923a62a1b9 // None // @ game+0x6379710
	struct FName GetPhysicsLinearVelocity(); // Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity // None // @ game+0x8eac50
	void *41428e55af(); // Function Engine.PrimitiveComponent.*41428e55af // None // @ game+0x636f7c0
	void *9f5fbe7730(); // Function Engine.PrimitiveComponent.*9f5fbe7730 // None // @ game+0x6379578
	struct FVector SetCenterOfMass(); // Function Engine.PrimitiveComponent.SetCenterOfMass // None // @ game+0x6378b6c
	void *95f3208c0a(); // Function Engine.PrimitiveComponent.*95f3208c0a // None // @ game+0x6377588
	void *926dc117b6(); // Function Engine.PrimitiveComponent.*926dc117b6 // None // @ game+0x63668e4
	void *d7c852a7d5(); // Function Engine.PrimitiveComponent.*d7c852a7d5 // None // @ game+0x637240c
	struct TArray<struct AActor*> GetOverlappingActors(); // Function Engine.PrimitiveComponent.GetOverlappingActors // None // @ game+0x6369ce8
	void *b76664dec1(); // Function Engine.PrimitiveComponent.*b76664dec1 // None // @ game+0x637eedc
	void *a306d03f54(); // Function Engine.PrimitiveComponent.*a306d03f54 // None // @ game+0xb055d8
};

// Class Engine.MeshClippingUnderwaterComponent
// Size: 0xa50 (Inherited: 0xa20)
struct UMeshClippingUnderwaterComponent : UBoxComponent {
	bool bEnabled; // 0xa18(0x01)
	bool bUseParentBounds; // 0xa19(0x01)
	float ExtendUpwards; // 0xa1c(0x04)
	float ExtendDownwards; // 0xa20(0x04)
	char pad_A2A[0x26]; // 0xa2a(0x26)

	void *82a7f4086c(); // Function Engine.MeshClippingUnderwaterComponent.*82a7f4086c // None // @ game+0x63a28c4
};

// Class Engine.SphereComponent
// Size: 0xa10 (Inherited: 0xa10)
struct USphereComponent : U*9de72ef8ed {
	float SphereRadius; // 0xa08(0x04)

	void *1abcd804d2(); // Function Engine.SphereComponent.*1abcd804d2 // None // @ game+0x63a4b60
	void *b260e3db57(); // Function Engine.SphereComponent.*b260e3db57 // None // @ game+0x63a4fb4
	float *2f3634333f(); // Function Engine.SphereComponent.*2f3634333f // None // @ game+0x63cbfb0
	void *68beb37286(); // Function Engine.SphereComponent.*68beb37286 // None // @ game+0x63a6eac
};

// Class Engine.*9dff3f6d02
// Size: 0xa10 (Inherited: 0xa10)
struct U*9dff3f6d02 : USphereComponent {
	float SphereRadius; // 0xa08(0x04)

	void *1abcd804d2(); // Function Engine.SphereComponent.*1abcd804d2 // None // @ game+0x63a4b60
	void *b260e3db57(); // Function Engine.SphereComponent.*b260e3db57 // None // @ game+0x63a4fb4
	float *2f3634333f(); // Function Engine.SphereComponent.*2f3634333f // None // @ game+0x63cbfb0
	void *68beb37286(); // Function Engine.SphereComponent.*68beb37286 // None // @ game+0x63a6eac
};

// Class Engine.TextRenderComponent
// Size: 0xa40 (Inherited: 0x9f0)
struct UTextRenderComponent : UPrimitiveComponent {
	struct FText Text; // 0x9e8(0x18)
	struct UMaterialInterface* TextMaterial; // 0xa00(0x08)
	struct UFont* Font; // 0xa08(0x08)
	enum class *df0763a63b HorizontalAlignment; // 0xa10(0x01)
	enum class *4dcbcda624 VerticalAlignment; // 0xa11(0x01)
	struct FColor TextRenderColor; // 0xa14(0x04)
	float XScale; // 0xa18(0x04)
	float YScale; // 0xa1c(0x04)
	float WorldSize; // 0xa20(0x04)
	float *ab61ef1a5f; // 0xa24(0x04)
	float HorizSpacingAdjust; // 0xa28(0x04)
	float VertSpacingAdjust; // 0xa2c(0x04)
	char bAlwaysRenderAsText : 1; // 0xa30(0x01)
	char pad_A36_1 : 7; // 0xa36(0x01)
	char pad_A37[0x9]; // 0xa37(0x09)

	void *a9cb2f5a9e(); // Function Engine.TextRenderComponent.*a9cb2f5a9e // None // @ game+0x63cebf0
	void *2c7f3184f4(); // Function Engine.TextRenderComponent.*2c7f3184f4 // None // @ game+0x63a5ca8
	void *00be626f8e(); // Function Engine.TextRenderComponent.*00be626f8e // None // @ game+0x63cf8e4
	void *09ea111001(); // Function Engine.TextRenderComponent.*09ea111001 // None // @ game+0x63a5d3c
	void SetText(); // Function Engine.TextRenderComponent.SetText // None // @ game+0x63cda48
	void *9407988de6(); // Function Engine.TextRenderComponent.*9407988de6 // None // @ game+0x63c6f94
	void *f2db948d68(); // Function Engine.TextRenderComponent.*f2db948d68 // None // @ game+0x63cea30
	void *b39989fab8(); // Function Engine.TextRenderComponent.*b39989fab8 // None // @ game+0x63cdb48
	void *bdc5471a2f(); // Function Engine.TextRenderComponent.*bdc5471a2f // None // @ game+0x63acf20
	void *49de05b8e9(); // Function Engine.TextRenderComponent.*49de05b8e9 // None // @ game+0x63cdbe4
	void *6a23b654f4(); // Function Engine.TextRenderComponent.*6a23b654f4 // None // @ game+0x63cf844
	void *850a5424e1(); // Function Engine.TextRenderComponent.*850a5424e1 // None // @ game+0x63c7034
	void *d11bb11796(); // Function Engine.TextRenderComponent.*d11bb11796 // None // @ game+0x63c6450
	void *8ca07644c2(); // Function Engine.TextRenderComponent.*8ca07644c2 // None // @ game+0x63cf6c8
};

// Class Engine.VectorFieldComponent
// Size: 0xa10 (Inherited: 0x9f0)
struct UVectorFieldComponent : UPrimitiveComponent {
	struct UVectorField* VectorField; // 0x9e8(0x08)
	float Intensity; // 0x9f0(0x04)
	float Tightness; // 0x9f4(0x04)
	char *62daaa2b79 : 1; // 0x9f8(0x01)
	char pad_A00_1 : 7; // 0xa00(0x01)
	char pad_A01[0xf]; // 0xa01(0x0f)

	void SetIntensity(); // Function Engine.VectorFieldComponent.SetIntensity // None // @ game+0x566f0d4
};

// Class Engine.RadialForceComponent
// Size: 0x4f0 (Inherited: 0x4c0)
struct URadialForceComponent : USceneComponent {
	float Radius; // 0x4c0(0x04)
	enum class *d6dc0510f4 Falloff; // 0x4c4(0x01)
	char pad_4C5[0x3]; // 0x4c5(0x03)
	float ImpulseStrength; // 0x4c8(0x04)
	char bImpulseVelChange : 1; // 0x4cc(0x01)
	char bIgnoreOwningActor : 1; // 0x4cc(0x01)
	char pad_4CC_2 : 6; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)
	float ForceStrength; // 0x4d0(0x04)
	float DestructibleDamage; // 0x4d4(0x04)
	struct TArray<enum class EObjectTypeQuery> ObjectTypesToAffect; // 0x4d8(0x10)
	char pad_4E8[0x8]; // 0x4e8(0x08)

	void *2df1905387(); // Function Engine.RadialForceComponent.*2df1905387 // None // @ game+0x6384238
	void *2170013cc4(); // Function Engine.RadialForceComponent.*2170013cc4 // None // @ game+0x63bd9d4
	void *9d3f73d5f3(); // Function Engine.RadialForceComponent.*9d3f73d5f3 // None // @ game+0x5664338
};

// Class Engine.TextureCube
// Size: 0x150 (Inherited: 0xb8)
struct UTextureCube : UTexture {
	bool *3dbb71015c; // 0xb8(0x01)
	char pad_B9[0x97]; // 0xb9(0x97)
};

// Class Engine.ReflectionCaptureComponent
// Size: 0x510 (Inherited: 0x4c0)
struct UReflectionCaptureComponent : USceneComponent {
	struct UBillboardComponent* *6707c4ef7e; // 0x4c0(0x08)
	enum class *87c08bb85b ReflectionSourceType; // 0x4c8(0x01)
	bool bOverrideCullDistance; // 0x4c9(0x01)
	enum class *c0765ad24b IndoorOutdoorMask; // 0x4ca(0x01)
	char pad_4CB[0x5]; // 0x4cb(0x05)
	struct UTextureCube* Cubemap; // 0x4d0(0x08)
	struct UTextureCube* *2aa695f13a; // 0x4d8(0x08)
	float SourceCubemapAngle; // 0x4e0(0x04)
	float Brightness; // 0x4e4(0x04)
	struct FVector CaptureOffset; // 0x4e8(0x0c)
	float CullDistance; // 0x4f4(0x04)
	char pad_4F8[0x18]; // 0x4f8(0x18)
};

// Class Engine.BoxReflectionCaptureComponent
// Size: 0x520 (Inherited: 0x510)
struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x508(0x04)
	struct UBoxComponent* PreviewInfluenceBox; // 0x510(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x518(0x08)
};

// Class Engine.BoxReflectionCaptureSAComponent
// Size: 0x520 (Inherited: 0x520)
struct UBoxReflectionCaptureSAComponent : UBoxReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x508(0x04)
	struct UBoxComponent* PreviewInfluenceBox; // 0x510(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x518(0x08)
};

// Class Engine.*90b95f474a
// Size: 0x520 (Inherited: 0x510)
struct U*90b95f474a : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x508(0x04)
	struct U*9dff3f6d02* *c0fec6c2ff; // 0x510(0x08)
	struct UBoxComponent* PreviewCaptureBox; // 0x518(0x08)
};

// Class Engine.*9e69e793c0
// Size: 0x520 (Inherited: 0x510)
struct U*9e69e793c0 : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x508(0x04)
	float *777d957ad8; // 0x50c(0x04)
	struct U*9dff3f6d02* *c0fec6c2ff; // 0x510(0x08)
};

// Class Engine.*30ab50e62e
// Size: 0x620 (Inherited: 0x540)
struct U*30ab50e62e : USceneCaptureComponent {
	struct UBoxComponent* *a04c6cef4b; // 0x540(0x08)
	float *b32cd4dbb1; // 0x548(0x04)
	float *ab9b7a30fe; // 0x54c(0x04)
	float *79a04946cc; // 0x550(0x04)
	int32 ScreenPercentage; // 0x554(0x04)
	float *ebc802595c; // 0x558(0x04)
	float DistanceFromPlaneFadeStart; // 0x55c(0x04)
	float DistanceFromPlaneFadeEnd; // 0x560(0x04)
	float *a0122c20dc; // 0x564(0x04)
	float *bcbddc034a; // 0x568(0x04)
	float *ddc7910fab; // 0x56c(0x04)
	float *afe83153a7; // 0x570(0x04)
	bool *6d919610af; // 0x574(0x01)
	char pad_575[0xab]; // 0x575(0xab)
};

// Class Engine.SceneCaptureComponentCube
// Size: 0x550 (Inherited: 0x540)
struct USceneCaptureComponentCube : USceneCaptureComponent {
	struct UTextureRenderTargetCube* TextureTarget; // 0x540(0x08)
	char pad_548[0x8]; // 0x548(0x08)

	void CaptureScene(); // Function Engine.SceneCaptureComponentCube.CaptureScene // None // @ game+0x63901bc
};

// Class Engine.*911a43bfb5
// Size: 0x560 (Inherited: 0x4c0)
struct U*911a43bfb5 : USceneComponent {
	char bLiveTexture : 1; // 0x4c0(0x01)
	char bSupportsDepth : 1; // 0x4c0(0x01)
	char bNoAlphaChannel : 1; // 0x4c0(0x01)
	char pad_4C0_3 : 5; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct UTexture* Texture; // 0x4c8(0x08)
	struct UTexture* LeftTexture; // 0x4d0(0x08)
	char bQuadPreserveTextureRatio : 1; // 0x4d8(0x01)
	char pad_4D8_1 : 7; // 0x4d8(0x01)
	char pad_4D9[0x3]; // 0x4d9(0x03)
	struct FVector2D QuadSize; // 0x4dc(0x08)
	struct FBox2D UVRect; // 0x4e4(0x14)
	float CylinderRadius; // 0x4f8(0x04)
	float CylinderOverlayArc; // 0x4fc(0x04)
	int32 CylinderHeight; // 0x500(0x04)
	enum class EStereoLayerType StereoLayerType; // 0x504(0x01)
	enum class *c7b3a2efca StereoLayerShape; // 0x505(0x01)
	char pad_506[0x2]; // 0x506(0x02)
	int32 Priority; // 0x508(0x04)
	char pad_50C[0x54]; // 0x50c(0x54)

	void *606c98efc6(); // Function Engine.*911a43bfb5.*606c98efc6 // None // @ game+0x63a3748
	void *8f7c198bdb(); // Function Engine.*911a43bfb5.*8f7c198bdb // None // @ game+0x63cafe8
	void *db293a2f33(); // Function Engine.*911a43bfb5.*db293a2f33 // None // @ game+0x63cdc78
	void *6d0dd3363f(); // Function Engine.*911a43bfb5.*6d0dd3363f // None // @ game+0x63ce160
	void *a6d94b133b(); // Function Engine.*911a43bfb5.*a6d94b133b // None // @ game+0x5e2a6a4
	void SetPriority(); // Function Engine.*911a43bfb5.SetPriority // None // @ game+0x63caec0
	void *76afd527e1(); // Function Engine.*911a43bfb5.*76afd527e1 // None // @ game+0x63a6cd0
	void *c962c0f7b2(); // Function Engine.*911a43bfb5.*c962c0f7b2 // None // @ game+0x63b4510
	void *2652d136fe(); // Function Engine.*911a43bfb5.*2652d136fe // None // @ game+0x63a3730
};

// Class Engine.*4f57f7c40f
// Size: 0x4e0 (Inherited: 0x4c0)
struct U*4f57f7c40f : USceneComponent {
	float Strength; // 0x4c0(0x04)
	float Speed; // 0x4c4(0x04)
	float MinGustAmount; // 0x4c8(0x04)
	float MaxGustAmount; // 0x4cc(0x04)
	float Radius; // 0x4d0(0x04)
	char bPointWind : 1; // 0x4d4(0x01)
	char pad_4D4_1 : 7; // 0x4d4(0x01)
	char pad_4D5[0xb]; // 0x4d5(0x0b)

	void *e9d6f0ecae(); // Function Engine.*4f57f7c40f.*e9d6f0ecae // None // @ game+0x63c9500
	void *9e3e8f6729(); // Function Engine.*4f57f7c40f.*9e3e8f6729 // None // @ game+0x63cf35c
	void *42f175d2e5(); // Function Engine.*4f57f7c40f.*42f175d2e5 // None // @ game+0x63c9314
	void SetRadius(); // Function Engine.*4f57f7c40f.SetRadius // None // @ game+0x63cb09c
	void *5a3df888b7(); // Function Engine.*4f57f7c40f.*5a3df888b7 // None // @ game+0x63ccec0
	void SetSpeed(); // Function Engine.*4f57f7c40f.SetSpeed // None // @ game+0x63cbf10
};

// Class Engine.TimelineComponent
// Size: 0x2e0 (Inherited: 0x1f0)
struct UTimelineComponent : UActorComponent {
	struct FTimeline *ddc0e3ef6d; // 0x1f0(0xe0)
	char *8499a67b55 : 1; // 0x2d0(0x01)
	char pad_2D0_1 : 7; // 0x2d0(0x01)
	char pad_2D1[0xf]; // 0x2d1(0x0f)

	void *6970975b29(); // Function Engine.TimelineComponent.*6970975b29 // None // @ game+0x63699d4
	void SetVectorCurve(struct U*1ba2d2b086* NewVectorCurve); // Function Engine.TimelineComponent.SetVectorCurve // None // @ game+0x63ce5dc
	void PlayFromStart(); // Function Engine.TimelineComponent.PlayFromStart // None // @ game+0x63b9648
	void Stop(); // Function Engine.TimelineComponent.Stop // None // @ game+0x63d63a0
	void Play(); // Function Engine.TimelineComponent.Play // None // @ game+0x63b8e68
	void SetLooping(); // Function Engine.TimelineComponent.SetLooping // None // @ game+0x63c91ec
	void SetNewTime(); // Function Engine.TimelineComponent.SetNewTime // None // @ game+0x63c99c4
	void *1a6a17d1b9(); // Function Engine.TimelineComponent.*1a6a17d1b9 // None // @ game+0x63cddc8
	void *ca163c2520(); // Function Engine.TimelineComponent.*ca163c2520 // None // @ game+0x639f8c4
	void *92b2288bf0(); // Function Engine.TimelineComponent.*92b2288bf0 // None // @ game+0x63ab698
	void *d4609e55f2(); // Function Engine.TimelineComponent.*d4609e55f2 // None // @ game+0x63c7180
	void *7be3f24ace(); // Function Engine.TimelineComponent.*7be3f24ace // None // @ game+0x63a6034
	void GetPlayRate(); // Function Engine.TimelineComponent.GetPlayRate // None // @ game+0x63a2c78
	void OnRep_Timeline(); // Function Engine.TimelineComponent.OnRep_Timeline // None // @ game+0x63b8174
	struct UCurveFloat* SetFloatCurve(); // Function Engine.TimelineComponent.SetFloatCurve // None // @ game+0x63c5e58
	void IsLooping(); // Function Engine.TimelineComponent.IsLooping // None // @ game+0x63ab15c
	void *1b997b291a(); // Function Engine.TimelineComponent.*1b997b291a // None // @ game+0x63cdd18
	void Reverse(); // Function Engine.TimelineComponent.Reverse // None // @ game+0x63be22c
	void IsPlaying(); // Function Engine.TimelineComponent.IsPlaying // None // @ game+0x63ab260
	void SetPlayRate(); // Function Engine.TimelineComponent.SetPlayRate // None // @ game+0x63ca598
	void SetPlaybackPosition(float NewPosition); // Function Engine.TimelineComponent.SetPlaybackPosition // None // @ game+0x63ca630
	void ReverseFromEnd(); // Function Engine.TimelineComponent.ReverseFromEnd // None // @ game+0x63be25c
	struct U*1fa4fa0482* SetLinearColorCurve(); // Function Engine.TimelineComponent.SetLinearColorCurve // None // @ game+0x63c83a8
};

// Class Engine.AnimComposite
// Size: 0xb0 (Inherited: 0xa0)
struct UAnimComposite : U*24a15a77a5 {
	struct FAnimTrack *4c954c24e8; // 0xa0(0x10)
};

// Class Engine.AnimSequence
// Size: 0x1a0 (Inherited: 0xa0)
struct UAnimSequence : UAnimSequenceBase {
	int32 NumFrames; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct F*8d35e74c36> *115c55abd8; // 0xa8(0x10)
	char pad_B8[0x98]; // 0xb8(0x98)
	enum class EAdditiveAnimationType *bf6856f3a7; // 0x150(0x01)
	enum class *2fbaf4b5a5 *325a99b29c; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
	struct UAnimSequence* *72e70c09c9; // 0x158(0x08)
	int32 *930424804c; // 0x160(0x04)
	int32 *b41d655f3e; // 0x164(0x04)
	struct FName RetargetSource; // 0x168(0x08)
	enum class EAnimInterpolationType Interpolation; // 0x170(0x01)
	bool *b887810756; // 0x171(0x01)
	bool *7c185100a9; // 0x172(0x01)
	enum class ERootMotionRootLock *07020cca27; // 0x173(0x01)
	bool *f29e88e9a6; // 0x174(0x01)
	bool *d7d080b14e; // 0x175(0x01)
	char pad_176[0x2]; // 0x176(0x02)
	struct TArray<struct F*faa7441826> AuthoredSyncMarkers; // 0x178(0x10)
	char pad_188[0x18]; // 0x188(0x18)
};

// Class Engine.BlendSpaceBase
// Size: 0x140 (Inherited: 0x78)
struct UBlendSpaceBase : UAnimationAsset {
	char pad_78[0x8]; // 0x78(0x08)
	bool *71d5693568; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float AnimLength; // 0x84(0x04)
	struct TArray<struct F*727ca29295> *42ad741748; // 0x88(0x10)
	struct FInterpolationParameter *5c0266ffaa[0x03]; // 0x98(0x18)
	float *be76083362; // 0xb0(0x04)
	enum class ENotifyTriggerMode *f9db58d433; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	int32 *ed511ec57c; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FBlendSample> SampleData; // 0xc0(0x10)
	struct TArray<struct F*fff699ec0f> *f6564ccf92; // 0xd0(0x10)
	struct FBlendParameter *38b59e1e4b[0x03]; // 0xe0(0x60)
};

// Class Engine.BlendSpace
// Size: 0x148 (Inherited: 0x140)
struct UBlendSpace : UBlendSpaceBase {
	enum class *cb265b0a55 *4f26ae5e03; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// Class Engine.AimOffsetBlendSpace
// Size: 0x148 (Inherited: 0x148)
struct UAimOffsetBlendSpace : UBlendSpace {
	enum class *cb265b0a55 *4f26ae5e03; // 0x140(0x01)
};

// Class Engine.BlendSpace1D
// Size: 0x148 (Inherited: 0x140)
struct UBlendSpace1D : UBlendSpaceBase {
	bool *64b4179e57; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// Class Engine.AimOffsetBlendSpace1D
// Size: 0x148 (Inherited: 0x148)
struct UAimOffsetBlendSpace1D : UBlendSpace1D {
	bool *64b4179e57; // 0x140(0x01)
};

// Class Engine.PoseAsset
// Size: 0x190 (Inherited: 0x78)
struct UPoseAsset : UAnimationAsset {
	struct F*64d360f6b1 *4c33ffe94e; // 0x78(0x90)
	bool *7cce72fd22; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	int32 *4dd8d47817; // 0x10c(0x04)
	struct FName RetargetSource; // 0x110(0x08)
	char pad_118[0x78]; // 0x118(0x78)
};

// Class Engine.*33edc04730
// Size: 0x28 (Inherited: 0x28)
struct U*33edc04730 : UObject {
};

// Class Engine.*bcf9a878a8
// Size: 0x28 (Inherited: 0x28)
struct U*bcf9a878a8 : UInterface {
};

// Class Engine.AnimClassData
// Size: 0x98 (Inherited: 0x28)
struct UAnimClassData : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct F*426a5c2b9f> *930da18c23; // 0x30(0x10)
	struct USkeleton* TargetSkeleton; // 0x40(0x08)
	struct TArray<struct FAnimNotifyEvent> *aa7eeb7962; // 0x48(0x10)
	int32 *d30f64b6dd; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<int32> *ec05e139be; // 0x60(0x10)
	struct UStructProperty* *77f01af6c0; // 0x70(0x08)
	struct TArray<struct UStructProperty*> *08e4ac3c89; // 0x78(0x10)
	struct TArray<struct FName> *672092d76b; // 0x88(0x10)
};

// Class Engine.AnimCompress
// Size: 0x48 (Inherited: 0x28)
struct UAnimCompress : UObject {
	struct FString Description; // 0x28(0x10)
	char *6f2b554c06 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	enum class AnimationCompressionFormat *b6136e48ec; // 0x3c(0x01)
	enum class AnimationCompressionFormat *e93b168264; // 0x3d(0x01)
	enum class AnimationCompressionFormat *1def19490b; // 0x3e(0x01)
	char pad_3F[0x1]; // 0x3f(0x01)
	float *cb16fd1092; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.AnimCompress_Automatic
// Size: 0x50 (Inherited: 0x48)
struct UAnimCompress_Automatic : UAnimCompress {
	float *d7b3706a87; // 0x48(0x04)
	char *d3f514a708 : 1; // 0x4c(0x01)
	char *85cd2fc7cf : 1; // 0x4c(0x01)
	char *46c9ce3438 : 1; // 0x4c(0x01)
	char *d254646ccf : 1; // 0x4c(0x01)
	char *223ed4a3d1 : 1; // 0x4c(0x01)
	char *600954dc9f : 1; // 0x4c(0x01)
	char *03c9893596 : 1; // 0x4c(0x01)
	char pad_4C_7 : 1; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.AnimCompress_BitwiseCompressOnly
// Size: 0x48 (Inherited: 0x48)
struct UAnimCompress_BitwiseCompressOnly : UAnimCompress {
	struct FString Description; // 0x28(0x10)
	char *6f2b554c06 : 1; // 0x38(0x01)
	enum class AnimationCompressionFormat *b6136e48ec; // 0x3c(0x01)
	enum class AnimationCompressionFormat *e93b168264; // 0x3d(0x01)
	enum class AnimationCompressionFormat *1def19490b; // 0x3e(0x01)
	float *cb16fd1092; // 0x40(0x04)
};

// Class Engine.AnimCompress_LeastDestructive
// Size: 0x48 (Inherited: 0x48)
struct UAnimCompress_LeastDestructive : UAnimCompress {
	struct FString Description; // 0x28(0x10)
	char *6f2b554c06 : 1; // 0x38(0x01)
	enum class AnimationCompressionFormat *b6136e48ec; // 0x3c(0x01)
	enum class AnimationCompressionFormat *e93b168264; // 0x3d(0x01)
	enum class AnimationCompressionFormat *1def19490b; // 0x3e(0x01)
	float *cb16fd1092; // 0x40(0x04)
};

// Class Engine.AnimCompress_RemoveEverySecondKey
// Size: 0x50 (Inherited: 0x48)
struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32 *83d01e5fcb; // 0x48(0x04)
	char *a331c8c0ed : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.AnimCompress_RemoveLinearKeys
// Size: 0x68 (Inherited: 0x48)
struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float *c14fa7b1ee; // 0x48(0x04)
	float *5813cddbdd; // 0x4c(0x04)
	float *4d48aa5596; // 0x50(0x04)
	float *3b90f88db0; // 0x54(0x04)
	float *42372c7c86; // 0x58(0x04)
	float *f64af338ca; // 0x5c(0x04)
	float *e808aa3fb6; // 0x60(0x04)
	char *be773b7791 : 1; // 0x64(0x01)
	char *2e931d4a2b : 1; // 0x64(0x01)
	char pad_64_2 : 6; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class Engine.AnimCompress_PerTrackCompression
// Size: 0xe8 (Inherited: 0x68)
struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float *870cd19dbd; // 0x68(0x04)
	float *6e6c5feb28; // 0x6c(0x04)
	float *988ab33e09; // 0x70(0x04)
	float *2dc46e36cf; // 0x74(0x04)
	struct TArray<enum class AnimationCompressionFormat> *3dbfa29c5c; // 0x78(0x10)
	struct TArray<enum class AnimationCompressionFormat> *d4b8fba86b; // 0x88(0x10)
	struct TArray<enum class AnimationCompressionFormat> *f4100b5a40; // 0x98(0x10)
	char bResampleAnimation : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float *765d184b4c; // 0xac(0x04)
	int32 *3ee3dce5b1; // 0xb0(0x04)
	char *d9f7f24cc1 : 1; // 0xb4(0x01)
	char *8619cf6436 : 1; // 0xb4(0x01)
	char pad_B4_2 : 6; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	int32 *c1c4920d80; // 0xb8(0x04)
	float *9ea115adbe; // 0xbc(0x04)
	float *274386c7b7; // 0xc0(0x04)
	char *56ecfe3479 : 1; // 0xc4(0x01)
	char pad_C4_1 : 7; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float *a371f512e2; // 0xc8(0x04)
	float *582ed16713; // 0xcc(0x04)
	float *b1c3fe1c25; // 0xd0(0x04)
	float *242dbe76db; // 0xd4(0x04)
	float *cc475e81d0; // 0xd8(0x04)
	char pad_DC[0xc]; // 0xdc(0x0c)
};

// Class Engine.AnimCompress_RemoveTrivialKeys
// Size: 0x58 (Inherited: 0x48)
struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float *c14fa7b1ee; // 0x48(0x04)
	float *5813cddbdd; // 0x4c(0x04)
	float *4d48aa5596; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.*559e64016f
// Size: 0x3b0 (Inherited: 0x398)
struct U*559e64016f : UAnimInstance {
	struct UAnimationAsset* *f9193b4ce9; // 0x398(0x08)
	DelegateProperty *f5d52508c8; // 0x3a0(0x10)

	void *f4a952625d(float InPosition); // Function Engine.*559e64016f.*f4a952625d // None // @ game+0x63caa9c
	void *df5001ae95(); // Function Engine.*559e64016f.*df5001ae95 // None // @ game+0x63ca840
	void SetPlayRate(); // Function Engine.*559e64016f.SetPlayRate // None // @ game+0x63ca500
	void *c44bfe7db3(); // Function Engine.*559e64016f.*c44bfe7db3 // None // @ game+0x63cb2cc
	void SetLooping(); // Function Engine.*559e64016f.SetLooping // None // @ game+0x63c9158
	void *6994a9b2f1(float InPlayRate); // Function Engine.*559e64016f.*6994a9b2f1 // None // @ game+0x63b8e7c
	float *9d6faa9657(); // Function Engine.*559e64016f.*9d6faa9657 // None // @ game+0x63cad7c
	void *77287b7822(); // Function Engine.*559e64016f.*77287b7822 // None // @ game+0x63d63b8
	void SetPosition(); // Function Engine.*559e64016f.SetPosition // None // @ game+0x63ca8d4
	bool *34bdb257a2(); // Function Engine.*559e64016f.*34bdb257a2 // None // @ game+0x63c0be8
	void *1ab067b5fe(); // Function Engine.*559e64016f.*1ab067b5fe // None // @ game+0x63a19bc
	void *33f5eeb816(); // Function Engine.*559e64016f.*33f5eeb816 // None // @ game+0x63c15cc
};

// Class Engine.*460f026d00
// Size: 0x28 (Inherited: 0x28)
struct U*460f026d00 : UObject {
};

// Class Engine.AnimNotify_PlaySound
// Size: 0x58 (Inherited: 0x38)
struct UAnimNotify_PlaySound : UAnimNotify {
	struct USoundBase* Sound; // 0x38(0x08)
	float VolumeMultiplier; // 0x40(0x04)
	float PitchMultiplier; // 0x44(0x04)
	char bFollow : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FName AttachName; // 0x50(0x08)
};

// Class Engine.*12d27e31b4
// Size: 0x38 (Inherited: 0x38)
struct U*12d27e31b4 : UAnimNotify {
};

// Class Engine.*fd55961460
// Size: 0x30 (Inherited: 0x30)
struct U*fd55961460 : UAnimNotifyState {
};

// Class Engine.AnimNotifyState_TimedParticleEffect
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x30(0x08)
	struct FName SocketName; // 0x38(0x08)
	struct FVector LocationOffset; // 0x40(0x0c)
	struct FRotator RotationOffset; // 0x4c(0x0c)
	bool bDestroyAtEnd; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Engine.AnimNotifyState_Trail
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_Trail : UAnimNotifyState {
	struct UParticleSystem* PSTemplate; // 0x30(0x08)
	struct FName FirstSocketName; // 0x38(0x08)
	struct FName SecondSocketName; // 0x40(0x08)
	enum class *7c7293e9c8 WidthScaleMode; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FName WidthScaleCurve; // 0x50(0x08)
	char bRecycleSpawnedSystems : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	void OverridePSTemplate(struct USkeletalMeshComponent* MeshComp); // Function Engine.AnimNotifyState_Trail.OverridePSTemplate // None // @ game+0x26a108
};

// Class Engine.AnimSet
// Size: 0xf0 (Inherited: 0x28)
struct UAnimSet : UObject {
	char *0d245a1407 : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FName> *3e22d1a080; // 0x30(0x10)
	struct TArray<struct F*04c2f29f5d> *982bb84834; // 0x40(0x10)
	struct TArray<bool> *79f6901398; // 0x50(0x10)
	struct TArray<bool> *8333017942; // 0x60(0x10)
	struct TArray<struct FName> *5c3db89f0b; // 0x70(0x10)
	struct TArray<struct FName> *bf851a2748; // 0x80(0x10)
	struct FName *50a2bc3395; // 0x90(0x08)
	struct FName *1a9705dabb; // 0x98(0x08)
	char pad_A0[0x50]; // 0xa0(0x50)
};

// Class Engine.AssetImportData
// Size: 0x28 (Inherited: 0x28)
struct UAssetImportData : UObject {
};

// Class Engine.AssetManager
// Size: 0x3a0 (Inherited: 0x28)
struct UAssetManager : UObject {
	char pad_28[0x260]; // 0x28(0x260)
	struct TArray<struct UObject*> *80e9455ddf; // 0x288(0x10)
	bool *1b1c16c05f; // 0x298(0x01)
	bool *0a2563d751; // 0x299(0x01)
	bool *96b1a4a072; // 0x29a(0x01)
	bool *a819758304; // 0x29b(0x01)
	bool *19d9ebcfed; // 0x29c(0x01)
	bool *2021e72610; // 0x29d(0x01)
	bool *ec35153584; // 0x29e(0x01)
	char pad_29F[0x101]; // 0x29f(0x101)
};

// Class Engine.AssetMappingTable
// Size: 0x38 (Inherited: 0x28)
struct UAssetMappingTable : UObject {
	struct TArray<struct F*cf68db82ff> *9fadd2535a; // 0x28(0x10)
};

// Class Engine.AutomationTestSettings
// Size: 0x320 (Inherited: 0x28)
struct UAutomationTestSettings : UObject {
	struct TArray<struct FString> EngineTestModules; // 0x28(0x10)
	struct TArray<struct FString> EditorTestModules; // 0x38(0x10)
	struct FStringAssetReference AutomationTestmap; // 0x48(0x10)
	struct TArray<struct F*8c7469d46d> EditorPerformanceTestMaps; // 0x58(0x10)
	struct TArray<struct FStringAssetReference> AssetsToOpen; // 0x68(0x10)
	struct F*db82af7711 BuildPromotionTest; // 0x78(0x1f0)
	struct F*c6045635b7 MaterialEditorPromotionTest; // 0x268(0x30)
	struct F*fba027fbea ParticleEditorPromotionTest; // 0x298(0x10)
	struct F*843ed1145e BlueprintEditorPromotionTest; // 0x2a8(0x30)
	struct TArray<struct FString> TestLevelFolders; // 0x2d8(0x10)
	struct TArray<struct F*7fe8ecb7f7> ExternalTools; // 0x2e8(0x10)
	struct TArray<struct F*c115a4f143> ImportExportTestDefinitions; // 0x2f8(0x10)
	struct TArray<struct F*60c520701f> LaunchOnSettings; // 0x308(0x10)
	struct FIntPoint DefaultScreenshotResolution; // 0x318(0x08)
};

// Class Engine.AvoidanceManager
// Size: 0xe0 (Inherited: 0x28)
struct UAvoidanceManager : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	float DefaultTimeToLive; // 0x30(0x04)
	float LockTimeAfterAvoid; // 0x34(0x04)
	float LockTimeAfterClean; // 0x38(0x04)
	float DeltaTimeToPredict; // 0x3c(0x04)
	float ArtificialRadiusExpansion; // 0x40(0x04)
	float TestHeightDifference; // 0x44(0x04)
	float HeightCheckMargin; // 0x48(0x04)
	char pad_4C[0x94]; // 0x4c(0x94)

	float *f810028411(); // Function Engine.AvoidanceManager.*f810028411 // None // @ game+0x63bd5d8
	void *da036e80eb(float DeltaTime); // Function Engine.AvoidanceManager.*da036e80eb // None // @ game+0x639c614
	struct UMovementComponent* *46b2345596(); // Function Engine.AvoidanceManager.*46b2345596 // None // @ game+0x639c73c
	int32 *16debf4022(); // Function Engine.AvoidanceManager.*16debf4022 // None // @ game+0x639c7ec
	void *3313048d73(); // Function Engine.AvoidanceManager.*3313048d73 // None // @ game+0x63a27b0
	void *bab82256dd(); // Function Engine.AvoidanceManager.*bab82256dd // None // @ game+0x63a2614
};

// Class Engine.BlendProfile
// Size: 0x48 (Inherited: 0x28)
struct UBlendProfile : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct USkeleton* *09bab62682; // 0x30(0x08)
	struct TArray<struct F*706cda68b7> *27b7e873f4; // 0x38(0x10)
};

// Class Engine.BlueprintCore
// Size: 0x50 (Inherited: 0x28)
struct UBlueprintCore : UObject {
	struct UClass* *0c3b5e225a; // 0x28(0x08)
	struct UClass* GeneratedClass; // 0x30(0x08)
	bool *c05171fa02; // 0x38(0x01)
	bool *f90b5ecb2b; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FGuid *cd7b464eda; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.Blueprint
// Size: 0x1a0 (Inherited: 0x50)
struct UBlueprint : UBlueprintCore {
	char bRecompileOnLoad : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UClass* ParentClass; // 0x58(0x08)
	struct UObject* *dc844bd7af; // 0x60(0x08)
	char *7285e5f110 : 1; // 0x68(0x01)
	char *cab1411839 : 1; // 0x68(0x01)
	char pad_68_2 : 6; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x70(0x08)
	struct TArray<struct UActorComponent*> *9ef71c20e3; // 0x78(0x10)
	struct TArray<struct U*a7a0563fde*> *259f597d99; // 0x88(0x10)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x98(0x08)
	enum class EBlueprintType BlueprintType; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 *d085bc18a1; // 0xa4(0x04)
	char pad_A8[0xe8]; // 0xa8(0xe8)
	bool bNativize; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)
};

// Class Engine.AnimBlueprint
// Size: 0x1c0 (Inherited: 0x1a0)
struct UAnimBlueprint : UBlueprint {
	struct USkeleton* TargetSkeleton; // 0x198(0x08)
	struct TArray<struct F*00a65185c9> Groups; // 0x1a0(0x10)
	bool *b16fe671be; // 0x1b0(0x01)
	bool *ce51a937f1; // 0x1b1(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)
};

// Class Engine.LevelScriptBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)
struct ULevelScriptBlueprint : UBlueprint {
	char bRecompileOnLoad : 1; // 0x50(0x01)
	struct UClass* ParentClass; // 0x58(0x08)
	struct UObject* *dc844bd7af; // 0x60(0x08)
	char *7285e5f110 : 1; // 0x68(0x01)
	char *cab1411839 : 1; // 0x68(0x01)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x70(0x08)
	struct TArray<struct UActorComponent*> *9ef71c20e3; // 0x78(0x10)
	struct TArray<struct U*a7a0563fde*> *259f597d99; // 0x88(0x10)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0x98(0x08)
	enum class EBlueprintType BlueprintType; // 0xa0(0x01)
	int32 *d085bc18a1; // 0xa4(0x04)
	bool bNativize; // 0x190(0x01)
};

// Class Engine.*f74249eacd
// Size: 0x28 (Inherited: 0x28)
struct U*f74249eacd : UBlueprintFunctionLibrary {
};

// Class Engine.*bdc40fd461
// Size: 0x30 (Inherited: 0x30)
struct U*bdc40fd461 : U*c5e4cb7a4d {
};

// Class Engine.*877a214e49
// Size: 0x30 (Inherited: 0x30)
struct U*877a214e49 : U*c5e4cb7a4d {
};

// Class Engine.*b2cdc39baa
// Size: 0x2a0 (Inherited: 0x1f0)
struct U*b2cdc39baa : UGameInstance {
	struct FMulticastDelegate ApplicationWillDeactivateDelegate; // 0x1e8(0x10)
	struct FMulticastDelegate ApplicationHasReactivatedDelegate; // 0x1f8(0x10)
	struct FMulticastDelegate ApplicationWillEnterBackgroundDelegate; // 0x208(0x10)
	struct FMulticastDelegate ApplicationHasEnteredForegroundDelegate; // 0x218(0x10)
	struct FMulticastDelegate ApplicationWillTerminateDelegate; // 0x228(0x10)
	struct FMulticastDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x238(0x10)
	struct FMulticastDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x248(0x10)
	struct FMulticastDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x258(0x10)
	struct FMulticastDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x268(0x10)
	struct FMulticastDelegate ApplicationReceivedLocalNotificationDelegate; // 0x278(0x10)
	struct FMulticastDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x288(0x10)

	void PlatformRegisteredForUserNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformRegisteredForUserNotificationsDelegate__DelegateSignature // None // @ game+0x26a108
	void PlatformScreenOrientationChangedDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformScreenOrientationChangedDelegate__DelegateSignature // None // @ game+0x26a108
	void PlatformReceivedRemoteNotificationDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformReceivedRemoteNotificationDelegate__DelegateSignature // None // @ game+0x26a108
	void PlatformReceivedLocalNotificationDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformReceivedLocalNotificationDelegate__DelegateSignature // None // @ game+0x26a108
	void PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformFailedToRegisterForRemoteNotificationsDelegate__DelegateSignature // None // @ game+0x26a108
	void PlatformDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformDelegate__DelegateSignature // None // @ game+0x26a108
	void PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature(); // DelegateFunction Engine.*b2cdc39baa.PlatformRegisteredForRemoteNotificationsDelegate__DelegateSignature // None // @ game+0x26a108
};

// Class Engine.*aca7435b3d
// Size: 0x28 (Inherited: 0x28)
struct U*aca7435b3d : UBlueprintFunctionLibrary {
};

// Class Engine.*c7f4dd461b
// Size: 0x28 (Inherited: 0x28)
struct U*c7f4dd461b : UBlueprintFunctionLibrary {
};

// Class Engine.*7e2f3c2c81
// Size: 0x28 (Inherited: 0x28)
struct U*7e2f3c2c81 : UBlueprintFunctionLibrary {
};

// Class Engine.*f416fdb428
// Size: 0x28 (Inherited: 0x28)
struct U*f416fdb428 : UBlueprintFunctionLibrary {
};

// Class Engine.CollisionProfile
// Size: 0x158 (Inherited: 0x38)
struct UCollisionProfile : U*5cde8540b3 {
	struct TArray<struct F*c681dac543> Profiles; // 0x38(0x10)
	struct TArray<struct F*14863ddeb2> DefaultChannelResponses; // 0x48(0x10)
	struct TArray<struct FCustomProfile> EditProfiles; // 0x58(0x10)
	struct TArray<struct FRedirector> ProfileRedirects; // 0x68(0x10)
	struct TArray<struct FRedirector> CollisionChannelRedirects; // 0x78(0x10)
	char pad_88[0xd0]; // 0x88(0xd0)
};

// Class Engine.KismetSystemLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetSystemLibrary : UBlueprintFunctionLibrary {
};

// Class Engine.GameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UGameplayStatics : UBlueprintFunctionLibrary {
};

// Class Engine.HeadMountedDisplayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {
};

// Class Engine.KismetArrayLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetArrayLibrary : UBlueprintFunctionLibrary {
};

// Class Engine.*2b72a7254e
// Size: 0x28 (Inherited: 0x28)
struct U*2b72a7254e : UBlueprintFunctionLibrary {
};

// Class Engine.KismetInputLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetInputLibrary : UBlueprintFunctionLibrary {
};

// Class Engine.KismetMaterialLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetMaterialLibrary : UBlueprintFunctionLibrary {
};

// Class Engine.KismetMathLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetMathLibrary : UBlueprintFunctionLibrary {
};

// Class Engine.*3c9e89be4b
// Size: 0x28 (Inherited: 0x28)
struct U*3c9e89be4b : UBlueprintFunctionLibrary {
};

// Class Engine.KismetRenderingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetRenderingLibrary : UBlueprintFunctionLibrary {
};

// Class Engine.*47f1d7b161
// Size: 0x28 (Inherited: 0x28)
struct U*47f1d7b161 : UBlueprintFunctionLibrary {
};

// Class Engine.*d2a05b0f4f
// Size: 0x28 (Inherited: 0x28)
struct U*d2a05b0f4f : UBlueprintFunctionLibrary {
};

// Class Engine.*ff3e418260
// Size: 0x28 (Inherited: 0x28)
struct U*ff3e418260 : UBlueprintFunctionLibrary {
};

// Class Engine.*87e6af4089
// Size: 0x28 (Inherited: 0x28)
struct U*87e6af4089 : UBlueprintFunctionLibrary {
};

// Class Engine.World
// Size: 0xc60 (Inherited: 0x28)
struct UWorld : UObject {
	char pad_28[0xa8]; // 0x28(0xa8)
	struct APhysicsVolume* *6cf3d5d6b3; // 0xd0(0x08)
	struct TArray<struct ULevelStreaming*> *74611d959c; // 0xd8(0x10)
	char pad_E8[0x20]; // 0xe8(0x20)
	struct AGameNetworkManager* *3c10b8cdc3; // 0x108(0x08)
	struct TArray<struct U*541523bba7*> *722782e6ab; // 0x110(0x10)
	char pad_120[0x90]; // 0x120(0x90)
	struct AGameModeBase* *e94ebbf0c0; // 0x1b0(0x08)
	struct UWorldComposition* WorldComposition; // 0x1b8(0x08)
	char pad_1C0[0x10]; // 0x1c0(0x10)
	struct UNetDriver* NetDriver; // 0x1d0(0x08)
	struct UCanvas* *bd84ceb728; // 0x1d8(0x08)
	char pad_1E0[0x10]; // 0x1e0(0x10)
	struct UCanvas* *944a120df6; // 0x1f0(0x08)
	char pad_1F8[0xf8]; // 0x1f8(0xf8)
	struct U*d7f53fe8ac* *1fddd1a9e5; // 0x2f0(0x08)
	struct UPhysicsCollisionHandler* PhysicsCollisionHandler; // 0x2f8(0x08)
	char pad_300[0x68]; // 0x300(0x68)
	struct U*d7f53fe8ac* *7609cd9440; // 0x368(0x08)
	char pad_370[0x28]; // 0x370(0x28)
	struct TArray<struct F*f52b0ce0bc> *ed08dc647f; // 0x398(0x10)
	char pad_3A8[0x10]; // 0x3a8(0x10)
	struct TArray<struct UObject*> *40352b6f95; // 0x3b8(0x10)
	char pad_3C8[0x378]; // 0x3c8(0x378)
	struct UAISystemBase* AISystem; // 0x740(0x08)
	struct UAvoidanceManager* AvoidanceManager; // 0x748(0x08)
	char pad_750[0x20]; // 0x750(0x20)
	struct UDemoNetDriver* DemoNetDriver; // 0x770(0x08)
	char pad_778[0x70]; // 0x778(0x70)
	struct TArray<struct UObject*> *7cdcd7039a; // 0x7e8(0x10)
	struct UDirectionalLightComponent* *61037ddb82; // 0x7f8(0x08)
	char pad_800[0x20]; // 0x800(0x20)
	struct FString *4e615ac9b8; // 0x820(0x10)
	struct ULevel* *77c4b4a828; // 0x830(0x08)
	struct ULevel* *75877b23f2; // 0x838(0x08)
	char pad_840[0xa0]; // 0x840(0xa0)
	struct ULevel* CurrentLevel; // 0x8e0(0x08)
	struct AParticleEventManager* *db571e5a7d; // 0x8e8(0x08)
	char pad_8F0[0x18]; // 0x8f0(0x18)
	struct UNavigationSystem* NavigationSystem; // 0x908(0x08)
	char pad_910[0xb0]; // 0x910(0xb0)
	struct TArray<struct ULevel*> Levels; // 0x9c0(0x10)
	struct U*d7f53fe8ac* *1f30cd41c8; // 0x9d0(0x08)
	char pad_9D8[0x5a]; // 0x9d8(0x5a)
	char *f5c396fc84 : 1; // 0xa32(0x01)
	char pad_A32_1 : 7; // 0xa32(0x01)
	char pad_A33[0x6d]; // 0xa33(0x6d)
	struct TMap<struct F*fa6445d1a1, struct F*65d445c338> *fa29bbb6b9; // 0xaa0(0x50)
	char pad_AF0[0x170]; // 0xaf0(0x170)
};

// Class Engine.NavigationSystem
// Size: 0x4d0 (Inherited: 0x28)
struct UNavigationSystem : UBlueprintFunctionLibrary {
	struct ANavigationData* *13d6d0723b; // 0x28(0x08)
	struct ANavigationData* *59bd0a8f56; // 0x30(0x08)
	char bAutoCreateNavigationData : 1; // 0x38(0x01)
	char bAllowClientSideNavigation : 1; // 0x38(0x01)
	char *6c25b430fa : 1; // 0x38(0x01)
	char bInitialBuildingLocked : 1; // 0x38(0x01)
	char pad_38_4 : 1; // 0x38(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x38(0x01)
	char pad_38_6 : 2; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float ActiveTilesUpdateInterval; // 0x44(0x04)
	struct TArray<struct F*b471f00637> SupportedAgents; // 0x48(0x10)
	float DirtyAreasUpdateFreq; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct ANavigationData*> *acbf324277; // 0x60(0x10)
	struct TArray<struct FBox> *d0b42718c2; // 0x70(0x10)
	struct TMap<int32, struct ANavigationData*> *97976ce32f; // 0x80(0x50)
	struct TArray<struct ANavigationData*> *fb4253cc8d; // 0xd0(0x10)
	char pad_E0[0x60]; // 0xe0(0x60)
	struct FMulticastDelegate *1b92e6af8c; // 0x140(0x10)
	struct FMulticastDelegate OnNavigationGenerationFinishedDelegate; // 0x150(0x10)
	char pad_160[0x124]; // 0x160(0x124)
	enum class FNavigationSystemRunMode OperationMode; // 0x284(0x01)
	char pad_285[0x243]; // 0x285(0x243)
	uint32 DynamicNavThreadNum; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)

	void *42a4502d76(); // Function Engine.NavigationSystem.*42a4502d76 // None // @ game+0x63f3618
	struct UClass* GetRandomReachablePointInRadius(); // Function Engine.NavigationSystem.GetRandomReachablePointInRadius // None // @ game+0x63eaa9c
	void *09b41f9b47(struct UObject* WorldContext, struct FVector ProjectedLocation, struct UClass* FilterClass); // Function Engine.NavigationSystem.*09b41f9b47 // None // @ game+0x63ee9a0
	struct ANavigationData* *bf1f893fb8(struct UClass* FilterClass); // Function Engine.NavigationSystem.*bf1f893fb8 // None // @ game+0x63ea3ac
	void *c59df34011(); // Function Engine.NavigationSystem.*c59df34011 // None // @ game+0x63ea228
	struct AController* *13a0c8c642(); // Function Engine.NavigationSystem.*13a0c8c642 // None // @ game+0x63f36f0
	void *05a7bcbad1(); // Function Engine.NavigationSystem.*05a7bcbad1 // None // @ game+0x63f27f4
	void *48728cd54d(); // Function Engine.NavigationSystem.*48728cd54d // None // @ game+0x63f5490
	void *5b8e13ac2a(); // Function Engine.NavigationSystem.*5b8e13ac2a // None // @ game+0x63f0ca8
	struct UObject* *f1084f83c2(); // Function Engine.NavigationSystem.*f1084f83c2 // None // @ game+0x63ec2f8
	void *280ffc9e60(); // Function Engine.NavigationSystem.*280ffc9e60 // None // @ game+0x63f275c
	void *78ff767515(); // Function Engine.NavigationSystem.*78ff767515 // None // @ game+0x63f1b04
	struct AController* *6a6c8dcd2d(struct UObject* WorldContext, struct FVector RayEnd); // Function Engine.NavigationSystem.*6a6c8dcd2d // None // @ game+0x63f0434
	bool *0e44be043b(); // Function Engine.NavigationSystem.*0e44be043b // None // @ game+0x63f5584
	void ProjectPointToNavigation(struct UObject* WorldContext, struct ANavigationData* NavData, struct FVector QueryExtent); // Function Engine.NavigationSystem.ProjectPointToNavigation // None // @ game+0x63f12d0
	struct UClass* *921192497e(); // Function Engine.NavigationSystem.*921192497e // None // @ game+0x63e8718
	void *7bbb15c288(float TileGenerationRadius); // Function Engine.NavigationSystem.*7bbb15c288 // None // @ game+0x63f14e0
	struct UClass* *50d1bd596a(); // Function Engine.NavigationSystem.*50d1bd596a // None // @ game+0x63ee36c
	struct UClass* GetPathLength(struct FVector PathStart, float PathLength); // Function Engine.NavigationSystem.GetPathLength // None // @ game+0x63ea628
	float *e159211865(struct AActor* PathfindingContext); // Function Engine.NavigationSystem.*e159211865 // None // @ game+0x63e84ec
	void *2aca15a518(struct UObject* WorldContext); // Function Engine.NavigationSystem.*2aca15a518 // None // @ game+0x63ec3bc
	struct UClass* *d9e83aceb0(); // Function Engine.NavigationSystem.*d9e83aceb0 // None // @ game+0x63ee13c
	struct UClass* GetRandomPointInNavigableRadius(struct UObject* WorldContext, float Radius); // Function Engine.NavigationSystem.GetRandomPointInNavigableRadius // None // @ game+0x63ea8ac
};

// Class Engine.*76e6993898
// Size: 0x28 (Inherited: 0x28)
struct U*76e6993898 : UBlueprintFunctionLibrary {
};

// Class Engine.*4ee0a3c07f
// Size: 0x30 (Inherited: 0x30)
struct U*4ee0a3c07f : U*bdc40fd461 {
};

// Class Engine.*2827acbe4b
// Size: 0x30 (Inherited: 0x30)
struct U*2827acbe4b : U*c5e4cb7a4d {
};

// Class Engine.*8610e413d0
// Size: 0x28 (Inherited: 0x28)
struct U*8610e413d0 : UBlueprintFunctionLibrary {
};

// Class Engine.*b578d37854
// Size: 0x28 (Inherited: 0x28)
struct U*b578d37854 : UBlueprintFunctionLibrary {
};

// Class Engine.*55091781de
// Size: 0x38 (Inherited: 0x28)
struct U*55091781de : UObject {
	struct UEdGraphNode* Node; // 0x28(0x08)
	struct FColor *a79b134445; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.AnimBlueprintGeneratedClass
// Size: 0x428 (Inherited: 0x3b8)
struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct TArray<struct F*426a5c2b9f> *930da18c23; // 0x3c0(0x10)
	struct USkeleton* TargetSkeleton; // 0x3d0(0x08)
	struct TArray<struct FAnimNotifyEvent> *aa7eeb7962; // 0x3d8(0x10)
	int32 *d30f64b6dd; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct TArray<int32> *ec05e139be; // 0x3f0(0x10)
	char pad_400[0x18]; // 0x400(0x18)
	struct TArray<struct FName> *672092d76b; // 0x418(0x10)
};

// Class Engine.BodySetup
// Size: 0x3a0 (Inherited: 0x28)
struct UBodySetup : UObject {
	struct F*b1850c8096 *80b9fb922b; // 0x28(0x48)
	struct FName BoneName; // 0x70(0x08)
	enum class EPhysicsType PhysicsType; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	char bAlwaysFullAnimWeight : 1; // 0x7c(0x01)
	char bConsiderForBounds : 1; // 0x7c(0x01)
	char *0e73fa0501 : 1; // 0x7c(0x01)
	char *37c9a7c76f : 1; // 0x7c(0x01)
	char *da966dab1e : 1; // 0x7c(0x01)
	char *bf7bb012c1 : 1; // 0x7c(0x01)
	char *b3ec6c1919 : 1; // 0x7c(0x01)
	char pad_7C_7 : 1; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0x80(0x08)
	enum class *ab299be711 CollisionReponse; // 0x88(0x01)
	enum class ECollisionTraceFlag *a4be1e0fa2; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct FBodyInstance DefaultInstance; // 0x90(0x230)
	struct F*de38513b35 *de38513b35; // 0x2c0(0x10)
	float MinContactOffset; // 0x2d0(0x04)
	float BuildScale; // 0x2d4(0x04)
	struct FVector BuildScale3D; // 0x2d8(0x0c)
	char pad_2E4[0xbc]; // 0x2e4(0xbc)
};

// Class Engine.*62eb7cfdfd
// Size: 0x3d0 (Inherited: 0x3a0)
struct U*62eb7cfdfd : UBodySetup {
	struct F*6922805fd0 *2f3eabe98b; // 0x3a0(0x30)
};

// Class Engine.PhysicsAsset
// Size: 0x108 (Inherited: 0x28)
struct UPhysicsAsset : UObject {
	struct TArray<int32> *6bbd754b6d; // 0x28(0x10)
	struct TArray<struct USkeletalBodySetup*> *83e3bc961d; // 0x38(0x10)
	struct TArray<struct UPhysicsConstraintTemplate*> *875003d086; // 0x48(0x10)
	char pad_58[0xa0]; // 0x58(0xa0)
	struct TArray<struct UBodySetup*> BodySetup; // 0xf8(0x10)
};

// Class Engine.SkeletalBodySetup
// Size: 0x3b0 (Inherited: 0x3a0)
struct USkeletalBodySetup : UBodySetup {
	struct TArray<struct F*2fcd8cc2b2> *a8d9e92905; // 0x3a0(0x10)
};

// Class Engine.*95d9f6ced5
// Size: 0x38 (Inherited: 0x28)
struct U*95d9f6ced5 : UObject {
	struct TArray<struct FInputBlendPose> *b54b50db37; // 0x28(0x10)
};

// Class Engine.*ba77e92031
// Size: 0x50 (Inherited: 0x28)
struct U*ba77e92031 : UObject {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	struct TArray<struct FString> *0b01cd737a; // 0x40(0x10)
};

// Class Engine.*178d04d42b
// Size: 0x38 (Inherited: 0x28)
struct U*178d04d42b : UObject {
	float *e58a3b1158; // 0x28(0x04)
	struct FIntPoint Location; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.Breakpoint
// Size: 0x40 (Inherited: 0x28)
struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UEdGraphNode* Node; // 0x30(0x08)
	char *92650f4471 : 1; // 0x38(0x01)
	char *aade429b90 : 1; // 0x38(0x01)
	char *e43faea80b : 1; // 0x38(0x01)
	char pad_38_3 : 5; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.BrushBuilder
// Size: 0x80 (Inherited: 0x28)
struct UBrushBuilder : UObject {
	struct FString *8e057f880f; // 0x28(0x10)
	struct FString Tooltip; // 0x38(0x10)
	char *59ff87b409 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FVector> Vertices; // 0x50(0x10)
	struct TArray<struct F*b53522766a> Polys; // 0x60(0x10)
	struct FName Layer; // 0x70(0x08)
	char *24d5de6ec3 : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class Engine.ButtonStyleAsset
// Size: 0x2d0 (Inherited: 0x28)
struct UButtonStyleAsset : UObject {
	struct F*d5cdd95f37 *d5cdd95f37; // 0x28(0x2a8)
};

// Class Engine.CameraAnim
// Size: 0x5e0 (Inherited: 0x28)
struct UCameraAnim : UObject {
	struct U*e3d2da250a* *eee4f230c8; // 0x28(0x08)
	float AnimLength; // 0x30(0x04)
	struct FBox BoundingBox; // 0x34(0x1c)
	char *e231bfa1a1 : 1; // 0x50(0x01)
	char *aac45e143a : 1; // 0x50(0x01)
	char pad_50_2 : 6; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float *5d0f61c14f; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
	struct FPostProcessSettings *287c44571f; // 0x60(0x570)
	float *a57471c92e; // 0x5d0(0x04)
	char pad_5D4[0xc]; // 0x5d4(0x0c)
};

// Class Engine.*de6aae17ea
// Size: 0x110 (Inherited: 0x28)
struct U*de6aae17ea : UObject {
	struct UCameraAnim* *308e812b9c; // 0x28(0x08)
	struct U*27ba39bd87* *27ba39bd87; // 0x30(0x08)
	char pad_38[0x18]; // 0x38(0x18)
	float PlayRate; // 0x50(0x04)
	char pad_54[0x14]; // 0x54(0x14)
	struct U*423dfd5b29* *1fa87c2ae5; // 0x68(0x08)
	struct U*b12b5709af* *7ce2782896; // 0x70(0x08)
	enum class ECameraAnimPlaySpace *b6a684a682; // 0x78(0x01)
	char pad_79[0x97]; // 0x79(0x97)

	void SetDuration(); // Function Engine.*de6aae17ea.SetDuration // None // @ game+0x63f2470
	void SetScale(); // Function Engine.*de6aae17ea.SetScale // None // @ game+0x63f2d0c
	void Stop(); // Function Engine.*de6aae17ea.Stop // None // @ game+0x63f3cd4
};

// Class Engine.*ea345062c7
// Size: 0x48 (Inherited: 0x28)
struct U*ea345062c7 : UObject {
	char *f806e08ca5 : 1; // 0x28(0x01)
	char bExclusive : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	bool Priority; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct APlayerCameraManager* CameraOwner; // 0x30(0x08)
	float AlphaInTime; // 0x38(0x04)
	float AlphaOutTime; // 0x3c(0x04)
	float Alpha; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	void *1abc07ca04(); // Function Engine.*ea345062c7.*1abc07ca04 // None // @ game+0x63e4678
	void *35a9047805(); // Function Engine.*ea345062c7.*35a9047805 // None // @ game+0x5672b24
	void *d35e8bc247(); // Function Engine.*ea345062c7.*d35e8bc247 // None // @ game+0xcb5834
	void *8895e00330(); // Function Engine.*ea345062c7.*8895e00330 // None // @ game+0x63e7388
	void BlueprintModifyCamera(float DeltaTime, struct FRotator ViewRotation, struct FVector NewViewLocation); // Function Engine.*ea345062c7.BlueprintModifyCamera // None // @ game+0x26a108
	float BlueprintModifyPostProcess(); // Function Engine.*ea345062c7.BlueprintModifyPostProcess // None // @ game+0x26a108
};

// Class Engine.*436388bfde
// Size: 0x60 (Inherited: 0x48)
struct U*436388bfde : U*ea345062c7 {
	struct TArray<struct UCameraShake*> *1398dcb0d4; // 0x48(0x10)
	float *50cff3ed94; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.Canvas
// Size: 0x2f0 (Inherited: 0x28)
struct UCanvas : UObject {
	float OrgX; // 0x28(0x04)
	float OrgY; // 0x2c(0x04)
	float *e7afc99bde; // 0x30(0x04)
	float *1cb4ab84f1; // 0x34(0x04)
	struct FColor DrawColor; // 0x38(0x04)
	char *ba0ab01520 : 1; // 0x3c(0x01)
	char *07c809e203 : 1; // 0x3c(0x01)
	char *bcf02c972b : 1; // 0x3c(0x01)
	char pad_3C_3 : 5; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32 SizeX; // 0x40(0x04)
	int32 SizeY; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
	struct FPlane *e2f36d0902; // 0x50(0x10)
	struct UTexture2D* DefaultTexture; // 0x60(0x08)
	struct UTexture2D* GradientTexture0; // 0x68(0x08)
	struct U*1a90702b7b* *1a90702b7b; // 0x70(0x08)
	char pad_78[0x278]; // 0x78(0x278)

	struct FVector2D *411d1afe45(struct UTexture* BackGroundTexture, struct UTexture* RightBorderTexture, struct UTexture* BottomBorderTexture, struct FVector2D ScreenSize); // Function Engine.Canvas.*411d1afe45 // None // @ game+0x63ecb84
	void *8423334782(struct UFont* RenderFont); // Function Engine.Canvas.*8423334782 // None // @ game+0x63eebd8
	struct FVector2D *f268b391c9(); // Function Engine.Canvas.*f268b391c9 // None // @ game+0x63ed0d8
	struct FVector2D *d3ee9f0fea(struct FLinearColor RenderColor, struct FLinearColor ShadowColor, bool bCentreX, bool bOutlined); // Function Engine.Canvas.*d3ee9f0fea // None // @ game+0x63ed8c4
	float *750cb34243(); // Function Engine.Canvas.*750cb34243 // None // @ game+0x63ed200
	void *8b24afb08d(struct FVector2D ScreenPosition, int32 NumberOfSides); // Function Engine.Canvas.*8b24afb08d // None // @ game+0x63ed6f8
	float *7e9e72f33b(); // Function Engine.Canvas.*7e9e72f33b // None // @ game+0x63ed354
	void *7b15aeae2c(struct UFont* RenderFont, struct FVector2D Scale); // Function Engine.Canvas.*7b15aeae2c // None // @ game+0x63eed04
	float *05305dc5d0(); // Function Engine.Canvas.*05305dc5d0 // None // @ game+0x63edce8
	void *f59e3e5a0a(); // Function Engine.Canvas.*f59e3e5a0a // None // @ game+0x63ee004
	struct UMaterialInterface* *6422081192(); // Function Engine.Canvas.*6422081192 // None // @ game+0x63ed5c0
	struct FVector *d5ebe0e136(); // Function Engine.Canvas.*d5ebe0e136 // None // @ game+0x63ee8dc
	void *c2be887da1(struct FVector WorldOrigin); // Function Engine.Canvas.*c2be887da1 // None // @ game+0x63eca30
};

// Class Engine.*29f7d38a7b
// Size: 0x80 (Inherited: 0x68)
struct U*29f7d38a7b : UChannel {
	struct UNetConnection* Connection; // 0x28(0x08)
	char pad_70[0x10]; // 0x70(0x10)
};

// Class Engine.VoiceChannel
// Size: 0x78 (Inherited: 0x68)
struct UVoiceChannel : UChannel {
	struct UNetConnection* Connection; // 0x28(0x08)
	char pad_70[0x8]; // 0x70(0x08)
};

// Class Engine.*1ceec92b0d
// Size: 0x608 (Inherited: 0x28)
struct U*1ceec92b0d : UObject {
	struct F*ea1c6f5c2e *ea1c6f5c2e; // 0x28(0x5e0)
};

// Class Engine.Commandlet
// Size: 0x80 (Inherited: 0x28)
struct UCommandlet : UObject {
	struct FString HelpDescription; // 0x28(0x10)
	struct FString HelpUsage; // 0x38(0x10)
	struct FString HelpWebLink; // 0x48(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x58(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x68(0x10)
	char IsServer : 1; // 0x78(0x01)
	char IsClient : 1; // 0x78(0x01)
	char IsEditor : 1; // 0x78(0x01)
	char LogToConsole : 1; // 0x78(0x01)
	char ShowErrorCount : 1; // 0x78(0x01)
	char pad_78_5 : 3; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// Class Engine.*c15025d53a
// Size: 0xc8 (Inherited: 0x28)
struct U*c15025d53a : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UNetDriver* NetDriver; // 0x30(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x38(0x08)
	char pad_40[0x88]; // 0x40(0x88)
};

// Class Engine.GPCFakeEngine
// Size: 0xf50 (Inherited: 0xf50)
struct UGPCFakeEngine : UEngine {
	struct UFont* TinyFont; // 0x30(0x08)
	struct FStringAssetReference TinyFontName; // 0x38(0x10)
	struct UFont* SmallFont; // 0x48(0x08)
	struct FStringAssetReference SmallFontName; // 0x50(0x10)
	struct UFont* *b2fb6d5918; // 0x60(0x08)
	struct FStringAssetReference MediumFontName; // 0x68(0x10)
	struct UFont* LargeFont; // 0x78(0x08)
	struct FStringAssetReference LargeFontName; // 0x80(0x10)
	struct UFont* *17d1a5c92f; // 0x90(0x08)
	struct FStringAssetReference SubtitleFontName; // 0x98(0x10)
	struct TArray<struct UFont*> *dddf4c9088; // 0xa8(0x10)
	float NetClientTicksPerSecond; // 0xb8(0x04)
	struct UTexture2D* *cdaf3acb6f; // 0xc0(0x08)
	struct FString WireframeMaterialName; // 0xc8(0x10)
	struct FStringClassReference AvoidanceManagerClassName; // 0xd8(0x10)
	struct FString VertexColorViewModeMaterialName_RedOnly; // 0xe8(0x10)
	struct FStringClassReference GameViewportClientClassName; // 0xf8(0x10)
	struct FString PlayOnConsoleSaveDir; // 0x108(0x10)
	struct FString VertexColorViewModeMaterialName_GreenOnly; // 0x118(0x10)
	struct UTexture2D* *9735291500; // 0x128(0x08)
	float MaxPixelShaderAdditiveComplexityCount; // 0x130(0x04)
	struct FString LevelColorationUnlitMaterialName; // 0x138(0x10)
	struct UMaterialInstanceDynamic* *882cf2b119; // 0x148(0x08)
	struct FString LevelColorationLitMaterialName; // 0x150(0x10)
	struct UClass* *3b5143fa7c; // 0x160(0x08)
	struct TArray<struct FLinearColor> ShaderComplexityColors; // 0x168(0x10)
	struct FStringAssetReference MiniFontTextureName; // 0x178(0x10)
	struct TArray<struct FLinearColor> LightComplexityColors; // 0x188(0x10)
	struct TArray<struct F*1c8a6a1959> StatColorMappings; // 0x198(0x10)
	struct FColor *f8920bc53c; // 0x1a8(0x04)
	struct FStringAssetReference HighFrequencyNoiseTextureName; // 0x200(0x10)
	struct TArray<struct FString> AdditionalFontNames; // 0x210(0x10)
	struct FStringAssetReference DefaultTextureName; // 0x220(0x10)
	char bPauseOnLossOfFocus : 1; // 0x230(0x01)
	int32 MaxParticleResize; // 0x234(0x04)
	struct FColor *c2b218ca0a; // 0x238(0x04)
	struct FStringAssetReference InvalidLightmapSettingsMaterialName; // 0x240(0x10)
	struct FStringAssetReference DefaultDiffuseTextureName; // 0x250(0x10)
	struct FString ShadedLevelColorationLitMaterialName; // 0x260(0x10)
	struct UMaterialInstanceDynamic* *67a2670d5b; // 0x270(0x08)
	char bSubtitlesEnabled : 1; // 0x278(0x01)
	struct FColor *1786a736fd; // 0x27c(0x04)
	float FixedFrameRate; // 0x280(0x04)
	float DisplayGamma; // 0x284(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x288(0x08)
	int32 *3fd60cfe7a; // 0x290(0x04)
	struct TArray<struct F*ecc95ccbfb> *6ae7184684; // 0x298(0x10)
	struct UTexture2D* DefaultTexture; // 0x2a8(0x08)
	struct UMaterial* WireframeMaterial; // 0x2b0(0x08)
	struct UMaterial* *904e29baa1; // 0x2b8(0x08)
	struct FString LightingTexelDensityName; // 0x2c0(0x10)
	struct UMaterialInstanceDynamic* *41801eae84; // 0x2d0(0x08)
	struct FStringClassReference AIControllerClassName; // 0x2d8(0x10)
	struct UTexture2D* MiniFontTexture; // 0x2e8(0x08)
	struct UMaterial* *6095551fc5; // 0x2f0(0x08)
	struct UTexture2D* *3354aa5029; // 0x300(0x08)
	struct FString VertexColorMaterialName; // 0x308(0x10)
	struct UMaterial* *158ef2b728; // 0x318(0x08)
	struct UClass* *bae4c5214e; // 0x320(0x08)
	struct UClass* *db10b3ff9c; // 0x328(0x08)
	int32 MaxParticleResizeWarn; // 0x330(0x04)
	struct UMaterial* RemoveSurfaceMaterial; // 0x338(0x08)
	struct FColor *f649ca17a3; // 0x340(0x04)
	struct UMaterialInstanceDynamic* *419956b350; // 0x348(0x08)
	struct UClass* *cfd562edce; // 0x350(0x08)
	float PrimitiveProbablyVisibleTime; // 0x358(0x04)
	struct FStringAssetReference DefaultBokehTextureName; // 0x360(0x10)
	float RenderLightMapDensityColorScale; // 0x370(0x04)
	struct UClass* *920ed2f2c5; // 0x378(0x08)
	char bRenderLightMapDensityGrayscale : 1; // 0x380(0x01)
	struct FColor *4c5bc6371e; // 0x384(0x04)
	struct UTexture2D* *8bd6845839; // 0x388(0x08)
	struct FColor *18889b23a4; // 0x390(0x04)
	struct UTextureCube* *c142ea92cf; // 0x398(0x08)
	struct TArray<struct FLinearColor> HLODColorationColors; // 0x3a0(0x10)
	struct FLinearColor LightMapDensityVertexMappedColor; // 0x3b0(0x10)
	char bCanBlueprintsTickByDefault : 1; // 0x3c0(0x01)
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x3c0(0x01)
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x3c0(0x01)
	char bEnableEditorPSysRealtimeLOD : 1; // 0x3c0(0x01)
	char bSmoothFrameRate : 1; // 0x3c0(0x01)
	char bUseFixedFrameRate : 1; // 0x3c0(0x01)
	struct FStringClassReference DefaultBlueprintBaseClassName; // 0x3c8(0x10)
	struct UMaterial* *8c96c8d713; // 0x3d8(0x08)
	struct FStringClassReference GameSingletonClassName; // 0x3e0(0x10)
	struct TArray<struct F*305cf84e03> ActiveStructRedirects; // 0x3f0(0x10)
	struct TArray<struct FString> *4fa0bda95b; // 0x400(0x10)
	float CameraTranslationThreshold; // 0x428(0x04)
	struct UMaterial* *289fbcf95e; // 0x430(0x08)
	struct FString VertexColorViewModeMaterialName_ColorOnly; // 0x440(0x10)
	struct TArray<struct FLinearColor> LODColorationColors; // 0x450(0x10)
	int32 *4a63163b75; // 0x460(0x04)
	struct UClass* *6618489028; // 0x468(0x08)
	struct TArray<struct F*93620d28f2> ActivePluginRedirects; // 0x470(0x10)
	float MinLightMapDensity; // 0x480(0x04)
	struct UMaterial* LevelColorationLitMaterial; // 0x488(0x08)
	struct UMaterialInstanceDynamic* *5ecd46dbd6; // 0x490(0x08)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x498(0x10)
	float RenderLightMapDensityGrayscaleScale; // 0x4a8(0x04)
	float MinDesiredFrameRate; // 0x4ac(0x04)
	struct UGameUserSettings* GameUserSettings; // 0x4b0(0x08)
	struct UClass* *7ebef4665a; // 0x4b8(0x08)
	struct UMaterial* *569ed0c9a4; // 0x4c0(0x08)
	struct TArray<struct FLinearColor> StreamingAccuracyColors; // 0x4c8(0x10)
	float MaxES2PixelShaderAdditiveComplexityCount; // 0x4d8(0x04)
	struct UMaterial* DebugMeshMaterial; // 0x4e0(0x08)
	float MaxLightMapDensity; // 0x4e8(0x04)
	struct FColor *57697de8c8; // 0x4ec(0x04)
	struct UMaterialInstanceDynamic* *5b15e6100a; // 0x4f0(0x08)
	struct FStringAssetReference WeightMapPlaceholderTextureName; // 0x4f8(0x10)
	float MeshLODRange; // 0x508(0x04)
	struct FColor *d488e8b15f; // 0x50c(0x04)
	struct TArray<struct F*588c0e2b3a> ActiveGameNameRedirects; // 0x510(0x10)
	float NearClipPlane; // 0x520(0x04)
	struct FString VertexColorViewModeMaterialName_BlueOnly; // 0x528(0x10)
	struct FColor *701230078d; // 0x538(0x04)
	struct FStringAssetReference ArrowMaterialName; // 0x540(0x10)
	struct UAssetManager* AssetManager; // 0x550(0x08)
	struct UMaterial* *13a610002f; // 0x558(0x08)
	struct FColor *0aed2d0bb7; // 0x560(0x04)
	struct FString *9a7e172902; // 0x568(0x10)
	struct UMaterial* ShadedLevelColorationLitMaterial; // 0x578(0x08)
	struct UObject* *bc69c4c2bd; // 0x580(0x08)
	struct UMaterial* *d4696a6c50; // 0x588(0x08)
	struct FStringClassReference NavigationSystemClassName; // 0x590(0x10)
	struct UMaterial* LevelColorationUnlitMaterial; // 0x5a0(0x08)
	struct UMaterial* *fdd0f56f71; // 0x5a8(0x08)
	enum class *ea60031bfe *52dc8ce7e2; // 0x5b0(0x01)
	struct FStringAssetReference DefaultPhysMaterialName; // 0x5b8(0x10)
	struct FStringAssetReference RemoveSurfaceMaterialName; // 0x5c8(0x10)
	struct UTexture* WeightMapPlaceholderTexture; // 0x5d8(0x08)
	struct FStringClassReference LocalPlayerClassName; // 0x5e0(0x10)
	struct UTexture* DefaultDiffuseTexture; // 0x5f0(0x08)
	struct FStringAssetReference DefaultBSPVertexTextureName; // 0x5f8(0x10)
	struct UMaterial* *e7a58e7605; // 0x608(0x08)
	struct FFloatRange SmoothedFrameRateRange; // 0x610(0x10)
	struct FStringClassReference WorldSettingsClassName; // 0x620(0x10)
	struct FColor *c79f672cb1; // 0x630(0x04)
	struct UClass* *e7983e4706; // 0x638(0x08)
	struct UTexture2D* *d8417c9941; // 0x640(0x08)
	struct FColor *cb2dd6ab2d; // 0x648(0x04)
	struct UTexture2D* *07a2faa8d2; // 0x650(0x08)
	struct FLinearColor LightMapDensitySelectedColor; // 0x658(0x10)
	struct FLinearColor DefaultSelectedMaterialColor; // 0x668(0x10)
	struct FLinearColor *44bd42ad56; // 0x678(0x10)
	struct FLinearColor *ba04574914; // 0x688(0x10)
	struct FLinearColor *8e0bdb2efe; // 0x698(0x10)
	struct FLinearColor *613128785f; // 0x6a8(0x10)
	bool *f9293e381d; // 0x6b8(0x01)
	char bEnableOnScreenDebugMessages : 1; // 0x6bc(0x01)
	char *216307556a : 1; // 0x6bc(0x01)
	char bSuppressMapWarnings : 1; // 0x6bc(0x01)
	char bDisableAILogging : 1; // 0x6bc(0x01)
	uint32 bEnableVisualLogRecordingOnStart; // 0x6c0(0x04)
	struct FBox *3dc6cbcd94; // 0x6c4(0x1c)
	int32 *7b0f12bdd7; // 0x6e4(0x04)
	char *8bdcda74ad : 1; // 0x6e8(0x01)
	struct FString ParticleEventManagerClassPath; // 0x6f0(0x10)
	float SelectionHighlightIntensity; // 0x720(0x04)
	float *460eba5c32; // 0x724(0x04)
	float BSPSelectionHighlightIntensity; // 0x728(0x04)
	float HoverHighlightIntensity; // 0x72c(0x04)
	float *fdb4353d84; // 0x730(0x04)
	float PrimitiveBaseIntensity; // 0x734(0x04)
	float PrimitiveSelectedIntensity; // 0x738(0x04)
	float PrimitiveHoverIntensity; // 0x73c(0x04)
	struct FStringClassReference PhysicsCollisionHandlerClassName; // 0x9d0(0x10)
	struct FStringAssetReference DebugMeshMaterialName; // 0x9e0(0x10)
	struct FStringAssetReference PreIntegratedSkinBRDFTextureName; // 0x9f0(0x10)
	struct TArray<struct FLinearColor> StationaryLightOverlapColors; // 0xa00(0x10)
	struct FStringClassReference AssetManagerClassName; // 0xa10(0x10)
	struct UClass* *ec063d291c; // 0xa20(0x08)
	char bHardwareSurveyEnabled : 1; // 0xa28(0x01)
	struct TArray<struct F*96501223f2> ActiveClassRedirects; // 0xa30(0x10)
	struct UMaterial* VertexColorMaterial; // 0xa40(0x08)
	int32 MaximumLoopIterationCount; // 0xa48(0x04)
	struct FStringAssetReference LightMapDensityTextureName; // 0xa50(0x10)
	struct TArray<struct F*34e3a3f3fe> NetDriverDefinitions; // 0xc30(0x10)
	struct TArray<struct FString> ServerActors; // 0xc40(0x10)
	struct TArray<struct FString> *ac79ee85a0; // 0xc50(0x10)
	char *2eec60230d : 1; // 0xc60(0x01)
	struct FLinearColor LightingOnlyBrightness; // 0xc64(0x10)
	struct FLinearColor LightingOnlySpecular; // 0xc74(0x10)
	struct UMaterialInstanceDynamic* *7d728f8e49; // 0xc88(0x08)
	struct FStringClassReference GameUserSettingsClassName; // 0xc90(0x10)
	struct FStringAssetReference PreviewShadowsIndicatorMaterialName; // 0xca0(0x10)
	char bAllowMatureLanguage : 1; // 0xcb0(0x01)
	float CameraRotationThreshold; // 0xcb4(0x04)
	int32 *6953cade36; // 0xcb8(0x04)
	struct FString ShadedLevelColorationUnlitMaterialName; // 0xcc0(0x10)
	struct FStringAssetReference DefaultBloomKernelTextureName; // 0xcd0(0x10)
	float *b1796a28c0; // 0xce0(0x04)
	struct FStringAssetReference DefaultReflectionCaptureTextureName; // 0xce8(0x10)
	struct FStringClassReference LevelScriptActorClassName; // 0xcf8(0x10)
	char bSubtitlesForcedOff : 1; // 0xd08(0x01)
	struct FStringClassReference ConsoleClassName; // 0xd10(0x10)
	struct UGameViewportClient* GameViewport; // 0xd20(0x08)
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0xd28(0x01)
	int32 NumPawnsAllowedToBeSpawnedInAFrame; // 0xd2c(0x04)
	char bShouldGenerateLowQualityLightmaps : 1; // 0xd30(0x01)
	struct FString *258f8c994b; // 0xd38(0x10)
	struct FColor *a1f148b920; // 0xd48(0x04)
	struct UMaterial* *b2d86d5e63; // 0xd50(0x08)
	float MaxOcclusionPixelsFraction; // 0xd58(0x04)
	struct F*eab1f0d427 PhysicErrorCorrection; // 0xd5c(0x1c)
	struct TArray<struct FLinearColor> QuadComplexityColors; // 0xd78(0x10)
	float IdealLightMapDensity; // 0xd88(0x04)
	int32 *978b7abcd7; // 0xda0(0x04)
};

// Class Engine.GatherPackageChainCommandlet
// Size: 0x80 (Inherited: 0x80)
struct UGatherPackageChainCommandlet : UCommandlet {
	struct FString HelpDescription; // 0x28(0x10)
	struct FString HelpUsage; // 0x38(0x10)
	struct FString HelpWebLink; // 0x48(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x58(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x68(0x10)
	char IsServer : 1; // 0x78(0x01)
	char IsClient : 1; // 0x78(0x01)
	char IsEditor : 1; // 0x78(0x01)
	char LogToConsole : 1; // 0x78(0x01)
	char ShowErrorCount : 1; // 0x78(0x01)
};

// Class Engine.PluginCommandlet
// Size: 0xa0 (Inherited: 0x80)
struct UPluginCommandlet : UCommandlet {
	struct FString HelpDescription; // 0x28(0x10)
	struct FString HelpUsage; // 0x38(0x10)
	struct FString HelpWebLink; // 0x48(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x58(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x68(0x10)
	char IsServer : 1; // 0x78(0x01)
	char IsClient : 1; // 0x78(0x01)
	char IsEditor : 1; // 0x78(0x01)
	char LogToConsole : 1; // 0x78(0x01)
	char ShowErrorCount : 1; // 0x78(0x01)
};

// Class Engine.SmokeTestCommandlet
// Size: 0x80 (Inherited: 0x80)
struct USmokeTestCommandlet : UCommandlet {
	struct FString HelpDescription; // 0x28(0x10)
	struct FString HelpUsage; // 0x38(0x10)
	struct FString HelpWebLink; // 0x48(0x10)
	struct TArray<struct FString> HelpParamNames; // 0x58(0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x68(0x10)
	char IsServer : 1; // 0x78(0x01)
	char IsClient : 1; // 0x78(0x01)
	char IsEditor : 1; // 0x78(0x01)
	char LogToConsole : 1; // 0x78(0x01)
	char ShowErrorCount : 1; // 0x78(0x01)
};

// Class Engine.*70e791465d
// Size: 0x28 (Inherited: 0x28)
struct U*70e791465d : UInterface {
};

// Class Engine.*1fa4fa0482
// Size: 0x1f0 (Inherited: 0x30)
struct U*1fa4fa0482 : UCurveBase {
	struct FRichCurve *87b8344682[0x04]; // 0x30(0x1c0)

	float *5d9d78cb4c(); // Function Engine.*1fa4fa0482.*5d9d78cb4c // None // @ game+0x63e9e54
};

// Class Engine.*1ba2d2b086
// Size: 0x180 (Inherited: 0x30)
struct U*1ba2d2b086 : UCurveBase {
	struct FRichCurve *87b8344682[0x03]; // 0x30(0x150)

	void *694989347b(); // Function Engine.*1ba2d2b086.*694989347b // None // @ game+0x63ebcbc
};

// Class Engine.CurveEdPresetCurve
// Size: 0x28 (Inherited: 0x28)
struct UCurveEdPresetCurve : UObject {
};

// Class Engine.*5154f1be97
// Size: 0x28 (Inherited: 0x28)
struct U*5154f1be97 : UInterface {
};

// Class Engine.CurveTable
// Size: 0x80 (Inherited: 0x28)
struct UCurveTable : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class Engine.PreviewMeshCollection
// Size: 0x48 (Inherited: 0x30)
struct UPreviewMeshCollection : UDataAsset {
	struct USkeleton* Skeleton; // 0x30(0x08)
	struct TArray<struct FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x38(0x10)
};

// Class Engine.PrimaryAssetLabel
// Size: 0x68 (Inherited: 0x30)
struct UPrimaryAssetLabel : U*d3fa1ca322 {
	struct F*18043fceb7 Rules; // 0x30(0x10)
	char *3eccd700aa : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct UObject*> *8f35d1c799; // 0x48(0x10)
	struct TArray<struct UClass*> *1bef7f8043; // 0x58(0x10)
};

// Class Engine.*3ce513432f
// Size: 0x38 (Inherited: 0x30)
struct U*3ce513432f : UDataAsset {
	float *7b5d5a514f; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Engine.*055d2cb90e
// Size: 0xb8 (Inherited: 0x28)
struct U*055d2cb90e : UObject {
	int32 *c8905551b6; // 0x28(0x04)
	struct F*5263c872a6 *9d0e8e99dc; // 0x2c(0x24)
	int32 RandomSeed; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FVector> *3e524f90d7; // 0x58(0x10)
	int32 *4d0617330f; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x70(0x10)
	struct TArray<struct F*4841245fc4> ChunkParameters; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)
};

// Class Engine.AnimationSettings
// Size: 0x70 (Inherited: 0x38)
struct UAnimationSettings : U*5cde8540b3 {
	int32 CompressCommandletVersion; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FString> KeyEndEffectorsMatchNameArray; // 0x40(0x10)
	struct UClass* DefaultCompressionAlgorithm; // 0x50(0x08)
	enum class AnimationCompressionFormat RotationCompressionFormat; // 0x58(0x01)
	enum class AnimationCompressionFormat TranslationCompressionFormat; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float MaxCurveError; // 0x5c(0x04)
	float AlternativeCompressionThreshold; // 0x60(0x04)
	bool ForceRecompression; // 0x64(0x01)
	bool bOnlyCheckForMissingSkeletalMeshes; // 0x65(0x01)
	bool bForceBelowThreshold; // 0x66(0x01)
	bool bFirstRecompressUsingCurrentOrDefault; // 0x67(0x01)
	bool bRaiseMaxErrorToExisting; // 0x68(0x01)
	bool bTryFixedBitwiseCompression; // 0x69(0x01)
	bool bTryPerTrackBitwiseCompression; // 0x6a(0x01)
	bool bTryLinearKeyRemovalCompression; // 0x6b(0x01)
	bool bTryIntervalKeyRemoval; // 0x6c(0x01)
	bool bEnablePerformanceLog; // 0x6d(0x01)
	bool bStripAnimationDataOnDedicatedServer; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
};

// Class Engine.AssetManagerSettings
// Size: 0xa0 (Inherited: 0x38)
struct UAssetManagerSettings : U*5cde8540b3 {
	struct TArray<struct F*141f1c5ea7> PrimaryAssetTypesToScan; // 0x38(0x10)
	struct TArray<struct FDirectoryPath> DirectoriesToExclude; // 0x48(0x10)
	struct TArray<struct F*6841a79db6> PrimaryAssetRules; // 0x58(0x10)
	bool bOnlyCookProductionAssets; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct F*f367913f49> PrimaryAssetIdRedirects; // 0x70(0x10)
	struct TArray<struct F*f367913f49> PrimaryAssetTypeRedirects; // 0x80(0x10)
	struct TArray<struct F*f367913f49> AssetPathRedirects; // 0x90(0x10)
};

// Class Engine.AudioSettings
// Size: 0xb0 (Inherited: 0x38)
struct UAudioSettings : U*5cde8540b3 {
	struct FStringAssetReference DefaultSoundClassName; // 0x38(0x10)
	struct FStringAssetReference DefaultSoundConcurrencyName; // 0x48(0x10)
	struct FStringAssetReference DefaultBaseSoundMix; // 0x58(0x10)
	struct FStringAssetReference VoiPSoundClass; // 0x68(0x10)
	float LowPassFilterResonance; // 0x78(0x04)
	int32 MaximumConcurrentStreams; // 0x7c(0x04)
	struct TArray<struct F*66e470be9a> QualityLevels; // 0x80(0x10)
	char bAllowVirtualizedSounds : 1; // 0x90(0x01)
	char bDisableMasterEQ : 1; // 0x90(0x01)
	char bDisableMasterReverb : 1; // 0x90(0x01)
	char bAllowCenterChannel3DPanning : 1; // 0x90(0x01)
	char pad_90_4 : 4; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString DialogueFilenameFormat; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class Engine.ExcludedPackageSettings
// Size: 0x58 (Inherited: 0x38)
struct UExcludedPackageSettings : U*5cde8540b3 {
	struct TArray<struct FString> CommonExcludedPackages; // 0x38(0x10)
	struct TArray<struct FString> MinSpecExcludedPackages; // 0x48(0x10)
};

// Class Engine.StreamingSettings
// Size: 0x70 (Inherited: 0x38)
struct UStreamingSettings : U*5cde8540b3 {
	char AsyncLoadingThreadEnabled : 1; // 0x38(0x01)
	char WarnIfTimeLimitExceeded : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float TimeLimitExceededMultiplier; // 0x3c(0x04)
	float TimeLimitExceededMinTime; // 0x40(0x04)
	int32 MinBulkDataSizeForAsyncLoading; // 0x44(0x04)
	float AsyncIOBandwidthLimit; // 0x48(0x04)
	char UseBackgroundLevelStreaming : 1; // 0x4c(0x01)
	char AsyncLoadingUseFullTimeLimit : 1; // 0x4c(0x01)
	char LoadAllStreamingLevels : 1; // 0x4c(0x01)
	char pad_4C_3 : 5; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float AsyncLoadingTimeLimit; // 0x50(0x04)
	float PriorityAsyncLoadingExtraTime; // 0x54(0x04)
	float LevelStreamingActorsUpdateTimeLimit; // 0x58(0x04)
	int32 LevelStreamingComponentsRegistrationGranularity; // 0x5c(0x04)
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x60(0x04)
	int32 LevelStreamingComponentsUnregistrationGranularity; // 0x64(0x04)
	char EventDrivenLoaderEnabled : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.GarbageCollectionSettings
// Size: 0x58 (Inherited: 0x38)
struct UGarbageCollectionSettings : U*5cde8540b3 {
	float TimeBetweenPurgingPendingKillObjects; // 0x38(0x04)
	char FlushStreamingOnGC : 1; // 0x3c(0x01)
	char AllowParallelGC : 1; // 0x3c(0x01)
	char IncrementalBeginDestroyEnabled : 1; // 0x3c(0x01)
	char CreateGCClusters : 1; // 0x3c(0x01)
	char MergeGCClusters : 1; // 0x3c(0x01)
	char ActorClusteringEnabled : 1; // 0x3c(0x01)
	char BlueprintClusteringEnabled : 1; // 0x3c(0x01)
	char pad_3C_7 : 1; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32 NumRetriesBeforeForcingGC; // 0x40(0x04)
	int32 MaxObjectsNotConsideredByGC; // 0x44(0x04)
	int32 SizeOfPermanentObjectPool; // 0x48(0x04)
	int32 MaxObjectsInGame; // 0x4c(0x04)
	int32 MaxObjectsInEditor; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.MeshSimplificationSettings
// Size: 0x40 (Inherited: 0x38)
struct UMeshSimplificationSettings : U*5cde8540b3 {
	struct FName MeshReductionModuleName; // 0x38(0x08)
};

// Class Engine.NetworkSettings
// Size: 0x48 (Inherited: 0x38)
struct UNetworkSettings : U*5cde8540b3 {
	char bVerifyPeer : 1; // 0x38(0x01)
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 MaxRepArraySize; // 0x3c(0x04)
	int32 MaxRepArrayMemory; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.PhysicsSettings
// Size: 0xe8 (Inherited: 0x38)
struct UPhysicsSettings : U*5cde8540b3 {
	float DefaultGravityZ; // 0x38(0x04)
	float DefaultTerminalVelocity; // 0x3c(0x04)
	float DefaultFluidFriction; // 0x40(0x04)
	int32 SimulateScratchMemorySize; // 0x44(0x04)
	int32 RagdollAggregateThreshold; // 0x48(0x04)
	float TriangleMeshTriangleMinAreaThreshold; // 0x4c(0x04)
	bool bEnableComplexForSim; // 0x50(0x01)
	bool bEnableComplexForSimOnDedicatedServer; // 0x51(0x01)
	bool bEnablePCM; // 0x52(0x01)
	bool bEnableStabilization; // 0x53(0x01)
	bool bWarnMissingLocks; // 0x54(0x01)
	bool bEnable2DPhysics; // 0x55(0x01)
	enum class ESettingsLockedAxis LockedAxis; // 0x56(0x01)
	enum class ESettingsDOF DefaultDegreesOfFreedom; // 0x57(0x01)
	float BounceThresholdVelocity; // 0x58(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x5c(0x01)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	float MaxAngularVelocity; // 0x60(0x04)
	float MaxDepenetrationVelocity; // 0x64(0x04)
	float ContactOffsetMultiplier; // 0x68(0x04)
	float MinContactOffset; // 0x6c(0x04)
	float MaxContactOffset; // 0x70(0x04)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x74(0x01)
	enum class ECollisionTraceFlag DefaultShapeComplexity; // 0x75(0x01)
	bool bDefaultHasComplexCollision; // 0x76(0x01)
	bool bSuppressFaceRemapTable; // 0x77(0x01)
	bool bSupportUVFromHitResults; // 0x78(0x01)
	bool bDisableActiveActors; // 0x79(0x01)
	bool bDisableCCD; // 0x7a(0x01)
	char pad_7B[0x1]; // 0x7b(0x01)
	float MaxPhysicsDeltaTime; // 0x7c(0x04)
	bool bSubstepping; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float MaxSubstepDeltaTime; // 0x84(0x04)
	int32 MaxSubsteps; // 0x88(0x04)
	float SyncSceneSmoothingFactor; // 0x8c(0x04)
	float InitialAverageFrameRate; // 0x90(0x04)
	float MaxPhysicsDeltaTimeOnDedicatedServer; // 0x94(0x04)
	bool bSubsteppingOnDedicatedServer; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float MaxSubstepDeltaTimeOnDedicatedServer; // 0x9c(0x04)
	int32 MaxSubstepsOnDedicatedServer; // 0xa0(0x04)
	float SyncSceneSmoothingFactorOnDedicatedServer; // 0xa4(0x04)
	float InitialAverageFrameRateOnDedicatedServer; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct F*694ea3d910> PhysicalSurfaces; // 0xb0(0x10)
	struct F*ffa7c96f53 DefaultBroadphaseSettings; // 0xc0(0x28)
};

// Class Engine.RendererSettings
// Size: 0xc0 (Inherited: 0x38)
struct URendererSettings : U*5cde8540b3 {
	char bMobileHDR : 1; // 0x38(0x01)
	char bMobileDisableVertexFog : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32 MaxMobileCascades; // 0x3c(0x04)
	enum class EMobileMSAASampleCount MobileMSAASampleCount; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char bDiscardUnusedQualityLevels : 1; // 0x44(0x01)
	char bOcclusionCulling : 1; // 0x44(0x01)
	char pad_44_2 : 6; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float MinScreenRadiusForLights; // 0x48(0x04)
	float MinScreenRadiusForEarlyZPass; // 0x4c(0x04)
	float MinScreenRadiusForCSMdepth; // 0x50(0x04)
	char bPrecomputedVisibilityWarning : 1; // 0x54(0x01)
	char bTextureStreaming : 1; // 0x54(0x01)
	char bUseDXT5NormalMaps : 1; // 0x54(0x01)
	char bClearCoatEnableSecondNormal : 1; // 0x54(0x01)
	char pad_54_4 : 4; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32 ReflectionCaptureResolution; // 0x58(0x04)
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x5c(0x01)
	char bForwardShading : 1; // 0x5c(0x01)
	char bVertexFoggingForOpaque : 1; // 0x5c(0x01)
	char bAllowStaticLighting : 1; // 0x5c(0x01)
	char bUseNormalMapsForStaticLighting : 1; // 0x5c(0x01)
	char bGenerateMeshDistanceFields : 1; // 0x5c(0x01)
	char bEightBitMeshDistanceFields : 1; // 0x5c(0x01)
	char bGenerateLandscapeGIData : 1; // 0x5c(0x01)
	char bCompressMeshDistanceFields : 1; // 0x5d(0x01)
	char pad_5D_1 : 7; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	float TessellationAdaptivePixelsPerTriangle; // 0x60(0x04)
	char bSeparateTranslucency : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	enum class *ed001dc914 TranslucentSortPolicy; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FVector TranslucentSortAxis; // 0x6c(0x0c)
	enum class ECustomDepthStencil CustomDepthStencil; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	char bCustomDepthTaaJitter : 1; // 0x7c(0x01)
	char bDefaultFeatureBloom : 1; // 0x7c(0x01)
	char bDefaultFeatureAmbientOcclusion : 1; // 0x7c(0x01)
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x7c(0x01)
	char bDefaultFeatureAutoExposure : 1; // 0x7c(0x01)
	char pad_7C_5 : 3; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	enum class EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	char bDefaultFeatureMotionBlur : 1; // 0x84(0x01)
	char bDefaultFeatureLensFlare : 1; // 0x84(0x01)
	char bTemporalUpsampling : 1; // 0x84(0x01)
	char pad_84_3 : 5; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	enum class *2781f012c1 DefaultFeatureAntiAliasing; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	char bStencilForLODDither : 1; // 0x8c(0x01)
	char pad_8C_1 : 7; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	enum class EEarlyZPass EarlyZPass; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	char bEarlyZPassMovable : 1; // 0x94(0x01)
	char bEarlyZPassOnlyMaterialMasking : 1; // 0x94(0x01)
	char bEarlyZPassForceFull : 1; // 0x94(0x01)
	char bDBuffer : 1; // 0x94(0x01)
	char pad_94_4 : 4; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	enum class EClearSceneOptions ClearSceneMethod; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	char bBasePassOutputsVelocity : 1; // 0x9c(0x01)
	char bSelectiveBasePassOutputs : 1; // 0x9c(0x01)
	char bDefaultParticleCutouts : 1; // 0x9c(0x01)
	char bGlobalClipPlane : 1; // 0x9c(0x01)
	char pad_9C_4 : 4; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	enum class EGBufferFormat GBufferFormat; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	char bUseGPUMorphTargets : 1; // 0xa4(0x01)
	char bNvidiaAftermathEnabled : 1; // 0xa4(0x01)
	char bInstancedStereo : 1; // 0xa4(0x01)
	char bMultiView : 1; // 0xa4(0x01)
	char bMobileMultiView : 1; // 0xa4(0x01)
	char bMobileMultiViewDirect : 1; // 0xa4(0x01)
	char bMonoscopicFarField : 1; // 0xa4(0x01)
	char pad_A4_7 : 1; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float WireframeCullThreshold; // 0xa8(0x04)
	char bSupportStationarySkylight : 1; // 0xac(0x01)
	char bSupportLowQualityLightmaps : 1; // 0xac(0x01)
	char bSupportPointLightWholeSceneShadows : 1; // 0xac(0x01)
	char bSupportAtmosphericFog : 1; // 0xac(0x01)
	char bSupportSkinCacheShaders : 1; // 0xac(0x01)
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xac(0x01)
	char bMobileAllowDistanceFieldShadows : 1; // 0xac(0x01)
	char bMobileAllowMovableDirectionalLights : 1; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	uint32 MobileNumDynamicPointLights; // 0xb0(0x04)
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0xb4(0x01)
	char pad_B4_1 : 7; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float SkinCacheSceneMemoryLimitInMB; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Engine.RendererOverrideSettings
// Size: 0x40 (Inherited: 0x38)
struct URendererOverrideSettings : U*5cde8540b3 {
	char bSupportAllShaderPermutations : 1; // 0x38(0x01)
	char bForceRecomputeTangents : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.UserInterfaceSettings
// Size: 0x208 (Inherited: 0x38)
struct UUserInterfaceSettings : U*5cde8540b3 {
	enum class ERenderFocusRule RenderFocusRule; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TMap<enum class EMouseCursor, struct F*1a10c5dd28> HardwareCursors; // 0x40(0x50)
	struct TMap<enum class EMouseCursor, struct FStringClassReference> SoftwareCursors; // 0x90(0x50)
	struct FStringClassReference DefaultCursor; // 0xe0(0x10)
	struct FStringClassReference TextEditBeamCursor; // 0xf0(0x10)
	struct FStringClassReference CrosshairsCursor; // 0x100(0x10)
	struct FStringClassReference HandCursor; // 0x110(0x10)
	struct FStringClassReference GrabHandCursor; // 0x120(0x10)
	struct FStringClassReference GrabHandClosedCursor; // 0x130(0x10)
	struct FStringClassReference SlashedCircleCursor; // 0x140(0x10)
	float ApplicationScale; // 0x150(0x04)
	enum class EUIScalingRule UIScaleRule; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	struct FStringClassReference CustomScalingRuleClass; // 0x158(0x10)
	struct FRuntimeFloatCurve UIScaleCurve; // 0x168(0x78)
	bool bLoadWidgetsOnDedicatedServer; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct TArray<struct UObject*> *d78f0caf59; // 0x1e8(0x10)
	struct UClass* *6073098e7a; // 0x1f8(0x08)
	struct UDPICustomScalingRule* *bece28f6b7; // 0x200(0x08)
};

// Class Engine.DeviceProfileManager
// Size: 0x110 (Inherited: 0x28)
struct UDeviceProfileManager : UObject {
	struct TArray<struct UObject*> Profiles; // 0x28(0x10)
	char pad_38[0xd8]; // 0x38(0xd8)
};

// Class Engine.DialogueVoice
// Size: 0x40 (Inherited: 0x28)
struct UDialogueVoice : UObject {
	enum class EGrammaticalGender Gender; // 0x28(0x01)
	enum class EGrammaticalNumber Plurality; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FGuid *3d95bb485d; // 0x2c(0x10)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.DialogueWave
// Size: 0x70 (Inherited: 0x28)
struct UDialogueWave : UObject {
	char *8a3cc4a7c8 : 1; // 0x28(0x01)
	char bOverride_SubtitleOverride : 1; // 0x28(0x01)
	char pad_28_2 : 6; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString *622c8764d8; // 0x30(0x10)
	struct FString *3d6813da97; // 0x40(0x10)
	struct TArray<struct F*3e9e0dd38d> ContextMappings; // 0x50(0x10)
	struct FGuid *3d95bb485d; // 0x60(0x10)
};

// Class Engine.Distribution
// Size: 0x30 (Inherited: 0x28)
struct UDistribution : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Engine.*137fe4d756
// Size: 0x38 (Inherited: 0x30)
struct U*137fe4d756 : UDistribution {
	char *ef0ba1cff8 : 1; // 0x30(0x01)
	char pad_30_1 : 1; // 0x30(0x01)
	char *6f6a0ba17c : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.*87764d2e43
// Size: 0x40 (Inherited: 0x38)
struct U*87764d2e43 : U*137fe4d756 {
	float Constant; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.*3f4598f881
// Size: 0x60 (Inherited: 0x40)
struct U*3f4598f881 : U*87764d2e43 {
	struct FName ParameterName; // 0x40(0x08)
	float *d06b5e0c4b; // 0x48(0x04)
	float *716d12f667; // 0x4c(0x04)
	float *01cec3e680; // 0x50(0x04)
	float *8e4a070922; // 0x54(0x04)
	enum class *13640aca16 *474527ade7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Engine.DistributionFloatParticleParameter
// Size: 0x60 (Inherited: 0x60)
struct UDistributionFloatParticleParameter : U*3f4598f881 {
	struct FName ParameterName; // 0x40(0x08)
	float *d06b5e0c4b; // 0x48(0x04)
	float *716d12f667; // 0x4c(0x04)
	float *01cec3e680; // 0x50(0x04)
	float *8e4a070922; // 0x54(0x04)
	enum class *13640aca16 *474527ade7; // 0x58(0x01)
};

// Class Engine.*1b820e48b1
// Size: 0x50 (Inherited: 0x38)
struct U*1b820e48b1 : U*137fe4d756 {
	struct FInterpCurveFloat *6f4370848d; // 0x38(0x18)
};

// Class Engine.*e6459a55f2
// Size: 0x40 (Inherited: 0x38)
struct U*e6459a55f2 : U*137fe4d756 {
	float Min; // 0x38(0x04)
	float Max; // 0x3c(0x04)
};

// Class Engine.*9f4cbd39e5
// Size: 0x50 (Inherited: 0x38)
struct U*9f4cbd39e5 : U*137fe4d756 {
	struct FInterpCurveVector2D *6f4370848d; // 0x38(0x18)
};

// Class Engine.*422628e054
// Size: 0x38 (Inherited: 0x30)
struct U*422628e054 : UDistribution {
	char *ef0ba1cff8 : 1; // 0x30(0x01)
	char *285abea55f : 1; // 0x30(0x01)
	char *6f6a0ba17c : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.*a0b7a497c4
// Size: 0x50 (Inherited: 0x38)
struct U*a0b7a497c4 : U*422628e054 {
	struct FVector Constant; // 0x38(0x0c)
	char *5a8b292a52 : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	enum class *d405335704 *120ff8fd00; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*28aa1ec097
// Size: 0x90 (Inherited: 0x50)
struct U*28aa1ec097 : U*a0b7a497c4 {
	struct FName ParameterName; // 0x50(0x08)
	struct FVector *d06b5e0c4b; // 0x58(0x0c)
	struct FVector *716d12f667; // 0x64(0x0c)
	struct FVector *01cec3e680; // 0x70(0x0c)
	struct FVector *8e4a070922; // 0x7c(0x0c)
	enum class *13640aca16 *8638d796f0[0x03]; // 0x88(0x03)
	char pad_8B[0x5]; // 0x8b(0x05)
};

// Class Engine.DistributionVectorParticleParameter
// Size: 0x90 (Inherited: 0x90)
struct UDistributionVectorParticleParameter : U*28aa1ec097 {
	struct FName ParameterName; // 0x50(0x08)
	struct FVector *d06b5e0c4b; // 0x58(0x0c)
	struct FVector *716d12f667; // 0x64(0x0c)
	struct FVector *01cec3e680; // 0x70(0x0c)
	struct FVector *8e4a070922; // 0x7c(0x0c)
	enum class *13640aca16 *8638d796f0[0x03]; // 0x88(0x03)
};

// Class Engine.*7b80fb5b5d
// Size: 0x58 (Inherited: 0x38)
struct U*7b80fb5b5d : U*422628e054 {
	struct FInterpCurveVector *6f4370848d; // 0x38(0x18)
	char *5a8b292a52 : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	enum class *d405335704 *120ff8fd00; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// Class Engine.*56781538d7
// Size: 0x60 (Inherited: 0x38)
struct U*56781538d7 : U*422628e054 {
	struct FVector Max; // 0x38(0x0c)
	struct FVector Min; // 0x44(0x0c)
	char *5a8b292a52 : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	enum class *d405335704 *120ff8fd00; // 0x54(0x01)
	enum class *ca25bbc2a0 *589628b300[0x03]; // 0x55(0x03)
	char *908d11f9ca : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Engine.*d55567cc8f
// Size: 0x60 (Inherited: 0x38)
struct U*d55567cc8f : U*422628e054 {
	struct FInterpCurveTwoVectors *6f4370848d; // 0x38(0x18)
	char *261476a453 : 1; // 0x50(0x01)
	char *fd939c2804 : 1; // 0x50(0x01)
	char pad_50_2 : 6; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	enum class *d405335704 *120ff8fd00[0x02]; // 0x54(0x02)
	enum class *ca25bbc2a0 *589628b300[0x03]; // 0x56(0x03)
	char pad_59[0x3]; // 0x59(0x03)
	char *908d11f9ca : 1; // 0x5c(0x01)
	char pad_5C_1 : 7; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// Class Engine.DPICustomScalingRule
// Size: 0x28 (Inherited: 0x28)
struct UDPICustomScalingRule : UObject {
};

// Class Engine.*cdcaa442f5
// Size: 0x28 (Inherited: 0x28)
struct U*cdcaa442f5 : UObject {
};

// Class Engine.*7cfe1d1b10
// Size: 0x38 (Inherited: 0x28)
struct U*7cfe1d1b10 : U*cdcaa442f5 {
	struct TArray<struct F*b36bc1f2de> *07a574de3a; // 0x28(0x10)
};

// Class Engine.*99e3821cc8
// Size: 0x28 (Inherited: 0x28)
struct U*99e3821cc8 : U*cdcaa442f5 {
};

// Class Engine.*0a928bde3e
// Size: 0x38 (Inherited: 0x28)
struct U*0a928bde3e : U*99e3821cc8 {
	struct TArray<struct F*062fdaa0ce> *6ee0e9d1cf; // 0x28(0x10)
};

// Class Engine.*b92251ec7e
// Size: 0x38 (Inherited: 0x28)
struct U*b92251ec7e : U*99e3821cc8 {
	struct TArray<struct F*8422347cf3> *9c733444c5; // 0x28(0x10)
};

// Class Engine.*0b9330b6ef
// Size: 0x38 (Inherited: 0x28)
struct U*0b9330b6ef : U*99e3821cc8 {
	struct TArray<struct F*1a61e6dd37> *e4343f0d6e; // 0x28(0x10)
};

// Class Engine.*b1ebba501e
// Size: 0x38 (Inherited: 0x38)
struct U*b1ebba501e : U*0b9330b6ef {
	struct TArray<struct F*1a61e6dd37> *e4343f0d6e; // 0x28(0x10)
};

// Class Engine.*8baf9848b5
// Size: 0x38 (Inherited: 0x28)
struct U*8baf9848b5 : U*99e3821cc8 {
	struct TArray<struct F*850d970b7b> *d57ec12780; // 0x28(0x10)
};

// Class Engine.*4334385383
// Size: 0x38 (Inherited: 0x28)
struct U*4334385383 : U*99e3821cc8 {
	struct TArray<struct F*58db994419> *6de60f76b1; // 0x28(0x10)
};

// Class Engine.EdGraph
// Size: 0xc0 (Inherited: 0x28)
struct UEdGraph : UObject {
	struct UClass* Schema; // 0x28(0x08)
	struct TArray<struct UEdGraphNode*> Nodes; // 0x30(0x10)
	char *ad2b9ed579 : 1; // 0x40(0x01)
	char *5bc22113c5 : 1; // 0x40(0x01)
	char *7c7faeed1c : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x7f]; // 0x41(0x7f)
};

// Class Engine.*13e2ca2242
// Size: 0xc0 (Inherited: 0xa0)
struct U*13e2ca2242 : UEdGraphNode {
	struct FString Link; // 0xa0(0x10)
	struct FString Excerpt; // 0xb0(0x10)
};

// Class Engine.*00ef7a7928
// Size: 0x28 (Inherited: 0x28)
struct U*00ef7a7928 : UObject {
};

// Class Engine.*f47b9f9db6
// Size: 0x28 (Inherited: 0x28)
struct U*f47b9f9db6 : UInterface {
};

// Class Engine.EndUserSettings
// Size: 0x38 (Inherited: 0x28)
struct UEndUserSettings : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	bool bSendAnonymousUsageDataToEpic; // 0x30(0x01)
	bool bSendMeanTimeBetweenFailureDataToEpic; // 0x31(0x01)
	bool bAllowUserIdInUsageData; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
};

// Class Engine.EngineHandlerComponentFactory
// Size: 0x28 (Inherited: 0x28)
struct UEngineHandlerComponentFactory : U*69f5424441 {
};

// Class Engine.*9535b9aebb
// Size: 0x68 (Inherited: 0x28)
struct U*9535b9aebb : UObject {
	struct UClass* *a9bc0e3835; // 0x28(0x08)
	struct UObject* *3c31ff16fc; // 0x30(0x08)
	struct TArray<struct FString> *84d9f27196; // 0x38(0x10)
	struct TArray<struct FString> *749944e94a; // 0x48(0x10)
	int32 *e9fdca4b13; // 0x58(0x04)
	int32 *22296d6911; // 0x5c(0x04)
	char *6a191a4073 : 1; // 0x60(0x01)
	char *c312838659 : 1; // 0x60(0x01)
	char *a6d54abfe7 : 1; // 0x60(0x01)
	char pad_60_3 : 5; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*75f1be6fae
// Size: 0x50 (Inherited: 0x28)
struct U*75f1be6fae : UObject {
	char pad_28[0x28]; // 0x28(0x28)
};

// Class Engine.*6dfe3240af
// Size: 0x50 (Inherited: 0x28)
struct U*6dfe3240af : U*401688bf57 {
	struct TArray<struct FVector2D> Points; // 0x28(0x10)
	struct TArray<struct F*a33400ce28> Instances; // 0x38(0x10)
	struct U*75f1be6fae* Manager; // 0x48(0x08)
};

// Class Engine.*242aced217
// Size: 0xd8 (Inherited: 0x28)
struct U*242aced217 : UObject {
	struct F*ecf6e0eed3 Data; // 0x28(0xb0)
};

// Class Engine.Font
// Size: 0x1c0 (Inherited: 0x28)
struct UFont : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	enum class EFontCacheType *b0b3915759; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct F*f9faf08d7f> Characters; // 0x38(0x10)
	struct TArray<struct UTexture2D*> Textures; // 0x48(0x10)
	int32 *0f6db10730; // 0x58(0x04)
	float *fb161daf30; // 0x5c(0x04)
	float Ascent; // 0x60(0x04)
	float Descent; // 0x64(0x04)
	float Leading; // 0x68(0x04)
	int32 Kerning; // 0x6c(0x04)
	struct F*ecf6e0eed3 ImportOptions; // 0x70(0xb0)
	int32 *7039902c31; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<int32> *c78f7b7c6e; // 0x128(0x10)
	float *a9162dd93c; // 0x138(0x04)
	int32 *f58b9fe4da; // 0x13c(0x04)
	struct FName *ca1357c5b3; // 0x140(0x08)
	struct F*31082a6d69 *31082a6d69; // 0x148(0x28)
	char pad_170[0x50]; // 0x170(0x50)
};

// Class Engine.FontFace
// Size: 0x58 (Inherited: 0x28)
struct UFontFace : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString SourceFilename; // 0x30(0x10)
	enum class EFontHinting Hinting; // 0x40(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x41(0x01)
	enum class EFontLoadingPolicy LoadingPolicyConsole; // 0x42(0x01)
	enum class EFontLayoutMethod LayoutMethod; // 0x43(0x01)
	char pad_44[0x14]; // 0x44(0x14)
};

// Class Engine.*3e3af884c4
// Size: 0x28 (Inherited: 0x28)
struct U*3e3af884c4 : UObject {
};

// Class Engine.HapticFeedbackEffect_Buffer
// Size: 0x68 (Inherited: 0x28)
struct UHapticFeedbackEffect_Buffer : U*3e3af884c4 {
	struct TArray<bool> *4d16f0a0cb; // 0x28(0x10)
	int32 SampleRate; // 0x38(0x04)
	char pad_3C[0x2c]; // 0x3c(0x2c)
};

// Class Engine.HapticFeedbackEffect_Curve
// Size: 0x118 (Inherited: 0x28)
struct UHapticFeedbackEffect_Curve : U*3e3af884c4 {
	struct FHapticFeedbackDetails_Curve HapticDetails; // 0x28(0xf0)
};

// Class Engine.HapticFeedbackEffect_SoundWave
// Size: 0x60 (Inherited: 0x28)
struct UHapticFeedbackEffect_SoundWave : U*3e3af884c4 {
	struct USoundWave* SoundWave; // 0x28(0x08)
	char pad_30[0x30]; // 0x30(0x30)
};

// Class Engine.InheritableComponentHandler
// Size: 0x48 (Inherited: 0x28)
struct UInheritableComponentHandler : UObject {
	struct TArray<struct F*b577448d97> Records; // 0x28(0x10)
	struct TArray<struct UActorComponent*> *3aa39ae115; // 0x38(0x10)
};

// Class Engine.InputSettings
// Size: 0xa8 (Inherited: 0x28)
struct UInputSettings : UObject {
	struct TArray<struct FInputAxisConfigEntry> AxisConfig; // 0x28(0x10)
	char bAltEnterTogglesFullscreen : 1; // 0x38(0x01)
	char bF11TogglesFullscreen : 1; // 0x38(0x01)
	char bUseMouseForTouch : 1; // 0x38(0x01)
	char bEnableMouseSmoothing : 1; // 0x38(0x01)
	char bEnableFOVScaling : 1; // 0x38(0x01)
	char pad_38_5 : 3; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float FOVScale; // 0x3c(0x04)
	float DoubleClickTime; // 0x40(0x04)
	bool bCaptureMouseOnLaunch; // 0x44(0x01)
	enum class EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x45(0x01)
	bool bDefaultViewportMouseLock; // 0x46(0x01)
	enum class EMouseLockMode DefaultViewportMouseLockMode; // 0x47(0x01)
	struct TArray<struct FInputActionKeyMapping> ActionMappings; // 0x48(0x10)
	struct TArray<struct FInputAxisKeyMapping> AxisMappings; // 0x58(0x10)
	bool bAlwaysShowTouchInterface; // 0x68(0x01)
	bool bShowConsoleOnFourFingerTap; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct FStringAssetReference DefaultTouchInterface; // 0x70(0x10)
	struct FKey ConsoleKey; // 0x80(0x18)
	struct TArray<struct FKey> ConsoleKeys; // 0x98(0x10)
};

// Class Engine.InterpCurveEdSetup
// Size: 0x40 (Inherited: 0x28)
struct UInterpCurveEdSetup : UObject {
	struct TArray<struct F*04a25d94c7> Tabs; // 0x28(0x10)
	int32 *853b9629e1; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.InterpData
// Size: 0x70 (Inherited: 0x28)
struct UInterpData : UObject {
	float InterpLength; // 0x28(0x04)
	float *1cbb0846ad; // 0x2c(0x04)
	struct TArray<struct U*e3d2da250a*> *d32619165e; // 0x30(0x10)
	struct UInterpCurveEdSetup* *ff525ff7dd; // 0x40(0x08)
	float *7c45ae5005; // 0x48(0x04)
	float *dd4c3cf29c; // 0x4c(0x04)
	char *25baedba5d : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct U*a5f71b1e91* *d0fc9c1ba5; // 0x58(0x08)
	struct TArray<struct FName> *0e8d60df63; // 0x60(0x10)
};

// Class Engine.*dedaa4862d
// Size: 0x38 (Inherited: 0x28)
struct U*dedaa4862d : UObject {
	struct FString Caption; // 0x28(0x10)
};

// Class Engine.*58b76cdff3
// Size: 0x38 (Inherited: 0x38)
struct U*58b76cdff3 : U*dedaa4862d {
	struct FString Caption; // 0x28(0x10)
};

// Class Engine.*1fa9a38fa9
// Size: 0x38 (Inherited: 0x38)
struct U*1fa9a38fa9 : U*dedaa4862d {
	struct FString Caption; // 0x28(0x10)
};

// Class Engine.*e3d2da250a
// Size: 0x50 (Inherited: 0x28)
struct U*e3d2da250a : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct U*2d530f7a8e*> *7c4ffdf279; // 0x30(0x10)
	struct FName GroupName; // 0x40(0x08)
	struct FColor *eb16cf41fb; // 0x48(0x04)
	char *2e1791687e : 1; // 0x4c(0x01)
	char bVisible : 1; // 0x4c(0x01)
	char *0d93014d0f : 1; // 0x4c(0x01)
	char *4d7e2c58c2 : 1; // 0x4c(0x01)
	char *9172b38034 : 1; // 0x4c(0x01)
	char pad_4C_5 : 3; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// Class Engine.*c7db479ecf
// Size: 0x60 (Inherited: 0x50)
struct U*c7db479ecf : U*e3d2da250a {
	struct UCameraAnim* *de6aae17ea; // 0x50(0x08)
	float *4e1addc2da; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.*a5f71b1e91
// Size: 0x50 (Inherited: 0x50)
struct U*a5f71b1e91 : U*e3d2da250a {
	struct TArray<struct U*2d530f7a8e*> *7c4ffdf279; // 0x30(0x10)
	struct FName GroupName; // 0x40(0x08)
	struct FColor *eb16cf41fb; // 0x48(0x04)
	char *2e1791687e : 1; // 0x4c(0x01)
	char bVisible : 1; // 0x4c(0x01)
	char *0d93014d0f : 1; // 0x4c(0x01)
	char *4d7e2c58c2 : 1; // 0x4c(0x01)
	char *9172b38034 : 1; // 0x4c(0x01)
};

// Class Engine.*27ba39bd87
// Size: 0x48 (Inherited: 0x28)
struct U*27ba39bd87 : UObject {
	struct U*e3d2da250a* Group; // 0x28(0x08)
	struct AActor* GroupActor; // 0x30(0x08)
	struct TArray<struct U*3bd2ba0b9b*> *9a51f2d626; // 0x38(0x10)
};

// Class Engine.*eabf372146
// Size: 0x48 (Inherited: 0x48)
struct U*eabf372146 : U*27ba39bd87 {
	struct U*e3d2da250a* Group; // 0x28(0x08)
	struct AActor* GroupActor; // 0x30(0x08)
	struct TArray<struct U*3bd2ba0b9b*> *9a51f2d626; // 0x38(0x10)
};

// Class Engine.*2e536453f4
// Size: 0x48 (Inherited: 0x48)
struct U*2e536453f4 : U*27ba39bd87 {
	struct U*e3d2da250a* Group; // 0x28(0x08)
	struct AActor* GroupActor; // 0x30(0x08)
	struct TArray<struct U*3bd2ba0b9b*> *9a51f2d626; // 0x38(0x10)
};

// Class Engine.*2d530f7a8e
// Size: 0x70 (Inherited: 0x28)
struct U*2d530f7a8e : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct U*2d530f7a8e*> *dc576ac06d; // 0x38(0x10)
	struct UClass* *75495a77ec; // 0x48(0x08)
	enum class *bfc03452b3 *29a1ea0f15; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString TrackTitle; // 0x58(0x10)
	char *c747356351 : 1; // 0x68(0x01)
	char *b9e3428bb4 : 1; // 0x68(0x01)
	char *9e1526445a : 1; // 0x68(0x01)
	char *9172b38034 : 1; // 0x68(0x01)
	char *0f9d9a6cb6 : 1; // 0x68(0x01)
	char *9cdf77c1d8 : 1; // 0x68(0x01)
	char bVisible : 1; // 0x68(0x01)
	char *7c099d5ca9 : 1; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*30ebea26d3
// Size: 0x88 (Inherited: 0x70)
struct U*30ebea26d3 : U*2d530f7a8e {
	struct TArray<struct F*8cd41f99f9> *f588dff541; // 0x70(0x10)
	struct FName PropertyName; // 0x80(0x08)
};

// Class Engine.*acdac9d583
// Size: 0x88 (Inherited: 0x70)
struct U*acdac9d583 : U*2d530f7a8e {
	struct TArray<struct F*39bb57c7aa> *c6f8c035ab; // 0x70(0x10)
	char *47be31d5ee : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*2f8c729901
// Size: 0x88 (Inherited: 0x70)
struct U*2f8c729901 : U*2d530f7a8e {
	struct TArray<struct F*76fda87b17> *31126fd5ec; // 0x70(0x10)
	char *f910bc4e96 : 1; // 0x80(0x01)
	char *3b4aa2c40a : 1; // 0x80(0x01)
	char *cb0fb35238 : 1; // 0x80(0x01)
	char *6a3384b132 : 1; // 0x80(0x01)
	char pad_80_4 : 4; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*6e2748e3e3
// Size: 0x90 (Inherited: 0x70)
struct U*6e2748e3e3 : U*2d530f7a8e {
	struct FInterpCurveFloat *68bbdff8b6; // 0x70(0x18)
	float *68048360fb; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.*2fee0aac29
// Size: 0xb0 (Inherited: 0x90)
struct U*2fee0aac29 : U*6e2748e3e3 {
	struct FName SlotName; // 0x90(0x08)
	struct TArray<struct F*f6a436c9e5> *1e6b5608ce; // 0x98(0x10)
	char *13cd415402 : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class Engine.*9ac588d197
// Size: 0xa8 (Inherited: 0x90)
struct U*9ac588d197 : U*6e2748e3e3 {
	char *94f8625a0d : 1; // 0x90(0x01)
	char *a7d566211e : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FLinearColor *43c44276e7; // 0x94(0x10)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Engine.*3b69a94ba7
// Size: 0xb0 (Inherited: 0x90)
struct U*3b69a94ba7 : U*6e2748e3e3 {
	struct UAnimBlueprintGeneratedClass* *c52ff7f7f9; // 0x90(0x08)
	struct UClass* *35b0a291dc; // 0x98(0x08)
	struct FName ParamName; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class Engine.*53772a2f86
// Size: 0xa8 (Inherited: 0x90)
struct U*53772a2f86 : U*6e2748e3e3 {
	struct TArray<struct UMaterialInterface*> *e919d1d29b; // 0x90(0x10)
	struct FName ParamName; // 0xa0(0x08)
};

// Class Engine.*37c5ac84fb
// Size: 0x98 (Inherited: 0x90)
struct U*37c5ac84fb : U*6e2748e3e3 {
	struct FName ParamName; // 0x90(0x08)
};

// Class Engine.*2b6059db25
// Size: 0x98 (Inherited: 0x90)
struct U*2b6059db25 : U*6e2748e3e3 {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.*423dfd5b29
// Size: 0xc8 (Inherited: 0x70)
struct U*423dfd5b29 : U*2d530f7a8e {
	struct FInterpCurveVector *98afa116e2; // 0x70(0x18)
	struct FInterpCurveVector *48dac84b38; // 0x88(0x18)
	struct F*d33f89aed3 *adb8d4b10b; // 0xa0(0x10)
	struct FName *aedc2a7715; // 0xb0(0x08)
	float *18556cd42f; // 0xb8(0x04)
	float *f86e4aab57; // 0xbc(0x04)
	char *ca34bb0eed : 1; // 0xc0(0x01)
	char *0126051333 : 1; // 0xc0(0x01)
	char *8d95ab00ef : 1; // 0xc0(0x01)
	char *6abd8271e7 : 1; // 0xc0(0x01)
	char *432c5bae9f : 1; // 0xc0(0x01)
	char *a7223a4b15 : 1; // 0xc0(0x01)
	char pad_C0_6 : 2; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	enum class *bacb481790 *00559283c7; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
};

// Class Engine.*e1ac022c36
// Size: 0xa8 (Inherited: 0x90)
struct U*e1ac022c36 : U*6e2748e3e3 {
	enum class *92c90abcb2 *994762506a; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct F*d33f89aed3 *adb8d4b10b; // 0x98(0x10)
};

// Class Engine.*1b839aab93
// Size: 0x90 (Inherited: 0x90)
struct U*1b839aab93 : U*6e2748e3e3 {
	struct FInterpCurveFloat *68bbdff8b6; // 0x70(0x18)
	float *68048360fb; // 0x88(0x04)
};

// Class Engine.*ce1f775c02
// Size: 0x90 (Inherited: 0x70)
struct U*ce1f775c02 : U*2d530f7a8e {
	struct FInterpCurveLinearColor *81142043cb; // 0x70(0x18)
	float *68048360fb; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.*8f8c32589d
// Size: 0x98 (Inherited: 0x90)
struct U*8f8c32589d : U*ce1f775c02 {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.*0183a8cc20
// Size: 0x80 (Inherited: 0x70)
struct U*0183a8cc20 : U*2d530f7a8e {
	struct TArray<struct F*ca7a93bcf9> *aafd25018a; // 0x70(0x10)
};

// Class Engine.*955361533a
// Size: 0x88 (Inherited: 0x70)
struct U*955361533a : U*2d530f7a8e {
	struct TArray<struct F*700ed3cbaf> *209d1a1af0; // 0x70(0x10)
	char *35d022ef5a : 1; // 0x80(0x01)
	char *3c4337758f : 1; // 0x80(0x01)
	char *f910bc4e96 : 1; // 0x80(0x01)
	char *3b4aa2c40a : 1; // 0x80(0x01)
	char *cb0fb35238 : 1; // 0x80(0x01)
	char pad_80_5 : 3; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*4b768f09da
// Size: 0x90 (Inherited: 0x70)
struct U*4b768f09da : U*2d530f7a8e {
	struct FInterpCurveVector *efb707c76d; // 0x70(0x18)
	float *68048360fb; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.*f8a90ac0d9
// Size: 0x90 (Inherited: 0x90)
struct U*f8a90ac0d9 : U*4b768f09da {
	struct FInterpCurveVector *efb707c76d; // 0x70(0x18)
	float *68048360fb; // 0x88(0x04)
};

// Class Engine.*78c5dbc470
// Size: 0x98 (Inherited: 0x90)
struct U*78c5dbc470 : U*4b768f09da {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.*0c9d64cd73
// Size: 0x90 (Inherited: 0x90)
struct U*0c9d64cd73 : U*4b768f09da {
	struct FInterpCurveVector *efb707c76d; // 0x70(0x18)
	float *68048360fb; // 0x88(0x04)
};

// Class Engine.*5071a5963c
// Size: 0xa8 (Inherited: 0x90)
struct U*5071a5963c : U*4b768f09da {
	struct TArray<struct F*438b64dc3f> Sounds; // 0x90(0x10)
	char *143b7b7b53 : 1; // 0xa0(0x01)
	char *5314edc752 : 1; // 0xa0(0x01)
	char *cf7d228117 : 1; // 0xa0(0x01)
	char *24d2db6177 : 1; // 0xa0(0x01)
	char *6408506e9d : 1; // 0xa0(0x01)
	char pad_A0_5 : 3; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// Class Engine.*0b9a886d8d
// Size: 0xa8 (Inherited: 0x90)
struct U*0b9a886d8d : U*4b768f09da {
	struct TArray<struct UMaterialInterface*> *e919d1d29b; // 0x90(0x10)
	struct FName ParamName; // 0xa0(0x08)
};

// Class Engine.*f78e6f217f
// Size: 0x98 (Inherited: 0x90)
struct U*f78e6f217f : U*4b768f09da {
	struct FName PropertyName; // 0x90(0x08)
};

// Class Engine.*7089f44292
// Size: 0x88 (Inherited: 0x70)
struct U*7089f44292 : U*2d530f7a8e {
	struct TArray<struct F*a47b54e36d> *8ea0cb7da0; // 0x70(0x10)
	char *f910bc4e96 : 1; // 0x80(0x01)
	char *3b4aa2c40a : 1; // 0x80(0x01)
	char *cb0fb35238 : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*3bd2ba0b9b
// Size: 0x28 (Inherited: 0x28)
struct U*3bd2ba0b9b : UObject {
};

// Class Engine.*823df2ceb8
// Size: 0x30 (Inherited: 0x28)
struct U*823df2ceb8 : U*3bd2ba0b9b {
	float *10ab2b4a66; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*d61faddf12
// Size: 0x28 (Inherited: 0x28)
struct U*d61faddf12 : U*3bd2ba0b9b {
};

// Class Engine.*1316b590ad
// Size: 0x28 (Inherited: 0x28)
struct U*1316b590ad : U*3bd2ba0b9b {
};

// Class Engine.*bf68adb116
// Size: 0x30 (Inherited: 0x28)
struct U*bf68adb116 : U*3bd2ba0b9b {
	struct AActor* *9ef3cfbf66; // 0x28(0x08)
};

// Class Engine.*175671fec4
// Size: 0x30 (Inherited: 0x28)
struct U*175671fec4 : U*3bd2ba0b9b {
	float *10ab2b4a66; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*118ad48cc3
// Size: 0x28 (Inherited: 0x28)
struct U*118ad48cc3 : U*3bd2ba0b9b {
};

// Class Engine.*6e1242c95e
// Size: 0x40 (Inherited: 0x28)
struct U*6e1242c95e : U*3bd2ba0b9b {
	struct UAnimInstance* AnimScriptInstance; // 0x28(0x08)
	float *921177e308; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// Class Engine.*5fe8f2936b
// Size: 0x60 (Inherited: 0x28)
struct U*5fe8f2936b : U*3bd2ba0b9b {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x28(0x10)
	struct TArray<float> *2735f6c6fa; // 0x38(0x10)
	struct TArray<struct F*c6f92a96cc> *0f357e5a7e; // 0x48(0x10)
	struct U*53772a2f86* *d74edfc1ed; // 0x58(0x08)
};

// Class Engine.*203555ce05
// Size: 0x30 (Inherited: 0x28)
struct U*203555ce05 : U*3bd2ba0b9b {
	float *921177e308; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*b12b5709af
// Size: 0x40 (Inherited: 0x28)
struct U*b12b5709af : U*3bd2ba0b9b {
	struct FVector ResetLocation; // 0x28(0x0c)
	struct FRotator ResetRotation; // 0x34(0x0c)
};

// Class Engine.*4eadc32ab2
// Size: 0x30 (Inherited: 0x28)
struct U*4eadc32ab2 : U*3bd2ba0b9b {
	float *10ab2b4a66; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*e921f03dac
// Size: 0x38 (Inherited: 0x28)
struct U*e921f03dac : U*3bd2ba0b9b {
	struct UProperty* *5981ae39f7; // 0x28(0x08)
	struct UObject* *e543823ea3; // 0x30(0x08)
};

// Class Engine.*56cbb95d67
// Size: 0x50 (Inherited: 0x38)
struct U*56cbb95d67 : U*e921f03dac {
	char pad_38[0x8]; // 0x38(0x08)
	struct UBoolProperty* BoolProperty; // 0x40(0x08)
	bool *f2fd267da8; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*ec31a05743
// Size: 0x48 (Inherited: 0x38)
struct U*ec31a05743 : U*e921f03dac {
	char pad_38[0x8]; // 0x38(0x08)
	struct FColor *5d4116fc15; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*7bd9454df1
// Size: 0x48 (Inherited: 0x38)
struct U*7bd9454df1 : U*e921f03dac {
	char pad_38[0x8]; // 0x38(0x08)
	float *921177e308; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.*2afb9e99d4
// Size: 0x50 (Inherited: 0x38)
struct U*2afb9e99d4 : U*e921f03dac {
	char pad_38[0x8]; // 0x38(0x08)
	struct FLinearColor *5d4116fc15; // 0x40(0x10)
};

// Class Engine.*b65c181e29
// Size: 0x50 (Inherited: 0x38)
struct U*b65c181e29 : U*e921f03dac {
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector *43884f683d; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.*9e4a8092cc
// Size: 0x30 (Inherited: 0x28)
struct U*9e4a8092cc : U*3bd2ba0b9b {
	float *4ee927c55c; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Engine.*9c8320ecea
// Size: 0x38 (Inherited: 0x28)
struct U*9c8320ecea : U*3bd2ba0b9b {
	float *10ab2b4a66; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UAudioComponent* *f5511daba1; // 0x30(0x08)
};

// Class Engine.*782a5b353c
// Size: 0x38 (Inherited: 0x28)
struct U*782a5b353c : U*3bd2ba0b9b {
	enum class *9539c54071 Action; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *10ab2b4a66; // 0x2c(0x04)
	char *aca23f429a : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.*1723da8378
// Size: 0x60 (Inherited: 0x28)
struct U*1723da8378 : U*3bd2ba0b9b {
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstances; // 0x28(0x10)
	struct TArray<struct FVector> *022a229281; // 0x38(0x10)
	struct TArray<struct F*c6f92a96cc> *0f357e5a7e; // 0x48(0x10)
	struct U*0b9a886d8d* *d74edfc1ed; // 0x58(0x08)
};

// Class Engine.*7f88564689
// Size: 0x30 (Inherited: 0x28)
struct U*7f88564689 : U*3bd2ba0b9b {
	enum class *787860b0e3 Action; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *10ab2b4a66; // 0x2c(0x04)
};

// Class Engine.*4c2ff4e636
// Size: 0x50 (Inherited: 0x28)
struct U*4c2ff4e636 : UObject {
	uint16 *340c3d3481; // 0x28(0x02)
	char pad_2A[0x2]; // 0x2a(0x02)
	uint32 *1ec8a0c04f; // 0x2c(0x04)
	uint64 *6368a38246; // 0x30(0x08)
	int8 *e253ba18f7; // 0x38(0x01)
	char pad_39[0x1]; // 0x39(0x01)
	int16 *dd78123408; // 0x3a(0x02)
	char pad_3C[0x4]; // 0x3c(0x04)
	int64 *33b06e401c; // 0x40(0x08)
	bool *15766050fa; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32 *9cd01a7602; // 0x4c(0x04)
};

// Class Engine.*6035905e92
// Size: 0x48 (Inherited: 0x28)
struct U*6035905e92 : U*401688bf57 {
	struct TArray<struct U*c4a9dbb552*> *0360521b84; // 0x28(0x10)
	struct TArray<struct F*291da25063> Instances; // 0x38(0x10)
};

// Class Engine.*c4a9dbb552
// Size: 0x1c0 (Inherited: 0x28)
struct U*c4a9dbb552 : UObject {
	struct UWorld* World; // 0x28(0x08)
	struct ALandscape* Landscape; // 0x30(0x1c)
	struct FGuid *50b1b2bcf5; // 0x4c(0x10)
	struct FIntRect *562a538796; // 0x5c(0x10)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct F*291da25063 *84585d2b8e; // 0x70(0x110)
	struct UMaterialInterface* LandscapeMaterial; // 0x180(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x188(0x08)
	uint32 *74a2e856e6; // 0x190(0x04)
	int32 *f7d062b604; // 0x194(0x04)
	struct TArray<struct F*23fe8b97ca> *fd89319904; // 0x198(0x10)
	struct TArray<struct F*1027900afb> *cbc37353a2; // 0x1a8(0x10)
	char pad_1B8[0x8]; // 0x1b8(0x08)
};

// Class Engine.Layer
// Size: 0x48 (Inherited: 0x28)
struct ULayer : UObject {
	struct FName LayerName; // 0x28(0x08)
	char bIsVisible : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct F*fe32b3613f> ActorStats; // 0x38(0x10)
};

// Class Engine.*5b918d4999
// Size: 0x38 (Inherited: 0x28)
struct U*5b918d4999 : UObject {
	struct TArray<struct AActor*> Actors; // 0x28(0x10)
};

// Class Engine.*73d6f593c1
// Size: 0x58 (Inherited: 0x28)
struct U*73d6f593c1 : U*401688bf57 {
	struct TArray<struct F*eac2fdaa49> Variants; // 0x28(0x10)
	struct TArray<struct FTransform> Instances; // 0x38(0x10)
	struct TArray<struct F*88ee8c31b8> *ff0ce90267; // 0x48(0x10)
};

// Class Engine.*abd1b70fcf
// Size: 0x38 (Inherited: 0x28)
struct U*abd1b70fcf : U*401688bf57 {
	struct TArray<struct F*db27cffb30> Instances; // 0x28(0x10)
};

// Class Engine.*1c36ada67f
// Size: 0x48 (Inherited: 0x28)
struct U*1c36ada67f : U*401688bf57 {
	struct TArray<struct F*f413e38e41> *1ca4c0552f; // 0x28(0x10)
	struct TArray<struct F*c34a007b7e> Instances; // 0x38(0x10)
};

// Class Engine.TextureRenderTarget
// Size: 0xc0 (Inherited: 0xb8)
struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Engine.TextureRenderTarget2D
// Size: 0xe8 (Inherited: 0xc0)
struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32 SizeX; // 0xc0(0x04)
	int32 SizeY; // 0xc4(0x04)
	struct FLinearColor ClearColor; // 0xc8(0x10)
	enum class *6486b70fc0 AddressX; // 0xd8(0x01)
	enum class *6486b70fc0 AddressY; // 0xd9(0x01)
	char pad_DA[0x2]; // 0xda(0x02)
	char *0fcaada11b : 1; // 0xdc(0x01)
	char *a6de577b35 : 1; // 0xdc(0x01)
	char bHDR : 1; // 0xdc(0x01)
	char bGPUSharedFlag : 1; // 0xdc(0x01)
	char bAutoGenerateMips : 1; // 0xdc(0x01)
	char pad_DC_5 : 3; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	enum class EPixelFormat *4b5f52ef85; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// Class Engine.*6f39a1ecbb
// Size: 0x98 (Inherited: 0x28)
struct U*6f39a1ecbb : UObject {
	char pad_28[0x30]; // 0x28(0x30)
	struct UTexture2D* *29ef5dc63e; // 0x58(0x08)
	struct UTextureRenderTarget2D* *70cc59b2a0; // 0x60(0x08)
	struct TArray<struct F*258dc007a5> *83292143c9; // 0x68(0x10)
	struct TArray<struct F*709f7529e1> *ce7638869e; // 0x78(0x10)
	struct TArray<struct UObject*> *51de67fc3d; // 0x88(0x10)
};

// Class Engine.*03b2770c78
// Size: 0x50 (Inherited: 0x28)
struct U*03b2770c78 : U*401688bf57 {
	struct TArray<struct F*258dc007a5> *6979260240; // 0x28(0x10)
	struct TArray<struct F*709f7529e1> *acaecf60b6; // 0x38(0x10)
	struct U*6f39a1ecbb* Manager; // 0x48(0x08)
};

// Class Engine.*c9bc10f6b8
// Size: 0x60 (Inherited: 0x28)
struct U*c9bc10f6b8 : U*401688bf57 {
	char pad_28[0x38]; // 0x28(0x38)
};

// Class Engine.*1cbde2545c
// Size: 0x58 (Inherited: 0x28)
struct U*1cbde2545c : U*401688bf57 {
	struct TArray<struct F*04c4db89c2> Variants; // 0x28(0x10)
	struct TArray<struct FTransform> Instances; // 0x38(0x10)
	struct TArray<struct F*88ee8c31b8> *ff0ce90267; // 0x48(0x10)
};

// Class Engine.*e49f40fed1
// Size: 0x38 (Inherited: 0x28)
struct U*e49f40fed1 : U*401688bf57 {
	struct TArray<struct F*88ee8c31b8> *ff0ce90267; // 0x28(0x10)
};

// Class Engine.*b0d506ae2b
// Size: 0x58 (Inherited: 0x28)
struct U*b0d506ae2b : U*401688bf57 {
	struct TArray<struct F*1f1a8c60da> Variants; // 0x28(0x10)
	struct TArray<struct F*f2959ab045> Instances; // 0x38(0x10)
	struct TArray<struct F*88ee8c31b8> *ff0ce90267; // 0x48(0x10)
};

// Class Engine.LevelStreaming
// Size: 0x190 (Inherited: 0x28)
struct ULevelStreaming : UObject {
	struct FName PackageName; // 0x28(0x08)
	struct UWorld* WorldAsset; // 0x30(0x20)
	char pad_50[0x10]; // 0x50(0x10)
	struct FName *f74aac41d2; // 0x60(0x08)
	struct TArray<struct FName> *f0772185df; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
	char bLocked : 1; // 0x88(0x01)
	char pad_88_1 : 2; // 0x88(0x01)
	char *23df38c1e1 : 1; // 0x88(0x01)
	char bShouldBeLoaded : 1; // 0x88(0x01)
	char bShouldBeVisible : 1; // 0x88(0x01)
	char bShouldBlockOnLoad : 1; // 0x88(0x01)
	char pad_88_7 : 1; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32 LevelLODIndex; // 0x8c(0x04)
	char pad_90[0x4]; // 0x90(0x04)
	struct FColor DrawColor; // 0x94(0x04)
	struct FLinearColor LevelColor; // 0x98(0x10)
	char pad_A8[0x10]; // 0xa8(0x10)
	struct ULevel* *351c4cfadf; // 0xb8(0x08)
	struct ULevel* *918d7cb9b2; // 0xc0(0x08)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct TArray<struct ALevelStreamingVolume*> *b4acd47735; // 0xd0(0x10)
	float *faba900335; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FMulticastDelegate OnLevelLoaded; // 0xe8(0x10)
	struct FMulticastDelegate OnLevelUnloaded; // 0xf8(0x10)
	struct FMulticastDelegate OnLevelShown; // 0x108(0x10)
	struct FMulticastDelegate OnLevelHidden; // 0x118(0x10)
	struct TArray<struct FString> Keywords; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)
	struct FTransform LevelTransform; // 0x140(0x30)
	char pad_170[0x14]; // 0x170(0x14)
	char *d33c5865c6 : 1; // 0x184(0x01)
	char pad_184_1 : 7; // 0x184(0x01)
	char pad_185[0x7]; // 0x185(0x07)
	char bDisableDistanceStreaming : 1; // 0x18c(0x01)
	char *cc4a2abcfb : 1; // 0x18c(0x01)
	char pad_18C_2 : 6; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)

	void *83c7974850(); // Function Engine.LevelStreaming.*83c7974850 // None // @ game+0x63ec2bc
	void CreateInstance(); // Function Engine.LevelStreaming.CreateInstance // None // @ game+0x63e6cfc
	void *f6794aa4b7(); // Function Engine.LevelStreaming.*f6794aa4b7 // None // @ game+0x63ec2d8
	void *1c2db0b2bb(); // Function Engine.LevelStreaming.*1c2db0b2bb // None // @ game+0x63ec788
	void *f047b6261f(); // Function Engine.LevelStreaming.*f047b6261f // None // @ game+0x63e9e2c
};

// Class Engine.LevelStreamingAlwaysLoaded
// Size: 0x190 (Inherited: 0x190)
struct ULevelStreamingAlwaysLoaded : ULevelStreaming {
	struct FName PackageName; // 0x28(0x08)
	struct UWorld* WorldAsset; // 0x30(0x20)
	struct FName *f74aac41d2; // 0x60(0x08)
	struct TArray<struct FName> *f0772185df; // 0x68(0x10)
	char bLocked : 1; // 0x88(0x01)
	char pad_1D0_1 : 2; // 0x1d0(0x01)
	char *23df38c1e1 : 1; // 0x88(0x01)
	char bShouldBeLoaded : 1; // 0x88(0x01)
	char bShouldBeVisible : 1; // 0x88(0x01)
	char bShouldBlockOnLoad : 1; // 0x88(0x01)
	int32 LevelLODIndex; // 0x8c(0x04)
	struct FColor DrawColor; // 0x94(0x04)
	struct FLinearColor LevelColor; // 0x98(0x10)
	struct ULevel* *351c4cfadf; // 0xb8(0x08)
	struct ULevel* *918d7cb9b2; // 0xc0(0x08)
	struct TArray<struct ALevelStreamingVolume*> *b4acd47735; // 0xd0(0x10)
	float *faba900335; // 0xe0(0x04)
	struct FMulticastDelegate OnLevelLoaded; // 0xe8(0x10)
	struct FMulticastDelegate OnLevelUnloaded; // 0xf8(0x10)
	struct FMulticastDelegate OnLevelShown; // 0x108(0x10)
	struct FMulticastDelegate OnLevelHidden; // 0x118(0x10)
	struct TArray<struct FString> Keywords; // 0x128(0x10)
	struct FTransform LevelTransform; // 0x140(0x30)
	char *d33c5865c6 : 1; // 0x184(0x01)
	char bDisableDistanceStreaming : 1; // 0x18c(0x01)
	char *cc4a2abcfb : 1; // 0x18c(0x01)

	void *83c7974850(); // Function Engine.LevelStreaming.*83c7974850 // None // @ game+0x63ec2bc
	void CreateInstance(); // Function Engine.LevelStreaming.CreateInstance // None // @ game+0x63e6cfc
	void *f6794aa4b7(); // Function Engine.LevelStreaming.*f6794aa4b7 // None // @ game+0x63ec2d8
	void *1c2db0b2bb(); // Function Engine.LevelStreaming.*1c2db0b2bb // None // @ game+0x63ec788
	void *f047b6261f(); // Function Engine.LevelStreaming.*f047b6261f // None // @ game+0x63e9e2c
};

// Class Engine.LevelStreamingKismet
// Size: 0x1a0 (Inherited: 0x190)
struct ULevelStreamingKismet : ULevelStreaming {
	char *21a94df709 : 1; // 0x190(0x01)
	char *1602012ce2 : 1; // 0x190(0x01)
	char pad_190_2 : 6; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)

	struct UObject* *09950b360d(struct FString LevelName, struct FRotator Rotation); // Function Engine.LevelStreamingKismet.*09950b360d // None // @ game+0x63ef474
};

// Class Engine.*a03695a4f0
// Size: 0x190 (Inherited: 0x190)
struct U*a03695a4f0 : ULevelStreaming {
	struct FName PackageName; // 0x28(0x08)
	struct UWorld* WorldAsset; // 0x30(0x20)
	struct FName *f74aac41d2; // 0x60(0x08)
	struct TArray<struct FName> *f0772185df; // 0x68(0x10)
	char bLocked : 1; // 0x88(0x01)
	char pad_1D0_1 : 2; // 0x1d0(0x01)
	char *23df38c1e1 : 1; // 0x88(0x01)
	char bShouldBeLoaded : 1; // 0x88(0x01)
	char bShouldBeVisible : 1; // 0x88(0x01)
	char bShouldBlockOnLoad : 1; // 0x88(0x01)
	int32 LevelLODIndex; // 0x8c(0x04)
	struct FColor DrawColor; // 0x94(0x04)
	struct FLinearColor LevelColor; // 0x98(0x10)
	struct ULevel* *351c4cfadf; // 0xb8(0x08)
	struct ULevel* *918d7cb9b2; // 0xc0(0x08)
	struct TArray<struct ALevelStreamingVolume*> *b4acd47735; // 0xd0(0x10)
	float *faba900335; // 0xe0(0x04)
	struct FMulticastDelegate OnLevelLoaded; // 0xe8(0x10)
	struct FMulticastDelegate OnLevelUnloaded; // 0xf8(0x10)
	struct FMulticastDelegate OnLevelShown; // 0x108(0x10)
	struct FMulticastDelegate OnLevelHidden; // 0x118(0x10)
	struct TArray<struct FString> Keywords; // 0x128(0x10)
	struct FTransform LevelTransform; // 0x140(0x30)
	char *d33c5865c6 : 1; // 0x184(0x01)
	char bDisableDistanceStreaming : 1; // 0x18c(0x01)
	char *cc4a2abcfb : 1; // 0x18c(0x01)

	void *83c7974850(); // Function Engine.LevelStreaming.*83c7974850 // None // @ game+0x63ec2bc
	void CreateInstance(); // Function Engine.LevelStreaming.CreateInstance // None // @ game+0x63e6cfc
	void *f6794aa4b7(); // Function Engine.LevelStreaming.*f6794aa4b7 // None // @ game+0x63ec2d8
	void *1c2db0b2bb(); // Function Engine.LevelStreaming.*1c2db0b2bb // None // @ game+0x63ec788
	void *f047b6261f(); // Function Engine.LevelStreaming.*f047b6261f // None // @ game+0x63e9e2c
};

// Class Engine.*2acdc98da1
// Size: 0x40 (Inherited: 0x28)
struct U*2acdc98da1 : UObject {
	struct UModel* *de54bc93c0; // 0x28(0x08)
	struct TArray<int32> Surfaces; // 0x30(0x10)
};

// Class Engine.*55ca195ab7
// Size: 0x40 (Inherited: 0x28)
struct U*55ca195ab7 : UObject {
	struct F*553842a41b LightmassSettings; // 0x28(0x18)
};

// Class Engine.*6f84ea874b
// Size: 0x28 (Inherited: 0x28)
struct U*6f84ea874b : UObject {
};

// Class Engine.*fb767c1b75
// Size: 0xa8 (Inherited: 0x28)
struct U*fb767c1b75 : U*6f84ea874b {
	struct FString *639433fb1b; // 0x28(0x10)
	struct FString *be52f6db89; // 0x38(0x10)
	struct FString *f40aae97bb; // 0x48(0x10)
	struct FString *b221368133; // 0x58(0x10)
	struct FString *663654f172; // 0x68(0x10)
	struct FString *acf077800d; // 0x78(0x10)
	struct FString *ca004d3ff6; // 0x88(0x10)
	struct FString *a274624eef; // 0x98(0x10)
};

// Class Engine.MapBuildDataRegistry
// Size: 0x120 (Inherited: 0x28)
struct UMapBuildDataRegistry : UObject {
	enum class *457a9c5b67 *acec29dfe5; // 0x28(0x01)
	char pad_29[0xf7]; // 0x29(0xf7)
};

// Class Engine.*7a8513a33d
// Size: 0x98 (Inherited: 0x60)
struct U*7a8513a33d : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*e39e92c94d
// Size: 0x60 (Inherited: 0x60)
struct U*e39e92c94d : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.MaterialExpressionAdd
// Size: 0xd8 (Inherited: 0x60)
struct UMaterialExpressionAdd : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	float *50a1248030; // 0xd0(0x04)
	float *2ec866cf1d; // 0xd4(0x04)
};

// Class Engine.*8da53697a6
// Size: 0xd0 (Inherited: 0x60)
struct U*8da53697a6 : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
};

// Class Engine.*be9c26f6c8
// Size: 0x98 (Inherited: 0x60)
struct U*be9c26f6c8 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*0e606759c9
// Size: 0x98 (Inherited: 0x60)
struct U*0e606759c9 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*b5757a30ea
// Size: 0x98 (Inherited: 0x60)
struct U*b5757a30ea : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*fc5794ddb2
// Size: 0x98 (Inherited: 0x60)
struct U*fc5794ddb2 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*52df9cabf6
// Size: 0x98 (Inherited: 0x60)
struct U*52df9cabf6 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*ed10e86ab3
// Size: 0xd0 (Inherited: 0x60)
struct U*ed10e86ab3 : UMaterialExpression {
	struct FExpressionInput Y; // 0x60(0x38)
	struct FExpressionInput X; // 0x98(0x38)
};

// Class Engine.*2d35646719
// Size: 0xd0 (Inherited: 0x60)
struct U*2d35646719 : UMaterialExpression {
	struct FExpressionInput Y; // 0x60(0x38)
	struct FExpressionInput X; // 0x98(0x38)
};

// Class Engine.*5166d70fcc
// Size: 0x98 (Inherited: 0x60)
struct U*5166d70fcc : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*7ea5931c31
// Size: 0x98 (Inherited: 0x60)
struct U*7ea5931c31 : UMaterialExpression {
	struct FExpressionInput WorldPosition; // 0x60(0x38)
};

// Class Engine.MaterialExpressionAtmosphericLightColor
// Size: 0x60 (Inherited: 0x60)
struct UMaterialExpressionAtmosphericLightColor : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.MaterialExpressionAtmosphericLightVector
// Size: 0x60 (Inherited: 0x60)
struct UMaterialExpressionAtmosphericLightVector : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.MaterialExpressionBlackBody
// Size: 0x98 (Inherited: 0x60)
struct UMaterialExpressionBlackBody : UMaterialExpression {
	struct FExpressionInput Temp; // 0x60(0x38)
};

// Class Engine.*a2903aa395
// Size: 0x120 (Inherited: 0x60)
struct U*a2903aa395 : UMaterialExpression {
	struct FMaterialAttributesInput A; // 0x60(0x40)
	struct FMaterialAttributesInput B; // 0xa0(0x40)
	struct FExpressionInput Alpha; // 0xe0(0x38)
	enum class EMaterialAttributeBlend *8fd222c68a; // 0x118(0x01)
	enum class EMaterialAttributeBlend *5bdbb3a094; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)
};

// Class Engine.*205088b386
// Size: 0xa0 (Inherited: 0x60)
struct U*205088b386 : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x60(0x40)
};

// Class Engine.MaterialExpressionBumpOffset
// Size: 0x118 (Inherited: 0x60)
struct UMaterialExpressionBumpOffset : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x60(0x38)
	struct FExpressionInput Height; // 0x98(0x38)
	struct FExpressionInput HeightRatioInput; // 0xd0(0x38)
	float *5d8e7e2b26; // 0x108(0x04)
	float *7f44565464; // 0x10c(0x04)
	uint32 *9d489d4a01; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class Engine.*4f386825a2
// Size: 0x60 (Inherited: 0x60)
struct U*4f386825a2 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*694daeca8a
// Size: 0x60 (Inherited: 0x60)
struct U*694daeca8a : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*2c66594b25
// Size: 0x98 (Inherited: 0x60)
struct U*2c66594b25 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*10030e4d04
// Size: 0x118 (Inherited: 0x60)
struct U*10030e4d04 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	struct FExpressionInput Min; // 0x98(0x38)
	struct FExpressionInput Max; // 0xd0(0x38)
	enum class *78626736fd *5bacd138cd; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float *ca69e53bf5; // 0x10c(0x04)
	float *adc6d54f4f; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class Engine.*c5b2ac5ce5
// Size: 0x80 (Inherited: 0x60)
struct U*c5b2ac5ce5 : UMaterialExpression {
	struct UMaterialParameterCollection* Collection; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	struct FGuid *be3f59cf86; // 0x70(0x10)
};

// Class Engine.*6b66a26fde
// Size: 0x88 (Inherited: 0x60)
struct U*6b66a26fde : UMaterialExpression {
	int32 SizeX; // 0x60(0x04)
	int32 SizeY; // 0x64(0x04)
	struct FString Text; // 0x68(0x10)
	struct FLinearColor *68be6a22f6; // 0x78(0x10)
};

// Class Engine.*f01e3a5e93
// Size: 0xa0 (Inherited: 0x60)
struct U*f01e3a5e93 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	char R : 1; // 0x98(0x01)
	char G : 1; // 0x98(0x01)
	char B : 1; // 0x98(0x01)
	char A : 1; // 0x98(0x01)
	char pad_98_4 : 4; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Engine.MaterialExpressionConstant
// Size: 0x68 (Inherited: 0x60)
struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.MaterialExpressionConstant2Vector
// Size: 0x68 (Inherited: 0x60)
struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x60(0x04)
	float G; // 0x64(0x04)
};

// Class Engine.MaterialExpressionConstant3Vector
// Size: 0x70 (Inherited: 0x60)
struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x60(0x10)
};

// Class Engine.MaterialExpressionConstant4Vector
// Size: 0x70 (Inherited: 0x60)
struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	struct FLinearColor Constant; // 0x60(0x10)
};

// Class Engine.*6cdcba1fe1
// Size: 0xa0 (Inherited: 0x60)
struct U*6cdcba1fe1 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	float Bias; // 0x98(0x04)
	float Scale; // 0x9c(0x04)
};

// Class Engine.*8904b615c9
// Size: 0xa0 (Inherited: 0x60)
struct U*8904b615c9 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	float Period; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.*37663da93b
// Size: 0xd0 (Inherited: 0x60)
struct U*37663da93b : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
};

// Class Engine.*3484d16433
// Size: 0x98 (Inherited: 0x60)
struct U*3484d16433 : UMaterialExpression {
	struct FString Code; // 0x60(0x10)
	enum class *a5faa45b37 OutputType; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString Description; // 0x78(0x10)
	struct TArray<struct F*ce20c9df3f> Inputs; // 0x88(0x10)
};

// Class Engine.*00fbe15eb0
// Size: 0x98 (Inherited: 0x60)
struct U*00fbe15eb0 : U*c9284c4e3d {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*63c28c3ced
// Size: 0x98 (Inherited: 0x60)
struct U*63c28c3ced : U*c9284c4e3d {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*ef81ce75e8
// Size: 0xa8 (Inherited: 0x60)
struct U*ef81ce75e8 : U*c9284c4e3d {
	struct FExpressionInput Input; // 0x60(0x38)
	char pad_98[0x10]; // 0x98(0x10)
};

// Class Engine.*204d4072ab
// Size: 0x98 (Inherited: 0x60)
struct U*204d4072ab : UMaterialExpression {
	struct FExpressionInput Value; // 0x60(0x38)
};

// Class Engine.*2fd0357af1
// Size: 0x98 (Inherited: 0x60)
struct U*2fd0357af1 : UMaterialExpression {
	struct FExpressionInput Value; // 0x60(0x38)
};

// Class Engine.*8f6ca60946
// Size: 0x60 (Inherited: 0x60)
struct U*8f6ca60946 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*117c525dfa
// Size: 0x60 (Inherited: 0x60)
struct U*117c525dfa : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*063cc7c8a7
// Size: 0xa0 (Inherited: 0x60)
struct U*063cc7c8a7 : UMaterialExpression {
	struct FExpressionInput TextureSize; // 0x60(0x38)
	float *2def7177f5; // 0x98(0x04)
	float *1754f6b141; // 0x9c(0x04)
};

// Class Engine.*cfa3e4eddc
// Size: 0xd8 (Inherited: 0x60)
struct U*cfa3e4eddc : UMaterialExpression {
	struct FExpressionInput InOpacity; // 0x60(0x38)
	struct FExpressionInput FadeDistance; // 0x98(0x38)
	float *7d921157e6; // 0xd0(0x04)
	float *7491a6d9c7; // 0xd4(0x04)
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
// Size: 0xa0 (Inherited: 0x60)
struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	enum class *d210fbb932 *ece23de0c2; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FExpressionInput Depth; // 0x68(0x38)
};

// Class Engine.*326c4ca14e
// Size: 0x98 (Inherited: 0x60)
struct U*326c4ca14e : UMaterialExpression {
	struct FExpressionInput *523b356fd2; // 0x60(0x38)
};

// Class Engine.*e6ada76c1a
// Size: 0xe0 (Inherited: 0x60)
struct U*e6ada76c1a : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	struct FExpressionInput Fraction; // 0x98(0x38)
	struct FLinearColor *a9988e804e; // 0xd0(0x10)
};

// Class Engine.*9d9cabf424
// Size: 0xd0 (Inherited: 0x60)
struct U*9d9cabf424 : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
};

// Class Engine.*d57c64796b
// Size: 0x60 (Inherited: 0x60)
struct U*d57c64796b : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*b516df5471
// Size: 0x98 (Inherited: 0x60)
struct U*b516df5471 : UMaterialExpression {
	struct FExpressionInput Position; // 0x60(0x38)
};

// Class Engine.*996252739a
// Size: 0x98 (Inherited: 0x60)
struct U*996252739a : UMaterialExpression {
	struct FExpressionInput Position; // 0x60(0x38)
};

// Class Engine.MaterialExpressionDivide
// Size: 0xd8 (Inherited: 0x60)
struct UMaterialExpressionDivide : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	float *50a1248030; // 0xd0(0x04)
	float *2ec866cf1d; // 0xd4(0x04)
};

// Class Engine.*9e90c2f62a
// Size: 0xd0 (Inherited: 0x60)
struct U*9e90c2f62a : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
};

// Class Engine.*e2921c327e
// Size: 0x80 (Inherited: 0x60)
struct U*e2921c327e : UMaterialExpression {
	struct TArray<struct FString> ParamNames; // 0x60(0x10)
	struct FLinearColor DefaultValue; // 0x70(0x10)
};

// Class Engine.*aa9de280b8
// Size: 0x60 (Inherited: 0x60)
struct U*aa9de280b8 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*907b56d793
// Size: 0x178 (Inherited: 0x60)
struct U*907b56d793 : UMaterialExpression {
	struct FExpressionInput Default; // 0x60(0x38)
	struct FExpressionInput Inputs[0x04]; // 0x98(0xe0)
};

// Class Engine.*e405073cbf
// Size: 0x98 (Inherited: 0x60)
struct U*e405073cbf : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*65acbde2ea
// Size: 0xd0 (Inherited: 0x60)
struct U*65acbde2ea : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
};

// Class Engine.*3edaf65177
// Size: 0x70 (Inherited: 0x60)
struct U*3edaf65177 : UMaterialExpression {
	struct UFont* Font; // 0x60(0x08)
	int32 *97fa7c4ce0; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.*78ae309e00
// Size: 0x90 (Inherited: 0x70)
struct U*78ae309e00 : U*3edaf65177 {
	struct FName ParameterName; // 0x70(0x08)
	struct FGuid *eac668cb87; // 0x78(0x10)
	struct FName Group; // 0x88(0x08)
};

// Class Engine.*fcace9ab00
// Size: 0x98 (Inherited: 0x60)
struct U*fcace9ab00 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*df5c3e8b80
// Size: 0x118 (Inherited: 0x60)
struct U*df5c3e8b80 : UMaterialExpression {
	struct FExpressionInput ExponentIn; // 0x60(0x38)
	float Exponent; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FExpressionInput BaseReflectFractionIn; // 0xa0(0x38)
	float *b12f0aebea; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FExpressionInput Normal; // 0xe0(0x38)
};

// Class Engine.*47e9beaddb
// Size: 0x130 (Inherited: 0x60)
struct U*47e9beaddb : UMaterialExpression {
	struct FExpressionInput Preview; // 0x60(0x38)
	struct FString InputName; // 0x98(0x10)
	struct FString Description; // 0xa8(0x10)
	struct FGuid ID; // 0xb8(0x10)
	enum class *635627cf2e InputType; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FVector4 *e555d3542c; // 0xd0(0x10)
	char *eb505df2e4 : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32 *fd7eb9d855; // 0xe4(0x04)
	char *497a1a6cde : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x47]; // 0xe9(0x47)
};

// Class Engine.*8eaf84e920
// Size: 0xd8 (Inherited: 0x60)
struct U*8eaf84e920 : UMaterialExpression {
	struct FString OutputName; // 0x60(0x10)
	struct FString Description; // 0x70(0x10)
	int32 *fd7eb9d855; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FExpressionInput A; // 0x88(0x38)
	char *c690c96fd8 : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FGuid ID; // 0xc4(0x10)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class Engine.MaterialExpressionGetMaterialAttributes
// Size: 0xb0 (Inherited: 0x60)
struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	struct FMaterialAttributesInput MaterialAttributes; // 0x60(0x40)
	struct TArray<struct FGuid> *9c59ff1049; // 0xa0(0x10)
};

// Class Engine.*7567d4955a
// Size: 0x108 (Inherited: 0x60)
struct U*7567d4955a : UMaterialExpression {
	struct FExpressionInput Default; // 0x60(0x38)
	struct FExpressionInput *38d890f558; // 0x98(0x38)
	struct FExpressionInput *6290b4acf1; // 0xd0(0x38)
};

// Class Engine.MaterialExpressionIf
// Size: 0x188 (Inherited: 0x60)
struct UMaterialExpressionIf : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	struct FExpressionInput AGreaterThanB; // 0xd0(0x38)
	struct FExpressionInput AEqualsB; // 0x108(0x38)
	struct FExpressionInput ALessThanB; // 0x140(0x38)
	float *49cc8db7e3; // 0x178(0x04)
	float *2ec866cf1d; // 0x17c(0x04)
	float ConstAEqualsB; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
};

// Class Engine.*e950920538
// Size: 0x60 (Inherited: 0x60)
struct U*e950920538 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*32c98e8edd
// Size: 0xd0 (Inherited: 0x60)
struct U*32c98e8edd : UMaterialExpression {
	struct FExpressionInput RealTime; // 0x60(0x38)
	struct FExpressionInput Lightmass; // 0x98(0x38)
};

// Class Engine.*4a69a2d9a9
// Size: 0x60 (Inherited: 0x60)
struct U*4a69a2d9a9 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.MaterialExpressionLinearInterpolate
// Size: 0x118 (Inherited: 0x60)
struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	struct FExpressionInput Alpha; // 0xd0(0x38)
	float *50a1248030; // 0x108(0x04)
	float *2ec866cf1d; // 0x10c(0x04)
	float *e88f1d14ea; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class Engine.*855dfc39a2
// Size: 0x98 (Inherited: 0x60)
struct U*855dfc39a2 : UMaterialExpression {
	struct FExpressionInput X; // 0x60(0x38)
};

// Class Engine.*df44d18ab4
// Size: 0x648 (Inherited: 0x60)
struct U*df44d18ab4 : UMaterialExpression {
	struct FExpressionInput BaseColor; // 0x60(0x38)
	struct FExpressionInput Metallic; // 0x98(0x38)
	struct FExpressionInput Specular; // 0xd0(0x38)
	struct FExpressionInput Roughness; // 0x108(0x38)
	struct FExpressionInput EmissiveColor; // 0x140(0x38)
	struct FExpressionInput Opacity; // 0x178(0x38)
	struct FExpressionInput OpacityMask; // 0x1b0(0x38)
	struct FExpressionInput Normal; // 0x1e8(0x38)
	struct FExpressionInput WorldPositionOffset; // 0x220(0x38)
	struct FExpressionInput WorldDisplacement; // 0x258(0x38)
	struct FExpressionInput TessellationMultiplier; // 0x290(0x38)
	struct FExpressionInput SubsurfaceColor; // 0x2c8(0x38)
	struct FExpressionInput ClearCoat; // 0x300(0x38)
	struct FExpressionInput ClearCoatRoughness; // 0x338(0x38)
	struct FExpressionInput AmbientOcclusion; // 0x370(0x38)
	struct FExpressionInput Refraction; // 0x3a8(0x38)
	struct FExpressionInput *699f8b87dd[0x08]; // 0x3e0(0x1c0)
	struct FExpressionInput PixelDepthOffset; // 0x5a0(0x38)
	struct FExpressionInput Temperature; // 0x5d8(0x38)
	struct FExpressionInput TemperatureAlpha; // 0x610(0x38)
};

// Class Engine.MaterialExpressionMaterialFunctionCall
// Size: 0x88 (Inherited: 0x60)
struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	struct UMaterialFunction* MaterialFunction; // 0x60(0x08)
	struct TArray<struct F*f6335bfdb5> *36d56dd710; // 0x68(0x10)
	struct TArray<struct F*52e5e1b80a> *2d606d3802; // 0x78(0x10)
};

// Class Engine.*e3857481f8
// Size: 0xd0 (Inherited: 0x60)
struct U*e3857481f8 : UMaterialExpression {
	struct FExpressionInput RealTime; // 0x60(0x38)
	struct FExpressionInput *292301d435; // 0x98(0x38)
};

// Class Engine.*a1002947d1
// Size: 0xd8 (Inherited: 0x60)
struct U*a1002947d1 : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	float *50a1248030; // 0xd0(0x04)
	float *2ec866cf1d; // 0xd4(0x04)
};

// Class Engine.*d14454e734
// Size: 0xd8 (Inherited: 0x60)
struct U*d14454e734 : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	float *50a1248030; // 0xd0(0x04)
	float *2ec866cf1d; // 0xd4(0x04)
};

// Class Engine.MaterialExpressionMultiply
// Size: 0xd8 (Inherited: 0x60)
struct UMaterialExpressionMultiply : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	float *50a1248030; // 0xd0(0x04)
	float *2ec866cf1d; // 0xd4(0x04)
};

// Class Engine.MaterialExpressionNoise
// Size: 0xf8 (Inherited: 0x60)
struct UMaterialExpressionNoise : UMaterialExpression {
	struct FExpressionInput Position; // 0x60(0x38)
	struct FExpressionInput *f4eba49d57; // 0x98(0x38)
	float Scale; // 0xd0(0x04)
	int32 Quality; // 0xd4(0x04)
	enum class ENoiseFunction *52e843ae4f; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	char *fc87d63df9 : 1; // 0xdc(0x01)
	char pad_DC_1 : 7; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	int32 Levels; // 0xe0(0x04)
	float *c89fd367b1; // 0xe4(0x04)
	float *745e0e8d1c; // 0xe8(0x04)
	float *4bcbc6671c; // 0xec(0x04)
	char *0c791141e7 : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	uint32 RepeatSize; // 0xf4(0x04)
};

// Class Engine.MaterialExpressionNormalize
// Size: 0x98 (Inherited: 0x60)
struct UMaterialExpressionNormalize : UMaterialExpression {
	struct FExpressionInput *b6a4a02a64; // 0x60(0x38)
};

// Class Engine.*84add71a64
// Size: 0x60 (Inherited: 0x60)
struct U*84add71a64 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*6e54340ca1
// Size: 0x60 (Inherited: 0x60)
struct U*6e54340ca1 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*e2e36ade21
// Size: 0x68 (Inherited: 0x60)
struct U*e2e36ade21 : UMaterialExpression {
	enum class *cb3930940e *5ed77e7d27; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*77f6f75c5c
// Size: 0x60 (Inherited: 0x60)
struct U*77f6f75c5c : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.MaterialExpressionOneMinus
// Size: 0x98 (Inherited: 0x60)
struct UMaterialExpressionOneMinus : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.MaterialExpressionPanner
// Size: 0x118 (Inherited: 0x60)
struct UMaterialExpressionPanner : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x60(0x38)
	struct FExpressionInput Time; // 0x98(0x38)
	struct FExpressionInput Speed; // 0xd0(0x38)
	float *fb28eeab10; // 0x108(0x04)
	float *3fa02c69f3; // 0x10c(0x04)
	uint32 *9d489d4a01; // 0x110(0x04)
	bool *6e856cca1c; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
};

// Class Engine.*2885fda387
// Size: 0x80 (Inherited: 0x60)
struct U*2885fda387 : UMaterialExpression {
	struct FName ParameterName; // 0x60(0x08)
	struct FGuid *eac668cb87; // 0x68(0x10)
	struct FName Group; // 0x78(0x08)
};

// Class Engine.MaterialExpressionScalarParameter
// Size: 0x90 (Inherited: 0x80)
struct UMaterialExpressionScalarParameter : U*2885fda387 {
	float DefaultValue; // 0x80(0x04)
	float SliderMin; // 0x84(0x04)
	float SliderMax; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// Class Engine.*4ab25df152
// Size: 0x88 (Inherited: 0x80)
struct U*4ab25df152 : U*2885fda387 {
	char DefaultValue : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*31e4ce6393
// Size: 0xf8 (Inherited: 0x88)
struct U*31e4ce6393 : U*4ab25df152 {
	struct FExpressionInput A; // 0x88(0x38)
	struct FExpressionInput B; // 0xc0(0x38)
};

// Class Engine.*a9e84f2f13
// Size: 0xc0 (Inherited: 0x80)
struct U*a9e84f2f13 : U*2885fda387 {
	struct FExpressionInput Input; // 0x80(0x38)
	char *cbfdfd98e8 : 1; // 0xb8(0x01)
	char *d505dc68c4 : 1; // 0xb8(0x01)
	char *3683b34757 : 1; // 0xb8(0x01)
	char *fc36ec8043 : 1; // 0xb8(0x01)
	char pad_B8_4 : 4; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Engine.MaterialExpressionVectorParameter
// Size: 0x90 (Inherited: 0x80)
struct UMaterialExpressionVectorParameter : U*2885fda387 {
	struct FLinearColor DefaultValue; // 0x80(0x10)
};

// Class Engine.*0ffa4604b8
// Size: 0x60 (Inherited: 0x60)
struct U*0ffa4604b8 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*b632975aba
// Size: 0x68 (Inherited: 0x60)
struct U*b632975aba : UMaterialExpression {
	struct U*5ca6d5a987* Layer; // 0x60(0x08)
};

// Class Engine.*292f14708a
// Size: 0x60 (Inherited: 0x60)
struct U*292f14708a : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*c33194ee0e
// Size: 0x60 (Inherited: 0x60)
struct U*c33194ee0e : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*066465b6de
// Size: 0x60 (Inherited: 0x60)
struct U*066465b6de : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*b52055a4fd
// Size: 0x60 (Inherited: 0x60)
struct U*b52055a4fd : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*4f55ed1644
// Size: 0x60 (Inherited: 0x60)
struct U*4f55ed1644 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*3e42e41b23
// Size: 0x60 (Inherited: 0x60)
struct U*3e42e41b23 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*2f73f446e3
// Size: 0x60 (Inherited: 0x60)
struct U*2f73f446e3 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*fd544ed7ed
// Size: 0x60 (Inherited: 0x60)
struct U*fd544ed7ed : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*28ae69ad8f
// Size: 0x60 (Inherited: 0x60)
struct U*28ae69ad8f : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*628c23b902
// Size: 0x60 (Inherited: 0x60)
struct U*628c23b902 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*b0d053a359
// Size: 0x60 (Inherited: 0x60)
struct U*b0d053a359 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*410195bce7
// Size: 0x60 (Inherited: 0x60)
struct U*410195bce7 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*53a9deb369
// Size: 0x60 (Inherited: 0x60)
struct U*53a9deb369 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*ecf5d93cf4
// Size: 0x60 (Inherited: 0x60)
struct U*ecf5d93cf4 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.MaterialExpressionPower
// Size: 0xd8 (Inherited: 0x60)
struct UMaterialExpressionPower : UMaterialExpression {
	struct FExpressionInput Base; // 0x60(0x38)
	struct FExpressionInput Exponent; // 0x98(0x38)
	float *b32b04bc69; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class Engine.*0c9b2446de
// Size: 0x60 (Inherited: 0x60)
struct U*0c9b2446de : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*ec2456f5b1
// Size: 0x60 (Inherited: 0x60)
struct U*ec2456f5b1 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*ee91a62b01
// Size: 0x60 (Inherited: 0x60)
struct U*ee91a62b01 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*bc77f188aa
// Size: 0xd0 (Inherited: 0x60)
struct U*bc77f188aa : UMaterialExpression {
	struct FExpressionInput CurrentFrame; // 0x60(0x38)
	struct FExpressionInput *d64ad82768; // 0x98(0x38)
};

// Class Engine.*e83eda278d
// Size: 0x140 (Inherited: 0x60)
struct U*e83eda278d : UMaterialExpression {
	struct FExpressionInput Default; // 0x60(0x38)
	struct FExpressionInput Inputs[0x03]; // 0x98(0xa8)
};

// Class Engine.MaterialExpressionReflectionVectorWS
// Size: 0xa0 (Inherited: 0x60)
struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	struct FExpressionInput *f174da00c4; // 0x60(0x38)
	char *5ca7a4e154 : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Engine.*a4abeb7f0c
// Size: 0x98 (Inherited: 0x60)
struct U*a4abeb7f0c : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*c83bd3a8c2
// Size: 0x148 (Inherited: 0x60)
struct U*c83bd3a8c2 : UMaterialExpression {
	struct FExpressionInput *e333fe85f0; // 0x60(0x38)
	struct FExpressionInput RotationAngle; // 0x98(0x38)
	struct FExpressionInput *4d9ed79430; // 0xd0(0x38)
	struct FExpressionInput Position; // 0x108(0x38)
	float Period; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
};

// Class Engine.*35c7ca6e5d
// Size: 0xe0 (Inherited: 0x60)
struct U*35c7ca6e5d : UMaterialExpression {
	struct FExpressionInput Coordinate; // 0x60(0x38)
	struct FExpressionInput Time; // 0x98(0x38)
	float *c17c807309; // 0xd0(0x04)
	float *bec753ef1d; // 0xd4(0x04)
	float Speed; // 0xd8(0x04)
	uint32 *9d489d4a01; // 0xdc(0x04)
};

// Class Engine.*1a405d659b
// Size: 0x98 (Inherited: 0x60)
struct U*1a405d659b : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*b340281fc0
// Size: 0x98 (Inherited: 0x60)
struct U*b340281fc0 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*eca9fb5b57
// Size: 0xe0 (Inherited: 0x60)
struct U*eca9fb5b57 : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FExpressionInput Input; // 0x68(0x38)
	struct FExpressionInput OffsetFraction; // 0xa0(0x38)
	struct FVector2D *71b958be3a; // 0xd8(0x08)
};

// Class Engine.*5587afbea2
// Size: 0xe0 (Inherited: 0x60)
struct U*5587afbea2 : UMaterialExpression {
	enum class EMaterialSceneAttributeInputMode InputMode; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FExpressionInput Input; // 0x68(0x38)
	struct FExpressionInput Coordinates; // 0xa0(0x38)
	struct FVector2D *71b958be3a; // 0xd8(0x08)
};

// Class Engine.*9760953ad9
// Size: 0x60 (Inherited: 0x60)
struct U*9760953ad9 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*a15591ba4b
// Size: 0xa0 (Inherited: 0x60)
struct U*a15591ba4b : UMaterialExpression {
	struct FExpressionInput Coordinates; // 0x60(0x38)
	enum class ESceneTextureId *e7f13b10fc; // 0x98(0x01)
	bool *ce9e2ba434; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// Class Engine.*bde8b25b7d
// Size: 0x68 (Inherited: 0x60)
struct U*bde8b25b7d : UMaterialExpression {
	enum class *284a1fbeb1 *ac65e4d142; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*bbb67920e4
// Size: 0x60 (Inherited: 0x60)
struct U*bbb67920e4 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.MaterialExpressionSetMaterialAttributes
// Size: 0x80 (Inherited: 0x60)
struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	struct TArray<struct FExpressionInput> Inputs; // 0x60(0x10)
	struct TArray<struct FGuid> *7966cba92e; // 0x70(0x10)
};

// Class Engine.*373cfdc3b2
// Size: 0x98 (Inherited: 0x60)
struct U*373cfdc3b2 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*d8e279e36a
// Size: 0xa0 (Inherited: 0x60)
struct U*d8e279e36a : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	float Period; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.*4d4503b586
// Size: 0x150 (Inherited: 0x60)
struct U*4d4503b586 : UMaterialExpression {
	struct FExpressionInput *54e049ca0b; // 0x60(0x38)
	struct FExpressionInput *cf911ca468; // 0x98(0x38)
	struct FExpressionInput *ce6099576e; // 0xd0(0x38)
	struct FExpressionInput *6649218d32; // 0x108(0x38)
	enum class *67be135327 GeometryType; // 0x140(0x01)
	enum class *90c803502f *eec761fdde; // 0x141(0x01)
	enum class *fe11250864 LODType; // 0x142(0x01)
	char pad_143[0x1]; // 0x143(0x01)
	float BillboardThreshold; // 0x144(0x04)
	bool *dbd68770fc; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// Class Engine.*014ca69945
// Size: 0x148 (Inherited: 0x60)
struct U*014ca69945 : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	struct FExpressionInput Radius; // 0xd0(0x38)
	struct FExpressionInput Hardness; // 0x108(0x38)
	float AttenuationRadius; // 0x140(0x04)
	float *8fff97f46c; // 0x144(0x04)
};

// Class Engine.*514229abda
// Size: 0xa0 (Inherited: 0x60)
struct U*514229abda : UMaterialExpression {
	struct FExpressionInput Density; // 0x60(0x38)
	float *5e18939062; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.*427bc176a7
// Size: 0x98 (Inherited: 0x60)
struct U*427bc176a7 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*8d9cfc18fa
// Size: 0x68 (Inherited: 0x60)
struct U*8d9cfc18fa : UMaterialExpression {
	char Value : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*7a9ec54fe6
// Size: 0x110 (Inherited: 0x60)
struct U*7a9ec54fe6 : UMaterialExpression {
	char DefaultValue : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FExpressionInput A; // 0x68(0x38)
	struct FExpressionInput B; // 0xa0(0x38)
	struct FExpressionInput Value; // 0xd8(0x38)
};

// Class Engine.*c387697226
// Size: 0xd8 (Inherited: 0x60)
struct U*c387697226 : UMaterialExpression {
	struct FExpressionInput A; // 0x60(0x38)
	struct FExpressionInput B; // 0x98(0x38)
	float *50a1248030; // 0xd0(0x04)
	float *2ec866cf1d; // 0xd4(0x04)
};

// Class Engine.*dfb7d9afe2
// Size: 0xa0 (Inherited: 0x60)
struct U*dfb7d9afe2 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	float Period; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// Class Engine.*ab1a646197
// Size: 0xb8 (Inherited: 0x60)
struct U*ab1a646197 : U*699123f0e5 {
	struct FExpressionInput UV; // 0x60(0x38)
	struct TArray<struct F*72d0292f10> Inputs; // 0x98(0x10)
	uint32 *9d489d4a01; // 0xa8(0x04)
	char pad_AC[0xc]; // 0xac(0x0c)
};

// Class Engine.*083dfe759e
// Size: 0xc0 (Inherited: 0x60)
struct U*083dfe759e : U*699123f0e5 {
	struct FExpressionInput UV; // 0x60(0x38)
	struct TArray<struct F*c183a88925> Inputs; // 0x98(0x10)
	uint32 *9d489d4a01; // 0xa8(0x04)
	char pad_AC[0x14]; // 0xac(0x14)
};

// Class Engine.*b8e2566d07
// Size: 0xf8 (Inherited: 0x60)
struct U*b8e2566d07 : U*699123f0e5 {
	struct FExpressionInput UV; // 0x60(0x38)
	struct FExpressionInput *de5c116ee2; // 0x98(0x38)
	struct TArray<struct F*90a39ffcd1> Inputs; // 0xd0(0x10)
	uint32 *9d489d4a01; // 0xe0(0x04)
	char pad_E4[0x14]; // 0xe4(0x14)
};

// Class Engine.*e783e15fe6
// Size: 0x70 (Inherited: 0x60)
struct U*e783e15fe6 : UMaterialExpression {
	struct UTexture* Texture; // 0x60(0x08)
	enum class EMaterialSamplerType *7dc6d3fe3a; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	char IsDefaultMeshpaintTexture : 1; // 0x6c(0x01)
	char pad_6C_1 : 7; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.*475e4fca6e
// Size: 0x70 (Inherited: 0x70)
struct U*475e4fca6e : U*e783e15fe6 {
	struct UTexture* Texture; // 0x60(0x08)
	enum class EMaterialSamplerType *7dc6d3fe3a; // 0x68(0x01)
	char IsDefaultMeshpaintTexture : 1; // 0x6c(0x01)
};

// Class Engine.MaterialExpressionTextureSample
// Size: 0x1e8 (Inherited: 0x70)
struct UMaterialExpressionTextureSample : U*e783e15fe6 {
	struct FExpressionInput Coordinates; // 0x70(0x38)
	struct FExpressionInput TextureObject; // 0xa8(0x38)
	struct FExpressionInput *4b923e37d6; // 0xe0(0x38)
	struct FExpressionInput *eeaa5aec06; // 0x118(0x38)
	struct FExpressionInput *6e6527438f; // 0x150(0x38)
	struct FExpressionInput SampleCondition; // 0x188(0x38)
	enum class *a9f1f9067c MipValueMode; // 0x1c0(0x01)
	enum class *5e9a895575 *14325d8bab; // 0x1c1(0x01)
	char pad_1C2[0x2]; // 0x1c2(0x02)
	uint32 *9d489d4a01; // 0x1c4(0x04)
	int32 *74ad6e9e7f; // 0x1c8(0x04)
	char *6eadd7df03 : 1; // 0x1cc(0x01)
	char pad_1CC_1 : 7; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)
	bool *9954edb9d0; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	struct FLinearColor DefaultValue; // 0x1d4(0x10)
	char pad_1E4[0x4]; // 0x1e4(0x04)
};

// Class Engine.*9a396b4f6b
// Size: 0x1f0 (Inherited: 0x1e8)
struct U*9a396b4f6b : UMaterialExpressionTextureSample {
	char *4615a06f33 : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
};

// Class Engine.*53d7ac5dcb
// Size: 0x208 (Inherited: 0x1e8)
struct U*53d7ac5dcb : UMaterialExpressionTextureSample {
	struct FName ParameterName; // 0x1e8(0x08)
	struct FGuid *eac668cb87; // 0x1f0(0x10)
	struct FName Group; // 0x200(0x08)
};

// Class Engine.*33beb79b5f
// Size: 0x208 (Inherited: 0x208)
struct U*33beb79b5f : U*53d7ac5dcb {
	struct FName ParameterName; // 0x1e8(0x08)
	struct FGuid *eac668cb87; // 0x1f0(0x10)
	struct FName Group; // 0x200(0x08)
};

// Class Engine.*ba54cde862
// Size: 0x208 (Inherited: 0x208)
struct U*ba54cde862 : U*53d7ac5dcb {
	struct FName ParameterName; // 0x1e8(0x08)
	struct FGuid *eac668cb87; // 0x1f0(0x10)
	struct FName Group; // 0x200(0x08)
};

// Class Engine.*1c216c9a53
// Size: 0x210 (Inherited: 0x208)
struct U*1c216c9a53 : U*ba54cde862 {
	float Threshold; // 0x208(0x04)
	enum class *8af4bb4d51 Channel; // 0x20c(0x01)
	char pad_20D[0x3]; // 0x20d(0x03)
};

// Class Engine.*c3648fe128
// Size: 0x210 (Inherited: 0x208)
struct U*c3648fe128 : U*ba54cde862 {
	char *4615a06f33 : 1; // 0x208(0x01)
	char pad_208_1 : 7; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
};

// Class Engine.*2d92e288bc
// Size: 0x208 (Inherited: 0x208)
struct U*2d92e288bc : U*53d7ac5dcb {
	struct FName ParameterName; // 0x1e8(0x08)
	struct FGuid *eac668cb87; // 0x1f0(0x10)
	struct FName Group; // 0x200(0x08)
};

// Class Engine.*7600be2779
// Size: 0x208 (Inherited: 0x208)
struct U*7600be2779 : U*53d7ac5dcb {
	struct FName ParameterName; // 0x1e8(0x08)
	struct FGuid *eac668cb87; // 0x1f0(0x10)
	struct FName Group; // 0x200(0x08)
};

// Class Engine.MaterialExpressionTextureCoordinate
// Size: 0x70 (Inherited: 0x60)
struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32 *afc7652008; // 0x60(0x04)
	float *cd5cd1ea45; // 0x64(0x04)
	float *58ed3c7ea2; // 0x68(0x04)
	char UnMirrorU : 1; // 0x6c(0x01)
	char UnMirrorV : 1; // 0x6c(0x01)
	char pad_6C_2 : 6; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.*ec9bccd893
// Size: 0xa0 (Inherited: 0x60)
struct U*ec9bccd893 : UMaterialExpression {
	struct FExpressionInput TextureObject; // 0x60(0x38)
	enum class EMaterialExposedTextureProperty Property; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Engine.*16d784e1ec
// Size: 0x68 (Inherited: 0x60)
struct U*16d784e1ec : UMaterialExpression {
	char *f0b28c1916 : 1; // 0x60(0x01)
	char bOverride_Period : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Period; // 0x64(0x04)
};

// Class Engine.*c0fb7112ab
// Size: 0xa0 (Inherited: 0x60)
struct U*c0fb7112ab : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	enum class EMaterialVectorCoordTransformSource *435dc16597; // 0x98(0x01)
	enum class EMaterialVectorCoordTransform TransformType; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// Class Engine.*f730149037
// Size: 0xa0 (Inherited: 0x60)
struct U*f730149037 : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
	enum class EMaterialPositionTransformSource *435dc16597; // 0x98(0x01)
	enum class EMaterialPositionTransformSource TransformType; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// Class Engine.*0fb2b6519f
// Size: 0x98 (Inherited: 0x60)
struct U*0fb2b6519f : UMaterialExpression {
	struct FExpressionInput Input; // 0x60(0x38)
};

// Class Engine.*dc78d701cf
// Size: 0x60 (Inherited: 0x60)
struct U*dc78d701cf : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.MaterialExpressionVectorNoise
// Size: 0xa8 (Inherited: 0x60)
struct UMaterialExpressionVectorNoise : UMaterialExpression {
	struct FExpressionInput Position; // 0x60(0x38)
	enum class *a33dc43e2a *52e843ae4f; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32 Quality; // 0x9c(0x04)
	char *0c791141e7 : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	uint32 TileSize; // 0xa4(0x04)
};

// Class Engine.*5d4fe8ca37
// Size: 0x60 (Inherited: 0x60)
struct U*5d4fe8ca37 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*bb5a2bd637
// Size: 0x60 (Inherited: 0x60)
struct U*bb5a2bd637 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*5671b68df7
// Size: 0x60 (Inherited: 0x60)
struct U*5671b68df7 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*39b3eefcdd
// Size: 0x68 (Inherited: 0x60)
struct U*39b3eefcdd : UMaterialExpression {
	enum class EMaterialExposedViewProperty Property; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*bfd408cd42
// Size: 0x60 (Inherited: 0x60)
struct U*bfd408cd42 : UMaterialExpression {
	struct UMaterial* Material; // 0x28(0x08)
	struct UMaterialFunction* Function; // 0x30(0x08)
	struct FString Desc; // 0x38(0x10)
	struct FColor BorderColor; // 0x48(0x04)
	char *1de66c58b2 : 1; // 0x4c(0x01)
	char *983854d3fd : 1; // 0x4c(0x01)
	char *23373f140d : 1; // 0x4c(0x01)
	char *fcfa3c4f53 : 1; // 0x4c(0x01)
	char *0dfd399f8d : 1; // 0x4c(0x01)
	char *a9a0a72ccf : 1; // 0x4c(0x01)
	char *f11152e06d : 1; // 0x4c(0x01)
	char *2e1791687e : 1; // 0x4c(0x01)
	char *c2835d8d12 : 1; // 0x4d(0x01)
	char *f0c96f4fc4 : 1; // 0x4d(0x01)
	char *1c92d522e2 : 1; // 0x4d(0x01)
	struct TArray<struct FExpressionOutput> Outputs; // 0x50(0x10)
};

// Class Engine.*207abc4c3c
// Size: 0x68 (Inherited: 0x60)
struct U*207abc4c3c : UMaterialExpression {
	enum class *f9aa85ba4d *ef815b766d; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.MaterialFunction
// Size: 0x68 (Inherited: 0x28)
struct UMaterialFunction : UObject {
	struct FGuid *f498029bb1; // 0x28(0x10)
	struct FString Description; // 0x38(0x10)
	char bExposeToLibrary : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct UMaterialExpression*> *d17c288f90; // 0x50(0x10)
	char *f54ce8a897 : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.Material
// Size: 0xa80 (Inherited: 0x70)
struct UMaterial : UMaterialInterface {
	struct UPhysicalMaterial* PhysMaterial; // 0x70(0x08)
	struct FColorMaterialInput DiffuseColor; // 0x78(0x40)
	struct FColorMaterialInput SpecularColor; // 0xb8(0x40)
	struct FColorMaterialInput BaseColor; // 0xf8(0x40)
	struct FScalarMaterialInput Metallic; // 0x138(0x40)
	struct FScalarMaterialInput Specular; // 0x178(0x40)
	struct FScalarMaterialInput Roughness; // 0x1b8(0x40)
	struct FVectorMaterialInput Normal; // 0x1f8(0x48)
	struct FColorMaterialInput EmissiveColor; // 0x240(0x40)
	struct FScalarMaterialInput Opacity; // 0x280(0x40)
	struct FScalarMaterialInput OpacityMask; // 0x2c0(0x40)
	enum class EMaterialDomain MaterialDomain; // 0x300(0x01)
	enum class EBlendMode BlendMode; // 0x301(0x01)
	enum class *c252e1179d *892f5f0689; // 0x302(0x01)
	enum class *d97bcb1730 MaterialDecalResponse; // 0x303(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	float OpacityMaskClipValue; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FVectorMaterialInput WorldPositionOffset; // 0x310(0x48)
	struct FVectorMaterialInput WorldDisplacement; // 0x358(0x48)
	struct FScalarMaterialInput TessellationMultiplier; // 0x3a0(0x40)
	struct FColorMaterialInput SubsurfaceColor; // 0x3e0(0x40)
	struct FScalarMaterialInput ClearCoat; // 0x420(0x40)
	struct FScalarMaterialInput ClearCoatRoughness; // 0x460(0x40)
	struct FScalarMaterialInput AmbientOcclusion; // 0x4a0(0x40)
	struct FScalarMaterialInput Refraction; // 0x4e0(0x40)
	struct FVector2MaterialInput *699f8b87dd[0x08]; // 0x520(0x240)
	struct FMaterialAttributesInput MaterialAttributes; // 0x760(0x40)
	struct FScalarMaterialInput PixelDepthOffset; // 0x7a0(0x40)
	struct FScalarMaterialInput Temperature; // 0x7e0(0x40)
	struct FScalarMaterialInput TemperatureAlpha; // 0x820(0x40)
	char bPrepassMasked : 1; // 0x860(0x01)
	char *c19f4da185 : 1; // 0x860(0x01)
	char *4bfb2217bc : 1; // 0x860(0x01)
	char *d694a3b6b8 : 1; // 0x860(0x01)
	char *ab6106af04 : 1; // 0x860(0x01)
	char TwoSided : 1; // 0x860(0x01)
	char DitheredLODTransition : 1; // 0x860(0x01)
	char *0a942eba30 : 1; // 0x860(0x01)
	char *fe5ec1506a : 1; // 0x861(0x01)
	char *f598d55538 : 1; // 0x861(0x01)
	char pad_861_2 : 6; // 0x861(0x01)
	char pad_862[0x2]; // 0x862(0x02)
	int32 *da559cb041; // 0x864(0x04)
	enum class ETranslucencyLightingMode *7fb2c8391e; // 0x868(0x01)
	char pad_869[0x3]; // 0x869(0x03)
	float *7b25f6c5fd; // 0x86c(0x04)
	char *344c624756 : 1; // 0x870(0x01)
	char pad_870_1 : 7; // 0x870(0x01)
	char pad_871[0x3]; // 0x871(0x03)
	float *b61a711808; // 0x874(0x04)
	float *6bd1f1497a; // 0x878(0x04)
	float *dc74a8847a; // 0x87c(0x04)
	float *ed3772e6f2; // 0x880(0x04)
	float *fc79fdf720; // 0x884(0x04)
	struct FLinearColor *09ae97c03d; // 0x888(0x10)
	float TranslucentShadowStartOffset; // 0x898(0x04)
	char *b6c7cfe243 : 1; // 0x89c(0x01)
	char *9363ff76c2 : 1; // 0x89c(0x01)
	char *1ed2b9f61d : 1; // 0x89c(0x01)
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x89c(0x01)
	char bBlockGI : 1; // 0x89c(0x01)
	char *c3df8e47d7 : 1; // 0x89c(0x01)
	char bUsedWithSkeletalMesh : 1; // 0x89c(0x01)
	char bUsedWithEditorCompositing : 1; // 0x89c(0x01)
	char bUsedWithParticleSprites : 1; // 0x89d(0x01)
	char bUsedWithBeamTrails : 1; // 0x89d(0x01)
	char bUsedWithMeshParticles : 1; // 0x89d(0x01)
	char bUsedWithNiagaraSprites : 1; // 0x89d(0x01)
	char bUsedWithNiagaraRibbons : 1; // 0x89d(0x01)
	char bUsedWithNiagaraMeshParticles : 1; // 0x89d(0x01)
	char bUsedWithStaticLighting : 1; // 0x89d(0x01)
	char bUsedWithMorphTargets : 1; // 0x89d(0x01)
	char bUsedWithSplineMeshes : 1; // 0x89e(0x01)
	char bUsedWithInstancedStaticMeshes : 1; // 0x89e(0x01)
	char bUsedWithInstancedSplineMeshes : 1; // 0x89e(0x01)
	char bUsedWithInstancedDeferredDecals : 1; // 0x89e(0x01)
	char bUsesDistortion : 1; // 0x89e(0x01)
	char bUsedWithClothing : 1; // 0x89e(0x01)
	char bUsedWithUI : 1; // 0x89e(0x01)
	char bAutomaticallySetUsageInEditor : 1; // 0x89e(0x01)
	char bFullyRough : 1; // 0x89f(0x01)
	char bUseFullPrecision : 1; // 0x89f(0x01)
	char bUseLightmapDirectionality : 1; // 0x89f(0x01)
	char bUseHQForwardReflections : 1; // 0x89f(0x01)
	char bUsePlanarForwardReflections : 1; // 0x89f(0x01)
	char bNormalCurvatureToRoughness : 1; // 0x89f(0x01)
	char pad_89F_6 : 2; // 0x89f(0x01)
	enum class *bde18ceaed D3D11TessellationMode; // 0x8a0(0x01)
	char pad_8A1[0x3]; // 0x8a1(0x03)
	char bEnableCrackFreeDisplacement : 1; // 0x8a4(0x01)
	char bEnableAdaptiveTessellation : 1; // 0x8a4(0x01)
	char pad_8A4_2 : 6; // 0x8a4(0x01)
	char pad_8A5[0x3]; // 0x8a5(0x03)
	float *c1f7ce3eec; // 0x8a8(0x04)
	char Wireframe : 1; // 0x8ac(0x01)
	char *b64d9369f4 : 1; // 0x8ac(0x01)
	char *04b54a3ffd : 1; // 0x8ac(0x01)
	char bApplyMaterialClipVolumes : 1; // 0x8ac(0x01)
	char pad_8AC_4 : 4; // 0x8ac(0x01)
	char pad_8AD[0x3]; // 0x8ad(0x03)
	struct F*b8e9ab889d MaterialClipVolumeTypes; // 0x8b0(0x04)
	enum class *71f1052399 MaterialClipVolumeImportance; // 0x8b4(0x01)
	char pad_8B5[0x3]; // 0x8b5(0x03)
	float MaterialClipVolumeFadeRange; // 0x8b8(0x04)
	char bMaterialClipVolumesUseDiscardForTranslucent : 1; // 0x8bc(0x01)
	char bIsMaterialClipVolumeWater : 1; // 0x8bc(0x01)
	char bUseMeshClipping : 1; // 0x8bc(0x01)
	char pad_8BC_3 : 5; // 0x8bc(0x01)
	char pad_8BD[0x3]; // 0x8bd(0x03)
	int32 *bba7e8fc50; // 0x8c0(0x04)
	int32 *115b380a47; // 0x8c4(0x04)
	int32 *e0547e79c6; // 0x8c8(0x04)
	int32 *3aec914426; // 0x8cc(0x04)
	struct TArray<struct UMaterialExpression*> Expressions; // 0x8d0(0x10)
	struct TArray<struct F*ee799b23b1> *efc07589dc; // 0x8e0(0x10)
	struct TArray<struct F*3dfa74d6b2> *fd6d2cfa6e; // 0x8f0(0x10)
	char *8f177f19ef : 1; // 0x900(0x01)
	char bIsMasked : 1; // 0x900(0x01)
	char *87af04c193 : 1; // 0x900(0x01)
	char *5e93ea2718 : 1; // 0x900(0x01)
	char *4b0e8fddfa : 1; // 0x900(0x01)
	char *3ba2dc2d43 : 1; // 0x900(0x01)
	char *7b83fc8a2b : 1; // 0x900(0x01)
	char *e61e16db8f : 1; // 0x900(0x01)
	char *86377d83bc : 1; // 0x901(0x01)
	char pad_901_1 : 7; // 0x901(0x01)
	char pad_902[0x2]; // 0x902(0x02)
	uint32 *d044a09482; // 0x904(0x04)
	enum class *e61ae830b3 BlendableLocation; // 0x908(0x01)
	char pad_909[0x3]; // 0x909(0x03)
	int32 BlendablePriority; // 0x90c(0x04)
	bool BlendableOutputAlpha; // 0x910(0x01)
	enum class *80cf585e22 *b11b76b520; // 0x911(0x01)
	char pad_912[0x2]; // 0x912(0x02)
	float RefractionDepthBias; // 0x914(0x04)
	struct FGuid *f498029bb1; // 0x918(0x10)
	char pad_928[0x148]; // 0x928(0x148)
	struct TArray<struct UTexture*> *e007a6b9ff; // 0xa70(0x10)
};

// Class Engine.MaterialInstanceDynamic
// Size: 0x230 (Inherited: 0x1e0)
struct UMaterialInstanceDynamic : UMaterialInstance {
	struct UPhysicalMaterial* PhysMaterial; // 0x70(0x08)
	struct UMaterialInterface* Parent; // 0x78(0x08)
	char *8301cd2f62 : 1; // 0x80(0x01)
	char *7f383fa02f : 1; // 0x80(0x01)
	char pad_1F0_2 : 1; // 0x1f0(0x01)
	char bOverrideSubsurfaceProfile : 1; // 0x80(0x01)
	struct TArray<struct F*e1e5e1e8bc> FontParameterValues; // 0x88(0x10)
	struct TArray<struct F*fffe4f3fbb> ScalarParameterValues; // 0x98(0x10)
	struct TArray<struct F*d64a96c518> TextureParameterValues; // 0xa8(0x10)
	struct TArray<struct F*8b44e564ca> VectorParameterValues; // 0xb8(0x10)
	bool bOverrideBaseProperties; // 0xc8(0x01)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0xcc(0x24)
};

// Class Engine.MaterialParameterCollection
// Size: 0x68 (Inherited: 0x28)
struct UMaterialParameterCollection : UObject {
	struct FGuid *f498029bb1; // 0x28(0x10)
	struct TArray<struct F*13143d2a53> *c8da72c377; // 0x38(0x10)
	struct TArray<struct F*fcd664c80d> *a7f4a9d12b; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
};

// Class Engine.*541523bba7
// Size: 0xe8 (Inherited: 0x28)
struct U*541523bba7 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UMaterialParameterCollection* Collection; // 0x30(0x08)
	struct UWorld* World; // 0x38(0x08)
	char pad_40[0xa8]; // 0x40(0xa8)
};

// Class Engine.*fbde80e5eb
// Size: 0x28 (Inherited: 0x28)
struct U*fbde80e5eb : UInterface {
};

// Class Engine.MorphTarget
// Size: 0x40 (Inherited: 0x28)
struct UMorphTarget : UObject {
	struct USkeletalMesh* *37e84b6c76; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
};

// Class Engine.NavArea_Default
// Size: 0x40 (Inherited: 0x40)
struct UNavArea_Default : UNavArea {
	float DefaultCost; // 0x28(0x04)
	float FixedAreaEnteringCost; // 0x2c(0x04)
	struct FColor DrawColor; // 0x30(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x34(0x04)
	char bSupportsAgent0 : 1; // 0x38(0x01)
	char bSupportsAgent1 : 1; // 0x38(0x01)
	char bSupportsAgent2 : 1; // 0x38(0x01)
	char bSupportsAgent3 : 1; // 0x38(0x01)
	char bSupportsAgent4 : 1; // 0x38(0x01)
	char bSupportsAgent5 : 1; // 0x38(0x01)
	char bSupportsAgent6 : 1; // 0x38(0x01)
	char bSupportsAgent7 : 1; // 0x38(0x01)
	char bSupportsAgent8 : 1; // 0x39(0x01)
	char bSupportsAgent9 : 1; // 0x39(0x01)
	char bSupportsAgent10 : 1; // 0x39(0x01)
	char bSupportsAgent11 : 1; // 0x39(0x01)
	char bSupportsAgent12 : 1; // 0x39(0x01)
	char bSupportsAgent13 : 1; // 0x39(0x01)
	char bSupportsAgent14 : 1; // 0x39(0x01)
	char bSupportsAgent15 : 1; // 0x39(0x01)
};

// Class Engine.NavArea_LowHeight
// Size: 0x40 (Inherited: 0x40)
struct UNavArea_LowHeight : UNavArea {
	float DefaultCost; // 0x28(0x04)
	float FixedAreaEnteringCost; // 0x2c(0x04)
	struct FColor DrawColor; // 0x30(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x34(0x04)
	char bSupportsAgent0 : 1; // 0x38(0x01)
	char bSupportsAgent1 : 1; // 0x38(0x01)
	char bSupportsAgent2 : 1; // 0x38(0x01)
	char bSupportsAgent3 : 1; // 0x38(0x01)
	char bSupportsAgent4 : 1; // 0x38(0x01)
	char bSupportsAgent5 : 1; // 0x38(0x01)
	char bSupportsAgent6 : 1; // 0x38(0x01)
	char bSupportsAgent7 : 1; // 0x38(0x01)
	char bSupportsAgent8 : 1; // 0x39(0x01)
	char bSupportsAgent9 : 1; // 0x39(0x01)
	char bSupportsAgent10 : 1; // 0x39(0x01)
	char bSupportsAgent11 : 1; // 0x39(0x01)
	char bSupportsAgent12 : 1; // 0x39(0x01)
	char bSupportsAgent13 : 1; // 0x39(0x01)
	char bSupportsAgent14 : 1; // 0x39(0x01)
	char bSupportsAgent15 : 1; // 0x39(0x01)
};

// Class Engine.NavArea_Null
// Size: 0x40 (Inherited: 0x40)
struct UNavArea_Null : UNavArea {
	float DefaultCost; // 0x28(0x04)
	float FixedAreaEnteringCost; // 0x2c(0x04)
	struct FColor DrawColor; // 0x30(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x34(0x04)
	char bSupportsAgent0 : 1; // 0x38(0x01)
	char bSupportsAgent1 : 1; // 0x38(0x01)
	char bSupportsAgent2 : 1; // 0x38(0x01)
	char bSupportsAgent3 : 1; // 0x38(0x01)
	char bSupportsAgent4 : 1; // 0x38(0x01)
	char bSupportsAgent5 : 1; // 0x38(0x01)
	char bSupportsAgent6 : 1; // 0x38(0x01)
	char bSupportsAgent7 : 1; // 0x38(0x01)
	char bSupportsAgent8 : 1; // 0x39(0x01)
	char bSupportsAgent9 : 1; // 0x39(0x01)
	char bSupportsAgent10 : 1; // 0x39(0x01)
	char bSupportsAgent11 : 1; // 0x39(0x01)
	char bSupportsAgent12 : 1; // 0x39(0x01)
	char bSupportsAgent13 : 1; // 0x39(0x01)
	char bSupportsAgent14 : 1; // 0x39(0x01)
	char bSupportsAgent15 : 1; // 0x39(0x01)
};

// Class Engine.NavArea_Obstacle
// Size: 0x40 (Inherited: 0x40)
struct UNavArea_Obstacle : UNavArea {
	float DefaultCost; // 0x28(0x04)
	float FixedAreaEnteringCost; // 0x2c(0x04)
	struct FColor DrawColor; // 0x30(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x34(0x04)
	char bSupportsAgent0 : 1; // 0x38(0x01)
	char bSupportsAgent1 : 1; // 0x38(0x01)
	char bSupportsAgent2 : 1; // 0x38(0x01)
	char bSupportsAgent3 : 1; // 0x38(0x01)
	char bSupportsAgent4 : 1; // 0x38(0x01)
	char bSupportsAgent5 : 1; // 0x38(0x01)
	char bSupportsAgent6 : 1; // 0x38(0x01)
	char bSupportsAgent7 : 1; // 0x38(0x01)
	char bSupportsAgent8 : 1; // 0x39(0x01)
	char bSupportsAgent9 : 1; // 0x39(0x01)
	char bSupportsAgent10 : 1; // 0x39(0x01)
	char bSupportsAgent11 : 1; // 0x39(0x01)
	char bSupportsAgent12 : 1; // 0x39(0x01)
	char bSupportsAgent13 : 1; // 0x39(0x01)
	char bSupportsAgent14 : 1; // 0x39(0x01)
	char bSupportsAgent15 : 1; // 0x39(0x01)
};

// Class Engine.NavAreaMeta
// Size: 0x40 (Inherited: 0x40)
struct UNavAreaMeta : UNavArea {
	float DefaultCost; // 0x28(0x04)
	float FixedAreaEnteringCost; // 0x2c(0x04)
	struct FColor DrawColor; // 0x30(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x34(0x04)
	char bSupportsAgent0 : 1; // 0x38(0x01)
	char bSupportsAgent1 : 1; // 0x38(0x01)
	char bSupportsAgent2 : 1; // 0x38(0x01)
	char bSupportsAgent3 : 1; // 0x38(0x01)
	char bSupportsAgent4 : 1; // 0x38(0x01)
	char bSupportsAgent5 : 1; // 0x38(0x01)
	char bSupportsAgent6 : 1; // 0x38(0x01)
	char bSupportsAgent7 : 1; // 0x38(0x01)
	char bSupportsAgent8 : 1; // 0x39(0x01)
	char bSupportsAgent9 : 1; // 0x39(0x01)
	char bSupportsAgent10 : 1; // 0x39(0x01)
	char bSupportsAgent11 : 1; // 0x39(0x01)
	char bSupportsAgent12 : 1; // 0x39(0x01)
	char bSupportsAgent13 : 1; // 0x39(0x01)
	char bSupportsAgent14 : 1; // 0x39(0x01)
	char bSupportsAgent15 : 1; // 0x39(0x01)
};

// Class Engine.NavAreaMeta_SwitchByAgent
// Size: 0xc0 (Inherited: 0x40)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UClass* *29ce06d179; // 0x40(0x08)
	struct UClass* *bd412f6bf1; // 0x48(0x08)
	struct UClass* *b5a668045b; // 0x50(0x08)
	struct UClass* *80cbe2a2b0; // 0x58(0x08)
	struct UClass* *761a7abe42; // 0x60(0x08)
	struct UClass* *814e885537; // 0x68(0x08)
	struct UClass* *46421c2054; // 0x70(0x08)
	struct UClass* *b6274570ab; // 0x78(0x08)
	struct UClass* *ba36e33033; // 0x80(0x08)
	struct UClass* *de936b648d; // 0x88(0x08)
	struct UClass* *de41208c7c; // 0x90(0x08)
	struct UClass* *a69a67b489; // 0x98(0x08)
	struct UClass* *7c7db32eab; // 0xa0(0x08)
	struct UClass* *cb7f9a2cd0; // 0xa8(0x08)
	struct UClass* *867ce2a761; // 0xb0(0x08)
	struct UClass* *55f691a9f2; // 0xb8(0x08)
};

// Class Engine.NavCollision
// Size: 0x110 (Inherited: 0x28)
struct UNavCollision : UObject {
	char pad_28[0x50]; // 0x28(0x50)
	struct TArray<struct F*c6cc752dac> *7a337e213f; // 0x78(0x10)
	struct TArray<struct F*5c4b944774> *a0856ed098; // 0x88(0x10)
	struct UClass* AreaClass; // 0x98(0x08)
	char bIsDynamicObstacle : 1; // 0xa0(0x01)
	char bGatherConvexGeometry : 1; // 0xa0(0x01)
	char pad_A0_2 : 6; // 0xa0(0x01)
	char pad_A1[0x6f]; // 0xa1(0x6f)
};

// Class Engine.*6d6f0bc575
// Size: 0x28 (Inherited: 0x28)
struct U*6d6f0bc575 : UInterface {
};

// Class Engine.*d83febdd27
// Size: 0x30 (Inherited: 0x28)
struct U*d83febdd27 : UObject {
	struct FName *91900c0c0a; // 0x28(0x08)
};

// Class Engine.*0934e781d0
// Size: 0x40 (Inherited: 0x30)
struct U*0934e781d0 : U*d83febdd27 {
	struct FName *91900c0c0a; // 0x28(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class Engine.NavigationPath
// Size: 0xc0 (Inherited: 0x28)
struct UNavigationPath : UObject {
	struct FMulticastDelegate PathUpdatedNotifier; // 0x28(0x10)
	struct TArray<struct FVector> PathPoints; // 0x38(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x48(0x01)
	char pad_49[0x77]; // 0x49(0x77)

	void GetPathLength(); // Function Engine.NavigationPath.GetPathLength // None // @ game+0x63ea600
	void *2d428a7310(); // Function Engine.NavigationPath.*2d428a7310 // None // @ game+0x90618c
	void *b59f06f159(); // Function Engine.NavigationPath.*b59f06f159 // None // @ game+0x63e77f8
	void IsValid(); // Function Engine.NavigationPath.IsValid // None // @ game+0x63ec7e4
	bool *3f49d0bda4(); // Function Engine.NavigationPath.*3f49d0bda4 // None // @ game+0x63e7618
	void *0fd557f300(); // Function Engine.NavigationPath.*0fd557f300 // None // @ game+0x63e9264
	void *8ee7f170f0(); // Function Engine.NavigationPath.*8ee7f170f0 // None // @ game+0x63ec53c
	void *bf1f893fb8(); // Function Engine.NavigationPath.*bf1f893fb8 // None // @ game+0x63ea370
};

// Class Engine.*410883bdaa
// Size: 0x28 (Inherited: 0x28)
struct U*410883bdaa : UInterface {
};

// Class Engine.*cc09a47377
// Size: 0x48 (Inherited: 0x48)
struct U*cc09a47377 : U*7faddb26b3 {
	struct TArray<struct F*614c6831c7> Areas; // 0x28(0x10)
	struct F*dd97a4099e IncludeFlags; // 0x38(0x04)
	struct F*dd97a4099e ExcludeFlags; // 0x3c(0x04)
};

// Class Engine.*f0b311c453
// Size: 0x50 (Inherited: 0x50)
struct U*f0b311c453 : U*d63c27cc87 {
	struct TArray<struct FNavigationLink> Links; // 0x28(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x38(0x10)
};

// Class Engine.*5fa8034eea
// Size: 0x28 (Inherited: 0x28)
struct U*5fa8034eea : UInterface {
};

// Class Engine.*14dc1b4005
// Size: 0x370 (Inherited: 0xe0)
struct U*14dc1b4005 : UPackageMap {
	char pad_E0[0x290]; // 0xe0(0x290)
};

// Class Engine.DemoNetConnection
// Size: 0x659b8 (Inherited: 0x65848)
struct UDemoNetConnection : UNetConnection {
	char pad_65848[0x20]; // 0x65848(0x20)
	struct FStringClassReference OverrideActorChannel; // 0x65868(0x10)
	char pad_65878[0x140]; // 0x65878(0x140)
};

// Class Engine.*03d8c2b98e
// Size: 0x28 (Inherited: 0x28)
struct U*03d8c2b98e : UInterface {
};

// Class Engine.*d7b54547d6
// Size: 0x98 (Inherited: 0x28)
struct U*d7b54547d6 : UObject {
	struct TMap<struct FName, struct F*0c71031120> NodeMapping; // 0x28(0x50)
	struct UBlueprint* *5970d93c9a; // 0x78(0x20)
};

// Class Engine.ObjectLibrary
// Size: 0x160 (Inherited: 0x28)
struct UObjectLibrary : UObject {
	struct UClass* *866761b53f; // 0x28(0x08)
	bool bHasBlueprintClasses; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct UObject*> Objects; // 0x38(0x10)
	struct TArray<struct UObject*> *bdaaf9434e; // 0x48(0x10)
	bool *0bab0d8d8c; // 0x58(0x01)
	bool *c4249b6cb2; // 0x59(0x01)
	char pad_5A[0x106]; // 0x5a(0x106)
};

// Class Engine.*d1847240ea
// Size: 0x38 (Inherited: 0x28)
struct U*d1847240ea : UObject {
	struct TArray<struct UObject*> *66b14009b5; // 0x28(0x10)
};

// Class Engine.*d387283508
// Size: 0x28 (Inherited: 0x28)
struct U*d387283508 : UObject {
};

// Class Engine.*064a1a15d1
// Size: 0x28 (Inherited: 0x28)
struct U*064a1a15d1 : UObject {
};

// Class Engine.*41ff50be2e
// Size: 0x28 (Inherited: 0x28)
struct U*41ff50be2e : UObject {
};

// Class Engine.ParticleEmitter
// Size: 0x180 (Inherited: 0x28)
struct UParticleEmitter : UObject {
	struct FName *e0182d3b3c; // 0x28(0x08)
	int32 *66cf9aca30; // 0x30(0x04)
	enum class *fdac681ce6 *e2b31efd7c; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct TArray<struct UParticleLODLevel*> *a01bd85945; // 0x38(0x10)
	char *f898ec614c : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32 *28dd93b140; // 0x4c(0x04)
	int32 *c41c5a9fe6; // 0x50(0x04)
	float MediumDetailSpawnRateScale; // 0x54(0x04)
	float *0dd6b2454f; // 0x58(0x04)
	enum class *1d65b135dd DetailMode; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	char *30a4bfc8a7 : 1; // 0x60(0x01)
	char *c2de77a827 : 1; // 0x60(0x01)
	char *7837e1b3ca : 1; // 0x60(0x01)
	char *ac073d2231 : 1; // 0x60(0x01)
	char pad_60_4 : 4; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	enum class EParticleSignificanceLevel *2bb1ef59f1; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float *e80b3617dc; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct U*5ca6d5a987* *5ca6d5a987; // 0x70(0x08)
	char pad_78[0x108]; // 0x78(0x108)
};

// Class Engine.*c4467c72af
// Size: 0x180 (Inherited: 0x180)
struct U*c4467c72af : UParticleEmitter {
	struct FName *e0182d3b3c; // 0x28(0x08)
	int32 *66cf9aca30; // 0x30(0x04)
	enum class *fdac681ce6 *e2b31efd7c; // 0x34(0x01)
	struct TArray<struct UParticleLODLevel*> *a01bd85945; // 0x38(0x10)
	char *f898ec614c : 1; // 0x48(0x01)
	int32 *28dd93b140; // 0x4c(0x04)
	int32 *c41c5a9fe6; // 0x50(0x04)
	float MediumDetailSpawnRateScale; // 0x54(0x04)
	float *0dd6b2454f; // 0x58(0x04)
	enum class *1d65b135dd DetailMode; // 0x5c(0x01)
	char *30a4bfc8a7 : 1; // 0x60(0x01)
	char *c2de77a827 : 1; // 0x60(0x01)
	char *7837e1b3ca : 1; // 0x60(0x01)
	char *ac073d2231 : 1; // 0x60(0x01)
	enum class EParticleSignificanceLevel *2bb1ef59f1; // 0x64(0x01)
	float *e80b3617dc; // 0x68(0x04)
	struct U*5ca6d5a987* *5ca6d5a987; // 0x70(0x08)
};

// Class Engine.ParticleLODLevel
// Size: 0xb8 (Inherited: 0x28)
struct UParticleLODLevel : UObject {
	int32 Level; // 0x28(0x04)
	char bEnabled : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct UParticleModuleRequired* *86c9bb9e83; // 0x30(0x08)
	struct TArray<struct UParticleModule*> Modules; // 0x38(0x10)
	struct UParticleModuleTypeDataBase* *496192c1f8; // 0x48(0x08)
	struct UParticleModuleSpawn* *c37cd4e0ac; // 0x50(0x08)
	struct UParticleModuleEventGenerator* *ff5f8067ba; // 0x58(0x08)
	struct TArray<struct U*78d18b0c9e*> *48ef7ca47f; // 0x60(0x10)
	struct TArray<struct UParticleModule*> *49e23a7ff1; // 0x70(0x10)
	struct TArray<struct UParticleModule*> *7a23f6842f; // 0x80(0x10)
	struct TArray<struct UParticleModuleOrbit*> *9fb7b67318; // 0x90(0x10)
	struct TArray<struct UParticleModuleEventReceiverBase*> *6ae280a902; // 0xa0(0x10)
	char *f898ec614c : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32 *28dd93b140; // 0xb4(0x04)
};

// Class Engine.ParticleModule
// Size: 0x30 (Inherited: 0x28)
struct UParticleModule : UObject {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	char pad_29_4 : 4; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	bool *3fc88a1a97; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// Class Engine.*2dfdd21be9
// Size: 0x38 (Inherited: 0x30)
struct U*2dfdd21be9 : UParticleModule {
	char *284da7a4e3 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleAcceleration
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleAcceleration : U*2dfdd21be9 {
	struct FRawDistributionVector Acceleration; // 0x38(0x50)
	char *8bbed36aa3 : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*5307705f68
// Size: 0x48 (Inherited: 0x38)
struct U*5307705f68 : U*2dfdd21be9 {
	struct FVector Acceleration; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleAccelerationDrag
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleAccelerationDrag : U*2dfdd21be9 {
	struct U*137fe4d756* DragCoefficient; // 0x38(0x08)
	struct F*fc532221d4 *8942563c93; // 0x40(0x38)
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// Size: 0x78 (Inherited: 0x38)
struct UParticleModuleAccelerationDragScaleOverLife : U*2dfdd21be9 {
	struct U*137fe4d756* DragScale; // 0x38(0x08)
	struct F*fc532221d4 *28eaeb28bf; // 0x40(0x38)
};

// Class Engine.ParticleModuleAccelerationOverLifetime
// Size: 0x88 (Inherited: 0x38)
struct UParticleModuleAccelerationOverLifetime : U*2dfdd21be9 {
	struct FRawDistributionVector *c21151d15e; // 0x38(0x50)
};

// Class Engine.*d26889f35f
// Size: 0x30 (Inherited: 0x30)
struct U*d26889f35f : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.ParticleModuleAttractorLine
// Size: 0xb8 (Inherited: 0x30)
struct UParticleModuleAttractorLine : U*d26889f35f {
	struct FVector *e02d64df51; // 0x30(0x0c)
	struct FVector *ab946f7dd7; // 0x3c(0x0c)
	struct F*fc532221d4 Range; // 0x48(0x38)
	struct F*fc532221d4 Strength; // 0x80(0x38)
};

// Class Engine.ParticleModuleAttractorParticle
// Size: 0xc0 (Inherited: 0x30)
struct UParticleModuleAttractorParticle : U*d26889f35f {
	struct FName *e0182d3b3c; // 0x30(0x08)
	struct F*fc532221d4 Range; // 0x38(0x38)
	char *adf1421665 : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct F*fc532221d4 Strength; // 0x78(0x38)
	char *ac1d0e089d : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	enum class *f9a745e81c *744176f2df; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	char *a5e7e5ff5a : 1; // 0xb8(0x01)
	char *8b6ad6aa19 : 1; // 0xb8(0x01)
	char pad_B8_2 : 6; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 *c0ee42aa27; // 0xbc(0x04)
};

// Class Engine.ParticleModuleAttractorPoint
// Size: 0xf8 (Inherited: 0x30)
struct UParticleModuleAttractorPoint : U*d26889f35f {
	struct FRawDistributionVector Position; // 0x30(0x50)
	struct F*fc532221d4 Range; // 0x80(0x38)
	struct F*fc532221d4 Strength; // 0xb8(0x38)
	char *137617c5a3 : 1; // 0xf0(0x01)
	char *ac1d0e089d : 1; // 0xf0(0x01)
	char *9fc62253ea : 1; // 0xf0(0x01)
	char *4578090061 : 1; // 0xf0(0x01)
	char *bdb70d765d : 1; // 0xf0(0x01)
	char *1e6a554923 : 1; // 0xf0(0x01)
	char *b93059d8cb : 1; // 0xf0(0x01)
	char *4531ca41d7 : 1; // 0xf0(0x01)
	char *c70c82e78c : 1; // 0xf1(0x01)
	char *7a9747a8ac : 1; // 0xf1(0x01)
	char pad_F1_2 : 6; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
};

// Class Engine.ParticleModuleAttractorPointGravity
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleAttractorPointGravity : U*d26889f35f {
	struct FVector Position; // 0x30(0x0c)
	float Radius; // 0x3c(0x04)
	struct U*137fe4d756* Strength; // 0x40(0x08)
	struct F*fc532221d4 *a5336815d4; // 0x48(0x38)
};

// Class Engine.ParticleModuleBeamBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleBeamBase : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.*c992bec286
// Size: 0x120 (Inherited: 0x30)
struct U*c992bec286 : UParticleModuleBeamBase {
	enum class *dee7e4bc1f *ebb8483ca6; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct F*fab7a05abf *ae9a3a405d; // 0x34(0x04)
	struct FRawDistributionVector Position; // 0x38(0x50)
	struct F*fab7a05abf *7c1b485ec6; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FRawDistributionVector Tangent; // 0x90(0x50)
	char *80e6e2ffbd : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct F*fab7a05abf *c44ab15495; // 0xe4(0x04)
	struct F*fc532221d4 Strength; // 0xe8(0x38)
};

// Class Engine.*19f3b8195d
// Size: 0x1b8 (Inherited: 0x30)
struct U*19f3b8195d : UParticleModuleBeamBase {
	char *4ba902573a : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 Frequency; // 0x34(0x04)
	int32 *53b2d78012; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FRawDistributionVector *ed1b0d3e41; // 0x40(0x50)
	struct F*fc532221d4 *a4aa40d628; // 0x90(0x38)
	char *aaa52a25ca : 1; // 0xc8(0x01)
	char pad_C8_1 : 7; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FRawDistributionVector *6b1a03e949; // 0xd0(0x50)
	char *81ada2f873 : 1; // 0x120(0x01)
	char pad_120_1 : 7; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float *caa0762b0a; // 0x124(0x04)
	char *09a456ac0b : 1; // 0x128(0x01)
	char *c14cf9599b : 1; // 0x128(0x01)
	char pad_128_2 : 6; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float *80a055c1a3; // 0x12c(0x04)
	float *c9d10b581a; // 0x130(0x04)
	char *80144aebfc : 1; // 0x134(0x01)
	char pad_134_1 : 7; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	struct F*fc532221d4 *aa378308f3; // 0x138(0x38)
	int32 NoiseTessellation; // 0x170(0x04)
	char *46dc60bad4 : 1; // 0x174(0x01)
	char pad_174_1 : 7; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	float *7ee857a11f; // 0x178(0x04)
	char *83b53e8a65 : 1; // 0x17c(0x01)
	char pad_17C_1 : 7; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct F*fc532221d4 NoiseScale; // 0x180(0x38)
};

// Class Engine.*538e255463
// Size: 0x138 (Inherited: 0x30)
struct U*538e255463 : UParticleModuleBeamBase {
	enum class *d31ea083ff *b48e706969; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName SourceName; // 0x38(0x08)
	char *5a6c64d2ac : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FRawDistributionVector Source; // 0x48(0x50)
	char *cf087fe060 : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	enum class *5dccb754d3 *95a9385594; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct FRawDistributionVector *e85db8d8cc; // 0xa0(0x50)
	char *0313b043b8 : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct F*fc532221d4 *f94672ee56; // 0xf8(0x38)
	char *7b013eb13c : 1; // 0x130(0x01)
	char pad_130_1 : 7; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
};

// Class Engine.*d6a600410b
// Size: 0x138 (Inherited: 0x30)
struct U*d6a600410b : UParticleModuleBeamBase {
	enum class *d31ea083ff *65c2c72a00; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName TargetName; // 0x38(0x08)
	struct FRawDistributionVector Target; // 0x40(0x50)
	char *150d6b0fa7 : 1; // 0x90(0x01)
	char *1e5303ea30 : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	enum class *5dccb754d3 *fbae626f19; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FRawDistributionVector *1e99e11ba5; // 0x98(0x50)
	char *25d2a87504 : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct F*fc532221d4 *ce798c9095; // 0xf0(0x38)
	char *f9fcd52a27 : 1; // 0x128(0x01)
	char pad_128_1 : 7; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float *51d23eb2e1; // 0x12c(0x04)
	char pad_130[0x8]; // 0x130(0x08)
};

// Class Engine.ParticleModuleCameraBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleCameraBase : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.*97093acad1
// Size: 0x70 (Inherited: 0x30)
struct U*97093acad1 : UParticleModuleCameraBase {
	struct F*fc532221d4 *3e06b195ab; // 0x30(0x38)
	char *77ab155c53 : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class *8f2815d394 *f9137e16d7; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// Class Engine.*8583321e85
// Size: 0x30 (Inherited: 0x30)
struct U*8583321e85 : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.ParticleModuleCollision
// Size: 0x1b8 (Inherited: 0x30)
struct UParticleModuleCollision : U*8583321e85 {
	struct FRawDistributionVector *21ddb3a806; // 0x30(0x50)
	struct FRawDistributionVector *864eeca1e1; // 0x80(0x50)
	struct F*fc532221d4 *d89a1b7347; // 0xd0(0x38)
	enum class *b19f33b08c *28bf48647c; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<enum class EObjectTypeQuery> *d39db20c2d; // 0x110(0x10)
	char pad_120[0x8]; // 0x120(0x08)
	char *c3320c4f1b : 1; // 0x128(0x01)
	char *e01106a4c7 : 1; // 0x128(0x01)
	char pad_128_2 : 6; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct F*fc532221d4 ParticleMass; // 0x130(0x38)
	float *0b6a8d215d; // 0x168(0x04)
	char *0c4d5e883c : 1; // 0x16c(0x01)
	char *a0ff13c71f : 1; // 0x16c(0x01)
	char pad_16C_2 : 6; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	float *0f8df353b9; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct F*fc532221d4 *0eabdddd58; // 0x178(0x38)
	char *0cb44e58f9 : 1; // 0x1b0(0x01)
	char *d1d03b8e39 : 1; // 0x1b0(0x01)
	char *4194bdef09 : 1; // 0x1b0(0x01)
	char pad_1B0_3 : 5; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	float *46ebcdb4bb; // 0x1b4(0x04)
};

// Class Engine.ParticleModuleCollisionGPU
// Size: 0xb8 (Inherited: 0x30)
struct UParticleModuleCollisionGPU : U*8583321e85 {
	struct F*fc532221d4 *35cca64f48; // 0x30(0x38)
	struct F*fc532221d4 ResilienceScaleOverLife; // 0x68(0x38)
	float Friction; // 0xa0(0x04)
	float *e900b741c6; // 0xa4(0x04)
	float *f9ca710dbe; // 0xa8(0x04)
	float RadiusScale; // 0xac(0x04)
	float *f7ff021d7c; // 0xb0(0x04)
	enum class EParticleCollisionResponse Response; // 0xb4(0x01)
	enum class EParticleCollisionMode *bb3231f9ad; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
};

// Class Engine.*d911908ff9
// Size: 0x30 (Inherited: 0x30)
struct U*d911908ff9 : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.*c3f7955ae9
// Size: 0xc0 (Inherited: 0x30)
struct U*c3f7955ae9 : U*d911908ff9 {
	struct FRawDistributionVector *393dc09546; // 0x30(0x50)
	struct F*fc532221d4 *c089dc917c; // 0x80(0x38)
	char bClampAlpha : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Engine.*0cc4454eac
// Size: 0xe0 (Inherited: 0xc0)
struct U*0cc4454eac : U*c3f7955ae9 {
	struct F*0889995bc8 *85be4a61ef; // 0xc0(0x20)
};

// Class Engine.*76c8527ce5
// Size: 0xc0 (Inherited: 0x30)
struct U*76c8527ce5 : U*d911908ff9 {
	struct FRawDistributionVector *368c361e9c; // 0x30(0x50)
	struct F*fc532221d4 *ec8164ddb7; // 0x80(0x38)
	char bClampAlpha : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Engine.*ce25e0e472
// Size: 0xc0 (Inherited: 0x30)
struct U*ce25e0e472 : U*d911908ff9 {
	struct FRawDistributionVector *2149abf3bf; // 0x30(0x50)
	struct F*fc532221d4 *14c7c77307; // 0x80(0x38)
	char *6223e846a9 : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Engine.*c72ca72990
// Size: 0x30 (Inherited: 0x30)
struct U*c72ca72990 : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.ParticleModuleEventGenerator
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleEventGenerator : U*c72ca72990 {
	struct TArray<struct F*881fc87473> Events; // 0x30(0x10)
};

// Class Engine.ParticleModuleEventReceiverBase
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleEventReceiverBase : U*c72ca72990 {
	enum class EParticleEventType *b42fd0a74c; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName EventName; // 0x38(0x08)
};

// Class Engine.*391388bfe8
// Size: 0x48 (Inherited: 0x40)
struct U*391388bfe8 : UParticleModuleEventReceiverBase {
	char *8f91b89b06 : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Engine.*0d9c86f62f
// Size: 0xe8 (Inherited: 0x40)
struct U*0d9c86f62f : UParticleModuleEventReceiverBase {
	struct F*fc532221d4 SpawnCount; // 0x40(0x38)
	char *407bc0a71c : 1; // 0x78(0x01)
	char *f20ab17d37 : 1; // 0x78(0x01)
	char *ffd1dce33c : 1; // 0x78(0x01)
	char pad_78_3 : 5; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FRawDistributionVector *3697f42974; // 0x80(0x50)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0xd0(0x10)
	char *9c17886dda : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
};

// Class Engine.ParticleModuleKillBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleKillBase : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.*92485a0dbe
// Size: 0xd8 (Inherited: 0x30)
struct U*92485a0dbe : UParticleModuleKillBase {
	struct FRawDistributionVector *ef2eb77ff9; // 0x30(0x50)
	struct FRawDistributionVector *0c18293e45; // 0x80(0x50)
	char *1f122488e0 : 1; // 0xd0(0x01)
	char *51fcb4abc4 : 1; // 0xd0(0x01)
	char *0102a3b62b : 1; // 0xd0(0x01)
	char pad_D0_3 : 5; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// Class Engine.*40ea20d82c
// Size: 0x70 (Inherited: 0x30)
struct U*40ea20d82c : UParticleModuleKillBase {
	struct F*fc532221d4 Height; // 0x30(0x38)
	char *1f122488e0 : 1; // 0x68(0x01)
	char *61148324e0 : 1; // 0x68(0x01)
	char *d8f6a13d19 : 1; // 0x68(0x01)
	char pad_68_3 : 5; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*9f23cb87f6
// Size: 0x30 (Inherited: 0x30)
struct U*9f23cb87f6 : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.*380ee4e72b
// Size: 0x68 (Inherited: 0x30)
struct U*380ee4e72b : U*9f23cb87f6 {
	struct F*fc532221d4 LifeTime; // 0x30(0x38)
};

// Class Engine.*9b64f8e010
// Size: 0x88 (Inherited: 0x68)
struct U*9b64f8e010 : U*380ee4e72b {
	struct F*0889995bc8 *85be4a61ef; // 0x68(0x20)
};

// Class Engine.ParticleModuleLightBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleLightBase : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.*712415000d
// Size: 0x148 (Inherited: 0x30)
struct U*712415000d : UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; // 0x30(0x01)
	bool *5bd5352062; // 0x31(0x01)
	bool *762f6e5c39; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	float *371316e0ec; // 0x34(0x04)
	struct FRawDistributionVector *2149abf3bf; // 0x38(0x50)
	struct F*fc532221d4 *2dee75a2e0; // 0x88(0x38)
	struct F*fc532221d4 RadiusScale; // 0xc0(0x38)
	struct F*fc532221d4 *611124579e; // 0xf8(0x38)
	struct FLightingChannels LightingChannels; // 0x130(0x03)
	char pad_133[0x1]; // 0x133(0x01)
	float VolumetricScatteringIntensity; // 0x134(0x04)
	bool *4c08e7690c; // 0x138(0x01)
	bool *44a1c62718; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct U*b63877ce42* IESTexture; // 0x140(0x08)
};

// Class Engine.*367e8bef7d
// Size: 0x168 (Inherited: 0x148)
struct U*367e8bef7d : U*712415000d {
	struct F*0889995bc8 *85be4a61ef; // 0x148(0x20)
};

// Class Engine.*465a2bcfcd
// Size: 0x30 (Inherited: 0x30)
struct U*465a2bcfcd : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.*ccdeee53dd
// Size: 0x88 (Inherited: 0x30)
struct U*ccdeee53dd : U*465a2bcfcd {
	struct FRawDistributionVector StartLocation; // 0x30(0x50)
	float *1c5c5aec5b; // 0x80(0x04)
	float *1361bfd053; // 0x84(0x04)
};

// Class Engine.*94d76d7322
// Size: 0xa8 (Inherited: 0x88)
struct U*94d76d7322 : U*ccdeee53dd {
	struct F*0889995bc8 *85be4a61ef; // 0x88(0x20)
};

// Class Engine.*5e8150ad59
// Size: 0x88 (Inherited: 0x88)
struct U*5e8150ad59 : U*ccdeee53dd {
	struct FRawDistributionVector StartLocation; // 0x30(0x50)
	float *1c5c5aec5b; // 0x80(0x04)
	float *1361bfd053; // 0x84(0x04)
};

// Class Engine.*03071dcaf9
// Size: 0xa8 (Inherited: 0x88)
struct U*03071dcaf9 : U*5e8150ad59 {
	struct F*0889995bc8 *85be4a61ef; // 0x88(0x20)
};

// Class Engine.*e91c2b1a13
// Size: 0x70 (Inherited: 0x30)
struct U*e91c2b1a13 : U*465a2bcfcd {
	enum class *4c02ea1264 SourceType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector *24458bb2b1; // 0x34(0x0c)
	struct TArray<struct F*e0b8298693> *3be98f9117; // 0x40(0x10)
	enum class *a270a99a65 *744176f2df; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	char *88d021f1ad : 1; // 0x54(0x01)
	char *577c57b7b3 : 1; // 0x54(0x01)
	char *29e42e4f6e : 1; // 0x54(0x01)
	char pad_54_3 : 5; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float *3697f42974; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FName *6e19341414; // 0x60(0x08)
	int32 *2f88a16f8c; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class Engine.ParticleModuleLocationDirect
// Size: 0x170 (Inherited: 0x30)
struct UParticleModuleLocationDirect : U*465a2bcfcd {
	struct FRawDistributionVector Location; // 0x30(0x50)
	struct FRawDistributionVector *60056591c2; // 0x80(0x50)
	struct FRawDistributionVector ScaleFactor; // 0xd0(0x50)
	struct FRawDistributionVector Direction; // 0x120(0x50)
};

// Class Engine.*123025c8d8
// Size: 0x50 (Inherited: 0x30)
struct U*123025c8d8 : U*465a2bcfcd {
	struct FName *e0182d3b3c; // 0x30(0x08)
	enum class *39e5765864 *744176f2df; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	char *3c285a6140 : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float *fd4d1beb23; // 0x40(0x04)
	char *beaf03370e : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *68d371ba44; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.ParticleModuleLocationEmitterDirect
// Size: 0x38 (Inherited: 0x30)
struct UParticleModuleLocationEmitterDirect : U*465a2bcfcd {
	struct FName *e0182d3b3c; // 0x30(0x08)
};

// Class Engine.ParticleModuleLocationPrimitiveBase
// Size: 0xc0 (Inherited: 0x30)
struct UParticleModuleLocationPrimitiveBase : U*465a2bcfcd {
	char *bdb70d765d : 1; // 0x30(0x01)
	char *1e6a554923 : 1; // 0x30(0x01)
	char *b93059d8cb : 1; // 0x30(0x01)
	char *4531ca41d7 : 1; // 0x30(0x01)
	char *c70c82e78c : 1; // 0x30(0x01)
	char *7a9747a8ac : 1; // 0x30(0x01)
	char *c479df674e : 1; // 0x30(0x01)
	char Velocity : 1; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct F*fc532221d4 *22117c41b1; // 0x38(0x38)
	struct FRawDistributionVector StartLocation; // 0x70(0x50)
};

// Class Engine.*8feaac8489
// Size: 0x140 (Inherited: 0xc0)
struct U*8feaac8489 : UParticleModuleLocationPrimitiveBase {
	char *3465e82c38 : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct F*fc532221d4 *5fae28bd37; // 0xc8(0x38)
	struct F*fc532221d4 *0d3851be87; // 0x100(0x38)
	enum class *8b567e68d5 *5e632ab129; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
};

// Class Engine.*f4239a4d58
// Size: 0x160 (Inherited: 0x140)
struct U*f4239a4d58 : U*8feaac8489 {
	struct F*0889995bc8 *85be4a61ef; // 0x140(0x20)
};

// Class Engine.*5698645447
// Size: 0xf8 (Inherited: 0xc0)
struct U*5698645447 : UParticleModuleLocationPrimitiveBase {
	struct F*fc532221d4 *5fae28bd37; // 0xc0(0x38)
};

// Class Engine.*c1703b72a6
// Size: 0x118 (Inherited: 0xf8)
struct U*c1703b72a6 : U*5698645447 {
	struct F*0889995bc8 *85be4a61ef; // 0xf8(0x20)
};

// Class Engine.*7f6e50d5fa
// Size: 0x128 (Inherited: 0x30)
struct U*7f6e50d5fa : U*465a2bcfcd {
	struct FRawDistributionVector StartOffset; // 0x30(0x50)
	struct F*fc532221d4 Height; // 0x80(0x38)
	struct F*fc532221d4 Angle; // 0xb8(0x38)
	struct F*fc532221d4 Thickness; // 0xf0(0x38)
};

// Class Engine.*554a307c2a
// Size: 0x90 (Inherited: 0x30)
struct U*554a307c2a : U*465a2bcfcd {
	enum class *5715644d59 SourceType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector *24458bb2b1; // 0x34(0x0c)
	char *88d021f1ad : 1; // 0x40(0x01)
	char *577c57b7b3 : 1; // 0x40(0x01)
	char *29e42e4f6e : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float *3697f42974; // 0x44(0x04)
	struct FName *6e19341414; // 0x48(0x08)
	struct TArray<struct FName> *b83d9c9cb5; // 0x50(0x10)
	char *9fd7496115 : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FVector *0bddc9ec5b; // 0x64(0x0c)
	float NormalCheckToleranceDegrees; // 0x70(0x04)
	float *b3ca1cd604; // 0x74(0x04)
	struct TArray<int32> *35bced1ccb; // 0x78(0x10)
	char *64ed8db495 : 1; // 0x88(0x01)
	char *f5b8631ac0 : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	uint32 *1f4d8c49ef; // 0x8c(0x04)
};

// Class Engine.*98cc2aac34
// Size: 0x38 (Inherited: 0x30)
struct U*98cc2aac34 : U*465a2bcfcd {
	struct FVector2D *4bbe52a103; // 0x30(0x08)
};

// Class Engine.ParticleModuleSourceMovement
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleSourceMovement : U*465a2bcfcd {
	struct FRawDistributionVector *a635dc5696; // 0x30(0x50)
};

// Class Engine.*93023b9c9a
// Size: 0x30 (Inherited: 0x30)
struct U*93023b9c9a : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.ParticleModuleMeshMaterial
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleMeshMaterial : U*93023b9c9a {
	struct TArray<struct UMaterialInterface*> *3223471d3b; // 0x30(0x10)
};

// Class Engine.*ed91484cfa
// Size: 0x38 (Inherited: 0x30)
struct U*ed91484cfa : UParticleModule {
	char *8dd4e477e9 : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleOrbit
// Size: 0x148 (Inherited: 0x38)
struct UParticleModuleOrbit : U*ed91484cfa {
	enum class *908050ad81 *f2b2b8da64; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FRawDistributionVector OffsetAmount; // 0x40(0x50)
	struct F*c3a6c65e4e *c2bb0220a6; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FRawDistributionVector RotationAmount; // 0x98(0x50)
	struct F*c3a6c65e4e *cbda817560; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FRawDistributionVector RotationRateAmount; // 0xf0(0x50)
	struct F*c3a6c65e4e *c8bbbbe28c; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
};

// Class Engine.*0d3e6291da
// Size: 0x30 (Inherited: 0x30)
struct U*0d3e6291da : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.*1177a6e90e
// Size: 0x38 (Inherited: 0x30)
struct U*1177a6e90e : U*0d3e6291da {
	enum class *5c5c218809 LockAxisFlags; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleParameterBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleParameterBase : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.*3ba35fdda6
// Size: 0x48 (Inherited: 0x30)
struct U*3ba35fdda6 : UParticleModuleParameterBase {
	struct TArray<struct F*da76af86ba> *e9a5695241; // 0x30(0x10)
	int32 *4a5bcb5561; // 0x40(0x04)
	char *3c8a38c53a : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// Class Engine.*808b495e96
// Size: 0x68 (Inherited: 0x48)
struct U*808b495e96 : U*3ba35fdda6 {
	struct F*0889995bc8 *85be4a61ef; // 0x48(0x20)
};

// Class Engine.SubUVAnimation
// Size: 0x60 (Inherited: 0x28)
struct USubUVAnimation : UObject {
	struct UTexture2D* *dbe19c3222; // 0x28(0x08)
	int32 *a05a7fa61b; // 0x30(0x04)
	int32 *70071eabe8; // 0x34(0x04)
	enum class *2b2beae94a *daea689255; // 0x38(0x01)
	enum class *664714f462 *d665611e8b; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float *19e728fde4; // 0x3c(0x04)
	char pad_40[0x20]; // 0x40(0x20)
};

// Class Engine.ParticleModuleRequired
// Size: 0x180 (Inherited: 0x30)
struct UParticleModuleRequired : UParticleModule {
	struct UMaterialInterface* Material; // 0x30(0x08)
	struct UMaterialInterface* *3b33ce54db; // 0x38(0x08)
	struct FVector4 *d30d54539e; // 0x40(0x10)
	struct FVector *c178d00895; // 0x50(0x0c)
	struct FRotator *05c879980f; // 0x5c(0x0c)
	enum class *43c2dc77ea *bbce4d12e2; // 0x68(0x01)
	enum class *1a708bdd1c SortMode; // 0x69(0x01)
	enum class *73b0841750 *e864325772; // 0x6a(0x01)
	char pad_6B[0x1]; // 0x6b(0x01)
	float *00ed6ce147; // 0x6c(0x04)
	float *f76cf32bac; // 0x70(0x04)
	float *5f8b6dad3c; // 0x74(0x04)
	char *c0140b2be8 : 1; // 0x78(0x01)
	char *6225bd0dc4 : 1; // 0x78(0x01)
	char *2e30a17283 : 1; // 0x78(0x01)
	char *3d34c1799f : 1; // 0x78(0x01)
	char *bfbaa256eb : 1; // 0x78(0x01)
	char *490ffcaeba : 1; // 0x78(0x01)
	char *b0125600c0 : 1; // 0x78(0x01)
	char *50686dc526 : 1; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float *979743a478; // 0x7c(0x04)
	float *4f19bad287; // 0x80(0x04)
	int32 *4baac6a938; // 0x84(0x04)
	struct F*fc532221d4 SpawnRate; // 0x88(0x38)
	struct TArray<struct F*ac69912133> *f94745bb13; // 0xc0(0x10)
	float *ada4982907; // 0xd0(0x04)
	float *c21b7b7577; // 0xd4(0x04)
	char *28ea99aaa8 : 1; // 0xd8(0x01)
	char *63054e9aba : 1; // 0xd8(0x01)
	char pad_D8_2 : 6; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	enum class EParticleSubUVInterpMethod InterpolationMethod; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	int32 *a05a7fa61b; // 0xe0(0x04)
	int32 *70071eabe8; // 0xe4(0x04)
	char *c823a30e27 : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float *9d0a051c6b; // 0xec(0x04)
	int32 *3593ab3c94; // 0xf0(0x04)
	char *4eeba502b1 : 1; // 0xf4(0x01)
	char pad_F4_1 : 7; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct FVector MacroUVPosition; // 0xf8(0x0c)
	float MacroUVRadius; // 0x104(0x04)
	char *84931ae83c : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	int32 MaxDrawCount; // 0x10c(0x04)
	enum class EParticleUVFlipMode *8319f2871e; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct UTexture2D* *2521cf46ac; // 0x118(0x08)
	enum class *2b2beae94a *daea689255; // 0x120(0x01)
	enum class *664714f462 *d665611e8b; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	float *19e728fde4; // 0x124(0x04)
	enum class *e739d46098 *3bc5eeb5dc; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	struct FVector *4deeea7cfb; // 0x12c(0x0c)
	struct FVector *b0b993b74c; // 0x138(0x0c)
	char *0b13797135 : 1; // 0x144(0x01)
	char pad_144_1 : 7; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	struct TArray<struct FName> *6dd5386571; // 0x148(0x10)
	char pad_158[0x28]; // 0x158(0x28)
};

// Class Engine.*bcf8ccd975
// Size: 0x30 (Inherited: 0x30)
struct U*bcf8ccd975 : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.ParticleModuleMeshRotation
// Size: 0x88 (Inherited: 0x30)
struct UParticleModuleMeshRotation : U*bcf8ccd975 {
	struct FRawDistributionVector *86386793c9; // 0x30(0x50)
	char *db9dda97c5 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleMeshRotation_Seeded
// Size: 0xa8 (Inherited: 0x88)
struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	struct F*0889995bc8 *85be4a61ef; // 0x88(0x20)
};

// Class Engine.*b1e2a9ab8c
// Size: 0x68 (Inherited: 0x30)
struct U*b1e2a9ab8c : U*bcf8ccd975 {
	struct F*fc532221d4 *86386793c9; // 0x30(0x38)
};

// Class Engine.*2e54e43d61
// Size: 0x88 (Inherited: 0x68)
struct U*2e54e43d61 : U*b1e2a9ab8c {
	struct F*0889995bc8 *85be4a61ef; // 0x68(0x20)
};

// Class Engine.ParticleModuleRotationOverLifetime
// Size: 0x70 (Inherited: 0x30)
struct UParticleModuleRotationOverLifetime : U*bcf8ccd975 {
	struct F*fc532221d4 *d558923017; // 0x30(0x38)
	char Scale : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Engine.*b2b7e87763
// Size: 0x30 (Inherited: 0x30)
struct U*b2b7e87763 : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.ParticleModuleMeshRotationRate
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleMeshRotationRate : U*b2b7e87763 {
	struct FRawDistributionVector *78ec218f4d; // 0x30(0x50)
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
// Size: 0xa0 (Inherited: 0x80)
struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	struct F*0889995bc8 *85be4a61ef; // 0x80(0x20)
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// Size: 0x80 (Inherited: 0x30)
struct UParticleModuleMeshRotationRateMultiplyLife : U*b2b7e87763 {
	struct FRawDistributionVector LifeMultiplier; // 0x30(0x50)
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
// Size: 0x88 (Inherited: 0x30)
struct UParticleModuleMeshRotationRateOverLife : U*b2b7e87763 {
	struct FRawDistributionVector *4e9a6746b5; // 0x30(0x50)
	char *9ba1291671 : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.*32a6f5b7de
// Size: 0x68 (Inherited: 0x30)
struct U*32a6f5b7de : U*b2b7e87763 {
	struct F*fc532221d4 *78ec218f4d; // 0x30(0x38)
};

// Class Engine.*82e2300d39
// Size: 0x88 (Inherited: 0x68)
struct U*82e2300d39 : U*32a6f5b7de {
	struct F*0889995bc8 *85be4a61ef; // 0x68(0x20)
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
// Size: 0x68 (Inherited: 0x30)
struct UParticleModuleRotationRateMultiplyLife : U*b2b7e87763 {
	struct F*fc532221d4 LifeMultiplier; // 0x30(0x38)
};

// Class Engine.*cc00fbaa13
// Size: 0x30 (Inherited: 0x30)
struct U*cc00fbaa13 : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.*a21212ca29
// Size: 0x80 (Inherited: 0x30)
struct U*a21212ca29 : U*cc00fbaa13 {
	struct FRawDistributionVector *b84ebd7be1; // 0x30(0x50)
};

// Class Engine.*7850921717
// Size: 0xa0 (Inherited: 0x80)
struct U*7850921717 : U*a21212ca29 {
	struct F*0889995bc8 *85be4a61ef; // 0x80(0x20)
};

// Class Engine.ParticleModuleSizeMultiplyLife
// Size: 0x88 (Inherited: 0x30)
struct UParticleModuleSizeMultiplyLife : U*cc00fbaa13 {
	struct FRawDistributionVector LifeMultiplier; // 0x30(0x50)
	char *074e67893e : 1; // 0x80(0x01)
	char *64f8f340ee : 1; // 0x80(0x01)
	char *665ce26d6e : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleSizeScale
// Size: 0x88 (Inherited: 0x30)
struct UParticleModuleSizeScale : U*cc00fbaa13 {
	struct FRawDistributionVector SizeScale; // 0x30(0x50)
	char *8848257a56 : 1; // 0x80(0x01)
	char *15b29e7f41 : 1; // 0x80(0x01)
	char *352bf07817 : 1; // 0x80(0x01)
	char pad_80_3 : 5; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// Class Engine.ParticleModuleSizeScaleBySpeed
// Size: 0x40 (Inherited: 0x30)
struct UParticleModuleSizeScaleBySpeed : U*cc00fbaa13 {
	struct FVector2D *8933a11582; // 0x30(0x08)
	struct FVector2D *abcd5c2c56; // 0x38(0x08)
};

// Class Engine.*78d18b0c9e
// Size: 0x38 (Inherited: 0x30)
struct U*78d18b0c9e : UParticleModule {
	char *9031a1dbdc : 1; // 0x30(0x01)
	char *078894934a : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.ParticleModuleSpawn
// Size: 0x100 (Inherited: 0x38)
struct UParticleModuleSpawn : U*78d18b0c9e {
	struct F*fc532221d4 Rate; // 0x38(0x38)
	struct F*fc532221d4 *5d1245bca9; // 0x70(0x38)
	enum class *73b0841750 *e864325772; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct F*ac69912133> *f94745bb13; // 0xb0(0x10)
	struct F*fc532221d4 *68796f8a51; // 0xc0(0x38)
	char *484fd05938 : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class Engine.*750747a9b2
// Size: 0x88 (Inherited: 0x38)
struct U*750747a9b2 : U*78d18b0c9e {
	float *9ac97202a0; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct F*fc532221d4 SpawnPerUnit; // 0x40(0x38)
	char *cb811be9b9 : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float *63a6a779c4; // 0x7c(0x04)
	float *a345d297e0; // 0x80(0x04)
	char *a2ce618c8e : 1; // 0x84(0x01)
	char *18ee28dd36 : 1; // 0x84(0x01)
	char *1ad3e53675 : 1; // 0x84(0x01)
	char pad_84_3 : 5; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// Class Engine.*63d7f8c9e3
// Size: 0x30 (Inherited: 0x30)
struct U*63d7f8c9e3 : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.ParticleModuleSubUV
// Size: 0x78 (Inherited: 0x30)
struct UParticleModuleSubUV : U*63d7f8c9e3 {
	struct USubUVAnimation* Animation; // 0x30(0x08)
	struct F*fc532221d4 SubImageIndex; // 0x38(0x38)
	char *434ef6cd2b : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Engine.ParticleModuleSubUVMovie
// Size: 0xc0 (Inherited: 0x78)
struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char *8dd4e477e9 : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct F*fc532221d4 FrameRate; // 0x80(0x38)
	int32 *b6c61a9a1b; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Engine.ParticleModuleTrailBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleTrailBase : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.*5b687eb977
// Size: 0x98 (Inherited: 0x30)
struct U*5b687eb977 : UParticleModuleTrailBase {
	enum class *8b37ea4efe *b48e706969; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FName SourceName; // 0x38(0x08)
	struct F*fc532221d4 *f94672ee56; // 0x40(0x38)
	char *7b013eb13c : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 SourceOffsetCount; // 0x7c(0x04)
	struct TArray<struct FVector> *db847a224a; // 0x80(0x10)
	enum class *d03f858603 *744176f2df; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	char *405115a596 : 1; // 0x94(0x01)
	char pad_94_1 : 7; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
};

// Class Engine.ParticleModuleTypeDataBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleTypeDataBase : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.*a08c7cee43
// Size: 0x48 (Inherited: 0x30)
struct U*a08c7cee43 : UParticleModuleTypeDataBase {
	char *4cb20f7bde : 1; // 0x30(0x01)
	char *48518500c7 : 1; // 0x30(0x01)
	char *77a99474cc : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *ab99179724; // 0x34(0x04)
	float *ef725aee1c; // 0x38(0x04)
	float *b7f6716db3; // 0x3c(0x04)
	float *3fc868da31; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.ParticleModuleTypeDataBeam2
// Size: 0x168 (Inherited: 0x30)
struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	enum class *90ca329b1e *e887e6c6ed; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 *29b81a8d12; // 0x34(0x04)
	float *0f102a8002; // 0x38(0x04)
	int32 Sheets; // 0x3c(0x04)
	int32 MaxBeamCount; // 0x40(0x04)
	float Speed; // 0x44(0x04)
	int32 InterpolationPoints; // 0x48(0x04)
	char *0f609d3bbc : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32 *eda7633acc; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FName *93d7c93271; // 0x58(0x08)
	struct F*fc532221d4 Distance; // 0x60(0x38)
	enum class *1ecae58e04 *9c7b0bf761; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct F*fc532221d4 TaperFactor; // 0xa0(0x38)
	struct F*fc532221d4 *eab012946f; // 0xd8(0x38)
	char RenderGeometry : 1; // 0x110(0x01)
	char *87c196e389 : 1; // 0x110(0x01)
	char *4f609a0bf5 : 1; // 0x110(0x01)
	char *3d1308fef5 : 1; // 0x110(0x01)
	char pad_110_4 : 4; // 0x110(0x01)
	char pad_111[0x57]; // 0x111(0x57)
};

// Class Engine.ParticleModuleTypeDataGpu
// Size: 0x460 (Inherited: 0x30)
struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	struct F*0989906fcf *6963524d43; // 0x30(0x2c0)
	struct F*056d307c7f *3bb408d6b9; // 0x2f0(0x160)
	float *638a243aa0; // 0x450(0x04)
	char *37bbbf521b : 1; // 0x454(0x01)
	char pad_454_1 : 7; // 0x454(0x01)
	char pad_455[0xb]; // 0x455(0x0b)
};

// Class Engine.ParticleModuleTypeDataMesh
// Size: 0xb8 (Inherited: 0x30)
struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	struct UStaticMesh* Mesh; // 0x30(0x08)
	char *d9c761f3f4 : 1; // 0x38(0x01)
	char *97b2f6556f : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	enum class *bfacc8b2ec *7788e29897; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	char *326a255c3a : 1; // 0x40(0x01)
	char bOverrideDefaultMotionBlurSettings : 1; // 0x40(0x01)
	char *19b77cc725 : 1; // 0x40(0x01)
	char pad_40_3 : 5; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float Pitch; // 0x44(0x04)
	float Roll; // 0x48(0x04)
	float Yaw; // 0x4c(0x04)
	struct FRawDistributionVector *869c2c2ea7; // 0x50(0x50)
	char pad_A0[0x8]; // 0xa0(0x08)
	enum class *5c5c218809 *b296e1f747; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	char *466901206e : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	enum class *0c5fa472da CameraFacingUpAxisOption; // 0xb0(0x01)
	enum class *57ffc5ed46 *2facf73106; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	char *ea127b8024 : 1; // 0xb4(0x01)
	char *e494ccc822 : 1; // 0xb4(0x01)
	char *76f1ae1f02 : 1; // 0xb4(0x01)
	char pad_B4_3 : 5; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
};

// Class Engine.ParticleModuleTypeDataRibbon
// Size: 0x60 (Inherited: 0x30)
struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32 MaxTessellationBetweenParticles; // 0x30(0x04)
	int32 SheetsPerTrail; // 0x34(0x04)
	int32 MaxTrailCount; // 0x38(0x04)
	int32 MaxParticleInTrailCount; // 0x3c(0x04)
	char *4cb20f7bde : 1; // 0x40(0x01)
	char *8be550ae4d : 1; // 0x40(0x01)
	char *b1d5490c43 : 1; // 0x40(0x01)
	char *48518500c7 : 1; // 0x40(0x01)
	char *77a99474cc : 1; // 0x40(0x01)
	char *e2cc17e2ca : 1; // 0x40(0x01)
	char pad_40_6 : 2; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	enum class *48af3acf71 *b4e2380452; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float *6285aadcf7; // 0x48(0x04)
	char *611b55fc84 : 1; // 0x4c(0x01)
	char *81acf09e02 : 1; // 0x4c(0x01)
	char *bcbb932fd3 : 1; // 0x4c(0x01)
	char *8d63610130 : 1; // 0x4c(0x01)
	char pad_4C_4 : 4; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float *ab99179724; // 0x50(0x04)
	float *ef725aee1c; // 0x54(0x04)
	char *800c4b7f9a : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float *4b26eee813; // 0x5c(0x04)
};

// Class Engine.ParticleModuleVectorFieldBase
// Size: 0x30 (Inherited: 0x30)
struct UParticleModuleVectorFieldBase : UParticleModule {
	char *3fd5df839d : 1; // 0x28(0x01)
	char *26e1b7522c : 1; // 0x28(0x01)
	char *4a1475a14e : 1; // 0x28(0x01)
	char *89365a870e : 1; // 0x28(0x01)
	char *f0a816e9df : 1; // 0x28(0x01)
	char *a638f1083c : 1; // 0x28(0x01)
	char *35bd70b225 : 1; // 0x28(0x01)
	char bEnabled : 1; // 0x28(0x01)
	char *ad2b9ed579 : 1; // 0x29(0x01)
	char *4e3823b1e7 : 1; // 0x29(0x01)
	char *a7396396f8 : 1; // 0x29(0x01)
	char *3bdbac3b3b : 1; // 0x29(0x01)
	bool *3fc88a1a97; // 0x2c(0x01)
};

// Class Engine.*ea114d6a00
// Size: 0x40 (Inherited: 0x30)
struct U*ea114d6a00 : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *f60f309f93; // 0x34(0x04)
	float *63b2ec5993; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.*2bd23c51a2
// Size: 0x68 (Inherited: 0x30)
struct U*2bd23c51a2 : UParticleModuleVectorFieldBase {
	struct UVectorField* VectorField; // 0x30(0x08)
	struct FVector RelativeTranslation; // 0x38(0x0c)
	struct FRotator RelativeRotation; // 0x44(0x0c)
	struct FVector RelativeScale3D; // 0x50(0x0c)
	float Intensity; // 0x5c(0x04)
	float *69d4d190a0; // 0x60(0x04)
	char *a2287d8520 : 1; // 0x64(0x01)
	char *54870b99bc : 1; // 0x64(0x01)
	char *f873985f9e : 1; // 0x64(0x01)
	char *515eae2e01 : 1; // 0x64(0x01)
	char *95b0976aeb : 1; // 0x64(0x01)
	char pad_64_5 : 3; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class Engine.*f428d463bf
// Size: 0x48 (Inherited: 0x30)
struct U*f428d463bf : UParticleModuleVectorFieldBase {
	struct FVector *d6ce7d1064; // 0x30(0x0c)
	struct FVector *ed76c7c70f; // 0x3c(0x0c)
};

// Class Engine.*890493e073
// Size: 0x40 (Inherited: 0x30)
struct U*890493e073 : UParticleModuleVectorFieldBase {
	struct FVector RotationRate; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.ParticleModuleVectorFieldScale
// Size: 0x70 (Inherited: 0x30)
struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	struct U*137fe4d756* VectorFieldScale; // 0x30(0x08)
	struct F*fc532221d4 *34120d0615; // 0x38(0x38)
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
// Size: 0x70 (Inherited: 0x30)
struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	struct U*137fe4d756* VectorFieldScaleOverLife; // 0x30(0x08)
	struct F*fc532221d4 *4d9812663f; // 0x38(0x38)
};

// Class Engine.*d87f0e35e8
// Size: 0x38 (Inherited: 0x30)
struct U*d87f0e35e8 : UParticleModule {
	char *6338885046 : 1; // 0x30(0x01)
	char *8bbed36aa3 : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class Engine.*c071c44e7a
// Size: 0xc0 (Inherited: 0x38)
struct U*c071c44e7a : U*d87f0e35e8 {
	struct FRawDistributionVector *21ff1e4bd8; // 0x38(0x50)
	struct F*fc532221d4 *c4f8029b70; // 0x88(0x38)
};

// Class Engine.*3472501513
// Size: 0xe0 (Inherited: 0xc0)
struct U*3472501513 : U*c071c44e7a {
	struct F*0889995bc8 *85be4a61ef; // 0xc0(0x20)
};

// Class Engine.*d3025132db
// Size: 0xb8 (Inherited: 0x38)
struct U*d3025132db : U*d87f0e35e8 {
	struct F*fc532221d4 Angle; // 0x38(0x38)
	struct F*fc532221d4 Velocity; // 0x70(0x38)
	struct FVector Direction; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class Engine.*e1f910b124
// Size: 0x88 (Inherited: 0x38)
struct U*e1f910b124 : U*d87f0e35e8 {
	struct FRawDistributionVector Scale; // 0x38(0x50)
};

// Class Engine.ParticleModuleVelocityOverLifetime
// Size: 0x90 (Inherited: 0x38)
struct UParticleModuleVelocityOverLifetime : U*d87f0e35e8 {
	struct FRawDistributionVector *9eb0ac15d3; // 0x38(0x50)
	char Absolute : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class Engine.*0fc7361301
// Size: 0x40 (Inherited: 0x28)
struct U*0fc7361301 : UObject {
	int32 *e4b542a085; // 0x28(0x04)
	char pad_2C[0x14]; // 0x2c(0x14)
};

// Class Engine.*b7fa71b437
// Size: 0xc8 (Inherited: 0xc8)
struct U*b7fa71b437 : U*c15025d53a {
	struct UNetDriver* NetDriver; // 0x30(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x38(0x08)
};

// Class Engine.PhysicalMaterial
// Size: 0x80 (Inherited: 0x28)
struct UPhysicalMaterial : UObject {
	float Friction; // 0x28(0x04)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x2c(0x01)
	bool bOverrideFrictionCombineMode; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float Restitution; // 0x30(0x04)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x34(0x01)
	bool bOverrideRestitutionCombineMode; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float Density; // 0x38(0x04)
	float RaiseMassToPower; // 0x3c(0x04)
	float DestructibleDamageThresholdScale; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UPhysicalMaterialPropertyBase* *a795dfdcfa; // 0x48(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float *5c25833367; // 0x54(0x04)
	struct TArray<struct F*753e15f292> *a50a4cf3a3; // 0x58(0x10)
	char pad_68[0x18]; // 0x68(0x18)
};

// Class Engine.PhysicalMaterialPropertyBase
// Size: 0x28 (Inherited: 0x28)
struct UPhysicalMaterialPropertyBase : UObject {
};

// Class Engine.PhysicsCollisionHandler
// Size: 0x40 (Inherited: 0x28)
struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x28(0x04)
	float ImpactReFireDelay; // 0x2c(0x04)
	struct USoundBase* DefaultImpactSound; // 0x30(0x08)
	float *7b34f79cd0; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.PhysicsConstraintTemplate
// Size: 0x340 (Inherited: 0x28)
struct UPhysicsConstraintTemplate : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FConstraintInstance DefaultInstance; // 0x30(0x1f0)
	struct TArray<struct F*d974243b04> *a5bc824c7b; // 0x220(0x10)
	struct F*7fa5281433 DefaultProfile; // 0x230(0x104)
	char pad_334[0xc]; // 0x334(0x0c)
};

// Class Engine.PhysicsSerializer
// Size: 0xd0 (Inherited: 0x28)
struct UPhysicsSerializer : UObject {
	char pad_28[0xa8]; // 0x28(0xa8)
};

// Class Engine.*149aef0be1
// Size: 0x38 (Inherited: 0x28)
struct U*149aef0be1 : UObject {
	struct TArray<struct F*e476ce19c8> *92cb335a2e; // 0x28(0x10)
};

// Class Engine.*b8ae03abfa
// Size: 0x50 (Inherited: 0x38)
struct U*b8ae03abfa : U*149aef0be1 {
	struct TArray<struct FString> *66aca82236; // 0x38(0x10)
	char *8e6d4bb816 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class Engine.*dd36988dc2
// Size: 0x60 (Inherited: 0x38)
struct U*dd36988dc2 : U*149aef0be1 {
	char *a8a3244a7e : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<DelegateProperty> *d90c1a4832; // 0x40(0x10)
	struct TArray<DelegateProperty> *aee8d1bd7b; // 0x50(0x10)
};

// Class Engine.*184616d865
// Size: 0x68 (Inherited: 0x38)
struct U*184616d865 : U*149aef0be1 {
	struct TArray<struct F*ae24324a53> *4cdad5ada2; // 0x38(0x10)
	struct FString LastError; // 0x48(0x10)
	struct FString *430666c02e; // 0x58(0x10)
};

// Class Engine.*7073f552aa
// Size: 0x38 (Inherited: 0x38)
struct U*7073f552aa : U*149aef0be1 {
	struct TArray<struct F*e476ce19c8> *92cb335a2e; // 0x28(0x10)
};

// Class Engine.*2ce7cc9375
// Size: 0xb0 (Inherited: 0x28)
struct U*2ce7cc9375 : UObject {
	struct FString *427f4de588; // 0x28(0x10)
	int32 ResponseCode; // 0x38(0x04)
	int32 Tag; // 0x3c(0x04)
	struct FString *201ca1184f; // 0x40(0x10)
	struct TArray<bool> *f57cfa8389; // 0x50(0x10)
	char pad_60[0x50]; // 0x60(0x50)

	struct FString GetHeader(); // Function Engine.*2ce7cc9375.GetHeader // None // @ game+0x63e9a58
	void *519f1eabe1(); // Function Engine.*2ce7cc9375.*519f1eabe1 // None // @ game+0x63e9c00
	void *6e90316833(); // Function Engine.*2ce7cc9375.*6e90316833 // None // @ game+0x63ea2e0
};

// Class Engine.ChildConnection
// Size: 0x65850 (Inherited: 0x65848)
struct UChildConnection : UNetConnection {
	struct UNetConnection* Parent; // 0x65848(0x08)
};

// Class Engine.Polys
// Size: 0x38 (Inherited: 0x28)
struct UPolys : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Engine.*9a24a297c9
// Size: 0x30 (Inherited: 0x28)
struct U*9a24a297c9 : UObject {
	char pad_28[0x8]; // 0x28(0x08)
};

// Class Engine.*1a90702b7b
// Size: 0xa8 (Inherited: 0x30)
struct U*1a90702b7b : U*9a24a297c9 {
	char pad_30[0x78]; // 0x30(0x78)
};

// Class Engine.ReverbEffect
// Size: 0x58 (Inherited: 0x28)
struct UReverbEffect : UObject {
	float Density; // 0x28(0x04)
	float Diffusion; // 0x2c(0x04)
	float Gain; // 0x30(0x04)
	float GainHF; // 0x34(0x04)
	float DecayTime; // 0x38(0x04)
	float DecayHFRatio; // 0x3c(0x04)
	float ReflectionsGain; // 0x40(0x04)
	float ReflectionsDelay; // 0x44(0x04)
	float LateGain; // 0x48(0x04)
	float LateDelay; // 0x4c(0x04)
	float AirAbsorptionGainHF; // 0x50(0x04)
	float RoomRolloffFactor; // 0x54(0x04)
};

// Class Engine.Rig
// Size: 0x48 (Inherited: 0x28)
struct URig : UObject {
	struct TArray<struct F*3d3a9652a8> TransformBases; // 0x28(0x10)
	struct TArray<struct FNode> Nodes; // 0x38(0x10)
};

// Class Engine.SimpleConstructionScript
// Size: 0xb8 (Inherited: 0x28)
struct USimpleConstructionScript : UObject {
	struct TArray<struct USCS_Node*> *c95f4bde2d; // 0x28(0x10)
	struct TArray<struct USCS_Node*> *4af16a9e5d; // 0x38(0x10)
	struct USCS_Node* *5a3d806eb0; // 0x48(0x08)
	struct USCS_Node* RootNode; // 0x50(0x08)
	struct TArray<struct USCS_Node*> ActorComponentNodes; // 0x58(0x10)
	char pad_68[0x50]; // 0x68(0x50)
};

// Class Engine.SCS_Node
// Size: 0x150 (Inherited: 0x28)
struct USCS_Node : UObject {
	struct UClass* ComponentClass; // 0x28(0x08)
	struct UActorComponent* *24a02264b6; // 0x30(0x08)
	struct F*02431ea27c *54cd37d868; // 0x38(0x50)
	struct FName VariableName; // 0x88(0x08)
	struct FName *e825c77143; // 0x90(0x08)
	struct FName *86c70985a7; // 0x98(0x08)
	struct FName *583951ebbc; // 0xa0(0x08)
	bool *cf64d7fccc; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct USCS_Node*> ChildNodes; // 0xb0(0x10)
	struct USCS_Node* *353b308dab; // 0xc0(0x08)
	struct TArray<struct F*2eaa2367a5> *f004f939a8; // 0xc8(0x10)
	struct FGuid VariableGuid; // 0xd8(0x10)
	bool bIsFalseRoot; // 0xe8(0x01)
	bool bIsNative; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
	struct FName NativeComponentName; // 0xf0(0x08)
	bool bVariableNameAutoGenerated; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FName InternalVariableName; // 0x100(0x08)
	char pad_108[0x48]; // 0x108(0x48)
};

// Class Engine.Selection
// Size: 0x90 (Inherited: 0x28)
struct USelection : UObject {
	char pad_28[0x68]; // 0x28(0x68)
};

// Class Engine.DestructibleMesh
// Size: 0x390 (Inherited: 0x2e8)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x2e8(0x88)
	struct TArray<struct F*ea886402eb> *dff0921d35; // 0x370(0x10)
	char pad_380[0x10]; // 0x380(0x10)
};

// Class Engine.SkeletalMeshReductionSettings
// Size: 0x40 (Inherited: 0x28)
struct USkeletalMeshReductionSettings : UObject {
	struct TArray<struct F*57b813e296> Settings; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
};

// Class Engine.SkeletalMeshSocket
// Size: 0x60 (Inherited: 0x28)
struct USkeletalMeshSocket : UObject {
	struct FName SocketName; // 0x28(0x08)
	struct FName BoneName; // 0x30(0x08)
	struct FVector RelativeLocation; // 0x38(0x0c)
	struct FRotator RelativeRotation; // 0x44(0x0c)
	struct FVector RelativeScale; // 0x50(0x0c)
	bool bForceAlwaysAnimated; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)

	struct USkeletalMeshComponent* *a27f6d4764(); // Function Engine.SkeletalMeshSocket.*a27f6d4764 // None // @ game+0x63eb3d8
	void *b9e895a0b5(struct FVector WorldLocation); // Function Engine.SkeletalMeshSocket.*b9e895a0b5 // None // @ game+0x63ec094
};

// Class Engine.SlateBrushAsset
// Size: 0xb8 (Inherited: 0x28)
struct USlateBrushAsset : UObject {
	struct FSlateBrush Brush; // 0x28(0x90)
};

// Class Engine.SlateTextureAtlasInterface
// Size: 0x28 (Inherited: 0x28)
struct USlateTextureAtlasInterface : UInterface {
};

// Class Engine.SoundConcurrency
// Size: 0x38 (Inherited: 0x28)
struct USoundConcurrency : UObject {
	struct F*17676fbb1e Concurrency; // 0x28(0x10)
};

// Class Engine.*32151ea3ad
// Size: 0x40 (Inherited: 0x28)
struct U*32151ea3ad : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class Engine.*8379a39c46
// Size: 0x40 (Inherited: 0x40)
struct U*8379a39c46 : U*32151ea3ad {
};

// Class Engine.SoundSubmix
// Size: 0x50 (Inherited: 0x28)
struct USoundSubmix : UObject {
	struct TArray<struct USoundSubmix*> *200b82b922; // 0x28(0x10)
	struct USoundSubmix* *10389acf51; // 0x38(0x08)
	struct TArray<struct U*8379a39c46*> *60ce38432b; // 0x40(0x10)
};

// Class Engine.SoundBase
// Size: 0xa0 (Inherited: 0x28)
struct USoundBase : UObject {
	struct USoundClass* *a8c19380f3; // 0x28(0x08)
	char *f806e08ca5 : 1; // 0x30(0x01)
	char bOverrideConcurrency : 1; // 0x30(0x01)
	char bIgnoreFocus : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct USoundConcurrency* SoundConcurrencySettings; // 0x38(0x08)
	struct F*17676fbb1e ConcurrencyOverrides; // 0x40(0x10)
	enum class EMaxConcurrentResolutionRule MaxConcurrentResolutionRule; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 MaxConcurrentPlayCount; // 0x54(0x04)
	float Duration; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x60(0x08)
	float Priority; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct USoundSubmix* SoundSubmixObject; // 0x70(0x08)
	struct TArray<struct F*3da6da8223> SoundSubmixSends; // 0x78(0x10)
	float DefaultMasterReverbSendAmount; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct U*844cf37c90* SourceEffectChain; // 0x90(0x08)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class Engine.*d5836d1cb7
// Size: 0xc0 (Inherited: 0xa0)
struct U*d5836d1cb7 : USoundBase {
	struct USoundClass* *a8c19380f3; // 0x28(0x08)
	char *f806e08ca5 : 1; // 0x30(0x01)
	char bOverrideConcurrency : 1; // 0x30(0x01)
	char bIgnoreFocus : 1; // 0x30(0x01)
	struct USoundConcurrency* SoundConcurrencySettings; // 0x38(0x08)
	struct F*17676fbb1e ConcurrencyOverrides; // 0x40(0x10)
	enum class EMaxConcurrentResolutionRule MaxConcurrentResolutionRule; // 0x50(0x01)
	int32 MaxConcurrentPlayCount; // 0x54(0x04)
	float Duration; // 0x58(0x04)
	struct USoundAttenuation* AttenuationSettings; // 0x60(0x08)
	float Priority; // 0x68(0x04)
	struct USoundSubmix* SoundSubmixObject; // 0x70(0x08)
	struct TArray<struct F*3da6da8223> SoundSubmixSends; // 0x78(0x10)
	float DefaultMasterReverbSendAmount; // 0x88(0x04)
	struct U*844cf37c90* SourceEffectChain; // 0x90(0x08)
};

// Class Engine.SoundNode
// Size: 0x38 (Inherited: 0x28)
struct USoundNode : UObject {
	struct TArray<struct USoundNode*> ChildNodes; // 0x28(0x10)
};

// Class Engine.SoundCue
// Size: 0x1f8 (Inherited: 0xa0)
struct USoundCue : USoundBase {
	char bOverrideAttenuation : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct USoundNode* *2e42f86c77; // 0xa8(0x08)
	float *7435aa9c16; // 0xb0(0x04)
	float *bc8e2145da; // 0xb4(0x04)
	struct FSoundAttenuationSettings *5adfb44000; // 0xb8(0x130)
	char pad_1E8[0x10]; // 0x1e8(0x10)
};

// Class Engine.SoundGroups
// Size: 0x88 (Inherited: 0x28)
struct USoundGroups : UObject {
	struct TArray<struct FSoundGroup> SoundGroupProfiles; // 0x28(0x10)
	char pad_38[0x50]; // 0x38(0x50)
};

// Class Engine.SoundWave
// Size: 0x288 (Inherited: 0xa0)
struct USoundWave : USoundBase {
	int32 CompressionQuality; // 0xa0(0x04)
	char bLooping : 1; // 0xa4(0x01)
	char *edbf2ee878 : 1; // 0xa4(0x01)
	char pad_A4_2 : 6; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	int32 *c616dc1f0a; // 0xa8(0x04)
	char pad_AC_0 : 3; // 0xac(0x01)
	char *8a3cc4a7c8 : 1; // 0xac(0x01)
	char *e0b2b13598 : 1; // 0xac(0x01)
	char *ee39d4b19b : 1; // 0xac(0x01)
	char *bf7c1f8eeb : 1; // 0xac(0x01)
	char pad_AC_7 : 1; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	enum class ESoundGroup SoundGroup; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FString *622c8764d8; // 0xb8(0x10)
	float *e293256a55; // 0xc8(0x04)
	float Volume; // 0xcc(0x04)
	float Pitch; // 0xd0(0x04)
	int32 *7907ef25cf; // 0xd4(0x04)
	int32 SampleRate; // 0xd8(0x04)
	int32 *3f11b6faa6; // 0xdc(0x04)
	struct TArray<struct F*cc00d9579b> Subtitles; // 0xe0(0x10)
	struct TArray<struct F*3f2b6dfbf7> *42066ff8d0; // 0xf0(0x10)
	struct UCurveTable* Curves; // 0x100(0x08)
	struct UCurveTable* *b3add4c6d5; // 0x108(0x08)
	char pad_110[0x178]; // 0x110(0x178)
};

// Class Engine.*4a2c8ddd5c
// Size: 0x310 (Inherited: 0x288)
struct U*4a2c8ddd5c : USoundWave {
	int32 CompressionQuality; // 0xa0(0x04)
	char bLooping : 1; // 0xa4(0x01)
	char *edbf2ee878 : 1; // 0xa4(0x01)
	int32 *c616dc1f0a; // 0xa8(0x04)
	char pad_290_2 : 1; // 0x290(0x01)
	char *8a3cc4a7c8 : 1; // 0xac(0x01)
	char *e0b2b13598 : 1; // 0xac(0x01)
	char *ee39d4b19b : 1; // 0xac(0x01)
	char *bf7c1f8eeb : 1; // 0xac(0x01)
	enum class ESoundGroup SoundGroup; // 0xb0(0x01)
	struct FString *622c8764d8; // 0xb8(0x10)
	float *e293256a55; // 0xc8(0x04)
	float Volume; // 0xcc(0x04)
	float Pitch; // 0xd0(0x04)
	int32 *7907ef25cf; // 0xd4(0x04)
	int32 SampleRate; // 0xd8(0x04)
	int32 *3f11b6faa6; // 0xdc(0x04)
	struct TArray<struct F*cc00d9579b> Subtitles; // 0xe0(0x10)
	struct TArray<struct F*3f2b6dfbf7> *42066ff8d0; // 0xf0(0x10)
	struct UCurveTable* Curves; // 0x100(0x08)
	struct UCurveTable* *b3add4c6d5; // 0x108(0x08)
	char pad_2E9_7 : 1; // 0x2e9(0x01)
	char pad_2EA[0x26]; // 0x2ea(0x26)
};

// Class Engine.SoundClass
// Size: 0x80 (Inherited: 0x28)
struct USoundClass : UObject {
	struct F*74cec90329 Properties; // 0x28(0x2c)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct USoundClass*> ChildClasses; // 0x58(0x10)
	struct TArray<struct FPassiveSoundMixModifier> *da689c706a; // 0x68(0x10)
	struct USoundClass* ParentClass; // 0x78(0x08)
};

// Class Engine.*5062c4e189
// Size: 0x40 (Inherited: 0x40)
struct U*5062c4e189 : U*32151ea3ad {
};

// Class Engine.*844cf37c90
// Size: 0x40 (Inherited: 0x28)
struct U*844cf37c90 : UObject {
	struct TArray<struct F*97bac0c986> Chain; // 0x28(0x10)
	char *de6a9cecb3 : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Engine.SoundMix
// Size: 0x88 (Inherited: 0x28)
struct USoundMix : UObject {
	char *6eddb50f25 : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *c9e5cc98e1; // 0x2c(0x04)
	struct FAudioEQEffect *12dddbceac; // 0x30(0x38)
	struct TArray<struct F*3b312c0d05> *4e5a0b6598; // 0x68(0x10)
	float InitialDelay; // 0x78(0x04)
	float *36934d7c10; // 0x7c(0x04)
	float Duration; // 0x80(0x04)
	float *8d537bca25; // 0x84(0x04)
};

// Class Engine.*51a89cda1a
// Size: 0x38 (Inherited: 0x38)
struct U*51a89cda1a : USoundNode {
	struct TArray<struct USoundNode*> ChildNodes; // 0x28(0x10)
};

// Class Engine.SoundNodeWavePlayer
// Size: 0x68 (Inherited: 0x38)
struct USoundNodeWavePlayer : U*51a89cda1a {
	struct USoundWave* SoundWaveAssetPtr; // 0x38(0x20)
	struct USoundWave* SoundWave; // 0x58(0x08)
	char pad_60_0 : 1; // 0x60(0x01)
	char bLooping : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class Engine.*381d707f72
// Size: 0x178 (Inherited: 0x38)
struct U*381d707f72 : USoundNode {
	struct USoundAttenuation* AttenuationSettings; // 0x38(0x08)
	struct FSoundAttenuationSettings *5adfb44000; // 0x40(0x130)
	char bOverrideAttenuation : 1; // 0x170(0x01)
	char pad_170_1 : 7; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
};

// Class Engine.SoundNodeBranch
// Size: 0x40 (Inherited: 0x38)
struct USoundNodeBranch : USoundNode {
	struct FName *8a4fe00493; // 0x38(0x08)
};

// Class Engine.*c834d4e7ac
// Size: 0x48 (Inherited: 0x38)
struct U*c834d4e7ac : USoundNode {
	struct TArray<float> *56d9dad641; // 0x38(0x10)
};

// Class Engine.*2248b15248
// Size: 0x40 (Inherited: 0x38)
struct U*2248b15248 : USoundNode {
	float *b36308443c; // 0x38(0x04)
	float *37cb1d65b7; // 0x3c(0x04)
};

// Class Engine.SoundNodeDialoguePlayer
// Size: 0x60 (Inherited: 0x38)
struct USoundNodeDialoguePlayer : USoundNode {
	struct FDialogueWaveParameter DialogueWaveParameter; // 0x38(0x20)
	char bLooping : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Engine.*51b73b6285
// Size: 0x48 (Inherited: 0x38)
struct U*51b73b6285 : USoundNode {
	struct TArray<struct FDistanceDatum> *b776c48b3b; // 0x38(0x10)
};

// Class Engine.*71b8839dd1
// Size: 0x50 (Inherited: 0x48)
struct U*71b8839dd1 : U*51b73b6285 {
	struct FName ParamName; // 0x48(0x08)
};

// Class Engine.*920c75af5b
// Size: 0x40 (Inherited: 0x38)
struct U*920c75af5b : USoundNode {
	float *32d0e74bfd; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Engine.*0010567464
// Size: 0x160 (Inherited: 0x38)
struct U*0010567464 : USoundNode {
	float *34d33596d4; // 0x38(0x04)
	float LoopEnd; // 0x3c(0x04)
	float *a59e597eb1; // 0x40(0x04)
	int32 *a0c0e4483f; // 0x44(0x04)
	char *fe6799cdfb : 1; // 0x48(0x01)
	char bLoop : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct U*1b820e48b1* VolumeInterpCurve; // 0x50(0x08)
	struct U*1b820e48b1* PitchInterpCurve; // 0x58(0x08)
	struct FRuntimeFloatCurve VolumeCurve; // 0x60(0x78)
	struct FRuntimeFloatCurve *f186bd97db; // 0xd8(0x78)
	float *ae53c26b45; // 0x150(0x04)
	float *e1cf34fd9f; // 0x154(0x04)
	float *fc7ba3ef36; // 0x158(0x04)
	float *85478141fb; // 0x15c(0x04)
};

// Class Engine.*dbe15053a3
// Size: 0x48 (Inherited: 0x38)
struct U*dbe15053a3 : USoundNode {
	struct TArray<int32> *a890440348; // 0x38(0x10)
};

// Class Engine.*fa4daf8888
// Size: 0x40 (Inherited: 0x38)
struct U*fa4daf8888 : USoundNode {
	int32 *a0c0e4483f; // 0x38(0x04)
	char *fe6799cdfb : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class Engine.SoundNodeMature
// Size: 0x38 (Inherited: 0x38)
struct USoundNodeMature : USoundNode {
	struct TArray<struct USoundNode*> ChildNodes; // 0x28(0x10)
};

// Class Engine.*78a553d526
// Size: 0x48 (Inherited: 0x38)
struct U*78a553d526 : USoundNode {
	struct TArray<float> *56d9dad641; // 0x38(0x10)
};

// Class Engine.*4296331bd3
// Size: 0x48 (Inherited: 0x38)
struct U*4296331bd3 : USoundNode {
	float *ae53c26b45; // 0x38(0x04)
	float *e1cf34fd9f; // 0x3c(0x04)
	float *fc7ba3ef36; // 0x40(0x04)
	float *85478141fb; // 0x44(0x04)
};

// Class Engine.*66a521f849
// Size: 0x78 (Inherited: 0x38)
struct U*66a521f849 : USoundNode {
	struct F*20ca22d1ea *1d3fd66d4b; // 0x38(0x20)
	struct F*20ca22d1ea *217959a05f; // 0x58(0x20)
};

// Class Engine.*1475fcdd62
// Size: 0x60 (Inherited: 0x38)
struct U*1475fcdd62 : USoundNode {
	char *086edf05ba : 1; // 0x38(0x01)
	char *e89bb13046 : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *8c401a11f7; // 0x3c(0x04)
	float *8162432a5d; // 0x40(0x04)
	float *bf186f4901; // 0x44(0x04)
	float *e3234fd02a; // 0x48(0x04)
	float *5abc4384b2; // 0x4c(0x04)
	float *526bbac056; // 0x50(0x04)
	float *26b6a1bad6; // 0x54(0x04)
	float *6ea5fcd651; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Engine.*67540fdaca
// Size: 0x38 (Inherited: 0x38)
struct U*67540fdaca : USoundNode {
	struct TArray<struct USoundNode*> ChildNodes; // 0x28(0x10)
};

// Class Engine.*e9b82ce35a
// Size: 0x68 (Inherited: 0x38)
struct U*e9b82ce35a : USoundNode {
	struct TArray<float> Weights; // 0x38(0x10)
	int32 *4d2de44604; // 0x48(0x04)
	char *ad41e765c7 : 1; // 0x4c(0x01)
	char pad_4C_1 : 7; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<bool> *b0ce926e22; // 0x50(0x10)
	int32 *70de4d4cb9; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Engine.*e64a12f17c
// Size: 0x40 (Inherited: 0x38)
struct U*e64a12f17c : USoundNode {
	struct USoundClass* *74b597268e; // 0x38(0x08)
};

// Class Engine.SoundNodeSwitch
// Size: 0x40 (Inherited: 0x38)
struct USoundNodeSwitch : USoundNode {
	struct FName *3e283b9ec7; // 0x38(0x08)
};

// Class Engine.*675fc1c59e
// Size: 0x40 (Inherited: 0x38)
struct U*675fc1c59e : USoundNode {
	struct FName *525e2f0675; // 0x38(0x08)
};

// Class Engine.*51ab10dd10
// Size: 0x68 (Inherited: 0x28)
struct U*51ab10dd10 : UObject {
	struct FName SocketName; // 0x28(0x08)
	struct FVector RelativeLocation; // 0x30(0x0c)
	struct FRotator RelativeRotation; // 0x3c(0x0c)
	struct FVector RelativeScale; // 0x48(0x0c)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString Tag; // 0x58(0x10)
};

// Class Engine.StringTable
// Size: 0x40 (Inherited: 0x28)
struct UStringTable : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class Engine.SubsurfaceProfile
// Size: 0x50 (Inherited: 0x28)
struct USubsurfaceProfile : UObject {
	struct FSubsurfaceProfileStruct Settings; // 0x28(0x24)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Engine.*4b7c0f82cf
// Size: 0x70 (Inherited: 0x28)
struct U*4b7c0f82cf : UObject {
	struct FText DefaultedText; // 0x28(0x18)
	struct FText UndefaultedText; // 0x40(0x18)
	struct FText *ac02f95253; // 0x58(0x18)
};

// Class Engine.LightMapTexture2D
// Size: 0x100 (Inherited: 0xf8)
struct ULightMapTexture2D : UTexture2D {
	int32 *7236cc8f05; // 0xb8(0x04)
	int32 *018f2f6278; // 0xbc(0x04)
	int32 *7addae35f1; // 0xc0(0x04)
	struct FIntPoint *df15f4859d; // 0xc4(0x08)
	double *6ab965470d; // 0xd0(0x08)
	char *c11c956f83 : 1; // 0xd8(0x01)
	char *8308a3a0af : 1; // 0xd8(0x01)
	char *f2f0197326 : 1; // 0xd8(0x01)
	char *28e0f53cbc : 1; // 0xd8(0x01)
	char *89b6eea276 : 1; // 0xd8(0x01)
	char bGlobalForceMipLevelsToBeResident : 1; // 0xd8(0x01)
	char *2a91aef5b9 : 1; // 0xd8(0x01)
	enum class *6486b70fc0 AddressX; // 0xdc(0x01)
	enum class *6486b70fc0 AddressY; // 0xdd(0x01)

	void *3f69542928(); // Function Engine.Texture2D.*3f69542928 // None // @ game+0x638884c
	void *0d452de5c1(); // Function Engine.Texture2D.*0d452de5c1 // None // @ game+0x6388874
	float *77e5a6ccb5(); // Function Engine.Texture2D.*77e5a6ccb5 // None // @ game+0x63c6598
};

// Class Engine.*5312181a32
// Size: 0x100 (Inherited: 0xf8)
struct U*5312181a32 : UTexture2D {
	enum class *5cd2b0febe *41dbac1f74; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class Engine.Texture2DArray
// Size: 0xf8 (Inherited: 0xf8)
struct UTexture2DArray : UTexture2D {
	int32 *7236cc8f05; // 0xb8(0x04)
	int32 *018f2f6278; // 0xbc(0x04)
	int32 *7addae35f1; // 0xc0(0x04)
	struct FIntPoint *df15f4859d; // 0xc4(0x08)
	double *6ab965470d; // 0xd0(0x08)
	char *c11c956f83 : 1; // 0xd8(0x01)
	char *8308a3a0af : 1; // 0xd8(0x01)
	char *f2f0197326 : 1; // 0xd8(0x01)
	char *28e0f53cbc : 1; // 0xd8(0x01)
	char *89b6eea276 : 1; // 0xd8(0x01)
	char bGlobalForceMipLevelsToBeResident : 1; // 0xd8(0x01)
	char *2a91aef5b9 : 1; // 0xd8(0x01)
	enum class *6486b70fc0 AddressX; // 0xdc(0x01)
	enum class *6486b70fc0 AddressY; // 0xdd(0x01)

	void *3f69542928(); // Function Engine.Texture2D.*3f69542928 // None // @ game+0x638884c
	void *0d452de5c1(); // Function Engine.Texture2D.*0d452de5c1 // None // @ game+0x6388874
	float *77e5a6ccb5(); // Function Engine.Texture2D.*77e5a6ccb5 // None // @ game+0x63c6598
};

// Class Engine.*b63877ce42
// Size: 0x100 (Inherited: 0xf8)
struct U*b63877ce42 : UTexture2D {
	float Brightness; // 0xf8(0x04)
	float *9bbfaed9c9; // 0xfc(0x04)
};

// Class Engine.*ec6d9c8af4
// Size: 0xd0 (Inherited: 0xb8)
struct U*ec6d9c8af4 : UTexture {
	char pad_B8[0x8]; // 0xb8(0x08)
	enum class EPixelFormat Format; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)
};

// Class Engine.*8c670b32d3
// Size: 0x108 (Inherited: 0xe8)
struct U*8c670b32d3 : UTextureRenderTarget2D {
	struct FMulticastDelegate OnCanvasRenderTargetUpdate; // 0xe8(0x10)
	struct UWorld* World; // 0xf8(0x08)
	bool *20c2319b5d; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)

	struct UClass* *652b510c19(int32 Width); // Function Engine.*8c670b32d3.*652b510c19 // None // @ game+0x63e6b94
	void GetSize(int32 Width); // Function Engine.*8c670b32d3.GetSize // None // @ game+0x63eb2bc
	void *592d2450bc(); // Function Engine.*8c670b32d3.*592d2450bc // None // @ game+0x5667338
	int32 ReceiveUpdate(); // Function Engine.*8c670b32d3.ReceiveUpdate // None // @ game+0x26a108
};

// Class Engine.TextureRenderTargetCube
// Size: 0xe0 (Inherited: 0xc0)
struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32 SizeX; // 0xc0(0x04)
	struct FLinearColor ClearColor; // 0xc4(0x10)
	enum class EPixelFormat *4b5f52ef85; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	char bHDR : 1; // 0xd8(0x01)
	char *0fcaada11b : 1; // 0xd8(0x01)
	char pad_D8_2 : 6; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class Engine.TextureLODSettings
// Size: 0x38 (Inherited: 0x28)
struct UTextureLODSettings : UObject {
	struct TArray<struct FTextureLODGroup> TextureLODGroups; // 0x28(0x10)
};

// Class Engine.DeviceProfile
// Size: 0xd0 (Inherited: 0x38)
struct UDeviceProfile : UTextureLODSettings {
	struct FString DeviceType; // 0x38(0x10)
	struct FString BaseProfileName; // 0x48(0x10)
	struct UObject* Parent; // 0x58(0x08)
	char pad_60[0x18]; // 0x60(0x18)
	struct TArray<struct FString> CVars; // 0x78(0x10)
	char pad_88[0x48]; // 0x88(0x48)
};

// Class Engine.*31e2af0749
// Size: 0x28 (Inherited: 0x28)
struct U*31e2af0749 : UObject {
};

// Class Engine.*a7a0563fde
// Size: 0x98 (Inherited: 0x28)
struct U*a7a0563fde : UObject {
	float *3b5f8b6db2; // 0x28(0x04)
	enum class *3519cdbfbf *11d5ce723d; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	char *df97381279 : 1; // 0x30(0x01)
	char bLoop : 1; // 0x30(0x01)
	char bReplicated : 1; // 0x30(0x01)
	char *38361caa85 : 1; // 0x30(0x01)
	char *8499a67b55 : 1; // 0x30(0x01)
	char pad_30_5 : 3; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct F*b277d7168d> *4d9989edb6; // 0x38(0x10)
	struct TArray<struct F*fd571370e5> *ca58b41826; // 0x48(0x10)
	struct TArray<struct F*7fbc0d4a3d> *35ec9f630a; // 0x58(0x10)
	struct TArray<struct F*ae5448de9c> *c0e0539840; // 0x68(0x10)
	struct TArray<struct F*2eaa2367a5> *f004f939a8; // 0x78(0x10)
	struct FGuid *b17e299208; // 0x88(0x10)
};

// Class Engine.TouchInterface
// Size: 0x58 (Inherited: 0x28)
struct UTouchInterface : UObject {
	struct TArray<struct F*bdbe0e3e54> Controls; // 0x28(0x10)
	float *7b500e27de; // 0x38(0x04)
	float *0f1f0e8481; // 0x3c(0x04)
	float *e263b3ba03; // 0x40(0x04)
	float *6862413592; // 0x44(0x04)
	float *e7fe86c743; // 0x48(0x04)
	bool *53e75d12dd; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float StartupDelay; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.UserDefinedEnum
// Size: 0xc0 (Inherited: 0x70)
struct UUserDefinedEnum : UEnum {
	struct TMap<struct FName, struct FText> *c4132c74e7; // 0x70(0x50)
};

// Class Engine.VectorField
// Size: 0x48 (Inherited: 0x28)
struct UVectorField : UObject {
	struct FBox Bounds; // 0x28(0x1c)
	float Intensity; // 0x44(0x04)
};

// Class Engine.*8a54046ee7
// Size: 0x88 (Inherited: 0x48)
struct U*8a54046ee7 : UVectorField {
	struct UTexture2D* Texture; // 0x48(0x08)
	enum class *02e6c5f744 *0901923304; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32 *949a907408; // 0x54(0x04)
	int32 *8e4879ed24; // 0x58(0x04)
	int32 *cd73acc3fb; // 0x5c(0x04)
	int32 *43d6dd38c1; // 0x60(0x04)
	int32 *cd7bcd8ace; // 0x64(0x04)
	int32 FrameCount; // 0x68(0x04)
	float FramesPerSecond; // 0x6c(0x04)
	char bLoop : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct U*5dab10ba86* NoiseField; // 0x78(0x08)
	float NoiseScale; // 0x80(0x04)
	float *8402be9496; // 0x84(0x04)
};

// Class Engine.*5dab10ba86
// Size: 0xe0 (Inherited: 0x48)
struct U*5dab10ba86 : UVectorField {
	int32 SizeX; // 0x48(0x04)
	int32 SizeY; // 0x4c(0x04)
	int32 *670b18789c; // 0x50(0x04)
	char pad_54[0x8c]; // 0x54(0x8c)
};

// Class Engine.*a9a02d5ef0
// Size: 0x28 (Inherited: 0x28)
struct U*a9a02d5ef0 : UObject {
};

// Class Engine.*a53c266637
// Size: 0x28 (Inherited: 0x28)
struct U*a53c266637 : UInterface {
};

// Class Engine.*5ca6d5a987
// Size: 0x58 (Inherited: 0x28)
struct U*5ca6d5a987 : UObject {
	struct FGuid ID; // 0x28(0x10)
	enum class EVolumetricDataFormat Format; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector VoxelSize; // 0x3c(0x0c)
	float SamplingScale; // 0x48(0x04)
	float *27d6d8213a; // 0x4c(0x04)
	float MaxDrawDistance; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Engine.WorldComposition
// Size: 0x90 (Inherited: 0x28)
struct UWorldComposition : UObject {
	char pad_28[0x38]; // 0x28(0x38)
	struct TArray<struct ULevelStreaming*> *04125122e8; // 0x60(0x10)
	double TilesStreamingTimeThreshold; // 0x70(0x08)
	bool bLoadAllTilesDuringCinematic; // 0x78(0x01)
	bool bRebaseOriginIn3DSpace; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	float RebaseOriginDistance; // 0x7c(0x04)
	struct TArray<struct FString> IgnoreStreamingPrefix; // 0x80(0x10)
};

