// WidgetBlueprintGeneratedClass W_WeaponMenu.W_WeaponMenu_C
// Size: 0x2368 (Inherited: 0x410)
struct UW_WeaponMenu_C : U*eb79fdee2a {
	struct F*a3d8ff36c0 UberGraphFrame; // 0x410(0x08)
	struct UButton* Button_1; // 0x418(0x08)
	struct UButton* Button_2; // 0x420(0x08)
	struct UButton* Button_3; // 0x428(0x08)
	struct UButton* Button_4; // 0x430(0x08)
	struct UButton* Button_5; // 0x438(0x08)
	struct UButton* Button_6; // 0x440(0x08)
	struct UButton* Button_7; // 0x448(0x08)
	struct UButton* Button_8; // 0x450(0x08)
	struct UButton* Button_9; // 0x458(0x08)
	struct UButton* Button_10; // 0x460(0x08)
	struct UButton* Button_11; // 0x468(0x08)
	struct UButton* Button_12; // 0x470(0x08)
	struct UButton* Button_13; // 0x478(0x08)
	struct UButton* Button_14; // 0x480(0x08)
	struct UButton* Button_15; // 0x488(0x08)
	struct UButton* Button_16; // 0x490(0x08)
	struct UButton* Button_17; // 0x498(0x08)
	struct UButton* Button_18; // 0x4a0(0x08)
	struct UButton* Button_19; // 0x4a8(0x08)
	struct UButton* Button_20; // 0x4b0(0x08)
	struct UButton* Button_21; // 0x4b8(0x08)
	struct UButton* Button_22; // 0x4c0(0x08)
	struct UButton* Button_23; // 0x4c8(0x08)
	struct UButton* Button_24; // 0x4d0(0x08)
	struct UButton* Button_25; // 0x4d8(0x08)
	struct UButton* Button_26; // 0x4e0(0x08)
	struct UButton* Button_27; // 0x4e8(0x08)
	struct UButton* Button_28; // 0x4f0(0x08)
	struct UButton* Button_29; // 0x4f8(0x08)
	struct UButton* Button_30; // 0x500(0x08)
	struct UButton* Button_31; // 0x508(0x08)
	struct UButton* Button_32; // 0x510(0x08)
	struct UButton* Button_33; // 0x518(0x08)
	struct UButton* Button_34; // 0x520(0x08)
	struct UButton* Button_35; // 0x528(0x08)
	struct UButton* Button_36; // 0x530(0x08)
	struct UButton* Button_38; // 0x538(0x08)
	struct UButton* Button_39; // 0x540(0x08)
	struct UButton* Button_40; // 0x548(0x08)
	struct UButton* Button_41; // 0x550(0x08)
	struct UButton* Button_42; // 0x558(0x08)
	struct UButton* Button_43; // 0x560(0x08)
	struct UButton* Button_44; // 0x568(0x08)
	struct UButton* Button_47; // 0x570(0x08)
	struct UButton* Button_48; // 0x578(0x08)
	struct UButton* Button_63; // 0x580(0x08)
	struct UButton* Button_64; // 0x588(0x08)
	struct UButton* Button_65; // 0x590(0x08)
	struct UButton* Button_66; // 0x598(0x08)
	struct UButton* Button_67; // 0x5a0(0x08)
	struct UButton* Button_68; // 0x5a8(0x08)
	struct UButton* Button_Close; // 0x5b0(0x08)
	struct UButton* Button_GiveAmmo; // 0x5b8(0x08)
	struct UButton* Button_SET-556; // 0x5c0(0x08)
	struct UImage* DebugCrosshair; // 0x5c8(0x08)
	struct UTextBlock* Preset1_Button_Edit; // 0x5d0(0x08)
	struct UTextBlock* Preset2_Button_Edit; // 0x5d8(0x08)
	struct UVerticalBox* VB_Ammo; // 0x5e0(0x08)
	struct UVerticalBox* VB_Armor; // 0x5e8(0x08)
	struct UVerticalBox* VB_Backpack; // 0x5f0(0x08)
	struct UVerticalBox* VB_Cosmetic; // 0x5f8(0x08)
	struct UVerticalBox* VB_Helm; // 0x600(0x08)
	struct UVerticalBox* VB_Lower; // 0x608(0x08)
	struct UVerticalBox* VB_Mag; // 0x610(0x08)
	struct UVerticalBox* VB_Meds; // 0x618(0x08)
	struct UVerticalBox* VB_Melee; // 0x620(0x08)
	struct UVerticalBox* VB_Muzzle; // 0x628(0x08)
	struct UVerticalBox* VB_Other; // 0x630(0x08)
	struct UVerticalBox* VB_Pistols; // 0x638(0x08)
	struct UVerticalBox* VB_Preset_2; // 0x640(0x08)
	struct UVerticalBox* VB_Preset_3; // 0x648(0x08)
	struct UVerticalBox* VB_Rifle; // 0x650(0x08)
	struct UVerticalBox* VB_Scopes; // 0x658(0x08)
	struct UVerticalBox* VB_Shotguns; // 0x660(0x08)
	struct UVerticalBox* VB_Skin; // 0x668(0x08)
	struct UVerticalBox* VB_SMG; // 0x670(0x08)
	struct UVerticalBox* VB_Sniper; // 0x678(0x08)
	struct UVerticalBox* VB_Stock; // 0x680(0x08)
	struct UVerticalBox* VB_ThrowableSkin; // 0x688(0x08)
	struct UVerticalBox* VB_Thrown; // 0x690(0x08)
	struct UW_Emote_QuickMenu_C* W_Emote_QuickMenu_79; // 0x698(0x08)
	struct UWrapBox* WB_Emotes; // 0x6a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x6a8(0x08)
	struct TArray<struct FName> WeapClassArray_Pistol; // 0x6b0(0x10)
	struct TArray<struct FName> WeapClassArray_SMG; // 0x6c0(0x10)
	struct TArray<struct FName> WeapClassArray_Shotgun; // 0x6d0(0x10)
	struct TArray<struct FName> WeapClassArray_Rifle; // 0x6e0(0x10)
	struct TArray<struct FName> WeapClassArray_Sniper; // 0x6f0(0x10)
	struct TArray<struct FName> WeapClassArray_Other; // 0x700(0x10)
	struct F*9ec348ba05 WeapButtonStyle; // 0x710(0x2a8)
	struct TArray<struct FName> AttachClassArray_Scopes; // 0x9b8(0x10)
	struct TArray<struct FName> AttachClassArray_Muzzle; // 0x9c8(0x10)
	struct TArray<struct FName> AttachClassArray_Mag; // 0x9d8(0x10)
	struct TArray<struct FName> AttachClassArray_Lower; // 0x9e8(0x10)
	struct TArray<struct FName> AttachClassArray_Stock; // 0x9f8(0x10)
	struct F*9ec348ba05 AttachButtonStyle; // 0xa08(0x2a8)
	struct TArray<struct FName> ArmorClassArray_Helm; // 0xcb0(0x10)
	struct TArray<struct FName> ArmorClassArray_Armor; // 0xcc0(0x10)
	struct TArray<struct FName> ArmorClassArray_Backpack; // 0xcd0(0x10)
	struct F*9ec348ba05 ArmorButtonStyle; // 0xce0(0x2a8)
	struct TArray<struct FName> MedsClassArray_Meds; // 0xf88(0x10)
	struct F*9ec348ba05 MedsButtonStyle; // 0xf98(0x2a8)
	struct TArray<struct FName> ThrownClassArray_Thrown; // 0x1240(0x10)
	struct F*9ec348ba05 ThrownButtonStyle; // 0x1250(0x2a8)
	struct TArray<struct FName> CosmeticClassArray_Cosmetic; // 0x14f8(0x10)
	struct F*9ec348ba05 CosmeticButtonStyle; // 0x1508(0x2a8)
	struct APlayerPawn_v2_C* CharRef; // 0x17b0(0x08)
	bool bSavePresetMode; // 0x17b8(0x01)
	char pad_17B9[0x3]; // 0x17b9(0x03)
	int32 ActivePresetArray; // 0x17bc(0x04)
	struct TArray<struct FName> PresetArray_2; // 0x17c0(0x10)
	struct TArray<struct FName> PresetArray_3; // 0x17d0(0x10)
	struct TArray<struct FName> PresetArray_4; // 0x17e0(0x10)
	struct F*9ec348ba05 PresetButtonStyle; // 0x17f0(0x2a8)
	struct TArray<struct FName> AmmoClassArray_Ammo; // 0x1a98(0x10)
	struct F*9ec348ba05 AmmoButtonStyle; // 0x1aa8(0x2a8)
	struct TArray<struct FName> MeleeClassArray; // 0x1d50(0x10)
	struct F*9ec348ba05 MeleeButtonStyle; // 0x1d60(0x2a8)
	struct TArray<struct FName> slavarray; // 0x2008(0x10)
	struct TArray<struct FName> CurrentLoadout; // 0x2018(0x10)
	struct TArray<struct UClass*> Smokes; // 0x2028(0x10)
	struct TArray<struct UClass*> CachedItemClassList; // 0x2038(0x10)
	struct TArray<struct FName> Skin_Weapon; // 0x2048(0x10)
	struct TArray<struct FName> Skin_Throwable; // 0x2058(0x10)
	struct F*eefad94ddc SpawnKit_5.56; // 0x2068(0x100)
	struct F*eefad94ddc SpawnKit_7.62; // 0x2168(0x100)
	struct F*eefad94ddc SpawnKit_SR; // 0x2268(0x100)

