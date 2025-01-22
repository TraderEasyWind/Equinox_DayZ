class CfgPatches
{
	class MassiveMod_ModTweaks_RABasebuildingCosts
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
			"BaseBuilding_TriangleFoundation",
			"BaseBuilding_GarageDoor",
			"BaseBuilding_DoubleDoorWall",
			"BaseBuilding_DoorFrame",
			"BaseBuilding_DoubleDoorFrame",
			"BaseBuilding_HalfWall",
			"BaseBuilding_LadderHatch",
			"BaseBuilding_HatchLadder",
			"BaseBuilding_Ramp",
			"BaseBuilding_Roof",
			"BaseBuilding_RoofWall",
			"BaseBuilding_Stairs",
			"BaseBuilding_StairsStraight",
			"BaseBuilding_StepLadder",
			"BaseBuilding_TriangleFloor",
			"BaseBuilding_TriangleLadderHatch",
			"BaseBuilding_Wall",
			"BaseBuilding_WindowFrame",
			"BaseBuilding_Windows",
			"BaseBuilding_CompoundWall"
        };
	};
};
class CfgVehicles
{
	class BaseBuilding;
	class Container_Base;
	class UpgradeSystem;
	class BaseBuilding_CompoundGateBase: BaseBuilding
	{
		class UpgradeSystem: UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 10;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 5;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 10;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 5;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 25;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 15;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 10;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
			};
		};
	};
	class BaseBuilding_CompoundWallBase: BaseBuilding
	{
		class UpgradeSystem: UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 6;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 3;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 10;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 5;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 25;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 15;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 10;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
			};
		};
	};
	class BaseBuilding_FloorBase: BaseBuilding
	{
		placementMode = 3;
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 2;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 1;
				};
			};
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
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 5;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 2;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	class BaseBuilding_WallBase: BaseBuilding
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 2;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 20;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 10;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 10;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 5;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	//Stairs
	class BaseBuilding_StepLadderBase: BaseBuilding_WallBase
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 4;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 20;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 10;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 10;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 5;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	class BaseBuilding_StairsBase: BaseBuilding
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 4;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 20;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 10;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 10;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 5;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	class BaseBuilding_StairsStraightBase: BaseBuilding_StairsBase
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 4;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 20;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 10;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 10;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 5;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	//Roofs
	class BaseBuilding_RoofWallLeftBase: BaseBuilding_WallBase
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 2;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 1;
				};
			};
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
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 5;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 2;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	class BaseBuilding_RoofWallRightBase: BaseBuilding_WallBase
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 2;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 1;
				};
			};
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
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 5;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 2;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	class BaseBuilding_RoofBase: BaseBuilding
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 2;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 20;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 10;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 10;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 5;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	//Ramp
	class BaseBuilding_RampBase: BaseBuilding
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 4;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 20;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 10;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 5;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 2;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	//LadderHatches
	class BaseBuilding_TriangleLadderHatchBase: BaseBuilding_FloorBase
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 2;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 1;
				};
			};
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
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 5;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 1;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	class BaseBuilding_HatchLadderBase: BaseBuilding
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 4;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 20;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 10;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 5;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 2;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	class BaseBuilding_LadderHatchBase: BaseBuilding_FloorBase
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 4;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 20;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 10;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 10;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 5;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	//Walls
	class BaseBuilding_WindowFrameBase: BaseBuilding_WallBase
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 2;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 20;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 10;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 10;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 5;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	class BaseBuilding_HalfWallBase: BaseBuilding_WallBase
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 2;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 1;
				};
			};
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
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 5;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 2;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	class BaseBuilding_DoubleDoorFrameBase: BaseBuilding_WallBase
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 2;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 1;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 5;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 5;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 5;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 2;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	class BaseBuilding_DoorFrameBase: BaseBuilding_WallBase
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 2;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
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
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 5;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 2;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	//Doors
	class BaseBuilding_GarageDoorBase: BaseBuilding
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 4;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 20;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 10;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 10;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 5;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 10;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
			};
		};
	};
	class BaseBuilding_DoubleDoorBase: BaseBuilding
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 4;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 20;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 10;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 10;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 5;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 10;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
			};
		};
	};
	class BaseBuilding_SingleDoorBase: BaseBuilding
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 2;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 1;
				};
			};
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
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 5;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 2;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	//Foundations
	class BaseBuilding_TriangleFoundationBase: BaseBuilding
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 2;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 1;
				};
			};
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
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 5;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 2;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
			};
		};
	};
	class BaseBuilding_FoundationBase: BaseBuilding
	{
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 4;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 2;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 20;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 10;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 10;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 5;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 10;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 5;
				};
			};
		};
	};
	//Floors
	class BaseBuilding_TriangleFloorBase: BaseBuilding
	{
		placementMode = 3;
		class UpgradeSystem
		{
			class Hologram{};
			class Frame
			{
				class Construct
				{
					item = "WoodenLog";
					quantity = 1;
				};
				class Repair
				{
					item = "WoodenLog";
					quantity = 1;
				};
			};
			class Wood
			{
				class Construct
				{
					item = "WoodenPlank";
					quantity = 5;
				};
				class Repair
				{
					item = "WoodenPlank";
					quantity = 2;
				};
			};
			class Metal
			{
				class Construct
				{
					item = "MetalPlate";
					quantity = 2;
				};
				class Repair
				{
					item = "MetalPlate";
					quantity = 1;
				};
			};
			class Concrete
			{
				class Construct
				{
					item = "RA_Cinderblock";
					quantity = 2;
				};
				class Repair
				{
					item = "RA_Cinderblock";
					quantity = 1;
				};
			};
		};
	};
};