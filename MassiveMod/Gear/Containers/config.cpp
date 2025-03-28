class CfgPatches
{
	class SH_Gear_Containers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Containers"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class AmmoBox;
	class Container_Base;
	class WoodenCrate: Container_Base
	{
		itemIsOpenable=1;
	};
	class MassiveMod_LargeWoodenCrate: Container_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Wooden_Case0";
		descriptionShort="$STR_CfgVehicles_Wooden_Case1";
		model="MassiveMod\Gear\Containers\Data\wood_crate_large.p3d";
		hologramMaterial="wooden_case";
		hologramMaterialPath="dz\gear\camping\data";
		slopeTolerance=0.40000001;
		yawPitchRollLimit[]={45,45,45};
		itemSize[]={12,6};
		itemsCargoSize[]={10,30};
		allowOwnedCargoManipulation=1;
		carveNavmesh = 1;
		physLayer="item_large";
		canBeDigged = 0;
		openable = 1;
		weight=15000;
		itemBehaviour=0;
		rotationFlags=2;
		soundImpactType="wood";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class MassiveMod_GunWall: Container_Base
	{
		scope=2;
		displayName="Gun Wall";
		descriptionShort="A Wall Rack made to put guns inside";
		model="MassiveMod\Gear\Containers\Data\GunWall.p3d";
		hologramMaterial="wooden_case";
		hologramMaterialPath="dz\gear\camping\data";
		attachments[]=
        {
			"Shoulder1",
            "Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Shoulder7",
			"Shoulder8"
        };
		slopeTolerance=0.40000001;
		itemBehaviour=0;
		itemIsOpenable=1;
		yawPitchRollLimit[]={0,0,0};
		itemSize[]={12,6};
		itemsCargoSize[]={10,3};
		allowOwnedCargoManipulation=1;
		carveNavmesh = 1;
		physLayer="item_large";
		canBeDigged = 0;
		openable = 1;
		weight=15000;
		rotationFlags=0;
		soundImpactType="wood";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class MassiveMod_EquipmentLocker: Container_Base
	{
		scope=2;
		displayName="Equipment Locker";
		descriptionShort="A locker used for storing Weapons and other Equipment such as Clothes and Backpacks";
		model="MassiveMod\Gear\Containers\Data\EquipmentLocker.p3d";
		attachments[]=
        {
			"Headgear",
			"Mask",
			"Eyewear",
			"Gloves",
			"Armband",
			"Vest",
			"Back",
			"Hips",
			"Legs",
			"Feet",
			"Shoulder1",
            "Shoulder2",
			"Shoulder3",
			"Shoulder4"
		};
		slopeTolerance=0.40000001;
		itemBehaviour=0;
		itemIsOpenable=1;
		yawPitchRollLimit[]={45,45,45};
		itemSize[]={6,12};
		itemsCargoSize[]={10,10};
		allowOwnedCargoManipulation=1;
		carveNavmesh = 1;
		physLayer="item_large";
		canBeDigged = 0;
		openable = 1;
		weight=15000;
		rotationFlags=0;
		soundImpactType="wood";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								""
							}
						},
						
						{
							0.69999999,
							
							{
								""
							}
						},
						
						{
							0.5,
							
							{
								""
							}
						},
						
						{
							0.30000001,
							
							{
								""
							}
						},
						
						{
							0,
							
							{
								""
							}
						}
					};
				};
			};
		};
	};
	class SeaChest: Container_Base
	{
		itemIsOpenable=1;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyShoulder1: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"Shoulder1"
		};
		model="MassiveMod\Gear\Containers\Data\Proxy\Weapon0.p3d";
	};
	class ProxyShoulder2: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"Shoulder2"
		};
		model="MassiveMod\Gear\Containers\Data\Proxy\Weapon1.p3d";
	};
	class ProxyShoulder3: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"Shoulder3"
		};
		model="MassiveMod\Gear\Containers\Data\Proxy\Weapon2.p3d";
	};
	class ProxyShoulder4: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"Shoulder4"
		};
		model="MassiveMod\Gear\Containers\Data\Proxy\Weapon3.p3d";
	};
	class ProxyShoulder5: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"Shoulder5"
		};
		model="MassiveMod\Gear\Containers\Data\Proxy\Weapon4.p3d";
	};
	class ProxyShoulder6: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"Shoulder6"
		};
		model="MassiveMod\Gear\Containers\Data\Proxy\Weapon5.p3d";
	};
	class ProxyShoulder7: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"Shoulder7"
		};
		model="MassiveMod\Gear\Containers\Data\Proxy\Weapon6.p3d";
	};
	class ProxyShoulder8: ProxyAttachment
	{
		scope=2;
		inventorySlot[]+=
		{
			"Shoulder8"
		};
		model="MassiveMod\Gear\Containers\Data\Proxy\Weapon7.p3d";
	};
};