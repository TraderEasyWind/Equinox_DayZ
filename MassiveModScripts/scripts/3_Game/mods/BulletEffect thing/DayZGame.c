modded class DayZGame
{
	override void FirearmEffects(Object source, Object directHit, int componentIndex, string surface, vector pos, vector surfNormal, vector exitPos, vector inSpeed, vector outSpeed, bool isWater, bool deflected, string ammoType)
	{
		super.FirearmEffects(source, directHit, componentIndex, surface, pos, surfNormal, exitPos, inSpeed, outSpeed, isWater, deflected, ammoType);
				
		// see BulletEffectBase for docsz
		string bullet_effect_object = ConfigGetTextOut(string.Format("%1 %2 bulletEffect", CFG_AMMO, ammoType));
		if (bullet_effect_object == string.Empty) {
			return;
		}

		BulletEffectBase bullet_effect_base = BulletEffectBase.Cast(g_Game.CreateObjectEx(bullet_effect_object, pos, ECE_LOCAL));
		if (!bullet_effect_base) {
			return;
		}

		bullet_effect_base.Play(source, directHit, componentIndex, surface, pos, surfNormal, exitPos, inSpeed, outSpeed, isWater, deflected);
	}
};