// Class GameplayAbilities.*8448d8e632
// Size: 0x30 (Inherited: 0x30)
struct U*8448d8e632 : UInterface {
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1860 (Inherited: 0x270)
struct UAbilitySystemComponent : UGameplayTasksComponent {
	char pad_270[0x8]; // 0x270(0x08)
	char *a2de653ec2 : 1; // 0x278(0x01)
	char pad_278_1 : 7; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct TArray<struct F*b4a65db0a7> *f29c52d57c; // 0x280(0x10)
	struct FName AffectedAnimInstanceTag; // 0x290(0x08)
	char pad_298[0x5c8]; // 0x298(0x5c8)
	float *68ce101bc1; // 0x860(0x04)
	float *cfd565824f; // 0x864(0x04)
	char pad_868[0x80]; // 0x868(0x80)
	bool *f4bd8995ad; // 0x8e8(0x01)
	bool *bfd7f0fa0d; // 0x8e9(0x01)
	bool *1e333e7cfb; // 0x8ea(0x01)
	bool *59d5209ff1; // 0x8eb(0x01)
	char pad_8EC[0x4]; // 0x8ec(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> *572cfea876; // 0x8f0(0x10)
	char pad_900[0x38]; // 0x900(0x38)
	struct F*2f57e44964 ActivatableAbilities; // 0x938(0xc8)
	char pad_A00[0x30]; // 0xa00(0x30)
	struct TArray<struct UGameplayAbility*> *42a4d5de5a; // 0xa30(0x10)
	char pad_A40[0x20c]; // 0xa40(0x20c)
	bool *a0991d3d99; // 0xc4c(0x01)
	bool *918aa88e83; // 0xc4d(0x01)
	char pad_C4E[0x2]; // 0xc4e(0x02)
	struct F*589af052e0 *536b304aff; // 0xc50(0x30)
	char pad_C80[0xa0]; // 0xc80(0xa0)
	struct F*8cd29561c5 *8a7330720a; // 0xd20(0x4e0)
	struct F*65b3785e23 *7a6e901f40; // 0x1200(0xd0)
	struct F*65b3785e23 *1014d359dd; // 0x12d0(0xd0)
	char pad_13A0[0x318]; // 0x13a0(0x318)
	struct TArray<struct UAttributeSet*> *19e3a82526; // 0x16b8(0x10)
	struct TArray<struct FString> *77cc3720e0; // 0x16c8(0x10)
	struct AActor* *e44b518add; // 0x16d8(0x08)
	struct AActor* AvatarActor; // 0x16e0(0x08)
	struct F*6a5bcc596e *f0b4b65534; // 0x16e8(0x38)
	struct TArray<bool> *5aa9a82a8f; // 0x1720(0x10)
	struct F*8cf8a1b08c *c441622927; // 0x1730(0x60)
	struct TArray<struct FString> *33a869daff; // 0x1790(0x10)
	struct F*7d5406741e *7d5406741e; // 0x17a0(0xc0)

