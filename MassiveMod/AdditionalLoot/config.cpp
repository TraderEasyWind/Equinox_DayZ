class CfgPatches
{
	class MassiveModLoot
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};//meow
class CfgVehicles
{
	class Inventory_Base;
	class Wrench;
	class MassiveMod_AdminWrench: Wrench
	{
		displayName = "Admin Wrench";
		descriptionShort = "You're Welcome";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsMaterials[] = {"MassiveMod\AdditionalLoot\Data\Goldwrench.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1900000000;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
		};
	};
	class MassiveMod_GPS: Inventory_Base
	{
		scope=2;
		displayName = "GPS";
		descriptionShort = "It seems the Global Positioning System still works, Connecting with the sattlites still functioning in orbit Post-Apocalypse. 'Used to see character icon on map' 'Spearhead'";
		weight = 900;
		itemSize[] = {1,2};
	    inventorySlot[]={"WalkieTalkie"};
		model = "MassiveMod\AdditionalLoot\Data\PDA\GPS.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"MassiveMod\AdditionalLoot\Data\SledgeHammer\Raidhammer_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 190;
					healthLevels[] = {{1.0,{"DZ\gear\tools\data\Sledge_Hammer.rvmat"}},{0.7,{"DZ\gear\tools\data\Sledge_Hammer.rvmat"}},{0.5,{"DZ\gear\tools\data\Sledge_Hammer_damage.rvmat"}},{0.3,{"DZ\gear\tools\data\Sledge_Hammer_damage.rvmat"}},{0.0,{"DZ\gear\tools\data\Sledge_Hammer_destruct.rvmat"}}};
				};
			};
		};
	};
	class Container_Base;
	class SledgeHammer;
	class MassiveMod_RaidHammer: SledgeHammer
	{
		displayName = "Raid Hammer";
		descriptionShort = "A SledgeHammer with the sole purpose of being used to Raid Base Walls";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"MassiveMod\AdditionalLoot\Data\SledgeHammer\Raidhammer_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 190;
					healthLevels[] = {{1.0,{"DZ\gear\tools\data\Sledge_Hammer.rvmat"}},{0.7,{"DZ\gear\tools\data\Sledge_Hammer.rvmat"}},{0.5,{"DZ\gear\tools\data\Sledge_Hammer_damage.rvmat"}},{0.3,{"DZ\gear\tools\data\Sledge_Hammer_damage.rvmat"}},{0.0,{"DZ\gear\tools\data\Sledge_Hammer_destruct.rvmat"}}};
				};
			};
		};
	};
	class SeaChest;
	class MassiveMod_Wallet: Container_Base
	{
		scope = 2;
		displayName = "Wallet";
		descriptionShort = "Used for Holding Money. 'Spearhead'";
		model = "MassiveMod\AdditionalLoot\Data\Wallet.p3d";
		inventorySlot[]={"Accessory"};
		rotationFlags = 17;
		weight = 10;
		itemSize[] = {1,2};
		itemsCargoSize[] = {10,2};
		allowOwnedCargoManipulation = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},{0.7,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},{0.5,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},{0.3,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\FirsAidKit_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class MassiveMod_KeyRing: Container_Base
	{
		scope = 2;
		displayName = "KeyRing";
		descriptionShort = "Used for storing Keys more conveniently..";
		model = "MassiveMod\AdditionalLoot\Data\KeyRing.p3d";
		inventorySlot[]={"Accessory"};
		rotationFlags = 17;
		weight = 10;
		itemSize[] = {1,1};
		itemsCargoSize[] = {3,3};
		allowOwnedCargoManipulation = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},{0.7,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},{0.5,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},{0.3,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\FirsAidKit_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
};