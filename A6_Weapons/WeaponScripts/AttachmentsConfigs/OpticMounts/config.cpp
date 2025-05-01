class CfgPatches
{
	class A6_OpticMounts
	{
		units[] = 
		{
			"A6_Optic_Mount_M16",
			"A6_Optic_Mount_FAL",
			"A6_Optic_Mount_SKS",
			"A6_Optic_Mount_MP5",
			"A6_Mossberg_Shroud_Rail",
			"A6_Mossberg_OpticMount",
			"A6_Optic_MountSVD",
			"A6_Optic_Mount9A91",
			"A6_Optic_MountAK",
			"A6_AK_Dustcover_Optic_Mount"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_Optic_Mount_M16: Inventory_Base
	{
		scope = 2;
		displayName = "M16 Optic Rail Mount";
		descriptionShort = "M16 Optic Mount with RIS Functionality for Optics.";
		model = "A6_Weapons\Attachments\OpticMounts\M16_Optic_Mount.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 350;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponOpticMountM16"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\OpticMounts\data\camo_rail.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\OpticMounts\data\camo_rail.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\OpticMounts\data\camo_rail_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\OpticMounts\data\camo_rail_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\OpticMounts\data\camo_rail_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		soundImpactType = "metal";
	};
	class A6_Optic_Mount_FAL: Inventory_Base
	{
		scope = 2;
		displayName = "FAL Rail Dust Cover";
		descriptionShort = "Dust Cover with RIS Functionality for Optics.";
		model = "A6_Weapons\Rifles\FAL\FAL_DustCover.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 350;
		itemSize[] = {3,1};
		inventorySlot[] = {"weaponFALOpticMount"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		IsLargeMount = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\FAL\data\camo_dustcover.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\FAL\data\camo_dustcover.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\FAL\data\camo_dustcover_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\FAL\data\camo_dustcover_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\FAL\data\camo_dustcover_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		soundImpactType = "metal";
	};
	class A6_Optic_Mount_SKS: Inventory_Base
	{
		scope = 2;
		displayName = "SKS Optic Mount";
		descriptionShort = "Picatinny rail attachment that can be mounted to the OP-SKS, for rail optics to be attached. Can only recieve optics & not scopes.";
		model = "A6_Weapons\Rifles\OPSKS\OPSKS_OpticMount.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 350;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponSKSOpticMount"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\OPSKS\data\camo_sks.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\OPSKS\data\camo_sks.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\OPSKS\data\camo_sks_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\OPSKS\data\camo_sks_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\OPSKS\data\camo_sks_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		soundImpactType = "metal";
	};
	class A6_Optic_Mount_MP5: Inventory_Base
	{
		scope = 2;
		displayName = "MP5 Optic Mount";
		descriptionShort = "Picatinny rail attachment that can be mounted to the MP5k, MP5, or MP5SD, for rail optics to be attached. Can only recieve optics & not scopes.";
		model = "A6_Weapons\SMGs\MP5\MP5_Railmount.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 350;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponMP5OpticMount"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\MP5\data\camo_railmount.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\MP5\data\camo_railmount.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\MP5\data\camo_railmount_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\MP5\data\camo_railmount_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\MP5\data\camo_railmount_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		soundImpactType = "metal";
	};
	class A6_Mossberg_OpticMount_Base: Inventory_Base
	{
		scope = 0;
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"MossbergOpticMount"};
		weight = 354;
		itemSize[] = {1,1};
		isMeleeWeapon = 1;
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class A6_Mossberg_OpticMount: A6_Mossberg_OpticMount_Base
	{
		scope = 2;
		displayName = "Mossberg Optic Rail";
		descriptionShort = "Optic Rail for the Mossberg 590. Compatible with the MP-153.";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_rail.p3d";
		hiddenSelections[] = {"camo_mossberg_590"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg.rvmat"};
		soundImpactType = "metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_mossberg_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Mossberg_Shroud_Rail: A6_Mossberg_OpticMount_Base
	{
		scope = 2;
		displayName = "590A1 Tactical Rail";
		descriptionShort = "Tactical Rail for the Mossberg 590. Compatible with the MP-153.";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_rail_shroud.p3d";
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1.1,1.1,1.1};
		aimSpeedModifier[]={1.1,1.1,1.1};
		itemSize[] = {5,2};
		hiddenSelections[] = {"camo_rail_2"};
		hiddenSelectionsTextures[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_rail_2_co.paa"};
		hiddenSelectionsMaterials[] = {"A6_Weapons\Shotguns\Mossberg\data\camo_rail_2.rvmat"};
		IsLargeMount = 1;
		CanAcceptLeftFlashlight = 1;
		CanAcceptRightFlashlight = 1;
		CanAcceptTopFlashlight = 1;
		CanAcceptBipod = 1;
		hasRailFunctionality = 1;
		soundImpactType = "metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_rail_2.rvmat"}},
						{0.7,{"A6_Weapons\Shotguns\Mossberg\data\camo_rail_2.rvmat"}},
						{0.5,{"A6_Weapons\Shotguns\Mossberg\data\camo_rail_2_damage.rvmat"}},
						{0.3,{"A6_Weapons\Shotguns\Mossberg\data\camo_rail_2_damage.rvmat"}},
						{0.0,{"A6_Weapons\Shotguns\Mossberg\data\camo_rail_2_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class A6_Optic_Mount9A91: Inventory_Base
	{
		scope = 2;
		displayName = "ToopMount Optic Mount";
		descriptionShort = "Picatinny rail attachment that can be mounted to the ASVAL, VSS, 9A91, or SVD for rail optics to be attached. ToopMount can only recieve optics & LPVOs.";
		model = "A6_Weapons\SMGs\9A91\9A91_Optic_Mount.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 350;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponOpticMount"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\SMGs\9A91\data\camo_optic_mount.rvmat"}},
						{0.7,{"A6_Weapons\SMGs\9A91\data\camo_optic_mount.rvmat"}},
						{0.5,{"A6_Weapons\SMGs\9A91\data\camo_optic_mount_damage.rvmat"}},
						{0.3,{"A6_Weapons\SMGs\9A91\data\camo_optic_mount_damage.rvmat"}},
						{0.0,{"A6_Weapons\SMGs\9A91\data\camo_optic_mount_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		soundImpactType = "plastic";
	};
	class A6_Optic_MountSVD: Inventory_Base
	{
		scope = 2;
		displayName = "Dovetail Scope Mount";
		descriptionShort = "Picatinny rail attachment that can be mounted to the ASVAL, VSS, 9A91, or SVD for rail optics to be attached, for rail optics to be attached. The Dovetail Mount can recieve optics.";
		model = "A6_Weapons\Snipers\SVD\Optic_MountSVD.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 650;
		itemSize[] = {2,2};
		inventorySlot[] = {"weaponOpticMount"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		IsLargeMount = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Snipers\SVD\data\camo_dovetail.rvmat"}},
						{0.7,{"A6_Weapons\Snipers\SVD\data\camo_dovetail.rvmat"}},
						{0.5,{"A6_Weapons\Snipers\SVD\data\camo_dovetail_damage.rvmat"}},
						{0.3,{"A6_Weapons\Snipers\SVD\data\camo_dovetail_damage.rvmat"}},
						{0.0,{"A6_Weapons\Snipers\SVD\data\camo_dovetail_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		soundImpactType = "metal";
	};
	class A6_Optic_MountAK: Inventory_Base
	{
		scope = 2;
		displayName = "MI AK Optic Mount";
		descriptionShort = "Picatinny rail attachment that can be mounted to AK Platforms for rail optics to be attached. MI AK Optic Mount can only recieve optics & LPVOs.";
		model = "A6_Weapons\Attachments\OpticMounts\AK_Optic_Mount.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 350;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponOpticMountAK"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Attachments\OpticMounts\data\camo_ak_mount.rvmat"}},
						{0.7,{"A6_Weapons\Attachments\OpticMounts\data\camo_ak_mount.rvmat"}},
						{0.5,{"A6_Weapons\Attachments\OpticMounts\data\camo_ak_mount_damage.rvmat"}},
						{0.3,{"A6_Weapons\Attachments\OpticMounts\data\camo_ak_mount_damage.rvmat"}},
						{0.0,{"A6_Weapons\Attachments\OpticMounts\data\camo_ak_mount_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		soundImpactType = "plastic";
	};
	class A6_AK_Dustcover_Optic_Mount: Inventory_Base
	{
		scope = 2;
		displayName = "AK Rail Dust Cover";
		descriptionShort = "Picatinny rail attachment that can be mounted to the AK Style Weapons, for rail optics to be attached.";
		model = "A6_Weapons\Rifles\AK\Parts\AK_DustCoverRail.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 400;
		itemSize[] = {3,1};
		inventorySlot[] = {"weaponOpticMountAK"};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		IsLargeMount = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Weapons\Rifles\AK50\data\camo.rvmat"}},
						{0.7,{"A6_Weapons\Rifles\AK50\data\camo.rvmat"}},
						{0.5,{"A6_Weapons\Rifles\AK50\data\camo_damage.rvmat"}},
						{0.3,{"A6_Weapons\Rifles\AK50\data\camo_damage.rvmat"}},
						{0.0,{"A6_Weapons\Rifles\AK50\data\camo_destruct.rvmat"}}
					};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		soundImpactType = "metal";
	};
};	
class CfgSlots
{
	class Slot_weaponOpticMountM16
	{
		name = "weaponOpticMountM16";
		displayName = "Optic Mount";
		ghostIcon = "set:A6_Weapons image:opticmount";
	};
	class Slot_weaponFALOpticMount
	{
		name = "weaponFALOpticMount";
		displayName = "Optic Mount";
		ghostIcon = "set:A6_Weapons image:opticmount";
	};
	class Slot_weaponOpticMount
	{
		name = "weaponOpticMount";
		displayName = "Optic Mount";
		ghostIcon = "set:A6_Weapons image:opticmount";
	};
	class Slot_weaponOpticMountAK
	{
		name = "weaponOpticMountAK";
		displayName = "Optic Mount";
		ghostIcon = "set:A6_Weapons image:opticmount";
	};
	class Slot_MossbergOpticMount
	{
		name = "MossbergOpticMount";
		displayName = "Optic Mount";
		ghostIcon = "set:A6_Weapons image:opticmount";
	};
	class Slot_weaponMP5OpticMount
	{
		name = "weaponMP5OpticMount";
		displayName = "Optic Mount";
		ghostIcon = "set:A6_Weapons image:opticmount";
	};
	class Slot_weaponSKSOpticMount
	{
		name = "weaponSKSOpticMount";
		displayName = "Optic Mount";
		ghostIcon = "set:A6_Weapons image:opticmount";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFAL_DustCover: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponFALOpticMount";
		model = "A6_Weapons\Rifles\FAL\FAL_DustCover.p3d";
	};
	class ProxyOPSKS_OpticMount: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponSKSOpticMount";
		model = "A6_Weapons\Rifles\OPSKS\OPSKS_OpticMount.p3d";
	};
	class ProxyMP5_Railmount: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMP5OpticMount";
		model = "A6_Weapons\SMGs\MP5\MP5_Railmount.p3d";
	};
	class ProxyMossberg_rail_shroud: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MossbergOpticMount";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_rail_shroud.p3d";
	};
	class ProxyMossberg_rail: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "MossbergOpticMount";
		model = "A6_Weapons\Shotguns\Mossberg\Mossberg_rail.p3d";
	};
	class Proxy9A91_Optic_Mount: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticMount";
		model = "A6_Weapons\SMGs\9A91\9A91_Optic_Mount.p3d";
	};
	class ProxyOptic_MountSVD: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticMount";
		model = "A6_Weapons\Snipers\SVD\Optic_MountSVD.p3d";
	};
	class ProxyAK_DustCoverRail: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticMountAK";
		model = "A6_Weapons\Rifles\AK\Parts\AK_DustCoverRail.p3d";
	};
	class ProxyAK_Optic_Mount: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticMountAK";
		model = "A6_Weapons\Attachments\OpticMounts\AK_Optic_Mount.p3d";
	};
	class ProxyM16_Optic_Mount: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOpticMountM16";
		model = "A6_Weapons\Attachments\OpticMounts\M16_Optic_Mount.p3d";
	};
};		