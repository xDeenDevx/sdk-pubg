// Class MovieScene.*5b3d64e612
// Size: 0xb0 (Inherited: 0x28)
struct U*5b3d64e612 : UObject {
	struct FGuid Signature[0x10]; // 0x28(0x10)
	char pad_38[0x78]; // 0x38(0x78)
};

// Class MovieScene.MovieScene
// Size: 0x130 (Inherited: 0xb0)
struct UMovieScene : U*5b3d64e612 {
	struct TArray<struct FMovieSceneSpawnable> *288ba10721[0x10]; // 0xb0(0x10)
	struct TArray<struct FMovieScenePossessable> *05923cf21f[0x10]; // 0xc0(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings[0x10]; // 0xd0(0x10)
	struct TArray<struct UMovieSceneTrack*> *11e268510f[0x10]; // 0xe0(0x10)
	struct UMovieSceneTrack* CameraCutTrack[0x08]; // 0xf0(0x08)
	struct FFloatRange SelectionRange[0x10]; // 0xf8(0x10)
	struct FFloatRange *c57aff3239[0x10]; // 0x108(0x10)
	bool *78634592a0; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float *26e56fa903[0x04]; // 0x11c(0x04)
	float InTime[0x04]; // 0x120(0x04)
	float OutTime[0x04]; // 0x124(0x04)
	float StartTime[0x04]; // 0x128(0x04)
	float EndTime[0x04]; // 0x12c(0x04)
};

// Class MovieScene.*d580154f15
// Size: 0x28 (Inherited: 0x28)
struct U*d580154f15 : UInterface {
};

// Class MovieScene.*e18a9d1f3d
// Size: 0x98 (Inherited: 0x28)
struct U*e18a9d1f3d : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct FMovieSceneBindingOverrideData> *8ad4bc9095[0x10]; // 0x30(0x10)
	char pad_40[0x58]; // 0x40(0x58)
};

// Class MovieScene.*ade452c7c9
// Size: 0x28 (Inherited: 0x28)
struct U*ade452c7c9 : UInterface {
};

// Class MovieScene.*8c2f1dd818
// Size: 0x70 (Inherited: 0x28)
struct U*8c2f1dd818 : UObject {
	struct FName FolderName[0x08]; // 0x28(0x08)
	struct TArray<struct U*8c2f1dd818*> *83203c076c[0x10]; // 0x30(0x10)
	struct TArray<struct UMovieSceneTrack*> *c40940cd18[0x10]; // 0x40(0x10)
	struct TArray<struct FString> *fc5a77e7f2[0x10]; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// Class MovieScene.*14a032dbde
// Size: 0x700 (Inherited: 0x28)
struct U*14a032dbde : UObject {
	char pad_28[0x348]; // 0x28(0x348)
	struct FMulticastDelegate OnPlay[0x10]; // 0x370(0x10)
	struct FMulticastDelegate OnStop[0x10]; // 0x380(0x10)
	struct FMulticastDelegate OnPause[0x10]; // 0x390(0x10)
	char *598733c5c5 : 1; // 0x3a0(0x01)
	char *79e73cc39d : 1; // 0x3a0(0x01)
	char *5a8954a496 : 1; // 0x3a0(0x01)
	char pad_3A0_3 : 5; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct UMovieSceneSequence* Sequence[0x08]; // 0x3a8(0x08)
	float *b10075d914[0x04]; // 0x3b0(0x04)
	float StartTime[0x04]; // 0x3b4(0x04)
	float *0abd4a1669[0x04]; // 0x3b8(0x04)
	int32 *b2d7f331a7[0x04]; // 0x3bc(0x04)
	char pad_3C0[0x10]; // 0x3c0(0x10)
	struct FMovieSceneSequencePlaybackSettings *71e043bb6c[0x28]; // 0x3d0(0x28)
	char pad_3F8[0x308]; // 0x3f8(0x308)

