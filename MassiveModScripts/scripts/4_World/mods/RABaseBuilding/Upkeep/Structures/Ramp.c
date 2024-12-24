#ifdef RA_BaseBuilding_Scripts
class BaseBuilding_FrameRamp: BaseBuilding_RampBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class BaseBuilding_WoodRamp: BaseBuilding_RampBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
#endif