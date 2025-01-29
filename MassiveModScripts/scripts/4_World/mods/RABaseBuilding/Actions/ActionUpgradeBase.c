modded class ActionUpgradeBase: ActionContinuousBase
{
	
	#ifndef SERVER
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		BaseBuilding base_building = BaseBuilding.Cast(target.GetObject());
		if (!base_building) {
			return false;
		}

		BaseBuildingItemEntry upgrade = base_building.GetUpgradeCost();
		switch (BaseBuilding.CheckBuildCondition(player, base_building, upgrade)) {
			case ConstructFailType.TERRITORY: {
				m_Text = "#STR_RA_CANNOTUPGRADE_ENEMYTERRITORIES";
				break;
			}
			
			case ConstructFailType.NOBUILDZONE: {
				m_Text = "Cannot Upgrade (No Territory HQ)";
				break;
			}
			
			case ConstructFailType.MATERIALS: {
				m_Text = "#STR_RA_CANNOTUPGRADE_NOMATERIALS";
				break;
			}
		
			case ConstructFailType.HEIGHT: {
				m_Text = "#STR_RA_CANNOTUPGRADE_HEIGHTLIMIT";
				break;
			}

			case ConstructFailType.LOCKED: {
				m_Text = "#STR_RA_CANNOTUPGRADE_LOCKED";
				break;
			}
			
			default: {
				MaterialLevel upgrade_material_level = g_Game.ConfigGetInt(string.Format("CfgVehicles %1 materialLevel", base_building.GetUpgradeType()));
				if (!upgrade_material_level || upgrade_material_level == 0) {
					return false;
				}
				m_Text = string.Format("#STR_RA_UPGRADETO %1", upgrade_material_level.GetFormattedName());
				break;
			}
		}
		
		return true;
	}
	#endif
	
	override void OnFinishProgressServer(ActionData action_data)
	{
		// Call the base class method first to preserve original logic
		super.OnFinishProgressServer(action_data);
	
		// Now, apply the custom logic
		action_data.m_MainItem.DecreaseHealth(UADamageApplied.BUILD, false);
	}


}
