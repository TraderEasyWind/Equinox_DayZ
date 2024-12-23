class Explosive_JD_RPG7: ScriptedExplosion
{
	override string GetExplosiveType()
	{
		return "M67Grenade_Ammo";
	}
	
	override array<int> GetExplosionParticles()
	{
		return {ParticleList.M67};
	}

	override float GetExplosiveDamage()
	{
		return 750.0;
	}

	override float GetExplosionRadius()
	{
		return 0.1;
	}
}