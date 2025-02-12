//modded class TreeSoft_BetulaPendula_Base
//{
//    override void OnTreeCutDown(EntityAI cutting_entity)
//    {
//        GetGame().RPCSingleParam(cutting_entity, PlantType.TREE_HARD, null, true);
//        DeleteTree();
//    }
//    
//    override bool IsTree()
//    {
//        return true;
//    }
//
//    override bool CanBeAutoDeleted()
//    {
//        return false;
//    }
//    
//    void DeleteTree()
//    {
//        GetGame().ObjectDelete(this);
//    }
//};
//modded class TreeHard_BetulaPendula
//{
//    override void OnTreeCutDown(EntityAI cutting_entity)
//    {
//        GetGame().RPCSingleParam(cutting_entity, PlantType.TREE_HARD, null, true);
//        DeleteTree();
//    }
//    
//    override bool IsTree()
//    {
//        return true;
//    }
//
//    override bool CanBeAutoDeleted()
//    {
//        return true;
//    }
//    
//    void DeleteTree()
//    {
//        Delete();
//		Print("" + GetType() + " has been cut down.");
//    }
//};