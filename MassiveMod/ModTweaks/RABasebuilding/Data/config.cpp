class CfgPatches
{
	class MassiveMod_ModTweaks_RABasebuildingFix
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"BaseBuilding_Wall",
			"MassiveMod_ModTweaks_RABasebuilding",
			"BaseBuilding_Floor",
			"BaseBuilding_DoorWall",
			"BaseBuilding_DoubleDoorWall",
			"BaseBuilding_DoorFrame",
			"Gear_CodeLock"
        };
	};
};//meow
class CfgVehicles
{
	class Inventory_Base;
	class RA_CodeLock: Inventory_Base
	{
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\Codelock.p3d";
	};
	class BaseBuilding;
	class BaseBuilding_DoubleDoorBase;
	class BaseBuilding_WallBase;
	class BaseBuilding_SingleDoorBase;
	class BaseBuilding_DoorFrameBase;
	class BaseBuilding_EmbrasureBase;
	class BaseBuilding_HologramWindowBoards: BaseBuilding_EmbrasureBase
	{
		scope = 2;
		displayName = "Window Boards";
		displayIcon = "set:BaseBuilding_Icons image:Embrasure";
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\WindowBoards.p3d";
		upgradeType = "BaseBuilding_WindowBoards";
		hiddenSelections[] = {"wood"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.756863,0.741176,0.733333,0.9,co)"};
		hiddenSelectionsMaterials[] = {"rearmedserver\basebuilding\materials\basebuilding_neutral.rvmat"};
		materialLevel = 0;
		class UpgradeSystem
		{
			class Hologram{};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 10;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 5;
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
		};
	};
	class BaseBuilding_WindowBoards: BaseBuilding_EmbrasureBase
	{
		scope = 2;
		displayName = "Window Boards";
		displayIcon = "set:BaseBuilding_Icons image:Embrasure";
		descriptionShort = "A collection of boards used to create a fighting position from your windows.";
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\WindowBoards.p3d";
		hiddenSelections[] = {"wood"};
		hiddenSelectionsTextures[] = {"DZ\gear\consumables\data\pile_of_planks_co.paa"};
		materialLevel = 2;
		class UpgradeSystem
		{
			class Hologram{};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 10;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 5;
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1125;
					healthLevels[] = {{1.0,{"DZ\gear\consumables\data\pile_of_planks.rvmat"}},{0.7,{"DZ\gear\consumables\data\pile_of_planks.rvmat"}},{0.5,{"DZ\gear\consumables\data\pile_of_planks_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\pile_of_planks_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\pile_of_planks_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.0;
					};
				};
			};
		};
	};
	class BaseBuilding_HologramDoorFrameSmall: BaseBuilding_DoorFrameBase
	{
		scope = 2;
		placementMode = 1;
		displayName = "Small Door Frame";
		displayIcon = "set:BaseBuilding_Icons image:DoorFrame";
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\Doors\HologramDoorFrameSmall.p3d";
		materialLevel = 0;
		upgradeType = "BaseBuilding_FrameDoorFrameSmall";
		hiddenSelections[] = {"wood"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.756863,0.741176,0.733333,0.9,co)"};
		hiddenSelectionsMaterials[] = {"rearmedserver\basebuilding\materials\basebuilding_neutral.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
		};
	};
	class BaseBuilding_FrameDoorFrameSmall: BaseBuilding_DoorFrameBase
	{
		scope = 2;
		displayName = "Small Door Frame";
		displayIcon = "set:BaseBuilding_Icons image:DoorFrame";
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\Doors\FrameDoorSmall.p3d";
		upgradeType = "BaseBuilding_WoodDoorFrameSmall";
		attachments[] = {};
		hiddenSelections[] = {"wood"};
		hiddenSelectionsTextures[] = {"dz\gear\consumables\data\pile_of_planks_co.paa"};
		materialLevel = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Interior
				{
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_WoodDoorFrameSmall: BaseBuilding_DoorFrameBase
	{
		scope = 2;
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\Doors\WoodDoorFrameSmall.p3d";
		upgradeType = "BaseBuilding_MetalDoorFrameSmall";
		attachments[] = {};
		hiddenSelections[] = {"planks","wood"};
		hiddenSelectionsTextures[] = {"rearmedserver\basebuilding\materials\wood\data\DoorWall_planks_co.paa","dz\gear\consumables\data\pile_of_planks_co.paa"};
		materialLevel = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2500;
					healthLevels[] = {{1.0,{"rearmedserver\basebuilding\materials\wood\data\DoorWall_planks.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat"}},{0.7,{"rearmedserver\basebuilding\materials\wood\data\DoorWall_planks_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.5,{"rearmedserver\basebuilding\materials\wood\data\DoorWall_planks_damage.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_damage.rvmat"}},{0.3,{"rearmedserver\basebuilding\materials\wood\data\DoorWall_planks_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}},{0.0,{"rearmedserver\basebuilding\materials\wood\data\DoorWall_planks_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 2500;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0.0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0.0;
							};
						};
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 2500;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_MetalDoorFrameSmall: BaseBuilding_DoorFrameBase
	{
		scope = 2;
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\Doors\MetalDoorFrameSmall.p3d";
		materialLevel = 3;
		upgradeType = "BaseBuilding_ConcreteDoorFrameSmall";
		attachments[] = {};
		hiddenSelections[] = {"wood","metal","metalsmokestack"};
		hiddenSelectionsTextures[] = {"dz\gear\consumables\data\pile_of_planks_co.paa","RearmedServer\BaseBuilding\Materials\Metal\data\Metal_DoorFrame_co.paa","dz\structures\industrial\smokestacks\data\smokestack_metal_floor_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = {{1.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_pile_of_planks.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\Metal_DoorFrame.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate.rvmat"}},{0.7,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\Metal_DoorFrame_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat"}},{0.5,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\Metal_DoorFrame_damage.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_damage.rvmat"}},{0.3,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\Metal_DoorFrame_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat"}},{0.0,{"RearmedServer\BaseBuilding\Materials\Wood\data\RA_generic_wood_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\Metal_DoorFrame_destruct.rvmat","RearmedServer\BaseBuilding\Materials\Metal\data\FlatMetalPlate_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_ConcreteDoorFrameSmall: BaseBuilding_DoorFrameBase
	{
		scope = 2;
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ConcreteDoorFrameSmall.p3d";
		materialLevel = 4;
		attachments[] = {};
		hiddenSelections[] = {"bricks","cement"};
		hiddenSelectionsTextures[] = {"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_grey_co.paa","dz\structures\data\concrete\concrete_bare_co.paa"};
		hiddenSelectionsMaterials[] = {"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
					healthLevels[] = {{1.0,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare.rvmat"}},{0.7,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.5,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_damage.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_damage.rvmat"}},{0.3,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}},{0.0,{"rearmedserver\basebuilding\materials\concrete\municipaloffice2_facade1_destruct.rvmat","rearmedserver\basebuilding\materials\concrete\vanillaconcretebare_destruct.rvmat"}}};
				};
			};
			class DamageZones
			{
				class Exterior
				{
					class Health
					{
						hitpoints = 10000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"exterior"};
				};
				class Interior
				{
					class Health
					{
						hitpoints = 10000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"interior"};
				};
			};
		};
	};
	class BaseBuilding_VaultDoubleDoor: BaseBuilding_DoubleDoorBase
	{
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoubleDoor.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = 
					{
						{
							1.0,
							{
								"MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor.rvmat"
							}
						},
						{
							0.7,
							{
								"MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor.rvmat"
							}
						},
						{
							0.5,
							{
								"MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor_Dmg.rvmat"
							}
						},
						{
							0.3,
							{
								"MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor_BDmg.rvmat"
							}
						},
						{
							0.0,
							{
								"MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor_BDmg.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.0;
					};
				};
			};
		};
	};
	class BaseBuilding_VaultSingleDoor: BaseBuilding_SingleDoorBase
	{
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = 
					{
						{
							1.0,
							{
								"MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor.rvmat"
							}
						},
						{
							0.7,
							{
								"MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor.rvmat"
							}
						},
						{
							0.5,
							{
								"MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor_Dmg.rvmat"
							}
						},
						{
							0.3,
							{
								"MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor_BDmg.rvmat"
							}
						},
						{
							0.0,
							{
								"MassiveMod\ModTweaks\RABasebuilding\Data\Doors\ArmoredDoor_BDmg.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.0;
					};
				};
			};
		};
	};
	class BaseBuilding_TriangleFloorBase: BaseBuilding
	{
		placementMode = 3;
		class Snapping
		{
			class NorthEast
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {-0.866025,0,-0.5};
				up[] = {0,1,0};
			};
			class NorthWest
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {0.866025,0,-0.5};
				up[] = {0,1,0};
			};
			class South
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {0,0,1};
				up[] = {0,1,0};
			};
		};
	};
	class BaseBuilding_FloorBase: BaseBuilding
	{
		placementMode = 3;
		class Snapping
		{
			class North
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {0,0,-1};
				up[] = {0,1,0};
			};
			class South
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {0,0,1};
				up[] = {0,1,0};
			};
			class East
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {-1,0,0};
				up[] = {0,1,0};
			};
			class West
			{
				acceptedTypes[] = {"BaseBuilding_FloorBase","BaseBuilding_TriangleFloorBase","BaseBuilding_WallBase","BaseBuilding_HalfWallBase","BaseBuilding_RampBase","BaseBuilding_RoofBase"};
				acceptedSnapPoints[]-= {"Bottom"};
				forward[] = {1,0,0};
				up[] = {0,1,0};
			};
			class Center
			{
				acceptedTypes[] = {"BaseBuilding_StairsBase"};
				acceptedSnapPoints[] = {"Bottom"};
				forward[] = {0,0,1};
				up[] = {0,1,0};
			};
		};
	};
	class BaseBuilding_FrameTriangleFloor: BaseBuilding_TriangleFloorBase
	{
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\Floors\FrameTriangleFloor.p3d";
	};
	class BaseBuilding_FrameFloor: BaseBuilding_FloorBase
	{
		model = "MassiveMod\ModTweaks\RABasebuilding\Data\Floors\FrameFloor.p3d";
	};
	//class BaseBuilding_MetalWall: BaseBuilding_WallBase
	//{
	//	model = "MassiveMod\ModTweaks\RABasebuilding\Data\Walls\MetalWall.p3d";
	//	hiddenSelections[] = {"wood","metal"};
	//	hiddenSelectionsTextures[]=
	//	{
	//		"dz\gear\consumables\data\pile_of_planks_co.paa",
	//		"MassiveMod\ModTweaks\RABasebuilding\Data\Walls\Metal_Wall_co.paa"
	//	};
	//};
};