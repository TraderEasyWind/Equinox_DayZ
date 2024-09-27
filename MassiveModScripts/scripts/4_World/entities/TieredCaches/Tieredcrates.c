class CrateConsts
{
	const float CRATE_LOOKUP_RADIUS		= 500.0;
}

class MassiveModCrate_Base: Container_Base
{
	bool m_IsOpen = true;
	bool m_HasScanned = false;
	
	float GetSpawnHeight()
	{
		return 3;
	}
	
	void MassiveModCrate_Base()
	{
		RegisterNetSyncVariableBool("m_IsOpen");
		m_IsOpen = false;
	}	
	
	override void EEOnCECreate()
	{
		if ( GetGame().IsServer() )
		{
			vector curpos = GetPosition();

			if (curpos[1] < GetSpawnHeight())
			{
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedDelete, 5000, false); //call later to prevent null pointer issues
			return;
			}

			if ( ScanForOtherCrates() )
			return;
			
			AddHealth("", "",9999);
			Print("CrateSpawnedCE " + GetType() + " at " + GetPosition());
		}

		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(HideInventory, 5000, false);
	}
		
	bool ScanForOtherCrates()
    {
        if ( m_HasScanned )
            return false;

        m_HasScanned = true;

        array<Object> objects = new array<Object>;
        array<CargoBase> proxyCargos = new array<CargoBase>;
        vector position = GetPosition();
        GetGame().GetObjectsAtPosition3D( position, 1000, objects, proxyCargos );

        Print("Found "+objects.Count()+" objects");

        MassiveModCrate_Base masscrate;
        foreach(Object obj: objects)
        {
            if ( Class.CastTo( masscrate, obj ) )
            {
                if ( masscrate.GetType() == GetType() )
                {
                    Print("Found a" + GetType() +obj.GetPosition()+" while we are at" +position);
                    if ( masscrate.GetPosition() != position )
                    {
                        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedDelete, 5000, false); //call later to prevent null pointer issues
                        return true;
                    }
                }
            }
        }
        return false;
    }
	
	void DelayedDelete()
    {
        Print("DelayedDelete " + GetType() + " at " + GetPosition());

        GetGame().ObjectDelete(this);
    }
	
	void HideInventory()
	{
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
	}
	
	void DelayedDestroy()
	{
		AddHealth("", "",-9999);

		Print("CrateDestroyed " + GetType() + " at " + GetPosition());
	}
	
	
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	
	override bool CanReceiveItemIntoHands (EntityAI item_to_hands)
	{
		if (!m_IsOpen)
		{
			return false;
		}
		return true;
	}
	
	override bool CanSaveItemInHands (EntityAI item_in_hands)
	{
		return false;
	}
	
	override bool CanPutIntoHands (EntityAI parent)
	{
		if (!m_IsOpen)
		{
			return false;
		}
		return true;
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
	
	override bool OnStoreLoad( ParamsReadContext ctx, int version )
    {
        if ( !super.OnStoreLoad( ctx, version ) )
            return false;

		if ( !ctx.Read( m_IsOpen ) )
		{
			m_IsOpen = false;
			return false;
		}

		if ( !ctx.Read( m_HasScanned ) )
		{
			m_HasScanned = true;
			return false;
		}

        return true;
    }
    
    override void OnStoreSave(ParamsWriteContext ctx)
    {
        super.OnStoreSave( ctx );
        
        ctx.Write( m_IsOpen );
        ctx.Write( m_HasScanned );
    }
	
	override void AfterStoreLoad()
    {
        super.AfterStoreLoad();

        if (m_IsOpen) 
		{ 
            GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedDestroy, 600000, false);
			Print("CrateDestroyTimerAfterLoad " + GetType() + " at " + GetPosition());
		}
    }
}

class MassiveMod_CrateTier1 : MassiveModCrate_Base{}
class MassiveMod_CrateTier1_Food_Meds : MassiveMod_CrateTier1{}
class MassiveMod_CrateTier1_Tools : MassiveMod_CrateTier1{}
class MassiveMod_CrateTier2 : MassiveModCrate_Base{}
class MassiveMod_CrateTier3 : MassiveModCrate_Base{}
class MassiveMod_CrateTier4 : MassiveModCrate_Base{}
class MassiveMod_CrateTier5 : MassiveModCrate_Base{}