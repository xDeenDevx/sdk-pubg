// WidgetBlueprintGeneratedClass W_AIWeaponButton.W_AIWeaponButton_C
// Size: 0x528 (Inherited: 0x250)
struct UW_AIWeaponButton_C : UUserWidget {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x250(0x08)
	struct UButton* ButtonGive; // 0x258(0x08)
	struct UTextBlock* Text_Name; // 0x260(0x08)
	struct FName ItemID; // 0x268(0x08)
	struct F*9ec348ba05 ButtonStyle; // 0x270(0x2a8)
	struct UW_AIItemMenu_C* MenuRef; // 0x518(0x08)
	enum class ECastableItemType MedType; // 0x520(0x01)
	char pad_521[0x3]; // 0x521(0x03)
	int32 WeaponIndex; // 0x524(0x04)

	int32 GiveWeaponAmmo(int32 ___int_Loop_Counter_Variable, struct UWeaponProcessorComponent* CallFunc__644a73ddbc_ReturnValue, struct ATslWeapon* CallFunc__884e099b97_ReturnValue, bool K2Node_DynamicCast_bSuccess); // Function W_AIWeaponButton.W_AIWeaponButton_C.GiveWeaponAmmo // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x293938
	struct FString SetMedType(); // Function W_AIWeaponButton.W_AIWeaponButton_C.SetMedType // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	bool AITakeMed(struct APlayerPawn_v2_C* K2Node_DynamicCast_AsPlayer_Pawn_V_3, struct FString CallFunc__b9c3e73850_ReturnValue); // Function W_AIWeaponButton.W_AIWeaponButton_C.AITakeMed // Public|BlueprintCallable|BlueprintEvent // @ game+0x293938
	void Construct(); // Function W_AIWeaponButton.W_AIWeaponButton_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x293938
	void BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Function W_AIWeaponButton.W_AIWeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x293938
	void ExecuteUbergraph_W_AIWeaponButton(struct ATslCharacter* CallFunc__36cf5fd6b9_ReturnValue, struct APlayerPawn_v2_C* K2Node_DynamicCast_AsPlayer_Pawn_V_3); // Function W_AIWeaponButton.W_AIWeaponButton_C.ExecuteUbergraph_W_AIWeaponButton // HasDefaults // @ game+0x293938
};

