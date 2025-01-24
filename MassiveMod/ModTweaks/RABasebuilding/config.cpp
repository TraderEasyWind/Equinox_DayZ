class CfgPatches
{
	class MassiveMod_ModTweaks_RABasebuilding
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"Rearmed_BaseBuilding",
			"BaseBuilding_Wall",
			"BaseBuilding_Floor",
			"BaseBuilding_Foundation",
			"RearmedServer_Gear_Territory",
			"BaseBuilding_DoorWall",
			"BaseBuilding_Windows"
        };
	};
};
class CfgVehicles
{
	class BaseBuilding;
	class BaseBuilding_EmbrasureBase: BaseBuilding
	{
		placementMode = 3;
	};
	class BaseBuilding_ShutterBase: BaseBuilding
	{
		placementMode = 3;
	};
	class BaseBuilding_SingleDoorBase: BaseBuilding
	{
		placementMode = 3;	
	};
	class BaseBuilding_HologramSingleDoor: BaseBuilding_SingleDoorBase
	{
		//upgradeType = "BaseBuilding_WoodFrameSingleDoor";
	};
	class BaseBuilding_WoodSingleDoor;
	class BaseBuilding_WoodFrameSingleDoor: BaseBuilding_WoodSingleDoor
	{
		//hiddenSelections[] = {"planks","camo"};
		//model = "MassiveMod\ModTweaks\RABasebuilding\Data\TwigSingleDoor.p3d";
		//upgradeType = "BaseBuilding_WoodSingleDoor";
		//materialLevel = 1;
	};
	class Container_Base;
	class TerritoryHQ: Container_Base
	{
		model = "MassiveMod\Buildings\ToolCupboard.p3d";
		attachments[] = {"HQ_Nails","TerritoryHQ_L1_Upgrade","TerritoryHQ_L2_Upgrade","TerritoryHQ_L3_Upgrade","TerritoryHQ_L4_Upgrade"};
		itemsCargoSize[] = {10,5};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=999999;
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name = "";
				description = "";
				attachmentSlots[] -= {"CodeLock"};
				icon = "cat_bb_base";
			};
			class Upkeep_1
			{
				name = "Upkeep";
				description = "Base will decay without Nails";
				attachmentSlots[] = {"HQ_Nails"};
				icon = "nails";
			};
		};
	};
};