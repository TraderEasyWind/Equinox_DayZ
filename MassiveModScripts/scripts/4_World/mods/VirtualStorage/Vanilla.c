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
modded class Barrel_ColorBase
{
	override void Open()
	{
		super.Open();
	}
	
	override void Close()
	{
		super.Close();
	}
	
	void DelayedClose()
	{
		if (!GetInventory().IsAttachment())
        {
			if (IsOpen() && !IsEmpty())
			{
				// Check if the object is in the player's inventory.
				if (!GetInventory().IsInCargo())  // Add this check
				{
					Close();
				}
				else
				{
					Print("[MASSDEBUG] DelayedClose Stopped: Object is in Inventory.");
				}
			}
            Print("[MASSDEBUG] DelayedClose Stopped: Item is Empty");
        }
		else
		{
			Print("[MASSDEBUG] DelayedClose Stopped: Object is an Attachment.");
		}
	}
	
	override void ScheduleDelayedClose(int delay)
    {
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedClose, delay, false);
    }
};
modded class Container_Base
{
	override void Open()
	{
		super.Open();
	}
	
	void DelayedClose()
	{
		if (!GetInventory().IsAttachment())
        {
			if (IsOpen() && !IsEmpty())
			{
				// Check if the object is in the player's inventory.
				if (!GetInventory().IsInCargo())  // Add this check
				{
					Close();
				}
				else
				{
					Print("[MASSDEBUG] DelayedClose Stopped: Object is in Inventory.");
				}
			}
            Print("[MASSDEBUG] DelayedClose Stopped: Item is Empty");
        }
		else
		{
			Print("[MASSDEBUG] DelayedClose Stopped: Object is an Attachment.");
		}
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
	
	override void OnStartServer(ActionData action_data)
	{
		super.OnStartServer(action_data);
	
		ItemBase container;
		if (Class.CastTo(container, action_data.m_Target.GetParentOrObject()))
		{
			Container_Base containerBase;
			if (Class.CastTo(containerBase, container))
			{
				containerBase.ScheduleDelayedClose(300000);
			}
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
modded class ActionOpenBarrel
{
	override void OnExecuteServer( ActionData action_data )
	{
		super.OnExecuteServer(action_data);
		Object target_object = action_data.m_Target.GetObject();
		Barrel_ColorBase Barrel = Barrel_ColorBase.Cast( target_object );
		if( Barrel )
		{
			Barrel.ScheduleDelayedClose(300000);
		}
	}
};