#ifdef CodeLock
class ActionAttachCodeLockToA6 : ActionSingleUseBase {
    override void CreateConditionComponents() {
        m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTNone;
    }
    override string GetText() {
        return "Attach Codelock";
    }
    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item) {
        A6_Storage_Base storage = A6_Storage_Base.Cast(target.GetObject());
        if (storage && storage.AcceptsCodeLocks() && !storage.IsCodeLocked() && storage.IsOpen()) {
            return true;
        }
        return false;
    }
    override void OnExecuteClient(ActionData action_data) {
        A6_Storage_Base storage = A6_Storage_Base.Cast(action_data.m_Target.GetObject());
        PlayerBase player = action_data.m_Player;
        ClearInventoryReservationEx(action_data);
        if (storage) {
            int slotID = InventorySlots.GetSlotIdFromString("Att_CombinationLock");
            action_data.m_Player.PredictiveTakeEntityToTargetAttachmentEx(storage, action_data.m_MainItem, slotID);
            GetCLUIManager().ShowMenu(CLMENU.SET_CODE_MENU, storage);
        }
    }
    override void OnExecuteServer(ActionData action_data) {
        EntityAI target = EntityAI.Cast(action_data.m_Target.GetObject());
        PlayerIdentity playerId = action_data.m_Player.GetIdentity();
        if (target && playerId) {
            GetCodeLockLogger().WriteLog("attach", playerId, target.GetPosition());
        }
    }
}
#endif