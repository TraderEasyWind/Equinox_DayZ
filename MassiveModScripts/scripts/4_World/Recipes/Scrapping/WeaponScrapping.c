class MassiveMod_WeaponRepairKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Advanced Firearm Repair Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 25;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		m_MaxQuantityIngredient[1] = 900;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"MassiveMod_GunScrap");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = -0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -25;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"WeaponCleaningKit");
		
		m_IngredientAddHealth[1] = -0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("MassiveMod_ADVKit_New");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = 1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -1;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
    {
        return true;
    }
};
class MassiveMod_WeaponScrapping extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Disassemble Firearm";
		m_IsInstaRecipe = false;
		m_AnimationLength = 1;
		m_Specialty = -0.01;
		
		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;
		
		m_MinQuantityIngredient[0] = -1;
		m_MaxQuantityIngredient[0] = -1;
		
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 3;
		
		m_MinQuantityIngredient[1] = -1;
		m_MaxQuantityIngredient[1] = -1;
		
		InsertIngredient(0, "Screwdriver");

		m_IngredientAddHealth[0] = -10;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = false;
		m_IngredientUseSoftSkills[0] = false;
		
		InsertIngredient(1, "Rifle_Base");
		InsertIngredient(1, "Pistol_Base");
		InsertIngredient(1, "BoltActionRifle_Base");
		
		m_IngredientAddHealth[1] = 0;
		m_IngredientSetHealth[1] = 0;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = true;
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return true;
	};

	override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
	{
		ItemBase gun = ingredients[1];
		int scrapQuantity = 0;

		switch (true)
		{
			// Specific guns first
			case gun.IsKindOf("Magnum_Base"):
				scrapQuantity = 3;
				break;
			case gun.IsKindOf("LongHorn_Base"):
				scrapQuantity = 2;
				break;
			case gun.IsKindOf("Deagle_Base"):
				scrapQuantity = 3;
				break;
			case gun.IsKindOf("SawedoffIzh18"):
				scrapQuantity = 1;
				break;
			case gun.IsKindOf("AKS74U"):
				scrapQuantity = 2;
				break;
			case gun.IsKindOf("Ruger1022_Base"):
				scrapQuantity = 2;
				break;
			case gun.IsKindOf("B95_base"):
				scrapQuantity = 2;
				break;
			case gun.IsKindOf("SKS_Base"):
				scrapQuantity = 3;
				break;
			case gun.IsKindOf("Famas_Base"):
				scrapQuantity = 3;
				break;
			case gun.IsKindOf("M16A2_Base"):
				scrapQuantity = 4;
				break;
			case gun.IsKindOf("M4A1_Base"):
				scrapQuantity = 5;
				break;
			case gun.IsKindOf("Aug_Base"):
				scrapQuantity = 4;
				break;
			case gun.IsKindOf("AKM_Base"):
				scrapQuantity = 5;
				break;
			case gun.IsKindOf("SVD_Base"):
				scrapQuantity = 7;
				break;
			case gun.IsKindOf("SV98_Base"):
				scrapQuantity = 7;
				break;
			case gun.IsKindOf("M14_Base"):
				scrapQuantity = 7;
				break;
			case gun.IsKindOf("FAL_Base"):
				scrapQuantity = 6;
				break;
			//MMIO
			case gun.IsKindOf("MassKivaari_Base"):
				scrapQuantity = 10;
				break;
			case gun.IsKindOf("MassM24_Base"):
				scrapQuantity = 8;
				break;
			case gun.IsKindOf("Mass_M98B_Base"):
				scrapQuantity = 9;
				break;
			case gun.IsKindOf("Mass_PKM_Base"):
				scrapQuantity = 12;
				break;
			case gun.IsKindOf("MassM300_Base"):
				scrapQuantity = 10;
				break;
			//JD's Animated Weapons
			case gun.IsKindOf("JD_M249_Base"):
				scrapQuantity = 12;
				break;
			// General classes
			case gun.IsKindOf("Pistol_Base"):
				scrapQuantity = 1;
				break;

			case gun.IsKindOf("BoltActionRifle_Base"):
				scrapQuantity = 5;
				break;

			case gun.IsKindOf("Rifle_Base"):
				scrapQuantity = 3;
				break;

			default:
				scrapQuantity = 2;
				break;
		}

		ItemBase scrap = ItemBase.Cast(GetGame().CreateObject("MassiveMod_GunScrap", player.GetPosition(), false, false, false));
		if (scrap)
		{
			scrap.SetQuantity(scrapQuantity);
			results.Insert(scrap);
		}
	}
};
class MassiveMod_WeaponRepair extends RecipeBase
{
	override void Init()
	{
		m_Name = "Repair Firearm";
		m_IsInstaRecipe = false;
		m_AnimationLength = 1;
		m_Specialty = -0.01;

		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;
		m_MinQuantityIngredient[0] = 1; // Needs a value, but used in CanDo/Do
		m_MaxQuantityIngredient[0] = -1;

		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = -1;
		m_MinQuantityIngredient[1] = -1;
		m_MaxQuantityIngredient[1] = -1;

		InsertIngredient(0, "MassiveMod_ADVKit_New", DayZPlayerConstants.CMD_ACTIONFB_CLEANING_WEAPON);//you can insert multiple ingredients this way
		m_IngredientAddHealth[0] = -0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = 0;
		m_IngredientDestroy[0] = false; // Don't destroy the kit, just reduce quantity
		m_IngredientUseSoftSkills[0] = false;

		InsertIngredient(1, "Rifle_Base"); // General Weapon Category
		InsertIngredient(1, "Pistol_Base");
		InsertIngredient(1, "BoltActionRifle_Base");
		InsertIngredient(1, "ItemSuppressor");

		m_IngredientAddHealth[1] = -0;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = 0;
		m_IngredientDestroy[1] = false; // Don't destroy the weapon
		m_IngredientUseSoftSkills[1] = false;
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		ItemBase repairKit = ingredients[0];
		ItemBase gun = ingredients[1];

		if (!repairKit || !gun)
		{
			return false; // Null check
		}

		int quantityToSubtract = GetRequiredQuantity(gun); // Get quantity needed based on weapon type

		//Check if repair kit has enough quantity!
		if (repairKit.GetQuantity() < quantityToSubtract)
		{
			return false;
		}
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
	{
		ItemBase repairKit = ingredients[0];
		ItemBase gun = ingredients[1];

		if (!repairKit || !gun)
		{
			return; // Null check
		}

		int quantityToSubtract = GetRequiredQuantity(gun); // Get quantity needed based on weapon type

		// Calculate repair amount.  You can adjust this.  Soft skills are not used
		float repairAmount = 50; // Base repair amount

		//Apply repair to weapon
		float currentHealth = gun.GetHealth("", "");
		float maxHealth = gun.GetMaxHealth("", "");
		float newHealth = currentHealth + repairAmount;

		if (newHealth > maxHealth)
		{
			newHealth = maxHealth;
		}

		gun.SetHealth("", "", newHealth);

		// Reduce quantity of repair kit
		repairKit.AddQuantity(-quantityToSubtract);
	}

	// Helper function to get the required quantity of the repair kit based on the weapon type
	int GetRequiredQuantity(ItemBase gun)
	{
		string gunClassname = gun.GetType();

		switch (true) //Use Switch True for multiple IsKindOf
		{
			// Specific guns first (Keep these quantities proportional to scrap values)
			case gun.IsKindOf("Magnum_Base"): return 30; // Corresponds to 3 scrap
			case gun.IsKindOf("LongHorn_Base"): return 20; // Corresponds to 2 scrap
			case gun.IsKindOf("Deagle_Base"): return 30; // Corresponds to 3 scrap
			case gun.IsKindOf("SawedoffIzh18"): return 10; // Corresponds to 1 scrap
			case gun.IsKindOf("AKS74U"): return 20; // Corresponds to 2 scrap
			case gun.IsKindOf("Ruger1022_Base"): return 20; // Corresponds to 2 scrap
			case gun.IsKindOf("B95_base"): return 20; // Corresponds to 2 scrap
			case gun.IsKindOf("SKS_Base"): return 30; // Corresponds to 3 scrap
			case gun.IsKindOf("Famas_Base"): return 30; // Corresponds to 3 scrap
			case gun.IsKindOf("M16A2_Base"): return 40; // Corresponds to 4 scrap
			case gun.IsKindOf("M4A1_Base"): return 50; // Corresponds to 5 scrap
			case gun.IsKindOf("Aug_Base"): return 40; // Corresponds to 4 scrap
			case gun.IsKindOf("AKM_Base"): return 50; // Corresponds to 5 scrap
			case gun.IsKindOf("SVD_Base"): return 70; // Corresponds to 7 scrap
			case gun.IsKindOf("SV98_Base"): return 70; // Corresponds to 7 scrap
			case gun.IsKindOf("M14_Base"): return 70; // Corresponds to 7 scrap
			case gun.IsKindOf("FAL_Base"): return 60; // Corresponds to 6 scrap
			//MMIO
			case gun.IsKindOf("MassKivaari_Base"): return 100; // Corresponds to 10 scrap
			case gun.IsKindOf("MassM24_Base"): return 80; // Corresponds to 8 scrap
			case gun.IsKindOf("Mass_M98B_Base"): return 90; // Corresponds to 9 scrap
			case gun.IsKindOf("Mass_PKM_Base"): return 100; // Corresponds to 10 scrap
			case gun.IsKindOf("MassM300_Base"): return 100; // Corresponds to 10 scrap
			//JD's Animated Weapons
			case gun.IsKindOf("JD_M249_Base"): return 100; // Corresponds to 10 scrap

			// General classes (lower priority - AVERAGE the values)
			case gun.IsKindOf("Pistol_Base"): return 10; // Corresponds to 1 scrap
			case gun.IsKindOf("BoltActionRifle_Base"): return 50; // Corresponds to 5 scrap
			case gun.IsKindOf("Rifle_Base"): return 30; // Corresponds to 3 scrap
			case gun.IsKindOf("M4_Suppressor"): return 100; 
			case gun.IsKindOf("AK_Suppressor"): return 100; 
			case gun.IsKindOf("Pistol_Suppressor"): return 50; 
			case gun.IsKindOf("MassM417Suppressor"): return 100; 

			default: return 20; // Default quantity if weapon type isn't matched
		}
	return 20; // Default quantity if weapon type isn't matched
	}

	override bool IsRepeatable()
	{
		return true; // Allow repairing multiple times if quantity allows
	}
};
class MassiveMod_RepairPistol extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Repair Pistol";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 25;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"MassiveMod_ADVKit_Pistol",DayZPlayerConstants.CMD_ACTIONFB_CLEANING_WEAPON);//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = -0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -25;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"Pistol_Base");
		
