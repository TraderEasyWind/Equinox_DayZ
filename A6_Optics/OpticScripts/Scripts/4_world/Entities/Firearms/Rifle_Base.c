modded class Rifle_Base extends Weapon_Base {	    
	override void SetActions() {
		super.SetActions();
		AddAction(ActionChangeReticle);
	}
}