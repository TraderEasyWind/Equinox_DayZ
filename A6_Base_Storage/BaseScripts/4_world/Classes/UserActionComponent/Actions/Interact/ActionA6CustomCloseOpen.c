class ActionA6CustomCloseOpen: ActionInteractBase {
	protected string opencloseState;
	void ActionA6CustomCloseOpen() {
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.CloseDoors;
	}
	override void CreateConditionComponents() {
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}
	override string GetText() {
		return opencloseState;
	}
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item) {
		string selection = target.GetObject().GetActionComponentName(target.GetComponentIndex(),"view");
		A6_Storage_Base storage = A6_Storage_Base.Cast(target.GetObject());
		bool isInRange = IsInReach(player, target, GetA6BaseStorageConfig().OpenCloseRange);
		bool validSelection = selection.Contains("doors") || selection.Contains("coveraction") || selection.Contains("lid");
		if (storage.IsOpen()) {
			opencloseState = "#close";
			if (storage.IsKindOf("A6_Coverable_Base")) {
				opencloseState = "Cover";
			}
		} else {
			opencloseState = "#open";
			if (storage.IsKindOf("A6_Coverable_Base")) { 
				opencloseState = "Uncover";
			}
		}
		if (isInRange && validSelection) {
			#ifdef CodeLock
			if (storage.IsCodeLocked() && !storage.IsOpen()) {
				return false;
			}
			#endif

			#ifdef RA_BaseBuilding_Scripts
			if (storage.IsCodeLocked(player.GetIdentity()) && !storage.IsOpen()) {
				return false;
			}
			#endif
			return true;
		}
		return false;
	}
	override void OnStartServer( ActionData action_data ) {
		A6_Storage_Base storage = A6_Storage_Base.Cast(action_data.m_Target.GetObject());
		if (!storage) {
			return;
		}
		#ifdef RA_BaseBuilding_Scripts	
			PlayerBase player = PlayerBase.Cast(action_data.m_Player);
			if (storage.IsCodeLocked(player.GetIdentity())) {
				return;
			}
		#endif
		if(storage.IsOpen()) {
			storage.Close();
		} else {
			storage.Open();
		}
	}
	override void OnEndServer( ActionData action_data ) {
		if ( GetA6BaseStorageConfig().EnableOpenCloseLogging ) {
			A6_Storage_Base storage = A6_Storage_Base.Cast(action_data.m_Target.GetObject());
    		PlayerBase player = PlayerBase.Cast(action_data.m_Player);
			LogOpenAction(player,storage);
		}
	}
	void LogOpenAction(PlayerBase player, A6_Storage_Base storage) {
	    GetGame().AdminLog("[A6_Base_Storage][Open/Close]: " + player.GetIdentity().GetName() + " (" + player.GetIdentity().GetPlainId() + ") " + opencloseState + " " + storage.GetType() + " at " + storage.GetPosition());
	}
}
#ifdef RA_BaseBuilding_Scripts	
modded class ActionToggleOpenCodeLock: ActionInteractBase {
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item) {
		RA_CodeLock code_lock = RA_CodeLock.Cast(target.GetObject());
		ItemBase parent_item = ItemBase.Cast(code_lock.GetHierarchyParent());
		A6_Storage_Base dontgiveopencommand = A6_Storage_Base.Cast(code_lock.GetHierarchyParent());
		#ifndef SERVER
		if (!code_lock || !parent_item) { 
			return false;
		}
		if (code_lock.GetState() == CodeLockState.LOCKED && !code_lock.IsAuthorized(player.GetIdentity())) {
			return false;
		}
		if (dontgiveopencommand) {
			return false;
		}
		m_Text = Ternary<string>.If(parent_item.IsOpen(), "#close", "#open");
		#endif
		BaseBuilding_OpenableBase door = BaseBuilding_OpenableBase.Cast(code_lock.GetHierarchyParent());
		if (door) {
			m_Sound = Ternary<string>.If(door.IsOpen(), door.GetCloseSounds().GetRandomElement(), door.GetOpenSounds().GetRandomElement());
		}
		return true;
	}
}	
#endif