class MassiveMod_PKM extends JD_M249_Base
{
	override void OnStanceChangeMMIO(int weaponStance)
    {
        switch (weaponStance)
        {
            case DayZPlayerConstants.STANCEIDX_ERECT: // Player is prone with raised fists/weapon
            case DayZPlayerConstants.STANCEIDX_RAISEDERECT: // Player is prone with raised fists/weapon
                SetBipodState(0);
                break;
            case DayZPlayerConstants.STANCEIDX_CROUCH: // Player is prone with raised fists/weapon
            case DayZPlayerConstants.STANCEIDX_RAISEDCROUCH: // Player is prone with raised fists/weapon
                SetBipodState(1);
                break;
            case DayZPlayerConstants.STANCEIDX_PRONE: // Player is prone with raised fists/weapon
            case DayZPlayerConstants.STANCEIDX_RAISEDPRONE: // Player is prone with raised fists/weapon
                SetBipodState(2);
                break;
            default: // All uncaught cases.
                SetBipodState(0);
                break;
        }
    }
	
	override RecoilBase SpawnRecoilObject()
	{
        PlayerBase player = PlayerBase.Cast( GetHierarchyRootPlayer() );
        if (!player)
			return new PKMRecoilStanding(this);

        if (player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_RAISEDERECT | DayZPlayerConstants.STANCEMASK_ERECT)){
            return new PKMRecoilStanding(this);
        } else if(player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_RAISEDCROUCH | DayZPlayerConstants.STANCEMASK_CROUCH)){
            return new PKMRecoilCrouched(this);
        } else if(player.IsPlayerInStance(DayZPlayerConstants.STANCEMASK_RAISEDPRONE | DayZPlayerConstants.STANCEMASK_PRONE)){
            return new PKMRecoilProne(this);
        } 

        return new PKMRecoilStanding(this);
    }
	
	override void EEOnCECreate()
	{
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater(this.SpawnAttachments, 1000);
	}
	
	ref TStringArray SNAFUOptics = 
	{
		"SNAFU_AKAimpoint_ACO",
		"SNAFU_AKElcan",
		"SNAFU_AKAimpoint_M5",
		"SNAFU_AKEOTech_EXPS3",
		"SNAFU_AKHuntingOptic",
		"SNAFU_AKKahles",
		"SNAFU_AKLeupold_Mark8",
		"SNAFU_AKNightforce",
		"SNAFU_AKTango6T_Black",
		"SNAFU_AKTrijicon_Docter",
		"SNAFU_AKWalther",
		"KazuarOptic",
		"Mass1P69"
	};
	
	ref TStringArray AKOptics = 
	{
		"KashtanOptic",
		"PSO1Optic",
		"KobraOptic"
	};
	int randomchance = Math.RandomInt(1,100);

	void SpawnAttachments()
    {
		GameInventory m_Inventory = GetInventory();
        if (GetHierarchyParent().IsInherited(MassiveModCrate_Base))
		{
		    if (GetGame() &&  ( GetGame().IsServer() || !GetGame().IsMultiplayer() ))
            {
				AddHealth("", "",9999);
				m_Inventory.CreateAttachment("Mass_Mag_PKM_100Rnd");
				if (randomchance < 50)
				{
			        m_Inventory.CreateAttachment(AKOptics.GetRandomElement());	
				}	
                else
				{
				    m_Inventory.CreateAttachment(SNAFUOptics.GetRandomElement());	
				}	
					
            }
		}
    }
}
//modded class ModItemRegisterCallbacks
//{
//	override void RegisterFireArms(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
//    {
//    	super.RegisterFireArms(pType, pBehavior);  
//		
//		pType.AddItemInHandsProfileIK("MassiveMod_PKM", "AnimatedWeapons/Animations/M249/player_main_JDM249.asi", pBehavior, "AnimatedWeapons/Animations/M249/ik/M249.anm", "AnimatedWeapons/Animations/M249/w_M249_States.anm"); 	
//	};
//	
//	override void CustomBoneRemapping(DayZPlayerType pType)
//    {
//		super.CustomBoneRemapping(pType);
//		
//		pType.AddItemBoneRemap("MassiveMod_PKM", 
//		{ 
//			"bolt",
//			"Weapon_Bolt",
//			"magazine",
//			"Weapon_Magazine",
//			"charging",
//			"Weapon_Bone_01",
//			"cover",
//			"Weapon_Bone_02",
//			"trigger",
//			"Weapon_Trigger",
//			"bullet",
//			"Weapon_Bullet",
//			"flap",
//			"Weapon_Bone_06",
//			"beltpart3",
//			"Weapon_Bone_03",
//			"beltpart2",
//			"Weapon_Bone_04",
//			"beltpart1",
//			"Weapon_Bone_05" 
//		});
//			
//	}
//};