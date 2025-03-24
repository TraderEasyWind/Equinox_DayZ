class CfgPatches
{
	class SH_Weapons_Ammunition_Cans
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Ammunition"
		};
		magazines[]=
		{};
	};
};
class CfgVehicles
{
	class Inventory;
	class Container_Base;
	class CanOpener;
	class MassiveMod_MilitaryCanOpener: CanOpener
	{
		scope=2;
		displayName="Military Can Opener";
		descriptionShort="$STR_CfgVehicles_CanOpener1";
		model="MassiveMod\Ammunitions\AmmoCans\MilitaryCanOpener.p3d";
		debug_ItemCategory=2;
		inventorySlot[]=
		{
			"MMCanOpener"
		};
		animClass="Knife";
		rotationFlags=12;
		isMeleeWeapon=1;
		itemSize[]={1,3};
		weight=150;
		fragility=0.0099999998;
		openItemSpillRange[]={0,0};
		soundImpactType="metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\Loot_CanOpener.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Loot_CanOpener.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Loot_CanOpener_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Loot_CanOpener_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Loot_CanOpener_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class MassiveMod_AmmoCanBase: Container_Base
	{
		scope=0;
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		itemSize[]={5,3};
		weight=2250;
		attachments[]=
		{
			"MMCanOpener"
		};
		allowOwnedCargoManipulation=1;
		randomQuantity=4;
		canBeDigged=0;
		repairableWithKits[]={8};
		repairCosts[]={25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								
							}
						},
						
						{
							0.69999999,
							
							{
								
							}
						},
						
						{
							0.5,
							
							{
								
							}
						},
						
						{
							0.30000001,
							
							{
								
							}
						},
						
