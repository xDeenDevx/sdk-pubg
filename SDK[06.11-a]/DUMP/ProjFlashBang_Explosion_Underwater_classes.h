// BlueprintGeneratedClass ProjFlashBang_Explosion_Underwater.ProjFlashBang_Explosion_Underwater_C
// Size: 0x1108 (Inherited: 0x1108)
struct AProjFlashBang_Explosion_Underwater_C : ATslExplosionEffect {
	struct UParticleSystem* ExplosionFX; // 0x3f8(0x08)
	struct UParticleSystemComponent* ParticleComp; // 0x400(0x08)
	struct UPointLightComponent* ExplosionLight; // 0x408(0x08)
	float *213dfb1563; // 0x410(0x04)
	struct UAkAudioEvent* *fb6f7fe77f; // 0x418(0x08)
	struct F*ff6ea3da5e *ff6ea3da5e; // 0x420(0xc40)
	float *9f8c7c2e86; // 0x1060(0x04)
	struct FHitResult SurfaceHit; // 0x1068(0x88)
	struct UPrimitiveComponent* *6fe1f23690; // 0x1100(0x08)

	struct FName OnParticleCollide(); // Function TslGame.TslExplosionEffect.OnParticleCollide // Final|Native|Private|HasDefaults // @ game+0x5df05a0
};

