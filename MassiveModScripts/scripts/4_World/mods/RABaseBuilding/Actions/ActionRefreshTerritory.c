class ActionUpdateTerritory: ActionInteractBase
{
    void ActionUpdateTerritory()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_INTERACTONCE;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_Text = "Update Territory";
	}
	
	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
	}
	
    override bool HasTarget()
    {
        return true;
    }
	
    #ifndef SERVER
	override string GetText()
	{
		return "Update Territory";
	}
    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
        TerritoryHQ territory_hq = TerritoryHQ.Cast(target.GetObject());
		if (!territory_hq) {
			return false;
		}
		
        if (!TerritoryHQ.HasPermissionsAtPosition(player, territory_hq.GetPosition())) {
            return false; // Player doesn't have permission, so don't show the action
        }
		
        return true;
    }
    #endif
		
	override void OnStartServer(ActionData action_data)
	{
        TerritoryHQ territory_hq = TerritoryHQ.Cast(action_data.m_Target.GetObject());
        if (!territory_hq) {
            return;
        }
        
        PlayerBase player = PlayerBase.Cast(action_data.m_Player);
        if (!player) {
            return;
        }

        vector position = territory_hq.GetPosition();
        float radius = RearmedConstants.BASE_RADIUS;
        
        vector max = position + Vector(radius, radius, radius);
        vector min = position - Vector(radius, radius, radius);
        
        array<EntityAI> entities = {};
        DayZPlayerUtils.SceneGetEntitiesInBox(min, max, entities);
        
        foreach (EntityAI entity: entities) {
            BaseBuilding base_building = BaseBuilding.Cast(entity);
            if (base_building && !base_building.GetCurrentHQ()) {
                base_building.SetCurrentHQ(territory_hq);
                base_building.SetSynchDirty();
            }
        }
	}
}