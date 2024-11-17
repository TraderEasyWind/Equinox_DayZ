class MassiveMod_ClothingScrapping extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Extract Textiles";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 1;//animation length in relative time units
		m_Specialty = -0.01;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"Sickle");
		InsertIngredient(0,"KukriKnife");
		InsertIngredient(0,"FangeKnife");
		InsertIngredient(0,"Hacksaw");
		InsertIngredient(0,"HandSaw");
		InsertIngredient(0,"KitchenKnife");
		InsertIngredient(0,"SteakKnife");
		InsertIngredient(0,"HayHook");
		InsertIngredient(0,"StoneKnife");
		InsertIngredient(0,"Cleaver");
		InsertIngredient(0,"CombatKnife");
		InsertIngredient(0,"HuntingKnife");
		InsertIngredient(0,"Machete");
		InsertIngredient(0,"CrudeMachete");
		InsertIngredient(0,"OrientalMachete");
		InsertIngredient(0,"Screwdriver");
		InsertIngredient(0,"Crowbar");
		InsertIngredient(0,"Pickaxe");
		InsertIngredient(0,"WoodAxe");
		InsertIngredient(0,"Hatchet");
		InsertIngredient(0,"FirefighterAxe");
		InsertIngredient(0,"Sword");
		InsertIngredient(0,"AK_Bayonet");
		InsertIngredient(0,"M9A1_Bayonet");
		InsertIngredient(0,"Mosin_Bayonet");
		InsertIngredient(0,"SKS_Bayonet");
		InsertIngredient(0,"BoneKnife");

		m_IngredientAddHealth[0] = -5;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -0;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"BDUJacket");
		InsertIngredient(1,"BDUPants");
		InsertIngredient(1,"GorkaEJacket_ColorBase");
		InsertIngredient(1,"GorkaPants_ColorBase");
		InsertIngredient(1,"TTsKOJacket_ColorBase");
		InsertIngredient(1,"TTSKOPants");
		InsertIngredient(1,"NBCPantsBase");
		InsertIngredient(1,"OMKPants_ColorBase");
		InsertIngredient(1,"USMCPants_ColorBase");
		InsertIngredient(1,"M65Jacket_ColorBase");
		InsertIngredient(1,"TacticalShirt_ColorBase");
		InsertIngredient(1,"USMCJacket_ColorBase");
		InsertIngredient(1,"OMKJacket_ColorBase");
		InsertIngredient(1,"NBCJacketBase");
		InsertIngredient(1,"NBCHoodBase");
		
		
		m_IngredientAddHealth[1] = -0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("MassiveMod_Nylon_Rag");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = 1;//-1 = do nothing
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
	};
};
class MassiveMod_RepairClothing extends RecipeBase
{
    override void Init()
    {
        m_Name = "Repair With Advanced Kit";
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
        InsertIngredient(0,"MassiveMod_ADVKit_Sewing");//you can insert multiple ingredients this way

        m_IngredientAddHealth[0] = -0;// 0 = do nothing
        m_IngredientSetHealth[0] = -1; // -1 = do nothing
        m_IngredientAddQuantity[0] = -25;// 0 = do nothing
        m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
        m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient

        //ingredient 2
        InsertIngredient(1,"Clothing");

        m_IngredientAddHealth[1] = -0;// 0 = do nothing
        m_IngredientSetHealth[1] = -1; // -1 = do nothing
        m_IngredientAddQuantity[1] = 0;// 0 = do nothing
        m_IngredientDestroy[1] = false;// false = do nothing
        m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
    }

    override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
    {
        Clothing ExcludeItem = Clothing.Cast(ingredients[1]);    // 0 for the first item  - 1 for the second one
                if (!ExcludeItem)  
				{
                      return false;
                }

        string NonRepairableItem = ExcludeItem.GetType();

        switch (NonRepairableItem)
        {
            case "Backpack_Base":
            case "HelmetBase":
            case "MassCBhelmet": //Until MMIO Updates
            case "MaskBase":
            case "Vest_Base":
            case "MassRatnik": // Until MMIO Updates
			case "MassLightRatnik": //Until MMIO Updates
            case "MassImprovArmor": //Until MMIO Updates
            case "MassImprovArmormed": //Until MMIO Updates
            case "MassImprovArmorlow": //Until MMIO Updates
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
};
class MassiveMod_SewingKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Craft Advanced Sewing Kit";
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
		InsertIngredient(0,"MassiveMod_Nylon_Rag");//you can insert multiple ingredients this way

		m_IngredientAddHealth[0] = -0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -3;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"SewingKit");
		
		m_IngredientAddHealth[1] = -0;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = true;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("MassiveMod_ADVKit_Sewing");//add results here

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