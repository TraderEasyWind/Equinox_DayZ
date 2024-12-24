#ifdef RA_BaseBuilding_Scripts
modded class WoodenCrate
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
modded class SeaChest
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
modded class Barrel_ColorBase
{
	override float GetCostToUpkeep()
    {
        return 1.05;
    }
}
#endif