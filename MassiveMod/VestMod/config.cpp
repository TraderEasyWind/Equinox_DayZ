class CfgPatches
{
	class MassiveMod_VestMod
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"DZ_Characters_Vests"
        };
	};
};//meow
class cfgVehicles
{
	class Inventory_Base;
	class Clothing;
    class Massivemod_BallisticAR500Plates: Inventory_Base
	{
		scope=2;
		repairKitType = 139;
		displayName="Level 3 Ballistic Plates";
		descriptionshort="A Pair of Tier 3 Ballistic Plates. Highly effective against pistol and standard rifle rounds.";
		inventorySlot[] = {"MM_VestPlate"};
		itemsize[]={4,4};
	    Model="MassiveMod\VestMod\ArmourPlate.p3d";
		weight=7700;
		protectionValue=0.8;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"MassiveMod\VestMod\GrainyPlate_ca.paa"};
		hiddenSelectionsMaterials[]={"MassiveMod\VestMod\armorplate.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 225;
					healthLevels[] = {{1.0,{"MassiveMod\VestMod\armorplate.rvmat"}},{0.7,{"MassiveMod\VestMod\armorplate.rvmat"}},{0.5,{"MassiveMod\VestMod\armorplate_damaged.rvmat"}},{0.3,{"MassiveMod\VestMod\armorplate_damaged.rvmat"}},{0.0,{"MassiveMod\VestMod\armorplate_destruct.rvmat"}}};
				};
			};
		};
	};
	class Massivemod_Ballistic10Plates: Massivemod_BallisticAR500Plates
	{
		descriptionshort="These Reduce 100% of incoming damage to the chest.";
		protectionValue=1.0;
	};
	class Massivemod_Ballistic09Plates: Massivemod_BallisticAR500Plates
	{
		descriptionshort="These Reduce 90% of incoming damage to the chest.";
		protectionValue=0.9;
	};
	class Massivemod_Ballistic08Plates: Massivemod_BallisticAR500Plates
	{
		descriptionshort="These Reduce 80% of incoming damage to the chest.";
		protectionValue=0.8;
	};
	class Massivemod_Ballistic07Plates: Massivemod_BallisticAR500Plates
	{
		descriptionshort="These Reduce 70% of incoming damage to the chest.";
		protectionValue=0.7;
	};
	class Massivemod_Ballistic06Plates: Massivemod_BallisticAR500Plates
	{
		descriptionshort="These Reduce 60% of incoming damage to the chest.";
		protectionValue=0.6;
	};
	class Massivemod_Ballistic05Plates: Massivemod_BallisticAR500Plates
	{
		descriptionshort="These Reduce 50% of incoming damage to the chest.";
		protectionValue=0.5;
	};
	class Massivemod_Ballistic04Plates: Massivemod_BallisticAR500Plates
	{
		descriptionshort="These Reduce 40% of incoming damage to the chest.";
		protectionValue=0.4;
	};
	class Massivemod_Ballistic03Plates: Massivemod_BallisticAR500Plates
	{
		descriptionshort="These Reduce 30% of incoming damage to the chest.";
		protectionValue=0.3;
	};
	class Massivemod_Ballistic02Plates: Massivemod_BallisticAR500Plates
	{
		descriptionshort="These Reduce 20% of incoming damage to the chest.";
		protectionValue=0.2;
	};
	class Massivemod_Ballistic01Plates: Massivemod_BallisticAR500Plates
	{
		descriptionshort="These Reduce 10% of incoming damage to the chest.";
		protectionValue=0.1;
	};
	class Massivemod_Ballistic00Plates: Massivemod_BallisticAR500Plates
	{
		descriptionshort="These Reduce 0% of incoming damage to the chest.";
		protectionValue=0;
	};
	class Massivemod_BallisticWoodenPlates: Massivemod_BallisticAR500Plates
	{
		scope=2;
		repairKitType = 139;
		displayName="Improvised Wooden Ballistic Plate";
		descriptionshort="Wood Ballistic Plate. Not very effective at all. but better than nothing?";
		inventorySlot[] = {"MM_VestPlate"};
		itemsize[]={4,4};
	    Model="MassiveMod\VestMod\ArmourPlate.p3d";
		weight=500;
		protectionValue=0.05;
	};
	class PlateCarrierVest: Clothing
	{
		attachments[] += {"MM_VestPlate"};
		weight = 680;
	};
	class PressVest_ColorBase: Clothing
	{
		attachments[] += {"MM_VestPlate"};
		weight = 550;
	};
};