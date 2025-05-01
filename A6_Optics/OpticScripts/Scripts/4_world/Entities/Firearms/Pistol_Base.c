modded class Pistol_Base extends Weapon_Base {	    
	override void SetActions() {
		super.SetActions();
		AddAction(ActionChangeReticlePistol);
	}
}