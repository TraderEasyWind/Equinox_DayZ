class A6_Kit : ItemBase {
	protected bool m_PlacementLogs = false;
	void A6_Kit() {
		m_PlacementLogs = GetA6BaseStorageConfig().EnablePlacementLogging;
	}
	override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0") {
		super.OnPlacementComplete(player, position, orientation);
		if (GetGame().IsServer()) {
			EntityAI kitItem = EntityAI.Cast(GetGame().CreateObjectEx(Get_ItemName(), position, ECE_PLACE_ON_SURFACE));
			kitItem.SetPosition(position);
			kitItem.SetOrientation(orientation);
			if (m_PlacementLogs) {
				GetGame().AdminLog("[A6_Base_Storage][Placement]: " + player.GetIdentity().GetName() + " (" + player.GetIdentity().GetPlainId() + ") placed " + Get_ItemName() + " at " + kitItem.GetPosition());
			}
		}
		SetIsPlaceSound(true);
	}
	override bool IsBasebuildingKit() {
		return true;
	}
	override bool IsDeployable() {
		return true;
	}
	override string GetPlaceSoundset() {
		return "putDown_FenceKit_SoundSet";
	}
	override void SetActions() {
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	} 
}