class MassiveMod_OpenAmmoCan extends RecipeBase
{	
	override void Init()
	{
		m_Name = "#STR_OpenCan0";
		m_IsInstaRecipe = false;
		m_AnimationLength = 1;
		m_Specialty = 0.01;
		
		m_AnywhereInInventory = false;

		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;
		
		m_MinQuantityIngredient[0] = -1;
		m_MaxQuantityIngredient[0] = -1;
		
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 3;
		
		m_MinQuantityIngredient[1] = -1;
		m_MaxQuantityIngredient[1] = -1;
		
		//INGREDIENTS
		//ingredient 1 (Ammo Can)
		InsertIngredientEx(0,"MassiveMod_AmmoCan762x39", "openBeanCan");
		InsertIngredientEx(0,"MassiveMod_AmmoCan545x39", "openBeanCan");
		InsertIngredientEx(0,"MassiveMod_AmmoCan762x54", "openBeanCan");
		InsertIngredientEx(0,"MassiveMod_AmmoCan9x39", "openBeanCan");
		InsertIngredientEx(0,"MassiveMod_AmmoCan308Win", "openBeanCan");
		InsertIngredientEx(0,"MassiveMod_AmmoCan556x45", "openBeanCan");
		
		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = true; // Destroy the original can
		m_IngredientUseSoftSkills[0] = false;
		
		//ingredient 2 (Tool)
		InsertIngredient(1,"Sickle");
		InsertIngredient(1,"KukriKnife");
		InsertIngredient(1,"FangeKnife");
		InsertIngredient(1,"Hacksaw");
		InsertIngredient(1,"KitchenKnife");
		InsertIngredient(1,"SteakKnife");
		InsertIngredient(1,"StoneKnife");
		InsertIngredient(1,"CombatKnife");
		InsertIngredient(1,"HuntingKnife");
		InsertIngredient(1,"Machete");
		InsertIngredient(1,"CrudeMachete");
		InsertIngredient(1,"OrientalMachete");
		InsertIngredient(1,"AK_Bayonet");
		InsertIngredient(1,"M9A1_Bayonet");
		InsertIngredient(1,"Mosin_Bayonet");
		InsertIngredient(1,"SKS_Bayonet");
		InsertIngredient(1,"CanOpener");
		InsertIngredient(1,"MassiveMod_MilitaryCanOpener");
		InsertIngredient(1,"FarmingHoe");
		InsertIngredient(1,"Shovel");
		InsertIngredient(1,"FieldShovel");
		InsertIngredient(1,"Crowbar");
		InsertIngredient(1,"Hammer");
		InsertIngredient(1,"Mace");
		InsertIngredient(1,"Wrench");
		InsertIngredient(1,"LugWrench");
		InsertIngredient(1,"Screwdriver");
		InsertIngredient(1,"SledgeHammer");
		InsertIngredient(1,"BaseballBat");
		InsertIngredient(1,"NailedBaseballBat");
		InsertIngredient(1,"BarbedBaseballBat");
		InsertIngredient(1,"PipeWrench");
		InsertIngredient(1,"Pickaxe");
		InsertIngredient(1,"WoodAxe");
		InsertIngredient(1,"FirefighterAxe");
		InsertIngredient(1,"Hatchet");
		InsertIngredient(1,"HandSaw");
		InsertIngredient(1,"Pliers");
		InsertIngredient(1,"Spear");
		InsertIngredient(1,"Pitchfork");
		InsertIngredient(1,"BoneKnife");
		InsertIngredient(1,"MeatTenderizer");
		InsertIngredient(1,"Cleaver");
		InsertIngredient(1,"Sword");
		InsertIngredient(1,"Iceaxe");
		
		m_IngredientAddHealth[1] = -0.5;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = true;
		
		//result1 (Dynamically Added)
		//AddResult(""); // No need to add here, done in Do()

		m_ResultSetFullQuantity[0] = false;
		m_ResultSetQuantity[0] = 0;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = -1;
		m_ResultInheritsColor[0] = -1;
		m_ResultToInventory[0] = -1; // Place anywhere in player's inventory
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = 0; // IMPORTANT: Inherit attachments
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		ItemBase ammoCan = ingredients[0];
		string ammoCanType = ammoCan.GetType();
	
		// Use a switch statement to check the ammoCanType
		switch (ammoCanType)
		{
			case "MassiveMod_AmmoCan762x39_Opened":
			case "MassiveMod_AmmoCan545x39_Opened":
			case "MassiveMod_AmmoCan762x54_Opened":
			case "MassiveMod_AmmoCan9x39_Opened":
			case "MassiveMod_AmmoCan308Win_Opened":
			case "MassiveMod_AmmoCan556x45_Opened":
				return false; // Cannot open an already opened can
		}
	
		return true; // Proceed if none of the above conditions are met
	}


	override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
	{
		ItemBase ammoCan = ingredients[0];
		string ammoCanType = ammoCan.GetType();
		string openedAmmoCanType = "";

		switch (ammoCanType)
		{
			case "MassiveMod_AmmoCan762x39":
				openedAmmoCanType = "MassiveMod_AmmoCan762x39_Opened";
				break;
			case "MassiveMod_AmmoCan545x39":
				openedAmmoCanType = "MassiveMod_AmmoCan545x39_Opened";
				break;
			case "MassiveMod_AmmoCan762x54":
				openedAmmoCanType = "MassiveMod_AmmoCan762x54_Opened";
				break;
			case "MassiveMod_AmmoCan9x39":
				openedAmmoCanType = "MassiveMod_AmmoCan9x39_Opened";
				break;
			case "MassiveMod_AmmoCan308Win":
				openedAmmoCanType = "MassiveMod_AmmoCan308Win_Opened";
				break;
			case "MassiveMod_AmmoCan556x45":
				openedAmmoCanType = "MassiveMod_AmmoCan556x45_Opened";
				break;
			default:
				Print("WARNING: Unknown ammo can type: " + ammoCanType);
				return; // Don't create anything if the type is unknown
		}

		// Create the opened ammo can
		ItemBase openedAmmoCan = ItemBase.Cast(GetGame().CreateObject(openedAmmoCanType, player.GetPosition(), false, false, false));

		if (openedAmmoCan)
		{
			results.Insert(openedAmmoCan);
		}
		else
		{
			Print("ERROR: Could not create opened ammo can of type: " + openedAmmoCanType);
		}
	}
};