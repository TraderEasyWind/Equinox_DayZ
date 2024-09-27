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
	class TraderPlus_Money_Ruble1_Coin;
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
	class WeaponCleaningKit;
	class MassiveMod_ADVKit_Base: WeaponCleaningKit
	{
		scope=0;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"MassiveMod\RepairKits\KitTextures\High-End_ADV_Kit_co.paa"};
		repairKitType = ;
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
	class MassiveMod_ADVKit_Rifle: MassiveMod_ADVKit_Base
	{
		scope=2;
		displayName="Advanced Rifle Repair-Kit";
		descriptionShort="Can be used to Repair Rifles Weapons Completely from any damaged state, Even Ruined!";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"MassiveMod\RepairKits\KitTextures\Western_ADV_kit_co.paa"};
	};
	class MassiveMod_ADVKit_Pistol: MassiveMod_ADVKit_Base
	{
		scope=2;
		displayName="Advanced Pistol Repair-Kit";
		descriptionShort="Can be used to Repair Pistols Completely from any damaged state, Even Ruined!";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"MassiveMod\RepairKits\KitTextures\Pistol_ADV_Kit_co.paa"};
	};
	class MassiveMod_ADVKit_High: MassiveMod_ADVKit_Base
	{
		scope=2;
		displayName="Advanced Repair-Kit High-End";
		descriptionShort="Can be used to Repair High-End Weapons Completely from any damaged state, Even Ruined!";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"MassiveMod\RepairKits\KitTextures\High-End_ADV_Kit_co.paa"};
	};
};
