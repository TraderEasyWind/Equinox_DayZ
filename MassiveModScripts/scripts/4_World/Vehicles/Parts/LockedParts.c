class MassiveMod_CarRadiator: CarRadiator
{
    bool m_IsLocked;
    void MassiveMod_CarRadiator()
    {
        if (GetGame().IsServer())
        {
            LockVehiclePart();
        }
    }
	
	override int GetHideIconMask()
	{
		return EInventoryIconVisibility.HIDE_VICINITY;
	}

    void LockVehiclePart()
    {
        m_IsLocked = true;
        SetTakeable(false);
        SetSynchDirty();
    }

    override bool CanPutInCargo(EntityAI parent)
    {
        return !m_IsLocked;
    }

    override bool CanSaveItemInHands(EntityAI item_in_hands)
    {
        return !m_IsLocked;
    }

    override bool CanReceiveItemIntoHands(EntityAI item_to_hands)
    {
        return !m_IsLocked;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {
        return !m_IsLocked;
    }
}
class MassiveMod_CarBattery: CarBattery
{
    bool m_IsLocked;

    void MassiveMod_CarBattery()
    {
        if (GetGame().IsServer())
        {
            LockVehiclePart();
        }
    }

    void LockVehiclePart()
    {
        m_IsLocked = true;
        SetTakeable(false);
        SetSynchDirty();
    }
	
	override int GetHideIconMask()
	{
		return EInventoryIconVisibility.HIDE_VICINITY;
	}

    override bool CanPutInCargo(EntityAI parent)
    {
        return !m_IsLocked;
    }

    override bool CanSaveItemInHands(EntityAI item_in_hands)
    {
        return !m_IsLocked;
    }

    override bool CanReceiveItemIntoHands(EntityAI item_to_hands)
    {
        return !m_IsLocked;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {
        return !m_IsLocked;
    }
}
class MassiveMod_SparkPlug: SparkPlug
{
    bool m_IsLocked;

    void MassiveMod_SparkPlug()
    {
        if (GetGame().IsServer())
        {
            LockVehiclePart();
        }
    }
	
	override int GetHideIconMask()
	{
		return EInventoryIconVisibility.HIDE_VICINITY;
	}

    void LockVehiclePart()
    {
        m_IsLocked = true;
        SetTakeable(false);
        SetSynchDirty();
    }

    override bool CanPutInCargo(EntityAI parent)
    {
        return !m_IsLocked;
    }

    override bool CanSaveItemInHands(EntityAI item_in_hands)
    {
        return !m_IsLocked;
    }

    override bool CanReceiveItemIntoHands(EntityAI item_to_hands)
    {
        return !m_IsLocked;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {
        return !m_IsLocked;
    }
}
class MassiveMod_TruckBattery: TruckBattery
{
    bool m_IsLocked;

    void MassiveMod_TruckBattery()
    {
        if (GetGame().IsServer())
        {
            LockVehiclePart();
        }
    }
	
	override int GetHideIconMask()
	{
		return EInventoryIconVisibility.HIDE_VICINITY;
	}

    void LockVehiclePart()
    {
        m_IsLocked = true;
        SetTakeable(false);
        SetSynchDirty();
    }

    override bool CanPutInCargo(EntityAI parent)
    {
        return !m_IsLocked;
    }

    override bool CanSaveItemInHands(EntityAI item_in_hands)
    {
        return !m_IsLocked;
    }

    override bool CanReceiveItemIntoHands(EntityAI item_to_hands)
    {
        return !m_IsLocked;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {
        return !m_IsLocked;
    }
}
class MassiveMod_UnlockVehiclePart extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Uninstall Vehicle Part";
		m_IsInstaRecipe = false;
		m_AnimationLength = 1;
		m_Specialty = 0.01;
		m_AnywhereInInventory = false;

		InsertIngredientEx(0, "MassiveMod_CarRadiator", "UnlockVehiclePart");
		InsertIngredientEx(0, "MassiveMod_CarBattery", "UnlockVehiclePart");
		InsertIngredientEx(0, "MassiveMod_SparkPlug", "UnlockVehiclePart");
		InsertIngredientEx(0, "MassiveMod_TruckBattery", "UnlockVehiclePart"); // <- Added

		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;
		m_MinQuantityIngredient[0] = -1;
		m_MaxQuantityIngredient[0] = -1;
		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = true;

		InsertIngredient(1, "Wrench");
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 3;
		m_MinQuantityIngredient[1] = -1;
		m_MaxQuantityIngredient[1] = -1;
		m_IngredientAddHealth[1] = -5;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = false;

		m_ResultSetFullQuantity[0] = false;
		m_ResultSetQuantity[0] = 0;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = -1;
		m_ResultInheritsColor[0] = -1;
		m_ResultToInventory[0] = -1;
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = 0;
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return true;
	}
	
	void ReplaceModdedPart(ItemBase moddedPart, string vanillaType, PlayerBase player)
	{
		vector position = moddedPart.GetPosition();
		vector orientation = moddedPart.GetOrientation();
	
		ItemBase vanillaPart = ItemBase.Cast(GetGame().CreateObject(vanillaType, position));
		if (!vanillaPart)
			return;
	
		vanillaPart.SetOrientation(orientation);
		MiscGameplayFunctions.TransferItemProperties(moddedPart, vanillaPart);
		MiscGameplayFunctions.TransferInventory(moddedPart, vanillaPart, player);
	}

	override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
	{
		ItemBase moddedPart = ingredients[0];
		string vanillaType;

		if (moddedPart.IsInherited(MassiveMod_CarRadiator))
			vanillaType = "CarRadiator";
		else if (moddedPart.IsInherited(MassiveMod_CarBattery))
			vanillaType = "CarBattery";
		else if (moddedPart.IsInherited(MassiveMod_SparkPlug))
			vanillaType = "SparkPlug";
		else if (moddedPart.IsInherited(MassiveMod_TruckBattery))
			vanillaType = "TruckBattery";

		if (vanillaType != "")
		{
			ReplaceModdedPart(moddedPart, vanillaType, player);
		}
	}
}
