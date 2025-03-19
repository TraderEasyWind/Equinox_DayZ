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
class MassiveMod_ConstructionSuppliesKey : MassiveMod_KeyBase{}
class MassiveMod_MedicalSuppliesKey : MassiveMod_KeyBase{}
class MassiveMod_MunitionsSuppliesKey : MassiveMod_KeyBase{}
class MassiveMod_WeaponSuppliesKey : MassiveMod_KeyBase{}