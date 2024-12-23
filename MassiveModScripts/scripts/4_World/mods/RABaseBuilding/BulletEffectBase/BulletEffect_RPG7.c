class BulletEffect_JD_RPG7: BulletEffectBase
{
    override void Play(Object source, Object direct_hit, int component, string surface, vector position, vector normal, vector exit_position, vector enter_velocity, vector exit_velocity, bool water, bool deflected)
    {
        Print("[BulletEffect_JD_RPG7] Play method triggered");

        // check for deflections and penetration
        if (!g_Game.IsServer() || deflected || exit_velocity.Length() > 0) {
            Print("[BulletEffect_JD_RPG7] Exiting early: Server check, deflection, or exit velocity detected");
            return;
        }

        Explosive_JD_RPG7 explosive_jd_rpg7 = Explosive_JD_RPG7.Cast(g_Game.CreateObjectEx("Explosive_JD_RPG7", GetPosition(), ECE_NONE));
        if (explosive_jd_rpg7) {
            Print("[BulletEffect_JD_RPG7] Explosive object created, triggering explosion");
            explosive_jd_rpg7.DoExplosion(EntityAI.Cast(source));
            Delete();
        }
        else {
            Print("[BulletEffect_JD_RPG7] Failed to create Explosive_JD_RPG7 object");
        }
    } 
}
