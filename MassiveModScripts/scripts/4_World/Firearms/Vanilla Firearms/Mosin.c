modded class Mosin9130_Base extends BoltActionRifle_InnerMagazine_Base
{
	override void EEOnCECreate()
	{
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater(this.SpawnOptics, 1000);
	}
	
	ref TStringArray RandomOptics = 
	{
		"SNAFU_MAimpoint_ACO",
		"SNAFU_MElcan",
		"SNAFU_MAimpoint_M5",
		"SNAFU_MEOTech_EXPS3",
		"SNAFU_MHuntingOptic",
		"SNAFU_MKahles",
		"SNAFU_MLeupold_Mark8",
		"SNAFU_MNightforce",
		"SNAFU_MTango6T_Black",
		"SNAFU_MTrijicon_Docter",
		"SNAFU_MWalther"
	};
	
	int randomchance = Math.RandomInt(1,100);

	void SpawnOptics()
    {
		GameInventory m_Inventory = GetInventory();
        if (GetHierarchyParent().IsInherited(MassiveModCrate_Base))
		{
			
		    if (GetGame() &&  ( GetGame().IsServer() || !GetGame().IsMultiplayer() ))
            {
				AddHealth("", "",9999);
				if (randomchance < 50)
				{
			        m_Inventory.CreateAttachment("PUScopeOptic"); 
				}	
                else
				{
				    m_Inventory.CreateAttachment(RandomOptics.GetRandomElement());	
				}		
            }
		}
    }
}
class Mosin9130_Black: Mosin9130{}
class Mosin9130_Green : Mosin9130{}
class Mosin9130_Camo : Mosin9130{}
class MassiveMod_Mosin9130_Dark: Mosin9130{}
class MassiveMod_Mosin9130_Light: Mosin9130{}