// WidgetBlueprintGeneratedClass W_AIWeaponButton.W_AIWeaponButton_C
// Size: 0x530 (Inherited: 0x258)
struct UW_AIWeaponButton_C : UUserWidget {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x258(0x08)
	struct UButton* ButtonGive; // 0x260(0x08)
	struct UTextBlock* Text_Name; // 0x268(0x08)
	struct FName ItemID; // 0x270(0x08)
	struct F*9ec348ba05 ButtonStyle; // 0x278(0x2a8)
	struct UW_AIItemMenu_C* MenuRef; // 0x520(0x08)
	enum class ECastableItemType MedType; // 0x528(0x01)
	char pad_529[0x3]; // 0x529(0x03)
	int32 WeaponIndex; // 0x52c(0x04)

	void GiveWeaponAmmo(); // Function W_AIWeaponButton.W_AIWeaponButton_C.GiveWeaponAmmo // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void SetMedType(); // Function W_AIWeaponButton.W_AIWeaponButton_C.SetMedType // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void AITakeMed(); // Function W_AIWeaponButton.W_AIWeaponButton_C.AITakeMed // Public|BlueprintCallable|BlueprintEvent // @ game+0x21d2c4
	void Construct(); // Function W_AIWeaponButton.W_AIWeaponButton_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x21d2c4
	void BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Function W_AIWeaponButton.W_AIWeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x21d2c4
	void ExecuteUbergraph_W_AIWeaponButton(); // Function W_AIWeaponButton.W_AIWeaponButton_C.ExecuteUbergraph_W_AIWeaponButton // HasDefaults // @ game+0x21d2c4
};

