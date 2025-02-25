class CfgPatches
{
	class MassiveMod
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};//meow
class CfgMods
{
	class MassiveModGunScrap
	{
		dir="MassiveMod";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="MassiveMod";
		credits="";
		author="Niphoria/Mass/Lad";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Rag;
	class MassiveMod_Nylon_Rag: Rag
	{
		displayName="Military Textiles";
		descriptionShort="Used on Sewing kits to create advanced sewing kits, which can be used to repair clothes that are even ruined.";
		varQuantityInit = 12.0;
		varQuantityMin = 0.0;
		varQuantityMax = 12.0;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\RepairKits\ScrapTextures\NylonRag.paa",
			"MassiveMod\RepairKits\ScrapTextures\NylonRag.paa",
			"MassiveMod\RepairKits\ScrapTextures\NylonRag.paa"
		};
	};
	class MassiveMod_TireScrap: Inventory_Base
	{
		scope=2;
		displayName="Tire Treads";
		descriptionShort="I need some epoxy putty to act as an adhesive before I can make an advanced repair kit out of this.";
		weight = 10;
        overrideDrawArea = "5.0";
        //rotationFlags = 16;
        lootCategory = "Materials";
        lootTag[] = {"Civilian","Work"};
        quantityBar = 0;
        canBeSplit = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 10;
        varQuantityDestroyOnMin = 1;
        destroyOnEmpty = 1;
        isMeleeWeapon = 0;
        absorbency = 1;
		itemSize[] = {3,2};
		model="MassiveMod\RepairKits\TireScrap.p3d";
	};
	class MassiveMod_PreparedTireScrap: MassiveMod_TireScrap
	{
		scope=2;
		displayName="Prepared Tire Treads";
		descriptionShort="Used on Tire Repair kits to create advanced versions, which can be used to repair tires that are even ruined.";
	};
	class MassiveMod_GunScrap: Inventory_Base
	{
		scope=2;
		displayName="Gun Scrap";
		descriptionShort="Gun Scrap can be used to Craft Advanced Weapon Repair Kits that can bring an item back from any state to Pristine! Even Ruined!";
		model="MassiveMod\RepairKits\GunScrap.p3d";
		weight = 10;
        overrideDrawArea = "5.0";
        rotationFlags = 16;
        lootCategory = "Materials";
        lootTag[] = {"Civilian","Work"};
        quantityBar = 0;
        canBeSplit = 1;
        varQuantityInit = 1;
        varQuantityMin = 0;
        varQuantityMax = 500;
        varQuantityDestroyOnMin = 1;
        destroyOnEmpty = 1;
        isMeleeWeapon = 0;
        absorbency = 1;
		itemSize[] = {3,2};
	};
	class MassiveMod_ADVKit_Base: Inventory_Base
	{
		scope=0;
		hiddenSelections[]={"zbytek"};
		model="\dz\gear\tools\cleaning_kit_wood.p3d";
		hiddenSelectionsTextures[]={"MassiveMod\RepairKits\KitTextures\High-End_ADV_Kit_co.paa"};
        debug_ItemCategory=2;
		animClass="Knife";
		rotationFlags=17;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		weight=780;
		weightPerQuantityUnit=0;
		itemSize[]={2,3};
		fragility=0.0099999998;
		soundImpactType="wood";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\gear\tools\data\cleaning_kit_wood.rvmat"}},{0.7,{"DZ\gear\tools\data\cleaning_kit_wood.rvmat"}},{0.5,{"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"}},{0.3,{"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"}},{0.0,{"DZ\gear\tools\data\cleaning_kit_wood_destruct.rvmat"}}};
				};
			};
		};
	};
	class MassiveMod_ADVKit_TireRepair: MassiveMod_ADVKit_Base
	{
		scope=2;
		displayName="Advanced Tire Repair Kit";
		descriptionShort="Can be used to Repair Tires from any damaged state, Even Ruined!";
		model="\dz\vehicles\parts\Tire_Repair_Kit.p3d";
		hiddenSelectionsTextures[]={"MassiveMod\RepairKits\KitTextures\tire_repair_kit.paa"};
		weight=800;
		weightPerQuantityUnit=2;
		itemSize[]={2,3};
		quantityBar=1;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		repairKitType=6;
		varQuantityDestroyOnMin = 1;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsMaterials[]={"MassiveMod\RepairKits\KitTextures\tire_repair_kit.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"MassiveMod\RepairKits\KitTextures\tire_repair_kit.rvmat"
							}
						},
						
						{
							0.75,
							
							{
								"MassiveMod\RepairKits\KitTextures\tire_repair_kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MassiveMod\RepairKits\KitTextures\tire_repair_kit_damage.rvmat"
							}
						},
						
						{
							0.25,
							
							{
								"MassiveMod\RepairKits\KitTextures\tire_repair_kit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"MassiveMod\RepairKits\KitTextures\tire_repair_kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class MassiveMod_ADVKit_Sewing: MassiveMod_ADVKit_Base
	{
		scope=2;
		model="\dz\gear\tools\sewing_kit.p3d";
		displayName="Advanced Sewing Kit";
		descriptionShort="Can be used to Repair Clothes from any damaged state, Even Ruined!";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"MassiveMod\RepairKits\KitTextures\Advsewingkit_co.paa"};
		repairKitType=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\sewing_kit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\sewing_kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\sewing_kit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\sewing_kit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\sewing_kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class MassiveMod_ADVKit_LeatherSewing: MassiveMod_ADVKit_Base
	{
		scope=2;
		model="\dz\gear\tools\leather_sewing_kit.p3d";
		displayName="Advanced Leather Sewing Kit";
		descriptionShort="Can be used to Repair Clothes from any damaged state, Even Ruined!";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"MassiveMod\RepairKits\KitTextures\leather_sewing_kit_Adv_co.paa"};
        repairKitType=3;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class MassiveMod_ADVKit_Rifle: MassiveMod_ADVKit_Base
	{
		scope=2;
		displayName="Advanced Rifle Repair-Kit";
		descriptionShort="Can be used to Repair Weapons from any damaged state, Even Ruined!";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"MassiveMod\RepairKits\KitTextures\Western_ADV_kit_co.paa"};
	};
	class MassiveMod_ADVKit_Pistol: MassiveMod_ADVKit_Base
	{
		scope=2;
		displayName="Advanced Pistol Repair-Kit";
		descriptionShort="Can be used to Repair Pistols from any damaged state, Even Ruined!";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"MassiveMod\RepairKits\KitTextures\Pistol_ADV_Kit_co.paa"};
	};
	class MassiveMod_ADVKit_High: MassiveMod_ADVKit_Base
	{
		scope=2;
		displayName="Advanced Repair-Kit High-End";
		descriptionShort="Can be used to Repair High-End Weapons from any damaged state, Even Ruined!";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"MassiveMod\RepairKits\KitTextures\High-End_ADV_Kit_co.paa"};
	};
};
