class RepairWheelLambda extends ReplaceItemWithNewLambdaBase
{
    override void CopyOldPropertiesToNew(notnull EntityAI old_item, EntityAI new_item)
    {
        super.CopyOldPropertiesToNew(old_item, new_item);
        new_item.SetHealth("", "", 50); // Set repaired wheel health to 50
    }
};

class MassiveMod_RepairTire extends RecipeBase
{	
    override void Init()
    {
        m_Name = "Repair Wheel";
        m_IsInstaRecipe = false;
        m_AnimationLength = 1;
        m_Specialty = -0.01;

        m_MinDamageIngredient[0] = -1;
        m_MaxDamageIngredient[0] = 3;

        m_MinQuantityIngredient[0] = 1; //Doesn't matter anymore, but needs a value
        m_MaxQuantityIngredient[0] = -1;

        m_MinDamageIngredient[1] = -1;
        m_MaxDamageIngredient[1] = -1;

        m_MinQuantityIngredient[1] = -1;
        m_MaxQuantityIngredient[1] = -1;
        
        InsertIngredient(0, "MassiveMod_ADVKit_TireRepair", DayZPlayerConstants.CMD_ACTIONFB_PATCHING_TIRE);
        m_IngredientAddHealth[0] = -0;
        m_IngredientSetHealth[0] = -1;
        m_IngredientAddQuantity[0] = 0;
        m_IngredientDestroy[0] = false;
        m_IngredientUseSoftSkills[0] = false;

        InsertIngredient(1, "CarWheel");
        m_IngredientAddHealth[1] = -0;
        m_IngredientSetHealth[1] = -1;
        m_IngredientAddQuantity[1] = 0;
        m_IngredientDestroy[1] = false;
        m_IngredientUseSoftSkills[1] = true;
    }

    override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		ItemBase repairKit = ingredients[0];
		ItemBase wheel = ingredients[1];
		string wheelClassname = wheel.GetType();
		int quantityToSubtract = GetRequiredQuantity(wheelClassname);
		int healthLevel = wheel.GetHealthLevel();
		bool canRepair = true;
	
		switch (healthLevel)
		{
			case GameConstants.STATE_PRISTINE:
				canRepair = false;
				break;
			case GameConstants.STATE_WORN:
				canRepair = false;
				break;
			case GameConstants.STATE_DAMAGED:
			case GameConstants.STATE_BADLY_DAMAGED:
			case GameConstants.STATE_RUINED:
				canRepair = true;
				break;
			default:
				canRepair = false; // Handle unexpected health levels as not repairable
				break;
		}
	
		if (!canRepair)
		{
			return false; // Cannot repair due to health level
		}
	
