modded class BaseBuilding
{
	bool CanPermanentlyDismantle()
	{
		return true;
	}
	
	bool MM_IsWall()
	{
		return false;
	}
};
modded class BaseBuilding_WallBase
{
	override bool MM_IsWall()
	{
		return true;
	}
};