	void SetEquippedItems(); // Function W_WeaponMenu.W_WeaponMenu_C.SetEquippedItems // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	float SpawnSmokeEffect(struct ATslCharacter* CallFunc__36cf5fd6b9_ReturnValue, struct FVector CallFunc_MakeVector_ReturnValue, struct AActor* CallFunc__156662a2f2_ReturnValue); // Function W_WeaponMenu.W_WeaponMenu_C.SpawnSmokeEffect // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FEventReply ReturnValue); // Function W_WeaponMenu.W_WeaponMenu_C.OnKeyUp // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FEventReply OnKeyDown(); // Function W_WeaponMenu.W_WeaponMenu_C.OnKeyDown // BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct UTexture2D* PopulateEmoteData(struct UW_EmoteButton_C* CallFunc_Create_ReturnValue, int32 ___int_Loop_Counter_Variable, struct TArray<struct FName> CallFunc__0baf73be86_ReturnValue); // Function W_WeaponMenu.W_WeaponMenu_C.PopulateEmoteData // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct ATslCharacter* SpawnVehicle(); // Function W_WeaponMenu.W_WeaponMenu_C.SpawnVehicle // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void SavePreset(int32 ProfileIndex); // Function W_WeaponMenu.W_WeaponMenu_C.SavePreset // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct FName LoadPresets(struct UW_WeaponButton_C* CallFunc_Create_ReturnValue2, struct TArray<struct FName> CallFunc__dafcda689a_ReturnValue, struct U*d2f00ac7d1* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc__0bad7adb6e_ReturnValue, struct U*d2f00ac7d1* CallFunc_AddChildToVerticalBox_ReturnValue2, int32 CallFunc__0bad7adb6e_ReturnValue2); // Function W_WeaponMenu.W_WeaponMenu_C.LoadPresets // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct APlayerPawn_v2_C* GiveItemToPlayer(); // Function W_WeaponMenu.W_WeaponMenu_C.GiveItemToPlayer // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	struct UVerticalBox* AddChildPresetButton(); // Function W_WeaponMenu.W_WeaponMenu_C.AddChildPresetButton // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	int32 AddItemToActiveArray(int32 ___int_Array_Index_Variable, int32 ___int_Loop_Counter_Variable, int32 ___int_Array_Index_Variable2, int32 CallFunc_Array_Add_ReturnValue2); // Function W_WeaponMenu.W_WeaponMenu_C.AddItemToActiveArray // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void IsSavePresetMode(); // Function W_WeaponMenu.W_WeaponMenu_C.IsSavePresetMode // Public|HasOutParms|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void DoExit(); // Function W_WeaponMenu.W_WeaponMenu_C.DoExit // Public|BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void Construct(); // Function W_WeaponMenu.W_WeaponMenu_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x32e590
	void OnClicked_Event_1(); // Function W_WeaponMenu.W_WeaponMenu_C.OnClicked_Event_1 // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_64_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_62_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_62_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_63_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_65_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_66_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_67_K2Node_ComponentBoundEvent_486_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_486_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_28_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_336_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_336_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_363_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_363_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_3_K2Node_ComponentBoundEvent_391_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_391_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_4_K2Node_ComponentBoundEvent_459_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_459_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_5_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_6_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_7_K2Node_ComponentBoundEvent_502_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_502_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_8_K2Node_ComponentBoundEvent_582_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_582_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_9_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_10_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_13_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_13_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_12_K2Node_ComponentBoundEvent_299_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_299_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_14_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_356_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_356_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void Event Close(); // Function W_WeaponMenu.W_WeaponMenu_C.Event Close // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_11_K2Node_ComponentBoundEvent_230_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_230_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void CenterCursor(); // Function W_WeaponMenu.W_WeaponMenu_C.CenterCursor // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_18_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_18_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_20_K2Node_ComponentBoundEvent_516_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_20_K2Node_ComponentBoundEvent_516_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_16_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_16_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_15_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_15_K2Node_ComponentBoundEvent_216_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_17_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_17_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_24_K2Node_ComponentBoundEvent_461_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_24_K2Node_ComponentBoundEvent_461_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_19_K2Node_ComponentBoundEvent_1565_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_19_K2Node_ComponentBoundEvent_1565_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_23_K2Node_ComponentBoundEvent_369_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_23_K2Node_ComponentBoundEvent_369_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void SetUp(); // Function W_WeaponMenu.W_WeaponMenu_C.SetUp // BlueprintCallable|BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_21_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_21_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_22_K2Node_ComponentBoundEvent_661_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_22_K2Node_ComponentBoundEvent_661_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_25_K2Node_ComponentBoundEvent_711_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_25_K2Node_ComponentBoundEvent_711_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_26_K2Node_ComponentBoundEvent_762_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_762_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_27_K2Node_ComponentBoundEvent_1079_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_27_K2Node_ComponentBoundEvent_1079_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_29_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_29_K2Node_ComponentBoundEvent_243_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_30_K2Node_ComponentBoundEvent_241_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_30_K2Node_ComponentBoundEvent_241_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_35_K2Node_ComponentBoundEvent_295_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_35_K2Node_ComponentBoundEvent_295_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_32_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_33_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_33_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_34_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_34_K2Node_ComponentBoundEvent_360_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_38_K2Node_ComponentBoundEvent_676_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_38_K2Node_ComponentBoundEvent_676_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_37_K2Node_ComponentBoundEvent_737_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_37_K2Node_ComponentBoundEvent_737_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_39_K2Node_ComponentBoundEvent_332_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_39_K2Node_ComponentBoundEvent_332_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_40_K2Node_ComponentBoundEvent_400_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_40_K2Node_ComponentBoundEvent_400_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_41_K2Node_ComponentBoundEvent_230_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_41_K2Node_ComponentBoundEvent_230_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_42_K2Node_ComponentBoundEvent_307_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_42_K2Node_ComponentBoundEvent_307_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_45_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_45_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_44_K2Node_ComponentBoundEvent_688_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_44_K2Node_ComponentBoundEvent_688_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_46_K2Node_ComponentBoundEvent_757_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_46_K2Node_ComponentBoundEvent_757_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	void BndEvt__Button_47_K2Node_ComponentBoundEvent_826_OnButtonClickedEvent__DelegateSignature(); // Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_47_K2Node_ComponentBoundEvent_826_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x32e590
	struct ATslCharacter* ExecuteUbergraph_W_WeaponMenu(int32 EntryPoint, struct UW_WeaponButton_C* CallFunc_Create_ReturnValue2, int32 CallFunc__0bad7adb6e_ReturnValue2, struct UW_WeaponButton_C* CallFunc_Create_ReturnValue9, DelegateProperty _d01ead63d9_OutputDelegate, int32 ___int_Array_Index_Variable, int32 CallFunc__949df90870_ReturnValue4, int32 ___int_Array_Index_Variable5, int32 CallFunc__949df90870_ReturnValue5, struct UW_WeaponButton_C* CallFunc_Create_ReturnValue12, int32 ___int_Loop_Counter_Variable6, int32 CallFunc__949df90870_ReturnValue9, struct UW_WeaponButton_C* CallFunc_Create_ReturnValue15, int32 CallFunc__949df90870_ReturnValue10, int32 ___int_Array_Index_Variable11, int32 CallFunc__949df90870_ReturnValue14, struct UW_WeaponButton_C* CallFunc_Create_ReturnValue16, int32 ___int_Array_Index_Variable15, int32 CallFunc__949df90870_ReturnValue15, int32 ___int_Loop_Counter_Variable16, struct UW_WeaponButton_C* CallFunc_Create_ReturnValue19, bool CallFunc__2bff9823d8_ReturnValue, int32 ___int_Array_Index_Variable20, struct FName CallFunc_Array_Get_Item, struct U*d2f00ac7d1* CallFunc_AddChildToVerticalBox_ReturnValue, struct UW_WeaponButton_C* CallFunc_Create_ReturnValue20, int32 CallFunc__0bad7adb6e_ReturnValue5, int32 CallFunc__0bad7adb6e_ReturnValue6, struct FName CallFunc_Array_Get_Item4, bool K2Node_DynamicCast_bSuccess, struct FName CallFunc_Array_Get_Item6, int32 CallFunc__0bad7adb6e_ReturnValue9, struct FName CallFunc_Array_Get_Item8, int32 CallFunc__0bad7adb6e_ReturnValue12, struct FName CallFunc_Array_Get_Item11, bool CallFunc__2bff9823d8_ReturnValue10, struct FName CallFunc_Array_Get_Item12, bool CallFunc__2bff9823d8_ReturnValue11, struct FName CallFunc_Array_Get_Item15, int32 CallFunc__0bad7adb6e_ReturnValue17, struct FName CallFunc_Array_Get_Item16, int32 CallFunc__0bad7adb6e_ReturnValue18, int32 CallFunc__0bad7adb6e_ReturnValue21, struct FName CallFunc_Array_Get_Item20, int32 CallFunc__0bad7adb6e_ReturnValue22, int32 ___int_Loop_Counter_Variable22, bool CallFunc__2bff9823d8_ReturnValue20, bool CallFunc__2bff9823d8_ReturnValue23, struct U*d2f00ac7d1* CallFunc_AddChildToVerticalBox_ReturnValue19, struct APlayerController* K2Node_CustomEvent_InPC, bool CallFunc_IsValid_ReturnValue, bool K2Node_DynamicCast_bSuccess2, struct APlayerPawn_v2_C* K2Node_DynamicCast_AsPlayer_Pawn_V_24, int32 ___int_Array_Index_Variable23, int32 ___int_Loop_Counter_Variable24, int32 ___int_Array_Index_Variable24, struct TArray<struct FName> CallFunc__b9c6f6ef6f_ReturnValue3, struct U*d2f00ac7d1* CallFunc_AddChildToVerticalBox_ReturnValue21, struct ATslCharacter* CallFunc__36cf5fd6b9_ReturnValue5); // Function W_WeaponMenu.W_WeaponMenu_C.ExecuteUbergraph_W_WeaponMenu //  // @ game+0x32e590
};

