//modded class mmg_storage_openable_base
//{
//	
//	override bool OnStoreLoad( ParamsReadContext ctx, int version )
//	{
//		ExpansionCodeLock expCodeLock = ExpansionGetCodeLock();
//		
//		if ( !super.OnStoreLoad( ctx, version ) )
//			return false;
//		
//        if(expCodeLock)
//        {
//            // Force unlock and then delete the codelock
//            expCodeLock.UnlockServer(NULL, this);
//            expCodeLock.Delete();
//        }
//		return true;
//	}
//};