	void *22408b49f5(); // Function MovieScene.*14a032dbde.*22408b49f5 // Final|Native|Public|BlueprintCallable // @ game+0xd038cc
	void PlayReverse(); // Function MovieScene.*14a032dbde.PlayReverse // Final|Native|Public|BlueprintCallable // @ game+0x5ed7ac8
	void SetPlaybackPosition(); // Function MovieScene.*14a032dbde.SetPlaybackPosition // Final|Native|Public|BlueprintCallable // @ game+0x5ed7b7c
	void SetPlayRate(); // Function MovieScene.*14a032dbde.SetPlayRate // Final|Native|Public|BlueprintCallable // @ game+0x5ed7ae4
	void IsPlaying(); // Function MovieScene.*14a032dbde.IsPlaying // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ed7a7c
	void Stop(); // Function MovieScene.*14a032dbde.Stop // Final|Native|Public|BlueprintCallable // @ game+0x5ed7d04
	void Pause(); // Function MovieScene.*14a032dbde.Pause // Final|Native|Public|BlueprintCallable // @ game+0x5ed7a98
	void *ad87fa339d(); // Function MovieScene.*14a032dbde.*ad87fa339d // Final|Native|Public|BlueprintCallable // @ game+0x5ed7cf0
	void GetPlayRate(); // Function MovieScene.*14a032dbde.GetPlayRate // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ed7a1c
	void *fcebe680c3(float* NewStartTime); // Function MovieScene.*14a032dbde.*fcebe680c3 // Final|Native|Public|BlueprintCallable // @ game+0x5ed7c14
	void *b2077c676e(); // Function MovieScene.*14a032dbde.*b2077c676e // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ed7a64
	void *9548ae7454(); // Function MovieScene.*14a032dbde.*9548ae7454 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ed79f8
	struct FMovieSceneObjectBindingID *764b6d0441(); // Function MovieScene.*14a032dbde.*764b6d0441 // Final|Native|Public|BlueprintCallable // @ game+0x5ed78d4
	void *db1643e9dc(); // Function MovieScene.*14a032dbde.*db1643e9dc // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ed7a34
	void Play(); // Function MovieScene.*14a032dbde.Play // Final|Native|Public|BlueprintCallable // @ game+0x5ed7aac
	void *3dc22f4f13(); // Function MovieScene.*14a032dbde.*3dc22f4f13 // Final|Native|Public|BlueprintCallable|BlueprintPure|Const // @ game+0x5ed7a4c
	void *f976cf8725(); // Function MovieScene.*14a032dbde.*f976cf8725 // Final|Native|Public|BlueprintCallable // @ game+0x5ed78a8
};

// Class MovieScene.MovieSceneSection
// Size: 0xd0 (Inherited: 0xb0)
struct UMovieSceneSection : U*5b3d64e612 {
	struct FMovieSceneSectionEvalOptions *27f3a73f7f[0x02]; // 0xb0(0x02)
	char pad_B2[0x2]; // 0xb2(0x02)
	float StartTime[0x04]; // 0xb4(0x04)
	float *0abd4a1669[0x04]; // 0xb8(0x04)
	int32 *3a3a453816[0x04]; // 0xbc(0x04)
	int32 *e5755ec720[0x04]; // 0xc0(0x04)
	char *a0e3b46900 : 1; // 0xc4(0x01)
	char *9006995667 : 1; // 0xc4(0x01)
	char *7ca2a97413 : 1; // 0xc4(0x01)
	char pad_C4_3 : 5; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float *d186ea6a3b[0x04]; // 0xc8(0x04)
	float *30a37445d6[0x04]; // 0xcc(0x04)
};

// Class MovieScene.MovieSceneTrack
// Size: 0xc0 (Inherited: 0xb0)
struct UMovieSceneTrack : U*5b3d64e612 {
	struct FMovieSceneTrackEvalOptions *27f3a73f7f[0x04]; // 0xb0(0x04)
	char pad_B4[0xc]; // 0xb4(0x0c)
};

// Class MovieScene.*f082264a67
// Size: 0xd0 (Inherited: 0xc0)
struct U*f082264a67 : UMovieSceneTrack {
	bool *bd766d36a3; // 0xb8(0x01)
	struct TArray<struct UMovieSceneSection*> *ac3b707af4[0x10]; // 0xc0(0x10)
};

// Class MovieScene.*d88ac26a06
// Size: 0xd0 (Inherited: 0xd0)
struct U*d88ac26a06 : UMovieSceneSection {
};

// Class MovieScene.MovieSceneSequence
// Size: 0x330 (Inherited: 0xb0)
struct UMovieSceneSequence : U*5b3d64e612 {
	struct F*eb532ee921 *32a0e5db70[0x220]; // 0xb0(0x220)
	struct F*091897112a *b5782386b7[0x02]; // 0x2d0(0x02)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	struct TMap<struct UObject*, struct F*eb532ee921> *6bc528fbeb[0x50]; // 0x2d8(0x50)
	bool *455bac0c38; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0xc0 (Inherited: 0xc0)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

