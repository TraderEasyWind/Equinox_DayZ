#ifdef RA_BaseBuilding_Scripts
class BaseBuilding_FrameDoorFrame: BaseBuilding_DoorFrameBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class BaseBuilding_FrameDoubleDoorFrame: BaseBuilding_DoubleDoorFrameBase
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
class BaseBuilding_WoodDoubleDoorFrame: BaseBuilding_DoubleDoorFrameBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_MetalDoubleDoorFrame: BaseBuilding_DoubleDoorFrameBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
class BaseBuilding_ConcreteDoubleDoorFrame: BaseBuilding_DoubleDoorFrameBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
}	
class BaseBuilding_WoodDoorFrame: BaseBuilding_DoorFrameBase
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
class BaseBuilding_MetalDoorFrame: BaseBuilding_DoorFrameBase
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
class BaseBuilding_ConcreteDoorFrame: BaseBuilding_DoorFrameBase
{
	override float GetCostToUpkeep()
    {
        return 2.8;
    }
}
modded class BaseBuilding_WoodSingleDoor
{
	override float GetCostToUpkeep()
    {
        return 0.35;
    }
}
modded class BaseBuilding_MetalSingleDoor
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
modded class BaseBuilding_VaultSingleDoor
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
modded class BaseBuilding_WoodGarageDoor
{
	override float GetCostToUpkeep()
    {
        return 0.70;
    }
}
modded class BaseBuilding_MetalGarageDoor
{
	override float GetCostToUpkeep()
    {
        return 1.4;
    }
}
#endif