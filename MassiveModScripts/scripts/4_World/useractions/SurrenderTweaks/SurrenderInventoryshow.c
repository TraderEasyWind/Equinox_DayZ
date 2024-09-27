//modded class PlayerBase
//{
//    bool IsSurrendered()
//    {
//        if (m_EmoteManager)
//            return m_EmoteManager.m_IsSurrendered;
//        
//        return false;
//    }
//    bool CanManipulateInventory()
//    {
//        if( IsControlledPlayer() )
//        {
//            return !IsRestrained() && !IsRestrainPrelocked() && !IsSurrendered;
//        }
//        if( IsSurrendered() )
//        {
//          return true;
//        }
//        return true;
//    }
//}