modded class Weapon_Base extends Weapon {	
    protected bool m_HasLaserAttached = false;
	override void SetActions() {
		super.SetActions();
        AddAction(ActionToggleBipod);
        AddAction(ActionTurnOnWeaponLeftLight);
        AddAction(ActionTurnOffWeaponLeftLight);
        AddAction(ActionTurnOnWeaponRightLight);
        AddAction(ActionTurnOffWeaponRightLight);
        AddAction(ActionTurnOnWeaponTopLight);
        AddAction(ActionTurnOffWeaponTopLight);
        AddAction(ActionToggleLightRightIR);
        AddAction(ActionToggleLightLeftIR);
        AddAction(ActionToggleLightTopIR);
    }
    bool IsBipodOpen() {
        A6_Bipod_Base bipod = A6Bipod();
        if ( !bipod || !bipod.IsOpen() ) {
            return false;
        }    
        return true;
    }
    A6_Bipod_Base A6Bipod() {
        return A6_Bipod_Base.Cast(FindAttachmentBySlotName("weaponBipod"));
    }
    override void EEItemAttached(EntityAI item, string slot_name) {   
        super.EEItemAttached(item,slot_name);  
        if ( HuntingOptic.Cast(item) ) {
            SetAnimationPhase("huntingscopetrans", 1);
        }
        if ( A6_Laser_Base.Cast(item) ) {
            m_HasLaserAttached = true;
        }
    }
    override void EEItemDetached(EntityAI item, string slot_name) {   
        super.EEItemDetached(item,slot_name);   
        if ( HuntingOptic.Cast(item) ) {
            SetAnimationPhase("huntingscopetrans", 0);
        }
        if ( A6_Laser_Base.Cast(item) ) {
            m_HasLaserAttached = false;
        }
    }
    bool HasLaserAttached() {
        return m_HasLaserAttached;
    }
    override bool CanReceiveAttachment(EntityAI attachment, int slotId) {
        if (ItemOptics.Cast(attachment) && (FindAttachmentBySlotName("weaponOptics") || FindAttachmentBySlotName("weaponOpticsAK") || FindAttachmentBySlotName("weaponOpticsHunting"))) {
            return false;
        }
        return super.CanReceiveAttachment(attachment, slotId);
    }
    override void OnMovedInsideCargo(EntityAI container) {
		super.OnMovedInsideCargo(container);
        HideLaser();
	}
    void HideLaser() {
        if (GetGame().IsServer() && GetGame().IsMultiplayer()) return;
        if (!GetInventory()) return;
        array<string> laserSlots = {"weaponLightRight", "weaponLightLeft", "weaponLightTop"};
        foreach (string slot : laserSlots) {
            A6_Laser_Base laser = A6_Laser_Base.Cast(FindAttachmentBySlotName(slot));
            if (laser) {
                laser.KillLaser();
                laser.OnWorkStop();
            }
        }
    }
}