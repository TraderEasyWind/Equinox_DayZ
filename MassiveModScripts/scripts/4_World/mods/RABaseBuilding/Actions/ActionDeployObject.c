//modded class ActionDeployObject
//{
//	override bool SetupAction(PlayerBase player, ActionTarget target, ItemBase item, out ActionData action_data, Param extra_data = NULL)
//	{
//		if (!TerritoryHQ.HasPermissionsAtPosition(player, item.GetPosition()) && !item.CanPlaceInEnemyTerritory()) {
//			return false;
//		}
//
//		TerritoryHQ_Kit hq = TerritoryHQ_Kit.Cast(item);
//		if (hq) {
//			if(TerritoryHQ.IsWithinTerritoryRange(player, item.GetPosition())) {
//				return false;
//			}
//		}
//		
//		return super.SetupAction(player, target, item, action_data, extra_data);
//	}
//
//	override bool ActionConditionContinue(ActionData action_data)
//	{
//		if (!TerritoryHQ.HasPermissionsAtPosition(action_data.m_Player, action_data.m_MainItem.GetPosition()) && !action_data.m_MainItem.CanPlaceInEnemyTerritory()) {
//			return false;
//		}
//
//		TerritoryHQ_Kit hq = TerritoryHQ_Kit.Cast(action_data.m_MainItem);
//		if (hq) {
//			if(TerritoryHQ.IsWithinTerritoryRange(action_data.m_Player, action_data.m_MainItem.GetPosition())) {
//				return false;
//			}
//		}
//		
//		return super.ActionConditionContinue(action_data);
//	}
//	
//	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
//	{		
//		if (g_Game.IsDedicatedServer()) {			
//			return super.ActionCondition(player, target, item);
//		}
//		
//		if (!super.ActionCondition(player, target, item)) {
//			return false;
//		}
//		
//		// if no permission, change text
//		Hologram hologram = player.GetHologramLocal();
//		if (hologram && ItemBase.Cast(hologram.GetProjectionEntity())) {
//			item = ItemBase.Cast(hologram.GetProjectionEntity());
//		}
//	
//		if (item && !TerritoryHQ.HasPermissionsAtPosition(player, item.GetPosition()) && !item.CanPlaceInEnemyTerritory()) {
//			m_Text = ActionTogglePlaceObject.HQ_DENIED_TEXT;
//		}
//		else if (item && item.IsInherited(TerritoryHQ) && TerritoryHQ.IsWithinTerritoryRange(player, item.GetPosition())) {
//			m_Text = ActionTogglePlaceObject.HQ_DENIED_HQ_TEXT;
//		}
//		else {
//			m_Text = "#place_object";
//		}
//		
//		return true;
//	}
//	
//	override bool IsIconDisabled()
//	{
//		return (GetText().Contains(ActionTogglePlaceObject.HQ_DENIED_TEXT)) || (GetText().Contains(ActionTogglePlaceObject.NBZ_DENIED_TEXT)  || (GetText().Contains(ActionTogglePlaceObject.HQ_DENIED_HQ_TEXT)));
//	}
//}