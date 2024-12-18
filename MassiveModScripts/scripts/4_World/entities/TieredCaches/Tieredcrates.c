class CrateConsts
{
	const float CRATE_LOOKUP_RADIUS		= 500.0;
}

//class MassiveModCrate_Base: Container_Base
//{
//	bool m_IsOpen;
//	bool m_HasScanned;
//	
//	void MassiveModCrate_Base()
//	{
//		RegisterNetSyncVariableBool("m_IsOpen");
//	}	
//	
//	override void EEOnCECreate()
//	{
//		if ( GetGame().IsServer() )
//		{
//			vector curpos = GetPosition();
//
//			if (curpos[1] < GetSpawnHeight())
//			{
//				GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedDelete, 5000, false); //call later to prevent null pointer issues
//				return;
//			}
//
//			if ( ScanForOtherCrates() )
//				return;
//			
//			AddHealth("", "",9999);
//			Print("CrateSpawnedCE " + GetType() + " at " + GetPosition());
//		}
//
//		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(HideInventory, 5000, false);
//	}
//		
//	bool ScanForOtherCrates()
//    {
//        if ( m_HasScanned )
//            return false;
//
//        m_HasScanned = true;
//
//        array<Object> objects = new array<Object>;
//        array<CargoBase> proxyCargos = new array<CargoBase>;
//        vector position = GetPosition();
//        GetGame().GetObjectsAtPosition3D( position, 1000, objects, proxyCargos );
//
//        Print("Found "+objects.Count()+" objects");
//
//        MassiveModCrate_Base masscrate;
//        foreach(Object obj: objects)
//        {
//			if ( obj.GetType() == GetType() )
//            {
//            	if ( Class.CastTo( masscrate, obj ) )
//                {
//                    Print("Found " + GetType() +obj.GetPosition()+" while we are at" +position);
//                    if ( masscrate.GetPosition() != position )
//                    {
//                        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedDelete, 5000, false); //call later to prevent null pointer issues
//                        return true;
//                    }
//                }
//            }
//        }
//
//        return false;
//    }
//	
//	void DelayedDelete()
//    {
//        Print("DelayedDelete " + GetType() + " at " + GetPosition());
//
//        GetGame().ObjectDelete(this);
//    }
//	
//	void HideInventory()
//	{
//		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
//	}
//	
//	void DelayedDestroy()
//	{
//		AddHealth("", "",-9999);
//
//		Print("CrateDestroyed " + GetType() + " at " + GetPosition());
//	}
//	
//	float GetSpawnHeight()
//	{
//		return 3;
//	}
//	
//	override bool CanPutInCargo( EntityAI parent )
//	{
//		return false;
//	}
//	
//	override bool CanSaveItemInHands (EntityAI item_in_hands)
//	{
//		return false;
//	}
//	
//	override bool CanReceiveItemIntoHands (EntityAI item_to_hands)
//	{
//		return m_IsOpen;
//	}
//	
//	override bool CanPutIntoHands (EntityAI parent)
//	{
//		return m_IsOpen;
//	}
//	
//	override bool IsInventoryVisible()
//	{
//		return m_IsOpen;
//	}
//	
//	void UnlockMe()
//	{
//		m_IsOpen = true;
//
//		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedDestroy, 600000, false);
//		GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
//
//		Print("CrateOpened " + GetType() + " at " + GetPosition());
//		Print("CrateDestroyTimerAfterOpened " + GetType() + " at " + GetPosition());
//
//		SetSynchDirty();
//	}
//	
//	override bool OnStoreLoad( ParamsReadContext ctx, int version )
//    {
//        if ( !super.OnStoreLoad( ctx, version ) )
//            return false;
//
//		if ( !ctx.Read( m_IsOpen ) )
//			return false;
//
//		if ( !ctx.Read( m_HasScanned ) )
//			return false;
//
//        return true;
//    }
//    
//    override void OnStoreSave(ParamsWriteContext ctx)
//    {
//        super.OnStoreSave( ctx );
//        
//        ctx.Write( m_IsOpen );
//        ctx.Write( m_HasScanned );
//    }
//	
//	override void AfterStoreLoad()
//    {
//        super.AfterStoreLoad();
//
//        if (m_IsOpen) 
//		{ 
//            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedDestroy, 600000, false);
//
//			Print("CrateDestroyTimerAfterLoad " + GetType() + " at " + GetPosition());
//		}
//    }
//};
class MassiveModCrate_Base: Container_Base
{
    bool m_IsOpen;
    bool m_HasScanned;
    
    void MassiveModCrate_Base()
    {
        RegisterNetSyncVariableBool("m_IsOpen");
    }  
    
