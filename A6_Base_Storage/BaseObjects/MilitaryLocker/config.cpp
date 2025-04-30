class CfgPatches
{
	class A6_MilitaryLocker
	{
		units[] = {"A6_MilitaryLocker_Green","A6_MilitaryLocker_Tan","A6_MilitaryLocker_Black"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A6_BaseClasses","A6_BaseKitBoxes"};
	};
};	
class CfgVehicles
{
	class A6_Kit;
	class A6_Openable_Base;
	class A6_MilitaryLocker_Green_Kit: A6_Kit
	{
		scope=2;
		displayName="Military Locker Green Kit";
		descriptionShort = "A Kit that containts a Green Military Locker, Locker that can store: 7x Rifles, 6x Pistols, 5 Ammo Boxes, and Clothing Full Loadout. Can be disassembled with a screwdriver.";
	};
	class A6_MilitaryLocker_Tan_Kit: A6_Kit
	{
		scope=2;
		displayName="Military Locker Tan Kit";
		descriptionShort = "A Kit that containts a Tan Military Locker, Locker that can store: 7x Rifles, 6x Pistols, 5 Ammo Boxes, and Clothing Full Loadout. Can be disassembled with a screwdriver.";
	};
	class A6_MilitaryLocker_Black_Kit: A6_Kit
	{
		scope=2;
		displayName="Military Locker Kit (Crafted)";
		descriptionShort = "A Kit that containts a Military Locker, Locker that can store: 7x Rifles, 6x Pistols, 5 Ammo Boxes, and Clothing Full Loadout. Can be disassembled with a screwdriver.";
	};
	class A6_MilitaryLocker_Base: A6_Openable_Base
	{
		scope = 2;
		displayName = "Military Locker";
		descriptionShort = "A Green Military Locker, Locker that can store: 7x Rifles, 6x Pistols, 5 Ammo Boxes, and Full Clothing Loadout. Can be disassembled with a screwdriver.";		
		model = "A6_Base_Storage\BaseObjects\MilitaryLocker\MilitaryLocker.p3d";
		openSoundSet = "A6_Locker_Open_SoundSet";
		closeSoundSet = "A6_Locker_Close_SoundSet";
		attachments[] = 
		{
			"CodeLock",
			"Att_CombinationLock",
			"Vest",
			"Back",
			"Headgear",
			"Legs",
			"Body",
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Shoulder7",
			"Pistol1",
			"Pistol2",
			"Pistol3",
			"Pistol4",
			"Pistol5",
			"Pistol6",
			"Gloves",
			"Feet",
			"Armband",
			"Eyewear",
			"Mask",
			"Hips",
			"AmmoBox1",
			"AmmoBox2",
			"AmmoBox3",
			"AmmoBox4",
			"AmmoBox5"
		};
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Base_Storage\BaseObjects\MilitaryLocker\data\MilitaryLocker_Green_co.paa",
			"A6_Base_Storage\BaseObjects\SingleGunrack\data\gunrack_co.paa"
		};
		class GUIInventoryAttachmentsProps
		{
			class CodeLock
			{
				name="CodeLock";
				description="";
				attachmentSlots[]=
				{
					"CodeLock"
				};
				icon="cat_bb_attachments";
			};
			class Lock
			{
				name="Lock";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="cat_bb_attachments";
			};
			class Rifle_Storage
			{
				name = "Rifle Storage";
				description = "";
				attachmentSlots[] = {"Shoulder1","Shoulder2","Shoulder3","Shoulder4","Shoulder5","Shoulder6","Shoulder7"};
				icon = "shoulderleft";
			};
			class Pistols
			{
				name = "Pistols";
				description = "";
				attachmentSlots[] = {"Pistol1","Pistol2","Pistol3","Pistol4","Pistol5","Pistol6"};
				icon = "pistol";
			};
			class Accessories
			{
				name = "Accessories";
				description = "";
				attachmentSlots[] = {"Mask","Eyewear","Gloves","Feet","Armband"};
				icon = "eyewear";
			};
			class Clothing
			{
				name = "Clothing";
				description = "";
				attachmentSlots[] = {"Vest","Body","Hips","Legs","Back","Headgear"};
				icon = "body";
			};
			class AmmoBoxes
			{
				name = "Ammo Boxes";
				description = "";
				attachmentSlots[] = {"AmmoBox1","AmmoBox2","AmmoBox3","AmmoBox4","AmmoBox5"};
				icon = "set:dayz_inventory image:cat_common_cargo";
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {10,5};
			openable = 1;
			allowOwnedCargoManipulation = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] = 
					{
						{1.0,{"A6_Base_Storage\BaseObjects\MilitaryLocker\data\MilitaryLocker.rvmat"}},
						{0.7,{"A6_Base_Storage\BaseObjects\MilitaryLocker\data\MilitaryLocker.rvmat"}},
						{0.5,{"A6_Base_Storage\BaseObjects\MilitaryLocker\data\MilitaryLocker_damage.rvmat"}},
						{0.3,{"A6_Base_Storage\BaseObjects\MilitaryLocker\data\MilitaryLocker_damage.rvmat"}},
						{0.0,{"A6_Base_Storage\BaseObjects\MilitaryLocker\data\MilitaryLocker_destruct.rvmat"}}
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
	class A6_MilitaryLocker_Green: A6_MilitaryLocker_Base
	{	
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Base_Storage\BaseObjects\MilitaryLocker\data\MilitaryLocker_Green_co.paa",
			"A6_Base_Storage\BaseObjects\SingleGunrack\data\gunrack_co.paa"
		};
	};
	class A6_MilitaryLocker_Tan: A6_MilitaryLocker_Green
	{
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Base_Storage\BaseObjects\MilitaryLocker\data\MilitaryLocker_Tan_co.paa",
			"A6_Base_Storage\BaseObjects\SingleGunrack\data\gunrack_tan_co.paa"
		};
	};
	class A6_MilitaryLocker_Black: A6_MilitaryLocker_Green
	{
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Base_Storage\BaseObjects\MilitaryLocker\data\MilitaryLocker_Black_co.paa",
			"A6_Base_Storage\BaseObjects\SingleGunrack\data\gunrack_black_co.paa"
		};
	};
};