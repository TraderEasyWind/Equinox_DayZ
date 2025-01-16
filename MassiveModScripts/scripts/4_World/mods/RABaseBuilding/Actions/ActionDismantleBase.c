modded class ActionDismantleBaseCB: ActionContinuousBaseCB
{	
	override void CreateActionComponent()
	{
#ifdef DIAG_DEVELOPER
		m_ActionData.m_ActionComponent = new CAContinuousTime(1.0);
#else
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.BASEBUILDING_REPAIR_SLOW);
#endif
	}
}
modded class ActionDismantleBase: ActionContinuousBase
{	
	override void OnFinishProgressServer(ActionData action_data)
	{
		super.OnFinishProgressServer(action_data);
		if (action_data.m_MainItem) 
		{
			action_data.m_MainItem.DecreaseHealth(UADamageApplied.DISMANTLE, false);
		}
	}	
	#ifndef SERVER
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		BaseBuilding base_building = BaseBuilding.Cast(target.GetObject());
		if (!base_building) {
			return false;
		}
	
		// Check permissions: Player must own the territory
		if (!TerritoryHQ.HasPermissionsAtPosition(player, base_building.GetPosition())) 
		{
			return false;
		}
	
		// Check if the player is behind the item
		if ((!IsPlayerBehindItem(player, base_building) || player.IsLeaning()) && base_building.MM_IsWall())
		{
			return false;
		}

	
		// Set the interaction text
		m_Text = string.Format("#STR_RA_REMOVE %1", base_building.GetDisplayName());
		return true;
	}
	#endif
	
	private bool IsPlayerBehindItem(PlayerBase player, BaseBuilding base_building)
	{
		vector player_position = player.GetPosition();
		vector item_position = base_building.GetPosition();
		
		// Calculate the direction the item is facing
		vector item_direction = base_building.GetDirection(); // Assumes GetDirection() gives the forward vector
		item_direction.Normalize();
		
		// Calculate the vector from the item to the player
		vector to_player = player_position - item_position;
		to_player.Normalize();
		
		// Check if the angle between the item's direction and the vector to the player is greater than 90 degrees
		float dot_product = vector.Dot(item_direction, to_player);
		
		// If the dot product is negative, the player is behind the item
		if (dot_product < 0)
		{
			// Calculate the distance from the player to the item
			float distance_to_item = vector.Distance(player_position, item_position);
			
			// Set a threshold distance (adjust this value as necessary)
			float minimum_distance = 2.0; // For example, consider the player only "behind" if they're at least 5 units away
			
			// If the player is too close, they're likely leaning around the wall, so return false
			if (distance_to_item < minimum_distance)
			{
				return false;
			}
			
			return true;
		}
		
		return false;
	}



};