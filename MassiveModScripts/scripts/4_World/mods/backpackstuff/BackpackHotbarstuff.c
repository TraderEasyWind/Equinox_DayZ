modded class ItemBase
{
    bool CanChildrenAssignToQuickbar()
    {
        return true;
    }

    override bool CanAssignToQuickbar()
    {
        if (!super.CanAssignToQuickbar())
            return false;

        if (GetInventory())
        {
            InventoryLocation loc = new InventoryLocation;
            GetInventory().GetCurrentInventoryLocation(loc);
            ItemBase parent = ItemBase.Cast(loc.GetParent());
            if (parent)
                return parent.CanChildrenAssignToQuickbar();
        }

        return true;
    }
};
//Vanilla Backpacks-----------------------------------------------------------------------------
modded class AliceBag_ColorBase
{
    override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class TaloonBag_ColorBase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class TortillaBag
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class CourierBag
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class FurCourierBag
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class ImprovisedBag
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class FurImprovisedBag
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class DryBag_ColorBase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class class HuntingBag
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class MountainBag_ColorBase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class SmershBag
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class ChildBag_ColorBase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class LeatherSack_ColorBase 
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class AssaultBag_ColorBase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class CoyoteBag_ColorBase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class AliceBag_ColorBase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class SlingBag_ColorBase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class ArmyPouch_ColorBase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class DuffelBagSmall_ColorBase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class CanvasBag_ColorBase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class DrysackBag_ColorBase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
//MMIO Backpacks-----------------------------------------------------------------------------
modded class MassImprovisedBag_Colorbase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class MassRainCoatcourier_ColorBase
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class MassRuckBagDesert
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class Massbag
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class MassSlingBag
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class MassMolleBagBlack
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class MassSurvivorBag
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};
modded class Canvas_Backpack_Base
{
	override bool CanChildrenAssignToQuickbar()
    {
        return false;
    }
};