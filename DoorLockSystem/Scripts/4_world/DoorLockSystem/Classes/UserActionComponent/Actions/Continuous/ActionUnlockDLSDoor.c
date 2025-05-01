class ActionUnlockDLSDoorCB : ActionContinuousBaseCB {
	override void CreateActionComponent() {
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.UNLOCK);
	}
}
class ActionUnlockDLSDoor: ActionContinuousBase {
	autoptr LockedBuildingLocations best_door;
	void ActionUnlockDLSDoor() {		
		m_CallbackClass = ActionUnlockDLSDoorCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_Text = "#unlock";
	}
	override void CreateConditionComponents() {	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTCursor;
	}
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item ) {		
		if ( !IsBuilding( target ) || !IsInReach( player, target, UAMaxDistances.DEFAULT ) ) {
			return false;
		}    	
		Building building;				
		if ( Class.CastTo(building, target.GetObject()) ) {
			int doorIndex = building.GetDoorIndex(target.GetComponentIndex());			
			if ( doorIndex != -1 ) {
				return building.IsDoorLocked(doorIndex);
			}
		}				
		return false;
	}
    protected void UnlockDoor(ActionTarget target) {
        Building building;
		if ( Class.CastTo(building, target.GetObject()) ){
			int doorIndex = building.GetDoorIndex(target.GetComponentIndex());
			if ( doorIndex != -1 ){
				building.UnlockDoor(doorIndex);
			}
		}
	}
	override void OnFinishProgressServer(ActionData action_data) {
		Building building;
		string key_type = action_data.m_MainItem.GetType();
		if (Class.CastTo(building, action_data.m_Target.GetObject())) {
			vector current_building = building.GetPosition();
			int doorIndex = building.GetDoorIndex(action_data.m_Target.GetComponentIndex());
			if (doorIndex != -1) {
				for (int i = 0; i < GetDoorLockKey().m_DoorLockSettings.LockedDoorLocations.Count(); i++) {
					auto lockedDoorLocation = GetDoorLockKey().m_DoorLockSettings.LockedDoorLocations[i];
					vector building_location = Vector(lockedDoorLocation.building_x, lockedDoorLocation.building_z, lockedDoorLocation.building_y);
					if (current_building == building_location) {
						if (lockedDoorLocation.door_index == doorIndex) {
							best_door = lockedDoorLocation;
							if (key_type != best_door.KeyClassName) {
								HandleWrongKey(action_data, building);
								continue; // Continue to check other matches
							}
							ProcessKeyUsage(action_data, building);
							UnlockDoor(action_data.m_Target);
						}
					}
				}
			}
		}
	}
	private void HandleWrongKey(ActionData action_data, Building building) {
		if (best_door.WrongKeyMessage != "") {
			Param1<string> messageParam = new Param1<string>(best_door.WrongKeyMessage);
			GetGame().RPCSingleParam(action_data.m_Player, ERPCs.RPC_USER_ACTION_MESSAGE, messageParam, true, action_data.m_Player.GetIdentity());
		}
		if (best_door.WrongKeySound != "") {
			building.PlaySound(best_door.WrongKeySound, 5, false);
		}
	}
	private void ProcessKeyUsage(ActionData action_data, Building building) {
		if (action_data.m_MainItem) {
			ApplyKeyUse(action_data.m_MainItem, action_data.m_Player);
		}
		if (GetDoorLockKey().m_DoorLockSettings.ADMLogging) {
			LogPrint("[DoorLockSystem]: " + action_data.m_Player.GetIdentity().GetPlainName() + " (" + action_data.m_Player.GetIdentity().GetPlainId() + ") opened " + best_door.LocationName + ": Building POS: " + building.GetPosition());
		}
		if (best_door.UnlockSound != "") {
			building.PlaySoundLoop(best_door.UnlockSound, 100, false);
		}
	}
	void LogPrint( string message ) {
		GetGame().AdminLog( message );
	}
	void ApplyKeyUse(ItemBase item, PlayerBase player) {
		if (item.IsKindOf("DLS_Key_Base") || item.IsKindOf("DLS_KeyCard_Base")) {
			if (item.HasQuantity()) {
				item.AddQuantity(-1, true);
			} else {
				item.Delete();
			}
		} else if (item.IsKindOf("DLS_KeyCard_InfiniteUse")) {
			if (!GetDoorLockKey().m_DoorLockSettings.InfiniteUseColorKeycards) {
				item.Delete();
			}
		}
	}
    override bool IsLockTargetOnUse() {
		return false;
	}
}