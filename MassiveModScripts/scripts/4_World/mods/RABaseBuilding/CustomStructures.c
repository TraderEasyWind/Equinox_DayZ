class BaseBuilding_FrameDoorFrameSmall: BaseBuilding_DoorFrameBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
};
class BaseBuilding_WoodDoorFrameSmall: BaseBuilding_DoorFrameBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
};
class BaseBuilding_MetalDoorFrameSmall: BaseBuilding_DoorFrameBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
};
class BaseBuilding_ConcreteDoorFrameSmall: BaseBuilding_DoorFrameBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
};
class BaseBuilding_HologramDoorFrameSmall: BaseBuilding_DoorFrameBase
{
	override float GetSmallRotationStep()
	{
		return 1.25;
	}
	
	override float GetLargeRotationStep()
	{
		return 180.0;
	}
	
	override bool CanPermanentlyDismantle()
	{
		return false;
	}
	
};