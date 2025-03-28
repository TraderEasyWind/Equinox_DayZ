#ifdef RA_BaseBuilding_Scripts
modded class CarTent
{
	override float GetCostToUpkeep()
    {
        return 3.5;
    }
}
modded class LargeTent
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
}
modded class MediumTent
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
modded class PartyTent
{
	override float GetCostToUpkeep()
    {
        return 1.05;
    }
}
modded class ShelterBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
#endif