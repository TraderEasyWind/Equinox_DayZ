#ifdef RA_BaseBuilding_Scripts
class BaseBuilding_FrameLadderHatch: BaseBuilding_LadderHatchBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class BaseBuilding_WoodLadderHatch: BaseBuilding_LadderHatchBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_MetalLadderHatch: BaseBuilding_LadderHatchBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
class BaseBuilding_ConcreteLadderHatch: BaseBuilding_LadderHatchBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
}
modded class BaseBuilding_WoodHatchLadder
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
modded class BaseBuilding_MetalHatchLadder
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
modded class BaseBuilding_VaultHatchLadder
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
}
class BaseBuilding_FrameTriangleLadderHatch: BaseBuilding_TriangleLadderHatchBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class BaseBuilding_WoodTriangleLadderHatch: BaseBuilding_TriangleLadderHatchBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_MetalTriangleLadderHatch: BaseBuilding_TriangleLadderHatchBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
class BaseBuilding_ConcreteTriangleLadderHatch: BaseBuilding_TriangleLadderHatchBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
}
#endif