	struct F*c3cafe0f98 *ba95354741(); // Function GameplayAbilities.AbilitySystemComponent.*ba95354741 // Final|Native|Public|BlueprintCallable // @ game+0x6faea8c
	struct F*a2f2c750be *a7f6ca6ea2(); // Function GameplayAbilities.AbilitySystemComponent.*a7f6ca6ea2 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6fafd04
	struct F*c3cafe0f98 *4393c5498f(); // Function GameplayAbilities.AbilitySystemComponent.*4393c5498f // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6fae680
	float *09502ced07(); // Function GameplayAbilities.AbilitySystemComponent.*09502ced07 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fb691c
	int32 *4a414e88dd(); // Function GameplayAbilities.AbilitySystemComponent.*4a414e88dd // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6fb7ca8
	void *7f449f32c6(struct F*c3cafe0f98 Handle, struct FGameplayAttribute Attribute, float ReturnValue); // Function GameplayAbilities.AbilitySystemComponent.*7f449f32c6 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb18dc
	void *91a4ecdf11(); // Function GameplayAbilities.AbilitySystemComponent.*91a4ecdf11 // Native|Public|BlueprintCallable // @ game+0x6fb8410
	void AbilityConfirmOrCancel__DelegateSignature(); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x370fbc
	void *a1d11f009a(struct F*7a56532c22 Param1, struct F*b1f6324a11 Param2); // Function GameplayAbilities.AbilitySystemComponent.*a1d11f009a // Net|Native|Event|NetMulticast|Public // @ game+0x6fb362c
	void *b851ef7b8a(struct F*488da1e323 Param0); // Function GameplayAbilities.AbilitySystemComponent.*b851ef7b8a // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fb6df8
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams // Net|Native|Event|NetMulticast|Public // @ game+0x6fb3c80
	void *39330d271c(struct UClass* GameplayEffectClass, float Level, struct F*1734f92018 Context); // Function GameplayAbilities.AbilitySystemComponent.*39330d271c // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb2b60
	void *b43360296a(); // Function GameplayAbilities.AbilitySystemComponent.*b43360296a // Final|Native|Public|BlueprintCallable // @ game+0x6fb5c48
	void *32187e4d56(struct TArray<struct FString> Param0); // Function GameplayAbilities.AbilitySystemComponent.*32187e4d56 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fb6c6c
	void *bcfada20f4(); // Function GameplayAbilities.AbilitySystemComponent.*bcfada20f4 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6fb6018
	int32 *77f2a9ef27(); // Function GameplayAbilities.AbilitySystemComponent.*77f2a9ef27 // Final|Native|Public|BlueprintCallable|BlueprintPure // @ game+0x6fb17ac
	void OnRep_ReplicatedAnimMontage(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage // Native|Protected // @ game+0x6fb5800
	void OnRep_ActivateAbilities(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities // Native|Protected // @ game+0x6bca068
	struct F*488da1e323 *6044438cc2(); // Function GameplayAbilities.AbilitySystemComponent.*6044438cc2 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fb6d48
	struct F*1734f92018 *0dfd9189d5(); // Function GameplayAbilities.AbilitySystemComponent.*0dfd9189d5 // Net|Native|Event|NetMulticast|Public // @ game+0x6fb397c
	void *5cd347d3fb(); // Function GameplayAbilities.AbilitySystemComponent.*5cd347d3fb // Native|Public|BlueprintCallable // @ game+0x6fb8428
	int32 *6e5d212b12(); // Function GameplayAbilities.AbilitySystemComponent.*6e5d212b12 // Final|Native|Public|BlueprintCallable // @ game+0x6fb5e30
	int32 *3a62a3c061(); // Function GameplayAbilities.AbilitySystemComponent.*3a62a3c061 // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6fb7bc4
	struct F*7a56532c22 *e74adc61d2(); // Function GameplayAbilities.AbilitySystemComponent.*e74adc61d2 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fb6a30
	struct F*1734f92018 *90efec5a20(); // Function GameplayAbilities.AbilitySystemComponent.*90efec5a20 // Net|Native|Event|NetMulticast|Public // @ game+0x6fb333c
	bool *3771be7c4f(); // Function GameplayAbilities.AbilitySystemComponent.*3771be7c4f // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1c68
	struct F*1734f92018 MakeEffectContext(); // Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb297c
	void *28d7600d2b(struct TArray<struct FString> Param0, int32 Param1); // Function GameplayAbilities.AbilitySystemComponent.*28d7600d2b // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6fb00fc
	void *5dac1f72d3(struct F*1734f92018 Context, struct F*c3cafe0f98 ReturnValue); // Function GameplayAbilities.AbilitySystemComponent.*5dac1f72d3 // Final|Native|Public|BlueprintCallable // @ game+0x6faec2c
	void *2202d4ef97(struct FGameplayTagContainer Param0); // Function GameplayAbilities.AbilitySystemComponent.*2202d4ef97 // Net|Native|Event|NetMulticast|Public // @ game+0x6fb4240
	void *bf4cfd83cb(int32 ReturnValue); // Function GameplayAbilities.AbilitySystemComponent.*bf4cfd83cb // Final|Native|Public|BlueprintCallable // @ game+0x6fb5c48
	void *a4a9dafc68(enum class EAbilityGenericReplicatedEvent Param0, struct F*488da1e323 Param1); // Function GameplayAbilities.AbilitySystemComponent.*a4a9dafc68 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fb70c4
	void *208abd8900(bool ReturnValue); // Function GameplayAbilities.AbilitySystemComponent.*208abd8900 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5e1b12c
	void TryActivateAbilitiesByTag(struct FGameplayTagContainer GameplayTagContainer); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6fb8440
	int16 *7823a0bce1(); // Function GameplayAbilities.AbilitySystemComponent.*7823a0bce1 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6fafb24
	struct F*b1f6324a11 *eedf3da697(); // Function GameplayAbilities.AbilitySystemComponent.*eedf3da697 // Net|Native|Event|NetMulticast|Public // @ game+0x6fb37d4
	struct F*7a56532c22 *7b0ecc059d(); // Function GameplayAbilities.AbilitySystemComponent.*7b0ecc059d // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fb6ea8
	struct F*7a56532c22 *00b5e47550(); // Function GameplayAbilities.AbilitySystemComponent.*00b5e47550 // Net|Native|Event|NetMulticast|Public // @ game+0x6fb34f4
	struct F*1734f92018 *a921a80513(); // Function GameplayAbilities.AbilitySystemComponent.*a921a80513 // Net|Native|Event|NetMulticast|Public // @ game+0x6fb4028
	struct FName *47f0ae7579(); // Function GameplayAbilities.AbilitySystemComponent.*47f0ae7579 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fb675c
	bool *5e26fca1f6(); // Function GameplayAbilities.AbilitySystemComponent.*5e26fca1f6 // Final|Native|Public|BlueprintCallable // @ game+0x6fb8594
	bool RemoveActiveGameplayEffect(); // Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect // BlueprintAuthorityOnly|Native|Public|BlueprintCallable // @ game+0x6fb5f24
	struct F*5cf9f8565c *5053d06c17(struct UAbilitySystemComponent* Target, struct F*c3cafe0f98 ReturnValue); // Function GameplayAbilities.AbilitySystemComponent.*5053d06c17 // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6fae7b8
	void *a13e69e1e0(struct F*488da1e323 Param0); // Function GameplayAbilities.AbilitySystemComponent.*a13e69e1e0 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fb795c
	void *2c116ff4cc(struct UAnimMontage* Param0, struct FName Param1); // Function GameplayAbilities.AbilitySystemComponent.*2c116ff4cc // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fb6648
	void *7f48b14635(bool NewInhibit); // Function GameplayAbilities.AbilitySystemComponent.*7f48b14635 // Native|Public|BlueprintCallable // @ game+0x6fb7f24
	void OnRep_ClientDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString // Native|Public // @ game+0x5e1f900
	void *4330fca671(); // Function GameplayAbilities.AbilitySystemComponent.*4330fca671 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6fb035c
	void *b4c9b348a3(struct F*488da1e323 Param0, struct F*7a56532c22 Param1); // Function GameplayAbilities.AbilitySystemComponent.*b4c9b348a3 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6fafc04
	void AbilityAbilityKey__DelegateSignature(int32 InputID); // DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x370fbc
	void *a432d2d4a2(); // Function GameplayAbilities.AbilitySystemComponent.*a432d2d4a2 // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6faffdc
	void *0a86bb1fc6(struct FGameplayTagContainer Tags, int32 ReturnValue); // Function GameplayAbilities.AbilitySystemComponent.*0a86bb1fc6 // Final|Native|Public|BlueprintCallable // @ game+0x6fb5d3c
	void *b9b95a2b9c(struct F*488da1e323 Param0); // Function GameplayAbilities.AbilitySystemComponent.*b9b95a2b9c // Net|NetReliableNative|Event|Protected|NetClient // @ game+0x6fafebc
	struct F*7a56532c22 NetMulticast_InvokeGameplayCueExecuted_FromSpec(); // Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec // Net|Native|Event|NetMulticast|Public // @ game+0x6fb3b34
	struct UDataTable* *19ec468815(); // Function GameplayAbilities.AbilitySystemComponent.*19ec468815 // Final|Native|Public|BlueprintCallable // @ game+0x6fb280c
	struct F*7a56532c22 *1c0468b989(); // Function GameplayAbilities.AbilitySystemComponent.*1c0468b989 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fb77c8
	struct F*7a56532c22 *5a7a540d43(); // Function GameplayAbilities.AbilitySystemComponent.*5a7a540d43 // Net|NetReliableNative|Event|Public|NetClient // @ game+0x6fb020c
	struct F*7a56532c22 *4de7ac1ff6(struct F*b1f6324a11 Param2); // Function GameplayAbilities.AbilitySystemComponent.*4de7ac1ff6 // Net|Native|Event|NetMulticast|Public // @ game+0x6fb3e28
	void *99bf4c9c24(); // Function GameplayAbilities.AbilitySystemComponent.*99bf4c9c24 // Final|Native|Public|HasOutParms|BlueprintCallable|Const // @ game+0x6fb12b0
	struct F*6b5f4136eb *4077454fe8(); // Function GameplayAbilities.AbilitySystemComponent.*4077454fe8 // Net|NetReliableNative|Event|Protected|NetServer|NetValidate // @ game+0x6fb64d8
	void OnRep_ServerDebugString(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString // Native|Public // @ game+0x5e34f18
	struct F*f2f9f39c48 *f2f9f39c48(); // Function GameplayAbilities.AbilitySystemComponent.*f2f9f39c48 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fb63a8
	struct TArray<struct F*c3cafe0f98> *3139462a48(); // Function GameplayAbilities.AbilitySystemComponent.*3139462a48 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6fb1408
	struct F*7a56532c22 *e1865036a4(); // Function GameplayAbilities.AbilitySystemComponent.*e1865036a4 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fb7608
	void *9c3cf530f7(); // Function GameplayAbilities.AbilitySystemComponent.*9c3cf530f7 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fb6c20
	struct FGameplayTag *c1545a0d44(struct F*7a56532c22 Param4); // Function GameplayAbilities.AbilitySystemComponent.*c1545a0d44 // Net|NetReliableNative|Event|Public|NetServer|NetValidate // @ game+0x6fb7354
	void OnRep_OwningActor(); // Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor // Final|Native|Public // @ game+0x6fb57ec
};

// Class GameplayAbilities.AbilityTask
// Size: 0x88 (Inherited: 0x70)
struct UAbilityTask : UGameplayTask {
	struct UGameplayAbility* Ability; // 0x70(0x08)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class GameplayAbilities.AttributeSet
// Size: 0x38 (Inherited: 0x30)
struct UAttributeSet : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class GameplayAbilities.*4b1d17cc1b
// Size: 0x40 (Inherited: 0x30)
struct U*4b1d17cc1b : UObject {
	struct TArray<struct F*9865947c9e> RelevantAttributesToCapture; // 0x30(0x10)
};

// Class GameplayAbilities.*54f5c5e5ea
// Size: 0x48 (Inherited: 0x40)
struct U*54f5c5e5ea : U*4b1d17cc1b {
	bool bRequiresPassedInTags; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void Execute(struct F*82d9967079 ExecutionParams, struct F*fd99a7d3bb OutExecutionOutput); // Function GameplayAbilities.*54f5c5e5ea.Execute // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x6fb0ae8
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x580 (Inherited: 0x30)
struct UGameplayAbility : UObject {
	char pad_30[0x240]; // 0x30(0x240)
	struct FGameplayTagContainer *0b60342393; // 0x270(0x20)
	bool *4b123d7cc4; // 0x290(0x01)
	bool *92f4f5518b; // 0x291(0x01)
	char pad_292[0x4]; // 0x292(0x04)
	enum class *8808ad2c04 *e265a6cae4; // 0x296(0x01)
	enum class *e9bca40f1c *9c9313ea29; // 0x297(0x01)
	bool *2298282624; // 0x298(0x01)
	bool *3075f8d415; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	struct F*6b5f4136eb CurrentActivationInfo; // 0x2a0(0x20)
	struct F*a2f2c750be CurrentEventData; // 0x2c0(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy *3fe6e244e5; // 0x370(0x01)
	enum class EGameplayAbilityNetSecurityPolicy *8840946464; // 0x371(0x01)
	char pad_372[0x6]; // 0x372(0x06)
	struct UClass* *b31859a4c6; // 0x378(0x08)
	struct TArray<struct F*8a876f8a0d> *fb5f88b31a; // 0x380(0x10)
	struct UClass* *f384eb26bd; // 0x390(0x08)
	struct FGameplayTagContainer *6a968bcfb7; // 0x398(0x20)
	struct FGameplayTagContainer *1fe819974a; // 0x3b8(0x20)
	struct FGameplayTagContainer *4c6b6c0945; // 0x3d8(0x20)
	struct FGameplayTagContainer *99d5f2db64; // 0x3f8(0x20)
	struct FGameplayTagContainer *243d2f281c; // 0x418(0x20)
	struct FGameplayTagContainer *b4e81e97a5; // 0x438(0x20)
	struct FGameplayTagContainer *ab14392e34; // 0x458(0x20)
	struct FGameplayTagContainer *a1fbf01630; // 0x478(0x20)
	struct FGameplayTagContainer *fa5de4c18a; // 0x498(0x20)
	char pad_4B8[0x20]; // 0x4b8(0x20)
	struct TArray<struct UGameplayTask*> *1b361b84a5; // 0x4d8(0x10)
	char pad_4E8[0x10]; // 0x4e8(0x10)
	struct UAnimMontage* *f9c064e9f1; // 0x4f8(0x08)
	char pad_500[0x60]; // 0x500(0x60)
	bool *37789dceb0; // 0x560(0x01)
	bool *359dece568; // 0x561(0x01)
	bool *0796c191eb; // 0x562(0x01)
	bool *297a873657; // 0x563(0x01)
	char pad_564[0x14]; // 0x564(0x14)
	bool bMarkPendingKillOnAbilityEnd; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)

	void *8c0031ad6b(); // Function GameplayAbilities.GameplayAbility.*8c0031ad6b // Final|Native|Public|BlueprintCallable // @ game+0x6fb2314
	struct FName *89200a133f(); // Function GameplayAbilities.GameplayAbility.*89200a133f // Final|Native|Protected|BlueprintCallable // @ game+0x6fb2f90
	struct F*5cf9f8565c *2ad56ef9b1(); // Function GameplayAbilities.GameplayAbility.*2ad56ef9b1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb2a18
	bool *08a92c381f(); // Function GameplayAbilities.GameplayAbility.*08a92c381f // Native|Public|BlueprintCallable // @ game+0x6fb7e8c
	struct F*1734f92018 *aa6a8af046(); // Function GameplayAbilities.GameplayAbility.*aa6a8af046 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1a0c
	float GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb16f8
	bool K2_CanActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // Event|Protected|HasOutParms|BlueprintEvent|Const // @ game+0x370fbc
	bool *39f97973e4(); // Function GameplayAbilities.GameplayAbility.*39f97973e4 // Native|Public|BlueprintCallable // @ game+0x5e3d9ac
	struct UObject* *356a35bef3(); // Function GameplayAbilities.GameplayAbility.*356a35bef3 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1b38
	void *546f4ef9e2(bool ReturnValue); // Function GameplayAbilities.GameplayAbility.*546f4ef9e2 // Native|Public|BlueprintCallable // @ game+0x6fb2384
	void GetAbilityLevel(int32 ReturnValue); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb114c
	void *2b336c6c12(); // Function GameplayAbilities.GameplayAbility.*2b336c6c12 // Final|Native|Protected|BlueprintCallable // @ game+0x6faf03c
	void *5dac1f72d3(struct UClass* GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks); // Function GameplayAbilities.GameplayAbility.*5dac1f72d3 // Final|Native|Protected|BlueprintCallable // @ game+0x6faee20
	void *3b065b6ee9(); // Function GameplayAbilities.GameplayAbility.*3b065b6ee9 // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x6fb26c0
	void *73a85cc4b9(float OverrideBlendOutTime); // Function GameplayAbilities.GameplayAbility.*73a85cc4b9 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb3088
	void *de3aaf11c4(struct USkeletalMeshComponent* ReturnValue); // Function GameplayAbilities.GameplayAbility.*de3aaf11c4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1b14
	void *edb7b793cc(); // Function GameplayAbilities.GameplayAbility.*edb7b793cc // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1170
	void *987e4d7778(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.*987e4d7778 // Final|Native|Protected|BlueprintCallable // @ game+0x6fafa94
	void *8e737cf1b9(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.*8e737cf1b9 // Native|Protected|BlueprintCallable // @ game+0x6fb2570
	void *70d061b472(); // Function GameplayAbilities.GameplayAbility.*70d061b472 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb128c
	struct F*1734f92018 *7dd14bb20f(); // Function GameplayAbilities.GameplayAbility.*7dd14bb20f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb15ac
	bool *f1da960198(); // Function GameplayAbilities.GameplayAbility.*f1da960198 // Native|Public|BlueprintCallable // @ game+0x6fb23d4
	int32 *621c46f094(); // Function GameplayAbilities.GameplayAbility.*621c46f094 // Final|Native|Protected|BlueprintCallable // @ game+0x6faf2a4
	int32 *f9ae446f7d(); // Function GameplayAbilities.GameplayAbility.*f9ae446f7d // Final|Native|Protected|BlueprintCallable // @ game+0x6faf170
	bool *36beb983f5(); // Function GameplayAbilities.GameplayAbility.*36beb983f5 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6fb27f0
	struct F*350e812946 *e5d7bc256b(); // Function GameplayAbilities.GameplayAbility.*e5d7bc256b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1554
	struct UObject* *ad822c8900(); // Function GameplayAbilities.GameplayAbility.*ad822c8900 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1758
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // Event|Protected|BlueprintEvent // @ game+0x370fbc
	bool *2ecd8322f8(); // Function GameplayAbilities.GameplayAbility.*2ecd8322f8 // Native|Public|BlueprintCallable // @ game+0x6fb7df4
	struct F*c3cafe0f98 *8168c296b5(); // Function GameplayAbilities.GameplayAbility.*8168c296b5 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb2038
	struct UAnimMontage* *109287e492(); // Function GameplayAbilities.GameplayAbility.*109287e492 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1740
	struct F*c3cafe0f98 *9e38704424(); // Function GameplayAbilities.GameplayAbility.*9e38704424 // Final|Native|Protected|BlueprintCallable // @ game+0x6fae954
	void K2_OnEndAbility(bool bWasCancelled); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void *a2c4c9b4ae(); // Function GameplayAbilities.GameplayAbility.*a2c4c9b4ae // Final|Native|Public|BlueprintCallable|Const // @ game+0x6fb1c54
	void *8fdfcdb3be(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.*8fdfcdb3be // Native|Protected|BlueprintCallable // @ game+0x6fb1d30
	void *4b52feb6ae(); // Function GameplayAbilities.GameplayAbility.*4b52feb6ae // Final|Native|Protected|BlueprintCallable // @ game+0x6fb2ee8
	void *e4a2c8bbfe(struct F*5cf9f8565c EffectSpecHandle, struct F*473cd9e976 TargetData); // Function GameplayAbilities.GameplayAbility.*e4a2c8bbfe // Final|Native|Protected|BlueprintCallable // @ game+0x6fb213c
	void *3a91c6d12d(); // Function GameplayAbilities.GameplayAbility.*3a91c6d12d // Native|Protected|BlueprintCallable // @ game+0x6fb6260
	void *56e97b38e7(struct FName SocketName, struct F*a4827abec5 ReturnValue); // Function GameplayAbilities.GameplayAbility.*56e97b38e7 // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x6fb2de8
	void *913e8f9fe1(); // Function GameplayAbilities.GameplayAbility.*913e8f9fe1 // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x6fb2d58
	void *2b34d09a81(); // Function GameplayAbilities.GameplayAbility.*2b34d09a81 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb09b8
	void *1e83314f3b(); // Function GameplayAbilities.GameplayAbility.*1e83314f3b // Native|Public|BlueprintCallable // @ game+0x5e425b4
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // Event|Public|BlueprintEvent // @ game+0x370fbc
	void *411c7e64b7(struct FGameplayTag GameplayCueTag, struct F*b1f6324a11 GameplayCueParameter); // Function GameplayAbilities.GameplayAbility.*411c7e64b7 // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x6fb1ec0
	void *a3060561e4(); // Function GameplayAbilities.GameplayAbility.*a3060561e4 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb0a58
	bool *5e3b02fdbb(); // Function GameplayAbilities.GameplayAbility.*5e3b02fdbb // Native|Public|BlueprintCallable // @ game+0x6fb23ac
	bool *3c5cc3769a(); // Function GameplayAbilities.GameplayAbility.*3c5cc3769a // Final|Native|Public|BlueprintCallable|Const // @ game+0x6fb1d0c
	struct F*a2f2c750be K2_ActivateAbilityFromEvent(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x370fbc
	struct AActor* *df3ee0848d(); // Function GameplayAbilities.GameplayAbility.*df3ee0848d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1588
	void *cc3a476767(); // Function GameplayAbilities.GameplayAbility.*cc3a476767 // Native|Protected|BlueprintCallable // @ game+0x5e420b8
	bool K2_ShouldAbilityRespondToEvent(); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // Event|Protected|BlueprintEvent|Const // @ game+0x370fbc
	struct FGameplayTag *4490e17742(); // Function GameplayAbilities.GameplayAbility.*4490e17742 // Native|Protected|BlueprintCallable // @ game+0x6fb28e8
	struct AActor* *4b4d0526f7(); // Function GameplayAbilities.GameplayAbility.*4b4d0526f7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1af0
	bool *f98832fc73(); // Function GameplayAbilities.GameplayAbility.*f98832fc73 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb03f0
	bool *a7b71e279f(); // Function GameplayAbilities.GameplayAbility.*a7b71e279f // Native|Public|BlueprintCallable // @ game+0x6fb24c8
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x880 (Inherited: 0x30)
struct UGameplayEffect : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EGameplayEffectDurationType *862e176a02; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FGameplayEffectModifierMagnitude *39ad3c48be; // 0x40(0x200)
	struct FScalableFloat Period; // 0x240(0x30)
	bool bExecutePeriodicEffectOnApplication; // 0x270(0x01)
	enum class *1cdab040fe PeriodicInhibitionPolicy; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct TArray<struct F*99fdd28db6> Modifiers; // 0x278(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x288(0x10)
	struct FScalableFloat *71a09d99bb; // 0x298(0x30)
	struct TArray<struct UClass*> *e2a98ce54b; // 0x2c8(0x10)
	struct TArray<struct UClass*> TargetEffectClasses; // 0x2d8(0x10)
	struct TArray<struct F*fc501160eb> ConditionalGameplayEffects; // 0x2e8(0x10)
	struct TArray<struct UClass*> OverflowEffects; // 0x2f8(0x10)
	bool bDenyOverflowApplication; // 0x308(0x01)
	bool bClearStackOnOverflow; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct TArray<struct UClass*> PrematureExpirationEffectClasses; // 0x310(0x10)
	struct TArray<struct UClass*> RoutineExpirationEffectClasses; // 0x320(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x330(0x01)
	bool *a25f5e330c; // 0x331(0x01)
	char pad_332[0x6]; // 0x332(0x06)
	struct TArray<struct F*2d621db336> GameplayCues; // 0x338(0x10)
	struct UGameplayEffectUIData* UIData; // 0x348(0x08)
	struct F*b39f17e9ff InheritableGameplayEffectTags; // 0x350(0x60)
	struct F*b39f17e9ff InheritableOwnedTagsContainer; // 0x3b0(0x60)
	struct F*db129c0b81 OngoingTagRequirements; // 0x410(0x40)
	struct F*db129c0b81 ApplicationTagRequirements; // 0x450(0x40)
	struct F*db129c0b81 RemovalTagRequirements; // 0x490(0x40)
	struct F*b39f17e9ff RemoveGameplayEffectsWithTags; // 0x4d0(0x60)
	struct F*db129c0b81 GrantedApplicationImmunityTags; // 0x530(0x40)
	struct F*cf29ee6019 GrantedApplicationImmunityQuery; // 0x570(0x170)
	char pad_6E0[0x10]; // 0x6e0(0x10)
	struct F*cf29ee6019 RemoveGameplayEffectQuery; // 0x6f0(0x170)
	char pad_860[0x1]; // 0x860(0x01)
	enum class EGameplayEffectStackingType StackingType; // 0x861(0x01)
	char pad_862[0x2]; // 0x862(0x02)
	int32 StackLimitCount; // 0x864(0x04)
	enum class *7c7ea2d7a5 StackDurationRefreshPolicy; // 0x868(0x01)
	enum class *e264cb211b StackPeriodResetPolicy; // 0x869(0x01)
	enum class *0ce34511ae StackExpirationPolicy; // 0x86a(0x01)
	char pad_86B[0x5]; // 0x86b(0x05)
	struct TArray<struct F*e111967977> GrantedAbilities; // 0x870(0x10)
};

// Class GameplayAbilities.*445b7f9bc5
// Size: 0x38 (Inherited: 0x30)
struct U*445b7f9bc5 : U*6bfc7814f8 {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class GameplayAbilities.*faabc75805
// Size: 0xf8 (Inherited: 0x38)
struct U*faabc75805 : U*445b7f9bc5 {
	struct FMulticastDelegate OnApplied; // 0x38(0x10)
	char pad_48[0xb0]; // 0x48(0xb0)

	struct F*c3cafe0f98 OnAppliedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*faabc75805.OnAppliedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x370fbc
	struct U*faabc75805* *3062ed6917(); // Function GameplayAbilities.*faabc75805.*3062ed6917 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f40658
};

// Class GameplayAbilities.*ff992b936d
// Size: 0x60 (Inherited: 0x38)
struct U*ff992b936d : U*445b7f9bc5 {
	struct FMulticastDelegate EventReceived; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	void EventReceivedDelegate__DelegateSignature(); // DelegateFunction GameplayAbilities.*ff992b936d.EventReceivedDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x370fbc
	void *b9aba4fba8(struct AActor* TargetActor, struct FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // Function GameplayAbilities.*ff992b936d.*b9aba4fba8 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f40a10
};

// Class GameplayAbilities.*a990041f24
// Size: 0x58 (Inherited: 0x38)
struct U*a990041f24 : U*445b7f9bc5 {
	char pad_38[0x20]; // 0x38(0x20)
};

// Class GameplayAbilities.*1c9d55d59a
// Size: 0x68 (Inherited: 0x58)
struct U*1c9d55d59a : U*a990041f24 {
	struct FMulticastDelegate Added; // 0x58(0x10)

	void *9ca1cf6293(struct AActor* TargetActor, struct FGameplayTag Tag, bool OnlyTriggerOnce, struct U*1c9d55d59a* ReturnValue); // Function GameplayAbilities.*1c9d55d59a.*9ca1cf6293 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f40b8c
};

// Class GameplayAbilities.*6b16e5842d
// Size: 0x68 (Inherited: 0x58)
struct U*6b16e5842d : U*a990041f24 {
	struct FMulticastDelegate Removed; // 0x58(0x10)

	void *10df2ec0e6(struct AActor* TargetActor, struct FGameplayTag Tag); // Function GameplayAbilities.*6b16e5842d.*10df2ec0e6 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6f40cac
};

// Class GameplayAbilities.*d1209786b0
// Size: 0x30 (Inherited: 0x30)
struct U*d1209786b0 : UInterface {
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAbilitySystemBlueprintLibrary : UBlueprintFunctionLibrary {
};

// Class GameplayAbilities.*56f4ae942d
// Size: 0x30 (Inherited: 0x30)
struct U*56f4ae942d : UInterface {
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x4e0 (Inherited: 0x4e0)
struct AAbilitySystemDebugHUD : AHUD {
	struct APlayerController* PlayerOwner; // 0x3f8(0x08)
	char bLostFocusPaused : 1; // 0x400(0x01)
	char bShowHUD : 1; // 0x400(0x01)
	char bShowDebugInfo : 1; // 0x400(0x01)
	char bShowHitBoxDebugInfo : 1; // 0x400(0x01)
	char bShowOverlays : 1; // 0x400(0x01)
	char bEnableDebugTextShadow : 1; // 0x400(0x01)
	struct TArray<struct AActor*> *38b709293a; // 0x408(0x10)
	struct TArray<struct FName> DebugDisplay; // 0x420(0x10)
	struct TArray<struct FName> ToggledDebugCategories; // 0x430(0x10)
	struct UCanvas* Canvas; // 0x440(0x08)
	struct UCanvas* *f5943f676e; // 0x448(0x08)
	struct TArray<struct F*ed6dead525> *f79181af34; // 0x450(0x10)
	struct UClass* *6e615585cd; // 0x460(0x08)
	struct AActor* *fcbd63a8dd; // 0x468(0x08)

	void DrawTexture(float ScreenH, float TextureU, float TextureV, float TextureUWidth, bool bScalePosition, float Rotation, struct FVector2D RotPivot); // Function Engine.HUD.DrawTexture // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6baf7a4
	void ReceiveHitBoxEndCursorOver(); // Function Engine.HUD.ReceiveHitBoxEndCursorOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	bool *62432812ee(float Param2, struct FVector Param3, struct FVector Param4, struct FColor Param5); // Function Engine.HUD.*62432812ee // Final|Net|NetReliableNative|Event|Public|HasDefaults|NetClient // @ game+0x6ba85fc
	struct APawn* *34fff8859f(); // Function Engine.HUD.*34fff8859f // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb5b70
	struct FName ReceiveHitBoxClick(); // Function Engine.HUD.ReceiveHitBoxClick // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	struct FName ShowDebug(); // Function Engine.HUD.ShowDebug // Exec|Native|Public // @ game+0x6bc952c
	bool *f44a827629(); // Function Engine.HUD.*f44a827629 // Final|Native|Public|BlueprintCallable // @ game+0x6bafcb4
	struct FVector Deproject(); // Function Engine.HUD.Deproject // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6badf80
	struct FName ReceiveHitBoxRelease(); // Function Engine.HUD.ReceiveHitBoxRelease // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	bool *0779b85564(); // Function Engine.HUD.*0779b85564 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6baf4ec
	void ShowHUD(); // Function Engine.HUD.ShowHUD // Exec|Native|Public // @ game+0x5da6fac
	int32 ReceiveDrawHUD(int32 SizeY); // Function Engine.HUD.ReceiveDrawHUD // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	void *f76c6f11ba(struct APlayerController* ReturnValue); // Function Engine.HUD.*f76c6f11ba // Final|Native|Protected|BlueprintCallable|BlueprintPure|Const // @ game+0x5e7c26c
	void AddHitBox(int32 Priority); // Function Engine.HUD.AddHitBox // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6ba8eec
	void ShowDebugToggleSubCategory(struct FName Param0); // Function Engine.HUD.ShowDebugToggleSubCategory // Final|Exec|Native|Public // @ game+0x6bc9668
	void ShowDebugForReticleTargetToggle(); // Function Engine.HUD.ShowDebugForReticleTargetToggle // Final|Exec|Native|Public // @ game+0x6bc95c0
	void *c08cd3997f(float ScreenY, float ScreenW, float ScreenH, float Scale); // Function Engine.HUD.*c08cd3997f // Final|Native|Public|BlueprintCallable // @ game+0x6baed28
	struct FVector2D *9b849b7b63(float ScreenY, float ScreenW, float ScreenH, float MaterialU); // Function Engine.HUD.*9b849b7b63 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bae8c0
	struct FLinearColor *8452ca1193(); // Function Engine.HUD.*8452ca1193 // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6baefa0
	float *cfe6b2110e(); // Function Engine.HUD.*cfe6b2110e // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6bae694
	bool *957a89d132(); // Function Engine.HUD.*957a89d132 // Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure // @ game+0x6bb0ea4
	float *c2fb95ac2b(float ScreenY, float ScreenW, float ScreenH); // Function Engine.HUD.*c2fb95ac2b // Final|Native|Public|HasDefaults|BlueprintCallable // @ game+0x6baf310
	void *50b363f367(); // Function Engine.HUD.*50b363f367 // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x6bbf3c0
	void *6ae72bf9b6(float OutWidth, float OutHeight, struct UFont* Font, float Scale); // Function Engine.HUD.*6ae72bf9b6 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6bb6964
	void Project(); // Function Engine.HUD.Project // Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const // @ game+0x6bbef64
	void ReceiveHitBoxBeginCursorOver(struct FName BoxName); // Function Engine.HUD.ReceiveHitBoxBeginCursorOver // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x370fbc
	void *82ab454e02(); // Function Engine.HUD.*82ab454e02 // Final|Net|NetReliableNative|Event|Public|NetClient // @ game+0x6bbf20c
};

// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x340 (Inherited: 0x30)
struct UAbilitySystemGlobals : UObject {
	struct FStringClassReference AbilitySystemGlobalsClassName; // 0x30(0x10)
	char pad_40[0x80]; // 0x40(0x80)
	struct FGameplayTag *0c72694b46; // 0xc0(0x08)
	struct FName ActivateFailIsDeadName; // 0xc8(0x08)
	struct FGameplayTag *20047af935; // 0xd0(0x08)
	struct FName ActivateFailCooldownName; // 0xd8(0x08)
	struct FGameplayTag *ff488e8c69; // 0xe0(0x08)
	struct FName ActivateFailCostName; // 0xe8(0x08)
	struct FGameplayTag *7efe7eb091; // 0xf0(0x08)
	struct FName ActivateFailTagsBlockedName; // 0xf8(0x08)
	struct FGameplayTag *a282a9b706; // 0x100(0x08)
	struct FName ActivateFailTagsMissingName; // 0x108(0x08)
	struct FGameplayTag *5ddbebcb86; // 0x110(0x08)
	struct FName ActivateFailNetworkingName; // 0x118(0x08)
	int32 MinimalReplicationTagCountBits; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct F*9c3711ab7d *0a04ffbeb3; // 0x128(0x10)
	bool bAllowGameplayModEvaluationChannels; // 0x138(0x01)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct FName GameplayModEvaluationChannelAliases[0x0a]; // 0x140(0x50)
	struct FStringAssetReference GlobalCurveTableName; // 0x190(0x10)
	struct UCurveTable* *e31f678739; // 0x1a0(0x08)
	struct FStringAssetReference GlobalAttributeMetaDataTableName; // 0x1a8(0x10)
	struct UDataTable* *0d3800eac3; // 0x1b8(0x08)
	struct FStringAssetReference GlobalAttributeSetDefaultsTableName; // 0x1c0(0x10)
	struct TArray<struct FStringAssetReference> GlobalAttributeSetDefaultsTableNames; // 0x1d0(0x10)
	struct TArray<struct UCurveTable*> *410f40b66b; // 0x1e0(0x10)
	struct FStringAssetReference GlobalGameplayCueManagerClass; // 0x1f0(0x10)
	struct FStringAssetReference GlobalGameplayCueManagerName; // 0x200(0x10)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x210(0x10)
	struct FStringAssetReference GameplayTagResponseTableName; // 0x220(0x10)
	struct U*f1f5d32376* *8ce5fe8235; // 0x230(0x08)
	bool PredictTargetGameplayEffects; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UGameplayCueManager* *bf80143df9; // 0x240(0x08)
	char pad_248[0xf8]; // 0x248(0xf8)

	void ToggleIgnoreAbilitySystemCooldowns(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns // Exec|Native|Public // @ game+0x5e4d4cc
	struct FString ServerActivatePlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility // Final|Exec|Native|Public // @ game+0x5dc28d0
	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // Exec|Native|Public // @ game+0xbed704
	void ListPlayerAbilities(); // Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities // Final|Exec|Native|Public // @ game+0xd5fc94
	struct FString ServerEndPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility // Final|Exec|Native|Public // @ game+0x5dc28d0
	struct FString ServerCancelPlayerAbility(); // Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility // Final|Exec|Native|Public // @ game+0x5dc28d0
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x4a0 (Inherited: 0x480)
struct AAbilitySystemTestPawn : ADefaultPawn {
	char pad_480[0x18]; // 0x480(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x498(0x08)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_ApplyRootMotion_Base : UAbilityTask {
	struct FName *61164d044d; // 0x88(0x08)
	enum class *46b4b581d7 *d59f178692; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector *e5f1645a49; // 0x94(0x0c)
	float *569b612a00; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UCharacterMovementComponent* MovementComponent; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0xf8 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionConstantForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xc0(0x10)
	struct FVector WorldDirection; // 0xd0(0x0c)
	float Strength; // 0xdc(0x04)
	float Duration; // 0xe0(0x04)
	bool *3a28036993; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct UCurveFloat* *49d8d8c542; // 0xe8(0x08)
	bool *b1a13a5b34; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	struct UCurveFloat* *3006d62919(enum class *46b4b581d7 VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.*3006d62919 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fac82c
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x118 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionJumpForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xc0(0x10)
	struct FMulticastDelegate OnLanded; // 0xd0(0x10)
	struct FRotator Rotation; // 0xe0(0x0c)
	float Distance; // 0xec(0x04)
	float Height; // 0xf0(0x04)
	float Duration; // 0xf4(0x04)
	float *22302b2057; // 0xf8(0x04)
	bool *f1d7167081; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct U*e6746d9844* *865de25d47; // 0x100(0x08)
	struct UCurveFloat* *6b1726fb3b; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)

	struct UAbilityTask_ApplyRootMotionJumpForce* *efba45ae3d(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.*efba45ae3d // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6facbfc
	void Finish(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish // Final|Native|Public|BlueprintCallable // @ game+0x6fb0d24
	struct FHitResult OnLandedCallback(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // Final|Native|Public|HasOutParms // @ game+0x6fb50cc
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x138 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionMoveToActorForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinished; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector TargetLocation; // 0xe4(0x0c)
	struct AActor* TargetActor; // 0xf0(0x08)
	struct FVector *f2cb6ad8a1; // 0xf8(0x0c)
	enum class *d3329524d8 *ae0935ada1; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float Duration; // 0x108(0x04)
	bool *a9bce0e762; // 0x10c(0x01)
	bool *f6e5ead421; // 0x10d(0x01)
	enum class EMovementMode *2b211e7ee5; // 0x10e(0x01)
	bool *636ae39ed3; // 0x10f(0x01)
	struct U*e6746d9844* *865de25d47; // 0x110(0x08)
	struct UCurveFloat* *6b1726fb3b; // 0x118(0x08)
	struct UCurveFloat* *bc0f3b6e77; // 0x120(0x08)
	struct UCurveFloat* *c35d4d75d1; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)

	struct AActor* *47db8d6640(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*47db8d6640 // Final|Native|Public // @ game+0x6fb5850
	void OnRep_TargetLocation(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation // Final|Native|Protected // @ game+0x6fb5818
	struct UAbilityTask_ApplyRootMotionMoveToActorForce* *ad9252f5cd(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*ad9252f5cd // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fad9f0
	void *a1b4f952ac(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct AActor* TargetActor, struct FVector TargetLocationOffset, struct UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt, struct UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.*a1b4f952ac // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fad070
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x110 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionMoveToForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnTimedOut; // 0xc0(0x10)
	struct FMulticastDelegate OnTimedOutAndDestinationReached; // 0xd0(0x10)
	struct FVector StartLocation; // 0xe0(0x0c)
	struct FVector TargetLocation; // 0xec(0x0c)
	float Duration; // 0xf8(0x04)
	bool *f6e5ead421; // 0xfc(0x01)
	enum class EMovementMode *2b211e7ee5; // 0xfd(0x01)
	bool *636ae39ed3; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
	struct U*e6746d9844* *865de25d47; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	void *86d3234b63(struct FName TaskInstanceName, struct FVector TargetLocation, float Duration, bool bSetNewMovementMode, enum class *46b4b581d7 VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish, struct UAbilityTask_ApplyRootMotionMoveToForce* ReturnValue); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.*86d3234b63 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fad624
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x118 (Inherited: 0xc0)
struct UAbilityTask_ApplyRootMotionRadialForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastDelegate OnFinish; // 0xc0(0x10)
	struct FVector Location; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct AActor* *e492e33ada; // 0xe0(0x08)
	float Strength; // 0xe8(0x04)
	float Duration; // 0xec(0x04)
	float Radius; // 0xf0(0x04)
	bool *e9045a51f0; // 0xf4(0x01)
	bool *3a28036993; // 0xf5(0x01)
	bool *6a5a99bcd6; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct UCurveFloat* *d9fe9d7897; // 0xf8(0x08)
	struct UCurveFloat* *49d8d8c542; // 0x100(0x08)
	bool *f5aa61c72b; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FRotator *2deaa68673; // 0x10c(0x0c)

	struct UAbilityTask_ApplyRootMotionRadialForce* *a74ab3cdeb(); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.*a74ab3cdeb // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fae098
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_MoveToLocation : UAbilityTask {
	struct FMulticastDelegate OnTargetLocationReached; // 0x88(0x10)
	char pad_98[0x4]; // 0x98(0x04)
	struct FVector StartLocation; // 0x9c(0x0c)
	struct FVector TargetLocation; // 0xa8(0x0c)
	float *eb5bd841db; // 0xb4(0x04)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UCurveFloat* *005108b6d9; // 0xc0(0x08)
	struct U*e6746d9844* *ea1f7e206d; // 0xc8(0x08)

	void *951164f513(float Duration, struct UCurveFloat* OptionalInterpolationCurve, struct U*e6746d9844* OptionalVectorInterpolationCurve, struct UAbilityTask_MoveToLocation* ReturnValue); // Function GameplayAbilities.AbilityTask_MoveToLocation.*951164f513 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fb3120
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_NetworkSyncPoint : UAbilityTask {
	struct FMulticastDelegate OnSync; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void *38ccf43132(struct UGameplayAbility* OwningAbility, enum class *c24e437120 SyncType); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*38ccf43132 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fbbc74
	void *617a1f566c(); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.*617a1f566c // Final|Native|Public // @ game+0x6fb583c
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x180 (Inherited: 0x88)
struct UAbilityTask_PlayMontageAndWait : UAbilityTask {
	struct FMulticastDelegate OnCompleted; // 0x88(0x10)
	struct FMulticastDelegate OnBlendOut; // 0x98(0x10)
	struct FMulticastDelegate OnInterrupted; // 0xa8(0x10)
	struct FMulticastDelegate OnCancelled; // 0xb8(0x10)
	char pad_C8[0x90]; // 0xc8(0x90)
	struct UAnimMontage* *ed2a21fc40; // 0x158(0x08)
	float Rate; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FName *f06ac34cad; // 0x168(0x08)
	float *e4eda111d4; // 0x170(0x04)
	float *64a5c9cbf2; // 0x174(0x04)
	bool *04f34c18d5; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)

	bool OnMontageEnded(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded // Final|Native|Public // @ game+0x6fb52ac
	bool *bffdb6533f(float AnimRootMotionTranslationScale, float StartTimeSeconds, struct UAbilityTask_PlayMontageAndWait* ReturnValue); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*bffdb6533f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb04d0
	void *b81142b155(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*b81142b155 // Final|Native|Public // @ game+0x6fb538c
	void *27183e6f1a(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.*27183e6f1a // Final|Native|Public // @ game+0x6fb51cc
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_Repeat : UAbilityTask {
	struct FMulticastDelegate OnPerformAction; // 0x88(0x10)
	struct FMulticastDelegate OnFinished; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_Repeat* RepeatAction(); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb613c
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xd0 (Inherited: 0x88)
struct UAbilityTask_SpawnActor : UAbilityTask {
	struct FMulticastDelegate SUCCESS; // 0x88(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x98(0x10)
	char pad_A8[0x28]; // 0xa8(0x28)

	void FinishSpawningActor(struct F*473cd9e976 TargetData, struct AActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x6fb0d38
	void SpawnActor(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb7fbc
	bool BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6faf3a8
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_StartAbilityState : UAbilityTask {
	struct FMulticastDelegate OnStateEnded; // 0x88(0x10)
	struct FMulticastDelegate OnStateInterrupted; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	void *6d5aaa9ed5(struct UGameplayAbility* OwningAbility, struct FName StateName, bool bEndCurrentState, struct UAbilityTask_StartAbilityState* ReturnValue); // Function GameplayAbilities.AbilityTask_StartAbilityState.*6d5aaa9ed5 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb8170
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x418 (Inherited: 0x3f8)
struct AGameplayAbilityWorldReticle : AActor {
	struct F*86d5f30aa7 Parameters; // 0x3f8(0x0c)
	bool bFaceOwnerFlat; // 0x404(0x01)
	bool bSnapToTargetedActor; // 0x405(0x01)
	bool bIsTargetValid; // 0x406(0x01)
	bool bIsTargetAnActor; // 0x407(0x01)
	struct APlayerController* MasterPC; // 0x408(0x08)
	struct AActor* TargetingActor; // 0x410(0x08)

	void OnValidTargetChanged(bool bNewValue); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged // Event|Public|BlueprintEvent // @ game+0x370fbc
	void SetReticleMaterialParamFloat(struct FName ParamName); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat // Event|Public|BlueprintEvent // @ game+0x370fbc
	void OnTargetingAnActor(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor // Event|Public|BlueprintEvent // @ game+0x370fbc
	void OnParametersInitialized(); // Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized // Event|Public|BlueprintEvent // @ game+0x370fbc
	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // Event|Public|HasDefaults|BlueprintEvent // @ game+0x370fbc
	void *25173234b2(); // Function GameplayAbilities.GameplayAbilityWorldReticle.*25173234b2 // Final|Native|Public|BlueprintCallable // @ game+0x6fb0c90
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x5c0 (Inherited: 0x3f8)
struct AGameplayAbilityTargetActor : AActor {
	bool *42681e08dc; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct F*a4827abec5 StartLocation; // 0x400(0x70)
	char pad_470[0xe0]; // 0x470(0xe0)
	struct APlayerController* MasterPC; // 0x550(0x08)
	struct UGameplayAbility* OwningAbility; // 0x558(0x08)
	bool bDestroyOnConfirmation; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	struct AActor* SourceActor; // 0x568(0x08)
	struct F*86d5f30aa7 ReticleParams; // 0x570(0x0c)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct UClass* ReticleClass; // 0x580(0x08)
	struct F*4437ddaee9 Filter; // 0x588(0x10)
	bool bDebug; // 0x598(0x01)
	char pad_599[0x17]; // 0x599(0x17)
	struct UAbilitySystemComponent* *120b693414; // 0x5b0(0x08)
	char pad_5B8[0x8]; // 0x5b8(0x08)

	void CancelTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting // Native|Public // @ game+0x5e34238
	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // Native|Public // @ game+0x5e794d4
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_VisualizeTargeting : UAbilityTask {
	struct FMulticastDelegate TimeElapsed; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)

	void BeginSpawningActor(struct UGameplayAbility* OwningAbility, struct UClass* Class, struct AGameplayAbilityTargetActor* SpawnedActor); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6faf588
	void FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x6fb0ebc
	struct UAbilityTask_VisualizeTargeting* *4ecf703cb9(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*4ecf703cb9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb8840
	struct UAbilityTask_VisualizeTargeting* *6809a316ca(); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.*6809a316ca // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb86d0
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x140 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityActivate : UAbilityTask {
	struct FMulticastDelegate OnActivate; // 0x88(0x10)
	char pad_98[0xa8]; // 0x98(0xa8)

	void *90d93ff4a1(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*90d93ff4a1 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb8e4c
	void *5f3cbfec74(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool IncludeTriggeredAbilities); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*5f3cbfec74 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb9050
	void *3736467e46(struct FGameplayTag WithTag, struct FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*3736467e46 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb8c64
	void *bbabe9244b(); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.*bbabe9244b // Final|Native|Public // @ game+0x6fb4440
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0x100 (Inherited: 0x88)
struct UAbilityTask_WaitAbilityCommit : UAbilityTask {
	struct FMulticastDelegate OnCommit; // 0x88(0x10)
	char pad_98[0x68]; // 0x98(0x68)

	struct UAbilityTask_WaitAbilityCommit* *7e6c8afbd9(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*7e6c8afbd9 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb93f4
	struct UGameplayAbility* *de5ad22ebb(); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*de5ad22ebb // Final|Native|Public // @ game+0x6fb44d0
	bool *752c291c8d(struct UAbilityTask_WaitAbilityCommit* ReturnValue); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.*752c291c8d // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb9260
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0xe8 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x48]; // 0x98(0x48)
	struct UAbilitySystemComponent* *42be512506; // 0xe0(0x08)

	struct UAbilityTask_WaitAttributeChange* *b772789060(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*b772789060 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb9d84
	struct UAbilityTask_WaitAttributeChange* *a288003a21(); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.*a288003a21 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb95b0
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x118 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeRatioThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x78]; // 0x98(0x78)
	struct UAbilitySystemComponent* *42be512506; // 0x110(0x08)

	void *4fef83fdbb(struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.*4fef83fdbb // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb9814
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xe0 (Inherited: 0x88)
struct UAbilityTask_WaitAttributeChangeThreshold : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x40]; // 0x98(0x40)
	struct UAbilitySystemComponent* *42be512506; // 0xd8(0x08)

	void *b20361b684(float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner, struct UAbilityTask_WaitAttributeChangeThreshold* ReturnValue); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.*b20361b684 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb9b20
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitCancel : UAbilityTask {
	struct FMulticastDelegate OnCancel; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void *788afd66fe(); // Function GameplayAbilities.AbilityTask_WaitCancel.*788afd66fe // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb89b0
	void *e56d0d15d1(); // Function GameplayAbilities.AbilityTask_WaitCancel.*e56d0d15d1 // Final|Native|Public // @ game+0x6fb4960
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x6fb5190
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitConfirm : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void *b18c2ace1f(struct UGameplayAbility* OwningAbility, struct UAbilityTask_WaitConfirm* ReturnValue); // Function GameplayAbilities.AbilityTask_WaitConfirm.*b18c2ace1f // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb8a44
	void OnConfirmCallback(struct UGameplayAbility* Param0); // Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback // Final|Native|Public // @ game+0x6fb4988
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitConfirmCancel : UAbilityTask {
	struct FMulticastDelegate OnConfirm; // 0x88(0x10)
	struct FMulticastDelegate OnCancel; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)

	void OnConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback // Final|Native|Public // @ game+0x6fb4a18
	struct UAbilityTask_WaitConfirmCancel* *ac4f2a7a22(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*ac4f2a7a22 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb8ad8
	void *e56d0d15d1(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.*e56d0d15d1 // Final|Native|Public // @ game+0x6fb4974
	void OnLocalConfirmCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback // Final|Native|Public // @ game+0x6fb51b8
	void OnLocalCancelCallback(); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback // Final|Native|Public // @ game+0x6fb51a4
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0xa0 (Inherited: 0x88)
struct UAbilityTask_WaitDelay : UAbilityTask {
	struct FMulticastDelegate OnFinish; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	struct UAbilityTask_WaitDelay* WaitDelay(); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb8b6c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1c0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectApplied : UAbilityTask {
	char pad_88[0x128]; // 0x88(0x128)
	struct UAbilitySystemComponent* *42be512506; // 0x1b0(0x08)
	char pad_1B8[0x8]; // 0x1b8(0x08)

	struct F*c3cafe0f98 *321b8b1571(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.*321b8b1571 // Final|Native|Public|HasOutParms // @ game+0x6fb47c0
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1e0 (Inherited: 0x1c0)
struct UAbilityTask_WaitGameplayEffectApplied_Self : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Self* *2b83015bcf(struct UGameplayAbility* OwningAbility, struct F*4437ddaee9 SourceFilter); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*2b83015bcf // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fba710
	struct UAbilityTask_WaitGameplayEffectApplied_Self* *b30c9436fd(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.*b30c9436fd // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fba30c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1e0 (Inherited: 0x1c0)
struct UAbilityTask_WaitGameplayEffectApplied_Target : UAbilityTask_WaitGameplayEffectApplied {
	struct FMulticastDelegate OnApplied; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	void *a51257c268(struct F*4437ddaee9 SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*a51257c268 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fbaec0
	void *48cffae5ee(struct UGameplayAbility* OwningAbility, struct F*4437ddaee9 TargetFilter, struct F*db129c0b81 SourceTagRequirements, struct F*db129c0b81 TargetTagRequirements); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.*48cffae5ee // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fbaabc
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x130 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectBlockedImmunity : UAbilityTask {
	struct FMulticastDelegate bLocked; // 0x88(0x10)
	char pad_98[0x88]; // 0x98(0x88)
	struct UAbilitySystemComponent* *42be512506; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)

	struct UGameplayAbility* *3b90a08963(struct F*db129c0b81 SourceTagRequirements, struct F*db129c0b81 TargetTagRequirements, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.*3b90a08963 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fbb26c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectRemoved : UAbilityTask {
	struct FMulticastDelegate OnRemoved; // 0x88(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)

	struct UAbilityTask_WaitGameplayEffectRemoved* *af89773cac(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*af89773cac // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fba098
	struct F*4751d1de57 *93fd69731c(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.*93fd69731c // Final|Native|Public|HasOutParms // @ game+0x6fb4c8c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xc0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEffectStackChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	struct FMulticastDelegate InvalidHandle; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_WaitGameplayEffectStackChange* *da3fc4866e(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*da3fc4866e // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fba188
	int32 *761ab59196(); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.*761ab59196 // Final|Native|Public // @ game+0x6fb4d8c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xb8 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayEvent : UAbilityTask {
	struct FMulticastDelegate EventReceived; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
	struct UAbilitySystemComponent* *a6a17eb3b5; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)

	struct UAbilityTask_WaitGameplayEvent* *8d11548375(); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.*8d11548375 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fbb56c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitGameplayTag : UAbilityTask {
	char pad_88[0x10]; // 0x88(0x10)
	struct UAbilitySystemComponent* *a6a17eb3b5; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	int32 *5aa7a4315b(); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.*5aa7a4315b // Native|Public // @ game+0x6fb106c
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagAdded : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Added; // 0xb0(0x10)

	void *2bf4da9d04(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.*2bf4da9d04 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fbb774
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xc0 (Inherited: 0xb0)
struct UAbilityTask_WaitGameplayTagRemoved : UAbilityTask_WaitGameplayTag {
	struct FMulticastDelegate Removed; // 0xb0(0x10)

	void *cc833dab10(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.*cc833dab10 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fbb90c
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputPress : UAbilityTask {
	struct FMulticastDelegate OnPress; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void *178f24136d(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitInputPress.*178f24136d // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fbbaa4
	void *8a164aec59(); // Function GameplayAbilities.AbilityTask_WaitInputPress.*8a164aec59 // Final|Native|Public // @ game+0x6fb5564
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitInputRelease : UAbilityTask {
	struct FMulticastDelegate OnRelease; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void *0c19d4adf7(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*0c19d4adf7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fbbb8c
	void *ca2b086114(); // Function GameplayAbilities.AbilityTask_WaitInputRelease.*ca2b086114 // Final|Native|Public // @ game+0x6fb5578
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa8 (Inherited: 0x88)
struct UAbilityTask_WaitMovementModeChange : UAbilityTask {
	struct FMulticastDelegate OnChange; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitMovementModeChange* *5817842072(); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.*5817842072 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fb0790
	void OnMovementModeChange(struct ACharacter* Param0, enum class EMovementMode Param1, bool Param2); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // Final|Native|Public // @ game+0x6fb53a0
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x98 (Inherited: 0x88)
struct UAbilityTask_WaitOverlap : UAbilityTask {
	struct FMulticastDelegate OnOverlap; // 0x88(0x10)

	struct UAbilityTask_WaitOverlap* *c20aac26f4(); // Function GameplayAbilities.AbilityTask_WaitOverlap.*c20aac26f4 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fba278
	struct FHitResult OnHitCallback(); // Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback // Final|Native|Public|HasOutParms|HasDefaults // @ game+0x6fb4ebc
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc8 (Inherited: 0x88)
struct UAbilityTask_WaitTargetData : UAbilityTask {
	struct FMulticastDelegate ValidData; // 0x88(0x10)
	struct FMulticastDelegate Cancelled; // 0x98(0x10)
	struct UClass* TargetClass; // 0xa8(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)

	void *dffe211d52(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*dffe211d52 // Final|Native|Public|HasOutParms // @ game+0x6fb5940
	void *7c2ea982ee(struct FGameplayTag Param1); // Function GameplayAbilities.AbilityTask_WaitTargetData.*7c2ea982ee // Final|Native|Public|HasOutParms // @ game+0x6fb5b00
	void *7220c3cf20(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*7220c3cf20 // Final|Native|Public // @ game+0x6fb5c34
	void *794d196520(struct F*473cd9e976 Param0); // Function GameplayAbilities.AbilityTask_WaitTargetData.*794d196520 // Final|Native|Public|HasOutParms // @ game+0x6fb5a20
	struct UAbilityTask_WaitTargetData* *9e108eb4e7(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*9e108eb4e7 // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fbbedc
	bool BeginSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor // Final|Native|Public|HasOutParms|BlueprintCallable // @ game+0x6faf6c4
	struct AGameplayAbilityTargetActor* FinishSpawningActor(); // Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor // Final|Native|Public|BlueprintCallable // @ game+0x6fb0f94
	struct UAbilityTask_WaitTargetData* *9195b3a0db(); // Function GameplayAbilities.AbilityTask_WaitTargetData.*9195b3a0db // Final|Native|Static|Public|BlueprintCallable // @ game+0x6fbbd58
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xb0 (Inherited: 0x88)
struct UAbilityTask_WaitVelocityChange : UAbilityTask {
	struct FMulticastDelegate OnVelocityChage; // 0x88(0x10)
	struct UMovementComponent* *326d60ae01; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	void *91869b36f7(); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.*91869b36f7 // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x6fb0878
};

// Class GameplayAbilities.*1058015569
// Size: 0x78 (Inherited: 0x38)
struct U*1058015569 : UAttributeSet {
	float MaxHealth; // 0x38(0x04)
	float Health; // 0x3c(0x04)
	float Mana; // 0x40(0x04)
	float MaxMana; // 0x44(0x04)
	float Damage; // 0x48(0x04)
	float SpellDamage; // 0x4c(0x04)
	float PhysicalDamage; // 0x50(0x04)
	float CritChance; // 0x54(0x04)
	float CritMultiplier; // 0x58(0x04)
	float ArmorDamageReduction; // 0x5c(0x04)
	float DodgeChance; // 0x60(0x04)
	float LifeSteal; // 0x64(0x04)
	float Strength; // 0x68(0x04)
	float StackingAttribute1; // 0x6c(0x04)
	float StackingAttribute2; // 0x70(0x04)
	float NoStackAttribute; // 0x74(0x04)
};

// Class GameplayAbilities.*a49d5c3056
// Size: 0x580 (Inherited: 0x580)
struct U*a49d5c3056 : UGameplayAbility {
	struct FGameplayTagContainer *0b60342393; // 0x270(0x20)
	bool *4b123d7cc4; // 0x290(0x01)
	bool *92f4f5518b; // 0x291(0x01)
	enum class *8808ad2c04 *e265a6cae4; // 0x296(0x01)
	enum class *e9bca40f1c *9c9313ea29; // 0x297(0x01)
	bool *2298282624; // 0x298(0x01)
	bool *3075f8d415; // 0x299(0x01)
	struct F*6b5f4136eb CurrentActivationInfo; // 0x2a0(0x20)
	struct F*a2f2c750be CurrentEventData; // 0x2c0(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy *3fe6e244e5; // 0x370(0x01)
	enum class EGameplayAbilityNetSecurityPolicy *8840946464; // 0x371(0x01)
	struct UClass* *b31859a4c6; // 0x378(0x08)
	struct TArray<struct F*8a876f8a0d> *fb5f88b31a; // 0x380(0x10)
	struct UClass* *f384eb26bd; // 0x390(0x08)
	struct FGameplayTagContainer *6a968bcfb7; // 0x398(0x20)
	struct FGameplayTagContainer *1fe819974a; // 0x3b8(0x20)
	struct FGameplayTagContainer *4c6b6c0945; // 0x3d8(0x20)
	struct FGameplayTagContainer *99d5f2db64; // 0x3f8(0x20)
	struct FGameplayTagContainer *243d2f281c; // 0x418(0x20)
	struct FGameplayTagContainer *b4e81e97a5; // 0x438(0x20)
	struct FGameplayTagContainer *ab14392e34; // 0x458(0x20)
	struct FGameplayTagContainer *a1fbf01630; // 0x478(0x20)
	struct FGameplayTagContainer *fa5de4c18a; // 0x498(0x20)
	struct TArray<struct UGameplayTask*> *1b361b84a5; // 0x4d8(0x10)
	struct UAnimMontage* *f9c064e9f1; // 0x4f8(0x08)
	bool *37789dceb0; // 0x560(0x01)
	bool *359dece568; // 0x561(0x01)
	bool *0796c191eb; // 0x562(0x01)
	bool *297a873657; // 0x563(0x01)
	bool bMarkPendingKillOnAbilityEnd; // 0x578(0x01)

	void *8c0031ad6b(); // Function GameplayAbilities.GameplayAbility.*8c0031ad6b // Final|Native|Public|BlueprintCallable // @ game+0x6fb2314
	struct FName *89200a133f(); // Function GameplayAbilities.GameplayAbility.*89200a133f // Final|Native|Protected|BlueprintCallable // @ game+0x6fb2f90
	struct F*5cf9f8565c *2ad56ef9b1(); // Function GameplayAbilities.GameplayAbility.*2ad56ef9b1 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb2a18
	bool *08a92c381f(); // Function GameplayAbilities.GameplayAbility.*08a92c381f // Native|Public|BlueprintCallable // @ game+0x6fb7e8c
	struct F*1734f92018 *aa6a8af046(); // Function GameplayAbilities.GameplayAbility.*aa6a8af046 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1a0c
	float GetCooldownTimeRemaining(); // Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb16f8
	bool K2_CanActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility // Event|Protected|HasOutParms|BlueprintEvent|Const // @ game+0x370fbc
	bool *39f97973e4(); // Function GameplayAbilities.GameplayAbility.*39f97973e4 // Native|Public|BlueprintCallable // @ game+0x5e3d9ac
	struct UObject* *356a35bef3(); // Function GameplayAbilities.GameplayAbility.*356a35bef3 // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1b38
	void *546f4ef9e2(bool ReturnValue); // Function GameplayAbilities.GameplayAbility.*546f4ef9e2 // Native|Public|BlueprintCallable // @ game+0x6fb2384
	void GetAbilityLevel(int32 ReturnValue); // Function GameplayAbilities.GameplayAbility.GetAbilityLevel // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb114c
	void *2b336c6c12(); // Function GameplayAbilities.GameplayAbility.*2b336c6c12 // Final|Native|Protected|BlueprintCallable // @ game+0x6faf03c
	void *5dac1f72d3(struct UClass* GameplayEffectClass, int32 GameplayEffectLevel, int32 Stacks); // Function GameplayAbilities.GameplayAbility.*5dac1f72d3 // Final|Native|Protected|BlueprintCallable // @ game+0x6faee20
	void *3b065b6ee9(); // Function GameplayAbilities.GameplayAbility.*3b065b6ee9 // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x6fb26c0
	void *73a85cc4b9(float OverrideBlendOutTime); // Function GameplayAbilities.GameplayAbility.*73a85cc4b9 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb3088
	void *de3aaf11c4(struct USkeletalMeshComponent* ReturnValue); // Function GameplayAbilities.GameplayAbility.*de3aaf11c4 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1b14
	void *edb7b793cc(); // Function GameplayAbilities.GameplayAbility.*edb7b793cc // Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1170
	void *987e4d7778(struct FName InstanceName); // Function GameplayAbilities.GameplayAbility.*987e4d7778 // Final|Native|Protected|BlueprintCallable // @ game+0x6fafa94
	void *8e737cf1b9(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.*8e737cf1b9 // Native|Protected|BlueprintCallable // @ game+0x6fb2570
	void *70d061b472(); // Function GameplayAbilities.GameplayAbility.*70d061b472 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb128c
	struct F*1734f92018 *7dd14bb20f(); // Function GameplayAbilities.GameplayAbility.*7dd14bb20f // Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb15ac
	bool *f1da960198(); // Function GameplayAbilities.GameplayAbility.*f1da960198 // Native|Public|BlueprintCallable // @ game+0x6fb23d4
	int32 *621c46f094(); // Function GameplayAbilities.GameplayAbility.*621c46f094 // Final|Native|Protected|BlueprintCallable // @ game+0x6faf2a4
	int32 *f9ae446f7d(); // Function GameplayAbilities.GameplayAbility.*f9ae446f7d // Final|Native|Protected|BlueprintCallable // @ game+0x6faf170
	bool *36beb983f5(); // Function GameplayAbilities.GameplayAbility.*36beb983f5 // Final|Native|Public|BlueprintCallable|Const // @ game+0x6fb27f0
	struct F*350e812946 *e5d7bc256b(); // Function GameplayAbilities.GameplayAbility.*e5d7bc256b // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1554
	struct UObject* *ad822c8900(); // Function GameplayAbilities.GameplayAbility.*ad822c8900 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1758
	void K2_ActivateAbility(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbility // Event|Protected|BlueprintEvent // @ game+0x370fbc
	bool *2ecd8322f8(); // Function GameplayAbilities.GameplayAbility.*2ecd8322f8 // Native|Public|BlueprintCallable // @ game+0x6fb7df4
	struct F*c3cafe0f98 *8168c296b5(); // Function GameplayAbilities.GameplayAbility.*8168c296b5 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb2038
	struct UAnimMontage* *109287e492(); // Function GameplayAbilities.GameplayAbility.*109287e492 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1740
	struct F*c3cafe0f98 *9e38704424(); // Function GameplayAbilities.GameplayAbility.*9e38704424 // Final|Native|Protected|BlueprintCallable // @ game+0x6fae954
	void K2_OnEndAbility(bool bWasCancelled); // Function GameplayAbilities.GameplayAbility.K2_OnEndAbility // Event|Protected|BlueprintEvent // @ game+0x370fbc
	void *a2c4c9b4ae(); // Function GameplayAbilities.GameplayAbility.*a2c4c9b4ae // Final|Native|Public|BlueprintCallable|Const // @ game+0x6fb1c54
	void *8fdfcdb3be(struct FGameplayTag GameplayCueTag); // Function GameplayAbilities.GameplayAbility.*8fdfcdb3be // Native|Protected|BlueprintCallable // @ game+0x6fb1d30
	void *4b52feb6ae(); // Function GameplayAbilities.GameplayAbility.*4b52feb6ae // Final|Native|Protected|BlueprintCallable // @ game+0x6fb2ee8
	void *e4a2c8bbfe(struct F*5cf9f8565c EffectSpecHandle, struct F*473cd9e976 TargetData); // Function GameplayAbilities.GameplayAbility.*e4a2c8bbfe // Final|Native|Protected|BlueprintCallable // @ game+0x6fb213c
	void *3a91c6d12d(); // Function GameplayAbilities.GameplayAbility.*3a91c6d12d // Native|Protected|BlueprintCallable // @ game+0x6fb6260
	void *56e97b38e7(struct FName SocketName, struct F*a4827abec5 ReturnValue); // Function GameplayAbilities.GameplayAbility.*56e97b38e7 // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x6fb2de8
	void *913e8f9fe1(); // Function GameplayAbilities.GameplayAbility.*913e8f9fe1 // Final|Native|Protected|BlueprintCallable|BlueprintPure // @ game+0x6fb2d58
	void *2b34d09a81(); // Function GameplayAbilities.GameplayAbility.*2b34d09a81 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb09b8
	void *1e83314f3b(); // Function GameplayAbilities.GameplayAbility.*1e83314f3b // Native|Public|BlueprintCallable // @ game+0x5e425b4
	void K2_CommitExecute(); // Function GameplayAbilities.GameplayAbility.K2_CommitExecute // Event|Public|BlueprintEvent // @ game+0x370fbc
	void *411c7e64b7(struct FGameplayTag GameplayCueTag, struct F*b1f6324a11 GameplayCueParameter); // Function GameplayAbilities.GameplayAbility.*411c7e64b7 // Native|Protected|HasOutParms|BlueprintCallable // @ game+0x6fb1ec0
	void *a3060561e4(); // Function GameplayAbilities.GameplayAbility.*a3060561e4 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb0a58
	bool *5e3b02fdbb(); // Function GameplayAbilities.GameplayAbility.*5e3b02fdbb // Native|Public|BlueprintCallable // @ game+0x6fb23ac
	bool *3c5cc3769a(); // Function GameplayAbilities.GameplayAbility.*3c5cc3769a // Final|Native|Public|BlueprintCallable|Const // @ game+0x6fb1d0c
	struct F*a2f2c750be K2_ActivateAbilityFromEvent(); // Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent // Event|Protected|HasOutParms|BlueprintEvent // @ game+0x370fbc
	struct AActor* *df3ee0848d(); // Function GameplayAbilities.GameplayAbility.*df3ee0848d // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1588
	void *cc3a476767(); // Function GameplayAbilities.GameplayAbility.*cc3a476767 // Native|Protected|BlueprintCallable // @ game+0x5e420b8
	bool K2_ShouldAbilityRespondToEvent(); // Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent // Event|Protected|BlueprintEvent|Const // @ game+0x370fbc
	struct FGameplayTag *4490e17742(); // Function GameplayAbilities.GameplayAbility.*4490e17742 // Native|Protected|BlueprintCallable // @ game+0x6fb28e8
	struct AActor* *4b4d0526f7(); // Function GameplayAbilities.GameplayAbility.*4b4d0526f7 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6fb1af0
	bool *f98832fc73(); // Function GameplayAbilities.GameplayAbility.*f98832fc73 // Final|Native|Protected|BlueprintCallable // @ game+0x6fb03f0
	bool *a7b71e279f(); // Function GameplayAbilities.GameplayAbility.*a7b71e279f // Native|Public|BlueprintCallable // @ game+0x6fb24c8
};

// Class GameplayAbilities.*2f07a26c88
// Size: 0x5c0 (Inherited: 0x580)
struct U*2f07a26c88 : UGameplayAbility {
	struct UAnimMontage* *ed2a21fc40; // 0x580(0x08)
	float PlayRate; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct FName SectionName; // 0x590(0x08)
	struct TArray<struct UClass*> *1d896314eb; // 0x598(0x10)
	struct TArray<struct UGameplayEffect*> *d710fca60e; // 0x5a8(0x10)
	char pad_5B8[0x8]; // 0x5b8(0x08)
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0x1a0 (Inherited: 0x1a0)
struct UGameplayAbilityBlueprint : UBlueprint {
	char bRecompileOnLoad : 1; // 0x58(0x01)
	struct UClass* ParentClass; // 0x60(0x08)
	struct UObject* *c7c3d3c364; // 0x68(0x08)
	char *45d8714b6d : 1; // 0x70(0x01)
	char *ec5253daf9 : 1; // 0x70(0x01)
	struct USimpleConstructionScript* SimpleConstructionScript; // 0x78(0x08)
	struct TArray<struct UActorComponent*> *94a4227fa2; // 0x80(0x10)
	struct TArray<struct U*21c8ecb21c*> *073464c770; // 0x90(0x10)
	struct UInheritableComponentHandler* InheritableComponentHandler; // 0xa0(0x08)
	enum class EBlueprintType BlueprintType; // 0xa8(0x01)
	int32 *4eea5dd1dd; // 0xac(0x04)
	bool bNativize; // 0x190(0x01)
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x48 (Inherited: 0x38)
struct UGameplayAbilitySet : UDataAsset {
	struct TArray<struct F*5084f0d16d> Abilities; // 0x38(0x10)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x5c0 (Inherited: 0x5c0)
struct AGameplayAbilityTargetActor_Radius : AGameplayAbilityTargetActor {
	float Radius; // 0x5b8(0x04)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x5e0 (Inherited: 0x5c0)
struct AGameplayAbilityTargetActor_Trace : AGameplayAbilityTargetActor {
	float MaxRange; // 0x5b8(0x04)
	struct FCollisionProfileName TraceProfile; // 0x5c0(0x08)
	bool bTraceAffectsAimPitch; // 0x5c8(0x01)
	char pad_5CD[0x13]; // 0x5cd(0x13)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x600 (Inherited: 0x5e0)
struct AGameplayAbilityTargetActor_GroundTrace : AGameplayAbilityTargetActor_Trace {
	float CollisionRadius; // 0x5d8(0x04)
	float CollisionHeight; // 0x5dc(0x04)
	char pad_5E8[0x18]; // 0x5e8(0x18)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x610 (Inherited: 0x600)
struct AGameplayAbilityTargetActor_ActorPlacement : AGameplayAbilityTargetActor_GroundTrace {
	struct UClass* PlacedActorClass; // 0x5f8(0x08)
	struct UMaterialInterface* PlacedActorMaterial; // 0x600(0x08)
};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x5e0 (Inherited: 0x5e0)
struct AGameplayAbilityTargetActor_SingleLineTrace : AGameplayAbilityTargetActor_Trace {
	float MaxRange; // 0x5b8(0x04)
	struct FCollisionProfileName TraceProfile; // 0x5c0(0x08)
	bool bTraceAffectsAimPitch; // 0x5c8(0x01)
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x430 (Inherited: 0x418)
struct AGameplayAbilityWorldReticle_ActorVisualization : AGameplayAbilityWorldReticle {
	struct UCapsuleComponent* CollisionComponent; // 0x418(0x08)
	struct TArray<struct UActorComponent*> *85042739be; // 0x420(0x10)
};

// Class GameplayAbilities.*3e923d71b5
// Size: 0x30 (Inherited: 0x30)
struct U*3e923d71b5 : UObject {
};

// Class GameplayAbilities.*674e4f18ef
// Size: 0x30 (Inherited: 0x30)
struct U*674e4f18ef : U*3e923d71b5 {
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x470 (Inherited: 0x38)
struct UGameplayCueManager : UDataAsset {
	char pad_38[0x78]; // 0x38(0x78)
	struct F*319d14b701 *5087b9492c; // 0xb0(0xb0)
	struct F*319d14b701 *674cd8b263; // 0x160(0xb0)
	char pad_210[0x1a0]; // 0x210(0x1a0)
	struct TArray<struct UClass*> *57c92eb6ec; // 0x3b0(0x10)
	struct TArray<struct UClass*> *6eaf46721a; // 0x3c0(0x10)
	struct TArray<struct F*3692018795> *f96a11339d; // 0x3d0(0x10)
	int32 *e2f3fa2efa; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<struct F*9bd9f27c17> *cf5ea3e66b; // 0x3e8(0x10)
	char pad_3F8[0x78]; // 0x3f8(0x78)
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x458 (Inherited: 0x3f8)
struct AGameplayCueNotify_Actor : AActor {
	bool *0a7b64ac9a; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	float *9bbd1cc413; // 0x3fc(0x04)
	bool *9c9c0cc697; // 0x400(0x01)
	bool *8ab36c427c; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct FGameplayTag GameplayCueTag; // 0x408(0x08)
	struct FName GameplayCueName; // 0x410(0x08)
	bool *657bae1ead; // 0x418(0x01)
	bool *51e5b2ab38; // 0x419(0x01)
	bool *95cdd65f10; // 0x41a(0x01)
	bool *12f81a0616; // 0x41b(0x01)
	bool *10fbcb827a; // 0x41c(0x01)
	bool *9eff677314; // 0x41d(0x01)
	char pad_41E[0x2]; // 0x41e(0x02)
	int32 *1d4aae7899; // 0x420(0x04)
	char pad_424[0x34]; // 0x424(0x34)

	void OnActive(); // Function GameplayAbilities.GameplayCueNotify_Actor.OnActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6fb4560
	void OnOwnerDestroyed(struct AActor* Param0); // Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed // Native|Public // @ game+0x6fb54d0
	void *84995a2d71(); // Function GameplayAbilities.GameplayCueNotify_Actor.*84995a2d71 // Native|Public|BlueprintCallable // @ game+0x6c86f8
	void K2_HandleGameplayCue(struct AActor* MyTarget); // Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent // @ game+0x370fbc
	void OnExecute(struct F*b1f6324a11 Parameters, bool ReturnValue); // Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6fb4a2c
	void OnRemove(struct AActor* MyTarget); // Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6fb558c
	void WhileActive(struct F*b1f6324a11 Parameters, bool ReturnValue); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // Native|Event|Public|HasOutParms|BlueprintEvent // @ game+0x6fbc060
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x48 (Inherited: 0x30)
struct UGameplayCueNotify_Static : UObject {
	struct FGameplayTag GameplayCueTag; // 0x30(0x08)
	struct FName GameplayCueName; // 0x38(0x08)
	bool *51e5b2ab38; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	struct F*b1f6324a11 K2_HandleGameplayCue(); // Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue // Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x370fbc
	bool OnRemove(); // Function GameplayAbilities.GameplayCueNotify_Static.OnRemove // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6fb56bc
	bool OnExecute(); // Function GameplayAbilities.GameplayCueNotify_Static.OnExecute // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6fb4b5c
	bool OnActive(); // Function GameplayAbilities.GameplayCueNotify_Static.OnActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6fb4690
	bool WhileActive(); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const // @ game+0x6fbc190
};

// Class GameplayAbilities.*0d65e2ddbf
// Size: 0x58 (Inherited: 0x48)
struct U*0d65e2ddbf : UGameplayCueNotify_Static {
	struct USoundBase* Sound; // 0x48(0x08)
	struct UParticleSystem* ParticleSystem; // 0x50(0x08)
};

// Class GameplayAbilities.*e0b4ea48b3
// Size: 0x98 (Inherited: 0x38)
struct U*e0b4ea48b3 : UDataAsset {
	struct TArray<struct F*1e473ac6df> *5f83e6d75d; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)
};

// Class GameplayAbilities.*9ed685b664
// Size: 0x880 (Inherited: 0x880)
struct U*9ed685b664 : UGameplayEffect {
	enum class EGameplayEffectDurationType *862e176a02; // 0x38(0x01)
	struct FGameplayEffectModifierMagnitude *39ad3c48be; // 0x40(0x200)
	struct FScalableFloat Period; // 0x240(0x30)
	bool bExecutePeriodicEffectOnApplication; // 0x270(0x01)
	enum class *1cdab040fe PeriodicInhibitionPolicy; // 0x271(0x01)
	struct TArray<struct F*99fdd28db6> Modifiers; // 0x278(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x288(0x10)
	struct FScalableFloat *71a09d99bb; // 0x298(0x30)
	struct TArray<struct UClass*> *e2a98ce54b; // 0x2c8(0x10)
	struct TArray<struct UClass*> TargetEffectClasses; // 0x2d8(0x10)
	struct TArray<struct F*fc501160eb> ConditionalGameplayEffects; // 0x2e8(0x10)
	struct TArray<struct UClass*> OverflowEffects; // 0x2f8(0x10)
	bool bDenyOverflowApplication; // 0x308(0x01)
	bool bClearStackOnOverflow; // 0x309(0x01)
	struct TArray<struct UClass*> PrematureExpirationEffectClasses; // 0x310(0x10)
	struct TArray<struct UClass*> RoutineExpirationEffectClasses; // 0x320(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x330(0x01)
	bool *a25f5e330c; // 0x331(0x01)
	struct TArray<struct F*2d621db336> GameplayCues; // 0x338(0x10)
	struct UGameplayEffectUIData* UIData; // 0x348(0x08)
	struct F*b39f17e9ff InheritableGameplayEffectTags; // 0x350(0x60)
	struct F*b39f17e9ff InheritableOwnedTagsContainer; // 0x3b0(0x60)
	struct F*db129c0b81 OngoingTagRequirements; // 0x410(0x40)
	struct F*db129c0b81 ApplicationTagRequirements; // 0x450(0x40)
	struct F*db129c0b81 RemovalTagRequirements; // 0x490(0x40)
	struct F*b39f17e9ff RemoveGameplayEffectsWithTags; // 0x4d0(0x60)
	struct F*db129c0b81 GrantedApplicationImmunityTags; // 0x530(0x40)
	struct F*cf29ee6019 GrantedApplicationImmunityQuery; // 0x570(0x170)
	struct F*cf29ee6019 RemoveGameplayEffectQuery; // 0x6f0(0x170)
	enum class EGameplayEffectStackingType StackingType; // 0x861(0x01)
	int32 StackLimitCount; // 0x864(0x04)
	enum class *7c7ea2d7a5 StackDurationRefreshPolicy; // 0x868(0x01)
	enum class *e264cb211b StackPeriodResetPolicy; // 0x869(0x01)
	enum class *0ce34511ae StackExpirationPolicy; // 0x86a(0x01)
	struct TArray<struct F*e111967977> GrantedAbilities; // 0x870(0x10)
};

// Class GameplayAbilities.*8f768d313e
// Size: 0x48 (Inherited: 0x40)
struct U*8f768d313e : U*4b1d17cc1b {
	bool *dcc6100505; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void CalculateBaseMagnitude(struct F*8c145ab21e Spec, float ReturnValue); // Function GameplayAbilities.*8f768d313e.CalculateBaseMagnitude // Native|Event|Public|HasOutParms|BlueprintEvent|Const // @ game+0x6faf800
};

// Class GameplayAbilities.*4d96465856
// Size: 0x30 (Inherited: 0x30)
struct U*4d96465856 : UObject {
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x30 (Inherited: 0x30)
struct UGameplayEffectUIData : UObject {
};

// Class GameplayAbilities.*7e78d03d2e
// Size: 0x48 (Inherited: 0x30)
struct U*7e78d03d2e : UGameplayEffectUIData {
	struct FText Description; // 0x30(0x18)
};

// Class GameplayAbilities.*f1f5d32376
// Size: 0x220 (Inherited: 0x38)
struct U*f1f5d32376 : UDataAsset {
	struct TArray<struct F*90304cc5c5> Entries; // 0x38(0x10)
	char pad_48[0x1d8]; // 0x48(0x1d8)

	void *e8e26bfeda(int32 Param3); // Function GameplayAbilities.*f1f5d32376.*e8e26bfeda // Final|Native|Protected // @ game+0x6fb8294
};

// Class GameplayAbilities.*6448acef00
// Size: 0x30 (Inherited: 0x30)
struct U*6448acef00 : UInterface {
};

