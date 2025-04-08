class CfgPatches
{
	class MassiveMod_ModTweaks_RABasebuilding_StructureHP
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
			"BaseBuilding_DoorFrame",
			"BaseBuilding_DoubleDoorFrame",
			"BaseBuilding_Floor",
			"BaseBuilding_Foundation",
			"BaseBuilding_HalfWall",
			"BaseBuilding_LadderHatch",
			"BaseBuilding_Ramp",
			"BaseBuilding_Roof",
			"BaseBuilding_RoofWall",
			"BaseBuilding_Stairs",
			"BaseBuilding_StairsStraight",
			"BaseBuilding_TriangleFloor",
			"BaseBuilding_TriangleFoundation",
			"BaseBuilding_TriangleLadderHatch",
			"BaseBuilding_WindowFrame",
			"BaseBuilding_Windows"
        };
	};
};
class CfgVehicles
{
	class BaseBuilding;
	//Walls Start -----------------------------------------------------
	class BaseBuilding_WallBase;
	class BaseBuilding_FrameWall: BaseBuilding_WallBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodWall: BaseBuilding_WallBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalWall: BaseBuilding_WallBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteWall: BaseBuilding_WallBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Walls End -----------------------------------------------------
	//Single Door Frame Start -----------------------------------------------------
	class BaseBuilding_DoorFrameBase;
	class BaseBuilding_FrameDoorFrame: BaseBuilding_DoorFrameBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodDoorFrame: BaseBuilding_DoorFrameBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalDoorFrame: BaseBuilding_DoorFrameBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteDoorFrame: BaseBuilding_DoorFrameBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Single Door Frame End -----------------------------------------------------
	//Double Door Frame Start -----------------------------------------------------
	class BaseBuilding_DoubleDoorFrameBase;
	class BaseBuilding_FrameDoubleDoorFrame: BaseBuilding_DoubleDoorFrameBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodDoubleDoorFrame: BaseBuilding_DoubleDoorFrameBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalDoubleDoorFrame: BaseBuilding_DoubleDoorFrameBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteDoubleDoorFrame: BaseBuilding_DoubleDoorFrameBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Double Door Frame End
	//Square Floor Start
	class BaseBuilding_FloorBase;
	class BaseBuilding_FrameFloor: BaseBuilding_FloorBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodFloor: BaseBuilding_FloorBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalFloor: BaseBuilding_FloorBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteFloor: BaseBuilding_FloorBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Square Floors End
	//Square Foundations Start
	class BaseBuilding_FoundationBase;
	class BaseBuilding_FrameFoundation: BaseBuilding_FoundationBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodFoundation: BaseBuilding_FoundationBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalFoundation: BaseBuilding_FoundationBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteFoundation: BaseBuilding_FoundationBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Square Foundation End
	//Half Wall Start
	class BaseBuilding_HalfWallBase;
	class BaseBuilding_FrameHalfWall: BaseBuilding_HalfWallBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodHalfWall: BaseBuilding_HalfWallBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalHalfWall: BaseBuilding_HalfWallBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteHalfWall: BaseBuilding_HalfWallBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Halfwall End
	//LadderHatch Start
	class BaseBuilding_LadderHatchBase;
	class BaseBuilding_FrameLadderHatch: BaseBuilding_LadderHatchBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodLadderHatch: BaseBuilding_LadderHatchBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalLadderHatch: BaseBuilding_LadderHatchBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteLadderHatch: BaseBuilding_LadderHatchBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//LadderHatch End
	//Ramp Start
	class BaseBuilding_RampBase;
	class BaseBuilding_FrameRamp: BaseBuilding_RampBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodRamp: BaseBuilding_RampBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Ramp Ends
	//Roof Starts
	class BaseBuilding_RoofBase;
	class BaseBuilding_FrameRoof: BaseBuilding_RoofBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodRoof: BaseBuilding_RoofBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalRoof: BaseBuilding_RoofBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Roof Ends
	//Roof Wall Starts
	class BaseBuilding_RoofWallLeftBase;
	class BaseBuilding_RoofWallRightBase;
	class Basebuilding_FrameRoofWall_Left: BaseBuilding_RoofWallLeftBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class Basebuilding_FrameRoofWall_Right: BaseBuilding_RoofWallRightBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class Basebuilding_WoodRoofWall_Left: BaseBuilding_RoofWallLeftBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class Basebuilding_WoodRoofWall_Right: BaseBuilding_RoofWallRightBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class Basebuilding_MetalRoofWall_Left: BaseBuilding_RoofWallLeftBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class Basebuilding_MetalRoofWall_Right: BaseBuilding_RoofWallRightBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteRoofWall_Left: BaseBuilding_RoofWallLeftBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteRoofWall_Right: BaseBuilding_RoofWallRightBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//RoofWalls End
	//Stairs Start
	class BaseBuilding_StairsBase;
	class BaseBuilding_FrameStairs: BaseBuilding_StairsBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodStairs: BaseBuilding_StairsBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalStairs: BaseBuilding_StairsBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Stairs End
	//Straight Stairs Start
	class BaseBuilding_StairsStraightBase;
	class BaseBuilding_FrameStairsStraight: BaseBuilding_StairsStraightBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodStairsStraight: BaseBuilding_StairsStraightBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalStairsStraight: BaseBuilding_StairsStraightBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Stairs Straight End
	//Triangle Floor Start
	class BaseBuilding_TriangleFloorBase;
	class BaseBuilding_FrameTriangleFloor: BaseBuilding_TriangleFloorBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodTriangleFloor: BaseBuilding_TriangleFloorBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalTriangleFloor: BaseBuilding_TriangleFloorBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteTriangleFloor: BaseBuilding_TriangleFloorBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Triangle Floor End
	//Triangle Foundation Start
	class BaseBuilding_TriangleFoundationBase;
	class BaseBuilding_FrameTriangleFoundation: BaseBuilding_TriangleFoundationBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodTriangleFoundation: BaseBuilding_TriangleFoundationBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalTriangleFoundation: BaseBuilding_TriangleFoundationBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteTriangleFoundation: BaseBuilding_TriangleFoundationBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Triangle Foundation End
	//Triangle Hatch Start
	class BaseBuilding_TriangleLadderHatchBase;
	class BaseBuilding_FrameTriangleLadderHatch: BaseBuilding_TriangleLadderHatchBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodTriangleLadderHatch: BaseBuilding_TriangleLadderHatchBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalTriangleLadderHatch: BaseBuilding_TriangleLadderHatchBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteTriangleLadderHatch: BaseBuilding_TriangleLadderHatchBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Triangle Ladder Hatch End
	//Window Frame Start
	class BaseBuilding_WindowFrameBase;
	class BaseBuilding_FrameWindowFrame: BaseBuilding_WindowFrameBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_WoodWindowFrame: BaseBuilding_WindowFrameBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_MetalWindowFrame: BaseBuilding_WindowFrameBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	class BaseBuilding_ConcreteWindowFrame: BaseBuilding_WindowFrameBase
	{
		class DamageSystem
		{
			class DamageZones
			{
				class Exterior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"exterior"
					};
				};
				class Interior
				{
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage=0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=0;
							};
						};
					};
					componentNames[]=
					{
						"interior"
					};
				};
			};
		};
	};
	//Window Frame End
};