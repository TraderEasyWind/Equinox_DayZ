class CfgPatches
{
	class A6_MedicalCabinet
	{
		units[] = {"A6_MedicalCabinet","A6_MedicalCabinet_Black"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A6_BaseClasses","A6_BaseKitBoxes"};
	};
};
class CfgVehicles
{
	class A6_Kit;
	class A6_Openable_Base;
	class A6_MedicalCabinet_Kit: A6_Kit
	{
		scope=2;
		displayName="Medical Cabinet Kit";
		descriptionShort = "A Kit that containts a Medical Cabinet. Can be disassembled with a screwdriver.";
	};
	class A6_MedicalCabinet_Black_Kit: A6_Kit
	{
		scope=2;
		displayName="Medical Cabinet Kit (Crafted)";
		descriptionShort = "A Kit that containts a Medical Cabinet. Can be disassembled with a screwdriver.";
	};
	class A6_MedicalCabinet: A6_Openable_Base
	{
		scope = 2;
		displayName = "Medical Cabinet";
		descriptionShort = "A Medical Cabinet. Can be disassembled with a screwdriver.";		
		model = "A6_Base_Storage\BaseObjects\MedicalBox\medicalbox.p3d";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[] = {"A6_Base_Storage\BaseObjects\MedicalBox\data\MedicalBox_co.paa"};
		openSoundSet = "A6_MedicalCabinetOpen_SoundSet";
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {10,10};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2500;
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
	class A6_MedicalCabinet_Black: A6_MedicalCabinet
	{
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[] = {"A6_Base_Storage\BaseObjects\MedicalBox\data\MedicalBox_Black_co.paa"};
	};
};	