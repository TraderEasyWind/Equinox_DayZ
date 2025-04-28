class MassiveMod_EquipmentLocker: DeployableContainer_Base
{
	void MassiveMod_LargeWoodenCrate()
	{
		m_HalfExtents = Vector(0.15,0.25,0.4);
	}
	
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
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
		return super.CanReceiveAttachment(attachment, slotId);
	};
	
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
		m_HalfExtents = Vector(0.2,0.5,0.4);
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
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
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
		return super.CanReceiveAttachment(attachment, slotId);
	};
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
	override bool CanPutInCargo(EntityAI parent)
	{
		if (!super.CanPutInCargo(parent))
			return false;
		
		if (parent && parent.IsKindOf("Barrel_ColorBase"))
			return false;
		
		if ( !IsEmpty() )
        {
            return false;
        }
		if ( !Expansion_HasEntityStorage() )
        {
           return true;
        }
        return false;

		return true;
	}
	//override void Open()
    //{
    //    super.Open();
    //}
	//
    //void DelayedClose()
    //{
    //    if (GetGame().IsServer())
    //    {
	//		EntityAI parent = this.GetHierarchyParent();
	//		if (parent)
	//		{
	//			Print("[MASSDEBUG] DelayedClose Stopped: Container is inside (" + parent.GetType() + ") — auto-close canceled.");
	//			return; 
	//		}
    //        if (IsOpen() && !IsEmpty())
    //        {
    //            if (IsPlayerNear())
    //            {
    //                Print("[MASSDEBUG] DelayedClose Interrupted: Player Nearby.");
    //                ScheduleDelayedClose(600000);
    //                return;
    //            }
    //            Close();
    //        }
    //        else
    //        {
    //            Print("[MASSDEBUG] DelayedClose Stopped: Item is Closed or Empty");
    //        }
    //    }
    //}
	//
    //void ScheduleDelayedClose(int delay)
    //{
    //    if (GetGame().IsServer())
    //    {
	//		EntityAI parent = this.GetHierarchyParent();
	//		if (parent)
	//		{
	//			Print("[MASSDEBUG] ScheduleDelayedClose Stopped: Container is inside (" + parent.GetType() + ") — auto-close canceled.");
	//			return; 
	//		}
    //        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).Remove(DelayedClose);
    //        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedClose, delay, false);
    //    }
    //}
    //override void Close()
    //{
    //    super.Close();
    //    if (GetGame().IsServer())
    //    {
    //        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).Remove(DelayedClose); 
    //    }
    //}
    //bool IsPlayerNear()
    //{
    //    if (GetGame().IsServer())
    //    {
    //        array<Man> players = new array<Man>();
    //        GetGame().GetPlayers(players);
    //        foreach (Man player : players)
    //        {
    //            PlayerBase pb = PlayerBase.Cast(player);
    //            if (!pb) continue;
	//
    //            float distance = vector.Distance(pb.GetPosition(), this.GetPosition());
    //            if (distance < 2.5)
    //            {
    //                return true; 
    //            }
    //        }
    //        return false; 
    //    }
    //    return false; 
    //}
    //override bool OnStoreLoad(ParamsReadContext ctx, int version)
    //{
    //    if (!super.OnStoreLoad(ctx, version))
    //        return false;
    //    if (GetGame().IsServer())
    //    {
	//		EntityAI parent = this.GetHierarchyParent();
	//		if (parent)
	//		{
	//			Print("[MASSDEBUG] OnStoreLoad Stopped: Container is inside (" + parent.GetType() + ") — auto-close canceled.");
	//			return true;
	//		}
    //        if (IsOpen() && !IsEmpty())
    //        {
    //             ScheduleDelayedClose(5000);
    //             Print("[MASSDEBUG] Auto-close timer scheduled on load.");
    //        }
    //    }
    //    return true;
    //}
	override void Open()
    {
        super.Open();
    }

    void DelayedClose()
    {
        #ifdef SERVER
		EntityAI parent = this.GetHierarchyParent();
		if (parent)
		{
			Print("[MASSDEBUG] DelayedClose Stopped: Container is inside (" + parent.GetType() + ") — auto-close canceled.");
			return; 
		}
        if (IsOpen() && !IsEmpty())
        {
            if (IsPlayerNear())
            {
                Print("[MASSDEBUG] DelayedClose Interrupted: Player Nearby.");
                ScheduleDelayedClose(600000);
                return;
            }
            Close();
        }
        else
        {
            Print("[MASSDEBUG] DelayedClose Stopped: Item is Closed or Empty");
        }
		#endif
    }

    void ScheduleDelayedClose(int delay)
    {
		#ifdef SERVER   
		EntityAI parent = this.GetHierarchyParent();
		if (parent)
		{
			Print("[MASSDEBUG] ScheduleDelayedClose Stopped: Container is inside (" + parent.GetType() + ") — auto-close canceled.");
			return; 
		}
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).Remove(DelayedClose);
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedClose, delay, false);
        #endif
    }
	
    override void Close()
    {
        super.Close();
        #ifdef SERVER
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).Remove(DelayedClose); 
		#endif
    }
    bool IsPlayerNear()
    {
		#ifdef SERVER
        array<Man> players = new array<Man>();
        GetGame().GetPlayers(players);
        foreach (Man player : players)
        {
            PlayerBase pb = PlayerBase.Cast(player);
            if (!pb) continue;

            float distance = vector.Distance(pb.GetPosition(), this.GetPosition());
            if (distance < 2.5)
            {
                return true; 
            }
        }
        return false; 
		#endif
    }
    override bool OnStoreLoad(ParamsReadContext ctx, int version)
    {
        if (!super.OnStoreLoad(ctx, version))
            return false;
		
		EntityAI parent = this.GetHierarchyParent();
		if (parent)
		{
			Print("[MASSDEBUG] OnStoreLoad Stopped: Container is inside (" + parent.GetType() + ") — auto-close canceled.");
			return true;
		}
        if (IsOpen() && !IsEmpty())
        {
             ScheduleDelayedClose(5000);
             Print("[MASSDEBUG] Auto-close timer scheduled on load.");
        }
        return true;
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
        #ifdef SERVER
		EntityAI parent = this.GetHierarchyParent();
		if (parent)
		{
			Print("[MASSDEBUG] DelayedClose Stopped: Container is inside (" + parent.GetType() + ") — auto-close canceled.");
			return; 
		}
        if (IsOpen() && !IsEmpty())
        {
            if (IsPlayerNear())
            {
                Print("[MASSDEBUG] DelayedClose Interrupted: Player Nearby.");
                ScheduleDelayedClose(600000);
                return;
            }
            Close();
        }
        else
        {
            Print("[MASSDEBUG] DelayedClose Stopped: Item is Closed or Empty");
        }
		#endif
    }

    void ScheduleDelayedClose(int delay)
    {
		#ifdef SERVER   
		EntityAI parent = this.GetHierarchyParent();
		if (parent)
		{
			Print("[MASSDEBUG] ScheduleDelayedClose Stopped: Container is inside (" + parent.GetType() + ") — auto-close canceled.");
			return; 
		}
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).Remove(DelayedClose);
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(DelayedClose, delay, false);
        #endif
    }
	
    override void Close()
    {
        super.Close();
        #ifdef SERVER
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).Remove(DelayedClose); 
		#endif
    }
    bool IsPlayerNear()
    {
		#ifdef SERVER
        array<Man> players = new array<Man>();
        GetGame().GetPlayers(players);
        foreach (Man player : players)
        {
            PlayerBase pb = PlayerBase.Cast(player);
            if (!pb) continue;

            float distance = vector.Distance(pb.GetPosition(), this.GetPosition());
            if (distance < 2.5)
            {
                return true; 
            }
        }
        return false; 
		#endif
    }
    override bool OnStoreLoad(ParamsReadContext ctx, int version)
    {
        if (!super.OnStoreLoad(ctx, version))
            return false;
		
		EntityAI parent = this.GetHierarchyParent();
		if (parent)
		{
			Print("[MASSDEBUG] OnStoreLoad Stopped: Container is inside (" + parent.GetType() + ") — auto-close canceled.");
			return true;
		}
        if (IsOpen() && !IsEmpty())
        {
             ScheduleDelayedClose(5000);
             Print("[MASSDEBUG] Auto-close timer scheduled on load.");
        }
        return true;
    }
};
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