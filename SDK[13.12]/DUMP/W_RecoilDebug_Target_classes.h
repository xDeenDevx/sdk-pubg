// WidgetBlueprintGeneratedClass W_RecoilDebug_Target.W_RecoilDebug_Target_C
// Size: 0x324 (Inherited: 0x258)
struct UW_RecoilDebug_Target_C : UUserWidget {
	struct F*a6c93df757 UberGraphFrame; // 0x258(0x08)
	struct UButton* Button_1; // 0x260(0x08)
	struct UButton* Button_Absolute; // 0x268(0x08)
	struct UButton* Button_Relative; // 0x270(0x08)
	struct UButton* Button_RenderBox; // 0x278(0x08)
	struct UButton* Button_RenderPoint; // 0x280(0x08)
	struct UButton* Button_ZoomIn; // 0x288(0x08)
	struct UButton* Button_ZoomOut; // 0x290(0x08)
	struct UCanvasPanel* CP_GridList; // 0x298(0x08)
	struct UCanvasPanel* CP_PointList; // 0x2a0(0x08)
	struct UImage* Image_2; // 0x2a8(0x08)
	struct UImage* Image_3; // 0x2b0(0x08)
	struct UImage* Image_6; // 0x2b8(0x08)
	struct UImage* Image_7; // 0x2c0(0x08)
	struct UImage* Img_PointDrawType; // 0x2c8(0x08)
	struct URetainerBox* Retainer_GridPanel; // 0x2d0(0x08)
	struct USlider* Slider_50; // 0x2d8(0x08)
	struct UImage* SliderBG; // 0x2e0(0x08)
	struct UTextBlock* T_PointDrawType; // 0x2e8(0x08)
	struct UTextBlock* T_SliderValue; // 0x2f0(0x08)
	struct UW_RecoilDebug_Target_GridMarkH_C* W_RecoilDebug_Target_GridMarkH_313; // 0x2f8(0x08)
	float PositionScale; // 0x300(0x04)
	int32 ZoomLevel; // 0x304(0x04)
	int32 DebugValueType; // 0x308(0x04)
	float StepScale; // 0x30c(0x04)
	int32 DebugRenderType; // 0x310(0x04)
	float BoxSizeScale; // 0x314(0x04)
	float VerticalVariationScalar; // 0x318(0x04)
	float MaxRangeLimit; // 0x31c(0x04)
	int32 PointDrawType; // 0x320(0x04)

