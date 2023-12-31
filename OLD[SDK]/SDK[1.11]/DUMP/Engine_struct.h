// Enum Engine.ETextGender
enum class ETextGender : uint8 {
	Masculine,
	Feminine,
	Neuter,
	ETextGender_MAX,
};

// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8 {
	Int,
	UInt,
	Float,
	Double,
	Text,
	Gender,
	EFormatArgumentType_MAX,
};

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8 {
	Destroyed,
	LevelTransition,
	EndPlayInEditor,
	RemovedFromWorld,
	Quit,
	EEndPlayReason_MAX,
};

// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8 {
	Cleared,
	NewPath,
	UpdatedDueToGoalMoved,
	UpdatedDueToNavigationChanged,
	Invalidated,
	RePathFailed,
	MetaPathUpdate,
	Custom,
	ENavPathEvent_MAX,
};

// Enum Engine.*5d09199da6
enum class *5d09199da6 : uint8 {
	*b556034ce6,
	*8810f358c2,
	*465caa54cc,
	*6fea7cb9bf,
	*f877e1c876,
	*5d09199da6_MAX,
};

// Enum Engine.*e7608c4584
enum class *e7608c4584 : uint8 {
	*2cb19c3417,
	*3da617762f,
	*bd41791ddd,
	*e6676a8e9d,
	*f11e394312,
	*e7608c4584_MAX,
};

// Enum Engine.*ecdf1ea38a
enum class *ecdf1ea38a : uint8 {
	*70ae98dafa,
	*7658276b99,
	*d4a80b2ca1,
	*8b263ec3ec,
	*6ede8f3675,
	*ecdf1ea38a_MAX,
};

// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8 {
	RCCE_Cycle,
	RCCE_CycleWithOffset,
	RCCE_Oscillate,
	RCCE_Linear,
	RCCE_Constant,
	RCCE_None,
	RCCE_MAX,
};

// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8 {
	Absolute,
	Relative,
	Proportional,
	EAnimLinkMethod_MAX,
};

// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8 {
	NoFiltering,
	LOD,
	ENotifyFilterType_MAX,
};

// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8 {
	Queued,
	BranchingPoint,
	EMontageNotifyTickType_MAX,
};

// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8 {
	Begin,
	End,
	EAnimNotifyEventType_MAX,
};

// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8 {
	RefPose,
	AnimFirstFrame,
	Zero,
	ERootMotionRootLock_MAX,
};

// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8 {
	Linear,
	Cubic,
	HermiteCubic,
	Sinusoidal,
	QuadraticInOut,
	CubicInOut,
	QuarticInOut,
	QuinticInOut,
	CircularIn,
	CircularOut,
	CircularInOut,
	ExpIn,
	ExpOut,
	ExpInOut,
	Custom,
	EAlphaBlendOption_MAX,
};

// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8 {
	NetDriverAlreadyExists,
	NetDriverCreateFailure,
	NetDriverListenFailure,
	ConnectionLost,
	ConnectionTimeout,
	FailureReceived,
	OutdatedClient,
	OutdatedServer,
	PendingConnectionFailure,
	NetGuidMismatch,
	NetChecksumMismatch,
	ENetworkFailure_MAX,
};

// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8 {
	NoLevel,
	LoadMapFailure,
	InvalidURL,
	PackageMissing,
	PackageVersion,
	NoDownload,
	TravelFailure,
	CheatCommands,
	PendingNetGameCreateFailure,
	CloudSaveFailure,
	ServerTravelFailure,
	ClientTravelFailure,
	ETravelFailure_MAX,
};

// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8 {
	TG_PrePhysics,
	TG_StartPhysics,
	TG_DuringPhysics,
	TG_EndPhysics,
	TG_PostPhysics,
	TG_PostUpdateWork,
	TG_LastDemotable,
	TG_NewlySpawned,
	TG_MAX,
};

// Enum Engine.EPendingCreationType
enum class EPendingCreationType : uint8 {
	None,
	IncrementalAndOnDemand,
	OnDemandOnly,
	EPendingCreationType_MAX,
};

// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8 {
	Native,
	SimpleConstructionScript,
	UserConstructionScript,
	Instance,
	EComponentCreationMethod_MAX,
};

// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8 {
	Custom,
	X,
	Y,
	Z,
	UseGlobalPhysicsSetting,
	EPlaneConstraintAxisSetting_MAX,
};

// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8 {
	OneShot,
	OneShot_Reverse,
	Loop_Reset,
	PingPong,
	EInterpToBehaviourType_MAX,
};

// Enum Engine.*a36c3c9f6e
enum class *a36c3c9f6e : uint8 {
	*97b013c4f6,
	*506f0cbcd0,
	*17a4e16bda,
	*c50deced10,
	*8d46663331,
	*d204e8b042,
	*5109295ce2,
	*a36c3c9f6e_MAX,
};

// Enum Engine.EMovementMode
enum class EMovementMode : uint8 {
	MOVE_None,
	MOVE_Walking,
	MOVE_NavWalking,
	MOVE_Falling,
	MOVE_Swimming,
	MOVE_Flying,
	MOVE_Custom,
	MOVE_MAX,
};

// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8 {
	Unknown,
	Portrait,
	PortraitUpsideDown,
	LandscapeLeft,
	LandscapeRight,
	FaceUp,
	FaceDown,
	EScreenOrientation_MAX,
};

// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8 {
	None,
	ForOneFrame,
	ForDuration,
	Persistent,
	EDrawDebugTrace_MAX,
};

// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8 {
	ObjectTypeQuery1,
	ObjectTypeQuery2,
	ObjectTypeQuery3,
	ObjectTypeQuery4,
	ObjectTypeQuery5,
	ObjectTypeQuery6,
	ObjectTypeQuery7,
	ObjectTypeQuery8,
	ObjectTypeQuery9,
	ObjectTypeQuery10,
	ObjectTypeQuery11,
	ObjectTypeQuery12,
	ObjectTypeQuery13,
	ObjectTypeQuery14,
	ObjectTypeQuery15,
	ObjectTypeQuery16,
	ObjectTypeQuery17,
	ObjectTypeQuery18,
	ObjectTypeQuery19,
	ObjectTypeQuery20,
	ObjectTypeQuery21,
	ObjectTypeQuery22,
	ObjectTypeQuery23,
	ObjectTypeQuery24,
	ObjectTypeQuery25,
	ObjectTypeQuery26,
	ObjectTypeQuery27,
	ObjectTypeQuery28,
	ObjectTypeQuery29,
	ObjectTypeQuery30,
	ObjectTypeQuery31,
	ObjectTypeQuery32,
	ObjectTypeQuery_MAX,
	EObjectTypeQuery_MAX,
};

// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8 {
	TraceTypeQuery1,
	TraceTypeQuery2,
	TraceTypeQuery3,
	TraceTypeQuery4,
	TraceTypeQuery5,
	TraceTypeQuery6,
	TraceTypeQuery7,
	TraceTypeQuery8,
	TraceTypeQuery9,
	TraceTypeQuery10,
	TraceTypeQuery11,
	TraceTypeQuery12,
	TraceTypeQuery13,
	TraceTypeQuery14,
	TraceTypeQuery15,
	TraceTypeQuery16,
	TraceTypeQuery17,
	TraceTypeQuery18,
	TraceTypeQuery19,
	TraceTypeQuery20,
	TraceTypeQuery21,
	TraceTypeQuery22,
	TraceTypeQuery23,
	TraceTypeQuery24,
	TraceTypeQuery25,
	TraceTypeQuery26,
	TraceTypeQuery27,
	TraceTypeQuery28,
	TraceTypeQuery29,
	TraceTypeQuery30,
	TraceTypeQuery31,
	TraceTypeQuery32,
	TraceTypeQuery_MAX,
	ETraceTypeQuery_MAX,
};

// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8 {
	Move,
	Stop,
	Return,
	EMoveComponentAction_MAX,
};

// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8 {
	Quit,
	Background,
	EQuitPreference_MAX,
};

// Enum Engine.*5553c9dea0
enum class *5553c9dea0 : uint8 {
	*258e56bde0,
	*6d204bcd19,
	*8d20ad80f4,
	*80492df12e,
	*6c589c35ea,
	*13f5c6a0be,
	*5553c9dea0_MAX,
};

// Enum Engine.EStanceMode
enum class EStanceMode : uint8 {
	STANCE_None,
	STANCE_Stand,
	STANCE_Crouch,
	STANCE_Prone,
	STANCE_Carry,
	STANCE_Carried,
	STANCE_MAX,
};

// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8 {
	KeepRelativeOffset,
	KeepWorldPosition,
	SnapToTarget,
	SnapToTargetIncludingScale,
	EAttachLocation_MAX,
};

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8 {
	KeepRelative,
	KeepWorld,
	SnapToTarget,
	EAttachmentRule_MAX,
};

// Enum Engine.*c67378b5c9
enum class *c67378b5c9 : uint8 {
	*927485af6b,
	*0364e54f6f,
	*8704ee5ed7,
	*c67378b5c9_MAX,
};

// Enum Engine.ENetRole
enum class ENetRole : uint8 {
	ROLE_None,
	ROLE_SimulatedProxy,
	ROLE_AutonomousProxy,
	ROLE_Authority,
	ROLE_MAX,
};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8 {
	Undefined,
	AlwaysSpawn,
	AdjustIfPossibleButAlwaysSpawn,
	AdjustIfPossibleButDontSpawnIfColliding,
	DontSpawnIfColliding,
	ESpawnActorCollisionHandlingMethod_MAX,
};

// Enum Engine.*95c5f230f9
enum class *95c5f230f9 : uint8 {
	*efc0641559,
	*b4768e9424,
	*6c70485f09,
	*46ce3791e3,
	*95c5f230f9_MAX,
};

// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8 {
	UseConfigDefault,
	AlwaysUpdate,
	OnlyUpdateMovable,
	NeverUpdate,
	EActorUpdateOverlapsMethod_MAX,
};

// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8 {
	Disabled,
	Player0,
	Player1,
	Player2,
	Player3,
	Player4,
	Player5,
	Player6,
	Player7,
	EAutoReceiveInput_MAX,
};

// Enum Engine.*7dc6b72b4e
enum class *7dc6b72b4e : uint8 {
	*60ed2a00f3,
	*7c64ee7f92,
	*50a0ac1820,
	*7dc6b72b4e_MAX,
};

// Enum Engine.*3545f79891
enum class *3545f79891 : uint8 {
	*39147ca3e4,
	*fd56fdbbab,
	*850f306971,
	*7dab3fe960,
	*3545f79891_MAX,
};

// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8 {
	Disabled,
	PlacedInWorld,
	Spawned,
	PlacedInWorldOrSpawned,
	EAutoPossessAI_MAX,
};

// Enum Engine.*ab22144e19
enum class *ab22144e19 : uint8 {
	*3f5bff6d89,
	*14c4a3c200,
	*f4befc9a82,
	*f6f6551811,
	*9ec9cf6bab,
	*21fdafb2af,
	*ab22144e19_MAX,
};

// Enum Engine.EDecalChannel
enum class EDecalChannel : uint8 {
	Channel0,
	Channel1,
	Channel2,
	Channel3,
	Num,
	EDecalChannel_MAX,
};

// Enum Engine.*a6cf5bae1a
enum class *a6cf5bae1a : uint8 {
	*c9f8580d25,
	*617159d198,
	*dbdc526951,
	*b0e376aa00,
	*8834f846a2,
	*a6cf5bae1a_MAX,
};

// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8 {
	Default,
	ForceCPUAndGPU,
	EMeshBufferAccess_MAX,
};

// Enum Engine.*c0b35c19fa
enum class *c0b35c19fa : uint8 {
	*9dbdb8f493,
	*7e90015bcb,
	*0ab3e9127a,
	*c0b35c19fa_MAX,
};

// Enum Engine.*24096ec337
enum class *24096ec337 : uint8 {
	*3d55f2b556,
	*34a15b7c13,
	*4a1e5d436f,
	*5dc7e24b29,
	*24096ec337_MAX,
};

// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8 {
	Invalid,
	Bone,
	Socket,
	EComponentSocketType_MAX,
};

// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8 {
	Static,
	Stationary,
	Movable,
	EComponentMobility_MAX,
};

// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8 {
	SurfaceType_Default,
	SurfaceType1,
	SurfaceType2,
	SurfaceType3,
	SurfaceType4,
	SurfaceType5,
	SurfaceType6,
	SurfaceType7,
	SurfaceType8,
	SurfaceType9,
	SurfaceType10,
	SurfaceType11,
	SurfaceType12,
	SurfaceType13,
	SurfaceType14,
	SurfaceType15,
	SurfaceType16,
	SurfaceType17,
	SurfaceType18,
	SurfaceType19,
	SurfaceType20,
	SurfaceType21,
	SurfaceType22,
	SurfaceType23,
	SurfaceType24,
	SurfaceType25,
	SurfaceType26,
	SurfaceType27,
	SurfaceType28,
	SurfaceType29,
	SurfaceType30,
	SurfaceType31,
	SurfaceType32,
	SurfaceType33,
	SurfaceType34,
	SurfaceType35,
	SurfaceType36,
	SurfaceType37,
	SurfaceType38,
	SurfaceType39,
	SurfaceType40,
	SurfaceType41,
	SurfaceType42,
	SurfaceType43,
	SurfaceType44,
	SurfaceType45,
	SurfaceType46,
	SurfaceType47,
	SurfaceType48,
	SurfaceType49,
	SurfaceType50,
	SurfaceType51,
	SurfaceType52,
	SurfaceType53,
	SurfaceType54,
	SurfaceType55,
	SurfaceType56,
	SurfaceType57,
	SurfaceType58,
	SurfaceType59,
	SurfaceType60,
	SurfaceType61,
	SurfaceType62,
	SurfaceType_Max,
	EPhysicalSurface_MAX,
};

// Enum Engine.*eaa9129fe2
enum class *eaa9129fe2 : uint8 {
	*8f770b556a,
	*bf3b3005b3,
	*8f1035f6aa,
	*71e44eed66,
	*5e4d757f23,
	*eaa9129fe2_MAX,
};

// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8 {
	DORM_Never,
	DORM_Awake,
	DORM_DormantAll,
	DORM_DormantPartial,
	DORM_ConnectedDormantPartial,
	DORM_Initial,
	DORN_MAX,
	ENetDormancy_MAX,
};

// Enum Engine.*e0955236c9
enum class *e0955236c9 : uint8 {
	*d955c1b6c8,
	*d4d78a3307,
	*e7729e1d73,
	*07e5abfb70,
	*1f87ab84d9,
	*0e2b0b0c0a,
	*3d40b8279d,
	*00b7c1857a,
	*e0955236c9_MAX,
};

// Enum Engine.*095bed0a1f
enum class *095bed0a1f : uint8 {
	*238ef4ad4a,
	*2abfbbaf60,
	*1b8ffaec37,
	*095bed0a1f_MAX,
};

// Enum Engine.*dfcd2d838b
enum class *dfcd2d838b : uint8 {
	*e8a338a810,
	*e1bdb3a73a,
	*f1a42686d7,
	*1959c59609,
	*dfcd2d838b_MAX,
};

// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8 {
	NoCollision,
	QueryOnly,
	PhysicsOnly,
	QueryAndPhysics,
	ECollisionEnabled_MAX,
};

// Enum Engine.*ca11c8446c
enum class *ca11c8446c : uint8 {
	*b7ec397f8b,
	*2c4a95959d,
	*cc98c51c3b,
	*1ad63125b4,
	*7a1365c537,
	*d59c7d0cd0,
	*ca11c8446c_MAX,
};

// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8 {
	Normal,
	Sensitive,
	Custom,
	ESleepFamily_MAX,
};

// Enum Engine.*0baddcb8e4
enum class *0baddcb8e4 : uint8 {
	*ae6cfa97a4,
	*109bce61d2,
	*efff6009f5,
	*0baddcb8e4_MAX,
};

// Enum Engine.*0757624f19
enum class *0757624f19 : uint8 {
	*21857d5a1b,
	*41f36b2234,
	*f5c7406a3a,
	*16353f8e98,
	*0757624f19_MAX,
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8 {
	ECR_Ignore,
	ECR_Overlap,
	ECR_Block,
	ECR_MAX,
};

// Enum Engine.*f52698a452
enum class *f52698a452 : uint8 {
	*729f7c8f02,
	*15ebab2b96,
	*7e3ba67ec0,
	*3888dd56c2,
	*f52698a452_MAX,
};

// Enum Engine.*4ae36ca142
enum class *4ae36ca142 : uint8 {
	*c1ed5c5fa6,
	*3c915aed42,
	*b5393222ce,
	*6a455f32bb,
	*4ae36ca142_MAX,
};

// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8 {
	ECC_WorldStatic,
	ECC_WorldDynamic,
	ECC_Pawn,
	ECC_Visibility,
	ECC_Camera,
	ECC_PhysicsBody,
	ECC_Vehicle,
	ECC_Destructible,
	ECC_EngineTraceChannel1,
	ECC_EngineTraceChannel2,
	ECC_EngineTraceChannel3,
	ECC_EngineTraceChannel4,
	ECC_EngineTraceChannel5,
	ECC_EngineTraceChannel6,
	ECC_GameTraceChannel1,
	ECC_GameTraceChannel2,
	ECC_GameTraceChannel3,
	ECC_GameTraceChannel4,
	ECC_GameTraceChannel5,
	ECC_GameTraceChannel6,
	ECC_GameTraceChannel7,
	ECC_GameTraceChannel8,
	ECC_GameTraceChannel9,
	ECC_GameTraceChannel10,
	ECC_GameTraceChannel11,
	ECC_GameTraceChannel12,
	ECC_GameTraceChannel13,
	ECC_GameTraceChannel14,
	ECC_GameTraceChannel15,
	ECC_GameTraceChannel16,
	ECC_GameTraceChannel17,
	ECC_GameTraceChannel18,
	ECC_OverlapAll_Deprecated,
	ECC_MAX,
};

// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8 {
	Disabled,
	Linear,
	Exponential,
	Replay,
	RotationOnly,
	ENetworkSmoothingMode_MAX,
};

// Enum Engine.*3ca147d66f
enum class *3ca147d66f : uint8 {
	*40a7cb4647,
	*2c572ffcf2,
	*d3ab561260,
	*414b3def6a,
	*3ca147d66f_MAX,
};

// Enum Engine.*f2af7ea666
enum class *f2af7ea666 : uint8 {
	*ac2ae9bb04,
	*d088257cac,
	*298691f669,
	*f77bd6b465,
	*f32e0d015e,
	*7409c28347,
	*bed66f953f,
	*f2af7ea666_MAX,
};

// Enum Engine.*490d38ab77
enum class *490d38ab77 : uint8 {
	*99e9467dbb,
	*161d91be08,
	*ef96425619,
	*b36438c819,
	*f570339712,
	*490d38ab77_MAX,
};

// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8 {
	SAMPLERTYPE_Color,
	SAMPLERTYPE_Grayscale,
	SAMPLERTYPE_Alpha,
	SAMPLERTYPE_Normal,
	SAMPLERTYPE_Masks,
	SAMPLERTYPE_DistanceFieldFont,
	SAMPLERTYPE_LinearColor,
	SAMPLERTYPE_LinearGrayscale,
	SAMPLERTYPE_MAX,
};

// Enum Engine.*dfb56dedba
enum class *dfb56dedba : uint8 {
	*869a326df6,
	*d7573ac169,
	*ef076a49ce,
	*3c51f0bd44,
	*dfb56dedba_MAX,
};

// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8 {
	MSM_Unlit,
	MSM_DefaultLit,
	MSM_Subsurface,
	MSM_PreintegratedSkin,
	MSM_ClearCoat,
	MSM_SubsurfaceProfile,
	MSM_TwoSidedFoliage,
	MSM_Hair,
	MSM_Cloth,
	MSM_Eye,
	MSM_MAX,
};

// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8 {
	SceneDepth,
	DistanceField,
	HeightBuffer,
	EParticleCollisionMode_MAX,
};

// Enum Engine.*a1588812a5
enum class *a1588812a5 : uint8 {
	*b4ce3137cc,
	*07537f6ddf,
	*91c5bfd89e,
	*8f14754c9b,
	*a1588812a5_MAX,
};

// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8 {
	Force8BitsPerChannel,
	Default,
	HighPrecisionNormals,
	Force16BitsPerChannel,
	EGBufferFormat_MAX,
};

// Enum Engine.*1749cfde27
enum class *1749cfde27 : uint8 {
	*2c88ae967d,
	*38f27cb31e,
	*35e6fefd3d,
	*588197e3b0,
	*1749cfde27_MAX,
};

// Enum Engine.*bf5d45bad1
enum class *bf5d45bad1 : uint8 {
	*e213bf5270,
	*d62e193309,
	*240fd227f5,
	*b0d25ed4b6,
	*8c3c502174,
	*51695e5d65,
	*14fae4370d,
	*6dea95bf98,
	*ac545221a5,
	*2f6b0dce12,
	*686f746ac0,
	*7d37d5d030,
	*bf5d45bad1_MAX,
};

// Enum Engine.*e58b828cef
enum class *e58b828cef : uint8 {
	*ec8555c21d,
	*7f51114d44,
	*232b5543a6,
	*166065a660,
	*e58b828cef_MAX,
};

// Enum Engine.*fe3bf3bf18
enum class *fe3bf3bf18 : uint8 {
	*52fb858115,
	*4beee4c247,
	*512731c606,
	*fe3bf3bf18_MAX,
};

// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8 {
	TLM_VolumetricNonDirectional,
	TLM_VolumetricDirectional,
	TLM_VolumetricPerVertexNonDirectional,
	TLM_VolumetricPerVertexDirectional,
	TLM_Surface,
	TLM_SurfaceDirectional,
	TLM_SurfacePerVertexNonDirectional,
	TLM_SurfacePerVertexDirectional,
	TLM_MAX,
};

// Enum Engine.*d1a7f8979e
enum class *d1a7f8979e : uint8 {
	*09d154833b,
	*91d8afeeae,
	*528c847324,
	*ff4077086c,
	*d1a7f8979e_MAX,
};

// Enum Engine.EBlendMode
enum class EBlendMode : uint8 {
	BLEND_Opaque,
	BLEND_Masked,
	BLEND_Translucent,
	BLEND_Additive,
	BLEND_Modulate,
	BLEND_AlphaComposite,
	BLEND_MAX,
};

// Enum Engine.*b509d46bab
enum class *b509d46bab : uint8 {
	*33f9638cd9,
	*0b80b53054,
	*2b413c10fc,
	*b509d46bab_MAX,
};

// Enum Engine.*8421afef2f
enum class *8421afef2f : uint8 {
	*2c4d002338,
	*0f199c2580,
	*4f44489025,
	*8a1db79f2a,
	*8421afef2f_MAX,
};

// Enum Engine.*aa5951ad16
enum class *aa5951ad16 : uint8 {
	*0282e0045a,
	*c4270fd3c1,
	*138b0c1dca,
	*aa5951ad16_MAX,
};

// Enum Engine.*8806655748
enum class *8806655748 : uint8 {
	*c101e9645b,
	*cd86231b1c,
	*d35e874c4b,
	*9a83046238,
	*8806655748_MAX,
};

// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8 {
	AspectRatio_MaintainYFOV,
	AspectRatio_MaintainXFOV,
	AspectRatio_MajorAxisFOV,
	AspectRatio_MAX,
};

// Enum Engine.*c1e893d008
enum class *c1e893d008 : uint8 {
	*904c1a1925,
	*010f196bfa,
	*569a292231,
	*975b8953d2,
	*4e7d9b327b,
	*1295d60e61,
	*a8df378ff3,
	*053fe05baa,
	*e54976e641,
	*edf933565f,
	*6243c45fa9,
	*1537887988,
	*e1ed92a9a4,
	*d473e9059e,
	*58357da5fb,
	*e099ce3e5f,
	*59280052b6,
	*3ccf5d466d,
	*ca426e3eca,
	*4946b511d0,
	*85293919db,
	*ade613916a,
	*6c49f1eb43,
	*f9b74485cc,
	*01b95625a5,
	*f5619289e9,
	*d5cc8ee0fd,
	*249e91cdb7,
	*e6d04ba0be,
	*ae154b309c,
	*4c142b5709,
	*e4cea41300,
	*c1e893d008_MAX,
};

// Enum Engine.EDemoFailure
enum class EDemoFailure : uint8 {
	None,
	PlayCommand,
	PlayNoWorld,
	PlayPIE,
	PlayCreateDemoDriver,
	Connect,
	ConnectNoWorld,
	ConnectNoGameInstance,
	ConnectInitBase,
	ConnectStreamingReady,
	ConnectDemoNotFound,
	ConnectCorrupt,
	ConnectSpecificCorrupt,
	ConnectPostNoWorld,
	ConnectLoadMap,
	TickDispatchStreamer,
	TickDispatchFileAr,
	ConditionallyReadFrame,
	ConditionallyReadFrameFileAr,
	ConditionallyReadFrameStreamer,
	ConditionallyReadFrameTimeChecksum,
	ConditionallyReadFrameFileAr2,
	ConditionallyReadFrameExternalData,
	ConditionallyReadFramePacket,
	ConditionallyProcessPacket,
	DownloadHeader,
	DownloadHeaderDemoNotFound,
	DownloadHeaderCorrupt,
	DownloadHeaderSpecificCorrupt,
	DownloadHeaderLevelNamesAndTimes,
	CheckpointReady,
	CheckpointArchiveEmpty,
	CheckpointReadFrame,
	CheckpointReadFrameFileAr,
	CheckpointReadFrameStreamer,
	CheckpointReadFrameTimeChecksum,
	CheckpointReadFrameFileAr2,
	CheckpointReadFrameExternalData,
	CheckpointReadFramePacket,
	CheckpointProcessPacket,
	RecCommand,
	RecNoReplays,
	RecNoWorld,
	RecPIE,
	RecAlreadyPlay,
	RecCreateDemoDriver,
	Listen,
	ListenInitBase,
	ListenNoWorldSettings,
	ListenWriteHeader,
	ListenStreamingReady,
	TickFlushStreamer,
	TickFlushFileAr,
	SeamlessTravelWriteHeader,
	EDemoFailure_MAX,
};

// Enum Engine.*ae68ab384e
enum class *ae68ab384e : uint8 {
	*2a2a30d4e7,
	*ce54baa7d7,
	*77b23b7ad3,
	*2137a40ab9,
	*ae68ab384e_MAX,
};

// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8 {
	NotLagging,
	Lagging,
	ENetworkLagState_MAX,
};

// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8 {
	DoNotLock,
	LockOnCapture,
	LockAlways,
	EMouseLockMode_MAX,
};

// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8 {
	NoCapture,
	CapturePermanently,
	CapturePermanently_IncludingInitialMouseDown,
	CaptureDuringMouseDown,
	CaptureDuringRightMouseDown,
	EMouseCaptureMode_MAX,
};

// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8 {
	Enabled,
	Disabled,
	DevelopmentOnly,
	ENodeEnabledState_MAX,
};

// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8 {
	NoPins,
	Shown,
	Hidden,
	ENodeAdvancedPins_MAX,
};

// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8 {
	FullTitle,
	ListView,
	EditableTitle,
	MenuTitle,
	MAX_TitleTypes,
	ENodeTitleType_MAX,
};

// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8 {
	EGPD_Input,
	EGPD_Output,
	EGPD_MAX,
};

// Enum Engine.*ae9e1f5648
enum class *ae9e1f5648 : uint8 {
	*5221c8c4e7,
	*6149868b33,
	*8c6fb87e21,
	*ae9e1f5648_MAX,
};

// Enum Engine.*27cbad6176
enum class *27cbad6176 : uint8 {
	*c0dbc47a92,
	*46b46e8272,
	*80adc407ea,
	*ff16d7711c,
	*2fe37c14e9,
	*27cbad6176_MAX,
};

// Enum Engine.*8d98cbd81d
enum class *8d98cbd81d : uint8 {
	*84f0f60b0a,
	*bf3140c79e,
	*d7d827dba4,
	*da8eca9228,
	*8d98cbd81d_MAX,
};

// Enum Engine.*0317138bd9
enum class *0317138bd9 : uint8 {
	*e530703949,
	*66555a0584,
	*0a960490c4,
	*df5029ddbd,
	*15d2760b17,
	*8d27172c0a,
	*2bbb1ef5fa,
	*5c97a17622,
	*aa52f0dd82,
	*56593d217a,
	*6a472f24e8,
	*b2b1c7fe2a,
	*b8085c69f9,
	*b012643df8,
	*0317138bd9_MAX,
};

// Enum Engine.*487695907c
enum class *487695907c : uint8 {
	*f55f127dd9,
	*155326eb14,
	*5a41ad21d8,
	*355ad3599c,
	*c5e2065e6b,
	*6287445557,
	*408df1469b,
	*6c121fcfe5,
	*9c5bc73993,
	*487695907c_MAX,
};

// Enum Engine.ESimplygonColorChannels
enum class ESimplygonColorChannels : uint8 {
	RGBA,
	RGB,
	L,
	ESimplygonColorChannels_MAX,
};

// Enum Engine.ESimplygonTextureSamplingQuality
enum class ESimplygonTextureSamplingQuality : uint8 {
	Poor,
	Low,
	Medium,
	High,
	ESimplygonTextureSamplingQuality_MAX,
};

// Enum Engine.ESimplygonCasterType
enum class ESimplygonCasterType : uint8 {
	None,
	Color,
	Normals,
	Opacity,
	ESimplygonCasterType_MAX,
};

// Enum Engine.ESimplygonTextureStrech
enum class ESimplygonTextureStrech : uint8 {
	None,
	VerySmall,
	Small,
	Medium,
	Large,
	VeryLarge,
	ESimplygonTextureStrech_MAX,
};

// Enum Engine.EMaterialLODType
enum class EMaterialLODType : uint8 {
	Off,
	BakeTexture,
	BakeVertexColor,
	Replace,
	EMaterialLODType_MAX,
};

// Enum Engine.ESimplygonLODType
enum class ESimplygonLODType : uint8 {
	Reduction,
	Remeshing,
	ESimplygonLODType_MAX,
};

// Enum Engine.EOptimizationMetric
enum class EOptimizationMetric : uint8 {
	TrianglePercentage,
	OnScreenSize,
	MaxDeviation,
	EOptimizationMetric_MAX,
};

// Enum Engine.EMaterialProxySmaplingQuality
enum class EMaterialProxySmaplingQuality : uint8 {
	Poor,
	Low,
	Medium,
	High,
	EMaterialProxySmaplingQuality_MAX,
};

// Enum Engine.EUVStrech
enum class EUVStrech : uint8 {
	Small,
	Medium,
	Large,
	VeryLarge,
	EUVStrech_MAX,
};

// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8 {
	MaterialMergeType_Default,
	MaterialMergeType_Simplygon,
	MaterialMergeType_MAX,
};

// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8 {
	TextureSizingType_UseSingleTextureSize,
	TextureSizingType_UseAutomaticBiasedSizes,
	TextureSizingType_UseManualOverrideTextureSize,
	TextureSizingType_UseSimplygonAutomaticSizing,
	TextureSizingType_MAX,
};

// Enum Engine.*48454f8142
enum class *48454f8142 : uint8 {
	*68574c8787,
	*26e5b63012,
	*62985978de,
	*48454f8142_MAX,
};

// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8 {
	AllLODs,
	SpecificLOD,
	CalculateLOD,
	LowestDetailLOD,
	EMeshLODSelectionType_MAX,
};

// Enum Engine.*65c47359c7
enum class *65c47359c7 : uint8 {
	*7e489502b7,
	*43ab7c378b,
	*a6f955cfc6,
	*ff9a1d3cd0,
	*65c47359c7_MAX,
};

// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8 {
	High,
	Medium,
	Low,
	ELandscapeCullingPrecision_MAX,
};

// Enum Engine.EPhysXAggregationMode
enum class EPhysXAggregationMode : uint8 {
	NoCollision,
	BlockAllWithComplexAsSimple,
	EPhysXAggregationMode_MAX,
};

// Enum Engine.EChartAggregationMode
enum class EChartAggregationMode : uint8 {
	TextureSize,
	SurfaceArea,
	PixelDensity,
	UVSize,
	EChartAggregationMode_MAX,
};

// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8 {
	Triangles,
	Vertices,
	Any,
	EStaticMeshReductionTerimationCriterion_MAX,
};

// Enum Engine.EImposterCaptureType
enum class EImposterCaptureType : uint8 {
	No,
	Quarter,
	Half,
	Full,
	EImposterCaptureType_MAX,
};

// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8 {
	Off,
	Lowest,
	Low,
	Normal,
	High,
	Highest,
	EMeshFeatureImportance_MAX,
};

// Enum Engine.EAutoBenchPathType
enum class EAutoBenchPathType : uint8 {
	SnakeCurve,
	HilbertCurve,
	EAutoBenchPathType_MAX,
};

// Enum Engine.EAutoBenchViewMode
enum class EAutoBenchViewMode : uint8 {
	Default,
	Top,
	EAutoBenchViewMode_MAX,
};

// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8 {
	MP_EmissiveColor,
	MP_Opacity,
	MP_OpacityMask,
	MP_DiffuseColor,
	MP_SpecularColor,
	MP_BaseColor,
	MP_Metallic,
	MP_Specular,
	MP_Roughness,
	MP_Normal,
	MP_WorldPositionOffset,
	MP_WorldDisplacement,
	MP_TessellationMultiplier,
	MP_SubsurfaceColor,
	MP_SubsurfaceProfile,
	MP_CustomData0,
	MP_CustomData1,
	MP_AmbientOcclusion,
	MP_Refraction,
	MP_CustomizedUVs0,
	MP_CustomizedUVs1,
	MP_CustomizedUVs2,
	MP_CustomizedUVs3,
	MP_CustomizedUVs4,
	MP_CustomizedUVs5,
	MP_CustomizedUVs6,
	MP_CustomizedUVs7,
	MP_PixelDepthOffset,
	MP_Temperature,
	MP_TemperatureAlpha,
	MP_MaterialAttributes,
	MP_CustomOutput,
	MP_MAX,
};

// Enum Engine.EDOFMode
enum class EDOFMode : uint8 {
	Default,
	SixDOF,
	YZPlane,
	XZPlane,
	XYPlane,
	CustomPlane,
	None,
	EDOFMode_MAX,
};

// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8 {
	Invalid,
	Error,
	Fail,
	Success,
	ENavigationQueryResult_MAX,
};

// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8 {
	Invalid,
	Instant,
	Lazy,
	ENavDataGatheringModeConfig_MAX,
};

// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8 {
	Default,
	Instant,
	Lazy,
	ENavDataGatheringMode_MAX,
};

// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8 {
	Default,
	Enable,
	Disable,
	MAX,
	ENavigationOptionFlag_MAX,
};

// Enum Engine.*dc75936d4b
enum class *dc75936d4b : uint8 {
	*ea13d229cc,
	*b61e73e75f,
	*5c7131c38c,
	*767ab06938,
	*fc5177836a,
	*577bc3e177,
	*a56120274c,
	*a6d3ee1b5f,
	*6604345c99,
	*037cc5ebfb,
	*f6aac50848,
	*dc75936d4b_MAX,
};

// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8 {
	No,
	Yes,
	EvenIfNotCollidable,
	DontExport,
	EHasCustomNavigableGeometry_MAX,
};

// Enum Engine.*2cf50fcfdf
enum class *2cf50fcfdf : uint8 {
	*f4a52cf6a2,
	*34d5eefa61,
	*43e8e11967,
	*80f31cef0d,
	*2cf50fcfdf_MAX,
};

// Enum Engine.EStaticMeshLODType
enum class EStaticMeshLODType : uint8 {
	Reduction,
	Proxy,
	EStaticMeshLODType_MAX,
};

// Enum Engine.*e3d2c2c424
enum class *e3d2c2c424 : uint8 {
	*f332160935,
	*db35f11ce8,
	*054185cb01,
	*e3d2c2c424_MAX,
};

// Enum Engine.*1588ee0d08
enum class *1588ee0d08 : uint8 {
	*e326ce5652,
	*24dd858e2e,
	*da1f0496a4,
	*7573891bcb,
	*939822cdc2,
	*59440a9ee2,
	*84570ddef2,
	*c8bf1108b4,
	*1588ee0d08_MAX,
};

// Enum Engine.*9f09ca6c1e
enum class *9f09ca6c1e : uint8 {
	*ecd2363187,
	*e52b384490,
	*f5ae628662,
	*e9f2e870c3,
	*a1eac3297d,
	*4a43b88e86,
	*9f09ca6c1e_MAX,
};

// Enum Engine.*98ccb57006
enum class *98ccb57006 : uint8 {
	*2662f61462,
	*a878f8ed53,
	*d5131eb2d6,
	*36ee348d82,
	*98ccb57006_MAX,
};

// Enum Engine.*3752c549eb
enum class *3752c549eb : uint8 {
	*944dd8360b,
	*98ef38fbca,
	*a31254a732,
	*61c61d2116,
	*a83822af8e,
	*dc94d00a56,
	*9de0a8685f,
	*3752c549eb_MAX,
};

// Enum Engine.*05333b5a89
enum class *05333b5a89 : uint8 {
	*2c0cbf55a8,
	*32f15ceb33,
	*a3e1e69e6b,
	*03097bc881,
	*a89fcd6c75,
	*d6cccda36b,
	*75ae4d8123,
	*580dcb10a8,
	*c151f3e954,
	*d1522aee57,
	*84da88c492,
	*e0600b485c,
	*cb67c7f763,
	*34823349ff,
	*57181023bd,
	*c7ebd3550c,
	*9ad43b9c43,
	*844de5c210,
	*f5b08362ba,
	*779973a19c,
	*ef0174b86d,
	*cd2b86a2a6,
	*0e092bb2bd,
	*76bb1633b6,
	*05333b5a89_MAX,
};

// Enum Engine.*8d2645b9ee
enum class *8d2645b9ee : uint8 {
	*6d2a569a08,
	*4e093b4bd2,
	*ee8ee31036,
	*39a5ec5fde,
	*cb496aeae4,
	*761e66b742,
	*8d2645b9ee_MAX,
};

// Enum Engine.*d4a8eb9d2e
enum class *d4a8eb9d2e : uint8 {
	*031d5412a1,
	*cdf2252b9c,
	*44c7ed3d29,
	*5cb14c6c1f,
	*4904d401b2,
	*d4a8eb9d2e_MAX,
};

// Enum Engine.EHBAOBlurRadius
enum class EHBAOBlurRadius : uint8 {
	AOBR_BlurRadius0,
	AOBR_BlurRadius2,
	AOBR_BlurRadius4,
	AOBR_MAX,
};

// Enum Engine.*3d433ad022
enum class *3d433ad022 : uint8 {
	*d7e5869712,
	*d5103fa6e5,
	*023a0d3d6f,
	*3d433ad022_MAX,
};

// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8 {
	AEM_Histogram,
	AEM_Basic,
	AEM_MAX,
};

// Enum Engine.*277c9e52b8
enum class *277c9e52b8 : uint8 {
	*4b118804db,
	*b358ab3ca2,
	*1750393be3,
	*a5a2c6815c,
	*1f96156842,
	*277c9e52b8_MAX,
};

// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8 {
	DOFM_BokehDOF,
	DOFM_Gaussian,
	DOFM_CircleDOF,
	DOFM_MAX,
};

// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8 {
	CameraLocal,
	World,
	UserDefined,
	ECameraAnimPlaySpace_MAX,
};

// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8 {
	Perspective,
	Orthographic,
	ECameraProjectionMode_MAX,
};

// Enum Engine.*904dd505da
enum class *904dd505da : uint8 {
	*700c58da81,
	*ef620e8b88,
	*3f6368612c,
	*904dd505da_MAX,
};

// Enum Engine.*36b6c769f4
enum class *36b6c769f4 : uint8 {
	*c877ef5d02,
	*2a1f8a910d,
	*27b1a11ab5,
	*36b6c769f4_MAX,
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8 {
	Start,
	Update,
	Stop,
	EDynamicForceFeedbackAction_MAX,
};

// Enum Engine.*7d46ece45e
enum class *7d46ece45e : uint8 {
	*fdc79fbd2b,
	*97cac6caab,
	*268d4b2315,
	*2a9579955b,
	*7d46ece45e_MAX,
};

// Enum Engine.*eec63e9e4c
enum class *eec63e9e4c : uint8 {
	*256680606f,
	*958bfcce47,
	*38c22023ff,
	*3b49f4dfb3,
	*eec63e9e4c_MAX,
};

// Enum Engine.*2c04465ccd
enum class *2c04465ccd : uint8 {
	*75e7add936,
	*01a0beb239,
	*d2eadea059,
	*c1a9009d8d,
	*fd6ff58e45,
	*2c04465ccd_MAX,
};

// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8 {
	MD_Surface,
	MD_DeferredDecal,
	MD_LightFunction,
	MD_Volume,
	MD_PostProcess,
	MD_UI,
	MD_MAX,
};

// Enum Engine.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8 {
	Static,
	DynamicModifiersOnly,
	Dynamic,
	LegacyGeneration,
	ERuntimeGenerationType_MAX,
};

// Enum Engine.ERecastPartitioning
enum class ERecastPartitioning : uint8 {
	Monotone,
	Watershed,
	ChunkyMonotone,
	ERecastPartitioning_MAX,
};

// Enum Engine.*f76d87cbca
enum class *f76d87cbca : uint8 {
	*c254da47cc,
	*08c1087518,
	*991a2834de,
	*35c824cd3a,
	*f76d87cbca_MAX,
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8 {
	BothWays,
	LeftToRight,
	RightToLeft,
	ENavLinkDirection_MAX,
};

// Enum Engine.*fecf2ec050
enum class *fecf2ec050 : uint8 {
	*8b451835ee,
	*8e068151ed,
	*7572a25241,
	*c562aa537e,
	*fecf2ec050_MAX,
};

// Enum Engine.*4460aee05d
enum class *4460aee05d : uint8 {
	*0240e7b569,
	*d329f2d079,
	*3f6890508c,
	*cda5f96c84,
	*4460aee05d_MAX,
};

// Enum Engine.*1a3d53a2a5
enum class *1a3d53a2a5 : uint8 {
	*2b710e1dd2,
	*456a88c3a0,
	*f8ff961379,
	*1a3d53a2a5_MAX,
};

// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8 {
	EPET_Any,
	EPET_Spawn,
	EPET_Death,
	EPET_Collision,
	EPET_Burst,
	EPET_Blueprint,
	EPET_MAX,
};

// Enum Engine.*4a39d4b848
enum class *4a39d4b848 : uint8 {
	*597d3afc6f,
	*28aff9d613,
	*19b3cfcc64,
	*3e1ca76d40,
	*4a39d4b848_MAX,
};

// Enum Engine.*730c5e523e
enum class *730c5e523e : uint8 {
	*62e885581d,
	*63b2305d07,
	*5776b539e1,
	*355bd5495d,
	*50905c19a2,
	*e9b57300d3,
	*cd81c8f244,
	*32513686c8,
	*014bf8a2c9,
	*730c5e523e_MAX,
};

// Enum Engine.EAxisOption
enum class EAxisOption : uint8 {
	X,
	Y,
	Z,
	X_Neg,
	Y_Neg,
	Z_Neg,
	Custom,
	EAxisOption_MAX,
};

// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8 {
	Linear,
	Step,
	EAnimInterpolationType_MAX,
};

// Enum Engine.*a20ad39f46
enum class *a20ad39f46 : uint8 {
	*2e00f6af3f,
	*bbd80ced04,
	*d0bf017593,
	*9d0fb0dd70,
	*a20ad39f46_MAX,
};

// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8 {
	AAT_None,
	AAT_LocalSpaceBase,
	AAT_RotationOffsetMeshSpace,
	AAT_MAX,
};

// Enum Engine.*f8da038c2b
enum class *f8da038c2b : uint8 {
	*8bc5b8d294,
	*1b9aea520d,
	*02d97c2661,
	*5273462c05,
	*f8da038c2b_MAX,
};

// Enum Engine.*8056b80e80
enum class *8056b80e80 : uint8 {
	*f68174ea48,
	*5ef69095ba,
	*57b8f01e00,
	*974dfc722e,
	*fc64815bbc,
	*8056b80e80_MAX,
};

// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8 {
	BA_X,
	BA_Y,
	BA_Z,
	BA_MAX,
};

// Enum Engine.ESkeletalMeshLODType
enum class ESkeletalMeshLODType : uint8 {
	Reduction,
	Proxy,
	ESkeletalMeshLODType_MAX,
};

// Enum Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8 {
	SMOT_NumOfTriangles,
	SMOT_MaxDeviation,
	SMOT_ScreenSize,
	SMOT_MAX,
};

// Enum Engine.*1557736a5e
enum class *1557736a5e : uint8 {
	*ef4fb37bd5,
	*e9a6d3447d,
	*7bdcb03553,
	*08d8a02d81,
	*b846585593,
	*b6cb3c58de,
	*e421195eaa,
	*1557736a5e_MAX,
};

// Enum Engine.*15bbf202ad
enum class *15bbf202ad : uint8 {
	*9bca5155cc,
	*081d1e9fc1,
	*d7adb25858,
	*b6cf64d876,
	*0c3a68b3fa,
	*2e2c3e280b,
	*5418cc6bcb,
	*15bbf202ad_MAX,
};

// Enum Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8 {
	ACF_None,
	ACF_Float96NoW,
	ACF_Fixed48NoW,
	ACF_IntervalFixed32NoW,
	ACF_Fixed32NoW,
	ACF_Float32NoW,
	ACF_Identity,
	ACF_MAX,
};

// Enum Engine.*eea974b4e5
enum class *eea974b4e5 : uint8 {
	*d8587c8ca5,
	*bb3ef85b58,
	*901f784a1e,
	*62c5a31ee9,
	*62b1e147d4,
	*eea974b4e5_MAX,
};

// Enum Engine.*f710213dc1
enum class *f710213dc1 : uint8 {
	*1dc9a0a48c,
	*89da2140e7,
	*27e2d45223,
	*a4d121d11f,
	*a89ae5af97,
	*f710213dc1_MAX,
};

// Enum Engine.*c20d8612ea
enum class *c20d8612ea : uint8 {
	*524834a87c,
	*9c82ca1ce7,
	*895480d8ed,
	*a5ad2773b7,
	*8dcf10126e,
	*c20d8612ea_MAX,
};

// Enum Engine.*30be4da0fa
enum class *30be4da0fa : uint8 {
	*1ed8fb82f0,
	*c68400c430,
	*07f8c8a300,
	*d1c2c5671a,
	*30be4da0fa_MAX,
};

// Enum Engine.*a0645cc49a
enum class *a0645cc49a : uint8 {
	*f1aaab78f8,
	*ce72e9db91,
	*61bd8c6f88,
	*e658b98b69,
	*a0645cc49a_MAX,
};

// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8 {
	Prepared,
	Finished,
	MarkedForRemoval,
	ERootMotionSourceStatusFlags_MAX,
};

// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8 {
	Override,
	Additive,
	ERootMotionAccumulateMode_MAX,
};

// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8 {
	Animation,
	Skeleton,
	AnimationScaled,
	AnimationRelative,
	EBoneTranslationRetargetingMode_MAX,
};

// Enum Engine.*cff767e2d1
enum class *cff767e2d1 : uint8 {
	*3e082a29c4,
	*7de8f9d449,
	*4e7a10d7c0,
	*0024796a32,
	*cff767e2d1_MAX,
};

// Enum Engine.*9137e393c7
enum class *9137e393c7 : uint8 {
	*9ba76542ca,
	*f3e0c10119,
	*8e4c730fcc,
	*be7356f58e,
	*ab758dab15,
	*d9543bca07,
	*852331c83c,
	*d369dab6fe,
	*9137e393c7_MAX,
};

// Enum Engine.*86e606a4f5
enum class *86e606a4f5 : uint8 {
	*7dbae38290,
	*bebe227c94,
	*cc631c43fb,
	*9bea6b09fd,
	*86e606a4f5_MAX,
};

// Enum Engine.*57312135a8
enum class *57312135a8 : uint8 {
	*5d31fd9735,
	*46fa23449e,
	*6617c40679,
	*6a953f47df,
	*57312135a8_MAX,
};

// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8 {
	SLERP,
	TwistAndSwing,
	EAngularDriveMode_MAX,
};

// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8 {
	Sphere,
	Capsule,
	Box,
	Cone,
	EAttenuationShape_MAX,
};

// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8 {
	Linear,
	Logarithmic,
	Inverse,
	LogReverse,
	NaturalSound,
	Custom,
	EAttenuationDistanceModel_MAX,
};

// Enum Engine.*5ef7d23080
enum class *5ef7d23080 : uint8 {
	*5b01ec0cf7,
	*89a42992a6,
	*ab65d14d8a,
	*5ef7d23080_MAX,
};

// Enum Engine.*67aa325fc5
enum class *67aa325fc5 : uint8 {
	*1bc7e98b8e,
	*64d7a38442,
	*ff056a3d9a,
	*21803caf16,
	*e8e941e596,
	*67aa325fc5_MAX,
};

// Enum Engine.EPreviewIndexType
enum class EPreviewIndexType : uint8 {
	RandomSeed,
	VariantIndex,
	PermutationIndex,
	EPreviewIndexType_MAX,
};

// Enum Engine.ESpawnPointRollType
enum class ESpawnPointRollType : uint8 {
	Probability,
	LocalRatio,
	GlobalRatio,
	ESpawnPointRollType_MAX,
};

// Enum Engine.*b8c75a7ff8
enum class *b8c75a7ff8 : uint8 {
	*893b55226b,
	*1902cc9019,
	*f2e5d9990a,
	*b8c75a7ff8_MAX,
};

// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8 {
	WorldSpace,
	ComponentSpace,
	EBoneSpaces_MAX,
};

// Enum Engine.EMeshComponentUpdateFlag
enum class EMeshComponentUpdateFlag : uint8 {
	AlwaysTickPoseAndRefreshBones,
	AlwaysTickPose,
	OnlyTickPoseWhenRendered,
	EMeshComponentUpdateFlag_MAX,
};

// Enum Engine.*a843b4c86f
enum class *a843b4c86f : uint8 {
	*99f611c606,
	*3334887fdc,
	*21fa7fddf8,
	*a843b4c86f_MAX,
};

// Enum Engine.*531e99c795
enum class *531e99c795 : uint8 {
	*4fd327e2ea,
	*ade517463f,
	*54cc7fee3b,
	*c587e632c0,
	*531e99c795_MAX,
};

// Enum Engine.*6b7dd1323d
enum class *6b7dd1323d : uint8 {
	*74e7317d23,
	*f4ffc6e00a,
	*d07ff8ea7d,
	*6b7dd1323d_MAX,
};

// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8 {
	AnimationBlueprint,
	AnimationSingleNode,
	AnimationCustomMode,
	EAnimationMode_MAX,
};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8 {
	SkipSimulatingBones,
	SkipAllBones,
	EKinematicBonesUpdateToPhysics_MAX,
};

// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8 {
	X,
	Y,
	Z,
	ESplineMeshAxis_MAX,
};

// Enum Engine.ETextureDownscaleOptions
enum class ETextureDownscaleOptions : uint8 {
	Default,
	Unfiltered,
	SimpleAverage,
	Sharpen0,
	Sharpen1,
	Sharpen2,
	Sharpen3,
	Sharpen4,
	Sharpen5,
	Sharpen6,
	Sharpen7,
	Sharpen8,
	Sharpen9,
	Sharpen10,
	ETextureDownscaleOptions_MAX,
};

// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8 {
	Point,
	Bilinear,
	Trilinear,
	AnisotropicPoint,
	AnisotropicLinear,
	ETextureSamplerFilter_MAX,
};

// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8 {
	None,
	PadToPowerOfTwo,
	PadToSquarePowerOfTwo,
	ETexturePowerOfTwoSetting_MAX,
};

// Enum Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8 {
	TMGS_FromTextureGroup,
	TMGS_SimpleAverage,
	TMGS_Sharpen0,
	TMGS_Sharpen1,
	TMGS_Sharpen2,
	TMGS_Sharpen3,
	TMGS_Sharpen4,
	TMGS_Sharpen5,
	TMGS_Sharpen6,
	TMGS_Sharpen7,
	TMGS_Sharpen8,
	TMGS_Sharpen9,
	TMGS_Sharpen10,
	TMGS_NoMipmaps,
	TMGS_LeaveExistingMips,
	TMGS_Blur1,
	TMGS_Blur2,
	TMGS_Blur3,
	TMGS_Blur4,
	TMGS_Blur5,
	TMGS_MAX,
};

// Enum Engine.TextureGroup
enum class TextureGroup : uint8 {
	TEXTUREGROUP_World,
	TEXTUREGROUP_WorldNormalMap,
	TEXTUREGROUP_WorldSpecular,
	TEXTUREGROUP_Character,
	TEXTUREGROUP_CharacterNormalMap,
	TEXTUREGROUP_CharacterSpecular,
	TEXTUREGROUP_Weapon,
	TEXTUREGROUP_WeaponNormalMap,
	TEXTUREGROUP_WeaponSpecular,
	TEXTUREGROUP_Vehicle,
	TEXTUREGROUP_VehicleNormalMap,
	TEXTUREGROUP_VehicleSpecular,
	TEXTUREGROUP_Landscape,
	TEXTUREGROUP_LandscapeNormalMap,
	TEXTUREGROUP_LandscapeSpecular,
	TEXTUREGROUP_Cinematic,
	TEXTUREGROUP_Effects,
	TEXTUREGROUP_EffectsNotFiltered,
	TEXTUREGROUP_Skybox,
	TEXTUREGROUP_UI,
	TEXTUREGROUP_Lightmap,
	TEXTUREGROUP_RenderTarget,
	TEXTUREGROUP_MobileFlattened,
	TEXTUREGROUP_ProcBuilding_Face,
	TEXTUREGROUP_ProcBuilding_LightMap,
	TEXTUREGROUP_Shadowmap,
	TEXTUREGROUP_ColorLookupTable,
	TEXTUREGROUP_Terrain_Heightmap,
	TEXTUREGROUP_Terrain_Weightmap,
	TEXTUREGROUP_Bokeh,
	TEXTUREGROUP_IESLightProfile,
	TEXTUREGROUP_Pixels2D,
	TEXTUREGROUP_HierarchicalLOD,
	TEXTUREGROUP_MAX,
};

// Enum Engine.*0ad02e172e
enum class *0ad02e172e : uint8 {
	*37fb9d1af1,
	*d9a6a53e27,
	*ab8c4fa11e,
	*c08941a786,
	*32a6b6733a,
	*5496aac94b,
	*c2312f7a48,
	*49e78f2e40,
	*0726e9d703,
	*b16b1d1809,
	*8c0c5d3528,
	*0ad02e172e_MAX,
};

// Enum Engine.*102fe8c276
enum class *102fe8c276 : uint8 {
	*82a0069acf,
	*978ea771f3,
	*b93cd4a05a,
	*e452fb0194,
	*102fe8c276_MAX,
};

// Enum Engine.*988516a7f1
enum class *988516a7f1 : uint8 {
	*1d80e8bf1c,
	*d0cba11cf5,
	*e8239f8309,
	*8e0fea3210,
	*988516a7f1_MAX,
};

// Enum Engine.*eeb38caaa8
enum class *eeb38caaa8 : uint8 {
	*da7e8f4140,
	*bf349ed5be,
	*ba9a3987fd,
	*9aa8d22427,
	*708ab65250,
	*4daa383ec7,
	*eeb38caaa8_MAX,
};

// Enum Engine.*8e17248832
enum class *8e17248832 : uint8 {
	*d82bef9f9b,
	*e1fb417c6e,
	*3254729aff,
	*dd067158db,
	*8e17248832_MAX,
};

// Enum Engine.TextureFilter
enum class TextureFilter : uint8 {
	TF_Nearest,
	TF_Bilinear,
	TF_Trilinear,
	TF_Default,
	TF_MAX,
};

// Enum Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8 {
	TC_Default,
	TC_Normalmap,
	TC_Masks,
	TC_Grayscale,
	TC_Displacementmap,
	TC_VectorDisplacementmap,
	TC_HDR,
	TC_EditorIcon,
	TC_Alpha,
	TC_DistanceFieldFont,
	TC_HDR_Compressed,
	TC_BC7,
	TC_MAX,
};

// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8 {
	Local,
	World,
	ESplineCoordinateSpace_MAX,
};

// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8 {
	Linear,
	Curve,
	Constant,
	CurveClamped,
	CurveCustomTangent,
	ESplinePointType_MAX,
};

// Enum Engine.*2b9299c64b
enum class *2b9299c64b : uint8 {
	*0c964238b4,
	*42f171401b,
	*dcf467ea89,
	*18d2490f38,
	*d76468ca23,
	*2b9299c64b_MAX,
};

// Enum Engine.*0bf9d95cc1
enum class *0bf9d95cc1 : uint8 {
	*288b4361fd,
	*d0886f3b43,
	*37e36692be,
	*1c3c16866c,
	*0bf9d95cc1_MAX,
};

// Enum Engine.*d945ee9e5d
enum class *d945ee9e5d : uint8 {
	*62515ba9a4,
	*448c415377,
	*755f5d519f,
	*d945ee9e5d_MAX,
};

// Enum Engine.*2e63c9ae86
enum class *2e63c9ae86 : uint8 {
	*7e06bf44f8,
	*339cbec98a,
	*b6b2396c65,
	*5b75248754,
	*2e63c9ae86_MAX,
};

// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8 {
	SLT_WorldLocked,
	SLT_TrackerLocked,
	SLT_FaceLocked,
	SLT_MAX,
};

// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8 {
	Directional,
	Point,
	EWindSourceType_MAX,
};

// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8 {
	Forward,
	Backward,
	ETimelineDirection_MAX,
};

// Enum Engine.*f197db0fc1
enum class *f197db0fc1 : uint8 {
	*75a5ce605a,
	*cf5b7943e3,
	*ee7f11eac5,
	*f197db0fc1_MAX,
};

// Enum Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8 {
	AKF_ConstantKeyLerp,
	AKF_VariableKeyLerp,
	AKF_PerTrackCompression,
	AKF_MAX,
};

// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8 {
	AllAnimations,
	HighestWeightedAnimation,
	None,
	ENotifyTriggerMode_MAX,
};

// Enum Engine.*87c6b2e60b
enum class *87c6b2e60b : uint8 {
	*0438fa0a63,
	*e575dc1f3d,
	*000a7af29e,
	*3beb4dd5ca,
	*87c6b2e60b_MAX,
};

// Enum Engine.*c207665492
enum class *c207665492 : uint8 {
	*1e665e08e5,
	*ae138a4e8e,
	*223805ecb8,
	*c207665492_MAX,
};

// Enum Engine.*c9ce3f8dde
enum class *c9ce3f8dde : uint8 {
	*c6f3b037d1,
	*9966941b32,
	*3869c1dbb6,
	*c9ce3f8dde_MAX,
};

// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8 {
	MontageLength,
	Duration,
	EMontagePlayReturnType_MAX,
};

// Enum Engine.*142e33efb7
enum class *142e33efb7 : uint8 {
	*071c57984a,
	*ea66335d3c,
	*37cdb83540,
	*bd6a7e2513,
	*9c238acec5,
	*142e33efb7_MAX,
};

// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8 {
	Unknown,
	NeverCook,
	DevelopmentCook,
	AlwaysCook,
	EPrimaryAssetCookRule_MAX,
};

// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8 {
	Disabled,
	Dependency,
	ExplicitlyEnabled,
	EBlueprintNativizationFlag_MAX,
};

// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8 {
	Default,
	Development,
	FinalRelease,
	EBlueprintCompileMode_MAX,
};

// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8 {
	BPTYPE_Normal,
	BPTYPE_Const,
	BPTYPE_MacroLibrary,
	BPTYPE_Interface,
	BPTYPE_LevelScript,
	BPTYPE_FunctionLibrary,
	BPTYPE_MAX,
};

// Enum Engine.*09ac2cc0aa
enum class *09ac2cc0aa : uint8 {
	*8f93568c07,
	*939f2e7139,
	*77eebb580f,
	*9bfd2cc929,
	*20f916034a,
	*ac199945ac,
	*03e0116296,
	*09ac2cc0aa_MAX,
};

// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8 {
	RowFound,
	RowNotFound,
	EEvaluateCurveTableResult_MAX,
};

// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8 {
	Singular,
	Plural,
	EGrammaticalNumber_MAX,
};

// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8 {
	Neuter,
	Masculine,
	Feminine,
	Mixed,
	EGrammaticalGender_MAX,
};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8 {
	DoNotTrace,
	TraceFullPath,
	OnlyTraceWhileAscending,
	ESuggestProjVelocityTraceOption_MAX,
};

// Enum Engine.EHMDWornState
enum class EHMDWornState : uint8 {
	Unknown,
	Worn,
	NotWorn,
	EHMDWornState_MAX,
};

// Enum Engine.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8 {
	Floor,
	Eye,
	EHMDTrackingOrigin_MAX,
};

// Enum Engine.EOrientPositionSelector
enum class EOrientPositionSelector : uint8 {
	Orientation,
	Position,
	OrientationAndPosition,
	EOrientPositionSelector_MAX,
};

// Enum Engine.*b60e8a0645
enum class *b60e8a0645 : uint8 {
	*8cdc2583a4,
	*ee56f347f5,
	*d79065f82c,
	*cfdf9485f7,
	*b60e8a0645_MAX,
};

// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8 {
	Linear,
	Step,
	SinusoidalIn,
	SinusoidalOut,
	SinusoidalInOut,
	EaseIn,
	EaseOut,
	EaseInOut,
	ExpoIn,
	ExpoOut,
	ExpoInOut,
	CircularIn,
	CircularOut,
	CircularInOut,
	EEasingFunc_MAX,
};

// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8 {
	HalfToEven,
	HalfFromZero,
	HalfToZero,
	FromZero,
	ToZero,
	ToNegativeInfinity,
	ToPositiveInfinity,
	ERoundingMode_MAX,
};

// Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8 {
	InvalidMode,
	GameMode,
	EditorMode,
	SimulationMode,
	PIEMode,
	FNavigationSystemRunMode_MAX,
};

// Enum Engine.*764a82876a
enum class *764a82876a : uint8 {
	*b1cdc393d4,
	*54f9dcb2dd,
	*5255bff4d1,
	*764a82876a_MAX,
};

// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8 {
	PhysType_Default,
	PhysType_Kinematic,
	PhysType_Simulated,
	PhysType_MAX,
};

// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8 {
	CTF_UseDefault,
	CTF_UseSimpleAndComplex,
	CTF_UseSimpleAsComplex,
	CTF_UseComplexAsSimple,
	CTF_MAX,
};

// Enum Engine.*88cfda13be
enum class *88cfda13be : uint8 {
	*357685986e,
	*bcb86a5ac7,
	*c177a24c7f,
	*88cfda13be_MAX,
};

// Enum Engine.*a483700a66
enum class *a483700a66 : uint8 {
	*1b3831ffe8,
	*2ab2f48208,
	*f182e51ef4,
	*85302e334c,
	*5a1fbc845d,
	*29f1c41c86,
	*8b62ac467e,
	*1933d07b7d,
	*a483700a66_MAX,
};

// Enum Engine.*570c79a6fc
enum class *570c79a6fc : uint8 {
	*1052cd7444,
	*cef1b103a2,
	*ce17cdce7a,
	*c6e1d1d5da,
	*9e148c9f8c,
	*c8b93da5f4,
	*570c79a6fc_MAX,
};

// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8 {
	Average,
	Min,
	Multiply,
	Max,
	EFrictionCombineMode_MAX,
};

// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8 {
	None,
	X,
	Y,
	Z,
	Invalid,
	ESettingsLockedAxis_MAX,
};

// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8 {
	Full3D,
	YZPlane,
	XZPlane,
	XYPlane,
	ESettingsDOF_MAX,
};

// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8 {
	AEM_Histogram,
	AEM_Basic,
	AEM_MAX,
};

// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8 {
	None,
	OpaqueOnly,
	OpaqueAndMasked,
	Auto,
	EEarlyZPass_MAX,
};

// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8 {
	Disabled,
	Enabled,
	EnabledOnDemand,
	EnabledWithStencil,
	ECustomDepthStencil_MAX,
};

// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8 {
	One,
	Two,
	Four,
	Eight,
	EMobileMSAASampleCount_MAX,
};

// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8 {
	One,
	Two,
	Four,
	Eight,
	ECompositingSampleCount_MAX,
};

// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8 {
	NoClear,
	HardwareClear,
	QuadAtMaxZ,
	EClearSceneOptions_MAX,
};

// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8 {
	ShortestSide,
	LongestSide,
	Horizontal,
	Vertical,
	Custom,
	EUIScalingRule_MAX,
};

// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8 {
	Always,
	NonPointer,
	NavigationOnly,
	Never,
	ERenderFocusRule_MAX,
};

// Enum Engine.*41d1961a55
enum class *41d1961a55 : uint8 {
	*95f99a4955,
	*c5b7418aef,
	*570d5ff38b,
	*17a40bb10e,
	*41d1961a55_MAX,
};

// Enum Engine.*8f01089b5d
enum class *8f01089b5d : uint8 {
	*ae76942a73,
	*50fd37b91f,
	*39e6c83c40,
	*e7f3099338,
	*8f01089b5d_MAX,
};

// Enum Engine.*5dc8d87af2
enum class *5dc8d87af2 : uint8 {
	*9834a15d7f,
	*420c5bda43,
	*2f86465992,
	*86e88c18c8,
	*e84e21cbcc,
	*991d922139,
	*5dc8d87af2_MAX,
};

// Enum Engine.*15b60ca3d5
enum class *15b60ca3d5 : uint8 {
	*f3b01169da,
	*476dd1f546,
	*6b12af5d3b,
	*79ee2ca50c,
	*dc87d747d5,
	*e46ad5d78e,
	*fece430ced,
	*15b60ca3d5_MAX,
};

// Enum Engine.*dc6c447ea2
enum class *dc6c447ea2 : uint8 {
	*fa2d86a571,
	*7ab2e4b7f6,
	*589f4986af,
	*a8ec5bbc5b,
	*9f79fdbd25,
	*30fec869f9,
	*dc6c447ea2_MAX,
};

// Enum Engine.*4e621568f3
enum class *4e621568f3 : uint8 {
	*dab5ea405b,
	*a0a39ab3c4,
	*c3747d00dc,
	*cc9c5f4877,
	*4e621568f3_MAX,
};

// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8 {
	Offline,
	Runtime,
	EFontCacheType_MAX,
};

// Enum Engine.EGraphicsAPIType
enum class EGraphicsAPIType : uint8 {
	DX11,
	DX11_Enhanced,
	DX12,
	EGraphicsAPIType_MAX,
};

// Enum Engine.EWindowMode
enum class EWindowMode : uint8 {
	Fullscreen,
	WindowedFullscreen,
	Windowed,
	EWindowMode_MAX,
};

// Enum Engine.*3e2ef26363
enum class *3e2ef26363 : uint8 {
	*d4f4945d7b,
	*f4783bc6c4,
	*84484e5dd2,
	*7e50ab4fdb,
	*3e2ef26363_MAX,
};

// Enum Engine.*e75cac550a
enum class *e75cac550a : uint8 {
	*a8461497c6,
	*a4adbf38fb,
	*b336f3d89d,
	*5b083946e3,
	*e75cac550a_MAX,
};

// Enum Engine.*9061b3b7f2
enum class *9061b3b7f2 : uint8 {
	*9bbc159c5d,
	*4ba93b5b53,
	*e1e8520b5b,
	*4d56c037ff,
	*36fe418549,
	*7c7ba7520a,
	*7c6a0151eb,
	*9061b3b7f2_MAX,
};

// Enum Engine.*43105497d2
enum class *43105497d2 : uint8 {
	*c1629ab823,
	*cbd15c1c69,
	*e0aeb5b3f0,
	*972ccccc63,
	*a3fef9bc3d,
	*43105497d2_MAX,
};

// Enum Engine.*daf0cacf0d
enum class *daf0cacf0d : uint8 {
	*1b0d87156c,
	*b751bec6ad,
	*a64d3f2759,
	*84b2965e6c,
	*daf0cacf0d_MAX,
};

// Enum Engine.*b780822e05
enum class *b780822e05 : uint8 {
	*3b89a78d21,
	*555423950f,
	*218a348623,
	*c5c8164f5d,
	*b780822e05_MAX,
};

// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8 {
	Blend,
	UseA,
	UseB,
	EMaterialAttributeBlend_MAX,
};

// Enum Engine.*753b669887
enum class *753b669887 : uint8 {
	*fdfec491aa,
	*2afcacce63,
	*9b38f23ce1,
	*4538e8fe77,
	*753b669887_MAX,
};

// Enum Engine.*12d2d93b2c
enum class *12d2d93b2c : uint8 {
	*e50f7efd59,
	*90091a5daf,
	*4dfcda7a79,
	*77ed96a069,
	*ab5f2dc260,
	*12d2d93b2c_MAX,
};

// Enum Engine.*c867eee3e0
enum class *c867eee3e0 : uint8 {
	*a3304dfc6b,
	*9197a0d75f,
	*6e145fbfff,
	*c696b4a52c,
	*94da49894c,
	*c867eee3e0_MAX,
};

// Enum Engine.*cc3ae7f082
enum class *cc3ae7f082 : uint8 {
	*5a44f42e55,
	*4866c440bb,
	*fb48dc6cac,
	*1e3435bdbe,
	*331772efe7,
	*1eccf9438a,
	*4d19036dfc,
	*324f30ef83,
	*23176e8a04,
	*0f2b5f83dc,
	*cc3ae7f082_MAX,
};

// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8 {
	NOISEFUNCTION_SimplexTex,
	NOISEFUNCTION_GradientTex,
	NOISEFUNCTION_GradientTex3D,
	NOISEFUNCTION_GradientALU,
	NOISEFUNCTION_ValueALU,
	NOISEFUNCTION_VoronoiALU,
	NOISEFUNCTION_MAX,
};

// Enum Engine.*751784816f
enum class *751784816f : uint8 {
	*946d49e202,
	*9c611df49b,
	*22719e2469,
	*751784816f_MAX,
};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8 {
	Coordinates,
	OffsetFraction,
	EMaterialSceneAttributeInputMode_MAX,
};

// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8 {
	PPI_SceneColor,
	PPI_SceneDepth,
	PPI_DiffuseColor,
	PPI_SpecularColor,
	PPI_SubsurfaceColor,
	PPI_BaseColor,
	PPI_Specular,
	PPI_Metallic,
	PPI_WorldNormal,
	PPI_SeparateTranslucency,
	PPI_Opacity,
	PPI_Roughness,
	PPI_MaterialAO,
	PPI_CustomDepth,
	PPI_PostProcessInput0,
	PPI_PostProcessInput1,
	PPI_PostProcessInput2,
	PPI_PostProcessInput3,
	PPI_PostProcessInput4,
	PPI_PostProcessInput5,
	PPI_PostProcessInput6,
	PPI_DecalMask,
	PPI_ShadingModel,
	PPI_AmbientOcclusion,
	PPI_CustomStencil,
	PPI_StoredBaseColor,
	PPI_StoredSpecular,
	PPI_ScreenCopy,
	PPI_SceneStencil,
	PPI_IndoorMask,
	PPI_GIVolumes,
	PPI_Thermal,
	PPI_MAX,
};

// Enum Engine.*49cd946d8c
enum class *49cd946d8c : uint8 {
	*5fd7cb8e4d,
	*e1c9259055,
	*a2f8a431e1,
	*649ed63238,
	*49cd946d8c_MAX,
};

// Enum Engine.*3fe163e133
enum class *3fe163e133 : uint8 {
	*75baedf17b,
	*6ba1e2045b,
	*c4b869c229,
	*3fe163e133_MAX,
};

// Enum Engine.*5f1bac80e6
enum class *5f1bac80e6 : uint8 {
	*820d2cf9cc,
	*c9d6012237,
	*4eeab5a77e,
	*404f1f4c32,
	*667e3db0ef,
	*e6c4aebcf6,
	*d0693f4347,
	*b3685c1341,
	*5f1bac80e6_MAX,
};

// Enum Engine.*ff2e99f4be
enum class *ff2e99f4be : uint8 {
	*60a35fdf6e,
	*ce7028d790,
	*0109235bb2,
	*9538bd93fd,
	*5ee2f7e476,
	*227beef94c,
	*ff2e99f4be_MAX,
};

// Enum Engine.ETextureChannel
enum class ETextureChannel : uint8 {
	R,
	G,
	B,
	A,
	ETextureChannel_MAX,
};

// Enum Engine.*646c5d88a8
enum class *646c5d88a8 : uint8 {
	*41efc177a5,
	*2ed3cb24e4,
	*5c444972b2,
	*013d739e98,
	*32109711eb,
	*646c5d88a8_MAX,
};

// Enum Engine.*a9591e27e3
enum class *a9591e27e3 : uint8 {
	*9b18c36e97,
	*337b96a1d8,
	*d350a1879a,
	*d5404e3707,
	*bb56c388d2,
	*a9591e27e3_MAX,
};

// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8 {
	TMTM_TextureSize,
	TMTM_TexelSize,
	TMTM_MAX,
};

// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8 {
	TRANSFORM_Tangent,
	TRANSFORM_Local,
	TRANSFORM_World,
	TRANSFORM_View,
	TRANSFORM_Camera,
	TRANSFORM_ParticleWorld,
	TRANSFORM_MAX,
};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8 {
	TRANSFORMSOURCE_Tangent,
	TRANSFORMSOURCE_Local,
	TRANSFORMSOURCE_World,
	TRANSFORMSOURCE_View,
	TRANSFORMSOURCE_Camera,
	TRANSFORMSOURCE_ParticleWorld,
	TRANSFORMSOURCE_MAX,
};

// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8 {
	TRANSFORMPOSSOURCE_Local,
	TRANSFORMPOSSOURCE_World,
	TRANSFORMPOSSOURCE_TranslatedWorld,
	TRANSFORMPOSSOURCE_View,
	TRANSFORMPOSSOURCE_Camera,
	TRANSFORMPOSSOURCE_Particle,
	TRANSFORMPOSSOURCE_MAX,
};

// Enum Engine.*e2cad6ab46
enum class *e2cad6ab46 : uint8 {
	*ded3e5f2d1,
	*028a193bcd,
	*edf54c283c,
	*9871b90e4b,
	*2321f3faf1,
	*28e8d40a2e,
	*e2cad6ab46_MAX,
};

// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8 {
	MEVP_BufferSize,
	MEVP_FieldOfView,
	MEVP_TanHalfFieldOfView,
	MEVP_ViewSize,
	MEVP_WorldSpaceViewPosition,
	MEVP_WorldSpaceCameraPosition,
	MEVP_ViewportOffset,
	MEVP_MAX,
};

// Enum Engine.*03a10c8b8b
enum class *03a10c8b8b : uint8 {
	*68c32de777,
	*16d08ee12c,
	*e762703f73,
	*435026a8b5,
	*db093ddfca,
	*3582dfc86f,
	*e40f818740,
	*03a10c8b8b_MAX,
};

// Enum Engine.*5f04f12a95
enum class *5f04f12a95 : uint8 {
	*c4cf02aab8,
	*2b185bf715,
	*60d39ec044,
	*5397e24b41,
	*2fbbf2c606,
	*f30fd6c3a9,
	*5c9c371d32,
	*6d698b9fe5,
	*a72c30df63,
	*5f04f12a95_MAX,
};

// Enum Engine.*5c32b121c5
enum class *5c32b121c5 : uint8 {
	*65d47f2857,
	*76cf1fd2af,
	*49dab914b0,
	*02c5bba2df,
	*341a5c7e62,
	*0cd3ebe084,
	*3fc1147f2b,
	*b08d421a9c,
	*9cad8a47d9,
	*6adc3b8959,
	*6916727d7a,
	*a22b089b81,
	*95808c2150,
	*5c32b121c5_MAX,
};

// Enum Engine.*a2a9703ae6
enum class *a2a9703ae6 : uint8 {
	*858ef3b86d,
	*067320136c,
	*973f2a0fa8,
	*febbd0c191,
	*faad1a4e15,
	*534624d8e9,
	*a2a9703ae6_MAX,
};

// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8 {
	PSUVIM_None,
	PSUVIM_Linear,
	PSUVIM_Linear_Blend,
	PSUVIM_Random,
	PSUVIM_Random_Blend,
	PSUVIM_MAX,
};

// Enum Engine.*7d8e2c3b6b
enum class *7d8e2c3b6b : uint8 {
	*175945d1f8,
	*01bf4a5e99,
	*3db70d5536,
	*7d8e2c3b6b_MAX,
};

// Enum Engine.*3e769a71ff
enum class *3e769a71ff : uint8 {
	*17d62c9a1b,
	*ec52db12eb,
	*db0d84f440,
	*7fb70eddc7,
	*9f21d28a4c,
	*01052251bc,
	*e29d759cc0,
	*2540b31272,
	*3e769a71ff_MAX,
};

// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8 {
	Auto,
	Complete,
	DisableTick,
	DisableTickAndKill,
	Num,
	EParticleSystemInsignificanceReaction_MAX,
};

// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8 {
	Low,
	Medium,
	High,
	Critical,
	Num,
	EParticleSignificanceLevel_MAX,
};

// Enum Engine.*eb772079e1
enum class *eb772079e1 : uint8 {
	*144c9eaa2c,
	*733745ba67,
	*e88aeeddcb,
	*eb772079e1_MAX,
};

// Enum Engine.*1b600835a3
enum class *1b600835a3 : uint8 {
	*4e0beecde0,
	*f2ad9f4357,
	*9b5cf84ca4,
	*a76c8df702,
	*be9360791d,
	*de8f52b2cd,
	*ec5d5e6d50,
	*7596147c90,
	*b198ed1e59,
	*481c41d57f,
	*1b600835a3_MAX,
};

// Enum Engine.*b03a41ca16
enum class *b03a41ca16 : uint8 {
	*0bf507215a,
	*f43b43649b,
	*1542ca4e6e,
	*b03a41ca16_MAX,
};

// Enum Engine.*cf7840b2a1
enum class *cf7840b2a1 : uint8 {
	*432a62bb9b,
	*753ee1e800,
	*c4365713bc,
	*93a7095fe4,
	*4910798e09,
	*cf7840b2a1_MAX,
};

// Enum Engine.*522518234f
enum class *522518234f : uint8 {
	*e112920ec7,
	*0a16549bf8,
	*cc6e8dd900,
	*3a9bc07009,
	*2820071f8c,
	*0a9591053c,
	*522518234f_MAX,
};

// Enum Engine.*3993b6d145
enum class *3993b6d145 : uint8 {
	*256f363432,
	*0ad870d12e,
	*e9efff1de3,
	*3993b6d145_MAX,
};

// Enum Engine.*95fb392733
enum class *95fb392733 : uint8 {
	*3ec6458607,
	*da88bbc6a8,
	*346dafaa18,
	*885b098dce,
	*95fb392733_MAX,
};

// Enum Engine.*0aea19a5c2
enum class *0aea19a5c2 : uint8 {
	*1b2ed4364e,
	*a1fa067c88,
	*6b440696dc,
	*e4aeca9b48,
	*7c85a7f74f,
	*84cdce5e03,
	*3cb9ebe6a3,
	*0aea19a5c2_MAX,
};

// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8 {
	Bounce,
	Stop,
	Kill,
	EParticleCollisionResponse_MAX,
};

// Enum Engine.*866f576d23
enum class *866f576d23 : uint8 {
	*d3478e78c4,
	*eb18569544,
	*930d74b0ce,
	*866f576d23_MAX,
};

// Enum Engine.*f16a7c5a2e
enum class *f16a7c5a2e : uint8 {
	*3905bd1a0e,
	*1291223222,
	*9b544e6feb,
	*f16a7c5a2e_MAX,
};

// Enum Engine.*a4e31c534c
enum class *a4e31c534c : uint8 {
	*31d7f0ff40,
	*e5e05e4f74,
	*468fb292ff,
	*a4e31c534c_MAX,
};

// Enum Engine.*64254ef5b7
enum class *64254ef5b7 : uint8 {
	*c8c57b5a19,
	*b9e4c7927d,
	*83afe1cb0b,
	*4e9ae6a004,
	*64254ef5b7_MAX,
};

// Enum Engine.*3f8ea1db26
enum class *3f8ea1db26 : uint8 {
	*1dc8d92f70,
	*e0b0223649,
	*80366b7c9e,
	*3f8ea1db26_MAX,
};

// Enum Engine.*5dd05bde88
enum class *5dd05bde88 : uint8 {
	*00f80b419e,
	*10919b514a,
	*7685ef4868,
	*73a3304a12,
	*5dd05bde88_MAX,
};

// Enum Engine.*3f95a333e8
enum class *3f95a333e8 : uint8 {
	*6efdb184e8,
	*a08a8c4b03,
	*ec3ff99c1a,
	*c0a269e28c,
	*e69831edc8,
	*da9f5c387e,
	*73f897f04c,
	*a1a259efb8,
	*323d309dee,
	*449f4a373c,
	*dbc3f2950b,
	*3f95a333e8_MAX,
};

// Enum Engine.*f425f3d965
enum class *f425f3d965 : uint8 {
	*cc0c943e26,
	*a5c60f7ea0,
	*7608114e18,
	*eeb506708d,
	*3f985a6770,
	*0f4c98d665,
	*7c976fca10,
	*f425f3d965_MAX,
};

// Enum Engine.*319e761216
enum class *319e761216 : uint8 {
	*5eaffe4b0b,
	*e52a0e0250,
	*63208b1626,
	*041d60bb40,
	*2fd4bb9170,
	*584ac6acc8,
	*319e761216_MAX,
};

// Enum Engine.*cf1018a8a2
enum class *cf1018a8a2 : uint8 {
	*0ab48466eb,
	*a858983e1c,
	*52c7386e1f,
	*cf1018a8a2_MAX,
};

// Enum Engine.*b9013e80e9
enum class *b9013e80e9 : uint8 {
	*1aa922d17a,
	*e1b2d3f377,
	*9f049881f1,
	*8eb7eb8ccf,
	*b9013e80e9_MAX,
};

// Enum Engine.*0eaf69bf66
enum class *0eaf69bf66 : uint8 {
	*84cd243643,
	*1c8e15bbce,
	*4569f306a6,
	*bbda6ba5c3,
	*022ab4d47c,
	*8f236c97bf,
	*0eaf69bf66_MAX,
};

// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8 {
	None,
	FlipUV,
	FlipUOnly,
	FlipVOnly,
	RandomFlipUV,
	RandomFlipUOnly,
	RandomFlipVOnly,
	RandomFlipUVIndependent,
	EParticleUVFlipMode_MAX,
};

// Enum Engine.*742a09a89c
enum class *742a09a89c : uint8 {
	*1944411e0c,
	*bdda9d1676,
	*9fa6173769,
	*0f823c6d84,
	*742a09a89c_MAX,
};

// Enum Engine.*faaf57805f
enum class *faaf57805f : uint8 {
	*26678da62f,
	*91097b3efa,
	*a2ba0031f4,
	*2f3b069c72,
	*faaf57805f_MAX,
};

// Enum Engine.*4ca547df87
enum class *4ca547df87 : uint8 {
	*4ba66a8cfa,
	*9b96ce384e,
	*250cd2575a,
	*2b6578b8ae,
	*4ca547df87_MAX,
};

// Enum Engine.*ac57f9f0c5
enum class *ac57f9f0c5 : uint8 {
	*5a4a20ad59,
	*90a0248bde,
	*9846ba5527,
	*c0a6246e0f,
	*b3543901bc,
	*0f9ab406e7,
	*ee67b78f5a,
	*68424d79f0,
	*3a2ef4e3d5,
	*a20cab732a,
	*8790b72577,
	*1d03d318b3,
	*00c60da108,
	*660f825817,
	*ac57f9f0c5_MAX,
};

// Enum Engine.*845843f638
enum class *845843f638 : uint8 {
	*4ebb3d7383,
	*c5a54982ac,
	*38d2ffb455,
	*c4f9aee7df,
	*f79201cc58,
	*9355500770,
	*845843f638_MAX,
};

// Enum Engine.*6dfead649b
enum class *6dfead649b : uint8 {
	*f08db4f7a7,
	*c6c85ca735,
	*ea0e6c7c6b,
	*5208db5573,
	*6dfead649b_MAX,
};

// Enum Engine.*dd3c7d43ec
enum class *dd3c7d43ec : uint8 {
	*4c18871210,
	*7c54951883,
	*5a4910a7da,
	*717d91d735,
	*dd3c7d43ec_MAX,
};

// Enum Engine.*ab4fb8b75d
enum class *ab4fb8b75d : uint8 {
	*521f152d82,
	*512ff226d6,
	*9707f7636a,
	*583af4f853,
	*8f8b1dbc99,
	*47fdc18239,
	*10f0a97cfe,
	*6ec0c5b7e5,
	*ab4fb8b75d_MAX,
};

// Enum Engine.*d7a225615f
enum class *d7a225615f : uint8 {
	*968fa90081,
	*9e1ed8b446,
	*76ad23f1d2,
	*d7a225615f_MAX,
};

// Enum Engine.*71fbac6e22
enum class *71fbac6e22 : uint8 {
	*cf1885c477,
	*dd885a833e,
	*7b376e12bd,
	*d87ab9d47b,
	*3ece9603e2,
	*71fbac6e22_MAX,
};

// Enum Engine.*18e9c49f03
enum class *18e9c49f03 : uint8 {
	*12e4094369,
	*2062d3570f,
	*d1bea62f93,
	*18e9c49f03_MAX,
};

// Enum Engine.*7d47650d67
enum class *7d47650d67 : uint8 {
	*a20cfb8bb5,
	*1e4b724be9,
	*ef32c5d3fe,
	*dba670ed06,
	*7d47650d67_MAX,
};

// Enum Engine.*1adf87ed91
enum class *1adf87ed91 : uint8 {
	*2804dc0538,
	*97a82ec0ab,
	*ad675296e1,
	*fcdf695bac,
	*1adf87ed91_MAX,
};

// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8 {
	Line,
	Dash,
	EReporterLineStyle_MAX,
};

// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8 {
	Outside,
	Inside,
	ELegendPosition_MAX,
};

// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8 {
	Lines,
	Filled,
	EGraphDataStyle_MAX,
};

// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8 {
	Lines,
	Notches,
	Grid,
	EGraphAxisStyle_MAX,
};

// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8 {
	Absolute,
	Relative,
	EConstraintTransform_MAX,
};

// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8 {
	Orientation,
	Translation,
	Max,
	EControlConstraint_MAX,
};

// Enum Engine.*56c0b0b6fe
enum class *56c0b0b6fe : uint8 {
	*54c9d22616,
	*c3be18b95f,
	*2d87dd3d5a,
	*eeab952eff,
	*56c0b0b6fe_MAX,
};

// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8 {
	PreventNew,
	StopOldest,
	StopFarthestThenPreventNew,
	StopFarthestThenOldest,
	StopLowestPriority,
	StopQuietest,
	StopLowestPriorityThenPreventNew,
	EMaxConcurrentResolutionRule_MAX,
};

// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8 {
	SOUNDGROUP_Default,
	SOUNDGROUP_Effects,
	SOUNDGROUP_UI,
	SOUNDGROUP_Music,
	SOUNDGROUP_Voice,
	SOUNDGROUP_GameSoundGroup1,
	SOUNDGROUP_GameSoundGroup2,
	SOUNDGROUP_GameSoundGroup3,
	SOUNDGROUP_GameSoundGroup4,
	SOUNDGROUP_GameSoundGroup5,
	SOUNDGROUP_GameSoundGroup6,
	SOUNDGROUP_GameSoundGroup7,
	SOUNDGROUP_GameSoundGroup8,
	SOUNDGROUP_GameSoundGroup9,
	SOUNDGROUP_GameSoundGroup10,
	SOUNDGROUP_GameSoundGroup11,
	SOUNDGROUP_GameSoundGroup12,
	SOUNDGROUP_GameSoundGroup13,
	SOUNDGROUP_GameSoundGroup14,
	SOUNDGROUP_GameSoundGroup15,
	SOUNDGROUP_GameSoundGroup16,
	SOUNDGROUP_GameSoundGroup17,
	SOUNDGROUP_GameSoundGroup18,
	SOUNDGROUP_GameSoundGroup19,
	SOUNDGROUP_GameSoundGroup20,
	SOUNDGROUP_MAX,
};

// Enum Engine.*feb94a3676
enum class *feb94a3676 : uint8 {
	*5ef5b3cb4e,
	*0f410a2c0a,
	*f98046dfc1,
	*3823f52953,
	*6d6ed2224c,
	*f7853f5c49,
	*e9b27a7990,
	*5ec4d88407,
	*16be5f7383,
	*feb94a3676_MAX,
};

// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8 {
	Speaker,
	Controller,
	ControllerFallbackToSpeaker,
	EAudioOutputTarget_MAX,
};

// Enum Engine.*7d34940ef1
enum class *7d34940ef1 : uint8 {
	*52886b026a,
	*86441ee3b6,
	*18b09a138f,
	*c2afae63c0,
	*7d34940ef1_MAX,
};

// Enum Engine.*b2688e7dd5
enum class *b2688e7dd5 : uint8 {
	*3c0c6790a7,
	*964bb518b8,
	*3f5ee902e5,
	*3b0d7bf551,
	*e1baed673f,
	*b2688e7dd5_MAX,
};

// Enum Engine.*0d201c810b
enum class *0d201c810b : uint8 {
	*7e5354f598,
	*81af162e21,
	*ab0c588e08,
	*0d201c810b_MAX,
};

// Enum Engine.EVolumetricDataFormat
enum class EVolumetricDataFormat : uint8 {
	R8,
	RG8,
	RGBA8,
	R16,
	RG16,
	R16_Float,
	RG16_Float,
	RGBA16_Float,
	R32_Float,
	RG32_Float,
	RGBA32_Float,
	EVolumetricDataFormat_MAX,
};

// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8 {
	None,
	LogicalNegateBool,
	Dereference,
	EPostCopyOperation_MAX,
};

// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8 {
	NeverAsPin,
	PinHiddenByDefault,
	PinShownByDefault,
	AlwaysAsPin,
	EPinHidingMode_MAX,
};

// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8 {
	Float,
	Bool,
	Curve,
	EAnimAlphaInputType_MAX,
};

// Enum Engine.*9bec988457
enum class *9bec988457 : uint8 {
	*81c1bf0878,
	*2bcb8a8c3f,
	*15b25025fd,
	*80093f0433,
	*9bec988457_MAX,
};

// Enum Engine.*f21e534b2e
enum class *f21e534b2e : uint8 {
	*2f81c501f7,
	*ed01aaba40,
	*4f1ddc0c11,
	*f21e534b2e_MAX,
};

// Enum Engine.*b76b41da1d
enum class *b76b41da1d : uint8 {
	*240a93b9c8,
	*9eaafedb72,
	*09f3a677ac,
	*b76b41da1d_MAX,
};

// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8 {
	X,
	Y,
	Z,
	EVertexPaintAxis_MAX,
};

// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8 {
	DirectionalArrow,
	Sphere,
	Line,
	OnScreenMessage,
	CoordinateSystem,
	EDrawDebugItemType_MAX,
};

// Enum Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8 {
	CoM,
	CustomSphere,
	InnerSphere,
	OuterSphere,
	AnimPhysCollisionType_MAX,
};

// Enum Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8 {
	AxisX,
	AxisY,
	AxisZ,
	AnimPhysTwistAxis_MAX,
};

// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8 {
	Overlay,
	VerticalBox,
	EWindowTitleBarMode_MAX,
};

// ScriptStruct Engine.DistributionLookupTable
// Size: 0x28 (Inherited: 0x00)
struct FDistributionLookupTable {
	bool Op; // 0x00(0x01)
	bool EntryCount; // 0x01(0x01)
	bool EntryStride; // 0x02(0x01)
	bool SubEntryStride; // 0x03(0x01)
	float TimeScale; // 0x04(0x04)
	float TimeBias; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<float> Values; // 0x10(0x10)
	bool LockFlag; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.RawDistribution
// Size: 0x28 (Inherited: 0x00)
struct FRawDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.FloatDistribution
// Size: 0x28 (Inherited: 0x00)
struct FFloatDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.VectorDistribution
// Size: 0x28 (Inherited: 0x00)
struct FVectorDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.Vector4Distribution
// Size: 0x28 (Inherited: 0x00)
struct FVector4Distribution {
	struct FDistributionLookupTable Table; // 0x00(0x28)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.FormatArgumentData
// Size: 0x40 (Inherited: 0x00)
struct FFormatArgumentData {
	struct FString ArgumentName; // 0x00(0x10)
	enum class EFormatArgumentType ArgumentValueType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText ArgumentValue; // 0x18(0x18)
	int32 ArgumentValueInt; // 0x30(0x04)
	float ArgumentValueFloat; // 0x34(0x04)
	enum class ETextGender ArgumentValueGender; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.ExpressionInput
// Size: 0x38 (Inherited: 0x00)
struct FExpressionInput {
	int32 OutputIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString InputName; // 0x08(0x10)
	int32 Mask; // 0x18(0x04)
	int32 MaskR; // 0x1c(0x04)
	int32 MaskG; // 0x20(0x04)
	int32 MaskB; // 0x24(0x04)
	int32 MaskA; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName ExpressionName; // 0x30(0x08)
};

// ScriptStruct Engine.MaterialAttributesInput
// Size: 0x40 (Inherited: 0x38)
struct FMaterialAttributesInput : FExpressionInput {
	int32 PropertyConnectedBitmask; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Engine.ExpressionOutput
// Size: 0x28 (Inherited: 0x00)
struct FExpressionOutput {
	struct FString OutputName; // 0x00(0x10)
	int32 Mask; // 0x10(0x04)
	int32 MaskR; // 0x14(0x04)
	int32 MaskG; // 0x18(0x04)
	int32 MaskB; // 0x1c(0x04)
	int32 MaskA; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.MaterialInput
// Size: 0x38 (Inherited: 0x00)
struct FMaterialInput {
	int32 OutputIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString InputName; // 0x08(0x10)
	int32 Mask; // 0x18(0x04)
	int32 MaskR; // 0x1c(0x04)
	int32 MaskG; // 0x20(0x04)
	int32 MaskB; // 0x24(0x04)
	int32 MaskA; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName ExpressionName; // 0x30(0x08)
};

// ScriptStruct Engine.ColorMaterialInput
// Size: 0x40 (Inherited: 0x38)
struct FColorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FColor Constant; // 0x3c(0x04)
};

// ScriptStruct Engine.ScalarMaterialInput
// Size: 0x40 (Inherited: 0x38)
struct FScalarMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Constant; // 0x3c(0x04)
};

// ScriptStruct Engine.VectorMaterialInput
// Size: 0x48 (Inherited: 0x38)
struct FVectorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector Constant; // 0x3c(0x0c)
};

// ScriptStruct Engine.Vector2MaterialInput
// Size: 0x48 (Inherited: 0x38)
struct FVector2MaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float ConstantX; // 0x3c(0x04)
	float ConstantY; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.HitResult
// Size: 0x88 (Inherited: 0x00)
struct FHitResult {
	char bBlockingHit : 1; // 0x00(0x01)
	char bStartPenetrating : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Time; // 0x04(0x04)
	float Distance; // 0x08(0x04)
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	struct FVector_NetQuantize ImpactPoint; // 0x18(0x0c)
	struct FVector_NetQuantizeNormal Normal; // 0x24(0x0c)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x30(0x0c)
	struct FVector_NetQuantize TraceStart; // 0x3c(0x0c)
	struct FVector_NetQuantize TraceEnd; // 0x48(0x0c)
	float PenetrationDepth; // 0x54(0x04)
	int32 Item; // 0x58(0x04)
	struct UPhysicalMaterial* PhysMaterial; // 0x5c(0x08)
	struct AActor* Actor; // 0x64(0x08)
	struct UPrimitiveComponent* Component; // 0x6c(0x08)
	char pad_74[0x4]; // 0x74(0x04)
	struct FName BoneName; // 0x78(0x08)
	int32 FaceIndex; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Engine.Vector_NetQuantize
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize : FVector {
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantizeNormal : FVector {
};

// ScriptStruct Engine.*6ea1b55ea3
// Size: 0x10 (Inherited: 0x00)
struct F*6ea1b55ea3 {
	struct TArray<struct FFloatCurve> *afdd2d733a; // 0x00(0x10)
};

// ScriptStruct Engine.FloatCurve
// Size: 0x90 (Inherited: 0x20)
struct FFloatCurve : FAnimCurveBase {
	struct FRichCurve FloatCurve; // 0x20(0x70)
};

// ScriptStruct Engine.AnimCurveBase
// Size: 0x20 (Inherited: 0x00)
struct FAnimCurveBase {
	struct FName LastObservedName; // 0x00(0x08)
	struct FSmartName Name; // 0x08(0x10)
	int32 CurveTypeFlags; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.SmartName
// Size: 0x10 (Inherited: 0x00)
struct FSmartName {
	struct FName DisplayName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.RichCurve
// Size: 0x70 (Inherited: 0x58)
struct FRichCurve : FIndexedCurve {
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x58(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float DefaultValue; // 0x5c(0x04)
	struct TArray<struct FRichCurveKey> Keys; // 0x60(0x10)
};

// ScriptStruct Engine.IndexedCurve
// Size: 0x58 (Inherited: 0x00)
struct FIndexedCurve {
	char pad_0[0x8]; // 0x00(0x08)
	struct FKeyHandleMap KeyHandlesToIndices; // 0x08(0x50)
};

// ScriptStruct Engine.KeyHandleMap
// Size: 0x50 (Inherited: 0x00)
struct FKeyHandleMap {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.RichCurveKey
// Size: 0x1c (Inherited: 0x00)
struct FRichCurveKey {
	enum class *ecdf1ea38a InterpMode; // 0x00(0x01)
	enum class *e7608c4584 TangentMode; // 0x01(0x01)
	enum class *5d09199da6 TangentWeightMode; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Time; // 0x04(0x04)
	float Value; // 0x08(0x04)
	float ArriveTangent; // 0x0c(0x04)
	float ArriveTangentWeight; // 0x10(0x04)
	float LeaveTangent; // 0x14(0x04)
	float LeaveTangentWeight; // 0x18(0x04)
};

// ScriptStruct Engine.AnimNotifyEvent
// Size: 0xa8 (Inherited: 0x30)
struct FAnimNotifyEvent : FAnimLinkableElement {
	float DisplayTime; // 0x30(0x04)
	float *f2fea74c04; // 0x34(0x04)
	float *0afab0a794; // 0x38(0x04)
	float TriggerWeightThreshold; // 0x3c(0x04)
	struct FName NotifyName; // 0x40(0x08)
	struct UAnimNotify* Notify; // 0x48(0x08)
	struct UAnimNotifyState* NotifyStateClass; // 0x50(0x08)
	float Duration; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FAnimLinkableElement EndLink; // 0x60(0x30)
	bool *65dde335cf; // 0x90(0x01)
	enum class EMontageNotifyTickType MontageTickType; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float NotifyTriggerChance; // 0x94(0x04)
	enum class ENotifyFilterType NotifyFilterType; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32 NotifyFilterLOD; // 0x9c(0x04)
	bool bTriggerOnDedicatedServer; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 TrackIndex; // 0xa4(0x04)
};

// ScriptStruct Engine.AnimLinkableElement
// Size: 0x30 (Inherited: 0x00)
struct FAnimLinkableElement {
	char pad_0[0x8]; // 0x00(0x08)
	struct UAnimMontage* *bc72ad56c3; // 0x08(0x08)
	int32 SlotIndex; // 0x10(0x04)
	int32 *48636034a2; // 0x14(0x04)
	enum class EAnimLinkMethod *fab1009e55; // 0x18(0x01)
	enum class EAnimLinkMethod *60e9c9f85b; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float *3b5a62b680; // 0x1c(0x04)
	float *9955680ada; // 0x20(0x04)
	float *cd27cbffc5; // 0x24(0x04)
	struct UAnimSequenceBase* *6024c52f43; // 0x28(0x08)
};

// ScriptStruct Engine.*6e4e2ec99e
// Size: 0x0c (Inherited: 0x00)
struct F*6e4e2ec99e {
	int32 *8487b7a536; // 0x00(0x04)
	float *05ecea08b3; // 0x04(0x04)
	enum class EAnimNotifyEventType *810cd12c2a; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.BranchingPoint
// Size: 0x40 (Inherited: 0x30)
struct FBranchingPoint : FAnimLinkableElement {
	struct FName EventName; // 0x30(0x08)
	float DisplayTime; // 0x38(0x04)
	float *f2fea74c04; // 0x3c(0x04)
};

// ScriptStruct Engine.*14ee813809
// Size: 0x18 (Inherited: 0x00)
struct F*14ee813809 {
	struct FName SlotName; // 0x00(0x08)
	struct FAnimTrack AnimTrack; // 0x08(0x10)
};

// ScriptStruct Engine.AnimTrack
// Size: 0x10 (Inherited: 0x00)
struct FAnimTrack {
	struct TArray<struct FAnimSegment> AnimSegments; // 0x00(0x10)
};

// ScriptStruct Engine.AnimSegment
// Size: 0x20 (Inherited: 0x00)
struct FAnimSegment {
	struct UAnimSequenceBase* AnimReference; // 0x00(0x08)
	float StartPos; // 0x08(0x04)
	float AnimStartTime; // 0x0c(0x04)
	float AnimEndTime; // 0x10(0x04)
	float AnimPlayRate; // 0x14(0x04)
	int32 LoopingCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*950c263671
// Size: 0x58 (Inherited: 0x30)
struct F*950c263671 : FAnimLinkableElement {
	struct FName SectionName; // 0x30(0x08)
	float StartTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FName *6109a9572e; // 0x40(0x08)
	struct TArray<struct U*7db4928023*> MetaData; // 0x48(0x10)
};

// ScriptStruct Engine.*1e7b9a312d
// Size: 0x20 (Inherited: 0x00)
struct F*1e7b9a312d {
	struct TArray<struct F*900dd2f72b> AuthoredSyncMarkers; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*900dd2f72b
// Size: 0x10 (Inherited: 0x00)
struct F*900dd2f72b {
	struct FName MarkerName; // 0x00(0x08)
	float Time; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.AlphaBlend
// Size: 0x38 (Inherited: 0x00)
struct FAlphaBlend {
	enum class EAlphaBlendOption BlendOption; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* CustomCurve; // 0x08(0x08)
	float BlendTime; // 0x10(0x04)
	char pad_14[0x24]; // 0x14(0x24)
};

// ScriptStruct Engine.*202555cf20
// Size: 0x20 (Inherited: 0x00)
struct F*202555cf20 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.SimpleMemberReference
// Size: 0x20 (Inherited: 0x00)
struct FSimpleMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FName MemberName; // 0x08(0x08)
	struct FGuid *37af29c89d; // 0x10(0x10)
};

// ScriptStruct Engine.*0f0451e91e
// Size: 0x58 (Inherited: 0x50)
struct F*0f0451e91e : F*67c21faf56 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*67c21faf56
// Size: 0x50 (Inherited: 0x00)
struct F*67c21faf56 {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ETickingGroup *92a8caebcb; // 0x08(0x01)
	enum class ETickingGroup *f7747cd87a; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	char *508273248a : 1; // 0x0c(0x01)
	char bCanEverTick : 1; // 0x0c(0x01)
	char *980243ea31 : 1; // 0x0c(0x01)
	char *a6ca61acd3 : 1; // 0x0c(0x01)
	char pad_C_4 : 4; // 0x0c(0x01)
	char pad_D[0x33]; // 0x0d(0x33)
	float TickInterval; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// ScriptStruct Engine.*b8c123cb20
// Size: 0x20 (Inherited: 0x00)
struct F*b8c123cb20 {
	struct FText Text; // 0x00(0x18)
	float Time; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*3875950e73
// Size: 0x1c (Inherited: 0x00)
struct F*3875950e73 {
	struct FVector PositionControlPoint; // 0x00(0x0c)
	bool bPositionIsRelative; // 0x0c(0x01)
	char pad_D[0xf]; // 0x0d(0x0f)
};

// ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x18 (Inherited: 0x01)
struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	char pad_1[0x17]; // 0x01(0x17)
};

// ScriptStruct Engine.*17616acbdc
// Size: 0x38 (Inherited: 0x00)
struct F*17616acbdc {
	bool *af6e888104; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct F*9c0cf43e52 Data; // 0x08(0x30)
};

// ScriptStruct Engine.*9c0cf43e52
// Size: 0x30 (Inherited: 0x00)
struct F*9c0cf43e52 {
	struct FName *35f7e6d712; // 0x00(0x08)
	enum class *a36c3c9f6e Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 IntValue; // 0x0c(0x04)
	float FloatValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString StringValue; // 0x18(0x10)
	struct UObject* *e5b9857a29; // 0x28(0x08)
};

// ScriptStruct Engine.*e57696b0b8
// Size: 0x18 (Inherited: 0x00)
struct F*e57696b0b8 {
	int32 Linkage; // 0x00(0x04)
	int32 UUID; // 0x04(0x04)
	struct FName *88a56cad88; // 0x08(0x08)
	struct UObject* *3c20580a44; // 0x10(0x08)
};

// ScriptStruct Engine.*da672abddc
// Size: 0x08 (Inherited: 0x00)
struct F*da672abddc {
	uint64 Handle; // 0x00(0x08)
};

// ScriptStruct Engine.*6ce8db38d7
// Size: 0x18 (Inherited: 0x00)
struct F*6ce8db38d7 {
	struct FString ActionName; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.CollisionProfileName
// Size: 0x08 (Inherited: 0x00)
struct FCollisionProfileName {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct Engine.DebugFloatHistory
// Size: 0x20 (Inherited: 0x00)
struct FDebugFloatHistory {
	struct TArray<float> Samples; // 0x00(0x10)
	float MaxSamples; // 0x10(0x04)
	float MinValue; // 0x14(0x04)
	float MaxValue; // 0x18(0x04)
	bool bAutoAdjustMinMax; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*c840696658
// Size: 0x04 (Inherited: 0x00)
struct F*c840696658 {
	int32 Data; // 0x00(0x04)
};

// ScriptStruct Engine.*726f9049bc
// Size: 0x0c (Inherited: 0x00)
struct F*726f9049bc {
	int32 *a39e9fc487; // 0x00(0x04)
	int32 *0a2fa5fadf; // 0x04(0x04)
	int32 *0f47854714; // 0x08(0x04)
};

// ScriptStruct Engine.CurveTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FCurveTableRowHandle {
	struct UCurveTable* CurveTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.Vector_NetQuantize100
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize100 : FVector {
};

// ScriptStruct Engine.Vector_NetQuantize10
// Size: 0x0c (Inherited: 0x0c)
struct FVector_NetQuantize10 : FVector {
};

// ScriptStruct Engine.*12732c41f6
// Size: 0xb0 (Inherited: 0x00)
struct F*12732c41f6 {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Engine.*ba355dac52
// Size: 0x18 (Inherited: 0x00)
struct F*ba355dac52 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FAttackId AttackId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* *8d27418580; // 0x10(0x08)
};

// ScriptStruct Engine.AttackId
// Size: 0x04 (Inherited: 0x00)
struct FAttackId {
	int32 ID; // 0x00(0x04)
};

// ScriptStruct Engine.*82957ba793
// Size: 0x58 (Inherited: 0x50)
struct F*82957ba793 : F*67c21faf56 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*f897083c18
// Size: 0x40 (Inherited: 0x00)
struct F*f897083c18 {
	struct AActor* AttachParent; // 0x00(0x08)
	struct FVector_NetQuantize100 *34f1a04888; // 0x08(0x0c)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x14(0x0c)
	struct FRotator *1423680981; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FName *ec4fa41676; // 0x30(0x08)
	struct USceneComponent* AttachComponent; // 0x38(0x08)
};

// ScriptStruct Engine.RepMovement
// Size: 0x34 (Inherited: 0x00)
struct FRepMovement {
	struct FVector LinearVelocity; // 0x00(0x0c)
	struct FVector AngularVelocity; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
	char *f76e5dc2da : 1; // 0x30(0x01)
	char *0710f6708a : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	enum class *3545f79891 *8aa281000c; // 0x31(0x01)
	enum class *3545f79891 *462022637c; // 0x32(0x01)
	enum class *7dc6b72b4e *8c09549d1d; // 0x33(0x01)
};

// ScriptStruct Engine.*9f1f98e668
// Size: 0x04 (Inherited: 0x00)
struct F*9f1f98e668 {
	char bCanCrouch : 1; // 0x00(0x01)
	char bCanJump : 1; // 0x00(0x01)
	char bCanWalk : 1; // 0x00(0x01)
	char bCanSwim : 1; // 0x00(0x01)
	char bCanFly : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*4093962ce1
// Size: 0x20 (Inherited: 0x04)
struct F*4093962ce1 : F*9f1f98e668 {
	float AgentRadius; // 0x04(0x04)
	float AgentHeight; // 0x08(0x04)
	float AgentStepHeight; // 0x0c(0x04)
	float NavWalkingSearchHeightScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UClass* PreferredNavData; // 0x18(0x08)
};

// ScriptStruct Engine.TableRowBase
// Size: 0x08 (Inherited: 0x00)
struct FTableRowBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size: 0x58 (Inherited: 0x30)
struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	bool bIgnoreForRelevancyTest; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 GroupIndex; // 0x34(0x04)
	enum class *c20d8612ea GroupRole; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float BlendWeight; // 0x3c(0x04)
	float InternalTimeAccumulator; // 0x40(0x04)
	char pad_44[0x14]; // 0x44(0x14)
};

// ScriptStruct Engine.AnimNode_Base
// Size: 0x30 (Inherited: 0x00)
struct FAnimNode_Base {
	char pad_0[0x8]; // 0x00(0x08)
	struct FExposedValueHandler EvaluateGraphExposedInputs; // 0x08(0x28)
};

// ScriptStruct Engine.ExposedValueHandler
// Size: 0x28 (Inherited: 0x00)
struct FExposedValueHandler {
	struct FName BoundFunction; // 0x00(0x08)
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// Size: 0x80 (Inherited: 0x00)
struct FExposedValueCopyRecord {
	struct UProperty* SourceProperty; // 0x00(0x08)
	struct FName SourcePropertyName; // 0x08(0x08)
	struct FName SourceSubPropertyName; // 0x10(0x08)
	int32 SourceArrayIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UProperty* DestProperty; // 0x20(0x08)
	int32 DestArrayIndex; // 0x28(0x04)
	int32 Size; // 0x2c(0x04)
	bool bInstanceIsTarget; // 0x30(0x01)
	enum class EPostCopyOperation PostCopyOperation; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct UBoolProperty* CachedBoolSourceProperty; // 0x38(0x08)
	struct UBoolProperty* CachedBoolDestProperty; // 0x40(0x08)
	struct UStructProperty* CachedStructDestProperty; // 0x48(0x08)
	struct UObjectProperty* CachedObjectSourceProperty; // 0x50(0x08)
	struct UProperty* CachedObjectSubProperty; // 0x58(0x08)
	char pad_60[0x20]; // 0x60(0x20)
};

// ScriptStruct Engine.BlendSampleData
// Size: 0x40 (Inherited: 0x00)
struct FBlendSampleData {
	int32 SampleDataIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* Animation; // 0x08(0x08)
	float TotalWeight; // 0x10(0x04)
	float Time; // 0x14(0x04)
	float PreviousTime; // 0x18(0x04)
	char pad_1C[0x24]; // 0x1c(0x24)
};

// ScriptStruct Engine.BlendFilter
// Size: 0x90 (Inherited: 0x00)
struct FBlendFilter {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.InputScaleBiasClamp
// Size: 0x30 (Inherited: 0x00)
struct FInputScaleBiasClamp {
	bool bMapRange; // 0x00(0x01)
	bool bClampResult; // 0x01(0x01)
	bool bInterpResult; // 0x02(0x01)
	bool bInitialized; // 0x03(0x01)
	struct FInputRange InRange; // 0x04(0x08)
	struct FInputRange OutRange; // 0x0c(0x08)
	float Scale; // 0x14(0x04)
	float Bias; // 0x18(0x04)
	float ClampMin; // 0x1c(0x04)
	float ClampMax; // 0x20(0x04)
	float InterpSpeedIncreasing; // 0x24(0x04)
	float InterpSpeedDecreasing; // 0x28(0x04)
	float InterpolatedResult; // 0x2c(0x04)
};

// ScriptStruct Engine.InputRange
// Size: 0x08 (Inherited: 0x00)
struct FInputRange {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Engine.InputAlphaBoolBlend
// Size: 0x50 (Inherited: 0x00)
struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x00(0x04)
	float BlendOutTime; // 0x04(0x04)
	enum class EAlphaBlendOption BlendOption; // 0x08(0x01)
	bool bInitialized; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UCurveFloat* CustomCurve; // 0x10(0x08)
	struct FAlphaBlend AlphaBlend; // 0x18(0x38)
};

// ScriptStruct Engine.InputScaleBias
// Size: 0x08 (Inherited: 0x00)
struct FInputScaleBias {
	float Scale; // 0x00(0x04)
	float Bias; // 0x04(0x04)
};

// ScriptStruct Engine.BoneReference
// Size: 0x18 (Inherited: 0x00)
struct FBoneReference {
	struct FName BoneName; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.PoseLink
// Size: 0x18 (Inherited: 0x18)
struct FPoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.PoseLinkBase
// Size: 0x18 (Inherited: 0x00)
struct FPoseLinkBase {
	int32 LinkID; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// Size: 0x18 (Inherited: 0x18)
struct FComponentSpacePoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.Axis
// Size: 0x10 (Inherited: 0x00)
struct FAxis {
	struct FVector Axis; // 0x00(0x0c)
	bool bInLocalSpace; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// Size: 0x70 (Inherited: 0x58)
struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x58(0x08)
	bool bLoopAnimation; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float PlayRate; // 0x64(0x04)
	float StartPosition; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.*082f93e0ad
// Size: 0x520 (Inherited: 0x00)
struct F*082f93e0ad {
	char pad_0[0x520]; // 0x00(0x520)
};

// ScriptStruct Engine.InputBlendPose
// Size: 0x10 (Inherited: 0x00)
struct FInputBlendPose {
	struct TArray<struct FBranchFilter> BranchFilters; // 0x00(0x10)
};

// ScriptStruct Engine.BranchFilter
// Size: 0x10 (Inherited: 0x00)
struct FBranchFilter {
	struct FName BoneName; // 0x00(0x08)
	int32 BlendDepth; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*64f328df7d
// Size: 0xb0 (Inherited: 0x18)
struct F*64f328df7d : F*ba355dac52 {
	float Damage; // 0x18(0x04)
	struct FVector_NetQuantizeNormal *cc758bcf76; // 0x1c(0x0c)
	struct FHitResult *a576f34c0d; // 0x28(0x88)
};

// ScriptStruct Engine.*71b70dd01c
// Size: 0x01 (Inherited: 0x00)
struct F*71b70dd01c {
	char pad_0_0 : 1; // 0x00(0x01)
	char *e7c59d01ee : 1; // 0x00(0x01)
	char *e8d5e8487f : 1; // 0x00(0x01)
	char *4ff8273a7f : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
};

// ScriptStruct Engine.RuntimeFloatCurve
// Size: 0x78 (Inherited: 0x00)
struct FRuntimeFloatCurve {
	struct FRichCurve EditorCurveData; // 0x00(0x70)
	struct UCurveFloat* ExternalCurve; // 0x70(0x08)
};

// ScriptStruct Engine.LightingChannels
// Size: 0x03 (Inherited: 0x00)
struct FLightingChannels {
	bool bChannel0; // 0x00(0x01)
	bool bChannel1; // 0x01(0x01)
	bool bChannel2; // 0x02(0x01)
};

// ScriptStruct Engine.PerBoneBlendWeight
// Size: 0x08 (Inherited: 0x00)
struct FPerBoneBlendWeight {
	int32 SourceIndex; // 0x00(0x04)
	float BlendWeight; // 0x04(0x04)
};

// ScriptStruct Engine.PoseSnapshot
// Size: 0x38 (Inherited: 0x00)
struct FPoseSnapshot {
	struct TArray<struct FTransform> LocalTransforms; // 0x00(0x10)
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct FName SkeletalMeshName; // 0x20(0x08)
	struct FName SnapshotName; // 0x28(0x08)
	bool bIsValid; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Engine.SplineCurves
// Size: 0x60 (Inherited: 0x00)
struct FSplineCurves {
	struct FInterpCurveVector Position; // 0x00(0x18)
	struct FInterpCurveQuat Rotation; // 0x18(0x18)
	struct FInterpCurveVector Scale; // 0x30(0x18)
	struct FInterpCurveFloat ReparamTable; // 0x48(0x18)
};

// ScriptStruct Engine.AnimCurveParam
// Size: 0x10 (Inherited: 0x00)
struct FAnimCurveParam {
	struct FName Name; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*a422f9d4ff
// Size: 0x70 (Inherited: 0x58)
struct F*a422f9d4ff : FIndexedCurve {
	struct TArray<struct F*db88baab36> Keys; // 0x58(0x10)
	int32 DefaultValue; // 0x68(0x04)
	bool *18734f9c06; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.*db88baab36
// Size: 0x08 (Inherited: 0x00)
struct F*db88baab36 {
	float Time; // 0x00(0x04)
	int32 Value; // 0x04(0x04)
};

// ScriptStruct Engine.*754bde3481
// Size: 0x78 (Inherited: 0x58)
struct F*754bde3481 : FIndexedCurve {
	struct FString DefaultValue; // 0x58(0x10)
	struct TArray<struct F*8ea4d1921a> Keys; // 0x68(0x10)
};

// ScriptStruct Engine.*8ea4d1921a
// Size: 0x18 (Inherited: 0x00)
struct F*8ea4d1921a {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct Engine.DirectoryPath
// Size: 0x10 (Inherited: 0x00)
struct FDirectoryPath {
	struct FString path; // 0x00(0x10)
};

// ScriptStruct Engine.*63886a6ada
// Size: 0x60 (Inherited: 0x00)
struct F*63886a6ada {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UTexture2D* Heightmap; // 0x08(0x08)
	struct UTexture2D* Normalmap; // 0x10(0x08)
	struct TArray<struct UTexture2D*> Weightmaps; // 0x18(0x10)
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct Engine.*b6fef37295
// Size: 0x60 (Inherited: 0x00)
struct F*b6fef37295 {
	struct FVector2D V0_Pos; // 0x00(0x08)
	struct FVector2D V0_UV; // 0x08(0x08)
	struct FLinearColor V0_Color; // 0x10(0x10)
	struct FVector2D V1_Pos; // 0x20(0x08)
	struct FVector2D V1_UV; // 0x28(0x08)
	struct FLinearColor V1_Color; // 0x30(0x10)
	struct FVector2D V2_Pos; // 0x40(0x08)
	struct FVector2D V2_UV; // 0x48(0x08)
	struct FLinearColor V2_Color; // 0x50(0x10)
};

// ScriptStruct Engine.*757275a7e9
// Size: 0x28 (Inherited: 0x00)
struct F*757275a7e9 {
	char bClipText : 1; // 0x00(0x01)
	char bEnableShadow : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct F*02824b1695 GlowInfo; // 0x04(0x24)
};

// ScriptStruct Engine.*02824b1695
// Size: 0x24 (Inherited: 0x00)
struct F*02824b1695 {
	char bEnableGlow : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor GlowColor; // 0x04(0x10)
	struct FVector2D GlowOuterRadius; // 0x14(0x08)
	struct FVector2D GlowInnerRadius; // 0x1c(0x08)
};

// ScriptStruct Engine.Redirector
// Size: 0x10 (Inherited: 0x00)
struct FRedirector {
	struct FName OldName; // 0x00(0x08)
	struct FName NewName; // 0x08(0x08)
};

// ScriptStruct Engine.FilePath
// Size: 0x10 (Inherited: 0x00)
struct FFilePath {
	struct FString FilePath; // 0x00(0x10)
};

// ScriptStruct Engine.*e6c2ea7bad
// Size: 0x18 (Inherited: 0x00)
struct F*e6c2ea7bad {
	struct AActor* OtherActor; // 0x00(0x08)
	struct FName *bb43e75a3a; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.*e5dcca1adb
// Size: 0x08 (Inherited: 0x00)
struct F*e5dcca1adb {
	struct FName ComponentName; // 0x00(0x08)
};

// ScriptStruct Engine.*a92203063d
// Size: 0x10 (Inherited: 0x00)
struct F*a92203063d {
	enum class *eaa9129fe2 WalkableSlopeBehavior; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float WalkableSlopeAngle; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*9e80ff674e
// Size: 0x58 (Inherited: 0x28)
struct F*9e80ff674e : F*8d0976df83 {
	struct F*b6897eef41 Params; // 0x28(0x14)
	struct FVector Origin; // 0x3c(0x0c)
	struct TArray<struct FHitResult> *aae3f68c62; // 0x48(0x10)
};

// ScriptStruct Engine.*8d0976df83
// Size: 0x28 (Inherited: 0x18)
struct F*8d0976df83 : F*ba355dac52 {
	struct FVector *bc523afb99; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*b6897eef41
// Size: 0x14 (Inherited: 0x00)
struct F*b6897eef41 {
	float *d033642f6f; // 0x00(0x04)
	float *d772befc39; // 0x04(0x04)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float *b60623980f; // 0x10(0x04)
};

// ScriptStruct Engine.MeshBuildSettings
// Size: 0x40 (Inherited: 0x00)
struct FMeshBuildSettings {
	bool *a2e863f389; // 0x00(0x01)
	bool bRecomputeNormals; // 0x01(0x01)
	bool bRecomputeTangents; // 0x02(0x01)
	bool bRemoveDegenerates; // 0x03(0x01)
	bool bBuildAdjacencyBuffer; // 0x04(0x01)
	bool bBuildReversedIndexBuffer; // 0x05(0x01)
	bool bUseHighPrecisionTangentBasis; // 0x06(0x01)
	bool bUseFullPrecisionUVs; // 0x07(0x01)
	bool bGenerateLightmapUVs; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 MinLightmapResolution; // 0x0c(0x04)
	int32 SrcLightmapIndex; // 0x10(0x04)
	int32 DstLightmapIndex; // 0x14(0x04)
	float BuildScale; // 0x18(0x04)
	struct FVector BuildScale3D; // 0x1c(0x0c)
	float DistanceFieldResolutionScale; // 0x28(0x04)
	bool bGenerateDistanceFieldAsIfTwoSided; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float DistanceFieldBias; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UStaticMesh* DistanceFieldReplacementMesh; // 0x38(0x08)
};

// ScriptStruct Engine.*95c5fab0f0
// Size: 0x1c (Inherited: 0x00)
struct F*95c5fab0f0 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
};

// ScriptStruct Engine.*6ff701629f
// Size: 0x88 (Inherited: 0x00)
struct F*6ff701629f {
	char pad_0[0x4]; // 0x00(0x04)
	int32 UpdateRate; // 0x04(0x04)
	int32 *87918cc7e8; // 0x08(0x04)
	bool *ac965e895b; // 0x0c(0x01)
	bool *bf9bccffb3; // 0x0d(0x01)
	bool *cc916e8615; // 0x0e(0x01)
	bool *b33fb6fdb9; // 0x0f(0x01)
	float *cee4c8dece; // 0x10(0x04)
	float *769bd5494a; // 0x14(0x04)
	char pad_18[0x4]; // 0x18(0x04)
	int32 *8b28bc882e; // 0x1c(0x04)
	struct TArray<float> *4443e66182; // 0x20(0x10)
	struct TMap<int32, int32> *198694087b; // 0x30(0x50)
	int32 *4cf0815086; // 0x80(0x04)
	enum class *e0955236c9 *a8e792250a; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// ScriptStruct Engine.*3ce74f5386
// Size: 0x10 (Inherited: 0x00)
struct F*3ce74f5386 {
	struct FName SlotName; // 0x00(0x08)
	int32 *c500f930b2; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*39938f1c3e
// Size: 0x18 (Inherited: 0x00)
struct F*39938f1c3e {
	struct FName SlotName; // 0x00(0x08)
	struct TArray<float> *f295590236; // 0x08(0x10)
};

// ScriptStruct Engine.*ae89d631cf
// Size: 0x10 (Inherited: 0x00)
struct F*ae89d631cf {
	struct FVector Direction; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
};

// ScriptStruct Engine.*04a8a2b0ec
// Size: 0x18 (Inherited: 0x00)
struct F*04a8a2b0ec {
	struct AActor* Actor; // 0x00(0x08)
	struct UPrimitiveComponent* Component; // 0x08(0x08)
	char pad_10[0x4]; // 0x10(0x04)
	char bBlockingHit : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Engine.*e6f0dca848
// Size: 0x18 (Inherited: 0x00)
struct F*e6f0dca848 {
	struct UPrimitiveComponent* Primitive; // 0x00(0x08)
	struct UDecalComponent* Decal; // 0x08(0x08)
	int32 ElementIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*cf9f94a656
// Size: 0x04 (Inherited: 0x00)
struct F*cf9f94a656 {
	char bDistributionEnabled : 1; // 0x00(0x01)
	char bForceContentExport : 1; // 0x00(0x01)
	char *6da19dd415 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*5657893bbf
// Size: 0x10 (Inherited: 0x00)
struct F*5657893bbf {
	char bDebugMode : 1; // 0x00(0x01)
	char bStatsEnabled : 1; // 0x00(0x01)
	char bGatherBSPSurfacesAcrossComponents : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CoplanarTolerance; // 0x04(0x04)
	char bUseImmediateImport : 1; // 0x08(0x01)
	char bImmediateProcessMappings : 1; // 0x08(0x01)
	char bSortMappings : 1; // 0x08(0x01)
	char bDumpBinaryFiles : 1; // 0x08(0x01)
	char bDebugMaterials : 1; // 0x08(0x01)
	char bPadMappings : 1; // 0x08(0x01)
	char bDebugPaddings : 1; // 0x08(0x01)
	char bOnlyCalcDebugTexelMappings : 1; // 0x08(0x01)
	char bUseRandomColors : 1; // 0x09(0x01)
	char bColorBordersGreen : 1; // 0x09(0x01)
	char bColorByExecutionTime : 1; // 0x09(0x01)
	char pad_9_3 : 5; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float ExecutionTimeDivisor; // 0x0c(0x04)
};

// ScriptStruct Engine.*25888ccc71
// Size: 0x18 (Inherited: 0x00)
struct F*25888ccc71 {
	char bUseTwoSidedLighting : 1; // 0x00(0x01)
	char bShadowIndirectOnly : 1; // 0x00(0x01)
	char bUseEmissiveForStaticLighting : 1; // 0x00(0x01)
	char bUseVertexNormalForHemisphereGather : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float *20fcb54616; // 0x04(0x04)
	float *b9933130bf; // 0x08(0x04)
	float EmissiveBoost; // 0x0c(0x04)
	float DiffuseBoost; // 0x10(0x04)
	float FullyOccludedSamplesFraction; // 0x14(0x04)
};

// ScriptStruct Engine.*f6ce8630d2
// Size: 0x10 (Inherited: 0x0c)
struct F*f6ce8630d2 : F*fbd5e16483 {
	float LightSourceAngle; // 0x0c(0x04)
};

// ScriptStruct Engine.*fbd5e16483
// Size: 0x0c (Inherited: 0x00)
struct F*fbd5e16483 {
	float IndirectLightingSaturation; // 0x00(0x04)
	float ShadowExponent; // 0x04(0x04)
	bool bUseAreaShadowsForStationaryLight; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.*d88ff4a89c
// Size: 0x0c (Inherited: 0x0c)
struct F*d88ff4a89c : F*fbd5e16483 {
};

// ScriptStruct Engine.*36f94a7d1e
// Size: 0x28 (Inherited: 0x00)
struct F*36f94a7d1e {
	struct FString *d706f6bbd2; // 0x00(0x10)
	struct TArray<struct F*b8c123cb20> Subtitles; // 0x10(0x10)
	char *e1bb619dac : 1; // 0x20(0x01)
	char *4b10fb9a56 : 1; // 0x20(0x01)
	char *8d7079efc8 : 1; // 0x20(0x01)
	char pad_20_3 : 5; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*82355449ea
// Size: 0x38 (Inherited: 0x00)
struct F*82355449ea {
	struct AActor* Base; // 0x00(0x08)
	struct FVector Position; // 0x08(0x0c)
	struct FVector *c62bf1e99b; // 0x14(0x0c)
	struct FRotator *3a564287d3; // 0x20(0x0c)
	struct FVector *e7deb175c4; // 0x2c(0x0c)
};

// ScriptStruct Engine.*53a1c74b57
// Size: 0x10 (Inherited: 0x00)
struct F*53a1c74b57 {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct USoundBase* Sound; // 0x08(0x08)
};

// ScriptStruct Engine.*afa04ea64b
// Size: 0x28 (Inherited: 0x00)
struct F*afa04ea64b {
	struct TArray<struct F*820a420584> *573a886ffe; // 0x00(0x10)
	struct FVector *162d21f0b0; // 0x10(0x0c)
	struct FVector *85bfd15ff5; // 0x1c(0x0c)
};

// ScriptStruct Engine.*820a420584
// Size: 0x30 (Inherited: 0x00)
struct F*820a420584 {
	struct FVector *478c9eda43; // 0x00(0x0c)
	struct FVector *31830ab499; // 0x0c(0x0c)
	float *4bfe134083; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UPhysicalMaterial* PhysMaterial[0x02]; // 0x20(0x10)
};

// ScriptStruct Engine.*28687cc503
// Size: 0x1c (Inherited: 0x00)
struct F*28687cc503 {
	float LinearDeltaThresholdSq; // 0x00(0x04)
	float LinearInterpAlpha; // 0x04(0x04)
	float LinearRecipFixTime; // 0x08(0x04)
	float AngularDeltaThreshold; // 0x0c(0x04)
	float AngularInterpAlpha; // 0x10(0x04)
	float AngularRecipFixTime; // 0x14(0x04)
	float BodySpeedThresholdSq; // 0x18(0x04)
};

// ScriptStruct Engine.*3b59881556
// Size: 0x40 (Inherited: 0x00)
struct F*3b59881556 {
	struct FVector_NetQuantize100 Position; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector_NetQuantize100 *b98201b6ad; // 0x20(0x0c)
	struct FVector_NetQuantize100 AngVel; // 0x2c(0x0c)
	bool Flags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.CollisionResponseContainer
// Size: 0x20 (Inherited: 0x00)
struct FCollisionResponseContainer {
	enum class ECollisionResponse WorldStatic; // 0x00(0x01)
	enum class ECollisionResponse WorldDynamic; // 0x01(0x01)
	enum class ECollisionResponse Pawn; // 0x02(0x01)
	enum class ECollisionResponse Visibility; // 0x03(0x01)
	enum class ECollisionResponse Camera; // 0x04(0x01)
	enum class ECollisionResponse PhysicsBody; // 0x05(0x01)
	enum class ECollisionResponse Vehicle; // 0x06(0x01)
	enum class ECollisionResponse Destructible; // 0x07(0x01)
	enum class ECollisionResponse EngineTraceChannel1; // 0x08(0x01)
	enum class ECollisionResponse EngineTraceChannel2; // 0x09(0x01)
	enum class ECollisionResponse EngineTraceChannel3; // 0x0a(0x01)
	enum class ECollisionResponse EngineTraceChannel4; // 0x0b(0x01)
	enum class ECollisionResponse EngineTraceChannel5; // 0x0c(0x01)
	enum class ECollisionResponse EngineTraceChannel6; // 0x0d(0x01)
	enum class ECollisionResponse GameTraceChannel1; // 0x0e(0x01)
	enum class ECollisionResponse GameTraceChannel2; // 0x0f(0x01)
	enum class ECollisionResponse GameTraceChannel3; // 0x10(0x01)
	enum class ECollisionResponse GameTraceChannel4; // 0x11(0x01)
	enum class ECollisionResponse GameTraceChannel5; // 0x12(0x01)
	enum class ECollisionResponse GameTraceChannel6; // 0x13(0x01)
	enum class ECollisionResponse GameTraceChannel7; // 0x14(0x01)
	enum class ECollisionResponse GameTraceChannel8; // 0x15(0x01)
	enum class ECollisionResponse GameTraceChannel9; // 0x16(0x01)
	enum class ECollisionResponse GameTraceChannel10; // 0x17(0x01)
	enum class ECollisionResponse GameTraceChannel11; // 0x18(0x01)
	enum class ECollisionResponse GameTraceChannel12; // 0x19(0x01)
	enum class ECollisionResponse GameTraceChannel13; // 0x1a(0x01)
	enum class ECollisionResponse GameTraceChannel14; // 0x1b(0x01)
	enum class ECollisionResponse GameTraceChannel15; // 0x1c(0x01)
	enum class ECollisionResponse GameTraceChannel16; // 0x1d(0x01)
	enum class ECollisionResponse GameTraceChannel17; // 0x1e(0x01)
	enum class ECollisionResponse GameTraceChannel18; // 0x1f(0x01)
};

// ScriptStruct Engine.*2008898a6b
// Size: 0x10 (Inherited: 0x00)
struct F*2008898a6b {
	struct FName Channel; // 0x00(0x08)
	enum class ECollisionResponse Response; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.ExposureSettings
// Size: 0x08 (Inherited: 0x00)
struct FExposureSettings {
	int32 *67f78e37a2; // 0x00(0x04)
	bool *b787f2daa0; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.URL
// Size: 0x70 (Inherited: 0x00)
struct FURL {
	struct FString Protocol; // 0x00(0x10)
	struct FString Host; // 0x10(0x10)
	int32 Port; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Map; // 0x28(0x10)
	struct FString RedirectURL; // 0x38(0x10)
	struct TArray<struct FString> Op; // 0x48(0x10)
	struct FString Portal; // 0x58(0x10)
	int32 Valid; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.*3a1b9f6b9c
// Size: 0x58 (Inherited: 0x50)
struct F*3a1b9f6b9c : F*67c21faf56 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*bc2ca7a111
// Size: 0x58 (Inherited: 0x50)
struct F*bc2ca7a111 : F*67c21faf56 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*c3a263373a
// Size: 0x58 (Inherited: 0x50)
struct F*c3a263373a : F*67c21faf56 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*fa9258b51c
// Size: 0x10 (Inherited: 0x00)
struct F*fa9258b51c {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*3aab7e0f60
// Size: 0x30 (Inherited: 0x00)
struct F*3aab7e0f60 {
	struct FString *0a19dad380; // 0x00(0x10)
	struct FString *5a878e7850; // 0x10(0x10)
	struct UObject* *103d75f272; // 0x20(0x08)
	bool *b141765ed5; // 0x28(0x01)
	bool *36ad8c4741; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Engine.*caa9156783
// Size: 0x18 (Inherited: 0x00)
struct F*caa9156783 {
	struct UEdGraphNode* *38b6e1ad8a; // 0x00(0x08)
	struct FGuid *a14cad77c5; // 0x08(0x10)
};

// ScriptStruct Engine.*4342bfc443
// Size: 0x80 (Inherited: 0x00)
struct F*4342bfc443 {
	struct FString PinCategory; // 0x00(0x10)
	struct FString *b4997a07df; // 0x10(0x10)
	struct UObject* *a876c3e27a; // 0x20(0x08)
	struct FSimpleMemberReference *e4e4c17fb2; // 0x28(0x20)
	struct F*3aab7e0f60 *fa0aaf175e; // 0x48(0x30)
	bool *553b070e98; // 0x78(0x01)
	bool *019c4e1dbe; // 0x79(0x01)
	bool *4c04ace431; // 0x7a(0x01)
	bool *cd6a611f1e; // 0x7b(0x01)
	bool *6b1d0ab4fe; // 0x7c(0x01)
	bool *423a579aef; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
};

// ScriptStruct Engine.*132bd8be41
// Size: 0x10 (Inherited: 0x00)
struct F*132bd8be41 {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*993c37b57d
// Size: 0x90 (Inherited: 0x00)
struct F*993c37b57d {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.*2d2ab57919
// Size: 0x80 (Inherited: 0x00)
struct F*2d2ab57919 {
	bool bActive; // 0x00(0x01)
	enum class EMaterialLODType *708b0b2ab1; // 0x01(0x01)
	bool *a12540ff0c; // 0x02(0x01)
	enum class *487695907c *9fc750890a; // 0x03(0x01)
	enum class *487695907c *b7906c048f; // 0x04(0x01)
	enum class ESimplygonTextureSamplingQuality SamplingQuality; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32 GutterSpace; // 0x08(0x04)
	enum class ESimplygonTextureStrech *cde8128875; // 0x0c(0x01)
	bool *b569155193; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct F*b53151d3df> *483c1251c0; // 0x10(0x10)
	bool *1b45c59d97; // 0x20(0x01)
	bool *b1e71b01ca; // 0x21(0x01)
	bool *6d24bcacab; // 0x22(0x01)
	bool *6217693b09; // 0x23(0x01)
	bool *41899dc486; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct F*203abdf553 *203abdf553; // 0x28(0x58)
};

// ScriptStruct Engine.*203abdf553
// Size: 0x58 (Inherited: 0x00)
struct F*203abdf553 {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Engine.*b53151d3df
// Size: 0x10 (Inherited: 0x00)
struct F*b53151d3df {
	enum class *0317138bd9 *495e987a4b; // 0x00(0x01)
	enum class ESimplygonCasterType *0792b6a5f6; // 0x01(0x01)
	bool bActive; // 0x02(0x01)
	enum class ESimplygonColorChannels *8ca3071929; // 0x03(0x01)
	int32 *2ff8250358; // 0x04(0x04)
	bool *311246681f; // 0x08(0x01)
	bool *607fcdce9f; // 0x09(0x01)
	bool *08aa80f0e9; // 0x0a(0x01)
	bool *997071b7a1; // 0x0b(0x01)
	bool *9374d755ad; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.MaterialProxySettings
// Size: 0x9c (Inherited: 0x00)
struct FMaterialProxySettings {
	struct FIntPoint TextureSize; // 0x00(0x08)
	enum class ETextureSizingType TextureSizingType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float GutterSpace; // 0x0c(0x04)
	enum class EMaterialProxySmaplingQuality SamplingQuality; // 0x10(0x01)
	enum class EUVStrech UVStrech; // 0x11(0x01)
	bool bSplitProxyMaterialBasedOnType; // 0x12(0x01)
	bool bUseTangentSpace; // 0x13(0x01)
	bool bNormalMap; // 0x14(0x01)
	bool bMetallicMap; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float MetallicConstant; // 0x18(0x04)
	bool bRoughnessMap; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float RoughnessConstant; // 0x20(0x04)
	bool bSpecularMap; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float SpecularConstant; // 0x28(0x04)
	bool bEmissiveMap; // 0x2c(0x01)
	bool bOpacityMap; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float OpacityConstant; // 0x30(0x04)
	bool bAmbientOcclusionMap; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float AOConstant; // 0x38(0x04)
	float AmbientOcclusionConstant; // 0x3c(0x04)
	bool bOpacityMaskMap; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float OpacityMaskConstant; // 0x44(0x04)
	struct FIntPoint DiffuseTextureSize; // 0x48(0x08)
	struct FIntPoint NormalTextureSize; // 0x50(0x08)
	struct FIntPoint MetallicTextureSize; // 0x58(0x08)
	struct FIntPoint RoughnessTextureSize; // 0x60(0x08)
	struct FIntPoint SpecularTextureSize; // 0x68(0x08)
	struct FIntPoint EmissiveTextureSize; // 0x70(0x08)
	struct FIntPoint OpacityTextureSize; // 0x78(0x08)
	struct FIntPoint AmbientOcclusionTextureSize; // 0x80(0x08)
	struct FIntPoint OpacityMaskTextureSize; // 0x88(0x08)
	enum class EMaterialMergeType MaterialMergeType; // 0x90(0x01)
	enum class EBlendMode BlendMode; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	int32 BakingTextureSizeRatioOutdoor; // 0x94(0x04)
	int32 BakingTextureSizeRatioIndoor; // 0x98(0x04)
};

// ScriptStruct Engine.*17168ce8c0
// Size: 0xa8 (Inherited: 0x00)
struct F*17168ce8c0 {
	bool bActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 ScreenSize; // 0x04(0x04)
	bool bRecalculateNormals; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float HardAngleThreshold; // 0x0c(0x04)
	int32 MergeDistance; // 0x10(0x04)
	bool *344c78fc9d; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *47bda50846; // 0x18(0x04)
	int32 *5bbd6ab5ff; // 0x1c(0x04)
	bool *4e894ec6d4; // 0x20(0x01)
	bool *8711c7c0c5; // 0x21(0x01)
	bool *4d5d1fa755; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct F*2d2ab57919 *92683fbc7a; // 0x28(0x80)
};

// ScriptStruct Engine.MeshMergingSettings
// Size: 0xd4 (Inherited: 0x00)
struct FMeshMergingSettings {
	bool bGenerateLightMapUV; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 TargetLightMapResolution; // 0x04(0x04)
	bool bImportVertexColors; // 0x08(0x01)
	bool bPivotPointAtZero; // 0x09(0x01)
	bool bMergePhysicsData; // 0x0a(0x01)
	bool bAssignLODGroup; // 0x0b(0x01)
	int32 LODGroupIndex; // 0x0c(0x04)
	bool bMergeMaterials; // 0x10(0x01)
	bool bForceUniqueUVGeneration; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FMaterialProxySettings MaterialSettings; // 0x14(0x9c)
	bool bBakeVertexDataToMesh; // 0xb0(0x01)
	bool bUseVertexDataForBakingMaterial; // 0xb1(0x01)
	bool bUseTextureBinning; // 0xb2(0x01)
	bool bCalculateCorrectLODModel; // 0xb3(0x01)
	enum class EMeshLODSelectionType LODSelectionType; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	int32 ExportSpecificLOD; // 0xb8(0x04)
	int32 SpecificLOD; // 0xbc(0x04)
	bool bUseLandscapeCulling; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float MinimalBoundsSize; // 0xc4(0x04)
	bool bExportNormalMap; // 0xc8(0x01)
	bool bExportMetallicMap; // 0xc9(0x01)
	bool bExportRoughnessMap; // 0xca(0x01)
	bool bExportSpecularMap; // 0xcb(0x01)
	int32 MergedMaterialAtlasResolution; // 0xcc(0x04)
	char pad_D0[0x4]; // 0xd0(0x04)
};

// ScriptStruct Engine.MeshProxySettings
// Size: 0xfc (Inherited: 0x00)
struct FMeshProxySettings {
	int32 ScreenSize; // 0x00(0x04)
	char bOverrideVoxelSize : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float VoxelSize; // 0x08(0x04)
	struct FMaterialProxySettings MaterialSettings; // 0x0c(0x9c)
	int32 TextureWidth; // 0xa8(0x04)
	int32 TextureHeight; // 0xac(0x04)
	bool bExportNormalMap; // 0xb0(0x01)
	bool bExportMetallicMap; // 0xb1(0x01)
	bool bExportRoughnessMap; // 0xb2(0x01)
	bool bExportSpecularMap; // 0xb3(0x01)
	bool bCalculateCorrectLODModel; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float OverrideDistanceForLevelLOD; // 0xb8(0x04)
	float MergeDistance; // 0xbc(0x04)
	float *90bc36bc57; // 0xc0(0x04)
	struct FColor *16d6ccf0b5; // 0xc4(0x04)
	bool bOverrideTransferDistance; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float *6c176e128e; // 0xcc(0x04)
	bool *bcfbadb79c; // 0xd0(0x01)
	bool bComputeLightMapResolution; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	float HardAngleThreshold; // 0xd4(0x04)
	enum class *65c47359c7 NormalCalculationMethod; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32 LightMapResolution; // 0xdc(0x04)
	bool bRecalculateNormals; // 0xe0(0x01)
	bool bBakeVertexData; // 0xe1(0x01)
	bool bUseLandscapeCulling; // 0xe2(0x01)
	enum class ELandscapeCullingPrecision *2d3c7bd21b; // 0xe3(0x01)
	bool bAllowAdjacency; // 0xe4(0x01)
	bool bAllowDistanceField; // 0xe5(0x01)
	bool bReuseMeshLightmapUVs; // 0xe6(0x01)
	bool bCreateCollision; // 0xe7(0x01)
	bool bAllowVertexColors; // 0xe8(0x01)
	bool bGenerateLightmapUVs; // 0xe9(0x01)
	bool *499138475a; // 0xea(0x01)
	char pad_EB[0x1]; // 0xeb(0x01)
	int32 *8f07485b2c; // 0xec(0x04)
	bool *58d6c660c3; // 0xf0(0x01)
	enum class EChartAggregationMode *4710b60cc5; // 0xf1(0x01)
	enum class EPhysXAggregationMode PhysXAggregationMode; // 0xf2(0x01)
	bool *103ad259ec; // 0xf3(0x01)
	float MergeBoldness; // 0xf4(0x04)
	float MaxTriangleSize; // 0xf8(0x04)
};

// ScriptStruct Engine.*795e425430
// Size: 0x28 (Inherited: 0x00)
struct F*795e425430 {
	char *fb15801d64 : 1; // 0x00(0x01)
	char *b6dfb44f7d : 1; // 0x00(0x01)
	char *694a1f25df : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	enum class EImposterCaptureType *54c363c881; // 0x01(0x01)
	enum class EImposterCaptureType *2dc1fcdbad; // 0x02(0x01)
	enum class EImposterCaptureType *4e6b973ffd; // 0x03(0x01)
	enum class EImposterCaptureType *f06e2b7864; // 0x04(0x01)
	enum class EImposterCaptureType *d587a182db; // 0x05(0x01)
	bool *2e96cffb5c; // 0x06(0x01)
	bool *3b08f358cd; // 0x07(0x01)
	float ScreenSize; // 0x08(0x04)
	struct FLinearColor *389b797508; // 0x0c(0x10)
	float BaseSaturation; // 0x1c(0x04)
	float VariationBrightness; // 0x20(0x04)
	float BaseBrightness; // 0x24(0x04)
};

// ScriptStruct Engine.MeshReductionSettings
// Size: 0x158 (Inherited: 0x00)
struct FMeshReductionSettings {
	int32 BaseLODModel; // 0x00(0x04)
	enum class EOptimizationMetric *7b95dc3628; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float PercentTriangles; // 0x08(0x04)
	float ScreenSize; // 0x0c(0x04)
	float MaxDeviation; // 0x10(0x04)
	float PixelError; // 0x14(0x04)
	float WeldingThreshold; // 0x18(0x04)
	enum class EMeshFeatureImportance SilhouetteImportance; // 0x1c(0x01)
	enum class EMeshFeatureImportance TextureImportance; // 0x1d(0x01)
	enum class EMeshFeatureImportance ShadingImportance; // 0x1e(0x01)
	enum class EMeshFeatureImportance VertexColorImportance; // 0x1f(0x01)
	float PercentVertices; // 0x20(0x04)
	bool bRecalculateNormals; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float HardAngleThreshold; // 0x28(0x04)
	bool bActive; // 0x2c(0x01)
	bool *2e6fa50b5a; // 0x2d(0x01)
	bool *88f95f7d76; // 0x2e(0x01)
	bool *de44f5c1ba; // 0x2f(0x01)
	bool *5702c6b4da; // 0x30(0x01)
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x31(0x01)
	enum class EMeshFeatureImportance *1ac9739b1b; // 0x32(0x01)
	bool *41899dc486; // 0x33(0x01)
	bool *7d79bd620a; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct F*2d2ab57919 MaterialLODSettings; // 0x38(0x80)
	struct FMaterialProxySettings MaterialProxySettings; // 0xb8(0x9c)
	char pad_154[0x4]; // 0x154(0x04)
};

// ScriptStruct Engine.*0a9233dc53
// Size: 0x168 (Inherited: 0x00)
struct F*0a9233dc53 {
	bool bCreatePackagePerAsset; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DetailsPercentage; // 0x04(0x04)
	float MergeDistance; // 0x08(0x04)
	float *90bc36bc57; // 0x0c(0x04)
	float MergeBoldness; // 0x10(0x04)
	enum class EPhysXAggregationMode PhysXAggregationMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MaxTriangleSize; // 0x18(0x04)
	struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x1c(0x9c)
	bool bOverrideLandscapeExportLOD; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32 *f6c9065646; // 0xbc(0x04)
	struct FMaterialProxySettings *07258705db; // 0xc0(0x9c)
	bool bBakeFoliageToLandscape; // 0x15c(0x01)
	bool bBakeGrassToLandscape; // 0x15d(0x01)
	bool bGenerateMeshNormalMap; // 0x15e(0x01)
	bool bGenerateMeshMetallicMap; // 0x15f(0x01)
	bool bGenerateMeshRoughnessMap; // 0x160(0x01)
	bool bGenerateMeshSpecularMap; // 0x161(0x01)
	bool bGenerateLandscapeNormalMap; // 0x162(0x01)
	bool bGenerateLandscapeMetallicMap; // 0x163(0x01)
	bool bGenerateLandscapeRoughnessMap; // 0x164(0x01)
	bool bGenerateLandscapeSpecularMap; // 0x165(0x01)
	bool bUseLandscapeCulling; // 0x166(0x01)
	enum class ELandscapeCullingPrecision *2d3c7bd21b; // 0x167(0x01)
};

// ScriptStruct Engine.*9ba66206e8
// Size: 0x38 (Inherited: 0x28)
struct F*9ba66206e8 : F*225e3ab400 {
	struct UTexture2D* Texture; // 0x28(0x08)
	bool *d76f8f418c; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float *cc44a75e08; // 0x34(0x04)
};

// ScriptStruct Engine.*225e3ab400
// Size: 0x28 (Inherited: 0x00)
struct F*225e3ab400 {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Engine.*3fd7aec64b
// Size: 0x20 (Inherited: 0x00)
struct F*3fd7aec64b {
	enum class EAutoBenchViewMode ViewMode; // 0x00(0x01)
	enum class EAutoBenchPathType PathType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32 CameraSpeed; // 0x04(0x04)
	int32 CameraHeightOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FString> StatNames; // 0x10(0x10)
};

// ScriptStruct Engine.BodyInstance
// Size: 0x230 (Inherited: 0x00)
struct FBodyInstance {
	char pad_0[0x12]; // 0x00(0x12)
	struct FCollisionResponseContainer ResponseToChannels; // 0x12(0x20)
	char pad_32[0x6]; // 0x32(0x06)
	struct FName CollisionProfileName; // 0x38(0x08)
	struct F*42140d9884 CollisionResponses; // 0x40(0x30)
	char pad_70[0x4]; // 0x70(0x04)
	char bUseCCD : 1; // 0x74(0x01)
	char bNotifyRigidBodyCollision : 1; // 0x74(0x01)
	char bSimulatePhysics : 1; // 0x74(0x01)
	char bUseComplexForSimulation : 1; // 0x74(0x01)
	char bOverrideMass : 1; // 0x74(0x01)
	char bEnableGravity : 1; // 0x74(0x01)
	char bAutoWeld : 1; // 0x74(0x01)
	char bStartAwake : 1; // 0x74(0x01)
	char bGenerateWakeEvents : 1; // 0x75(0x01)
	char *cdc8f0eb7b : 1; // 0x75(0x01)
	char *fc602d8db0 : 1; // 0x75(0x01)
	char *36490800df : 1; // 0x75(0x01)
	char *3c8bb9c5ef : 1; // 0x75(0x01)
	char *44be07ee98 : 1; // 0x75(0x01)
	char *4f32b62085 : 1; // 0x75(0x01)
	char *6fe71361a1 : 1; // 0x75(0x01)
	char *7d8231c6d9 : 1; // 0x76(0x01)
	char *364203c611 : 1; // 0x76(0x01)
	char bOverrideMaxAngularVelocity : 1; // 0x76(0x01)
	char pad_76_3 : 4; // 0x76(0x01)
	char bOverrideMaxDepenetrationVelocity : 1; // 0x76(0x01)
	char bOverrideWalkableSlopeOnInstance : 1; // 0x77(0x01)
	char pad_77_1 : 7; // 0x77(0x01)
	float MaxDepenetrationVelocity; // 0x78(0x04)
	char pad_7C[0x8]; // 0x7c(0x08)
	float MassInKgOverride; // 0x84(0x04)
	float LinearDamping; // 0x88(0x04)
	float AngularDamping; // 0x8c(0x04)
	struct FVector CustomDOFPlaneNormal; // 0x90(0x0c)
	struct FVector COMNudge; // 0x9c(0x0c)
	char pad_A8[0x10]; // 0xa8(0x10)
	float MassScale; // 0xb8(0x04)
	char pad_BC[0x14]; // 0xbc(0x14)
	struct F*a92203063d WalkableSlopeOverride; // 0xd0(0x10)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0xe0(0x08)
	float MaxAngularVelocity; // 0xe8(0x04)
	float CustomSleepThresholdMultiplier; // 0xec(0x04)
	float StabilizationThresholdMultiplier; // 0xf0(0x04)
	float *115282aaf8; // 0xf4(0x04)
	int32 PositionSolverIterationCount; // 0xf8(0x04)
	char pad_FC[0x24]; // 0xfc(0x24)
	uint64 *3b204c440f; // 0x120(0x08)
	int32 VelocitySolverIterationCount; // 0x128(0x04)
	char pad_12C[0xf8]; // 0x12c(0xf8)
	enum class ESleepFamily SleepFamily; // 0x224(0x01)
	enum class EDOFMode DOFMode; // 0x225(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x226(0x01)
	enum class ECollisionChannel ObjectType; // 0x227(0x01)
	char pad_228[0x8]; // 0x228(0x08)
};

// ScriptStruct Engine.*42140d9884
// Size: 0x30 (Inherited: 0x00)
struct F*42140d9884 {
	struct FCollisionResponseContainer *2b7d6c7aee; // 0x00(0x20)
	struct TArray<struct F*2008898a6b> *280f96a879; // 0x20(0x10)
};

// ScriptStruct Engine.*110531103f
// Size: 0x0c (Inherited: 0x00)
struct F*110531103f {
	uint32 *fc5ff3b757; // 0x00(0x04)
	int32 *32f3e1a2c2; // 0x04(0x04)
	float *3ceda8b934; // 0x08(0x04)
};

// ScriptStruct Engine.*30d51e96c5
// Size: 0x30 (Inherited: 0x00)
struct F*30d51e96c5 {
	struct UTexture2D* Texture; // 0x00(0x08)
	struct FBoxSphereBounds Bounds; // 0x08(0x1c)
	float *3ceda8b934; // 0x24(0x04)
	uint32 *fc5ff3b757; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*85f602d0b9
// Size: 0x04 (Inherited: 0x00)
struct F*85f602d0b9 {
	char *f70b4dd9a3 : 1; // 0x00(0x01)
	char *5dc6b6b5c2 : 1; // 0x00(0x01)
	char *a8190edcc9 : 1; // 0x00(0x01)
	char *2c321f36b1 : 1; // 0x00(0x01)
	char *aea2c5b40e : 1; // 0x00(0x01)
	char *80610abb4b : 1; // 0x00(0x01)
	char *ee43e9bb59 : 1; // 0x00(0x01)
	char *6461ce33c2 : 1; // 0x00(0x01)
	char *33c200abaf : 1; // 0x01(0x01)
	char *cf17439a98 : 1; // 0x01(0x01)
	char *8821cc7d2f : 1; // 0x01(0x01)
	char *c2b16f5b17 : 1; // 0x01(0x01)
	char *85034c72d3 : 1; // 0x01(0x01)
	char *919d7b048d : 1; // 0x01(0x01)
	char *195ab74f01 : 1; // 0x01(0x01)
	char *e8bce1a39c : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.*32e4d16215
// Size: 0x18 (Inherited: 0x00)
struct F*32e4d16215 {
	struct UClass* AreaClass; // 0x00(0x08)
	float *96e2c389cc; // 0x08(0x04)
	float *f057e8d015; // 0x0c(0x04)
	char *769f1e14a7 : 1; // 0x10(0x01)
	char bOverrideTravelCost : 1; // 0x10(0x01)
	char bOverrideEnteringCost : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.*9087bdf635
// Size: 0x14 (Inherited: 0x00)
struct F*9087bdf635 {
	struct FVector TargetLocation; // 0x00(0x0c)
	float GenerateRadiusMin; // 0x0c(0x04)
	float GenerateRadiusMax; // 0x10(0x04)
};

// ScriptStruct Engine.*dbc2be8864
// Size: 0x50 (Inherited: 0x20)
struct F*dbc2be8864 : F*4093962ce1 {
	struct FName Name; // 0x20(0x08)
	struct FColor Color; // 0x28(0x04)
	struct FVector DefaultQueryExtent; // 0x2c(0x0c)
	struct UClass* NavigationDataClass; // 0x38(0x08)
	struct FStringClassReference NavigationDataClassName; // 0x40(0x10)
};

// ScriptStruct Engine.NavAgentSelector
// Size: 0x04 (Inherited: 0x00)
struct FNavAgentSelector {
	char *3cfe619f2c : 1; // 0x00(0x01)
	char *be3c88bfb4 : 1; // 0x00(0x01)
	char *8988dd41d2 : 1; // 0x00(0x01)
	char *5977c81f0d : 1; // 0x00(0x01)
	char *46d6ca688a : 1; // 0x00(0x01)
	char *b113e126bf : 1; // 0x00(0x01)
	char *5e6c24b840 : 1; // 0x00(0x01)
	char *23df0a7c9f : 1; // 0x00(0x01)
	char *d79ed04c9c : 1; // 0x01(0x01)
	char *d8ae93e77c : 1; // 0x01(0x01)
	char *36bf420317 : 1; // 0x01(0x01)
	char *34ca7bb248 : 1; // 0x01(0x01)
	char *61e2dda4e3 : 1; // 0x01(0x01)
	char *1f4bb8c2ba : 1; // 0x01(0x01)
	char *55978e479c : 1; // 0x01(0x01)
	char *0a53280b52 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.*aed4af8b24
// Size: 0x38 (Inherited: 0x00)
struct F*aed4af8b24 {
	struct FName Category; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
};

// ScriptStruct Engine.*6c1ed7bdbc
// Size: 0x14 (Inherited: 0x00)
struct F*6c1ed7bdbc {
	bool *6da19dd415; // 0x00(0x01)
	bool bOverrideDensities; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float *71557b709e[0x04]; // 0x04(0x10)
};

// ScriptStruct Engine.*b5ddbd1469
// Size: 0x18 (Inherited: 0x00)
struct F*b5ddbd1469 {
	uint32 *5100cb6281; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32> *7ec7cb2ab3; // 0x08(0x10)
};

// ScriptStruct Engine.*534d06babb
// Size: 0x28 (Inherited: 0x00)
struct F*534d06babb {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x08)
	struct F*6c1ed7bdbc UVChannelData; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*1d38a65a14
// Size: 0x28 (Inherited: 0x00)
struct F*1d38a65a14 {
	bool *019c4e1dbe; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *8e823fcb5d; // 0x04(0x0c)
	struct FVector *7d010ddb5a; // 0x10(0x0c)
	struct FRotator *8c7c49a2b7; // 0x1c(0x0c)
};

// ScriptStruct Engine.*4ca64cf3c3
// Size: 0x50 (Inherited: 0x00)
struct F*4ca64cf3c3 {
	struct TMap<struct FString, struct F*a3bdeba77a> Map; // 0x00(0x50)
};

// ScriptStruct Engine.*a3bdeba77a
// Size: 0x50 (Inherited: 0x00)
struct F*a3bdeba77a {
	struct TMap<uint32, struct F*7e412b4ff2> Map; // 0x00(0x50)
};

// ScriptStruct Engine.*7e412b4ff2
// Size: 0x08 (Inherited: 0x00)
struct F*7e412b4ff2 {
	int32 MaterialIndex; // 0x00(0x04)
	bool bEnableCollision; // 0x04(0x01)
	bool *01530bf609; // 0x05(0x01)
	bool *088681c9e9; // 0x06(0x01)
	bool IndoorOutdoorMask; // 0x07(0x01)
};

// ScriptStruct Engine.*0188e1507d
// Size: 0x04 (Inherited: 0x00)
struct F*0188e1507d {
	uint16 LODIndex; // 0x00(0x02)
	uint16 SectionIndex; // 0x02(0x02)
};

// ScriptStruct Engine.*3c847a9205
// Size: 0x4b0 (Inherited: 0x00)
struct F*3c847a9205 {
	struct FMeshBuildSettings BuildSettings; // 0x00(0x40)
	struct FMeshReductionSettings ReductionSettings; // 0x40(0x158)
	struct F*17168ce8c0 RemeshingSettings; // 0x198(0xa8)
	bool *367e2e4ebd; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct FGroupedStaticMeshOptimizationSettings OptimizationSettings; // 0x248(0x260)
	float LODDistance; // 0x4a8(0x04)
	float ScreenSize; // 0x4ac(0x04)
};

// ScriptStruct Engine.GroupedStaticMeshOptimizationSettings
// Size: 0x260 (Inherited: 0x00)
struct FGroupedStaticMeshOptimizationSettings {
	enum class EStaticMeshLODType *a4d4f03e38; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMeshReductionSettings ReductionSettings; // 0x08(0x158)
	struct FMeshProxySettings ProxySettings; // 0x160(0xfc)
	char pad_25C[0x4]; // 0x25c(0x04)
};

// ScriptStruct Engine.*b776c8513b
// Size: 0x1c (Inherited: 0x00)
struct F*b776c8513b {
	enum class *e3d2c2c424 *07405df6e3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float *7a5423b534; // 0x08(0x04)
	float WeldingThreshold; // 0x0c(0x04)
	bool bRecalcNormals; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *6077ad83f2; // 0x14(0x04)
	bool SilhouetteImportance; // 0x18(0x01)
	bool TextureImportance; // 0x19(0x01)
	bool ShadingImportance; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.*944fc9bb94
// Size: 0xc8 (Inherited: 0x00)
struct F*944fc9bb94 {
	bool bUseCustomCapture; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Saturation; // 0x04(0x04)
	struct FLinearColor *22dfcdb9bc; // 0x08(0x10)
	struct FLinearColor *8a5c00e945; // 0x18(0x10)
	struct FLinearColor *6fdafbf3b8; // 0x28(0x10)
	struct FLinearColor *57d109cb6a; // 0x38(0x10)
	struct FLinearColor *5cb9a06342; // 0x48(0x10)
	struct FLinearColor *5b5969c911; // 0x58(0x10)
	struct FLinearColor *e49dd5f923; // 0x68(0x10)
	struct FLinearColor *eb93d1031c; // 0x78(0x10)
	struct FLinearColor *d51acb67be; // 0x88(0x10)
	struct FLinearColor *13542e5a3f; // 0x98(0x10)
	struct FLinearColor *6d714ec3d9; // 0xa8(0x10)
	struct FLinearColor *6304889846; // 0xb8(0x10)
};

// ScriptStruct Engine.AmbientCube
// Size: 0x94 (Inherited: 0x00)
struct FAmbientCube {
	float Saturation; // 0x00(0x04)
	struct F*e10071fb83 Faces[0x06]; // 0x04(0x90)
};

// ScriptStruct Engine.*e10071fb83
// Size: 0x18 (Inherited: 0x00)
struct F*e10071fb83 {
	struct FColor Color; // 0x00(0x04)
	struct FLinearColor Tint; // 0x04(0x10)
	float FaceSaturation; // 0x14(0x04)
};

// ScriptStruct Engine.*5bb08df245
// Size: 0x0c (Inherited: 0x00)
struct F*5bb08df245 {
	int32 Type; // 0x00(0x04)
	int32 Index; // 0x04(0x04)
	int32 *78d0d01d44; // 0x08(0x04)
};

// ScriptStruct Engine.*3e305a18ce
// Size: 0x24 (Inherited: 0x00)
struct F*3e305a18ce {
	char bIsWorldSettings : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ExteriorVolume; // 0x04(0x04)
	float ExteriorTime; // 0x08(0x04)
	float ExteriorLPF; // 0x0c(0x04)
	float ExteriorLPFTime; // 0x10(0x04)
	float InteriorVolume; // 0x14(0x04)
	float InteriorTime; // 0x18(0x04)
	float InteriorLPF; // 0x1c(0x04)
	float InteriorLPFTime; // 0x20(0x04)
};

// ScriptStruct Engine.ReverbSettings
// Size: 0x18 (Inherited: 0x00)
struct FReverbSettings {
	char bApplyReverb : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	enum class *05333b5a89 ReverbType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UReverbEffect* ReverbEffect; // 0x08(0x08)
	float Volume; // 0x10(0x04)
	float FadeTime; // 0x14(0x04)
};

// ScriptStruct Engine.*1eaa6792c3
// Size: 0x08 (Inherited: 0x00)
struct F*1eaa6792c3 {
	float Size; // 0x00(0x04)
	float CullDistance; // 0x04(0x04)
};

// ScriptStruct Engine.PostProcessSettings
// Size: 0x570 (Inherited: 0x00)
struct FPostProcessSettings {
	char bOverride_WhiteTemp : 1; // 0x00(0x01)
	char bOverride_WhiteTint : 1; // 0x00(0x01)
	char bOverride_ColorSaturation : 1; // 0x00(0x01)
	char bOverride_ColorContrast : 1; // 0x00(0x01)
	char bOverride_ColorGamma : 1; // 0x00(0x01)
	char bOverride_ColorGain : 1; // 0x00(0x01)
	char bOverride_ColorOffset : 1; // 0x00(0x01)
	char bOverride_ColorSaturationShadows : 1; // 0x00(0x01)
	char bOverride_ColorContrastShadows : 1; // 0x01(0x01)
	char bOverride_ColorGammaShadows : 1; // 0x01(0x01)
	char bOverride_ColorGainShadows : 1; // 0x01(0x01)
	char bOverride_ColorOffsetShadows : 1; // 0x01(0x01)
	char bOverride_ColorSaturationMidtones : 1; // 0x01(0x01)
	char bOverride_ColorContrastMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGammaMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGainMidtones : 1; // 0x01(0x01)
	char bOverride_ColorOffsetMidtones : 1; // 0x02(0x01)
	char bOverride_ColorSaturationHighlights : 1; // 0x02(0x01)
	char bOverride_ColorContrastHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGammaHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGainHighlights : 1; // 0x02(0x01)
	char bOverride_ColorOffsetHighlights : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionShadowsMax : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionHighlightsMin : 1; // 0x02(0x01)
	char bOverride_FilmWhitePoint : 1; // 0x03(0x01)
	char bOverride_FilmSaturation : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerRed : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerGreen : 1; // 0x03(0x01)
	char bOverride_FilmChannelMixerBlue : 1; // 0x03(0x01)
	char bOverride_FilmContrast : 1; // 0x03(0x01)
	char bOverride_FilmDynamicRange : 1; // 0x03(0x01)
	char bOverride_FilmHealAmount : 1; // 0x03(0x01)
	char bOverride_FilmToeAmount : 1; // 0x04(0x01)
	char bOverride_FilmShadowTint : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintBlend : 1; // 0x04(0x01)
	char bOverride_FilmShadowTintAmount : 1; // 0x04(0x01)
	char bOverride_FilmSlope : 1; // 0x04(0x01)
	char bOverride_FilmToe : 1; // 0x04(0x01)
	char bOverride_FilmShoulder : 1; // 0x04(0x01)
	char bOverride_FilmBlackClip : 1; // 0x04(0x01)
	char bOverride_FilmWhiteClip : 1; // 0x05(0x01)
	char bOverride_SceneColorTint : 1; // 0x05(0x01)
	char bOverride_SceneFringeIntensity : 1; // 0x05(0x01)
	char bOverride_AmbientCubemapTint : 1; // 0x05(0x01)
	char bOverride_AmbientCubemapIntensity : 1; // 0x05(0x01)
	char bOverride_BloomMethod : 1; // 0x05(0x01)
	char bOverride_BloomIntensity : 1; // 0x05(0x01)
	char bOverride_BloomThreshold : 1; // 0x05(0x01)
	char bOverride_Bloom1Tint : 1; // 0x06(0x01)
	char bOverride_Bloom1Size : 1; // 0x06(0x01)
	char bOverride_Bloom2Size : 1; // 0x06(0x01)
	char bOverride_Bloom2Tint : 1; // 0x06(0x01)
	char bOverride_Bloom3Tint : 1; // 0x06(0x01)
	char bOverride_Bloom3Size : 1; // 0x06(0x01)
	char bOverride_Bloom4Tint : 1; // 0x06(0x01)
	char bOverride_Bloom4Size : 1; // 0x06(0x01)
	char bOverride_Bloom5Tint : 1; // 0x07(0x01)
	char bOverride_Bloom5Size : 1; // 0x07(0x01)
	char bOverride_Bloom6Tint : 1; // 0x07(0x01)
	char bOverride_Bloom6Size : 1; // 0x07(0x01)
	char bOverride_BloomSizeScale : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionTexture : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionSize : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionCenterUV : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionPreFilter : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x08(0x01)
	char bOverride_BloomConvolutionBufferScale : 1; // 0x08(0x01)
	char bOverride_BloomDirtMaskIntensity : 1; // 0x08(0x01)
	char bOverride_BloomDirtMaskTint : 1; // 0x08(0x01)
	char bOverride_BloomDirtMask : 1; // 0x08(0x01)
	char bOverride_TslBlurIntensity : 1; // 0x09(0x01)
	char bOverride_TslBlurScopeInnerEdge : 1; // 0x09(0x01)
	char bOverride_TslBlurScopeOutterEdge : 1; // 0x09(0x01)
	char bOverride_TslBlurDepthBlackPoint : 1; // 0x09(0x01)
	char bOverride_TslBlurDepthWhitePoint : 1; // 0x09(0x01)
	char bOverride_TslBlurDepthGamma : 1; // 0x09(0x01)
	char bOverride_bTslBlurUseBranching : 1; // 0x09(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityStartLuminance : 1; // 0x09(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityFadeSpeed : 1; // 0x0a(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityReticleLuminanceMultiplier : 1; // 0x0a(0x01)
	char bOverride_TslBlurReticleBrightSceneVisibilityReticleOpacity : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMethod : 1; // 0x0a(0x01)
	char bOverride_AutoExposureLowPercent : 1; // 0x0a(0x01)
	char bOverride_AutoExposureHighPercent : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMinBrightness : 1; // 0x0a(0x01)
	char bOverride_AutoExposureMaxBrightness : 1; // 0x0a(0x01)
	char bOverride_AutoExposureSpeedUp : 1; // 0x0b(0x01)
	char bOverride_AutoExposureSpeedDown : 1; // 0x0b(0x01)
	char bOverride_AutoExposureBias : 1; // 0x0b(0x01)
	char bOverride_HistogramLogMin : 1; // 0x0b(0x01)
	char bOverride_HistogramLogMax : 1; // 0x0b(0x01)
	char bOverride_LensFlareIntensity : 1; // 0x0b(0x01)
	char bOverride_LensFlareTint : 1; // 0x0b(0x01)
	char bOverride_LensFlareTints : 1; // 0x0b(0x01)
	char bOverride_LensFlareBokehSize : 1; // 0x0c(0x01)
	char bOverride_LensFlareBokehShape : 1; // 0x0c(0x01)
	char bOverride_LensFlareThreshold : 1; // 0x0c(0x01)
	char bOverride_VignetteIntensity : 1; // 0x0c(0x01)
	char bOverride_GrainIntensity : 1; // 0x0c(0x01)
	char bOverride_GrainJitter : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionIntensity : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x0c(0x01)
	char bOverride_AmbientOcclusionRadius : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x0d(0x01)
	char bOverride_HBAOPowerExponent : 1; // 0x0d(0x01)
	char bOverride_HBAORadius : 1; // 0x0d(0x01)
	char bOverride_HBAOBias : 1; // 0x0d(0x01)
	char bOverride_HBAODetailAO : 1; // 0x0d(0x01)
	char bOverride_HBAOBlurRadius : 1; // 0x0d(0x01)
	char bOverride_HBAOBlurSharpness : 1; // 0x0e(0x01)
	char bOverride_HBAOMaxViewDepth : 1; // 0x0e(0x01)
	char bOverride_HBAODepthSharpness : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionDistance : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionPower : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionBias : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionQuality : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x0f(0x01)
	char bOverride_AmbientOcclusionMipScale : 1; // 0x0f(0x01)
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x0f(0x01)
	char bOverride_LPVIntensity : 1; // 0x0f(0x01)
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x0f(0x01)
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x0f(0x01)
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x0f(0x01)
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x0f(0x01)
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVSize : 1; // 0x10(0x01)
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x10(0x01)
	char bOverride_LPVGeometryVolumeBias : 1; // 0x10(0x01)
	char bOverride_LPVVplInjectionBias : 1; // 0x10(0x01)
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x10(0x01)
	char bOverride_LPVFadeRange : 1; // 0x11(0x01)
	char bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x11(0x01)
	char bOverride_IndirectLightingColor : 1; // 0x11(0x01)
	char bOverride_IndirectLightingIntensity : 1; // 0x11(0x01)
	char bOverride_ColorGradingIntensity : 1; // 0x11(0x01)
	char bOverride_ColorGradingLUT : 1; // 0x11(0x01)
	char bOverride_DepthOfFieldFocalDistance : 1; // 0x11(0x01)
	char bOverride_DepthOfFieldFstop : 1; // 0x11(0x01)
	char bOverride_DepthOfFieldScopeSize : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldSensorWidth : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldFocalRegion : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldScale : 1; // 0x12(0x01)
	char bOverride_DepthOfFieldMaxBokehSize : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldMethod : 1; // 0x13(0x01)
	char bOverride_MobileHQGaussian : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldBokehShape : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldOcclusion : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldColorThreshold : 1; // 0x13(0x01)
	char bOverride_DepthOfFieldSizeThreshold : 1; // 0x14(0x01)
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x14(0x01)
	char bOverride_DepthOfFieldVignetteSize : 1; // 0x14(0x01)
	char bOverride_MotionBlurAmount : 1; // 0x14(0x01)
	char bOverride_MotionBlurMax : 1; // 0x14(0x01)
	char bOverride_MotionBlurPerObjectSize : 1; // 0x14(0x01)
	char bOverride_ScreenPercentage : 1; // 0x14(0x01)
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x14(0x01)
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x15(0x01)
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x15(0x01)
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x15(0x01)
	char bOverride_OutlineSettings : 1; // 0x15(0x01)
	char bOverride_OutlineMaskTexture : 1; // 0x15(0x01)
	char bOverride_OutlineMaskTextureScale : 1; // 0x15(0x01)
	char bOverride_OutlineMaskTextureScrollSpeed : 1; // 0x15(0x01)
	char pad_15_7 : 1; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float WhiteTemp; // 0x18(0x04)
	float WhiteTint; // 0x1c(0x04)
	struct FVector4 ColorSaturation; // 0x20(0x10)
	struct FVector4 ColorContrast; // 0x30(0x10)
	struct FVector4 ColorGamma; // 0x40(0x10)
	struct FVector4 ColorGain; // 0x50(0x10)
	struct FVector4 ColorOffset; // 0x60(0x10)
	struct FVector4 ColorSaturationShadows; // 0x70(0x10)
	struct FVector4 ColorContrastShadows; // 0x80(0x10)
	struct FVector4 ColorGammaShadows; // 0x90(0x10)
	struct FVector4 ColorGainShadows; // 0xa0(0x10)
	struct FVector4 ColorOffsetShadows; // 0xb0(0x10)
	float ColorCorrectionShadowsMax; // 0xc0(0x04)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FVector4 ColorSaturationMidtones; // 0xd0(0x10)
	struct FVector4 ColorContrastMidtones; // 0xe0(0x10)
	struct FVector4 ColorGammaMidtones; // 0xf0(0x10)
	struct FVector4 ColorGainMidtones; // 0x100(0x10)
	struct FVector4 ColorOffsetMidtones; // 0x110(0x10)
	struct FVector4 ColorSaturationHighlights; // 0x120(0x10)
	struct FVector4 ColorContrastHighlights; // 0x130(0x10)
	struct FVector4 ColorGammaHighlights; // 0x140(0x10)
	struct FVector4 ColorGainHighlights; // 0x150(0x10)
	struct FVector4 ColorOffsetHighlights; // 0x160(0x10)
	float ColorCorrectionHighlightsMin; // 0x170(0x04)
	float FilmSlope; // 0x174(0x04)
	float FilmToe; // 0x178(0x04)
	float FilmShoulder; // 0x17c(0x04)
	float FilmBlackClip; // 0x180(0x04)
	float FilmWhiteClip; // 0x184(0x04)
	struct FLinearColor FilmWhitePoint; // 0x188(0x10)
	struct FLinearColor FilmShadowTint; // 0x198(0x10)
	float FilmShadowTintBlend; // 0x1a8(0x04)
	float FilmShadowTintAmount; // 0x1ac(0x04)
	float FilmSaturation; // 0x1b0(0x04)
	struct FLinearColor FilmChannelMixerRed; // 0x1b4(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x1c4(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0x1d4(0x10)
	float FilmContrast; // 0x1e4(0x04)
	float FilmToeAmount; // 0x1e8(0x04)
	float FilmHealAmount; // 0x1ec(0x04)
	float FilmDynamicRange; // 0x1f0(0x04)
	struct FLinearColor SceneColorTint; // 0x1f4(0x10)
	float SceneFringeIntensity; // 0x204(0x04)
	enum class *3d433ad022 BloomMethod; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	float BloomIntensity; // 0x20c(0x04)
	float BloomThreshold; // 0x210(0x04)
	float BloomSizeScale; // 0x214(0x04)
	float Bloom1Size; // 0x218(0x04)
	float Bloom2Size; // 0x21c(0x04)
	float Bloom3Size; // 0x220(0x04)
	float Bloom4Size; // 0x224(0x04)
	float Bloom5Size; // 0x228(0x04)
	float Bloom6Size; // 0x22c(0x04)
	struct FLinearColor Bloom1Tint; // 0x230(0x10)
	struct FLinearColor Bloom2Tint; // 0x240(0x10)
	struct FLinearColor Bloom3Tint; // 0x250(0x10)
	struct FLinearColor Bloom4Tint; // 0x260(0x10)
	struct FLinearColor Bloom5Tint; // 0x270(0x10)
	struct FLinearColor Bloom6Tint; // 0x280(0x10)
	struct UTexture2D* BloomConvolutionTexture; // 0x290(0x08)
	float BloomConvolutionSize; // 0x298(0x04)
	struct FVector2D BloomConvolutionCenterUV; // 0x29c(0x08)
	struct FVector BloomConvolutionPreFilter; // 0x2a4(0x0c)
	float BloomConvolutionPreFilterMin; // 0x2b0(0x04)
	float BloomConvolutionPreFilterMax; // 0x2b4(0x04)
	float BloomConvolutionPreFilterMult; // 0x2b8(0x04)
	float BloomConvolutionBufferScale; // 0x2bc(0x04)
	struct UTexture* BloomDirtMask; // 0x2c0(0x08)
	float BloomDirtMaskIntensity; // 0x2c8(0x04)
	struct FLinearColor BloomDirtMaskTint; // 0x2cc(0x10)
	float TslBlurIntensity; // 0x2dc(0x04)
	float TslBlurScopeInnerEdge; // 0x2e0(0x04)
	float TslBlurScopeOutterEdge; // 0x2e4(0x04)
	float TslBlurReticleBrightSceneVisibilityStartLuminance; // 0x2e8(0x04)
	float TslBlurReticleBrightSceneVisibilityFadeSpeed; // 0x2ec(0x04)
	float TslBlurReticleBrightSceneVisibilityReticleLuminanceMultiplier; // 0x2f0(0x04)
	float TslBlurReticleBrightSceneVisibilityReticleOpacity; // 0x2f4(0x04)
	float TslBlurDepthBlackPoint; // 0x2f8(0x04)
	float TslBlurDepthWhitePoint; // 0x2fc(0x04)
	float TslBlurDepthGamma; // 0x300(0x04)
	bool bTslBlurUseBranching; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct FLinearColor AmbientCubemapTint; // 0x308(0x10)
	float AmbientCubemapIntensity; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct UTextureCube* AmbientCubemap; // 0x320(0x08)
	enum class EAutoExposureMethod AutoExposureMethod; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	float AutoExposureLowPercent; // 0x32c(0x04)
	float AutoExposureHighPercent; // 0x330(0x04)
	float AutoExposureMinBrightness; // 0x334(0x04)
	float AutoExposureMaxBrightness; // 0x338(0x04)
	float AutoExposureSpeedUp; // 0x33c(0x04)
	float AutoExposureSpeedDown; // 0x340(0x04)
	float AutoExposureBias; // 0x344(0x04)
	float HistogramLogMin; // 0x348(0x04)
	float HistogramLogMax; // 0x34c(0x04)
	float LensFlareIntensity; // 0x350(0x04)
	struct FLinearColor LensFlareTint; // 0x354(0x10)
	float LensFlareBokehSize; // 0x364(0x04)
	float LensFlareThreshold; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct UTexture* LensFlareBokehShape; // 0x370(0x08)
	struct FLinearColor LensFlareTints[0x08]; // 0x378(0x80)
	float VignetteIntensity; // 0x3f8(0x04)
	float GrainJitter; // 0x3fc(0x04)
	float GrainIntensity; // 0x400(0x04)
	float HBAOPowerExponent; // 0x404(0x04)
	float HBAORadius; // 0x408(0x04)
	float HBAOBias; // 0x40c(0x04)
	float HBAODetailAO; // 0x410(0x04)
	enum class EHBAOBlurRadius HBAOBlurRadius; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	float HBAOBlurSharpness; // 0x418(0x04)
	float HBAOMaxViewDepth; // 0x41c(0x04)
	float HBAODepthSharpness; // 0x420(0x04)
	float AmbientOcclusionIntensity; // 0x424(0x04)
	float AmbientOcclusionStaticFraction; // 0x428(0x04)
	float AmbientOcclusionRadius; // 0x42c(0x04)
	char AmbientOcclusionRadiusInWS : 1; // 0x430(0x01)
	char pad_430_1 : 7; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float AmbientOcclusionFadeDistance; // 0x434(0x04)
	float AmbientOcclusionFadeRadius; // 0x438(0x04)
	float AmbientOcclusionDistance; // 0x43c(0x04)
	float AmbientOcclusionPower; // 0x440(0x04)
	float AmbientOcclusionBias; // 0x444(0x04)
	float AmbientOcclusionQuality; // 0x448(0x04)
	float AmbientOcclusionMipBlend; // 0x44c(0x04)
	float AmbientOcclusionMipScale; // 0x450(0x04)
	float AmbientOcclusionMipThreshold; // 0x454(0x04)
	struct FLinearColor IndirectLightingColor; // 0x458(0x10)
	float IndirectLightingIntensity; // 0x468(0x04)
	float ColorGradingIntensity; // 0x46c(0x04)
	struct UTexture* ColorGradingLUT; // 0x470(0x08)
	enum class EDepthOfFieldMethod DepthOfFieldMethod; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	char bMobileHQGaussian : 1; // 0x47c(0x01)
	char pad_47C_1 : 7; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	float DepthOfFieldFstop; // 0x480(0x04)
	float DepthOfFieldSensorWidth; // 0x484(0x04)
	float DepthOfFieldFocalDistance; // 0x488(0x04)
	float DepthOfFieldDepthBlurAmount; // 0x48c(0x04)
	float DepthOfFieldDepthBlurRadius; // 0x490(0x04)
	float DepthOfFieldFocalRegion; // 0x494(0x04)
	float DepthOfFieldNearTransitionRegion; // 0x498(0x04)
	float DepthOfFieldFarTransitionRegion; // 0x49c(0x04)
	float DepthOfFieldScale; // 0x4a0(0x04)
	float DepthOfFieldMaxBokehSize; // 0x4a4(0x04)
	float DepthOfFieldNearBlurSize; // 0x4a8(0x04)
	float DepthOfFieldFarBlurSize; // 0x4ac(0x04)
	struct UTexture* DepthOfFieldBokehShape; // 0x4b0(0x08)
	float DepthOfFieldOcclusion; // 0x4b8(0x04)
	float DepthOfFieldColorThreshold; // 0x4bc(0x04)
	float DepthOfFieldSizeThreshold; // 0x4c0(0x04)
	float DepthOfFieldSkyFocusDistance; // 0x4c4(0x04)
	float DepthOfFieldVignetteSize; // 0x4c8(0x04)
	float MotionBlurAmount; // 0x4cc(0x04)
	float MotionBlurMax; // 0x4d0(0x04)
	float MotionBlurPerObjectSize; // 0x4d4(0x04)
	float LPVIntensity; // 0x4d8(0x04)
	float LPVVplInjectionBias; // 0x4dc(0x04)
	float LPVSize; // 0x4e0(0x04)
	float LPVSecondaryOcclusionIntensity; // 0x4e4(0x04)
	float LPVSecondaryBounceIntensity; // 0x4e8(0x04)
	float LPVGeometryVolumeBias; // 0x4ec(0x04)
	float LPVEmissiveInjectionIntensity; // 0x4f0(0x04)
	float LPVDirectionalOcclusionIntensity; // 0x4f4(0x04)
	float LPVDirectionalOcclusionRadius; // 0x4f8(0x04)
	float LPVDiffuseOcclusionExponent; // 0x4fc(0x04)
	float LPVSpecularOcclusionExponent; // 0x500(0x04)
	float LPVDiffuseOcclusionIntensity; // 0x504(0x04)
	float LPVSpecularOcclusionIntensity; // 0x508(0x04)
	float ScreenSpaceReflectionIntensity; // 0x50c(0x04)
	float ScreenSpaceReflectionQuality; // 0x510(0x04)
	float ScreenSpaceReflectionMaxRoughness; // 0x514(0x04)
	float LPVFadeRange; // 0x518(0x04)
	float LPVDirectionalOcclusionFadeRange; // 0x51c(0x04)
	float ScreenPercentage; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct UTexture2D* OutlineMaskTexture; // 0x528(0x08)
	struct FVector2D OutlineMaskTextureScale; // 0x530(0x08)
	struct FVector2D OutlineMaskTextureScrollSpeed; // 0x538(0x08)
	struct TArray<struct FPostProcessOutlineSettings> OutlineSettings; // 0x540(0x10)
	struct FWeightedBlendables WeightedBlendables; // 0x550(0x10)
	struct TArray<struct UObject*> Blendables; // 0x560(0x10)
};

// ScriptStruct Engine.WeightedBlendables
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendables {
	struct TArray<struct FWeightedBlendable> Array; // 0x00(0x10)
};

// ScriptStruct Engine.WeightedBlendable
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendable {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* Object; // 0x08(0x08)
};

// ScriptStruct Engine.PostProcessOutlineSettings
// Size: 0x1c (Inherited: 0x00)
struct FPostProcessOutlineSettings {
	struct FLinearColor Color; // 0x00(0x10)
	float OuterRadius; // 0x10(0x04)
	float InnerRadius; // 0x14(0x04)
	bool bUseNoiseTexture; // 0x18(0x01)
	bool bXRay; // 0x19(0x01)
	bool CustomStencilValue; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.LatentActionManager
// Size: 0xf0 (Inherited: 0x00)
struct FLatentActionManager {
	char pad_0[0xf0]; // 0x00(0xf0)
};

// ScriptStruct Engine.*8aba4bb6ed
// Size: 0x38 (Inherited: 0x00)
struct F*8aba4bb6ed {
	char pad_0[0x30]; // 0x00(0x30)
	bool *b8f6c45c7a; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32 *32a3a383ab; // 0x34(0x04)
};

// ScriptStruct Engine.*6d0e0b2cc1
// Size: 0x5c0 (Inherited: 0x00)
struct F*6d0e0b2cc1 {
	struct FVector2D OffCenterProjectionOffset; // 0x00(0x08)
	float OrthoNearClipPlane; // 0x08(0x04)
	char bConstrainAspectRatio : 1; // 0x0c(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float FOV; // 0x10(0x04)
	struct FRotator Rotation; // 0x14(0x0c)
	float AspectRatio; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FPostProcessSettings PostProcessSettings; // 0x30(0x570)
	float PostProcessBlendWeight; // 0x5a0(0x04)
	enum class ECameraProjectionMode ProjectionMode; // 0x5a4(0x01)
	char pad_5A5[0x3]; // 0x5a5(0x03)
	float OrthoFarClipPlane; // 0x5a8(0x04)
	float OrthoWidth; // 0x5ac(0x04)
	struct FVector Location; // 0x5b0(0x0c)
	char pad_5BC[0x4]; // 0x5bc(0x04)
};

// ScriptStruct Engine.*426dfcc594
// Size: 0x24 (Inherited: 0x00)
struct F*426dfcc594 {
	struct F*f15493e17b X; // 0x00(0x0c)
	struct F*f15493e17b Y; // 0x0c(0x0c)
	struct F*f15493e17b Z; // 0x18(0x0c)
};

// ScriptStruct Engine.*f15493e17b
// Size: 0x0c (Inherited: 0x00)
struct F*f15493e17b {
	float *12327b9b8c; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	enum class *904dd505da *48a1aa36df; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.*d2c9ed4b21
// Size: 0x24 (Inherited: 0x00)
struct F*d2c9ed4b21 {
	struct F*f15493e17b Pitch; // 0x00(0x0c)
	struct F*f15493e17b Yaw; // 0x0c(0x0c)
	struct F*f15493e17b Roll; // 0x18(0x0c)
};

// ScriptStruct Engine.*7d739d58fd
// Size: 0x10 (Inherited: 0x00)
struct F*7d739d58fd {
	float BlendTime; // 0x00(0x04)
	enum class *ab22144e19 BlendFunction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float BlendExp; // 0x08(0x04)
	char bLockOutgoing : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*ccdcf600a2
// Size: 0x5e0 (Inherited: 0x00)
struct F*ccdcf600a2 {
	struct AActor* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct F*6d0e0b2cc1 POV; // 0x10(0x5c0)
	struct APlayerState* PlayerState; // 0x5d0(0x08)
	char pad_5D8[0x8]; // 0x5d8(0x08)
};

// ScriptStruct Engine.*6432761ee7
// Size: 0x5d0 (Inherited: 0x00)
struct F*6432761ee7 {
	float Timestamp; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct F*6d0e0b2cc1 *95c5fab0f0; // 0x10(0x5c0)
};

// ScriptStruct Engine.InputAxisKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FInputAxisKeyMapping {
	struct FName AxisName; // 0x00(0x08)
	struct FKey Key; // 0x08(0x18)
	float Scale; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.InputActionKeyMapping
// Size: 0x28 (Inherited: 0x00)
struct FInputActionKeyMapping {
	struct FName ActionName; // 0x00(0x08)
	struct FKey Key; // 0x08(0x18)
	char bShift : 1; // 0x20(0x01)
	char bCtrl : 1; // 0x20(0x01)
	char bAlt : 1; // 0x20(0x01)
	char bCmd : 1; // 0x20(0x01)
	char pad_20_4 : 4; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.InputAxisConfigEntry
// Size: 0x28 (Inherited: 0x00)
struct FInputAxisConfigEntry {
	struct FName AxisKeyName; // 0x00(0x08)
	struct F*d9d00f65e4 AxisProperties; // 0x08(0x20)
};

// ScriptStruct Engine.*d9d00f65e4
// Size: 0x20 (Inherited: 0x00)
struct F*d9d00f65e4 {
	float DEADZONE; // 0x00(0x04)
	float OuterDeadZone; // 0x04(0x04)
	float Sensitivity; // 0x08(0x04)
	float Exponent; // 0x0c(0x04)
	char bInvert : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UCurveFloat* MultiplierAxisValueCurve; // 0x18(0x08)
};

// ScriptStruct Engine.*61c810cf0e
// Size: 0x30 (Inherited: 0x00)
struct F*61c810cf0e {
	struct FKey Key; // 0x00(0x18)
	struct FString Command; // 0x18(0x10)
	char Control : 1; // 0x28(0x01)
	char Shift : 1; // 0x28(0x01)
	char Alt : 1; // 0x28(0x01)
	char Cmd : 1; // 0x28(0x01)
	char bIgnoreCtrl : 1; // 0x28(0x01)
	char bIgnoreShift : 1; // 0x28(0x01)
	char bIgnoreAlt : 1; // 0x28(0x01)
	char bIgnoreCmd : 1; // 0x28(0x01)
	char *4e92e87f0d : 1; // 0x29(0x01)
	char pad_29_1 : 7; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Engine.*8e915d6f8f
// Size: 0x10 (Inherited: 0x00)
struct F*8e915d6f8f {
	struct FName ActionName; // 0x00(0x08)
	enum class *5553c9dea0 KeyEvent; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*0319448750
// Size: 0x70 (Inherited: 0x00)
struct F*0319448750 {
	struct UPlayerInput* PlayerInput; // 0x00(0x08)
	char pad_8[0x68]; // 0x08(0x68)
};

// ScriptStruct Engine.*dfbef80de6
// Size: 0x18 (Inherited: 0x00)
struct F*dfbef80de6 {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.*8172d5eac2
// Size: 0x80 (Inherited: 0x00)
struct F*8172d5eac2 {
	char *ddab0e9e7b : 1; // 0x00(0x01)
	char *de7acd7267 : 1; // 0x00(0x01)
	char *5e49ee814a : 1; // 0x00(0x01)
	char *d57310f614 : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRuntimeFloatCurve Curve; // 0x08(0x78)
};

// ScriptStruct Engine.*919a4e5392
// Size: 0x10 (Inherited: 0x00)
struct F*919a4e5392 {
	struct FName PackageName; // 0x00(0x08)
	char bIsVisible : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*3fbb54c377
// Size: 0x10 (Inherited: 0x00)
struct F*3fbb54c377 {
	struct FName PackageName; // 0x00(0x08)
	int32 LODIndex; // 0x08(0x04)
	char *90c165ee55 : 1; // 0x0c(0x01)
	char *624e0f83d3 : 1; // 0x0c(0x01)
	char *8d2ec1a663 : 1; // 0x0c(0x01)
	char pad_C_3 : 5; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*56b1f6ab8b
// Size: 0x60 (Inherited: 0x00)
struct F*56b1f6ab8b {
	struct AActor* *6ff005198e; // 0x00(0x08)
	struct FVector *fb30ee05c3; // 0x08(0x0c)
	struct FVector *77472c162c; // 0x14(0x0c)
	struct FString *afd3ac8835; // 0x20(0x10)
	float TimeRemaining; // 0x30(0x04)
	float Duration; // 0x34(0x04)
	struct FColor TextColor; // 0x38(0x04)
	char bAbsoluteLocation : 1; // 0x3c(0x01)
	char *85eae6760d : 1; // 0x3c(0x01)
	char *99b1cdbc4d : 1; // 0x3c(0x01)
	char pad_3C_3 : 5; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FVector *1168cbf6f9; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UFont* Font; // 0x50(0x08)
	float *991e4ddf89; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Engine.*2e21c888cd
// Size: 0x28 (Inherited: 0x00)
struct F*2e21c888cd {
	bool bUseMBPOnClient; // 0x00(0x01)
	bool bUseMBPOnServer; // 0x01(0x01)
	bool bUseMBPOuterBounds; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FBox MBPBounds; // 0x04(0x1c)
	float MBPOuterBoundsExpandSize; // 0x20(0x04)
	uint32 MBPNumSubdivs; // 0x24(0x04)
};

// ScriptStruct Engine.HierarchicalSimplification
// Size: 0x1e8 (Inherited: 0x00)
struct FHierarchicalSimplification {
	char pad_0[0x4]; // 0x00(0x04)
	float *7a8ac36a35; // 0x04(0x04)
	bool *51dbf5161e; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FMeshProxySettings *26f18188da; // 0x0c(0xfc)
	struct FMeshMergingSettings *230c1ddd59; // 0x108(0xd4)
	float *4e55508052; // 0x1dc(0x04)
	float *122a4d1e7f; // 0x1e0(0x04)
	int32 *fd64e709b3; // 0x1e4(0x04)
};

// ScriptStruct Engine.*f9b760e032
// Size: 0x30 (Inherited: 0x00)
struct F*f9b760e032 {
	struct UNetConnection* Connection; // 0x00(0x08)
	struct AActor* *b0f23e0724; // 0x08(0x08)
	struct AActor* ViewTarget; // 0x10(0x08)
	struct FVector ViewLocation; // 0x18(0x0c)
	struct FVector ViewDir; // 0x24(0x0c)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x44 (Inherited: 0x00)
struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x00(0x04)
	int32 *98175a7bc2; // 0x04(0x04)
	float *49ed4c393f; // 0x08(0x04)
	float *32e26f9d58; // 0x0c(0x04)
	struct FColor EnvironmentColor; // 0x10(0x04)
	float *e31800ac0a; // 0x14(0x04)
	float EmissiveBoost; // 0x18(0x04)
	float DiffuseBoost; // 0x1c(0x04)
	char *14264e463c : 1; // 0x20(0x01)
	char *d2798be0f6 : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float *f581e9d55a; // 0x24(0x04)
	float *13828c869d; // 0x28(0x04)
	float OcclusionExponent; // 0x2c(0x04)
	float *ede4113b2d; // 0x30(0x04)
	float MaxOcclusionDistance; // 0x34(0x04)
	char *24b42b603b : 1; // 0x38(0x01)
	char *329b4443b1 : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float *0c164f2779; // 0x3c(0x04)
	char bCompressLightmaps : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct Engine.*992675a4e8
// Size: 0x04 (Inherited: 0x00)
struct F*992675a4e8 {
	char bWaterSurface : 1; // 0x00(0x01)
	char bWaterFX : 1; // 0x00(0x01)
	char bWeather : 1; // 0x00(0x01)
	char bEnvironment : 1; // 0x00(0x01)
	char bVegetationSmall : 1; // 0x00(0x01)
	char bVegetationMedium : 1; // 0x00(0x01)
	char bVegetationLarge : 1; // 0x00(0x01)
	char bVegetationHuge : 1; // 0x00(0x01)
	char bSmokeGrenade : 1; // 0x01(0x01)
	char bSmoke : 1; // 0x01(0x01)
	char bExplosion : 1; // 0x01(0x01)
	char bMolotov : 1; // 0x01(0x01)
	char bFire : 1; // 0x01(0x01)
	char bSparks : 1; // 0x01(0x01)
	char bDebris : 1; // 0x01(0x01)
	char bWeaponFX : 1; // 0x01(0x01)
	char bVehicleFX : 1; // 0x02(0x01)
	char bOther : 1; // 0x02(0x01)
	char pad_2_2 : 6; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
};

// ScriptStruct Engine.*8f67b6e0e6
// Size: 0x10 (Inherited: 0x00)
struct F*8f67b6e0e6 {
	float SamplingScale; // 0x00(0x04)
	int32 *cedcee5cf2; // 0x04(0x04)
	struct FName TextureName; // 0x08(0x08)
};

// ScriptStruct Engine.*31693f5ae2
// Size: 0x14 (Inherited: 0x00)
struct F*31693f5ae2 {
	char bCastShadowAsMasked : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EmissiveBoost; // 0x04(0x04)
	float DiffuseBoost; // 0x08(0x04)
	float ExportResolutionScale; // 0x0c(0x04)
	char *27b9904293 : 1; // 0x10(0x01)
	char *cf0167ab82 : 1; // 0x10(0x01)
	char *67cb4854f4 : 1; // 0x10(0x01)
	char *f910db6329 : 1; // 0x10(0x01)
	char pad_10_4 : 4; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.*36c5fc3da1
// Size: 0xa0 (Inherited: 0x00)
struct F*36c5fc3da1 {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct F*5701f25c97> PaintedVertices; // 0x20(0x10)
	char pad_30[0x70]; // 0x30(0x70)
};

// ScriptStruct Engine.*5701f25c97
// Size: 0x14 (Inherited: 0x00)
struct F*5701f25c97 {
	struct FVector Position; // 0x00(0x0c)
	struct FPackedNormal Normal; // 0x0c(0x04)
	struct FColor Color; // 0x10(0x04)
};

// ScriptStruct Engine.*d2ef71db5b
// Size: 0x18 (Inherited: 0x00)
struct F*d2ef71db5b {
	struct FName ObjectName; // 0x00(0x08)
	struct TArray<struct AActor*> Actors; // 0x08(0x10)
};

// ScriptStruct Engine.*a706765c04
// Size: 0x10 (Inherited: 0x00)
struct F*a706765c04 {
	struct FVector Location; // 0x00(0x0c)
	float Timestamp; // 0x0c(0x04)
};

// ScriptStruct Engine.*a098f5a73b
// Size: 0x20 (Inherited: 0x00)
struct F*a098f5a73b {
	struct FString *4611a932e1; // 0x00(0x10)
	int32 *6d7d4b6825; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UClass* AreaClass; // 0x18(0x08)
};

// ScriptStruct Engine.*5743cf513c
// Size: 0x18 (Inherited: 0x00)
struct F*5743cf513c {
	struct UObject* Owner; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.*fe19943f99
// Size: 0x18 (Inherited: 0x00)
struct F*fe19943f99 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.NavigationSegmentLink
// Size: 0x68 (Inherited: 0x38)
struct FNavigationSegmentLink : FNavigationLinkBase {
	struct FVector LeftStart; // 0x38(0x0c)
	struct FVector LeftEnd; // 0x44(0x0c)
	struct FVector RightStart; // 0x50(0x0c)
	struct FVector RightEnd; // 0x5c(0x0c)
};

// ScriptStruct Engine.NavigationLinkBase
// Size: 0x38 (Inherited: 0x00)
struct FNavigationLinkBase {
	float *531637e72c; // 0x00(0x04)
	float *df6ac32977; // 0x04(0x04)
	enum class ENavLinkDirection Direction; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	float *0cbd36aa0f; // 0x10(0x04)
	float *b72eaddc2c; // 0x14(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x18(0x04)
	char *3cfe619f2c : 1; // 0x1c(0x01)
	char *be3c88bfb4 : 1; // 0x1c(0x01)
	char *8988dd41d2 : 1; // 0x1c(0x01)
	char *5977c81f0d : 1; // 0x1c(0x01)
	char *46d6ca688a : 1; // 0x1c(0x01)
	char *b113e126bf : 1; // 0x1c(0x01)
	char *5e6c24b840 : 1; // 0x1c(0x01)
	char *23df0a7c9f : 1; // 0x1c(0x01)
	char *d79ed04c9c : 1; // 0x1d(0x01)
	char *d8ae93e77c : 1; // 0x1d(0x01)
	char *36bf420317 : 1; // 0x1d(0x01)
	char *34ca7bb248 : 1; // 0x1d(0x01)
	char *61e2dda4e3 : 1; // 0x1d(0x01)
	char *1f4bb8c2ba : 1; // 0x1d(0x01)
	char *55978e479c : 1; // 0x1d(0x01)
	char *0a53280b52 : 1; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	char bUseSnapHeight : 1; // 0x20(0x01)
	char *cf2415f71d : 1; // 0x20(0x01)
	char *72f5edecbd : 1; // 0x20(0x01)
	char *b4af071dfb : 1; // 0x20(0x01)
	char *5ca1698168 : 1; // 0x20(0x01)
	char *baed8da65d : 1; // 0x20(0x01)
	char *03e7659ed1 : 1; // 0x20(0x01)
	char *127703692a : 1; // 0x20(0x01)
	char *d883254e6a : 1; // 0x21(0x01)
	char *98c836825d : 1; // 0x21(0x01)
	char pad_21_2 : 6; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct UClass* AreaClass; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Engine.NavigationLink
// Size: 0x50 (Inherited: 0x38)
struct FNavigationLink : FNavigationLinkBase {
	struct FVector Left; // 0x38(0x0c)
	struct FVector Right; // 0x44(0x0c)
};

// ScriptStruct Engine.*ed51ac9799
// Size: 0x10 (Inherited: 0x00)
struct F*ed51ac9799 {
	struct FName Name; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Engine.*046b07cf81
// Size: 0x10 (Inherited: 0x00)
struct F*046b07cf81 {
	struct TArray<bool> *65249d0d98; // 0x00(0x10)
};

// ScriptStruct Engine.*9efdc030dc
// Size: 0x01 (Inherited: 0x00)
struct F*9efdc030dc {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.ParticleSysParam
// Size: 0x80 (Inherited: 0x00)
struct FParticleSysParam {
	struct FName Name; // 0x00(0x08)
	enum class *730c5e523e ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Scalar; // 0x0c(0x04)
	float Scalar_Low; // 0x10(0x04)
	struct FVector Vector; // 0x14(0x0c)
	struct FVector Vector_Low; // 0x20(0x0c)
	struct FColor Color; // 0x2c(0x04)
	struct AActor* Actor; // 0x30(0x08)
	struct UMaterialInterface* Material; // 0x38(0x08)
	char pad_40[0x40]; // 0x40(0x40)
};

// ScriptStruct Engine.*015ebac987
// Size: 0x10 (Inherited: 0x00)
struct F*015ebac987 {
	struct TArray<struct F*04fbe82f26> *e588c02ba8; // 0x00(0x10)
};

// ScriptStruct Engine.*04fbe82f26
// Size: 0x30 (Inherited: 0x00)
struct F*04fbe82f26 {
	struct UObject* *3c8b540766; // 0x00(0x20)
	struct UObject* Object; // 0x20(0x08)
	struct FName *0ceff703eb; // 0x28(0x08)
};

// ScriptStruct Engine.AnimNotifyTrack
// Size: 0x38 (Inherited: 0x00)
struct FAnimNotifyTrack {
	struct FName TrackName; // 0x00(0x08)
	struct FLinearColor TrackColor; // 0x08(0x10)
	char pad_18[0x20]; // 0x18(0x20)
};

// ScriptStruct Engine.*806722c6fc
// Size: 0x10 (Inherited: 0x00)
struct F*806722c6fc {
	struct TArray<struct FPerBoneBlendWeight> *070c0505bd; // 0x00(0x10)
};

// ScriptStruct Engine.*e47777f630
// Size: 0x30 (Inherited: 0x00)
struct F*e47777f630 {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	bool bEnableShadowCasting; // 0x08(0x01)
	bool bRecomputeTangent; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FName MaterialSlotName; // 0x10(0x08)
	struct F*6c1ed7bdbc UVChannelData; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// Size: 0x78 (Inherited: 0x00)
struct FClothingAssetData_Legacy {
	struct FName AssetName; // 0x00(0x08)
	struct FString *d579d59a67; // 0x08(0x10)
	bool *e7f3c2e9ab; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FClothPhysicsProperties_Legacy *2bf396f13e; // 0x1c(0x50)
	char pad_6C[0xc]; // 0x6c(0x0c)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size: 0x50 (Inherited: 0x00)
struct FClothPhysicsProperties_Legacy {
	float *0a7465c47c; // 0x00(0x04)
	float *ef886be375; // 0x04(0x04)
	float *7e589e6475; // 0x08(0x04)
	float *9a05e93d1a; // 0x0c(0x04)
	float Friction; // 0x10(0x04)
	float Damping; // 0x14(0x04)
	float TetherStiffness; // 0x18(0x04)
	float TetherLimit; // 0x1c(0x04)
	float Drag; // 0x20(0x04)
	float StiffnessFrequency; // 0x24(0x04)
	float GravityScale; // 0x28(0x04)
	float MassScale; // 0x2c(0x04)
	float *0e58d31a14; // 0x30(0x04)
	float SelfCollisionThickness; // 0x34(0x04)
	float SelfCollisionSquashScale; // 0x38(0x04)
	float SelfCollisionStiffness; // 0x3c(0x04)
	float SolverFrequency; // 0x40(0x04)
	float *40642f0185; // 0x44(0x04)
	float *0663be446b; // 0x48(0x04)
	float *17e143cee4; // 0x4c(0x04)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0x540 (Inherited: 0x00)
struct FSkeletalMeshLODInfo {
	float ScreenSize; // 0x00(0x04)
	float *32bcc9b0f1; // 0x04(0x04)
	struct TArray<int32> LODMaterialMap; // 0x08(0x10)
	struct TArray<bool> bEnableShadowCasting; // 0x18(0x10)
	struct TArray<struct FTriangleSortSettings> TriangleSortSettings; // 0x28(0x10)
	char *367e2e4ebd : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40(0x188)
	struct TArray<struct FBoneReference> *0df922246e; // 0x1c8(0x10)
	float *72d7574635; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct F*17168ce8c0 RemeshingSettings; // 0x1e0(0xa8)
	struct FGroupedSkeletalOptimizationSettings OptimizationSettings; // 0x288(0x290)
	struct TArray<struct FName> RemovedBones; // 0x518(0x10)
	struct FString *e0837438f3; // 0x528(0x10)
	char *5b5ed4c53c : 1; // 0x538(0x01)
	char pad_538_1 : 7; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
};

// ScriptStruct Engine.GroupedSkeletalOptimizationSettings
// Size: 0x290 (Inherited: 0x00)
struct FGroupedSkeletalOptimizationSettings {
	bool *354cd860fd; // 0x00(0x01)
	enum class ESkeletalMeshLODType *a4d4f03e38; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x08(0x188)
	struct FMeshProxySettings ProxySettings; // 0x190(0xfc)
	bool *ce210ad0a1; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x188 (Inherited: 0x00)
struct FSkeletalMeshOptimizationSettings {
	enum class *15bbf202ad *bf5301bda2; // 0x00(0x01)
	enum class SkeletalMeshOptimizationType *07405df6e3; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float *9618394d30; // 0x08(0x04)
	uint32 *febf9f7ae0; // 0x0c(0x04)
	uint32 *cb10ca7125; // 0x10(0x04)
	float *4e4a4cfa16; // 0x14(0x04)
	float *7a5423b534; // 0x18(0x04)
	int32 ScreenSize; // 0x1c(0x04)
	float WeldingThreshold; // 0x20(0x04)
	bool bRecalcNormals; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float *6077ad83f2; // 0x28(0x04)
	enum class *1557736a5e SilhouetteImportance; // 0x2c(0x01)
	enum class *1557736a5e TextureImportance; // 0x2d(0x01)
	enum class *1557736a5e ShadingImportance; // 0x2e(0x01)
	enum class *1557736a5e SkinningImportance; // 0x2f(0x01)
	float *051092eac3; // 0x30(0x04)
	int32 MaxBonesPerVertex; // 0x34(0x04)
	bool *366506f654; // 0x38(0x01)
	bool *da3da3da06; // 0x39(0x01)
	bool *e7bcb44d53; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x40(0x10)
	int32 BaseLOD; // 0x50(0x04)
	int32 *c6349b456d; // 0x54(0x04)
	bool *41899dc486; // 0x58(0x01)
	bool *77f9c02aa9; // 0x59(0x01)
	bool *7d79bd620a; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	struct F*2d2ab57919 MaterialLODSettings; // 0x60(0x80)
	struct FMaterialProxySettings MaterialSettings; // 0xe0(0x9c)
	bool *690acfbae6; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	struct UAnimSequence* BakePose; // 0x180(0x08)
};

// ScriptStruct Engine.TriangleSortSettings
// Size: 0x10 (Inherited: 0x00)
struct FTriangleSortSettings {
	enum class *f2af7ea666 TriangleSorting; // 0x00(0x01)
	enum class *3ca147d66f *3345fb8968; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FName *b305985e73; // 0x08(0x08)
};

// ScriptStruct Engine.*921fad1f12
// Size: 0x50 (Inherited: 0x00)
struct F*921fad1f12 {
	struct FString AssetName; // 0x00(0x10)
	int32 LODIndex; // 0x10(0x04)
	int32 SourceSection; // 0x14(0x04)
	bool *4aa3e5d1cd; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UPhysicsAsset* PhysicsAsset; // 0x20(0x20)
	bool bTryAutoFix; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float *95f94c15d5; // 0x44(0x04)
	float *704b3c1c2e; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Engine.*008f5906f7
// Size: 0x18 (Inherited: 0x00)
struct F*008f5906f7 {
	struct FName BoneName; // 0x00(0x08)
	struct FName SourceBoneName; // 0x08(0x08)
	enum class EAxis *777ff49e71; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.*fb8e6c99a0
// Size: 0x08 (Inherited: 0x00)
struct F*fb8e6c99a0 {
	int32 *d7443baec9; // 0x00(0x04)
	enum class EAxis *777ff49e71; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*2d206fd1a5
// Size: 0x10 (Inherited: 0x00)
struct F*2d206fd1a5 {
	struct FName GroupName; // 0x00(0x08)
	enum class *c20d8612ea *c4f460cb37; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*77ba1cb021
// Size: 0x40 (Inherited: 0x00)
struct F*77ba1cb021 {
	bool *911ba2171d; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BlendWeight; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform *08cbbf943a; // 0x10(0x30)
};

// ScriptStruct Engine.*3ee2f51e10
// Size: 0x80 (Inherited: 0x00)
struct F*3ee2f51e10 {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct Engine.*c32fe8d0ab
// Size: 0x48 (Inherited: 0x00)
struct F*c32fe8d0ab {
	struct UAnimationAsset* *2f52ec8cb4; // 0x00(0x08)
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct Engine.*e57140e3c2
// Size: 0x18 (Inherited: 0x00)
struct F*e57140e3c2 {
	struct FName *34a0107185; // 0x00(0x08)
	struct FName *3a97753dc7; // 0x08(0x08)
	float *5c408d2922; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.RootMotionSourceGroup
// Size: 0x100 (Inherited: 0x00)
struct FRootMotionSourceGroup {
	char pad_0[0xe8]; // 0x00(0xe8)
	bool *d227a5ad09; // 0xe8(0x01)
	bool *a13c1f2d8d; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	struct FVector_NetQuantize10 *3973753188; // 0xec(0x0c)
	bool *2180652954; // 0xf8(0x01)
	struct F*c0b79ce452 *b6e2c7c720; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
};

// ScriptStruct Engine.*c0b79ce452
// Size: 0x01 (Inherited: 0x00)
struct F*c0b79ce452 {
	bool Flags; // 0x00(0x01)
};

// ScriptStruct Engine.*848d15a4c9
// Size: 0xd0 (Inherited: 0xa0)
struct F*848d15a4c9 : F*4637e3ada2 {
	struct FRotator Rotation; // 0x98(0x0c)
	float Distance; // 0xa4(0x04)
	float Height; // 0xa8(0x04)
	bool *bff04e685e; // 0xac(0x01)
	struct U*59a0aeaef9* *da7756b7db; // 0xb0(0x08)
	struct UCurveFloat* *d672920056; // 0xb8(0x08)
	char pad_C5[0xb]; // 0xc5(0x0b)
};

// ScriptStruct Engine.*4637e3ada2
// Size: 0xa0 (Inherited: 0x00)
struct F*4637e3ada2 {
	char pad_0[0x10]; // 0x00(0x10)
	uint16 Priority; // 0x10(0x02)
	uint16 *0bbe21e503; // 0x12(0x02)
	enum class ERootMotionAccumulateMode *0dfd85d546; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName *8f519e168b; // 0x18(0x08)
	float StartTime; // 0x20(0x04)
	float CurrentTime; // 0x24(0x04)
	float *641dd4bdef; // 0x28(0x04)
	float Duration; // 0x2c(0x04)
	struct F*a3193344f8 Status; // 0x30(0x01)
	struct F*c0b79ce452 Settings; // 0x31(0x01)
	bool *5858c61b2f; // 0x32(0x01)
	char pad_33[0xd]; // 0x33(0x0d)
	struct F*77ba1cb021 *67f0cdfabe; // 0x40(0x40)
	struct F*0b140c816e *18c2672349; // 0x80(0x14)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Engine.*0b140c816e
// Size: 0x14 (Inherited: 0x00)
struct F*0b140c816e {
	enum class *30be4da0fa Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *c68400c430; // 0x04(0x0c)
	float *07f8c8a300; // 0x10(0x04)
};

// ScriptStruct Engine.*a3193344f8
// Size: 0x01 (Inherited: 0x00)
struct F*a3193344f8 {
	bool Flags; // 0x00(0x01)
};

// ScriptStruct Engine.*ae983a7cf1
// Size: 0xd0 (Inherited: 0xa0)
struct F*ae983a7cf1 : F*4637e3ada2 {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector *6563e40c86; // 0xa4(0x0c)
	struct FVector TargetLocation; // 0xb0(0x0c)
	bool *fde5dff3b1; // 0xbc(0x01)
	struct U*59a0aeaef9* *da7756b7db; // 0xc0(0x08)
	struct UCurveFloat* *d672920056; // 0xc8(0x08)
};

// ScriptStruct Engine.*6238c7cb51
// Size: 0xc0 (Inherited: 0xa0)
struct F*6238c7cb51 : F*4637e3ada2 {
	struct FVector StartLocation; // 0x98(0x0c)
	struct FVector TargetLocation; // 0xa4(0x0c)
	bool *fde5dff3b1; // 0xb0(0x01)
	struct U*59a0aeaef9* *da7756b7db; // 0xb8(0x08)
};

// ScriptStruct Engine.*c3acaa40ce
// Size: 0xe0 (Inherited: 0xa0)
struct F*c3acaa40ce : F*4637e3ada2 {
	struct FVector Location; // 0x98(0x0c)
	struct AActor* *f37a2ef1e9; // 0xa8(0x08)
	float Radius; // 0xb0(0x04)
	float Strength; // 0xb4(0x04)
	bool *ff362984df; // 0xb8(0x01)
	bool *5549f9328f; // 0xb9(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	struct UCurveFloat* *ca92445d00; // 0xc0(0x08)
	struct UCurveFloat* *8fc156f86d; // 0xc8(0x08)
	bool *0963b0b13a; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	struct FRotator *426d246e6a; // 0xd4(0x0c)
};

// ScriptStruct Engine.*153d94961b
// Size: 0xb0 (Inherited: 0xa0)
struct F*153d94961b : F*4637e3ada2 {
	struct FVector force; // 0x98(0x0c)
	struct UCurveFloat* *8fc156f86d; // 0xa8(0x08)
};

// ScriptStruct Engine.*6e7b288381
// Size: 0x48 (Inherited: 0x00)
struct F*6e7b288381 {
	struct UPrimitiveComponent* MovementBase; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FVector_NetQuantize100 Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	bool *f481331201; // 0x28(0x01)
	bool *fe782a1b98; // 0x29(0x01)
	bool *20d1be25bf; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct UPrimitiveComponent* *22f2d853f1; // 0x30(0x08)
	struct FVector *1aac5d6969; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.*bb18ec9648
// Size: 0x168 (Inherited: 0x00)
struct F*bb18ec9648 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct F*05d7763b32 RootMotion; // 0x08(0x160)
};

// ScriptStruct Engine.*05d7763b32
// Size: 0x160 (Inherited: 0x00)
struct F*05d7763b32 {
	bool *a0e3b46900; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* AnimMontage; // 0x08(0x08)
	float Position; // 0x10(0x04)
	struct FVector_NetQuantize100 Location; // 0x14(0x0c)
	struct FRotator Rotation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UPrimitiveComponent* MovementBase; // 0x30(0x08)
	struct FName *1e6597edbe; // 0x38(0x08)
	bool *228ca378ea; // 0x40(0x01)
	bool *fe782a1b98; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FRootMotionSourceGroup *1a0b1ed526; // 0x48(0x100)
	struct FVector_NetQuantize10 Acceleration; // 0x148(0x0c)
	struct FVector_NetQuantize10 LinearVelocity; // 0x154(0x0c)
};

// ScriptStruct Engine.*6aa01837a2
// Size: 0x08 (Inherited: 0x00)
struct F*6aa01837a2 {
	int32 *44cd12fd79; // 0x00(0x04)
	int32 Num; // 0x04(0x04)
};

// ScriptStruct Engine.*6ea9fa8839
// Size: 0x10 (Inherited: 0x00)
struct F*6ea9fa8839 {
	struct FName *ebe97e2081; // 0x00(0x08)
	int32 *fd65c5d030; // 0x08(0x04)
	int32 InstanceId; // 0x0c(0x04)
};

// ScriptStruct Engine.*2f6d9dd2a3
// Size: 0x40 (Inherited: 0x00)
struct F*2f6d9dd2a3 {
	struct FVector4 *617d62e792; // 0x00(0x10)
	struct FVector4 *5a6a6615b3; // 0x10(0x10)
	struct FVector4 *4882b3de91; // 0x20(0x10)
	struct FVector4 *d779fec645; // 0x30(0x10)
};

// ScriptStruct Engine.*35436f3e23
// Size: 0x04 (Inherited: 0x00)
struct F*35436f3e23 {
	int32 RandomSeed; // 0x00(0x04)
};

// ScriptStruct Engine.*41665359e6
// Size: 0x50 (Inherited: 0x00)
struct F*41665359e6 {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.*51f446b30c
// Size: 0xf8 (Inherited: 0x00)
struct F*51f446b30c {
	char pad_0[0xf8]; // 0x00(0xf8)
};

// ScriptStruct Engine.*0633d4fb73
// Size: 0x18 (Inherited: 0x00)
struct F*0633d4fb73 {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*8b6dbbbfa0
// Size: 0x02 (Inherited: 0x00)
struct F*8b6dbbbfa0 {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct Engine.*eab2f13d1e
// Size: 0x18 (Inherited: 0x00)
struct F*eab2f13d1e {
	struct FName SourceBoneName; // 0x00(0x08)
	struct FName TargetBoneName; // 0x08(0x08)
	struct FName *7494936d40; // 0x10(0x08)
};

// ScriptStruct Engine.*fe8cadf04c
// Size: 0x18 (Inherited: 0x00)
struct F*fe8cadf04c {
	struct FName GroupName; // 0x00(0x08)
	struct TArray<struct FName> SlotNames; // 0x08(0x10)
};

// ScriptStruct Engine.*1b91143d05
// Size: 0x18 (Inherited: 0x00)
struct F*1b91143d05 {
	struct URig* Rig; // 0x00(0x08)
	struct TArray<struct F*cc934f54fc> *5facf38ac6; // 0x08(0x10)
};

// ScriptStruct Engine.*cc934f54fc
// Size: 0x10 (Inherited: 0x00)
struct F*cc934f54fc {
	struct FName NodeName; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
};

// ScriptStruct Engine.*34f7b38322
// Size: 0x10 (Inherited: 0x00)
struct F*34f7b38322 {
	struct TArray<struct FName> BonesToRemove; // 0x00(0x10)
};

// ScriptStruct Engine.ReferencePose
// Size: 0x18 (Inherited: 0x00)
struct FReferencePose {
	struct FName PoseName; // 0x00(0x08)
	struct TArray<struct FTransform> ReferencePose; // 0x08(0x10)
};

// ScriptStruct Engine.*fe6a9a6fdd
// Size: 0x10 (Inherited: 0x00)
struct F*fe6a9a6fdd {
	struct FName Name; // 0x00(0x08)
	int32 ParentIndex; // 0x08(0x04)
	enum class EBoneTranslationRetargetingMode *362277dc44; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*dfe9cf8a88
// Size: 0x20 (Inherited: 0x00)
struct F*dfe9cf8a88 {
	struct TArray<int32> *91638e010e; // 0x00(0x10)
	struct TArray<int32> *280bab7ce1; // 0x10(0x10)
};

// ScriptStruct Engine.*5e9fd2f73d
// Size: 0x470 (Inherited: 0x20)
struct F*5e9fd2f73d : FAnimCurveBase {
	struct FVectorCurve *1960b1af8c; // 0x20(0x170)
	struct FVectorCurve *6eb9b2fb15; // 0x190(0x170)
	struct FVectorCurve *0ee2e9841f; // 0x300(0x170)
};

// ScriptStruct Engine.VectorCurve
// Size: 0x170 (Inherited: 0x20)
struct FVectorCurve : FAnimCurveBase {
	struct FRichCurve *afdd2d733a[0x03]; // 0x20(0x150)
};

// ScriptStruct Engine.*d272cd4ebb
// Size: 0x10 (Inherited: 0x00)
struct F*d272cd4ebb {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float StartPosition; // 0x08(0x04)
	float *60e7cb4dd5; // 0x0c(0x04)
};

// ScriptStruct Engine.*4dfa8aa809
// Size: 0x1e0 (Inherited: 0x00)
struct F*4dfa8aa809 {
	struct UAnimMontage* Montage; // 0x00(0x08)
	char pad_8[0xd8]; // 0x08(0xd8)
	bool *0c34648455; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float *6c0eaf1bc4; // 0xe4(0x04)
	char pad_E8[0x28]; // 0xe8(0x28)
	struct TArray<int32> *7eea1384c9; // 0x110(0x10)
	struct TArray<int32> *cb6c7ae90d; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)
	struct TArray<struct FAnimNotifyEvent> *a234a785a9; // 0x140(0x10)
	float Position; // 0x150(0x04)
	float PlayRate; // 0x154(0x04)
	struct FAlphaBlend Blend; // 0x158(0x38)
	char pad_190[0x20]; // 0x190(0x20)
	int32 *18eb3fed78; // 0x1b0(0x04)
	char pad_1B4[0x2c]; // 0x1b4(0x2c)
};

// ScriptStruct Engine.*f2710e04b9
// Size: 0x04 (Inherited: 0x00)
struct F*f2710e04b9 {
	char bGroup0 : 1; // 0x00(0x01)
	char bGroup1 : 1; // 0x00(0x01)
	char bGroup2 : 1; // 0x00(0x01)
	char bGroup3 : 1; // 0x00(0x01)
	char bGroup4 : 1; // 0x00(0x01)
	char bGroup5 : 1; // 0x00(0x01)
	char bGroup6 : 1; // 0x00(0x01)
	char bGroup7 : 1; // 0x00(0x01)
	char bGroup8 : 1; // 0x01(0x01)
	char bGroup9 : 1; // 0x01(0x01)
	char bGroup10 : 1; // 0x01(0x01)
	char bGroup11 : 1; // 0x01(0x01)
	char bGroup12 : 1; // 0x01(0x01)
	char bGroup13 : 1; // 0x01(0x01)
	char bGroup14 : 1; // 0x01(0x01)
	char bGroup15 : 1; // 0x01(0x01)
	char bGroup16 : 1; // 0x02(0x01)
	char bGroup17 : 1; // 0x02(0x01)
	char bGroup18 : 1; // 0x02(0x01)
	char bGroup19 : 1; // 0x02(0x01)
	char bGroup20 : 1; // 0x02(0x01)
	char bGroup21 : 1; // 0x02(0x01)
	char bGroup22 : 1; // 0x02(0x01)
	char bGroup23 : 1; // 0x02(0x01)
	char bGroup24 : 1; // 0x03(0x01)
	char bGroup25 : 1; // 0x03(0x01)
	char bGroup26 : 1; // 0x03(0x01)
	char bGroup27 : 1; // 0x03(0x01)
	char bGroup28 : 1; // 0x03(0x01)
	char bGroup29 : 1; // 0x03(0x01)
	char bGroup30 : 1; // 0x03(0x01)
	char bGroup31 : 1; // 0x03(0x01)
};

// ScriptStruct Engine.*7d36dc8762
// Size: 0x58 (Inherited: 0x50)
struct F*7d36dc8762 : F*67c21faf56 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*3718d46421
// Size: 0x98 (Inherited: 0x00)
struct F*3718d46421 {
	char bBlockingHit : 1; // 0x00(0x01)
	char bWalkableFloor : 1; // 0x00(0x01)
	char bLineTrace : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FloorDist; // 0x04(0x04)
	float LineDist; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FHitResult HitResult; // 0x10(0x88)
};

// ScriptStruct Engine.*4eb3ccb47a
// Size: 0x1c (Inherited: 0x14)
struct F*4eb3ccb47a : F*b20d609411 {
	float *a52b8d0dd1; // 0x14(0x04)
	enum class *24096ec337 *7e0670d4db; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Engine.*b20d609411
// Size: 0x14 (Inherited: 0x00)
struct F*b20d609411 {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float Restitution; // 0x08(0x04)
	float ContactDistance; // 0x0c(0x04)
	char bSoftConstraint : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.*cb3a14cd33
// Size: 0x20 (Inherited: 0x14)
struct F*cb3a14cd33 : F*b20d609411 {
	float *fb43ad6918; // 0x14(0x04)
	float *ed1d80d04a; // 0x18(0x04)
	enum class *24096ec337 *afd09d46de; // 0x1c(0x01)
	enum class *24096ec337 *334c67fde7; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Engine.*9e3df2cc4e
// Size: 0x1c (Inherited: 0x14)
struct F*9e3df2cc4e : F*b20d609411 {
	float Limit; // 0x14(0x04)
	enum class *57312135a8 *b91bed655d; // 0x18(0x01)
	enum class *57312135a8 *5dd69c2732; // 0x19(0x01)
	enum class *57312135a8 *5fe2026bd2; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.*8c63919314
// Size: 0x4c (Inherited: 0x00)
struct F*8c63919314 {
	struct F*66921ce1f8 *1c36b1ec11; // 0x00(0x10)
	struct F*66921ce1f8 *542c01531f; // 0x10(0x10)
	struct F*66921ce1f8 *8117f59f31; // 0x20(0x10)
	struct FRotator OrientationTarget; // 0x30(0x0c)
	struct FVector AngularVelocityTarget; // 0x3c(0x0c)
	enum class EAngularDriveMode AngularDriveMode; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.*66921ce1f8
// Size: 0x10 (Inherited: 0x00)
struct F*66921ce1f8 {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float MaxForce; // 0x08(0x04)
	char *965900c460 : 1; // 0x0c(0x01)
	char *01270208ee : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*7b25599fc5
// Size: 0x4c (Inherited: 0x00)
struct F*7b25599fc5 {
	struct FVector PositionTarget; // 0x00(0x0c)
	struct FVector VelocityTarget; // 0x0c(0x0c)
	struct F*66921ce1f8 *989d39fdab; // 0x18(0x10)
	struct F*66921ce1f8 *4973d329d2; // 0x28(0x10)
	struct F*66921ce1f8 *4687f9c5f8; // 0x38(0x10)
	char *965900c460 : 1; // 0x48(0x01)
	char pad_48_1 : 7; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
};

// ScriptStruct Engine.ConstraintInstance
// Size: 0x1f0 (Inherited: 0x00)
struct FConstraintInstance {
	char pad_0[0x18]; // 0x00(0x18)
	struct FName *9fc2378166; // 0x18(0x08)
	struct FName *136e34d552; // 0x20(0x08)
	struct FName *cee7182477; // 0x28(0x08)
	struct FVector *ac155a0697; // 0x30(0x0c)
	struct FVector *59e2106a6a; // 0x3c(0x0c)
	struct FVector *c421c302e8; // 0x48(0x0c)
	struct FVector *35a796833e; // 0x54(0x0c)
	struct FVector *6ded58200c; // 0x60(0x0c)
	struct FVector *f7432dadf5; // 0x6c(0x0c)
	struct FRotator *a6763c0207; // 0x78(0x0c)
	char *2cf27098c8 : 1; // 0x84(0x01)
	char pad_84_1 : 7; // 0x84(0x01)
	char pad_85[0x7]; // 0x85(0x07)
	struct F*d847dc2ef1 *b028571227; // 0x8c(0x104)
	char pad_190[0x60]; // 0x190(0x60)
};

// ScriptStruct Engine.*d847dc2ef1
// Size: 0x104 (Inherited: 0x00)
struct F*d847dc2ef1 {
	float ProjectionLinearTolerance; // 0x00(0x04)
	float ProjectionAngularTolerance; // 0x04(0x04)
	float *1f5e6e738a; // 0x08(0x04)
	float *52678f6640; // 0x0c(0x04)
	struct F*9e3df2cc4e LinearLimit; // 0x10(0x1c)
	struct F*cb3a14cd33 *86c485cf6b; // 0x2c(0x20)
	struct F*4eb3ccb47a TwistLimit; // 0x4c(0x1c)
	struct F*7b25599fc5 *ec34393a85; // 0x68(0x4c)
	struct F*8c63919314 *cf7ff5e6a9; // 0xb4(0x4c)
	char *dac8477fb6 : 1; // 0x100(0x01)
	char bEnableProjection : 1; // 0x100(0x01)
	char bAngularBreakable : 1; // 0x100(0x01)
	char *496b3d1d1b : 1; // 0x100(0x01)
	char pad_100_4 : 4; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
};

// ScriptStruct Engine.*4c18852ae2
// Size: 0x28 (Inherited: 0x00)
struct F*4c18852ae2 {
	struct FName *177d889a29; // 0x00(0x08)
	char bIsLocalSimulation : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float OrientationStrength; // 0x0c(0x04)
	float AngularVelocityStrength; // 0x10(0x04)
	float PositionStrength; // 0x14(0x04)
	float VelocityStrength; // 0x18(0x04)
	float MaxLinearForce; // 0x1c(0x04)
	float MaxAngularForce; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*6c9f3db3c3
// Size: 0x08 (Inherited: 0x00)
struct F*6c9f3db3c3 {
	float Height; // 0x00(0x04)
	float Density; // 0x04(0x04)
};

// ScriptStruct Engine.*b560ea03a2
// Size: 0x2c (Inherited: 0x00)
struct F*b560ea03a2 {
	float DensityHeight; // 0x00(0x04)
	float DecayHeight; // 0x04(0x04)
	int32 MaxScatteringOrder; // 0x08(0x04)
	int32 *bbd9aca97c; // 0x0c(0x04)
	int32 *4b98dd9771; // 0x10(0x04)
	int32 *46b10498a2; // 0x14(0x04)
	int32 *562ac60095; // 0x18(0x04)
	int32 InscatterAltitudeSampleNum; // 0x1c(0x04)
	int32 *06623f0288; // 0x20(0x04)
	int32 *04fa2e746c; // 0x24(0x04)
	int32 *04e42f29fa; // 0x28(0x04)
};

// ScriptStruct Engine.*db3cc95897
// Size: 0xa8 (Inherited: 0x00)
struct F*db3cc95897 {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x10(0x78)
	enum class EAttenuationShape AttenuationShape; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float dBAttenuationAtMax; // 0x8c(0x04)
	struct FVector AttenuationShapeExtents; // 0x90(0x0c)
	float ConeOffset; // 0x9c(0x04)
	float FalloffDistance; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// ScriptStruct Engine.SoundAttenuationSettings
// Size: 0x130 (Inherited: 0xa8)
struct FSoundAttenuationSettings : F*db3cc95897 {
	char bAttenuate : 1; // 0xa8(0x01)
	char bSpatialize : 1; // 0xa8(0x01)
	char bAttenuateWithLPF : 1; // 0xa8(0x01)
	char bEnableListenerFocus : 1; // 0xa8(0x01)
	char bEnableOcclusion : 1; // 0xa8(0x01)
	char bUseComplexCollisionForOcclusion : 1; // 0xa8(0x01)
	char pad_A8_6 : 2; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	enum class *67aa325fc5 DistanceType; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float OmniRadius; // 0xb0(0x04)
	float StereoSpread; // 0xb4(0x04)
	enum class *5ef7d23080 SpatializationAlgorithm; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct U*3c6d1fe531* SpatializationPluginSettings; // 0xc0(0x08)
	float RadiusMin; // 0xc8(0x04)
	float RadiusMax; // 0xcc(0x04)
	float LPFRadiusMin; // 0xd0(0x04)
	float LPFRadiusMax; // 0xd4(0x04)
	float LPFFrequencyAtMin; // 0xd8(0x04)
	float LPFFrequencyAtMax; // 0xdc(0x04)
	float FocusAzimuth; // 0xe0(0x04)
	float NonFocusAzimuth; // 0xe4(0x04)
	float FocusDistanceScale; // 0xe8(0x04)
	float NonFocusDistanceScale; // 0xec(0x04)
	float FocusPriorityScale; // 0xf0(0x04)
	float NonFocusPriorityScale; // 0xf4(0x04)
	float FocusVolumeAttenuation; // 0xf8(0x04)
	float NonFocusVolumeAttenuation; // 0xfc(0x04)
	enum class ECollisionChannel OcclusionTraceChannel; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float OcclusionLowPassFilterFrequency; // 0x104(0x04)
	float OcclusionVolumeAttenuation; // 0x108(0x04)
	float OcclusionInterpolationTime; // 0x10c(0x04)
	struct U*7271e52195* OcclusionPluginSettings; // 0x110(0x08)
	struct U*0f6f7c0dee* ReverbPluginSettings; // 0x118(0x08)
	float ReverbWetLevelMin; // 0x120(0x04)
	float ReverbWetLevelMax; // 0x124(0x04)
	float ReverbDistanceMin; // 0x128(0x04)
	float ReverbDistanceMax; // 0x12c(0x04)
};

// ScriptStruct Engine.*0be550698a
// Size: 0x20 (Inherited: 0x00)
struct F*0be550698a {
	struct FName ParamName; // 0x00(0x08)
	float FloatParam; // 0x08(0x04)
	bool BoolParam; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32 IntParam; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundWave* SoundWaveParam; // 0x18(0x08)
};

// ScriptStruct Engine.*54237e0926
// Size: 0x08 (Inherited: 0x00)
struct F*54237e0926 {
	float Height; // 0x00(0x04)
	float Density; // 0x04(0x04)
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size: 0xa8 (Inherited: 0xa8)
struct FForceFeedbackAttenuationSettings : F*db3cc95897 {
};

// ScriptStruct Engine.*565423b023
// Size: 0x80 (Inherited: 0x00)
struct F*565423b023 {
	struct FMatrix Transform; // 0x00(0x40)
	struct FSplineParams SplineParams; // 0x40(0x38)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Engine.SplineParams
// Size: 0x38 (Inherited: 0x00)
struct FSplineParams {
	struct FVector *ae4bc44ef7; // 0x00(0x0c)
	struct FVector *c5fff829dc; // 0x0c(0x0c)
	float *f1b60e7c8b; // 0x18(0x04)
	struct FVector *838fda6e62; // 0x1c(0x0c)
	struct FVector *79b9226f08; // 0x28(0x0c)
	float *3ba423e0a3; // 0x34(0x04)
};

// ScriptStruct Engine.*517447b731
// Size: 0x28 (Inherited: 0x00)
struct F*517447b731 {
	struct FStringAssetReference Template; // 0x00(0x10)
	float Probability; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*8bfa60c108> *2306f124bb; // 0x18(0x10)
};

// ScriptStruct Engine.*8bfa60c108
// Size: 0x0c (Inherited: 0x00)
struct F*8bfa60c108 {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
	float Step; // 0x08(0x04)
};

// ScriptStruct Engine.*6cf238dc5d
// Size: 0x08 (Inherited: 0x00)
struct F*6cf238dc5d {
	float CellSize; // 0x00(0x04)
	float MaxRadius; // 0x04(0x04)
};

// ScriptStruct Engine.*198aa9067f
// Size: 0x18 (Inherited: 0x00)
struct F*198aa9067f {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct TArray<uint16> InstanceIndices; // 0x08(0x10)
};

// ScriptStruct Engine.*bd5307dec7
// Size: 0x24 (Inherited: 0x00)
struct F*bd5307dec7 {
	struct FVector Center; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FVector Extent; // 0x18(0x0c)
};

// ScriptStruct Engine.*eeccb83785
// Size: 0x28 (Inherited: 0x00)
struct F*eeccb83785 {
	struct FVector Position; // 0x00(0x0c)
	struct FLinearColor Color; // 0x0c(0x10)
	float PointSize; // 0x1c(0x04)
	float *9f0123e33d; // 0x20(0x04)
	bool *317bd8f868; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Engine.*e7cd7a4f50
// Size: 0x34 (Inherited: 0x00)
struct F*e7cd7a4f50 {
	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x04)
	float *9f0123e33d; // 0x2c(0x04)
	bool *317bd8f868; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Engine.*b2c650cd74
// Size: 0x28 (Inherited: 0x00)
struct F*b2c650cd74 {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UCurveFloat* DistanceToOpacityCurve; // 0x08(0x08)
	char bSizeIsInScreenSpace : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float BaseSizeX; // 0x14(0x04)
	float BaseSizeY; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x08)
};

// ScriptStruct Engine.*30fe3c2ae3
// Size: 0x20 (Inherited: 0x00)
struct F*30fe3c2ae3 {
	struct TArray<bool> *24fb63d3b0; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*23058e4b65
// Size: 0x28 (Inherited: 0x00)
struct F*23058e4b65 {
	int32 Bones[0x08]; // 0x00(0x20)
	bool Weights[0x08]; // 0x20(0x08)
};

// ScriptStruct Engine.*795231f53f
// Size: 0x18 (Inherited: 0x00)
struct F*795231f53f {
	struct UAnimationAsset* AnimToPlay; // 0x00(0x08)
	char bSavedLooping : 1; // 0x08(0x01)
	char bSavedPlaying : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SavedPosition; // 0x0c(0x04)
	float SavedPlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*f72b6ac2ee
// Size: 0x58 (Inherited: 0x50)
struct F*f72b6ac2ee : F*67c21faf56 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*505e8679f3
// Size: 0x58 (Inherited: 0x50)
struct F*505e8679f3 : F*67c21faf56 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*17fabde441
// Size: 0x58 (Inherited: 0x00)
struct F*17fabde441 {
	struct FVector StartPos; // 0x00(0x0c)
	struct FVector StartTangent; // 0x0c(0x0c)
	struct FVector2D StartScale; // 0x18(0x08)
	float StartRoll; // 0x20(0x04)
	struct FVector2D StartOffset; // 0x24(0x08)
	struct FVector EndPos; // 0x2c(0x0c)
	struct FVector EndTangent; // 0x38(0x0c)
	struct FVector2D EndScale; // 0x44(0x08)
	float EndRoll; // 0x4c(0x04)
	struct FVector2D EndOffset; // 0x50(0x08)
};

// ScriptStruct Engine.*da4dd21212
// Size: 0x64 (Inherited: 0x00)
struct F*da4dd21212 {
	struct F*17fabde441 *17fabde441; // 0x00(0x58)
	struct FVector SplineUpDir; // 0x58(0x0c)
};

// ScriptStruct Engine.*707001a8dd
// Size: 0x08 (Inherited: 0x00)
struct F*707001a8dd {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*4f3c2d44a1
// Size: 0x50 (Inherited: 0x00)
struct F*4f3c2d44a1 {
	struct FMatrix Transform; // 0x00(0x40)
	struct FVector4 CustomData; // 0x40(0x10)
};

// ScriptStruct Engine.*fab286bf9e
// Size: 0x28 (Inherited: 0x00)
struct F*fab286bf9e {
	struct FVector *4320151c07; // 0x00(0x0c)
	int32 *931f0f7180; // 0x0c(0x04)
	struct FVector *e75d40d03d; // 0x10(0x0c)
	int32 *69261ed081; // 0x1c(0x04)
	int32 *416b8321fa; // 0x20(0x04)
	int32 *1dcd835211; // 0x24(0x04)
};

// ScriptStruct Engine.PerPlatformFloat
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformFloat {
	float Default; // 0x00(0x04)
};

// ScriptStruct Engine.PerPlatformInt
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformInt {
	int32 Default; // 0x00(0x04)
};

// ScriptStruct Engine.*056689335d
// Size: 0x18 (Inherited: 0x00)
struct F*056689335d {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*76fcb13f07
// Size: 0x90 (Inherited: 0x00)
struct F*76fcb13f07 {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.SplinePoint
// Size: 0x44 (Inherited: 0x00)
struct FSplinePoint {
	float InputKey; // 0x00(0x04)
	struct FVector Position; // 0x04(0x0c)
	struct FVector ArriveTangent; // 0x10(0x0c)
	struct FVector LeaveTangent; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	struct FVector Scale; // 0x34(0x0c)
	enum class ESplinePointType Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
};

// ScriptStruct Engine.*943c6d0e82
// Size: 0x20 (Inherited: 0x00)
struct F*943c6d0e82 {
	struct UObject* Obj; // 0x00(0x08)
	struct UClass* *549465dc09; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.*2e7d0bf04d
// Size: 0x18 (Inherited: 0x00)
struct F*2e7d0bf04d {
	struct FString ShowFlagName; // 0x00(0x10)
	bool Enabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.Timeline
// Size: 0xe0 (Inherited: 0x00)
struct FTimeline {
	enum class *f197db0fc1 *435d348826; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Length; // 0x04(0x04)
	char bLooping : 1; // 0x08(0x01)
	char *79e73cc39d : 1; // 0x08(0x01)
	char *0c34648455 : 1; // 0x08(0x01)
	char pad_8_3 : 5; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float PlayRate; // 0x0c(0x04)
	float Position; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct F*757d76180a> Events; // 0x18(0x10)
	struct TArray<struct F*6d22b78e57> *b1c9dc3685; // 0x28(0x10)
	struct TArray<struct F*0c55881232> *a793d030ff; // 0x38(0x10)
	struct TArray<struct F*a1ee785e69> *5ee74c2065; // 0x48(0x10)
	DelegateProperty *672f521253; // 0x58(0x10)
	DelegateProperty *0632209d91; // 0x68(0x10)
	char pad_78[0x48]; // 0x78(0x48)
	struct UObject* *03b5128cd8; // 0xc0(0x08)
	struct FName *59dcf1a058; // 0xc8(0x08)
	struct UProperty* *31aa00f84e; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// ScriptStruct Engine.*a1ee785e69
// Size: 0x70 (Inherited: 0x00)
struct F*a1ee785e69 {
	struct U*594e4d7ca9* *fcba8297c0; // 0x00(0x08)
	DelegateProperty *352c15dab9; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *dd53bb9b91; // 0x20(0x08)
	struct UStructProperty* *aaab7f8860; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*0c55881232
// Size: 0x70 (Inherited: 0x00)
struct F*0c55881232 {
	struct UCurveFloat* *e7fc2b8ab7; // 0x00(0x08)
	DelegateProperty *352c15dab9; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *515424cce4; // 0x20(0x08)
	struct UFloatProperty* *04f442a4a8; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*6d22b78e57
// Size: 0x70 (Inherited: 0x00)
struct F*6d22b78e57 {
	struct U*59a0aeaef9* VectorCurve; // 0x00(0x08)
	DelegateProperty *352c15dab9; // 0x08(0x10)
	struct FName TrackName; // 0x18(0x08)
	struct FName *4c6d01031c; // 0x20(0x08)
	struct UStructProperty* *3d944d89e2; // 0x28(0x08)
	char pad_30[0x40]; // 0x30(0x40)
};

// ScriptStruct Engine.*757d76180a
// Size: 0x18 (Inherited: 0x00)
struct F*757d76180a {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	DelegateProperty *4e66cace3e; // 0x08(0x10)
};

// ScriptStruct Engine.*d280c46283
// Size: 0x38 (Inherited: 0x00)
struct F*d280c46283 {
	struct TArray<bool> *6289c98284; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
	float *6fa37189c7[0x03]; // 0x20(0x0c)
	float Ranges[0x03]; // 0x2c(0x0c)
};

// ScriptStruct Engine.*b97497896a
// Size: 0x18 (Inherited: 0x00)
struct F*b97497896a {
	struct FName CurveName; // 0x00(0x08)
	struct TArray<float> *225420fea0; // 0x08(0x10)
};

// ScriptStruct Engine.*c605d7eab4
// Size: 0x20 (Inherited: 0x00)
struct F*c605d7eab4 {
	struct TArray<struct FVector> ScaleKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*d3e90c3f64
// Size: 0x20 (Inherited: 0x00)
struct F*d3e90c3f64 {
	struct TArray<struct FQuat> *85ea5865ab; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*27783647c4
// Size: 0x20 (Inherited: 0x00)
struct F*27783647c4 {
	struct TArray<struct FVector> *89c715b675; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.*42613e53dd
// Size: 0x04 (Inherited: 0x00)
struct F*42613e53dd {
	int32 *762b6b4ab0; // 0x00(0x04)
};

// ScriptStruct Engine.*8a38e615ff
// Size: 0x20 (Inherited: 0x00)
struct F*8a38e615ff {
	struct TArray<struct F*832d517707> *2dd73577fd; // 0x00(0x10)
	struct TArray<struct FName> TrackNames; // 0x10(0x10)
};

// ScriptStruct Engine.*832d517707
// Size: 0x30 (Inherited: 0x00)
struct F*832d517707 {
	struct TArray<struct FVector> *89c715b675; // 0x00(0x10)
	struct TArray<struct FQuat> *85ea5865ab; // 0x10(0x10)
	struct TArray<struct FVector> ScaleKeys; // 0x20(0x10)
};

// ScriptStruct Engine.*3960a065b0
// Size: 0x20 (Inherited: 0x00)
struct F*3960a065b0 {
	struct FBoneReference BoneReference; // 0x00(0x18)
	float *9260250457; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*0f9ae39e92
// Size: 0x1c (Inherited: 0x00)
struct F*0f9ae39e92 {
	struct F*db5e6e7b5e *6d540bd45a; // 0x00(0x18)
	float BlendWeight; // 0x18(0x04)
};

// ScriptStruct Engine.*db5e6e7b5e
// Size: 0x18 (Inherited: 0x00)
struct F*db5e6e7b5e {
	int32 Indices[0x03]; // 0x00(0x0c)
	float Weights[0x03]; // 0x0c(0x0c)
};

// ScriptStruct Engine.BlendSample
// Size: 0x18 (Inherited: 0x00)
struct FBlendSample {
	struct UAnimSequence* Animation; // 0x00(0x08)
	struct FVector *46e425afc7; // 0x08(0x0c)
	float *63b5605c53; // 0x14(0x04)
};

// ScriptStruct Engine.BlendParameter
// Size: 0x20 (Inherited: 0x00)
struct FBlendParameter {
	struct FString DisplayName; // 0x00(0x10)
	float Min; // 0x10(0x04)
	float Max; // 0x14(0x04)
	int32 GridNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.InterpolationParameter
// Size: 0x08 (Inherited: 0x00)
struct FInterpolationParameter {
	float *433d36e114; // 0x00(0x04)
	enum class *0757624f19 InterpolationType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*48a73d20ed
// Size: 0x90 (Inherited: 0x00)
struct F*48a73d20ed {
	struct TArray<struct FSmartName> *4df8d76eac; // 0x00(0x10)
	struct TArray<struct F*87e190c994> Poses; // 0x10(0x10)
	struct TArray<struct FName> Tracks; // 0x20(0x10)
	struct TMap<struct FName, int32> *eab1de5d4d; // 0x30(0x50)
	struct TArray<struct FAnimCurveBase> Curves; // 0x80(0x10)
};

// ScriptStruct Engine.*87e190c994
// Size: 0x30 (Inherited: 0x00)
struct F*87e190c994 {
	struct TArray<struct FTransform> *17d89e19a2; // 0x00(0x10)
	struct TArray<bool> *dc13c741f8; // 0x10(0x10)
	struct TArray<float> *88ed82fe1d; // 0x20(0x10)
};

// ScriptStruct Engine.*3e8db83ef8
// Size: 0x30 (Inherited: 0x00)
struct F*3e8db83ef8 {
	struct FName *0b796ef10f; // 0x00(0x08)
	int32 *393e73580a; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct F*08ece8b748> States; // 0x10(0x10)
	struct TArray<struct F*f7fb02141f> Transitions; // 0x20(0x10)
};

// ScriptStruct Engine.*f7fb02141f
// Size: 0x40 (Inherited: 0x08)
struct F*f7fb02141f : F*399d02b1c8 {
	int32 *2733e96d8b; // 0x08(0x04)
	int32 NextState; // 0x0c(0x04)
	float CrossfadeDuration; // 0x10(0x04)
	int32 *1630362cfc; // 0x14(0x04)
	int32 *8ae6d97a10; // 0x18(0x04)
	int32 *1117c5ad05; // 0x1c(0x04)
	enum class EAlphaBlendOption BlendMode; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UCurveFloat* CustomCurve; // 0x28(0x08)
	struct UBlendProfile* BlendProfile; // 0x30(0x08)
	enum class *c207665492 LogicType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.*399d02b1c8
// Size: 0x08 (Inherited: 0x00)
struct F*399d02b1c8 {
	struct FName StateName; // 0x00(0x08)
};

// ScriptStruct Engine.*08ece8b748
// Size: 0x48 (Inherited: 0x00)
struct F*08ece8b748 {
	struct FName StateName; // 0x00(0x08)
	struct TArray<struct F*8c0f001c06> Transitions; // 0x08(0x10)
	int32 *83ae875a41; // 0x18(0x04)
	int32 *1630362cfc; // 0x1c(0x04)
	int32 *8ae6d97a10; // 0x20(0x04)
	int32 *aa706fa310; // 0x24(0x04)
	bool *7f323b1367; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32 *416cfdd55d; // 0x2c(0x04)
	struct TArray<int32> *120f6398c8; // 0x30(0x10)
	bool *b427af77b2; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Engine.*8c0f001c06
// Size: 0x20 (Inherited: 0x00)
struct F*8c0f001c06 {
	int32 *ecbb392262; // 0x00(0x04)
	int32 *f44930eb06; // 0x04(0x04)
	int32 TransitionIndex; // 0x08(0x04)
	bool *a9b37f2aae; // 0x0c(0x01)
	bool *33e5a33b27; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<int32> *fcbd6c6cf9; // 0x10(0x10)
};

// ScriptStruct Engine.*59685baefe
// Size: 0x28 (Inherited: 0x08)
struct F*59685baefe : F*399d02b1c8 {
	struct TArray<struct F*250733581b> Transitions; // 0x08(0x10)
	int32 *83ae875a41; // 0x18(0x04)
	int32 *1630362cfc; // 0x1c(0x04)
	int32 *8ae6d97a10; // 0x20(0x04)
	int32 *aa706fa310; // 0x24(0x04)
};

// ScriptStruct Engine.*250733581b
// Size: 0x10 (Inherited: 0x00)
struct F*250733581b {
	struct FName *92e2ba898d; // 0x00(0x08)
	bool *e23628933d; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 TransitionIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*2331a14de7
// Size: 0x40 (Inherited: 0x00)
struct F*2331a14de7 {
	enum class EAdditiveAnimationType *1d26ac81d1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct Engine.*24e70f0283
// Size: 0x28 (Inherited: 0x10)
struct F*24e70f0283 : F*d57237042c {
	char pad_10[0x8]; // 0x10(0x08)
	struct TArray<bool> *a11ec8dc71; // 0x18(0x10)
};

// ScriptStruct Engine.*d57237042c
// Size: 0x10 (Inherited: 0x00)
struct F*d57237042c {
	struct TArray<struct FTransform> Bones; // 0x00(0x10)
};

// ScriptStruct Engine.*edbd0ddf47
// Size: 0x10 (Inherited: 0x00)
struct F*edbd0ddf47 {
	struct TArray<int32> *32bf9555af; // 0x00(0x10)
};

// ScriptStruct Engine.AssetImportInfo
// Size: 0x01 (Inherited: 0x00)
struct FAssetImportInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*a4f4171d60
// Size: 0x80 (Inherited: 0x00)
struct F*a4f4171d60 {
	struct FName PrimaryAssetType; // 0x00(0x08)
	struct UClass* AssetBaseClass; // 0x08(0x20)
	struct UClass* *ce298f641e; // 0x28(0x08)
	bool bHasBlueprintClasses; // 0x30(0x01)
	bool bIsEditorOnly; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TArray<struct FDirectoryPath> Directories; // 0x38(0x10)
	struct TArray<struct FStringAssetReference> *df4704d843; // 0x48(0x10)
	struct F*4a161b0907 Rules; // 0x58(0x10)
	struct TArray<struct FString> *52c8c992ca; // 0x68(0x10)
	bool *892eabe9de; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32 *808062a382; // 0x7c(0x04)
};

// ScriptStruct Engine.*4a161b0907
// Size: 0x10 (Inherited: 0x00)
struct F*4a161b0907 {
	int32 Priority; // 0x00(0x04)
	bool *47648de3e9; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32 ChunkId; // 0x08(0x04)
	enum class EPrimaryAssetCookRule CookRule; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.*b6eb9ac2dd
// Size: 0x10 (Inherited: 0x00)
struct F*b6eb9ac2dd {
	struct UAnimationAsset* *2f52ec8cb4; // 0x00(0x08)
	struct UAnimationAsset* *aa861c9ba1; // 0x08(0x08)
};

// ScriptStruct Engine.*fb9a986504
// Size: 0x20 (Inherited: 0x00)
struct F*fb9a986504 {
	struct FFilePath LaunchOnTestmap; // 0x00(0x10)
	struct FString DeviceID; // 0x10(0x10)
};

// ScriptStruct Engine.*858afdee7d
// Size: 0x18 (Inherited: 0x00)
struct F*858afdee7d {
	struct FStringAssetReference PerformanceTestmap; // 0x00(0x10)
	int32 TestTimer; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*c9fef354c4
// Size: 0x1f0 (Inherited: 0x00)
struct F*c9fef354c4 {
	struct FFilePath *fa6804abfd; // 0x00(0x10)
	struct F*666b4f873c *71eaac8c88; // 0x10(0x150)
	struct F*2f628e59b4 *84f67ee6c5; // 0x160(0x60)
	struct F*9c1bff509a *20d23842d7; // 0x1c0(0x20)
	struct FFilePath *5dcda23a6b; // 0x1e0(0x10)
};

// ScriptStruct Engine.*9c1bff509a
// Size: 0x20 (Inherited: 0x00)
struct F*9c1bff509a {
	struct FDirectoryPath *9e7c9bde51; // 0x00(0x10)
	struct FString *7f21af336c; // 0x10(0x10)
};

// ScriptStruct Engine.*2f628e59b4
// Size: 0x60 (Inherited: 0x00)
struct F*2f628e59b4 {
	struct FFilePath BlueprintAsset; // 0x00(0x10)
	struct FFilePath MaterialAsset; // 0x10(0x10)
	struct FFilePath ParticleSystemAsset; // 0x20(0x10)
	struct FFilePath SkeletalMeshAsset; // 0x30(0x10)
	struct FFilePath StaticMeshAsset; // 0x40(0x10)
	struct FFilePath TextureAsset; // 0x50(0x10)
};

// ScriptStruct Engine.*666b4f873c
// Size: 0x150 (Inherited: 0x00)
struct F*666b4f873c {
	struct F*90c01ae4e6 Diffuse; // 0x00(0x20)
	struct F*90c01ae4e6 Normal; // 0x20(0x20)
	struct F*90c01ae4e6 StaticMesh; // 0x40(0x20)
	struct F*90c01ae4e6 ReimportStaticMesh; // 0x60(0x20)
	struct F*90c01ae4e6 BlendShapeMesh; // 0x80(0x20)
	struct F*90c01ae4e6 MorphMesh; // 0xa0(0x20)
	struct F*90c01ae4e6 SkeletalMesh; // 0xc0(0x20)
	struct F*90c01ae4e6 Animation; // 0xe0(0x20)
	struct F*90c01ae4e6 Sound; // 0x100(0x20)
	struct F*90c01ae4e6 SurroundSound; // 0x120(0x20)
	struct TArray<struct F*90c01ae4e6> OtherAssetsToImport; // 0x140(0x10)
};

// ScriptStruct Engine.*90c01ae4e6
// Size: 0x20 (Inherited: 0x00)
struct F*90c01ae4e6 {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct TArray<struct F*20135ca9af> FactorySettings; // 0x10(0x10)
};

// ScriptStruct Engine.*20135ca9af
// Size: 0x20 (Inherited: 0x00)
struct F*20135ca9af {
	struct FString SettingName; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Engine.*04983e2c04
// Size: 0x30 (Inherited: 0x00)
struct F*04983e2c04 {
	struct FFilePath *1195339098; // 0x00(0x10)
	struct FFilePath *a765e3ae08; // 0x10(0x10)
	struct FFilePath DefaultParticleAsset; // 0x20(0x10)
};

// ScriptStruct Engine.*28015cd648
// Size: 0x10 (Inherited: 0x00)
struct F*28015cd648 {
	struct FFilePath DefaultParticleAsset; // 0x00(0x10)
};

// ScriptStruct Engine.*bb96164374
// Size: 0x30 (Inherited: 0x00)
struct F*bb96164374 {
	struct FFilePath DefaultMaterialAsset; // 0x00(0x10)
	struct FFilePath DefaultDiffuseTexture; // 0x10(0x10)
	struct FFilePath DefaultNormalTexture; // 0x20(0x10)
};

// ScriptStruct Engine.*de76861de8
// Size: 0x38 (Inherited: 0x00)
struct F*de76861de8 {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct FString ExportFileExtension; // 0x10(0x10)
	bool bSkipExport; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct F*20135ca9af> FactorySettings; // 0x28(0x10)
};

// ScriptStruct Engine.*155f881747
// Size: 0x60 (Inherited: 0x00)
struct F*155f881747 {
	struct FString ToolName; // 0x00(0x10)
	struct FFilePath ExecutablePath; // 0x10(0x10)
	struct FString CommandLineOptions; // 0x20(0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30(0x10)
	struct FString ScriptExtension; // 0x40(0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50(0x10)
};

// ScriptStruct Engine.*1d667bd200
// Size: 0x3c (Inherited: 0x00)
struct F*1d667bd200 {
	char pad_0[0x3c]; // 0x00(0x3c)
};

// ScriptStruct Engine.*b195a56239
// Size: 0x20 (Inherited: 0x00)
struct F*b195a56239 {
	struct FBoneReference BoneReference; // 0x00(0x18)
	float *8ec64198e8; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*bb0d2a4e61
// Size: 0x18 (Inherited: 0x00)
struct F*bb0d2a4e61 {
	struct UObject* *c855403de5; // 0x00(0x08)
	struct FVector2D *195483e29f; // 0x08(0x08)
	float *a138d6654e; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*21f86fbfeb
// Size: 0x18 (Inherited: 0x00)
struct F*21f86fbfeb {
	struct UClass* Interface; // 0x00(0x08)
	struct TArray<struct UEdGraph*> Graphs; // 0x08(0x10)
};

// ScriptStruct Engine.*79a9f52165
// Size: 0xf8 (Inherited: 0x00)
struct F*79a9f52165 {
	struct FName VarName; // 0x00(0x08)
	struct FGuid *ebf01b786a; // 0x08(0x10)
	struct F*4342bfc443 VarType; // 0x18(0x80)
	struct FString FriendlyName; // 0x98(0x10)
	struct FText Category; // 0xa8(0x18)
	uint64 PropertyFlags; // 0xc0(0x08)
	struct FName *bf083ccea8; // 0xc8(0x08)
	enum class ELifetimeCondition *9664292ce4; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct F*58d045b1a4> *1a8a67551c; // 0xd8(0x10)
	struct FString DefaultValue; // 0xe8(0x10)
};

// ScriptStruct Engine.*58d045b1a4
// Size: 0x18 (Inherited: 0x00)
struct F*58d045b1a4 {
	struct FName *2466b213d4; // 0x00(0x08)
	struct FString *a17b114e41; // 0x08(0x10)
};

// ScriptStruct Engine.*bc767fd7ec
// Size: 0x01 (Inherited: 0x00)
struct F*bc767fd7ec {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*39e319cd96
// Size: 0x80 (Inherited: 0x00)
struct F*39e319cd96 {
	struct FName PlatformName; // 0x00(0x08)
	bool *a97bf30519; // 0x08(0x01)
	bool *30b74963a5; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FName> *177aa6033c; // 0x10(0x10)
	SetProperty ExcludedAssets; // 0x20(0x50)
	struct TArray<struct FString> ExcludedFolderPaths; // 0x70(0x10)
};

// ScriptStruct Engine.*8468031616
// Size: 0x18 (Inherited: 0x00)
struct F*8468031616 {
	struct UAnimationAsset* NewAsset; // 0x00(0x08)
	struct FGuid *2a7ebb05e1; // 0x08(0x10)
};

// ScriptStruct Engine.*6c17146d97
// Size: 0x18 (Inherited: 0x00)
struct F*6c17146d97 {
	struct FName Name; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
};

// ScriptStruct Engine.DataTableCategoryHandle
// Size: 0x18 (Inherited: 0x00)
struct FDataTableCategoryHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName ColumnName; // 0x08(0x08)
	struct FName RowContents; // 0x10(0x08)
};

// ScriptStruct Engine.DataTableRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FDataTableRowHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct Engine.CustomProfile
// Size: 0x18 (Inherited: 0x00)
struct FCustomProfile {
	struct FName Name; // 0x00(0x08)
	struct TArray<struct F*2008898a6b> CustomResponses; // 0x08(0x10)
};

// ScriptStruct Engine.*58d8e1f999
// Size: 0x18 (Inherited: 0x00)
struct F*58d8e1f999 {
	enum class ECollisionChannel Channel; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Name; // 0x08(0x08)
	enum class ECollisionResponse DefaultResponse; // 0x10(0x01)
	bool bTraceType; // 0x11(0x01)
	bool bStaticObject; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct Engine.*ae13dbf557
// Size: 0x60 (Inherited: 0x00)
struct F*ae13dbf557 {
	struct FName Name; // 0x00(0x08)
	enum class ECollisionEnabled CollisionEnabled; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FName ObjectTypeName; // 0x10(0x08)
	struct TArray<struct F*2008898a6b> CustomResponses; // 0x18(0x10)
	struct FString HelpMessage; // 0x28(0x10)
	bool bCanModify; // 0x38(0x01)
	char pad_39[0x27]; // 0x39(0x27)
};

// ScriptStruct Engine.DialogueWaveParameter
// Size: 0x20 (Inherited: 0x00)
struct FDialogueWaveParameter {
	struct UDialogueWave* DialogueWave; // 0x00(0x08)
	struct FDialogueContext Context; // 0x08(0x18)
};

// ScriptStruct Engine.DialogueContext
// Size: 0x18 (Inherited: 0x00)
struct FDialogueContext {
	struct UDialogueVoice* Speaker; // 0x00(0x08)
	struct TArray<struct UDialogueVoice*> Targets; // 0x08(0x10)
};

// ScriptStruct Engine.*9c587af3e5
// Size: 0xb8 (Inherited: 0x00)
struct F*9c587af3e5 {
	struct TArray<struct F*37375581e4> PathData; // 0x00(0x10)
	struct F*37375581e4 LastTraceDestination; // 0x10(0x1c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FHitResult HitResult; // 0x30(0x88)
};

// ScriptStruct Engine.*37375581e4
// Size: 0x1c (Inherited: 0x00)
struct F*37375581e4 {
	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float Time; // 0x18(0x04)
};

// ScriptStruct Engine.*5cffd13e30
// Size: 0x130 (Inherited: 0x00)
struct F*5cffd13e30 {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector LaunchVelocity; // 0x0c(0x0c)
	bool bTraceWithCollision; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ProjectileRadius; // 0x1c(0x04)
	float MaxSimTime; // 0x20(0x04)
	bool bTraceWithChannel; // 0x24(0x01)
	bool bTraceWithProfile; // 0x25(0x01)
	char pad_26[0xaa]; // 0x26(0xaa)
	enum class ECollisionChannel TraceChannel; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FName TraceProfile; // 0xd8(0x08)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0xe0(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0xf0(0x10)
	float SimFrequency; // 0x100(0x04)
	float OverrideGravityZ; // 0x104(0x04)
	float DragForce; // 0x108(0x04)
	float MaxSpeed; // 0x10c(0x04)
	struct UCurveFloat* MaxSpeedOverTimeCurve; // 0x110(0x08)
	enum class EDrawDebugTrace DrawDebugType; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float DrawDebugTime; // 0x11c(0x04)
	bool bTraceComplex; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)
};

// ScriptStruct Engine.*4f1bec838b
// Size: 0x18 (Inherited: 0x00)
struct F*4f1bec838b {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.*0c8e070a95
// Size: 0x08 (Inherited: 0x00)
struct F*0c8e070a95 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*bc4f195692
// Size: 0x10 (Inherited: 0x00)
struct F*bc4f195692 {
	struct UTextureRenderTarget2D* RenderTarget; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*76eff26226
// Size: 0x50 (Inherited: 0x00)
struct F*76eff26226 {
	bool bIsValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct F*dc842ebd87> *637af8c639; // 0x08(0x10)
	char pad_18[0x38]; // 0x18(0x38)
};

// ScriptStruct Engine.*dc842ebd87
// Size: 0x18 (Inherited: 0x00)
struct F*dc842ebd87 {
	struct FName PropertyName; // 0x00(0x08)
	int32 ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* *ef2e939584; // 0x10(0x08)
};

// ScriptStruct Engine.*f871fdbfe8
// Size: 0x10 (Inherited: 0x00)
struct F*f871fdbfe8 {
	struct UFunction* *6c1c026b6e; // 0x00(0x08)
	int32 *6d427ecb95; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*21908f0026
// Size: 0x01 (Inherited: 0x00)
struct F*21908f0026 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*abc8f374e0
// Size: 0x08 (Inherited: 0x00)
struct F*abc8f374e0 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*13ae80568e
// Size: 0x1e0 (Inherited: 0x00)
struct F*13ae80568e {
	char pad_0[0x1e0]; // 0x00(0x1e0)
};

// ScriptStruct Engine.*190b01c8d6
// Size: 0x14 (Inherited: 0x00)
struct F*190b01c8d6 {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FAnimBlueprintDebugData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*1a96b38d51
// Size: 0x01 (Inherited: 0x00)
struct F*1a96b38d51 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*dda1beb589
// Size: 0xb0 (Inherited: 0x00)
struct F*dda1beb589 {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct Engine.*2789192fa6
// Size: 0x20 (Inherited: 0x00)
struct F*2789192fa6 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.*0005440193
// Size: 0x90 (Inherited: 0x20)
struct F*0005440193 : F*2789192fa6 {
	struct TArray<struct FVector> *237688b410; // 0x20(0x10)
	struct FBox *90cddc5aaf; // 0x30(0x1c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FTransform Transform; // 0x50(0x30)
	char pad_80[0x10]; // 0x80(0x10)
};

// ScriptStruct Engine.*575b943669
// Size: 0xa0 (Inherited: 0x20)
struct F*575b943669 : F*2789192fa6 {
	struct FMatrix TM; // 0x20(0x40)
	struct FQuat Orientation; // 0x60(0x10)
	struct FVector Center; // 0x70(0x0c)
	struct FRotator Rotation; // 0x7c(0x0c)
	float X; // 0x88(0x04)
	float Y; // 0x8c(0x04)
	float Z; // 0x90(0x04)
	char pad_94[0xc]; // 0x94(0x0c)
};

// ScriptStruct Engine.*a234f17f65
// Size: 0x70 (Inherited: 0x20)
struct F*a234f17f65 : F*2789192fa6 {
	struct FMatrix TM; // 0x20(0x40)
	struct FVector Center; // 0x60(0x0c)
	float Radius; // 0x6c(0x04)
};

// ScriptStruct Engine.*ad11e631ff
// Size: 0x90 (Inherited: 0x20)
struct F*ad11e631ff : F*2789192fa6 {
	struct FMatrix TM; // 0x20(0x40)
	struct FQuat Orientation; // 0x60(0x10)
	struct FVector Center; // 0x70(0x0c)
	struct FRotator Rotation; // 0x7c(0x0c)
	float Radius; // 0x88(0x04)
	float Length; // 0x8c(0x04)
};

// ScriptStruct Engine.*3ef2376653
// Size: 0x48 (Inherited: 0x00)
struct F*3ef2376653 {
	struct TArray<struct F*a234f17f65> *ed453dfc7d; // 0x00(0x10)
	struct TArray<struct F*575b943669> *2eb4e818b4; // 0x10(0x10)
	struct TArray<struct F*ad11e631ff> *418c000f47; // 0x20(0x10)
	struct TArray<struct F*0005440193> *142609e24e; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
};

// ScriptStruct Engine.*dec19e3efd
// Size: 0x30 (Inherited: 0x00)
struct F*dec19e3efd {
	struct TArray<struct F*4a187c14d0> *e6e6045565; // 0x00(0x10)
	struct TArray<struct F*bd23ea555d> *430a132864; // 0x10(0x10)
	struct TArray<struct F*c413bcd24f> *5fb129b106; // 0x20(0x10)
};

// ScriptStruct Engine.*c413bcd24f
// Size: 0x10 (Inherited: 0x00)
struct F*c413bcd24f {
	struct TArray<struct FVector2D> *237688b410; // 0x00(0x10)
};

// ScriptStruct Engine.*bd23ea555d
// Size: 0x14 (Inherited: 0x00)
struct F*bd23ea555d {
	struct FVector2D Center; // 0x00(0x08)
	float Width; // 0x08(0x04)
	float Height; // 0x0c(0x04)
	float Angle; // 0x10(0x04)
};

// ScriptStruct Engine.*4a187c14d0
// Size: 0x0c (Inherited: 0x00)
struct F*4a187c14d0 {
	struct FVector2D Center; // 0x00(0x08)
	float Radius; // 0x08(0x04)
};

// ScriptStruct Engine.*61257e2b8b
// Size: 0x30 (Inherited: 0x00)
struct F*61257e2b8b {
	struct FName ProfileName; // 0x00(0x08)
	struct F*4c18852ae2 *4c18852ae2; // 0x08(0x28)
};

// ScriptStruct Engine.*8b34ed3b12
// Size: 0x28 (Inherited: 0x00)
struct F*8b34ed3b12 {
	struct TArray<int32> VertexIndices; // 0x00(0x10)
	int32 Direction; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FName ItemName; // 0x18(0x08)
	int32 PolyFlags; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*41df8d5afe
// Size: 0x18 (Inherited: 0x00)
struct F*41df8d5afe {
	struct FString Value; // 0x00(0x10)
	struct FVector2D *b25405955a; // 0x10(0x08)
};

// ScriptStruct Engine.*ab244b24a7
// Size: 0x28 (Inherited: 0x00)
struct F*ab244b24a7 {
	float *68a7019d8d; // 0x00(0x04)
	float *2f59ddb750; // 0x04(0x04)
	float *6e4758408e; // 0x08(0x04)
	float *082b0eb258; // 0x0c(0x04)
	struct FVector2D Scaling; // 0x10(0x08)
	struct UFont* *63c69fe4db; // 0x18(0x08)
	struct FVector2D *7376659591; // 0x20(0x08)
};

// ScriptStruct Engine.*d89ab45fda
// Size: 0x18 (Inherited: 0x00)
struct F*d89ab45fda {
	struct UTexture* Texture; // 0x00(0x08)
	float U; // 0x08(0x04)
	float V; // 0x0c(0x04)
	float UL; // 0x10(0x04)
	float VL; // 0x14(0x04)
};

// ScriptStruct Engine.*713b991027
// Size: 0x18 (Inherited: 0x00)
struct F*713b991027 {
	struct FGuid *6cb6909a1b; // 0x00(0x10)
	struct FIntPoint ComponentId; // 0x10(0x08)
};

// ScriptStruct Engine.*b7f45c1414
// Size: 0x80 (Inherited: 0x00)
struct F*b7f45c1414 {
	char pad_0[0x8]; // 0x00(0x08)
	struct AGameStateBase* GameState; // 0x08(0x08)
	struct UNetDriver* NetDriver; // 0x10(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x18(0x08)
	struct ULevel* PersistentLevel; // 0x20(0x08)
	SetProperty Levels; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
};

// ScriptStruct Engine.*b0cbdd61a4
// Size: 0x58 (Inherited: 0x50)
struct F*b0cbdd61a4 : F*67c21faf56 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*5050d2cb13
// Size: 0x58 (Inherited: 0x50)
struct F*5050d2cb13 : F*67c21faf56 {
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.*4b9de1c9a7
// Size: 0x20 (Inherited: 0x00)
struct F*4b9de1c9a7 {
	struct FVector *f47145a8d3; // 0x00(0x0c)
	struct FRotator *0ef85c8f63; // 0x0c(0x0c)
	float *f463ad0b78; // 0x18(0x04)
	bool *7fbeb2a8c9; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*ce85c43b15
// Size: 0x20 (Inherited: 0x00)
struct F*ce85c43b15 {
	struct FString *b1041108d4; // 0x00(0x10)
	struct FString *9ab5529375; // 0x10(0x10)
};

// ScriptStruct Engine.*a72ab554af
// Size: 0x10 (Inherited: 0x00)
struct F*a72ab554af {
	struct FName *0af24903a8; // 0x00(0x08)
	struct FName *fe99938af1; // 0x08(0x08)
};

// ScriptStruct Engine.*2f5df3d7dc
// Size: 0x40 (Inherited: 0x00)
struct F*2f5df3d7dc {
	struct FName ObjectName; // 0x00(0x08)
	struct FName OldClassName; // 0x08(0x08)
	struct FName NewClassName; // 0x10(0x08)
	struct FName OldSubobjName; // 0x18(0x08)
	struct FName NewSubobjName; // 0x20(0x08)
	struct FName *c54d98a41e; // 0x28(0x08)
	struct FName *d4fb83b0fd; // 0x30(0x08)
	bool InstanceOnly; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.*6b88783d53
// Size: 0x10 (Inherited: 0x00)
struct F*6b88783d53 {
	struct FName OldGameName; // 0x00(0x08)
	struct FName NewGameName; // 0x08(0x08)
};

// ScriptStruct Engine.*a6eb451152
// Size: 0x30 (Inherited: 0x00)
struct F*a6eb451152 {
	uint64 Key; // 0x00(0x08)
	struct FString *a70200449e; // 0x08(0x10)
	struct FColor DisplayColor; // 0x18(0x04)
	float *c11ab214b5; // 0x1c(0x04)
	float *e880e3dc64; // 0x20(0x04)
	struct FVector2D *09bd6aaf74; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*7c4552fed2
// Size: 0x28 (Inherited: 0x00)
struct F*7c4552fed2 {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FString Comment; // 0x18(0x10)
};

// ScriptStruct Engine.*73d1c21239
// Size: 0x28 (Inherited: 0x00)
struct F*73d1c21239 {
	struct FString StatName; // 0x00(0x10)
	struct TArray<struct F*1ae944a9bf> ColorMap; // 0x10(0x10)
	char DisableBlend : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*1ae944a9bf
// Size: 0x08 (Inherited: 0x00)
struct F*1ae944a9bf {
	float In; // 0x00(0x04)
	struct FColor Out; // 0x04(0x04)
};

// ScriptStruct Engine.WorldContext
// Size: 0x2a8 (Inherited: 0x00)
struct FWorldContext {
	struct TArray<struct F*f189697845> *22f89144d6; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)
	struct UGameInstance* *55c38de05e; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct U*7c448e30ae*> *55d92776e4; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct U*8ea0475d8b* *8ea0475d8b; // 0x50(0x08)
	char pad_58[0xd0]; // 0x58(0xd0)
	struct UGameViewportClient* GameViewport; // 0x128(0x08)
	struct FURL *e2dd2c7e65; // 0x130(0x70)
	char pad_1A0[0x10]; // 0x1a0(0x10)
	struct TArray<struct ULevel*> *fdfac597be; // 0x1b0(0x10)
	char pad_1C0[0x10]; // 0x1c0(0x10)
	struct TArray<struct F*9dcd338c5a> PackagesToFullyLoad; // 0x1d0(0x10)
	struct FURL *83f990b9f5; // 0x1e0(0x70)
	char pad_250[0x38]; // 0x250(0x38)
	struct TArray<struct F*248f357491> *959985156a; // 0x288(0x10)
	char pad_298[0x10]; // 0x298(0x10)
};

// ScriptStruct Engine.*248f357491
// Size: 0x10 (Inherited: 0x00)
struct F*248f357491 {
	struct UNetDriver* NetDriver; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.*9dcd338c5a
// Size: 0x38 (Inherited: 0x00)
struct F*9dcd338c5a {
	enum class *570c79a6fc *17b85a6b94; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Tag; // 0x08(0x10)
	struct TArray<struct FName> *8846b82165; // 0x18(0x10)
	struct TArray<struct UObject*> *587a0a9756; // 0x28(0x10)
};

// ScriptStruct Engine.*f189697845
// Size: 0x10 (Inherited: 0x00)
struct F*f189697845 {
	struct FName PackageName; // 0x00(0x08)
	char *89472716a9 : 1; // 0x08(0x01)
	char *5cfd3b1dee : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	uint32 LODIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*e13e3afa12
// Size: 0x18 (Inherited: 0x00)
struct F*e13e3afa12 {
	struct FName DefName; // 0x00(0x08)
	struct FName DriverClassName; // 0x08(0x08)
	struct FName DriverClassNameFallback; // 0x10(0x08)
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x1c8 (Inherited: 0x00)
struct FRuntimeCurveLinearColor {
	struct FRichCurve *7e220abdd9[0x04]; // 0x00(0x1c0)
	struct U*594e4d7ca9* ExternalCurve; // 0x1c0(0x08)
};

// ScriptStruct Engine.*974b5789ab
// Size: 0x10 (Inherited: 0x00)
struct F*974b5789ab {
	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// Size: 0x20 (Inherited: 0x00)
struct FPreviewMeshCollectionEntry {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x20)
};

// ScriptStruct Engine.*d72e9b9c3a
// Size: 0x04 (Inherited: 0x00)
struct F*d72e9b9c3a {
	bool *d999a98e31; // 0x00(0x01)
	bool *a520a0319b; // 0x01(0x01)
	bool *a6657b8ef1; // 0x02(0x01)
	bool *413bcf4f94; // 0x03(0x01)
};

// ScriptStruct Engine.*d343e03b2f
// Size: 0x24 (Inherited: 0x00)
struct F*d343e03b2f {
	struct FVector2D UVScale; // 0x00(0x08)
	struct FVector2D *5b3fcf1428; // 0x08(0x08)
	struct FVector Tangent; // 0x10(0x0c)
	float *fc74cf2db8; // 0x1c(0x04)
	int32 *74dd3d59fa; // 0x20(0x04)
};

// ScriptStruct Engine.*7be435a022
// Size: 0x20 (Inherited: 0x00)
struct F*7be435a022 {
	struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x10)
	struct F*4a161b0907 Rules; // 0x10(0x10)
};

// ScriptStruct Engine.*143431c4d5
// Size: 0x20 (Inherited: 0x00)
struct F*143431c4d5 {
	struct FString Old; // 0x00(0x10)
	struct FString New; // 0x10(0x10)
};

// ScriptStruct Engine.*e73312bd8f
// Size: 0x20 (Inherited: 0x00)
struct F*e73312bd8f {
	struct FText DisplayName; // 0x00(0x18)
	int32 MaxChannels; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*a009b7b901
// Size: 0x10 (Inherited: 0x00)
struct F*a009b7b901 {
	enum class EPhysicalSurface Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.*98b4e18bfc
// Size: 0x10 (Inherited: 0x00)
struct F*98b4e18bfc {
	struct FName *c988391cfe; // 0x00(0x08)
	struct FVector2D *632ee6d6f3; // 0x08(0x08)
};

// ScriptStruct Engine.*bb642d4e78
// Size: 0x38 (Inherited: 0x00)
struct F*bb642d4e78 {
	struct FDialogueContext Context; // 0x00(0x18)
	struct USoundWave* SoundWave; // 0x18(0x08)
	struct FString *504e210bce; // 0x20(0x10)
	struct U*ca3a75f111* Proxy; // 0x30(0x08)
};

// ScriptStruct Engine.*1273267ee1
// Size: 0x38 (Inherited: 0x28)
struct F*1273267ee1 : FRawDistribution {
	float MinValue; // 0x28(0x04)
	float MaxValue; // 0x2c(0x04)
	struct U*ca563f945f* Distribution; // 0x30(0x08)
};

// ScriptStruct Engine.RawDistributionVector
// Size: 0x50 (Inherited: 0x28)
struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x28(0x04)
	float MaxValue; // 0x2c(0x04)
	struct FVector *6cd8658cac; // 0x30(0x0c)
	struct FVector *947b82202c; // 0x3c(0x0c)
	struct U*31b44bea3d* Distribution; // 0x48(0x08)
};

// ScriptStruct Engine.*36043f6ded
// Size: 0x18 (Inherited: 0x00)
struct F*36043f6ded {
	struct FName ComponentPropertyName; // 0x00(0x08)
	struct FName DelegatePropertyName; // 0x08(0x08)
	struct FName *09263ee7e0; // 0x10(0x08)
};

// ScriptStruct Engine.*3a02d66368
// Size: 0x04 (Inherited: 0x00)
struct F*3a02d66368 {
	char *a21008ad1d : 1; // 0x00(0x01)
	char *f0b9e0d9c0 : 1; // 0x00(0x01)
	char *01f8a5b18d : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*5bedd29744
// Size: 0x20 (Inherited: 0x04)
struct F*5bedd29744 : F*3a02d66368 {
	char pad_4[0x4]; // 0x04(0x04)
	struct FName InputActionName; // 0x08(0x08)
	enum class *5553c9dea0 *9c90bf1de6; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FName *09263ee7e0; // 0x18(0x08)
};

// ScriptStruct Engine.*4831d7e4da
// Size: 0x18 (Inherited: 0x04)
struct F*4831d7e4da : F*3a02d66368 {
	char pad_4[0x4]; // 0x04(0x04)
	struct FName InputAxisName; // 0x08(0x08)
	struct FName *09263ee7e0; // 0x10(0x08)
};

// ScriptStruct Engine.*700afa9b36
// Size: 0x28 (Inherited: 0x04)
struct F*700afa9b36 : F*3a02d66368 {
	char pad_4[0x4]; // 0x04(0x04)
	struct FKey AxisKey; // 0x08(0x18)
	struct FName *09263ee7e0; // 0x20(0x08)
};

// ScriptStruct Engine.*7f074fb041
// Size: 0x38 (Inherited: 0x04)
struct F*7f074fb041 : F*3a02d66368 {
	char pad_4[0x4]; // 0x04(0x04)
	struct F*4396e9090b *4396e9090b; // 0x08(0x20)
	enum class *5553c9dea0 *9c90bf1de6; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FName *09263ee7e0; // 0x30(0x08)
};

// ScriptStruct Engine.*cbf0d20804
// Size: 0x10 (Inherited: 0x04)
struct F*cbf0d20804 : F*3a02d66368 {
	enum class *5553c9dea0 *9c90bf1de6; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName *09263ee7e0; // 0x08(0x08)
};

// ScriptStruct Engine.*cb0e61969e
// Size: 0x20 (Inherited: 0x00)
struct F*cb0e61969e {
	struct UEdGraph* MacroGraph; // 0x00(0x08)
	struct UBlueprint* *1995a1654e; // 0x08(0x08)
	struct FGuid *ba22c76acf; // 0x10(0x10)
};

// ScriptStruct Engine.*1e7fb034f9
// Size: 0x108 (Inherited: 0x100)
struct F*1e7fb034f9 : F*8f474d2613 {
	struct UEdGraphNode* *d4d6bb958e; // 0x100(0x08)
};

// ScriptStruct Engine.*8f474d2613
// Size: 0x100 (Inherited: 0x00)
struct F*8f474d2613 {
	char pad_0[0x8]; // 0x00(0x08)
	struct FText *2d4e9f5ff1; // 0x08(0x18)
	struct FText TooltipDescription; // 0x20(0x18)
	struct FText Category; // 0x38(0x18)
	struct FText Keywords; // 0x50(0x18)
	int32 Grouping; // 0x68(0x04)
	int32 SectionID; // 0x6c(0x04)
	struct TArray<struct FString> *fae746b47a; // 0x70(0x10)
	struct TArray<struct FString> *85346d4749; // 0x80(0x10)
	struct TArray<struct FString> *45fa917c1f; // 0x90(0x10)
	struct TArray<struct FString> *b88c16d164; // 0xa0(0x10)
	struct TArray<struct FString> *2ed9e7627b; // 0xb0(0x10)
	struct TArray<struct FString> *240090d001; // 0xc0(0x10)
	struct TArray<struct FString> *e7a255ffcb; // 0xd0(0x10)
	struct TArray<struct FString> *c0c6ca1b7b; // 0xe0(0x10)
	struct FString *e659b31043; // 0xf0(0x10)
};

// ScriptStruct Engine.*ee3b57f9f0
// Size: 0x10 (Inherited: 0x00)
struct F*ee3b57f9f0 {
	struct FName *ebe97e2081; // 0x00(0x08)
	int32 BeginIndex; // 0x08(0x04)
	int32 EndIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.*a6c8b92ca0
// Size: 0xb0 (Inherited: 0x00)
struct F*a6c8b92ca0 {
	struct FString FontName; // 0x00(0x10)
	float Height; // 0x10(0x04)
	char *415ac8e527 : 1; // 0x14(0x01)
	char *b8c00a44ef : 1; // 0x14(0x01)
	char *cd778fd425 : 1; // 0x14(0x01)
	char *b7907c353b : 1; // 0x14(0x01)
	char *f54d156e3a : 1; // 0x14(0x01)
	char pad_14_5 : 3; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	enum class *4e621568f3 *97047ea0ab; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString *f8fce29b7d; // 0x20(0x10)
	struct FString *f596ea2b85; // 0x30(0x10)
	struct FString *c2d15c5437; // 0x40(0x10)
	struct FString *7695e7411b; // 0x50(0x10)
	char *df8ceb9706 : 1; // 0x60(0x01)
	char *12785caa39 : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FLinearColor ForegroundColor; // 0x64(0x10)
	char *3cf416d8b7 : 1; // 0x74(0x01)
	char pad_74_1 : 7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	int32 *b10f6e141f; // 0x78(0x04)
	int32 *aa899d0a1d; // 0x7c(0x04)
	int32 *3a26c5a7f0; // 0x80(0x04)
	int32 *5e5cc3f532; // 0x84(0x04)
	int32 *8f1d502d27; // 0x88(0x04)
	int32 *5ded695895; // 0x8c(0x04)
	int32 *9d19e185fb; // 0x90(0x04)
	int32 *1b53398bb2; // 0x94(0x04)
	char *b375c5a57b : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32 Kerning; // 0x9c(0x04)
	char bUseDistanceFieldAlpha : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32 *e3bfe1883f; // 0xa4(0x04)
	float *ab8cce2174; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.*ac2c6700bf
// Size: 0x18 (Inherited: 0x00)
struct F*ac2c6700bf {
	int32 *3829bd4528; // 0x00(0x04)
	int32 *359512e36e; // 0x04(0x04)
	int32 *86df364fc3; // 0x08(0x04)
	int32 *25fb9d0a2f; // 0x0c(0x04)
	bool *bb0a06ff34; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *db6f264f9d; // 0x14(0x04)
};

// ScriptStruct Engine.*732fb368a5
// Size: 0x18 (Inherited: 0x00)
struct F*732fb368a5 {
	struct U*2b7e68107f* *221ad92b92; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size: 0xf0 (Inherited: 0x00)
struct FHapticFeedbackDetails_Curve {
	struct FRuntimeFloatCurve Frequency; // 0x00(0x78)
	struct FRuntimeFloatCurve *12327b9b8c; // 0x78(0x78)
};

// ScriptStruct Engine.*0f3b4987f4
// Size: 0x80 (Inherited: 0x00)
struct F*0f3b4987f4 {
	struct UClass* ComponentClass; // 0x00(0x08)
	struct UActorComponent* *930a480bfe; // 0x08(0x08)
	struct FComponentKey ComponentKey; // 0x10(0x20)
	struct F*76eff26226 *8d069c690c; // 0x30(0x50)
};

// ScriptStruct Engine.ComponentKey
// Size: 0x20 (Inherited: 0x00)
struct FComponentKey {
	struct UClass* *177ea19d40; // 0x00(0x08)
	struct FName SCSVariableName; // 0x08(0x08)
	struct FGuid AssociatedGuid; // 0x10(0x10)
};

// ScriptStruct Engine.*a2fb1c065f
// Size: 0x30 (Inherited: 0x00)
struct F*a2fb1c065f {
	struct FString TabName; // 0x00(0x10)
	struct TArray<struct F*c5d5313435> Curves; // 0x10(0x10)
	float *93fed6f157; // 0x20(0x04)
	float *70293ba6cb; // 0x24(0x04)
	float *a1d692c2af; // 0x28(0x04)
	float *65a4f9e74d; // 0x2c(0x04)
};

// ScriptStruct Engine.*c5d5313435
// Size: 0x38 (Inherited: 0x00)
struct F*c5d5313435 {
	struct UObject* *cd7c902f69; // 0x00(0x08)
	struct FColor *492c2839fc; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString CurveName; // 0x10(0x10)
	int32 *036aa73eff; // 0x20(0x04)
	int32 *3019d2b024; // 0x24(0x04)
	int32 *82df983b43; // 0x28(0x04)
	int32 *dbb19dfe33; // 0x2c(0x04)
	float *103e60f83e; // 0x30(0x04)
	float *8ac9de62df; // 0x34(0x04)
};

// ScriptStruct Engine.*8f52e3c12d
// Size: 0x18 (Inherited: 0x00)
struct F*8f52e3c12d {
	struct U*681140b349* Group; // 0x00(0x08)
	struct U*a7f7b58370* Track; // 0x08(0x08)
	int32 *3ee8dacf1f; // 0x10(0x04)
	float *bce8129648; // 0x14(0x04)
};

// ScriptStruct Engine.*d6d1d4287f
// Size: 0x30 (Inherited: 0x00)
struct F*d6d1d4287f {
	struct UClass* PawnClass; // 0x00(0x08)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	struct APawn* *43934e0a36; // 0x28(0x08)
};

// ScriptStruct Engine.*dcedc7e6ba
// Size: 0x28 (Inherited: 0x00)
struct F*dcedc7e6ba {
	struct FString GroupName; // 0x00(0x10)
	struct TArray<int32> *75ca779e3d; // 0x10(0x10)
	char *31e89c6869 : 1; // 0x20(0x01)
	char *6a069b55c2 : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.*bb3a3075b1
// Size: 0x20 (Inherited: 0x00)
struct F*bb3a3075b1 {
	struct UClass* *b31dd5ac71; // 0x00(0x08)
	struct FString *acc727df89; // 0x08(0x10)
	int32 *7a0311f6e7; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*2bf753a285
// Size: 0x08 (Inherited: 0x00)
struct F*2bf753a285 {
	float Time; // 0x00(0x04)
	char Value : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*17beb675f2
// Size: 0x18 (Inherited: 0x00)
struct F*17beb675f2 {
	float Time; // 0x00(0x04)
	float *60d06321e8; // 0x04(0x04)
	struct FName *78f5b2731c; // 0x08(0x08)
	int32 ShotNumber; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*757b12dab9
// Size: 0x10 (Inherited: 0x00)
struct F*757b12dab9 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName EventName; // 0x08(0x08)
};

// ScriptStruct Engine.*24dc9b4692
// Size: 0x20 (Inherited: 0x00)
struct F*24dc9b4692 {
	float StartTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* AnimSeq; // 0x08(0x08)
	float *8cd2088e2e; // 0x10(0x04)
	float *4a4da1731c; // 0x14(0x04)
	float AnimPlayRate; // 0x18(0x04)
	char bLooping : 1; // 0x1c(0x01)
	char *2ca662263e : 1; // 0x1c(0x01)
	char pad_1C_2 : 6; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*fc54882100
// Size: 0x10 (Inherited: 0x00)
struct F*fc54882100 {
	struct TArray<struct F*542062ba73> Points; // 0x00(0x10)
};

// ScriptStruct Engine.*542062ba73
// Size: 0x10 (Inherited: 0x00)
struct F*542062ba73 {
	struct FName GroupName; // 0x00(0x08)
	float Time; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*c2c6b9f064
// Size: 0x0c (Inherited: 0x00)
struct F*c2c6b9f064 {
	float Time; // 0x00(0x04)
	float Duration; // 0x04(0x04)
	int32 ClipIDNumber; // 0x08(0x04)
};

// ScriptStruct Engine.*24709f3a21
// Size: 0x08 (Inherited: 0x00)
struct F*24709f3a21 {
	float Time; // 0x00(0x04)
	enum class *43105497d2 ToggleAction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.*f81faddf4c
// Size: 0x18 (Inherited: 0x00)
struct F*f81faddf4c {
	float Time; // 0x00(0x04)
	float Volume; // 0x04(0x04)
	float Pitch; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct USoundBase* Sound; // 0x10(0x08)
};

// ScriptStruct Engine.*841bb4fa70
// Size: 0x08 (Inherited: 0x00)
struct F*841bb4fa70 {
	float Time; // 0x00(0x04)
	enum class *b780822e05 Action; // 0x04(0x01)
	enum class *daf0cacf0d *8521e26185; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct Engine.*dc21fcdb72
// Size: 0x38 (Inherited: 0x00)
struct F*dc21fcdb72 {
	struct U*7383374044* Container; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct Engine.*9909879c11
// Size: 0x110 (Inherited: 0x00)
struct F*9909879c11 {
	struct FName *ebe97e2081; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FIntPoint Size; // 0x40(0x08)
	struct FIntPoint *64ddaf51a4; // 0x48(0x08)
	char *6f5c0f2ee9 : 1; // 0x50(0x01)
	char *aa8f997a41 : 1; // 0x50(0x01)
	char *acb5c6b643 : 1; // 0x50(0x01)
	char *7f802f5da5 : 1; // 0x50(0x01)
	char pad_50_4 : 4; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FName> *8fa93ff5db; // 0x58(0x10)
	struct TArray<bool> *c479481aa7; // 0x68(0x10)
	struct TArray<struct U*36c3e95555*> *a1c78ed6e9; // 0x78(0x10)
	char pad_88[0x88]; // 0x88(0x88)
};

// ScriptStruct Engine.*efd6eb22fe
// Size: 0x10 (Inherited: 0x00)
struct F*efd6eb22fe {
	struct UClass* Type; // 0x00(0x08)
	int32 Total; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*b991655971
// Size: 0x20 (Inherited: 0x00)
struct F*b991655971 {
	struct FVector *95a8c43404; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInterface* DecalMaterial; // 0x10(0x08)
	int32 SortOrder; // 0x18(0x04)
	bool *718d370606; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.*a42277f8f7
// Size: 0x30 (Inherited: 0x00)
struct F*a42277f8f7 {
	struct FName *ebe97e2081; // 0x00(0x08)
	struct F*bd5307dec7 Volume; // 0x08(0x24)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.*70531ce4c1
// Size: 0x40 (Inherited: 0x00)
struct F*70531ce4c1 {
	struct FName *ebe97e2081; // 0x00(0x08)
	uint32 TypeId; // 0x08(0x04)
	char *57b2ff5b6d : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Engine.*26f0091992
// Size: 0x08 (Inherited: 0x00)
struct F*26f0091992 {
	struct ULevelBlockType* LevelBlockType; // 0x00(0x08)
};

// ScriptStruct Engine.*a84c0f7964
// Size: 0x50 (Inherited: 0x00)
struct F*a84c0f7964 {
	struct FName *ebe97e2081; // 0x00(0x08)
	struct U*d5389daf00* Data; // 0x08(0x08)
	struct FVector2D Offset; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Transform; // 0x20(0x30)
};

// ScriptStruct Engine.*4f1611d65e
// Size: 0x40 (Inherited: 0x00)
struct F*4f1611d65e {
	struct FName *ebe97e2081; // 0x00(0x08)
	struct U*b1a1661ef4* Data; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Engine.*1824d11c0e
// Size: 0xb0 (Inherited: 0x00)
struct F*1824d11c0e {
	struct FString *ebe97e2081; // 0x00(0x10)
	struct FTransform *bb22ab1b24; // 0x10(0x30)
	struct FString *79adc7a89f; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
	struct TMap<struct FVector, struct FString> *34ac53adbd; // 0x58(0x50)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct Engine.*9bc6036ee9
// Size: 0xa0 (Inherited: 0x00)
struct F*9bc6036ee9 {
	struct FString *ebe97e2081; // 0x00(0x10)
	struct FTransform *bb22ab1b24; // 0x10(0x30)
	struct FString *63a191138c; // 0x40(0x10)
	struct FTransform *7976e5aa55; // 0x50(0x30)
	char pad_80[0x20]; // 0x80(0x20)
};

// ScriptStruct Engine.*c4cdfffcb9
// Size: 0x60 (Inherited: 0x00)
struct F*c4cdfffcb9 {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.*09b56f2140
// Size: 0xb0 (Inherited: 0x00)
struct F*09b56f2140 {
	char *d10b3fdf69 : 1; // 0x00(0x01)
	char *7bd5d46e15 : 1; // 0x00(0x01)
	char *693171bfbd : 1; // 0x00(0x01)
	char *3e1300def5 : 1; // 0x00(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x00(0x01)
	char LightingChannel0 : 1; // 0x00(0x01)
	char LightingChannel1 : 1; // 0x00(0x01)
	char *859de8bd70 : 1; // 0x00(0x01)
	char *d31764f4d1 : 1; // 0x01(0x01)
	char *7e66ded1bb : 1; // 0x01(0x01)
	char *b64cb396dd : 1; // 0x01(0x01)
	char bUseInverseSquaredFalloff : 1; // 0x01(0x01)
	char pad_1_4 : 4; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UMaterialInterface* *adedb44a2a; // 0x08(0x20)
	struct U*eafb25fbf7* IESTexture; // 0x28(0x20)
	float Temperature; // 0x48(0x04)
	float MaxDrawDistance; // 0x4c(0x04)
	float *e05b544017; // 0x50(0x04)
	float *7d9736fe3a; // 0x54(0x04)
	float *bd9fde3137; // 0x58(0x04)
	float *1e413e1a51; // 0x5c(0x04)
	float ShadowSharpen; // 0x60(0x04)
	float *f8dd160d00; // 0x64(0x04)
	struct FVector *d1faefb6c8; // 0x68(0x0c)
	float *4750d5bea7; // 0x74(0x04)
	float *4a80b7b789; // 0x78(0x04)
	float *23fe580282; // 0x7c(0x04)
	float *770cc6f3ea; // 0x80(0x04)
	float BloomThreshold; // 0x84(0x04)
	struct FColor *c607e24143; // 0x88(0x04)
	float RayStartOffsetDepthScale; // 0x8c(0x04)
	float AttenuationRadius; // 0x90(0x04)
	float LightFalloffExponent; // 0x94(0x04)
	float *c354425588; // 0x98(0x04)
	float *4a66756ec2; // 0x9c(0x04)
	float InnerConeAngle; // 0xa0(0x04)
	float OuterConeAngle; // 0xa4(0x04)
	float *5bfe3d221f; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.*0b58def2be
// Size: 0x50 (Inherited: 0x00)
struct F*0b58def2be {
	struct FTransform Transform; // 0x00(0x30)
	float *8312e37262; // 0x30(0x04)
	float Alpha; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector4 CustomData; // 0x40(0x10)
};

// ScriptStruct Engine.*ee5b2c43a7
// Size: 0x78 (Inherited: 0x00)
struct F*ee5b2c43a7 {
	struct UStaticMesh* Mesh; // 0x00(0x20)
	struct TArray<struct UMaterialInterface*> *feafc6784b; // 0x20(0x10)
	char pad_30[0x1c]; // 0x30(0x1c)
	float CachedMaxDrawDistance; // 0x4c(0x04)
	char bImportantMesh : 1; // 0x50(0x01)
	char *ca5d9e19b4 : 1; // 0x50(0x01)
	char LightingChannel0 : 1; // 0x50(0x01)
	char LightingChannel1 : 1; // 0x50(0x01)
	char *859de8bd70 : 1; // 0x50(0x01)
	char *e39f7d4c53 : 1; // 0x50(0x01)
	char *4dd2f3ab34 : 1; // 0x50(0x01)
	char pad_50_7 : 1; // 0x50(0x01)
	enum class *a6cf5bae1a IndoorOutdoorMask; // 0x51(0x01)
	enum class ECollisionChannel *bd81a4acef; // 0x52(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x53(0x01)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct F*2008898a6b> *156ae01dcc; // 0x58(0x10)
	struct FName CollisionProfileName; // 0x68(0x08)
	int32 MeshSize; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Engine.*61602cdb42
// Size: 0x40 (Inherited: 0x00)
struct F*61602cdb42 {
	struct APlayerController* LocalPC; // 0x00(0x08)
	struct FName MessageType; // 0x08(0x08)
	int32 *f028b4f9c5; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString *70d10b9312; // 0x18(0x10)
	struct APlayerState* *6fffc41e21; // 0x28(0x08)
	struct APlayerState* *27730d62fe; // 0x30(0x08)
	struct UObject* *bccb5c232e; // 0x38(0x08)
};

// ScriptStruct Engine.*9087bb1d5f
// Size: 0x48 (Inherited: 0x00)
struct F*9087bb1d5f {
	struct FString InputName; // 0x00(0x10)
	struct FExpressionInput Input; // 0x10(0x38)
};

// ScriptStruct Engine.*c000b301a5
// Size: 0x40 (Inherited: 0x00)
struct F*c000b301a5 {
	struct U*5ac2273bfb* *36e10108dc; // 0x00(0x08)
	struct FGuid *7abb4a44ed; // 0x08(0x10)
	struct FExpressionOutput Output; // 0x18(0x28)
};

// ScriptStruct Engine.*552e2e57dc
// Size: 0x50 (Inherited: 0x00)
struct F*552e2e57dc {
	struct U*9927b5b33e* ExpressionInput; // 0x00(0x08)
	struct FGuid *550f3f9f62; // 0x08(0x10)
	struct FExpressionInput Input; // 0x18(0x38)
};

// ScriptStruct Engine.*391c978835
// Size: 0x128 (Inherited: 0x00)
struct F*391c978835 {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput Weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput *cbb4145d6d; // 0x80(0x38)
	struct FExpressionInput DiffuseTexture; // 0xb8(0x38)
	struct FExpressionInput NormalTexture; // 0xf0(0x38)
};

// ScriptStruct Engine.*943f7ed9d9
// Size: 0x128 (Inherited: 0x00)
struct F*943f7ed9d9 {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput Weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput DiffuseTexture; // 0x80(0x38)
	struct FExpressionInput NormalTexture; // 0xb8(0x38)
	struct FExpressionInput Specular; // 0xf0(0x38)
};

// ScriptStruct Engine.*387a32966b
// Size: 0xf0 (Inherited: 0x00)
struct F*387a32966b {
	struct FString LayerName; // 0x00(0x10)
	struct FExpressionInput Weight; // 0x10(0x38)
	struct FExpressionInput UV; // 0x48(0x38)
	struct FExpressionInput DiffuseTexture; // 0x80(0x38)
	struct FExpressionInput NormalTexture; // 0xb8(0x38)
};

// ScriptStruct Engine.*39db2b6e80
// Size: 0x18 (Inherited: 0x00)
struct F*39db2b6e80 {
	struct FGuid *1089ccbf97; // 0x00(0x10)
	struct UMaterialParameterCollection* *e6e8a556b3; // 0x10(0x08)
};

// ScriptStruct Engine.*09bdd24193
// Size: 0x18 (Inherited: 0x00)
struct F*09bdd24193 {
	struct FGuid *1089ccbf97; // 0x00(0x10)
	struct UMaterialFunction* Function; // 0x10(0x08)
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x24 (Inherited: 0x00)
struct FMaterialInstanceBasePropertyOverrides {
	bool bOverride_OpacityMaskClipValue; // 0x00(0x01)
	bool bOverride_BlendMode; // 0x01(0x01)
	bool bOverride_ShadingModel; // 0x02(0x01)
	bool bOverride_PrepassMasked; // 0x03(0x01)
	bool bOverride_DitheredLODTransition; // 0x04(0x01)
	bool bOverride_TwoSided; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float OpacityMaskClipValue; // 0x08(0x04)
	enum class EBlendMode BlendMode; // 0x0c(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	char PrepassMasked : 1; // 0x10(0x01)
	char TwoSided : 1; // 0x10(0x01)
	char DitheredLODTransition : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	bool bOverride_bApplyMaterialClipVolumes; // 0x14(0x01)
	bool bOverride_MaterialClipVolumeTypes; // 0x15(0x01)
	bool bOverride_MaterialClipVolumeImportance; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	char bApplyMaterialClipVolumes : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct F*992675a4e8 MaterialClipVolumeTypes; // 0x1c(0x04)
	enum class *2c04465ccd MaterialClipVolumeImportance; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct Engine.*c2d53d1c03
// Size: 0x28 (Inherited: 0x00)
struct F*c2d53d1c03 {
	struct FName ParameterName; // 0x00(0x08)
	struct FLinearColor ParameterValue; // 0x08(0x10)
	struct FGuid *8f84b5e332; // 0x18(0x10)
};

// ScriptStruct Engine.*8a4a1d286a
// Size: 0x20 (Inherited: 0x00)
struct F*8a4a1d286a {
	struct FName ParameterName; // 0x00(0x08)
	struct UTexture* ParameterValue; // 0x08(0x08)
	struct FGuid *8f84b5e332; // 0x10(0x10)
};

// ScriptStruct Engine.*4ce84ba02f
// Size: 0x20 (Inherited: 0x00)
struct F*4ce84ba02f {
	struct FName ParameterName; // 0x00(0x08)
	float ParameterValue; // 0x08(0x04)
	struct FGuid *8f84b5e332; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*a7bbc83ffe
// Size: 0x28 (Inherited: 0x00)
struct F*a7bbc83ffe {
	struct FName ParameterName; // 0x00(0x08)
	struct UFont* FontValue; // 0x08(0x08)
	int32 FontPage; // 0x10(0x04)
	struct FGuid *8f84b5e332; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.*ead729b2e2
// Size: 0x28 (Inherited: 0x18)
struct F*ead729b2e2 : F*95ccaef9a6 {
	struct FLinearColor DefaultValue; // 0x18(0x10)
};

// ScriptStruct Engine.*95ccaef9a6
// Size: 0x18 (Inherited: 0x00)
struct F*95ccaef9a6 {
	struct FName ParameterName; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
};

// ScriptStruct Engine.*5abf103b90
// Size: 0x20 (Inherited: 0x18)
struct F*5abf103b90 : F*95ccaef9a6 {
	float DefaultValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.*5b1244bed2
// Size: 0x18 (Inherited: 0x00)
struct F*5b1244bed2 {
	struct FVector Offset; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)
};

// ScriptStruct Engine.*db04e44ac0
// Size: 0x14 (Inherited: 0x00)
struct F*db04e44ac0 {
	struct FVector Offset; // 0x00(0x0c)
	float Radius; // 0x0c(0x04)
	float Height; // 0x10(0x04)
};

// ScriptStruct Engine.PacketSimulationSettings
// Size: 0x14 (Inherited: 0x00)
struct FPacketSimulationSettings {
	int32 PktLoss; // 0x00(0x04)
	int32 PktOrder; // 0x04(0x04)
	int32 PktDup; // 0x08(0x04)
	int32 PktLag; // 0x0c(0x04)
	int32 PktLagVariance; // 0x10(0x04)
};

// ScriptStruct Engine.*bd2d09f136
// Size: 0x30 (Inherited: 0x00)
struct F*bd2d09f136 {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* Archetype; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
	struct ULevel* Level; // 0x28(0x08)
};

// ScriptStruct Engine.*40d6fa566f
// Size: 0x18 (Inherited: 0x00)
struct F*40d6fa566f {
	struct FString LevelName; // 0x00(0x10)
	uint32 *5b3367c00b; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*b7b64ce1c8
// Size: 0x40 (Inherited: 0x00)
struct F*b7b64ce1c8 {
	struct FName *20f822e2cf; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform *f433f689ad; // 0x10(0x30)
};

// ScriptStruct Engine.*b7ed34810a
// Size: 0x0c (Inherited: 0x00)
struct F*b7ed34810a {
	int32 Count; // 0x00(0x04)
	int32 *f89336d15c; // 0x04(0x04)
	float Time; // 0x08(0x04)
};

// ScriptStruct Engine.*f391bfd93e
// Size: 0x20 (Inherited: 0x00)
struct F*f391bfd93e {
	struct FName ParameterName; // 0x00(0x08)
	char *69f5a77fb7 : 1; // 0x08(0x01)
	char *4186a0051b : 1; // 0x08(0x01)
	char *52d974c52a : 1; // 0x08(0x01)
	char *26c77af67f : 1; // 0x08(0x01)
	char pad_8_4 : 4; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<int32> *1cfc5f2bbb; // 0x10(0x10)
};

// ScriptStruct Engine.*3eddd5fb5f
// Size: 0x18 (Inherited: 0x00)
struct F*3eddd5fb5f {
	struct FString CurveName; // 0x00(0x10)
	struct UObject* *cd7c902f69; // 0x10(0x08)
};

// ScriptStruct Engine.*592bece9b0
// Size: 0x04 (Inherited: 0x00)
struct F*592bece9b0 {
	char *df9c56bf6c : 1; // 0x00(0x01)
	char *6136b9677b : 1; // 0x00(0x01)
	char bLock : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*0b5582c288
// Size: 0x28 (Inherited: 0x00)
struct F*0b5582c288 {
	enum class EParticleEventType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32 Frequency; // 0x04(0x04)
	int32 *e83ac9dc3a; // 0x08(0x04)
	char *bf68be5535 : 1; // 0x0c(0x01)
	char *d7a30d3e57 : 1; // 0x0c(0x01)
	char *d062946136 : 1; // 0x0c(0x01)
	char *815cd32b30 : 1; // 0x0c(0x01)
	char pad_C_4 : 4; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName *fa5855c326; // 0x10(0x08)
	struct TArray<struct U*df0ac3a39d*> *7152c085ab; // 0x18(0x10)
};

// ScriptStruct Engine.*4c1e1de929
// Size: 0x18 (Inherited: 0x00)
struct F*4c1e1de929 {
	struct FName *68b1986acc; // 0x00(0x08)
	struct FVector Offset; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.*e7860b0faf
// Size: 0x04 (Inherited: 0x00)
struct F*e7860b0faf {
	char *d9dd58db4e : 1; // 0x00(0x01)
	char *ee109bcec0 : 1; // 0x00(0x01)
	char *2292a498ce : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.*85b45f808a
// Size: 0x50 (Inherited: 0x00)
struct F*85b45f808a {
	struct FName ParamName; // 0x00(0x08)
	char *2292a498ce : 1; // 0x08(0x01)
	char *f78a3ebd1d : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	enum class *f425f3d965 *ee5edaa906; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	char *e3f3edc033 : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct F*1273267ee1 *ad2dec9a31; // 0x18(0x38)
};

// ScriptStruct Engine.*f0da81d131
// Size: 0x10 (Inherited: 0x00)
struct F*f0da81d131 {
	struct FName TargetName; // 0x00(0x08)
	float *580b816af6; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*8c10d2fd5d
// Size: 0x160 (Inherited: 0x00)
struct F*8c10d2fd5d {
	struct TArray<struct FColor> *3e69f0a985; // 0x00(0x10)
	struct TArray<struct FColor> *c37ef785e2; // 0x10(0x10)
	struct TArray<struct FColor> *87d0a9776d; // 0x20(0x10)
	struct FVector4 ColorScale; // 0x30(0x10)
	struct FVector4 *152b23d6bf; // 0x40(0x10)
	struct FVector4 *60a1b2bed1; // 0x50(0x10)
	struct FVector4 *8fca1d1cd0; // 0x60(0x10)
	struct FVector4 *a6218d2915; // 0x70(0x10)
	struct FVector4 *0f8053998c; // 0x80(0x10)
	struct FVector4 *386622f573; // 0x90(0x10)
	struct FVector4 *f5ecfbdade; // 0xa0(0x10)
	struct FVector *ae9380f93e; // 0xb0(0x0c)
	struct FVector *c4ff17f39e; // 0xbc(0x0c)
	struct FVector *1f9c00bb54; // 0xc8(0x0c)
	struct FVector *ce3d732955; // 0xd4(0x0c)
	struct FVector *36795a3254; // 0xe0(0x0c)
	struct FVector *e39f584e9d; // 0xec(0x0c)
	struct FVector *801af48aca; // 0xf8(0x0c)
	float *bb9cdfd91e; // 0x104(0x04)
	float *ac7c0dace2; // 0x108(0x04)
	float *e21f78553e; // 0x10c(0x04)
	float *ed1f9a98a9; // 0x110(0x04)
	float *33efe3aa49; // 0x114(0x04)
	float *e6d7210e55; // 0x118(0x04)
	float *ed2b510cc8; // 0x11c(0x04)
	float *53b1fa6458; // 0x120(0x04)
	float *67f8831692; // 0x124(0x04)
	float *db62f4305a; // 0x128(0x04)
	float *90dbf8aca4; // 0x12c(0x04)
	float *f60d77e80b; // 0x130(0x04)
	float *9f8c380760; // 0x134(0x04)
	float *ac79cb9388; // 0x138(0x04)
	float *9189b8a572; // 0x13c(0x04)
	float *b9deab831f; // 0x140(0x04)
	enum class *3e769a71ff *812423ae99; // 0x144(0x01)
	enum class *3f95a333e8 *1e84277223; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	struct FVector2D *8d2abf545a; // 0x148(0x08)
	char *9f0bd6f721 : 1; // 0x150(0x01)
	char pad_150_1 : 7; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	float *21138c4628; // 0x154(0x04)
	float *7c2783f083; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
};

// ScriptStruct Engine.*c408766740
// Size: 0x2c0 (Inherited: 0x00)
struct F*c408766740 {
	struct UParticleModuleRequired* *b977c16f5c; // 0x00(0x08)
	struct UParticleModuleSpawn* *01156e8659; // 0x08(0x08)
	struct U*174103af1f* *b91ab1a497; // 0x10(0x08)
	struct TArray<struct UParticleModule*> *d8bc2b5830; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct F*b361dc2799 *d0b7a88583; // 0x30(0x70)
	struct FFloatDistribution VectorFieldScale; // 0xa0(0x28)
	struct FFloatDistribution DragCoefficient; // 0xc8(0x28)
	struct FFloatDistribution *37cfb5e712; // 0xf0(0x28)
	struct FFloatDistribution *971d780c13; // 0x118(0x28)
	struct FVector *ae9380f93e; // 0x140(0x0c)
	struct FVector *0c9549bd69; // 0x14c(0x0c)
	float *631ab9b1f9; // 0x158(0x04)
	struct FVector *c4ff17f39e; // 0x15c(0x0c)
	struct FVector *1f9c00bb54; // 0x168(0x0c)
	struct FVector2D *c029edb8df; // 0x174(0x08)
	float *6dd69be22d; // 0x17c(0x04)
	float *7ac76340c5; // 0x180(0x04)
	int32 *9c0ea1081f; // 0x184(0x04)
	enum class *3e769a71ff *812423ae99; // 0x188(0x01)
	enum class *3f95a333e8 *1e84277223; // 0x189(0x01)
	char pad_18A[0x2]; // 0x18a(0x02)
	char bEnableCollision : 1; // 0x18c(0x01)
	char pad_18C_1 : 7; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	enum class EParticleCollisionMode *bee0f29f88; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	char *9f0bd6f721 : 1; // 0x194(0x01)
	char pad_194_1 : 7; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float *21138c4628; // 0x198(0x04)
	float *7c2783f083; // 0x19c(0x04)
	struct FRawDistributionVector *4848d8097b; // 0x1a0(0x50)
	struct F*1273267ee1 *167ae60c83; // 0x1f0(0x38)
	struct FRawDistributionVector *3346703612; // 0x228(0x50)
	struct F*1273267ee1 *b22d49ce53; // 0x278(0x38)
	char pad_2B0[0x10]; // 0x2b0(0x10)
};

// ScriptStruct Engine.*b361dc2799
// Size: 0x70 (Inherited: 0x00)
struct F*b361dc2799 {
	struct UVectorField* Field; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator *d1010f4b65; // 0x40(0x0c)
	struct FRotator *0f2f980e2e; // 0x4c(0x0c)
	struct FRotator RotationRate; // 0x58(0x0c)
	float Intensity; // 0x64(0x04)
	float *6582773b98; // 0x68(0x04)
	char *36fa4599fb : 1; // 0x6c(0x01)
	char *a265607ff1 : 1; // 0x6c(0x01)
	char *da3ea74fb0 : 1; // 0x6c(0x01)
	char *f52b819104 : 1; // 0x6c(0x01)
	char *76f6ece417 : 1; // 0x6c(0x01)
	char pad_6C_5 : 3; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Engine.*125808131d
// Size: 0x10 (Inherited: 0x00)
struct F*125808131d {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*d932a0d29f
// Size: 0x10 (Inherited: 0x00)
struct F*d932a0d29f {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.*298cd37308
// Size: 0x10 (Inherited: 0x00)
struct F*298cd37308 {
	struct U*1c2e584736* *1c2e584736; // 0x00(0x08)
	float *d721b555b8; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.*deb96acac5
// Size: 0x110 (Inherited: 0x00)
struct F*deb96acac5 {
	struct F*d847dc2ef1 *7fdacde176; // 0x00(0x104)
	char pad_104[0x4]; // 0x104(0x04)
	struct FName ProfileName; // 0x108(0x08)
};

// ScriptStruct Engine.*9ad3af2c58
// Size: 0x10 (Inherited: 0x00)
struct F*9ad3af2c58 {
	struct TArray<DelegateProperty> Delegates; // 0x00(0x10)
};

// ScriptStruct Engine.*f579f33d1f
// Size: 0x40 (Inherited: 0x00)
struct F*f579f33d1f {
	struct FString Identifier; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString *3c2a8a78e6; // 0x20(0x10)
	struct FString DisplayPrice; // 0x30(0x10)
};

// ScriptStruct Engine.*7f68d80531
// Size: 0x30 (Inherited: 0x00)
struct F*7f68d80531 {
	struct TArray<bool> Data; // 0x00(0x10)
	struct FString GroupName; // 0x10(0x10)
	struct FString *5ae60e6888; // 0x20(0x10)
};

// ScriptStruct Engine.*1e26811f8e
// Size: 0x28 (Inherited: 0x00)
struct F*1e26811f8e {
	struct FName Node; // 0x00(0x08)
	struct F*c87034f370 Constraints[0x02]; // 0x08(0x20)
};

// ScriptStruct Engine.*c87034f370
// Size: 0x10 (Inherited: 0x00)
struct F*c87034f370 {
	struct TArray<struct F*f79cc09267> *cd1edce1bc; // 0x00(0x10)
};

// ScriptStruct Engine.*f79cc09267
// Size: 0x18 (Inherited: 0x00)
struct F*f79cc09267 {
	enum class EConstraintTransform *405268031c; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FName *1f31d66b0c; // 0x08(0x08)
	float Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.Node
// Size: 0x60 (Inherited: 0x00)
struct FNode {
	struct FName Name; // 0x00(0x08)
	struct FName ParentName; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct FString DisplayName; // 0x40(0x10)
	bool *b19f93c450; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct Engine.DestructibleParameters
// Size: 0x88 (Inherited: 0x00)
struct FDestructibleParameters {
	struct F*01ab7dbe54 DamageParameters; // 0x00(0x1c)
	struct F*2e34a02158 DebrisParameters; // 0x1c(0x2c)
	struct F*0eb9caa4cb AdvancedParameters; // 0x48(0x10)
	struct F*0c9df4c67a SpecialHierarchyDepths; // 0x58(0x14)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FDestructibleDepthParameters> DepthParameters; // 0x70(0x10)
	struct FDestructibleParametersFlag Flags; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct Engine.DestructibleParametersFlag
// Size: 0x04 (Inherited: 0x00)
struct FDestructibleParametersFlag {
	char *eda022a5fe : 1; // 0x00(0x01)
	char *c1c8575e85 : 1; // 0x00(0x01)
	char *11c103a455 : 1; // 0x00(0x01)
	char *d5b0b2d19b : 1; // 0x00(0x01)
	char *7475fc05e5 : 1; // 0x00(0x01)
	char *9a2e63a17e : 1; // 0x00(0x01)
	char *0cb8767e70 : 1; // 0x00(0x01)
	char *3edf6e4af7 : 1; // 0x00(0x01)
	char *4408481ee1 : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.DestructibleDepthParameters
// Size: 0x01 (Inherited: 0x00)
struct FDestructibleDepthParameters {
	enum class *56c0b0b6fe *3e7218a794; // 0x00(0x01)
};

// ScriptStruct Engine.*0c9df4c67a
// Size: 0x14 (Inherited: 0x00)
struct F*0c9df4c67a {
	int32 SupportDepth; // 0x00(0x04)
	int32 MinimumFractureDepth; // 0x04(0x04)
	bool bEnableDebris; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32 DebrisDepth; // 0x0c(0x04)
	int32 EssentialDepth; // 0x10(0x04)
};

// ScriptStruct Engine.*0eb9caa4cb
// Size: 0x10 (Inherited: 0x00)
struct F*0eb9caa4cb {
	float DamageCap; // 0x00(0x04)
	float ImpactVelocityThreshold; // 0x04(0x04)
	float MaxChunkSpeed; // 0x08(0x04)
	float FractureImpulseScale; // 0x0c(0x04)
};

// ScriptStruct Engine.*2e34a02158
// Size: 0x2c (Inherited: 0x00)
struct F*2e34a02158 {
	float DebrisLifetimeMin; // 0x00(0x04)
	float DebrisLifetimeMax; // 0x04(0x04)
	float DebrisMaxSeparationMin; // 0x08(0x04)
	float DebrisMaxSeparationMax; // 0x0c(0x04)
	struct FBox ValidBounds; // 0x10(0x1c)
};

// ScriptStruct Engine.*01ab7dbe54
// Size: 0x1c (Inherited: 0x00)
struct F*01ab7dbe54 {
	float DamageThreshold; // 0x00(0x04)
	float DamageSpread; // 0x04(0x04)
	bool bEnableImpactDamage; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float *7da9c76fc8; // 0x0c(0x04)
	int32 *257bc084c4; // 0x10(0x04)
	bool bCustomImpactResistance; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float *721049d8ca; // 0x18(0x04)
};

// ScriptStruct Engine.*528a6b8e2c
// Size: 0x190 (Inherited: 0x00)
struct F*528a6b8e2c {
	float ScreenSize; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSkeletalMeshOptimizationSettings OptimizationSettings; // 0x08(0x188)
};

// ScriptStruct Engine.*3bb246ee28
// Size: 0x10 (Inherited: 0x00)
struct F*3bb246ee28 {
	int32 MaxCount; // 0x00(0x04)
	char bLimitToOwner : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	enum class EMaxConcurrentResolutionRule ResolutionRule; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float VolumeScale; // 0x0c(0x04)
};

// ScriptStruct Engine.*dbabf904cf
// Size: 0x10 (Inherited: 0x00)
struct F*dbabf904cf {
	float *8a80934f97; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct USoundSubmix* SoundSubmix; // 0x08(0x08)
};

// ScriptStruct Engine.*9266892880
// Size: 0x08 (Inherited: 0x00)
struct F*9266892880 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.SoundGroup
// Size: 0x20 (Inherited: 0x00)
struct FSoundGroup {
	enum class ESoundGroup SoundGroup; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString DisplayName; // 0x08(0x10)
	char bAlwaysDecompressOnLoad : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float DecompressedDuration; // 0x1c(0x04)
};

// ScriptStruct Engine.*9fae74aaf5
// Size: 0x20 (Inherited: 0x00)
struct F*9fae74aaf5 {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 (Inherited: 0x00)
struct FPassiveSoundMixModifier {
	struct USoundMix* SoundMix; // 0x00(0x08)
	float MinVolumeThreshold; // 0x08(0x04)
	float *dabd6620e7; // 0x0c(0x04)
};

// ScriptStruct Engine.*eed253c1ce
// Size: 0x2c (Inherited: 0x00)
struct F*eed253c1ce {
	float Volume; // 0x00(0x04)
	float Pitch; // 0x04(0x04)
	float *716cb231e6; // 0x08(0x04)
	float *b3b1941be3; // 0x0c(0x04)
	float *15c4a12cdd; // 0x10(0x04)
	float *6976513725; // 0x14(0x04)
	float *a67b9484f7; // 0x18(0x04)
	char *bec61891dd : 1; // 0x1c(0x01)
	char *04cd895c2d : 1; // 0x1c(0x01)
	char *079e867634 : 1; // 0x1c(0x01)
	char *dcf740055b : 1; // 0x1c(0x01)
	char *90e5871835 : 1; // 0x1c(0x01)
	char pad_1C_5 : 3; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float *b9a3e48dee; // 0x20(0x04)
	char *838aaadc4c : 1; // 0x24(0x01)
	char *0dc423759f : 1; // 0x24(0x01)
	char pad_24_2 : 6; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	enum class EAudioOutputTarget *c0d6546bb5; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct Engine.*2aa89daf24
// Size: 0x08 (Inherited: 0x00)
struct F*2aa89daf24 {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.*3340ad61dc
// Size: 0x10 (Inherited: 0x00)
struct F*3340ad61dc {
	struct U*56fc89e671* preset; // 0x00(0x08)
	char bBypass : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*35d2d122d8
// Size: 0x18 (Inherited: 0x00)
struct F*35d2d122d8 {
	struct USoundClass* *e6f1a8a451; // 0x00(0x08)
	float *b835288d97; // 0x08(0x04)
	float *b593a1ae1d; // 0x0c(0x04)
	char *dadfd36589 : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float *3797241a60; // 0x14(0x04)
};

// ScriptStruct Engine.AudioEQEffect
// Size: 0x38 (Inherited: 0x00)
struct FAudioEQEffect {
	char pad_0[0x8]; // 0x00(0x08)
	float FrequencyCenter0; // 0x08(0x04)
	float Gain0; // 0x0c(0x04)
	float Bandwidth0; // 0x10(0x04)
	float FrequencyCenter1; // 0x14(0x04)
	float Gain1; // 0x18(0x04)
	float Bandwidth1; // 0x1c(0x04)
	float FrequencyCenter2; // 0x20(0x04)
	float Gain2; // 0x24(0x04)
	float Bandwidth2; // 0x28(0x04)
	float FrequencyCenter3; // 0x2c(0x04)
	float Gain3; // 0x30(0x04)
	float Bandwidth3; // 0x34(0x04)
};

// ScriptStruct Engine.DistanceDatum
// Size: 0x14 (Inherited: 0x00)
struct FDistanceDatum {
	float FadeInDistanceStart; // 0x00(0x04)
	float FadeInDistanceEnd; // 0x04(0x04)
	float FadeOutDistanceStart; // 0x08(0x04)
	float FadeOutDistanceEnd; // 0x0c(0x04)
	float Volume; // 0x10(0x04)
};

// ScriptStruct Engine.*fd1ea2a2f5
// Size: 0x20 (Inherited: 0x00)
struct F*fd1ea2a2f5 {
	struct FName ParameterName; // 0x00(0x08)
	float Default; // 0x08(0x04)
	float *54472afc8d; // 0x0c(0x04)
	float *c045c89dc5; // 0x10(0x04)
	float *18a4249393; // 0x14(0x04)
	float *fdb48bf31a; // 0x18(0x04)
	enum class *7d34940ef1 *941f07403b; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// Size: 0x24 (Inherited: 0x00)
struct FSubsurfaceProfileStruct {
	float ScatterRadius; // 0x00(0x04)
	struct FLinearColor SubsurfaceColor; // 0x04(0x10)
	struct FLinearColor FalloffColor; // 0x14(0x10)
};

// ScriptStruct Engine.TextureLODGroup
// Size: 0x40 (Inherited: 0x00)
struct FTextureLODGroup {
	enum class TextureGroup Group; // 0x00(0x01)
	char pad_1[0xb]; // 0x01(0x0b)
	int32 LODBias; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
	int32 NumStreamedMips; // 0x14(0x04)
	enum class TextureMipGenSettings MipGenSettings; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32 MinLODSize; // 0x1c(0x04)
	int32 MaxLODSize; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FName MinMagFilter; // 0x28(0x08)
	struct FName MipFilter; // 0x30(0x08)
	float *a4fd11200d; // 0x38(0x04)
	enum class ETextureDownscaleOptions *661cf7b608; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Engine.*f5c8deeab7
// Size: 0x18 (Inherited: 0x10)
struct F*f5c8deeab7 : F*6634e09d1d {
	struct U*594e4d7ca9* *594e4d7ca9; // 0x10(0x08)
};

// ScriptStruct Engine.*6634e09d1d
// Size: 0x10 (Inherited: 0x00)
struct F*6634e09d1d {
	struct FName TrackName; // 0x00(0x08)
	bool *b7b7ceb847; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.*a5c715f021
// Size: 0x18 (Inherited: 0x10)
struct F*a5c715f021 : F*6634e09d1d {
	struct U*59a0aeaef9* *59a0aeaef9; // 0x10(0x08)
};

// ScriptStruct Engine.*2d3b7be361
// Size: 0x18 (Inherited: 0x10)
struct F*2d3b7be361 : F*6634e09d1d {
	struct UCurveFloat* CurveFloat; // 0x10(0x08)
};

// ScriptStruct Engine.*b185fedfd6
// Size: 0x18 (Inherited: 0x10)
struct F*b185fedfd6 : F*6634e09d1d {
	struct UCurveFloat* *fe89d11141; // 0x10(0x08)
};

// ScriptStruct Engine.*3b464b2be8
// Size: 0x68 (Inherited: 0x00)
struct F*3b464b2be8 {
	struct UTexture2D* Image1; // 0x00(0x08)
	struct UTexture2D* Image2; // 0x08(0x08)
	struct FVector2D Center; // 0x10(0x08)
	struct FVector2D *9e171684e9; // 0x18(0x08)
	struct FVector2D *81949a3f19; // 0x20(0x08)
	struct FVector2D *a97ba1545a; // 0x28(0x08)
	struct FVector2D *af5173c5d6; // 0x30(0x08)
	struct FKey *8626eb7c50; // 0x38(0x18)
	struct FKey *cafbd2b1c2; // 0x50(0x18)
};

// ScriptStruct Engine.*745e2fc663
// Size: 0x0c (Inherited: 0x00)
struct F*745e2fc663 {
	bool *8ce45127ae; // 0x00(0x01)
	bool *8cd4b1a615; // 0x01(0x01)
	bool *ef1f251fdd; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float SampleRate; // 0x04(0x04)
	float Length; // 0x08(0x04)
};

// ScriptStruct Engine.*217b2a9f62
// Size: 0x20 (Inherited: 0x00)
struct F*217b2a9f62 {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.*17d89e19a2
// Size: 0x20 (Inherited: 0x00)
struct F*17d89e19a2 {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.*f01c81acde
// Size: 0x40 (Inherited: 0x00)
struct F*f01c81acde {
	struct FTransform Value; // 0x00(0x30)
	struct FName Name; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Engine.*3e85d84856
// Size: 0x10 (Inherited: 0x00)
struct F*3e85d84856 {
	struct FColor Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.*0343920669
// Size: 0x18 (Inherited: 0x00)
struct F*0343920669 {
	struct FVector Value; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FName Name; // 0x10(0x08)
};

// ScriptStruct Engine.*f0bef48887
// Size: 0x10 (Inherited: 0x00)
struct F*f0bef48887 {
	float Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Name; // 0x08(0x08)
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// Size: 0x108 (Inherited: 0x30)
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x30(0x18)
	struct FPoseLink Additive; // 0x48(0x18)
	int32 LODThreshold; // 0x60(0x04)
	float ActualAlpha; // 0x64(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float Alpha; // 0x6c(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x70(0x08)
	bool bAlphaBoolEnabled; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x80(0x50)
	struct FName AlphaCurveName; // 0xd0(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xd8(0x30)
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// Size: 0xe0 (Inherited: 0x30)
struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	struct FPoseLink Pose; // 0x30(0x18)
	struct FName CachePoseName; // 0x48(0x08)
	float GlobalWeight; // 0x50(0x04)
	char pad_54[0x8c]; // 0x54(0x8c)
};

// ScriptStruct Engine.AnimNode_StateMachine
// Size: 0xe0 (Inherited: 0x30)
struct FAnimNode_StateMachine : FAnimNode_Base {
	int32 StateMachineIndexInClass; // 0x30(0x04)
	int32 MaxTransitionsPerFrame; // 0x34(0x04)
	bool bSkipFirstUpdateTransition; // 0x38(0x01)
	char pad_39[0xf]; // 0x39(0x0f)
	int32 CurrentState; // 0x48(0x04)
	float ElapsedTime; // 0x4c(0x04)
	char pad_50[0x90]; // 0x50(0x90)
};

// ScriptStruct Engine.*5becb15479
// Size: 0x30 (Inherited: 0x00)
struct F*5becb15479 {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Engine.*805bf50e7d
// Size: 0xd0 (Inherited: 0x00)
struct F*805bf50e7d {
	char pad_0[0x90]; // 0x00(0x90)
	struct UBlendProfile* BlendProfile; // 0x90(0x08)
	char pad_98[0x38]; // 0x98(0x38)
};

// ScriptStruct Engine.AnimNode_SubInput
// Size: 0x68 (Inherited: 0x30)
struct FAnimNode_SubInput : FAnimNode_Base {
	char pad_30[0x38]; // 0x30(0x38)
};

// ScriptStruct Engine.AnimNode_SubInstance
// Size: 0xd8 (Inherited: 0x30)
struct FAnimNode_SubInstance : FAnimNode_Base {
	struct FPoseLink InPose; // 0x30(0x18)
	struct UClass* InstanceClass; // 0x48(0x08)
	bool bShouldReinitialize; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FName ReinitializePropertyName; // 0x58(0x08)
	struct UAnimInstance* InstanceToRun; // 0x60(0x08)
	struct TArray<struct UProperty*> InstanceProperties; // 0x68(0x10)
	struct TArray<struct UProperty*> SubInstanceProperties; // 0x78(0x10)
	struct TArray<struct FName> SourcePropertyNames; // 0x88(0x10)
	struct TArray<struct FName> DestPropertyNames; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)
	struct UBoolProperty* ReinitializeProperty; // 0xc8(0x08)
	char pad_D0[0x8]; // 0xd0(0x08)
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size: 0x78 (Inherited: 0x30)
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	enum class *f21e534b2e DataSource; // 0x30(0x01)
	enum class *9bec988457 EvaluatorMode; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32 FramesToCachePose; // 0x34(0x04)
	char pad_38[0x38]; // 0x38(0x38)
	int32 CacheFramesRemaining; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Engine.AnimNode_TransitionResult
// Size: 0x80 (Inherited: 0x30)
struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x30(0x01)
	char pad_31[0x4f]; // 0x31(0x4f)
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// Size: 0x50 (Inherited: 0x30)
struct FAnimNode_UseCachedPose : FAnimNode_Base {
	struct FPoseLink LinkToCachingNode; // 0x30(0x18)
	struct FName CachePoseName; // 0x48(0x08)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	struct FPoseLink LocalPose; // 0x30(0x18)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size: 0x48 (Inherited: 0x30)
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x30(0x18)
};

// ScriptStruct Engine.*4f9ab803f1
// Size: 0x01 (Inherited: 0x00)
struct F*4f9ab803f1 {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.*3bbfdcfb3f
// Size: 0x68 (Inherited: 0x58)
struct F*3bbfdcfb3f : FIndexedCurve {
	struct TArray<struct F*7b18822847> Keys; // 0x58(0x10)
};

// ScriptStruct Engine.*7b18822847
// Size: 0x10 (Inherited: 0x00)
struct F*7b18822847 {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FName Value; // 0x08(0x08)
};

// ScriptStruct Engine.MemberReference
// Size: 0x38 (Inherited: 0x00)
struct FMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FString *5cb295d720; // 0x08(0x10)
	struct FName MemberName; // 0x18(0x08)
	struct FGuid *37af29c89d; // 0x20(0x10)
	bool *0cbbe33147; // 0x30(0x01)
	bool *f3ec877150; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Engine.*d3a4ec187f
// Size: 0x68 (Inherited: 0x00)
struct F*d3a4ec187f {
	enum class EDrawDebugItemType *505b924fe4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector *25c382562a; // 0x04(0x0c)
	struct FVector *8afe0871d6; // 0x10(0x0c)
	struct FVector Center; // 0x1c(0x0c)
	struct FRotator Rotation; // 0x28(0x0c)
	float Radius; // 0x34(0x04)
	float Size; // 0x38(0x04)
	int32 Segments; // 0x3c(0x04)
	struct FColor Color; // 0x40(0x04)
	bool *9e11efbb0c; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float LifeTime; // 0x48(0x04)
	float Thickness; // 0x4c(0x04)
	struct FString Message; // 0x50(0x10)
	struct FVector2D *09bd6aaf74; // 0x60(0x08)
};

// ScriptStruct Engine.*e996e3be46
// Size: 0x6a0 (Inherited: 0x520)
struct F*e996e3be46 : F*082f93e0ad {
	char pad_520[0x180]; // 0x520(0x180)
};

// ScriptStruct Engine.AnimNode_SingleNode
// Size: 0x58 (Inherited: 0x30)
struct FAnimNode_SingleNode : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x30(0x18)
	char pad_48[0x10]; // 0x48(0x10)
};

// ScriptStruct Engine.*1de803028e
// Size: 0x20 (Inherited: 0x00)
struct F*1de803028e {
	struct FVector4 Plane; // 0x00(0x10)
	float PlaneOffsetOutside; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Engine.*e44350d52c
// Size: 0x70 (Inherited: 0x50)
struct F*e44350d52c : F*84eb8dc310 {
	struct FVector PlaneX; // 0x50(0x0c)
	struct FVector PlaneY; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct Engine.*84eb8dc310
// Size: 0x50 (Inherited: 0x00)
struct F*84eb8dc310 {
	struct FVector4 Plane; // 0x00(0x10)
	struct FVector2D PlaneOffset; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FVector4 PlaneRadiusXYInOut; // 0x20(0x10)
	struct FVector4 FadeRangeXYInOut; // 0x30(0x10)
	struct FVector2D UprightMulAdd; // 0x40(0x08)
	bool bAdditive; // 0x48(0x01)
	enum class *2c04465ccd SoftPlaneImportance; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct Engine.*b0459d8db7
// Size: 0xd0 (Inherited: 0x00)
struct F*b0459d8db7 {
	char pad_0[0x4]; // 0x00(0x04)
	float BlurLevel; // 0x04(0x04)
	float DepthBlurPower; // 0x08(0x04)
	float DepthBlurBlackPoint; // 0x0c(0x04)
	float DepthBlurWhitePoint; // 0x10(0x04)
	float ScopeRadiusNear; // 0x14(0x04)
	float ScopeRadiusFar; // 0x18(0x04)
	float ScopeEllipseRatio; // 0x1c(0x04)
	char bReverseScopeMask : 1; // 0x20(0x01)
	char bReticleExtendTextureBorder : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float ReticleAngularSize; // 0x24(0x04)
	struct FVector2D ReticleTextureCenter; // 0x28(0x08)
	float ReticleGamma; // 0x30(0x04)
	struct FLinearColor ReticleTint; // 0x34(0x10)
	float LensDistortion; // 0x44(0x04)
	float LensCA; // 0x48(0x04)
	float OuterBrightness; // 0x4c(0x04)
	struct FLinearColor LensTint; // 0x50(0x10)
	float ParallaxMovementScale; // 0x60(0x04)
	float ParallaxRadiusScale; // 0x64(0x04)
	struct FVector ScopeCenterNear; // 0x68(0x0c)
	struct FVector ScopeCenterFar; // 0x74(0x0c)
	struct FVector ReticleCenter; // 0x80(0x0c)
	struct FVector ReticleUp; // 0x8c(0x0c)
	struct FVector2D ReticleRect; // 0x98(0x08)
	struct UTexture2D* ReticleTexture; // 0xa0(0x08)
	float ReticleDirtPower; // 0xa8(0x04)
	float ReticleDirtSize; // 0xac(0x04)
	struct UTexture2D* ReticleDirtTexture; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FVector4 ReticleBrightSceneVisibilityMultipliers; // 0xc0(0x10)
};

