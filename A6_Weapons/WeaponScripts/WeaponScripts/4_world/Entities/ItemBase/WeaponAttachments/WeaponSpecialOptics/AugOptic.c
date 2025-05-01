class A6_AugOptic: ItemOptics {
	override bool CanPutAsAttachment( EntityAI parent ) {
		return true;
	}
	override void OnOpticExit() {
    	super.OnOpticExit();
		if (GetA6GunplayModConfig().enableAimSpeedModifier == 1) {
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).Remove(OnOpticEnter);
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).Remove(EnterOptics);
		}		
	}
}