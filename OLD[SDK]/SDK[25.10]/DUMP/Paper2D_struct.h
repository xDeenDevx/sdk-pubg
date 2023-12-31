// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8 {
	NoCollision,
	FirstFrameCollision,
	EachFrameCollision,
	EFlipbookCollisionMode_MAX,
};

// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8 {
	Top_Left,
	Top_Center,
	Top_Right,
	Center_Left,
	Center_Center,
	Center_Right,
	Bottom_Left,
	Bottom_Center,
	Bottom_Right,
	Custom,
	ESpritePivotMode_MAX,
};

// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8 {
	SourceBoundingBox,
	TightBoundingBox,
	ShrinkWrapped,
	FullyCustom,
	Diced,
	ESpritePolygonMode_MAX,
};

// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8 {
	Box,
	Circle,
	Polygon,
	ESpriteShapeType_MAX,
};

// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8 {
	None,
	Use2DPhysics,
	Use3DPhysics,
	ESpriteCollisionMode_MAX,
};

// Enum Paper2D.*6106a99cb3
enum class *6106a99cb3 : uint8 {
	*0d8ac61850,
	*65de287a2e,
	*c46f2a4966,
	*6106a99cb3_MAX,
};

// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8 {
	Orthogonal,
	IsometricDiamond,
	IsometricStaggered,
	HexagonalStaggered,
	ETileMapProjectionMode_MAX,
};

// ScriptStruct Paper2D.*489eb0edd9
// Size: 0x10 (Inherited: 0x00)
struct F*489eb0edd9 {
	struct UPaperSprite* Sprite; // 0x00(0x08)
	int32 *95d3429708; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*8d05613588
// Size: 0x50 (Inherited: 0x00)
struct F*8d05613588 {
	struct FMatrix Transform; // 0x00(0x40)
	struct UPaperSprite* *580cb8bf9d; // 0x40(0x08)
	struct FColor VertexColor; // 0x48(0x04)
	int32 MaterialIndex; // 0x4c(0x04)
};

// ScriptStruct Paper2D.*a364906e59
// Size: 0x40 (Inherited: 0x00)
struct F*a364906e59 {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Paper2D.SpriteGeometryCollection
// Size: 0x30 (Inherited: 0x00)
struct FSpriteGeometryCollection {
	struct TArray<struct FSpriteGeometryShape> Shapes; // 0x00(0x10)
	enum class ESpritePolygonMode GeometryType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32 *7110c226a2; // 0x14(0x04)
	int32 *26eee16813; // 0x18(0x04)
	bool *5d4214fdfd; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float *c5eda4e98d; // 0x20(0x04)
	float *57e4527e86; // 0x24(0x04)
	float *960b6dee14; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Paper2D.SpriteGeometryShape
// Size: 0x30 (Inherited: 0x00)
struct FSpriteGeometryShape {
	enum class ESpriteShapeType ShapeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> Vertices; // 0x08(0x10)
	struct FVector2D *f8f5b6e789; // 0x18(0x08)
	struct FVector2D *d913ade9cb; // 0x20(0x08)
	float Rotation; // 0x28(0x04)
	bool *9422ab843e; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Paper2D.*c0f76242e4
// Size: 0x40 (Inherited: 0x00)
struct F*c0f76242e4 {
	struct FTransform LocalTransform; // 0x00(0x30)
	struct FName SocketName; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Paper2D.*a024d0a195
// Size: 0x38 (Inherited: 0x00)
struct F*a024d0a195 {
	struct UPaperSprite* *dbc915e6b3; // 0x00(0x20)
	int32 *fea1a050ad; // 0x20(0x04)
	int32 X; // 0x24(0x04)
	int32 Y; // 0x28(0x04)
	int32 Width; // 0x2c(0x04)
	int32 Height; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Paper2D.*678754df30
// Size: 0xd0 (Inherited: 0x00)
struct F*678754df30 {
	struct FVector Destination; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture* BaseTexture; // 0x10(0x08)
	char pad_18[0x30]; // 0x18(0x30)
	struct FColor Color; // 0x48(0x04)
	char pad_4C[0x84]; // 0x4c(0x84)
};

// ScriptStruct Paper2D.*60281822b6
// Size: 0x38 (Inherited: 0x00)
struct F*60281822b6 {
	struct UPaperSprite* *7a55e9c900; // 0x00(0x08)
	struct TArray<struct UPaperSprite*> Body; // 0x08(0x10)
	struct UPaperSprite* *578c41cecc; // 0x18(0x08)
	float *a093fe0aaa; // 0x20(0x04)
	float *cb911a52a4; // 0x24(0x04)
	bool bEnableCollision; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float *c87016c7a6; // 0x2c(0x04)
	int32 DrawOrder; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Paper2D.*fda10ad7e1
// Size: 0x10 (Inherited: 0x00)
struct F*fda10ad7e1 {
	struct UPaperTileSet* TileSet; // 0x00(0x08)
	int32 *5eff97517d; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*3aa79f8329
// Size: 0x10 (Inherited: 0x00)
struct F*3aa79f8329 {
	int32 Left; // 0x00(0x04)
	int32 Top; // 0x04(0x04)
	int32 Right; // 0x08(0x04)
	int32 Bottom; // 0x0c(0x04)
};

// ScriptStruct Paper2D.*0483626ec2
// Size: 0x18 (Inherited: 0x00)
struct F*0483626ec2 {
	struct FString *ec60c2c9ed; // 0x00(0x10)
	int32 *65d9350bd3; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Paper2D.*f278ae409e
// Size: 0x40 (Inherited: 0x00)
struct F*f278ae409e {
	struct FName UserDataName; // 0x00(0x08)
	struct FSpriteGeometryCollection CollisionData; // 0x08(0x30)
	bool *c11f0c30e0[0x04]; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

