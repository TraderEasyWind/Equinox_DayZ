class BaseBuilding_WoodFrameSingleDoor: BaseBuilding_WoodSingleDoor
{
	override float GetSmallRotationStep()
	{
		return 0.0;
	}
	
	override float GetLargeRotationStep()
	{
		return 180.0;
	}
	
	override bool IsOccupancyExclusive()
	{
		return true;
	}
	
	override bool CanPermanentlyDismantle()
	{
		return true;
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionToggleOpen);
		AddAction(ActionKnockBaseDoor);
	}
};