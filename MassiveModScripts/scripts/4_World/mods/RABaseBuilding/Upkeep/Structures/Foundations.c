#ifdef RA_BaseBuilding_Scripts
class BaseBuilding_FrameFoundation: BaseBuilding_FoundationBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class BaseBuilding_WoodFoundation: BaseBuilding_FoundationBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_MetalFoundation: BaseBuilding_FoundationBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
class BaseBuilding_ConcreteFoundation: BaseBuilding_FoundationBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
}
class BaseBuilding_FrameTriangleFoundation: BaseBuilding_TriangleFoundationBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class BaseBuilding_WoodTriangleFoundation: BaseBuilding_TriangleFoundationBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_MetalTriangleFoundation: BaseBuilding_TriangleFoundationBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
class BaseBuilding_ConcreteTriangleFoundation: BaseBuilding_TriangleFoundationBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
}
#endif