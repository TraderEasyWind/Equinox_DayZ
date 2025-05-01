modded class BoltActionRifle_Base extends Weapon_Base {	    
	override void SetActions() {
		super.SetActions();
		AddAction(ActionChangeReticle);
	}
}