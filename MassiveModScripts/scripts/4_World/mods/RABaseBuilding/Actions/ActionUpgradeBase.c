modded class ActionUpgradeBase: ActionContinuousBase
{
	override void OnFinishProgressServer(ActionData action_data)
	{
		action_data.m_MainItem.DecreaseHealth(UADamageApplied.BUILD, false);
		BaseBuilding base_building = BaseBuilding.Cast(action_data.m_Target.GetObject());
		if (!base_building) {
			return;
		}
		
		BaseBuildingItemEntry upgrade = base_building.GetUpgradeCost();
		if (!upgrade) {
			return;
		}

		PlayerBase player = PlayerBase.Cast(action_data.m_Player);
		if (!player) {
			return;
		}

		if (BaseBuilding.CheckBuildCondition(player, base_building, upgrade) != ConstructFailType.NONE) {
			return;
		}
		
		if (player.RemoveMaterials(upgrade)) {
			UpgradeBaseLambda(base_building, base_building.GetUpgradeType(), player).Execute();
		}
	}
}