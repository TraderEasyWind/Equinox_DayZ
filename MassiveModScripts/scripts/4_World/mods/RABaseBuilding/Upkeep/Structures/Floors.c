#ifdef RA_BaseBuilding_Scripts
class BaseBuilding_FrameFloor: BaseBuilding_FloorBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class BaseBuilding_WoodFloor: BaseBuilding_FloorBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_MetalFloor: BaseBuilding_FloorBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
class BaseBuilding_ConcreteFloor: BaseBuilding_FloorBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
}
class BaseBuilding_FrameTriangleFloor: BaseBuilding_TriangleFloorBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class BaseBuilding_WoodTriangleFloor: BaseBuilding_TriangleFloorBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_MetalTriangleFloor: BaseBuilding_TriangleFloorBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
class BaseBuilding_ConcreteTriangleFloor: BaseBuilding_TriangleFloorBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
#endif