		m_IngredientAddHealth[1] = -0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
    {
        return true;
    }
	
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
    {
        ItemBase Meow = ingredients[1];    // 0 for the first item  - 1 for the second one
        Meow.AddHealth("", "",50);
    }
	
	override bool IsRepeatable()
	{
		return true;
	}
};
class MassiveMod_RepairHighEnd extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Repair High-End Weapon";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 50;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = -1;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"MassiveMod_ADVKit_High",DayZPlayerConstants.CMD_ACTIONFB_CLEANING_WEAPON);//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = -0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -50;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"MassKivaari");
		InsertIngredient(1,"MassM300");
		InsertIngredient(1,"Massm24");
		InsertIngredient(1,"MassM110");
		InsertIngredient(1,"FAL");
		InsertIngredient(1,"SVD");
		InsertIngredient(1,"M1A");
		InsertIngredient(1,"AWMreal");
		InsertIngredient(1,"JD_M249");
		InsertIngredient(1,"M14");
		
		m_IngredientAddHealth[1] = -0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
    {
        return true;
    }
	
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
    {
        ItemBase Meow = ingredients[1];    // 0 for the first item  - 1 for the second one
        Meow.AddHealth("", "",50);
    }
	
	override bool IsRepeatable()
	{
		return true;
	}
};
class MassiveMod_RepairRifle extends RecipeBase
{
    override void Init()
    {
        m_Name = "Repair Rifle";
        m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
        m_AnimationLength = 1;//animation length in relative time units
        m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision


        //conditions
        m_MinDamageIngredient[0] = -1;//-1 = disable check
        m_MaxDamageIngredient[0] = 3;//-1 = disable check

        m_MinQuantityIngredient[0] = 25;//-1 = disable check
        m_MaxQuantityIngredient[0] = -1;//-1 = disable check

        m_MinDamageIngredient[1] = -1;//-1 = disable check
        m_MaxDamageIngredient[1] = -1;//-1 = disable check

        m_MinQuantityIngredient[1] = -1;//-1 = disable check
        m_MaxQuantityIngredient[1] = -1;//-1 = disable check
        //----------------------------------------------------------------------------------------------------------------------

        //INGREDIENTS
        //ingredient 1
        InsertIngredient(0,"MassiveMod_ADVKit_Rifle",DayZPlayerConstants.CMD_ACTIONFB_CLEANING_WEAPON);//you can insert multiple ingredients this way

        m_IngredientAddHealth[0] = -0;// 0 = do nothing
        m_IngredientSetHealth[0] = -1; // -1 = do nothing
        m_IngredientAddQuantity[0] = -25;// 0 = do nothing
        m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
        m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient

        //ingredient 2
        InsertIngredient(1,"RifleCore");
		InsertIngredient(1,"BoltActionRifle_Base");

        m_IngredientAddHealth[1] = -0;// 0 = do nothing
        m_IngredientSetHealth[1] = -1; // -1 = do nothing
        m_IngredientAddQuantity[1] = 0;// 0 = do nothing
        m_IngredientDestroy[1] = false;// false = do nothing
        m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
    }

    override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
    {
        Rifle_Base PawsomeWeapon = Rifle_Base.Cast(ingredients[1]);    // 0 for the first item  - 1 for the second one
                if (!PawsomeWeapon)  
				{
                      return false;
                }

        string scrapableweapon = PawsomeWeapon.GetType();

        switch (scrapableweapon)
        {
            case "MassKivaari":
            case "Massm300":
            case "m300BL":
            case "Massm300_camo":
            case "Massm24":
            case "MassM110":
            case "FAL":
            case "MassiveMod_Golden_Fal":
            case "SVD":
            case "MassiveMod_SVD_wood":
            case "MassiveMod_SVD_Gold":
            case "M1A":
            case "M1A_Tan":
            case "M1A_Green":
            case "AWMreal":
            case "AWMreal_Black":
            case "M14":
            case "JD_M249":
            case "Mass_PKM":
            case "Mass_M98B":
            case "Mass_M98BShort":
                return false; // Exclude these items
            default:
                return true; // Allow all other items
            }
			return true;
        }


    override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
    {
        ItemBase Meow = ingredients[1];    // 0 for the first item  - 1 for the second one
        Meow.AddHealth("", "",50);
    }
	
	override bool IsRepeatable()
	{
		return true;
	}
};