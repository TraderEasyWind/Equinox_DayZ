modded class ActionDismantleIntoBox
{
#ifndef SERVER
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		if (!super.ActionCondition(player, target, item)) {
			return false;
		}
	
		ItemBase targetobj = ItemBase.Cast(target.GetObject());
		if (targetobj && !targetobj.IsEmpty()) {
			return false;
		}
	
		return true;
	}

#endif
}