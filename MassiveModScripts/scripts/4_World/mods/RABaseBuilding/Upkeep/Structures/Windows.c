#ifdef RA_BaseBuilding_Scripts
class BaseBuilding_FrameWindowFrame: BaseBuilding_WindowFrameBase
	{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class BaseBuilding_WoodWindowFrame: BaseBuilding_WindowFrameBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_MetalWindowFrame: BaseBuilding_WindowFrameBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
};
class BaseBuilding_ConcreteWindowFrame: BaseBuilding_WindowFrameBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
};
class BaseBuilding_WoodWindow: BaseBuilding_WindowBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
modded class BaseBuilding_WoodShutters
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_MetalEmbrasure: BaseBuilding_EmbrasureBase
{	
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
#endif