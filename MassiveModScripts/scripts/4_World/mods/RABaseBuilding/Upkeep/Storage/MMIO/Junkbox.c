modded class Mass_WeaponCase
{
	ref array<string> GunCargo = {"RifleCore","PistolCore","ItemOptics","DefaultMagazine"};
	
	
	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
		{
			return false;
		}

		foreach (string allowedCargo : GunCargo)
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

		foreach (string allowedCargo : GunCargo)
		{
			if (new_entity.IsKindOf(allowedCargo))
			{
				return true;
			}
		}
		return false;
	}
};