		return (repairKit.GetQuantity() >= quantityToSubtract); // Check quantity
	}
	
    override void Do(ItemBase ingredients[], PlayerBase player, array<ItemBase> results, float specialty_weight)
    {
        ItemBase repairKit = ingredients[0];
        ItemBase wheel = ingredients[1]; 
        string wheelClassname = wheel.GetType();
        string repairedWheelClassname;
        bool isRuinedWheel = false;
        int quantityToSubtract = 0;

        switch (wheelClassname)
        {
            // Vanilla Wheels
            case "Hatchback_02_Wheel_Ruined":
                repairedWheelClassname = "Hatchback_02_Wheel";
                isRuinedWheel = true;
				quantityToSubtract = 20; // Roughly equivalent to 1 scrap
                break;
            case "Offroad_02_Wheel_Ruined":
                repairedWheelClassname = "Offroad_02_Wheel";
                isRuinedWheel = true;
				quantityToSubtract = 80; // Roughly equivalent to 4 scrap
                break;
            case "Sedan_02_Wheel_Ruined":
                repairedWheelClassname = "Sedan_02_Wheel";
                isRuinedWheel = true;
				quantityToSubtract = 40; // Roughly equivalent to 2 scrap
                break;
            case "HatchbackWheel_Ruined":
                repairedWheelClassname = "HatchbackWheel";
                isRuinedWheel = true;
				quantityToSubtract = 60; // Roughly equivalent to 3 scrap
                break;
            case "CivSedanWheel_Ruined":
                repairedWheelClassname = "CivSedanWheel";
                isRuinedWheel = true;
				quantityToSubtract = 40; // Roughly equivalent to 2 scrap
                break;
            case "Truck_01_Wheel_Ruined":
                repairedWheelClassname = "Truck_01_Wheel";
                isRuinedWheel = true;
				quantityToSubtract = 100; // Roughly equivalent to 5 scrap
                break;
            case "Truck_01_WheelDouble_Ruined":
                repairedWheelClassname = "Truck_01_WheelDouble";
                isRuinedWheel = true;
				quantityToSubtract = 200; // Roughly equivalent to 10 scrap
                break;
                
            // Modded Wheels
            case "MassiveMod_Med_TruckWheel_Ruined":
                repairedWheelClassname = "MassiveMod_Med_TruckWheel";
                isRuinedWheel = true;
				quantityToSubtract = 100; // Roughly equivalent to 5 scrap
                break;
            case "MassiveMod_Offroad_02_Wheel_Ruined":
                repairedWheelClassname = "MassiveMod_Offroad_02_Wheel";
                isRuinedWheel = true;
				quantityToSubtract = 80; // Roughly equivalent to 4 scrap
                break;
            case "MassiveMod_Med_TruckWheel_Double_Ruined":
                repairedWheelClassname = "MassiveMod_Med_TruckWheel_Double";
                isRuinedWheel = true;
				quantityToSubtract = 200; // Roughly equivalent to 10 scrap
                break;
            case "MassiveMod_UAZ_Wheel_Ruined":
                repairedWheelClassname = "MassiveMod_UAZ_Wheel";
                isRuinedWheel = true;
				quantityToSubtract = 80; // Roughly equivalent to 4 scrap
                break;
            case "KamazWheel_Ruined":
                repairedWheelClassname = "KamazWheel";
                isRuinedWheel = true;
				quantityToSubtract = 200; // Roughly equivalent to 10 scrap
                break;
            default:
                isRuinedWheel = false;
				quantityToSubtract = 20; // Roughly equivalent to 1 scrap
                break;
        }
        if (isRuinedWheel)
        {
            RepairWheelLambda lambda = new RepairWheelLambda(wheel, repairedWheelClassname);
            InventoryLocation currentLoc = new InventoryLocation;
            if (wheel.GetInventory().GetCurrentInventoryLocation(currentLoc))
            {
                lambda.OverrideNewLocation(currentLoc);
            }
            lambda.Execute();

            repairKit.AddQuantity(-quantityToSubtract);
        }
        else
        {
            float currentHealth = wheel.GetHealth("", "");
            wheel.SetHealth("", "", currentHealth + 50);
            repairKit.AddQuantity(-quantityToSubtract);
        }
    }
	//quantity Helper
	int GetRequiredQuantity(string wheelClassname)
	{
		switch (wheelClassname)
		{
			case "Hatchback_02_Wheel_Ruined":
				return 20;
			case "Offroad_02_Wheel_Ruined":
				return 80;
			case "Sedan_02_Wheel_Ruined":
				return 40;
			case "HatchbackWheel_Ruined":
				return 60;
			case "CivSedanWheel_Ruined":
				return 40;
			case "Truck_01_Wheel_Ruined":
				return 100;
			case "Truck_01_WheelDouble_Ruined":
				return 200;
			case "MassiveMod_Med_TruckWheel_Ruined":
				return 100;
			case "MassiveMod_Offroad_02_Wheel_Ruined":
				return 80;
			case "MassiveMod_Med_TruckWheel_Double_Ruined":
				return 200;
			case "MassiveMod_UAZ_Wheel_Ruined":
				return 80;
			case "KamazWheel_Ruined":
				return 200;
			default:
				return 20;
		}
		return 0;
	}
	
	override bool IsRepeatable()
	{
		return true;
	}
};
class MassiveMod_TireScrapping extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Extract Treads";
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
		
		//Only items that would realistically be capable of cutting tires.
		InsertIngredient(0,"Sickle");
		InsertIngredient(0,"KukriKnife");
		InsertIngredient(0,"FangeKnife");
		InsertIngredient(0,"Hacksaw");
		InsertIngredient(0,"HandSaw");
		InsertIngredient(0,"KitchenKnife");
		InsertIngredient(0,"SteakKnife");
		InsertIngredient(0,"Cleaver");
		InsertIngredient(0,"CombatKnife");
		InsertIngredient(0,"HuntingKnife");
		InsertIngredient(0,"Machete");
		InsertIngredient(0,"CrudeMachete");
		InsertIngredient(0,"OrientalMachete");
		InsertIngredient(0,"Sword");
		InsertIngredient(0,"AK_Bayonet");
		InsertIngredient(0,"M9A1_Bayonet");
		InsertIngredient(0,"SKS_Bayonet");
		//InsertIngredient(0,"Screwdriver");
		//InsertIngredient(0,"Crowbar");
		//InsertIngredient(0,"Pickaxe");
		//InsertIngredient(0,"WoodAxe");
		//InsertIngredient(0,"Hatchet");
		//InsertIngredient(0,"FirefighterAxe");
		//InsertIngredient(0,"Mosin_Bayonet");
		//InsertIngredient(0,"BoneKnife");
		//InsertIngredient(0,"HayHook");
		//InsertIngredient(0,"StoneKnife");

		m_IngredientAddHealth[0] = -10;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = -0;
		m_IngredientDestroy[0] = false;
		m_IngredientUseSoftSkills[0] = false;
		
		InsertIngredient(1,"CarWheel");
		
		
		m_IngredientAddHealth[1] = -0;
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
		ItemBase tire = ingredients[1];
		string tireType = tire.GetType();
		int scrapQuantity = 0;

		switch (tireType)
		{
			case "Hatchback_02_Wheel":
				scrapQuantity = 1;
				break;
			case "Offroad_02_Wheel":
				scrapQuantity = 4;
				break;
			case "Sedan_02_Wheel":
				scrapQuantity = 2;
				break;
			case "HatchbackWheel":
				scrapQuantity = 3;
				break;
			case "CivSedanWheel":
				scrapQuantity = 2;
				break;
			case "Truck_01_Wheel":
				scrapQuantity = 5;
				break;
			case "Truck_01_WheelDouble":
				scrapQuantity = 10;
				break;
			case "MassiveMod_Med_TruckWheel":
				scrapQuantity = 5;
				break;
			case "MassiveMod_Offroad_02_Wheel":
				scrapQuantity = 4;
				break;
			case "MassiveMod_Med_TruckWheel_Double":
				scrapQuantity = 10;
				break;
			case "MassiveMod_UAZ_Wheel":
				scrapQuantity = 4;
				break;
			case "KamazWheel":
				scrapQuantity = 10;
				break;
			default:
				scrapQuantity = 1; // Default quantity if tire type is not recognized
				break;
		}

		ItemBase scrap = ItemBase.Cast(GetGame().CreateObject("MassiveMod_TireScrap", player.GetPosition(), false, false, false));
		if (scrap)
		{
			scrap.SetQuantity(scrapQuantity);
			results.Insert(scrap);
		}
    }
};
class MassiveMod_TireScrapPrep extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Prepare Treads";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 5;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 50;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"MassiveMod_TireScrap");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = -0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -5;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"EpoxyPutty");
		
		m_IngredientAddHealth[1] = -0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = -50;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("MassiveMod_PreparedTireScrap");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 5;//-1 = do nothing
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
class MassiveMod_TireRepairKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Advanced Tire-Repair Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 3;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = 100;//-1 = disable check
		m_MaxQuantityIngredient[1] = 900;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"MassiveMod_PreparedTireScrap");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = -0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -10;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"TireRepairKit");
		
		m_IngredientAddHealth[1] = -0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("MassiveMod_ADVKit_TireRepair");//add results here

		m_ResultSetFullQuantity[0] = true;//true = set full quantity, false = do nothing
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