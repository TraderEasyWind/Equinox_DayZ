class MassiveMod_EquipmentLocker: DeployableContainer_Base
{
	void MassiveMod_LargeWoodenCrate()
	{
		m_HalfExtents = Vector(0.15,0.25,0.4);
	}
    override bool CanPutIntoHands( EntityAI parent )
    {
        if ( !IsEmpty() )
        {
            return false; 
        }
		if ( !Expansion_HasEntityStorage() )
        {
            return true;
        }
        return false;
    }
    override bool CanPutInCargo( EntityAI parent )
    {
        if ( !IsEmpty() )
        {
            return false;
        }
		if ( !Expansion_HasEntityStorage() )
        {
           return true;
        }
        return false;
    }
	bool CanPutInInventory (EntityAI parent)
    {
        return CanPutIntoHands(parent);
    }
    override bool CanReceiveItemIntoCargo(EntityAI item)
	{
        EntityAI parent = GetHierarchyParent();
		if( parent && parent.IsPlayer() )
		{
            PlayerBase player = PlayerBase.Cast(parent);
			if (player && player.GetItemInHands() == this)
			{
				return false;
			}
		}
		return super.CanReceiveItemIntoCargo(item);
	};
};
class MassiveMod_LargeWoodenCrate: DeployableContainer_Base
{
	void MassiveMod_LargeWoodenCrate()
	{
		m_HalfExtents = Vector(0.15,0.25,0.4);
	}
    override bool CanPutIntoHands( EntityAI parent )
    {
        if ( !IsEmpty() )
        {
            return false; 
        }
		if ( !Expansion_HasEntityStorage() )
        {
            return true;
        }
        return false;
    }
    override bool CanPutInCargo( EntityAI parent )
    {
        if ( !IsEmpty() )
        {
            return false;
        }
		if ( !Expansion_HasEntityStorage() )
        {
           return true;
        }
        return false;
    }
	bool CanPutInInventory (EntityAI parent)
    {
        return CanPutIntoHands(parent);
    }
    override bool CanReceiveItemIntoCargo(EntityAI item)
	{
        EntityAI parent = GetHierarchyParent();
		if( parent && parent.IsPlayer() )
		{
            PlayerBase player = PlayerBase.Cast(parent);
			if (player && player.GetItemInHands() == this)
			{
				return false;
			}
		}
		return super.CanReceiveItemIntoCargo(item);
	};
};
class MassiveMod_GunWall: DeployableContainer_Base
{
	void MassiveMod_GunWall()
	{
		m_HalfExtents = Vector(0.15,0.25,0.4);
	}
    override bool CanPutIntoHands( EntityAI parent )
    {
        if ( !IsEmpty() )
        {
            return false; 
        }
		if ( !Expansion_HasEntityStorage() )
        {
            return true;
        }
        return false;
    }
    override bool CanPutInCargo( EntityAI parent )
    {
        if ( !IsEmpty() )
        {
            return false;
        }
		if ( !Expansion_HasEntityStorage() )
        {
           return true;
        }
        return false;
    }
	bool CanPutInInventory (EntityAI parent)
    {
        return CanPutIntoHands(parent);
    }
    override bool CanReceiveItemIntoCargo(EntityAI item)
	{
        EntityAI parent = GetHierarchyParent();
		if( parent && parent.IsPlayer() )
		{
            PlayerBase player = PlayerBase.Cast(parent);
			if (player && player.GetItemInHands() == this)
			{
				return false;
			}
		}
		return super.CanReceiveItemIntoCargo(item);
	};
};
modded class Container_Base
{
	override void Open()
	{
		super.Open();
	}
	
	void DelayedClose()
    {
        if (IsOpen() && !IsEmpty())
        {
            Close();
        }
		else Print("[MASSDEBUG] DelayedClose Stopped Item is Empty");
    }
	
	void ScheduleDelayedClose(int delay)
    {
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedClose, delay, false);
    }

	override void Close()
	{

		super.Close();
	}
}
modded class ExpansionActionRestoreContents
{
	void ExpansionActionRestoreContents()
	{
		m_Text = "#Open";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Container_Base container;
		if (!Class.CastTo(container, target.GetParentOrObject()))
			return false;

		//! Disallow restore contents action on openable containers if closed (useful for debugging if automatic restore on open failed)
		if ((container.ExpansionIsOpenable() || container.IsNonExpansionOpenable()) && !container.IsOpen())
			return false;

		if (!container.Expansion_HasEntityStorage() || !container.Expansion_IsEmptyIgnoringLockedSlots())
			return false;

		return true;
	}
	
	override void OnStartServer( ActionData action_data )
	{
		Container_Base container;

		if (!Class.CastTo(container, action_data.m_Target.GetParentOrObject()))
			return;

		if (container.Expansion_RestoreContents(action_data.m_Player))
		{
			// Restoration was successful, call DelayedClose on the container itself
			container.ScheduleDelayedClose(300000); // Schedule the delayed close

		}
		else
		{
			ExpansionNotification("STR_EXPANSION_ERROR_TITLE", "Could not restore contents from virtual storage").Error(action_data.m_Player.GetIdentity());
		}
	}
}

modded class ExpansionActionStoreContents
{
    void ExpansionActionStoreContents()
    {
        m_Text = "#Close";
    }
};