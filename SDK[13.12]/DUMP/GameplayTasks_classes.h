// Class GameplayTasks.GameplayTasksComponent
// Size: 0x270 (Inherited: 0x200)
struct UGameplayTasksComponent : UActorComponent {
	char pad_200[0x8]; // 0x200(0x08)
	struct TArray<struct UGameplayTask*> *16d39414ff; // 0x208(0x10)
	struct TArray<struct UGameplayTask*> *4954063f79; // 0x218(0x10)
	char pad_228[0x10]; // 0x228(0x10)
	struct TArray<struct UGameplayTask*> *8a4784bd1d; // 0x238(0x10)
	char pad_248[0x8]; // 0x248(0x08)
	struct FMulticastDelegate OnClaimedResourcesChange; // 0x250(0x10)
	char pad_260[0x10]; // 0x260(0x10)

	void *6fcbf90492(TScriptInterface<struct U*8594efcaca> TaskOwner, struct UGameplayTask* Task, bool Priority, struct TArray<struct UClass*> AdditionalRequiredResources, struct TArray<struct UClass*> AdditionalClaimedResources, enum class EGameplayTaskRunResult ReturnValue); // Function GameplayTasks.GameplayTasksComponent.*6fcbf90492 // Final|Native|Static|Public|BlueprintCallable // @ game+0x629efc4
	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // Final|Native|Public // @ game+0x629f280
};

// Class GameplayTasks.GameplayTask
// Size: 0x70 (Inherited: 0x30)
struct UGameplayTask : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FName *b5bab39c62; // 0x38(0x08)
	char pad_40[0x2]; // 0x40(0x02)
	enum class *377996c843 ResourceOverlapPolicy; // 0x42(0x01)
	char pad_43[0x25]; // 0x43(0x25)
	struct UGameplayTask* *126f42c026; // 0x68(0x08)

	void *620e6f3857(); // Function GameplayTasks.GameplayTask.*620e6f3857 // Final|Native|Public|BlueprintCallable // @ game+0x629eed0
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x20a5d0
	void *860b347183(); // Function GameplayTasks.GameplayTask.*860b347183 // Final|Native|Public|BlueprintCallable // @ game+0x629f294
};

// Class GameplayTasks.*8594efcaca
// Size: 0x30 (Inherited: 0x30)
struct U*8594efcaca : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x40 (Inherited: 0x30)
struct UGameplayTaskResource : UObject {
	int32 ManualResourceID; // 0x30(0x04)
	int8 *bd3694076d; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bManuallySetID : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x70 (Inherited: 0x70)
struct UGameplayTask_ClaimResource : UGameplayTask {
	struct FName *b5bab39c62; // 0x38(0x08)
	enum class *377996c843 ResourceOverlapPolicy; // 0x42(0x01)
	struct UGameplayTask* *126f42c026; // 0x68(0x08)

	void *620e6f3857(); // Function GameplayTasks.GameplayTask.*620e6f3857 // Final|Native|Public|BlueprintCallable // @ game+0x629eed0
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x20a5d0
	void *860b347183(); // Function GameplayTasks.GameplayTask.*860b347183 // Final|Native|Public|BlueprintCallable // @ game+0x629f294
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xb0 (Inherited: 0x70)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastDelegate SUCCESS; // 0x70(0x10)
	struct FMulticastDelegate DidNotSpawn; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
	struct UClass* *ebcb7f219f; // 0xa8(0x08)

	void FinishSpawningActor(); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor // Native|Public|BlueprintCallable // @ game+0x629eee4
	void SpawnActor(); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // Final|Native|Static|Public|HasDefaults|BlueprintCallable // @ game+0x629f2a8
	void BeginSpawningActor(); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor // Native|Public|HasOutParms|BlueprintCallable // @ game+0x629e9ec
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0xa0 (Inherited: 0x70)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastDelegate OnFinished; // 0x70(0x10)
	struct FMulticastDelegate OnTimeExpired; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	void TaskFinishDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_TimeLimitedExecution.TaskFinishDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x20a5d0
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x88 (Inherited: 0x70)
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastDelegate OnFinish; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)

	void *165ba6f982(TScriptInterface<struct U*8594efcaca> TaskOwner, float Time, bool Priority, struct UGameplayTask_WaitDelay* ReturnValue); // Function GameplayTasks.GameplayTask_WaitDelay.*165ba6f982 // Final|Native|Static|Public|BlueprintCallable // @ game+0x629f4a8
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature // MulticastDelegate|Public|Delegate // @ game+0x20a5d0
};

