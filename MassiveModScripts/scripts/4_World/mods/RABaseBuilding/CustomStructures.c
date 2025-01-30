class BaseBuilding_FrameDoorFrameSmall: BaseBuilding_DoorFrameBase{};
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