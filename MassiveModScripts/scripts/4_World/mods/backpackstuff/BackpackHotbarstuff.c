//modded class ItemBase
//{
//    bool CanChildrenAssignToQuickbar()
//    {
//        return false;
//    }
//
//    override bool CanAssignToQuickbar()
//    {
//        if (!super.CanAssignToQuickbar())
//            return true;
//
//        ItemBase parent = ItemBase.Cast(GetParent());
//        if (parent)
//            return parent.CanChildrenAssignToQuickbar();
//
//        return false;
//    }
//};
//modded class AliceBag_ColorBase extends Backpack_Base 
//{
//	override bool CanChildrenAssignToQuickbar()
//    {
//        return true;
//    }
//	
//	override bool CanAssignToQuickbar()
//    {
//        if (!super.CanAssignToQuickbar())
//            return false;
//
//        ItemBase parent = ItemBase.Cast(GetParent());
//        if (parent)
//            return parent.CanChildrenAssignToQuickbar();
//
//        return true;
//    }
//};