class MassiveMod_Wallet extends Container_Base
{
	ref array<string> WalletCargo = 
	{
		"TraderPlus_Bitcoin","TraderPlus_Coin","TraderPlus_Money_Ruble1_Coin",
		"TraderPlus_Money_Ruble2_Coin","TraderPlus_Money_Ruble5_Coin",
		"TraderPlus_Money_Euro1","TraderPlus_Money_Euro2","TraderPlus_Money_Dollar1",
		"TraderPlus_Money_Dollar2","TraderPlus_Money_Dollar5","TraderPlus_Money_Dollar10",
		"TraderPlus_Money_Dollar20","TraderPlus_Money_Dollar50","TraderPlus_Money_Dollar100",
		"TraderPlus_Money_Euro5","TraderPlus_Money_Euro10","TraderPlus_Money_Euro20","TraderPlus_Money_Euro50",
		"TraderPlus_Money_Euro100","TraderPlus_Money_Euro200","TraderPlus_Money_Euro500","TraderPlus_Money_Ruble5",
		"TraderPlus_Money_Ruble10","TraderPlus_Money_Ruble50","TraderPlus_Money_Ruble100","TraderPlus_Money_Ruble200",
		"TraderPlus_Money_Ruble500","TraderPlus_Money_Ruble1000","TraderPlus_Money_Ruble2000","TraderPlus_Money_Ruble5000",
		"TraderPlus_Money_Wad_Ruble5","TraderPlus_Money_Wad_Ruble10","TraderPlus_Money_Wad_Ruble50"
    };
	
	
	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
		{
			return false;
		}

		foreach (string allowedCargo : WalletCargo)
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

		foreach (string allowedCargo : WalletCargo)
		{
			if (new_entity.IsKindOf(allowedCargo))
			{
				return true;
			}
		}

		return false;
	}
};