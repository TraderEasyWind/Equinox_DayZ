class MassiveMod_KeyBase : CombatKnife
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionUnlockCrate);
	}
}
class MassiveMod_Tier1Key : MassiveMod_KeyBase{}
class MassiveMod_Tier2Key : MassiveMod_KeyBase{}
class MassiveMod_Tier3Key : MassiveMod_KeyBase{}
class MassiveMod_Tier4Key : MassiveMod_KeyBase{}
class MassiveMod_Tier5Key : MassiveMod_KeyBase{}