#ifdef RA_BaseBuilding_Scripts
class BaseBuilding_RoofWallLeftBase: BaseBuilding_WallBase{};
class BaseBuilding_RoofWallRightBase: BaseBuilding_WallBase{};
class BaseBuilding_FrameRoof: BaseBuilding_RoofBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class BaseBuilding_WoodRoof: BaseBuilding_RoofBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_MetalRoof: BaseBuilding_RoofBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
class Basebuilding_FrameRoofWall_Left: BaseBuilding_RoofWallLeftBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class Basebuilding_FrameRoofWall_Right: BaseBuilding_RoofWallRightBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class Basebuilding_WoodRoofWall_Left: BaseBuilding_RoofWallLeftBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class Basebuilding_WoodRoofWall_Right: BaseBuilding_RoofWallRightBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class Basebuilding_MetalRoofWall_Left: BaseBuilding_RoofWallLeftBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
class Basebuilding_MetalRoofWall_Right: BaseBuilding_RoofWallRightBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
class BaseBuilding_ConcreteRoofWall_Left: BaseBuilding_RoofWallLeftBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
}
class BaseBuilding_ConcreteRoofWall_Right: BaseBuilding_RoofWallRightBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
}
#endif