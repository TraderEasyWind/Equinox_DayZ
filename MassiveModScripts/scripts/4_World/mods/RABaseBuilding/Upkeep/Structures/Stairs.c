#ifdef RA_BaseBuilding_Scripts
class BaseBuilding_FrameStairs: BaseBuilding_StairsBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_FrameStairsStraight: BaseBuilding_StairsStraightBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_WoodStairs: BaseBuilding_StairsBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
class BaseBuilding_WoodStairsStraight: BaseBuilding_StairsStraightBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
class BaseBuilding_MetalStairs: BaseBuilding_StairsBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
}
class BaseBuilding_MetalStairsStraight: BaseBuilding_StairsStraightBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
}
class BaseBuilding_WoodStepLadder: BaseBuilding_StepLadderBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
#endif