#ifdef RA_BaseBuilding_Scripts
class BaseBuilding_FrameWall: BaseBuilding_WallBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class BaseBuilding_FrameHalfWall: BaseBuilding_HalfWallBase
{
	override float GetCostToUpkeep()
    {
        return 0.12;
    }
}
class BaseBuilding_WoodWall: BaseBuilding_WallBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_WoodHalfWall: BaseBuilding_HalfWallBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class BaseBuilding_MetalWall : BaseBuilding_WallBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
};
class BaseBuilding_MetalHalfWall: BaseBuilding_HalfWallBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_ConcreteWall: BaseBuilding_WallBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
};
class BaseBuilding_ConcreteHalfWall: BaseBuilding_HalfWallBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
#endif