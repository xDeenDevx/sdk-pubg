// Class WebBrowserWidget.WebBrowser
// Size: 0x350 (Inherited: 0x130)
struct UWebBrowser : UWidget {
	struct FMulticastDelegate OnUrlChanged; // 0x130(0x10)
	struct FMulticastDelegate OnBeforePopup; // 0x140(0x10)
	struct FMulticastDelegate OnTitleChanged; // 0x150(0x10)
	char pad_160[0x80]; // 0x160(0x80)
	struct FMulticastDelegate OnMessageReceived; // 0x1e0(0x10)
	struct FMulticastDelegate OnQRCodeRecognized; // 0x1f0(0x10)
	struct FString *46e9f20938; // 0x200(0x10)
	char pad_210[0x10]; // 0x210(0x10)
	bool *b8f6b5164d; // 0x220(0x01)
	bool *5cecbc946c; // 0x221(0x01)
	bool *69e1295701; // 0x222(0x01)
	char pad_223[0x1]; // 0x223(0x01)
	struct FBox2D *330650cdac; // 0x224(0x14)
	bool *291d1e9ce0; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct USoundClass* SoundClass; // 0x240(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x248(0x08)
	char pad_250[0x100]; // 0x250(0x100)

	struct FString LoadString(); // Function WebBrowserWidget.WebBrowser.LoadString // Final|Native|Public|BlueprintCallable // @ game+0x6af823c
	float AudioFadeIn(); // Function WebBrowserWidget.WebBrowser.AudioFadeIn // Final|Native|Public|BlueprintCallable // @ game+0x6af7bdc
	struct FString OnQRCodeRecognized__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnQRCodeRecognized__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22c9a0
	bool EnableIME(); // Function WebBrowserWidget.WebBrowser.EnableIME // Final|Native|Public|BlueprintCallable // @ game+0x6af7f04
	struct FText OnUrlChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22c9a0
	struct FString SendMessage(); // Function WebBrowserWidget.WebBrowser.SendMessage // Final|Native|Public|BlueprintCallable // @ game+0x6af84f4
	float AudioFadeOut(); // Function WebBrowserWidget.WebBrowser.AudioFadeOut // Final|Native|Public|BlueprintCallable // @ game+0x6af7d0c
	bool SetQRCodeTracking(); // Function WebBrowserWidget.WebBrowser.SetQRCodeTracking // Final|Native|Public|BlueprintCallable // @ game+0x6af87d4
	struct UObject* BindObject(); // Function WebBrowserWidget.WebBrowser.BindObject // Final|Native|Public|BlueprintCallable // @ game+0x6af7de8
	struct FString LoadURL(); // Function WebBrowserWidget.WebBrowser.LoadURL // Final|Native|Public|BlueprintCallable // @ game+0x6af83f8
	struct FText OnTitleChanged__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnTitleChanged__DelegateSignature // MulticastDelegate|Public|Delegate|HasOutParms // @ game+0x22c9a0
	struct FString GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6af8124
	float SetAudioVolume(); // Function WebBrowserWidget.WebBrowser.SetAudioVolume // Final|Native|Public|BlueprintCallable // @ game+0x6af873c
	struct FString OnMessageReceived__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnMessageReceived__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22c9a0
	bool IsAudioMuted(); // Function WebBrowserWidget.WebBrowser.IsAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x6af81e8
	struct FString ExecuteJavascript(); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript // Final|Native|Public|BlueprintCallable // @ game+0x6af7f98
	bool SetAudioMuted(); // Function WebBrowserWidget.WebBrowser.SetAudioMuted // Final|Native|Public|BlueprintCallable // @ game+0x6af85f4
	struct FText GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x6af807c
	struct FString OnBeforePopup__DelegateSignature(); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x22c9a0
	float SetAudioPitch(); // Function WebBrowserWidget.WebBrowser.SetAudioPitch // Final|Native|Public|BlueprintCallable // @ game+0x6af86a4
	struct UObject* UnBindObject(); // Function WebBrowserWidget.WebBrowser.UnBindObject // Final|Native|Public|BlueprintCallable // @ game+0x6af8898
};

