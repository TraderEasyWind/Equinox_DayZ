class MassiveMod_AmmoCanBase: Container_Base
{
	ref array<string> AmmoBoxCargo = {"Box_Base"};
	
	
	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
		{
			return false;
		}

		foreach (string allowedCargo : AmmoBoxCargo)
		{
			if (item.IsKindOf(allowedCargo))
			{
				return true;
			}
		}

		return false;
	}

	override bool CanSwapItemInCargo(EntityAI child_entity, EntityAI new_entity)
	{
		if (!super.CanSwapItemInCargo(child_entity, new_entity))
		{
			return false;
		}

		foreach (string allowedCargo : AmmoBoxCargo)
		{
			if (new_entity.IsKindOf(allowedCargo))
			{
				return true;
			}
		}
		return false;
	}

    protected bool m_contentsSpawned = false;
    void MassiveMod_AmmoCanBase()
    {
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.Open, 1000);
    }

    override void OnWork(float consumed_energy)
    {
        if (GetGame() && GetGame().IsServer()) Open();
    }

    void Open()
    {
        GameInventory m_Inventory = GetInventory();
		m_Inventory.CreateAttachment("MassiveMod_MilitaryCanOpener");
        if (m_Inventory && GetGame() && (GetGame().IsServer() || !GetGame().IsMultiplayer()) && !m_contentsSpawned)
        {
            m_contentsSpawned = true;
            
            // Fetch ammo type and quantity from config
            string ammoType = ConfigGetString("MM_AmmoBoxType");  
            int ammoBoxQuantity = ConfigGetInt("MM_AmmoBoxQuantity");

            // Debug print to check if values are retrieved properly
            Print("[MASSDEBUG] Ammo Type: " + ammoType);
            Print("[MASSDEBUG] Ammo Box Quantity: " + ammoBoxQuantity.ToString());

            if (ammoType != "" && ammoBoxQuantity > 0)
            {
                // Adding the ammo boxes to the inventory
                Print("[MASSDEBUG] Adding " + ammoBoxQuantity + " boxes of " + ammoType + " to " + GetType());

                for (int i = 0; i < ammoBoxQuantity; i++)
                {
                    EntityAI ent = EntityAI.Cast(GetInventory().CreateInInventory(ammoType));

                    if (!ent)
                    {
                        Print("[MASSDEBUG] Failed to create ammo box in " + GetType());
                        return;
                    }
                }

                Print("[MASSDEBUG] Successfully spawned " + ammoBoxQuantity.ToString() + " ammo boxes in " + GetType());
            }
            else
            {
                Print("[MASSDEBUG] Invalid ammo type or quantity.");
            }
        }
    }

    override bool OnStoreLoad(ParamsReadContext ctx, int version)
    {
        if (!super.OnStoreLoad(ctx, version))
        {
            return false;
        }
        if (!ctx.Read(m_contentsSpawned))
        {
            return false;
        }
        return true;
    }

    override void OnStoreSave(ParamsWriteContext ctx)
    {
        super.OnStoreSave(ctx);

        ctx.Write(m_contentsSpawned);
    }
};

class MassiveMod_AmmoCan762x39: MassiveMod_AmmoCanBase{};
class MassiveMod_AmmoCan762x39_Opened: MassiveMod_AmmoCan762x39{}
class MassiveMod_AmmoCan545x39: MassiveMod_AmmoCanBase{};
class MassiveMod_AmmoCan545x39_Opened: MassiveMod_AmmoCan545x39{};
class MassiveMod_AmmoCan762x54: MassiveMod_AmmoCanBase{};
class MassiveMod_AmmoCan762x54_Opened: MassiveMod_AmmoCan762x54{};
class MassiveMod_AmmoCan9x39: MassiveMod_AmmoCanBase{};
class MassiveMod_AmmoCan9x39_Opened: MassiveMod_AmmoCan9x39{};
class MassiveMod_AmmoCan308Win: MassiveMod_AmmoCanBase{};
class MassiveMod_AmmoCan308Win_Opened: MassiveMod_AmmoCan308Win{};
class MassiveMod_AmmoCan556x45: MassiveMod_AmmoCanBase{};
class MassiveMod_AmmoCan556x45_Opened: MassiveMod_AmmoCan556x45{};