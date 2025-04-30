modded class VicinityItemManager {
    override void AddVicinityItems( Object object ) {
        if(!ShouldAddToVicinity(object))
            return;
		super.AddVicinityItems(object);
	}
    bool ShouldAddToVicinity(Object filtered_object) {
        if (filtered_object.IsInherited(A6_Storage_Base)) {
            A6_Storage_Base storage = A6_Storage_Base.Cast(filtered_object);
            PlayerBase player = PlayerBase.Cast(GetGame().GetPlayer());
            return storage.IsPlayerInside(player, "");
        }
        return true;
    }
} 