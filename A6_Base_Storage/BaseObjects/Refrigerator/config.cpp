class CfgPatches
{
	class A6_Refrigerator
	{
		units[] = {"A6_Refrigerator"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A6_BaseClasses","A6_BaseKitBoxes"};
	};
};
class CfgVehicles
{
	class A6_Kit;
	class A6_Openable_Base;
	class A6_Refrigerator_Kit: A6_Kit
	{
		scope=2;
		displayName="Old Refrigerator Kit";
		descriptionShort = "A Kit that containts a Old Refrigerator. Can be disassembled with a screwdriver.";
	};
	class A6_Refrigerator: A6_Openable_Base
	{
		scope = 2;
		displayName = "Old Refrigerator";
		descriptionShort = "An Old Refrigerator. Can be disassembled with a screwdriver.";		
		model = "A6_Base_Storage\BaseObjects\Refrigerator\Refrigerator.p3d";
		hiddenSelections[]={"camo","camo2","camo3"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Base_Storage\BaseObjects\Refrigerator\data\body_co.paa",
			"A6_Base_Storage\BaseObjects\Refrigerator\data\lower_co.paa",
			"A6_Base_Storage\BaseObjects\Refrigerator\data\upper_co.paa"
		};
		openSoundSet = "A6_PlasticCrateOpen_SoundSet";
        closeSoundSet = "A6_PlasticCrateClose_SoundSet";
		class Cargo
		{
			itemsCargoSize[] = {10,30};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 3500;
					healthLevels[] = 
					{
						{1.0,{""}},
						{0.7,{""}},
						{0.5,{""}},
						{0.3,{""}},
						{0.0,{""}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.1;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.3;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
				};
			};						
		};	
	};
};	