						{
							0,
							
							{
								
							}
						}
					};
				};
			};
		};
		class EnergyManager
		{
			switchOnAtSpawn=1;
			autoSwitchOff=1;
			autoSwitchOffWhenInCargo=1;
			energyStorageMax=2;
			energyUsagePerSecond=1;
			energyAtSpawn=2;
			powerSocketsCount=0;
			plugType=7;
			attachmentAction=1;
		};
	};
	class MassiveMod_AmmoCan762x39: MassiveMod_AmmoCanBase
	{
		scope=2;
		displayName="7.62x39 Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 640 Rounds 7.62x39mm Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		weight=400;
		itemSize[]={5,3};
		repairableWithKits[]={};
		repairCosts[]={};
	};
	class MassiveMod_AmmoCan762x39_Opened: MassiveMod_AmmoCan762x39
	{
		scope=2;
		displayName="7.62x39 Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 640 Rounds 7.62x39mm Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCanOpen.p3d";
		weight=400;
		attachments[]={};
		itemSize[]={5,3};
		itemsCargoSize[]={8,4};
		repairableWithKits[]={};
		hiddenSelections[]={"zbytek","AmmoBoxes"};
		hiddenSelectionsTextures[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan_co.paa","MassiveMod\Ammunitions\762x39\Data\762x39_AmmoBox.paa"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan.rvmat","DZ\weapons\ammunition\data\762x39_box.rvmat"};
		repairCosts[]={};
		MM_AmmoBoxType = "MM_AmmoBox_762x39_20Rnd";
        MM_AmmoBoxQuantity = 32;
	};
	class MassiveMod_AmmoCan545x39: MassiveMod_AmmoCanBase
	{
		scope=2;
		displayName="5.45x39 Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 640 Rounds of 5.45x39mm Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan545.rvmat"};
		weight=400;
		itemSize[]={5,3};
		repairableWithKits[]={};
		repairCosts[]={};
	};
	class MassiveMod_AmmoCan545x39_Opened: MassiveMod_AmmoCan545x39
	{
		scope=2;
		displayName="5.45x39 Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 640 Rounds of 5.45x39mm Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCanOpen.p3d";
		hiddenSelections[]={"zbytek","AmmoBoxes"};
		hiddenSelectionsTextures[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan_co.paa","MassiveMod\Ammunitions\545\Data\545x39_AmmoBox.paa"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan545.rvmat","DZ\weapons\ammunition\data\545x39.rvmat"};
		weight=400;
		attachments[]={};
		itemSize[]={5,3};
		itemsCargoSize[]={8,4};
		repairableWithKits[]={};
		repairCosts[]={};
		MM_AmmoBoxType = "MM_AmmoBox_545x39_20Rnd";
        MM_AmmoBoxQuantity = 32;
	};
	class MassiveMod_AmmoCan762x54: MassiveMod_AmmoCanBase
	{
		scope=2;
		displayName="7.62x54R Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 440 Rounds of 7.62x54R Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan_co.paa"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan762x54.rvmat"};
		weight=400;
		itemSize[]={5,3};
		repairableWithKits[]={};
		repairCosts[]={};
	};
	class MassiveMod_AmmoCan762x54_Opened: MassiveMod_AmmoCan762x54
	{
		scope=2;
		displayName="7.62x54R Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 440 Rounds of 7.62x54R Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCanOpen.p3d";
		hiddenSelections[]={"zbytek","AmmoBoxes"};
		hiddenSelectionsTextures[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan_co.paa","MassiveMod\Ammunitions\762x54\Data\762_54R_AmmoBox.paa"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan762x54.rvmat","DZ\weapons\ammunition\data\762_box.rvmat"};
		weight=400;
		attachments[]={};
		itemSize[]={5,3};
		itemsCargoSize[]={6,4};
		repairableWithKits[]={};
		repairCosts[]={};
		MM_AmmoBoxType = "MM_AmmoBox_762x54_20Rnd";
        MM_AmmoBoxQuantity = 22;
	};
	class MassiveMod_AmmoCan9x39: MassiveMod_AmmoCanBase
	{
		scope=2;
		displayName="9x39 Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 640 Rounds of 9x39mm Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan_co.paa"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan762x54.rvmat","DZ\weapons\ammunition\data\762_box.rvmat"};
		weight=400;
		itemSize[]={5,3};
		repairableWithKits[]={};
		repairCosts[]={};
	};
	class MassiveMod_AmmoCan9x39_Opened: MassiveMod_AmmoCan9x39
	{
		scope=2;
		displayName="9x39 Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 640 Rounds of 9x39mm Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCanOpen.p3d";
		weight=400;
		attachments[]={};
		itemSize[]={5,3};
		itemsCargoSize[]={8,4};
		repairableWithKits[]={};
		repairCosts[]={};
		hiddenSelections[]={"zbytek","AmmoBoxes"};
		hiddenSelectionsTextures[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan_co.paa","DZ\weapons\ammunition\data\9x39_box_co.paa"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan762x54.rvmat","DZ\weapons\ammunition\data\762x39_box.rvmat"};
		MM_AmmoBoxType = "AmmoBox_9x39_20Rnd";
        MM_AmmoBoxQuantity = 32;
	};
	class MassiveMod_AmmoCan556x45: MassiveMod_AmmoCanBase
	{
		scope=2;
		displayName="5.56x45 Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 640 Rounds of 5.56x45mm Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan556.rvmat"};
		weight=400;
		itemSize[]={5,3};
		repairableWithKits[]={};
		repairCosts[]={};
	};
	class MassiveMod_AmmoCan556x45_Opened: MassiveMod_AmmoCan556x45
	{
		scope=2;
		displayName="5.56x45 Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 640 Rounds of 5.56x45mm Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCanOpen.p3d";
		hiddenSelections[]={"zbytek","AmmoBoxes"};
		hiddenSelectionsTextures[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan_co.paa","DZ\weapons\ammunition\data\556_20roundbox_co.paa"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan556.rvmat","DZ\weapons\ammunition\data\556_20roundbox.rvmat"};
		weight=400;
		attachments[]={};
		itemSize[]={5,3};
		itemsCargoSize[]={8,4};
		repairableWithKits[]={};
		repairCosts[]={};
		MM_AmmoBoxType = "AmmoBox_556x45_20Rnd";
        MM_AmmoBoxQuantity = 32;
	};
	class MassiveMod_AmmoCan308Win: MassiveMod_AmmoCanBase
	{
		scope=2;
		displayName="308 Win Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 440 Rounds of 7.62x51mm Winchester Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCan.p3d";
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan308Win.rvmat"};
		weight=400;
		itemSize[]={5,3};
		repairableWithKits[]={};
		repairCosts[]={};
	};
	class MassiveMod_AmmoCan308Win_Opened: MassiveMod_AmmoCan308Win
	{
		scope=2;
		displayName="308 Win Ammo Can";
		descriptionShort="An Ammunition Cannister sealed for long term storage. This contains 440 Rounds of 7.62x51mm Winchester Ammunition boxed and ready for use";
		model="MassiveMod\Ammunitions\AmmoCans\AmmoCanOpen.p3d";
		hiddenSelections[]={"zbytek","AmmoBoxes"};
		hiddenSelectionsTextures[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan_co.paa","DZ\weapons\ammunition\data\308win_box_co.paa"};
		hiddenSelectionsMaterials[]={"MassiveMod\Ammunitions\AmmoCans\AmmoCan308Win.rvmat","DZ\weapons\ammunition\data\762_box.rvmat"};
		weight=400;
		attachments[]={};
		itemSize[]={5,3};
		itemsCargoSize[]={6,4};
		repairableWithKits[]={};
		repairCosts[]={};
		MM_AmmoBoxType = "AmmoBox_308Win_20Rnd";
		MM_AmmoBoxQuantity = 22;
	};
};