	void MarkerGridPopulate(int32 MarkerLevelH, float StepMultiplier, int32 MarkerLevelV, struct UW_RecoilDebug_Target_GridMarkH_C* CallFunc_Create_ReturnValue, bool ___bool_Variable, struct U*efa881b15f* CallFunc__20b76359ee_ReturnValue, float ___float_Variable, float ___float_Variable2, struct FVector2D CallFunc_MakeVector2D_ReturnValue, struct FAnchors K2Node_MakeStruct_Anchors, struct UW_RecoilDebug_Target_GridMarkV_C* CallFunc_Create_ReturnValue2, struct U*efa881b15f* CallFunc__20b76359ee_ReturnValue2, float CallFunc__9082a5ac7b_ReturnValue, float CallFunc__ace9454687_ReturnValue, struct FVector2D CallFunc_MakeVector2D_ReturnValue2, int32 CallFunc__f53d173295_ReturnValue, int32 CallFunc__7f30720928_ReturnValue, float CallFunc__9082a5ac7b_ReturnValue2, struct UW_RecoilDebug_Target_GridMarkH_C* CallFunc_Create_ReturnValue3, float CallFunc__ace9454687_ReturnValue2, struct FVector2D CallFunc_MakeVector2D_ReturnValue3, struct U*efa881b15f* CallFunc__20b76359ee_ReturnValue3, struct U*efa881b15f* CallFunc_AddChildToCanvas_ReturnValue, struct FAnchors K2Node_MakeStruct_Anchors2, float CallFunc__9082a5ac7b_ReturnValue3, float CallFunc__ace9454687_ReturnValue3, float CallFunc__ace9454687_ReturnValue4, float CallFunc__9082a5ac7b_ReturnValue4, int32 CallFunc__7f30720928_ReturnValue2, float CallFunc__9082a5ac7b_ReturnValue5, float CallFunc__9082a5ac7b_ReturnValue6, bool CallFunc__ab61acee03_ReturnValue, float CallFunc__ace9454687_ReturnValue5, struct FVector2D CallFunc_MakeVector2D_ReturnValue4, struct U*efa881b15f* CallFunc_AddChildToCanvas_ReturnValue2, struct FAnchors K2Node_MakeStruct_Anchors3, float CallFunc__9082a5ac7b_ReturnValue7, float CallFunc__ace9454687_ReturnValue6, bool CallFunc__b69b4c5064_ReturnValue, float K2Node_Select_Default, int32 CallFunc__f53d173295_ReturnValue2, float CallFunc__ace9454687_ReturnValue7, float CallFunc__9082a5ac7b_ReturnValue8, float CallFunc__9082a5ac7b_ReturnValue9, int32 CallFunc__7f30720928_ReturnValue3, bool CallFunc__ab61acee03_ReturnValue2, float CallFunc__9082a5ac7b_ReturnValue10, float CallFunc__ace9454687_ReturnValue8, struct FVector2D CallFunc_MakeVector2D_ReturnValue5, struct U*efa881b15f* CallFunc_AddChildToCanvas_ReturnValue3, struct FVector2D CallFunc_MakeVector2D_ReturnValue6); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.MarkerGridPopulate // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Grid_ChangeMarkerZoom(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeMarkerZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Grid_ChangePointZoom(int32 A, int32 PreviousZoom); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangePointZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void AddDataRow(int32 ___int_Variable6, struct FLinearColor K2Node_Select2_Default, float CallFunc__cb3d0fa569_ReturnValue, struct FLinearColor CallFunc__29950ceaf8_ReturnValue, float CallFunc__cb3d0fa569_ReturnValue2, struct FLinearColor CallFunc__29950ceaf8_ReturnValue2, float CallFunc__ace9454687_ReturnValue4, struct FLinearColor K2Node_Select3_Default, struct FVector2D CallFunc_MakeVector2D_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float K2Node_Select4_Default, float CallFunc__ace9454687_ReturnValue5, struct FVector2D CallFunc_MakeVector2D_ReturnValue2, float K2Node_Select5_Default, float K2Node_Select6_Default, float CallFunc__ace9454687_ReturnValue6, struct FVector2D CallFunc_MakeVector2D_ReturnValue3); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddDataRow // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Grid_ChangeZoom(int32 InChange, int32 PreviousZoom); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Grid_ChangeZoom // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void AddBox(struct FLinearColor InColor, struct FVector2D InLocation, struct FVector2D InSize, struct UW_RecoilDebugBox_C* CallFunc_Create_ReturnValue, struct U*efa881b15f* CallFunc__20b76359ee_ReturnValue, struct FAnchors K2Node_MakeStruct_Anchors, float CallFunc__9082a5ac7b_ReturnValue, struct FVector2D CallFunc__f7dca3bfd9_ReturnValue, struct FVector2D CallFunc__f7dca3bfd9_ReturnValue2, struct U*efa881b15f* CallFunc_AddChildToCanvas_ReturnValue); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddBox // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void ResetPoints(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ResetPoints // Public|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void AddPoint(struct FLinearColor InColor, struct FVector2D InLocation, struct UW_RecoilDebugPoint_C* CallFunc_Create_ReturnValue, struct U*efa881b15f* CallFunc__20b76359ee_ReturnValue, struct FAnchors K2Node_MakeStruct_Anchors, float CallFunc__9082a5ac7b_ReturnValue, struct FVector2D CallFunc__f7dca3bfd9_ReturnValue, struct U*efa881b15f* CallFunc_AddChildToCanvas_ReturnValue); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.AddPoint // Public|HasDefaults|BlueprintCallable|BlueprintEvent // @ game+0x20a5d0
	void Construct(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.Construct // BlueprintCosmetic|Event|Public|BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomIn_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_ZoomOut_K2Node_ComponentBoundEvent_139_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_Absolute_K2Node_ComponentBoundEvent_255_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_106_K2Node_ComponentBoundEvent_272_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderPoint_K2Node_ComponentBoundEvent_724_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_RenderBox_K2Node_ComponentBoundEvent_801_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Slider_49_K2Node_ComponentBoundEvent_170_OnFloatValueChangedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature(); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature // BlueprintEvent // @ game+0x20a5d0
	void ExecuteUbergraph_W_RecoilDebug_Target(int32 EntryPoint, int32 ___int_Variable, struct FText CallFunc__62eaa5d275_ReturnValue, struct FText ___text_Variable, struct FText ___text_Variable2, struct FText ___text_Variable3, int32 ___int_Variable2, float ___float_Variable, float ___float_Variable2, float ___float_Variable3, float K2Node_Select_Default, float _5c6cfaa940_Value); // Function W_RecoilDebug_Target.W_RecoilDebug_Target_C.ExecuteUbergraph_W_RecoilDebug_Target // HasDefaults // @ game+0x20a5d0
};

