class CfgPatches
{
	class A6_ArmorRack
	{
		units[] = {"A6_ArmorRack"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A6_BaseClasses","A6_BaseKitBoxes"};
	};
};	
class CfgVehicles
{
	class A6_Kit;
	class A6_Storage_Base;
	class A6_ArmorRack_Kit: A6_Kit
	{
		scope=2;
		displayName="Armor Rack Kit";
		descriptionShort = "A Kit that containts an ArmorRack. 1 Rifle, Vest, Backpack, Helmet, Shoes, Belt. Can be disassembled with a screwdriver.";
		itemSize[] = {6,4};
	};
	class A6_ArmorRack: A6_Storage_Base
	{
		scope = 2;
		displayName = "Armor Rack";
		descriptionShort = "An Armor Rack that can store: 1 Rifle, Vest, Backpack, Helmet, Shoes, Belt. Can be disassembled with a screwdriver.";
		model = "A6_Base_Storage\BaseObjects\ArmorRack\ArmorRack.p3d";
		attachments[] = 
		{
			"Shoulder1",
			"Vest",
			"Back",
			"Headgear",
			"Feet",
			"Armband",
			"Hips"
		};
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Base_Storage\BaseObjects\ArmorRack\data\ArmorRack_co.paa"
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifle_Storage
			{
				name = "Rifle Storage";
				description = "";
				attachmentSlots[] = {"Shoulder1"};
				icon = "shoulderleft";
			};
			class Accessories
			{
				name = "Accessories";
				description = "";
				attachmentSlots[] = {"Feet","Armband"};
				icon = "eyewear";
			};
			class Clothing
			{
				name = "Clothing";
				description = "";
				attachmentSlots[] = {"Vest","Hips","Back","Headgear"};
				icon = "body";
			};
		};
		class Cargo
		{
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
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