    override void EEOnCECreate()
    {
        if ( GetGame().IsServer() )
        {
            vector curpos = GetPosition();

            if (curpos[1] < GetSpawnHeight())
            {
                GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedDelete, 5000, false); // Call later to prevent null pointer issues
                return;
            }

            if ( ScanForOtherCrates() )
                return;
            
            AddHealth("", "", 9999); // Add health to the crate itself (set high health)
            Print("CrateSpawnedCE " + GetType() + " at " + GetPosition());

            // Set pristine health for all items inside the crate
            SetPristineHealthForItems();
        }

        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(HideInventory, 5000, false);
    }

    
	void SetPristineHealthForItems()
	{
		if (GetInventory() && GetInventory().GetCargo())
		{
			int item_count = GetInventory().GetCargo().GetItemCount(); // Get the number of items in the cargo
			if (item_count > 0)
			{
				// Iterate through the items in the cargo
				for (int i = 0; i < item_count; i++)
				{
					// Get each item in the cargo
					ItemBase item = ItemBase.Cast(GetInventory().GetCargo().GetItem(i));
					if (item)
					{
						// Set the health of the item to its maximum value (pristine)
						item.AddHealth("", "", 9999); // Set the health to the max value
					}
				}
			}
		}
	}

    
   // bool ScanForOtherCrates()
   // {
   //     if ( m_HasScanned )
   //         return false;
   //
   //     m_HasScanned = true;
   //
   //     array<Object> objects = new array<Object>;
   //     array<CargoBase> proxyCargos = new array<CargoBase>;
   //     vector position = GetPosition();
   //     GetGame().GetObjectsAtPosition3D( position, 1000, objects, proxyCargos );
   //
   //     Print("Found "+objects.Count()+" objects");
   //
   //     MassiveModCrate_Base masscrate;
   //     foreach(Object obj: objects)
   //     {
   //        if (obj.IsKindOf(GetType())) // Check if the other object is of the same type or a derived class
   //         {
   //             if ( Class.CastTo( masscrate, obj ) )
   //             {
   //                 Print("Found " + GetType() + obj.GetPosition() + " while we are at " + position);
   //                 if ( masscrate.GetPosition() != position )
   //                 {
   //                     GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedDelete, 5000, false); // Call later to prevent null pointer issues
   //                     return true;
   //                 }
   //             }
   //         }
   //     }
   //
   //     return false;
   // }

    //void DelayedDelete()
    //{
    //    Print("DelayedDelete " + GetType() + " at " + GetPosition());
    //    GetGame().ObjectDelete(this);
    //}
	
	bool ScanForOtherCrates()
	{
		if ( m_HasScanned )
			return false;
	
		m_HasScanned = true;
	
		array<Object> objects = new array<Object>;
		array<CargoBase> proxyCargos = new array<CargoBase>;
		vector position = GetPosition();
		GetGame().GetObjectsAtPosition3D( position, 1000, objects, proxyCargos );  // Get objects in the vicinity
	
		Print("Found " + objects.Count() + " objects");
	
		MassiveModCrate_Base masscrate;
		foreach(Object obj: objects)
		{
			// Check if the object is of the same type or a derived type using IsKindOf
			if (obj.IsKindOf(GetType()))  
			{
				if (Class.CastTo(masscrate, obj))  // Ensure it's a crate object
				{
					Print("Found " + GetType() + " at position " + obj.GetPosition() + " while checking position " + position);
					
					if (masscrate.GetPosition() != position)  // If the crate's position doesn't match, delete the current crate
					{
						// Print types of both crates before deletion
						Print("Crate type to be deleted: " + GetType());
						Print("Found duplicate crate type: " + masscrate.GetType());
	
						GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedDelete, 5000, false);  // Schedule delete to avoid null pointer issues
						return true;  // Crate is already nearby, so we return true and prevent this crate from being placed
					}
				}
			}
		}
	
		return false;  // No duplicate crates found in the vicinity
	}
	
	void DelayedDelete()
	{
		// Add the print statement to show the type of the crate being deleted
		Print("DelayedDelete called for " + GetType() + " at " + GetPosition());
	
		GetGame().ObjectDelete(this);  // Delete the current crate
	}


    void HideInventory()
    {
        GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
    }

    void DelayedDestroy()
    {
        AddHealth("", "", -9999);
        Print("CrateDestroyed " + GetType() + " at " + GetPosition());
    }

    float GetSpawnHeight()
    {
        return 3;
    }

    override bool CanPutInCargo(EntityAI parent)
    {
        return false;
    }

    override bool CanSaveItemInHands(EntityAI item_in_hands)
    {
        return false;
    }

    override bool CanReceiveItemIntoHands(EntityAI item_to_hands)
    {
        return m_IsOpen;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {
        return m_IsOpen;
    }

    override bool IsInventoryVisible()
    {
        return m_IsOpen;
    }

    void UnlockMe()
    {
        m_IsOpen = true;

        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedDestroy, 600000, false);
        GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);

        Print("CrateOpened " + GetType() + " at " + GetPosition());
        Print("CrateDestroyTimerAfterOpened " + GetType() + " at " + GetPosition());

        SetSynchDirty();
    }

    override bool OnStoreLoad(ParamsReadContext ctx, int version)
    {
        if (!super.OnStoreLoad(ctx, version))
            return false;

        if (!ctx.Read(m_IsOpen))
            return false;

        if (!ctx.Read(m_HasScanned))
            return false;

        return true;
    }

    override void OnStoreSave(ParamsWriteContext ctx)
    {
        super.OnStoreSave(ctx);

        ctx.Write(m_IsOpen);
        ctx.Write(m_HasScanned);
    }

    override void AfterStoreLoad()
    {
        super.AfterStoreLoad();
        SetPristineHealthForItems();
        if (m_IsOpen)
        { 
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedDestroy, 600000, false);

            Print("CrateDestroyTimerAfterLoad " + GetType() + " at " + GetPosition());
        }
    }
};


class MassiveMod_CrateTier1 : MassiveModCrate_Base{};
class MassiveMod_CrateTier1_Food_Meds : MassiveMod_CrateTier1{};
class MassiveMod_CrateTier1_Tools : MassiveMod_CrateTier1{};
class MassiveMod_CrateTier2 : MassiveModCrate_Base{};
class MassiveMod_CrateTier3 : MassiveModCrate_Base{};
class MassiveMod_CrateTier4 : MassiveModCrate_Base{};
class MassiveMod_CrateTier5 : MassiveModCrate_Base{};