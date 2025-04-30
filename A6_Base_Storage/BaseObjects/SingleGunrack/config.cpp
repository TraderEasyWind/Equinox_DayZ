class CfgPatches
{
	class A6_Gunracks
	{
		units[] = {"A6_SingleGunRack","A6_SingleGunRack_Tan","A6_SingleGunRack_Black","A6_DoubleGunRack","A6_DoubleGunRack_Tan","A6_DoubleGunRack_Black"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A6_BaseClasses","A6_BaseKitBoxes"};
	};
};	
class CfgVehicles
{
	class A6_Kit;
	class A6_Coverable_Base;
	class A6_SingleGunRack_Kit: A6_Kit
	{
		scope=2;
		displayName="Gunrack Green Kit";
		descriptionShort = "A Kit that containts a Gunrack. Attachments: 10 Rifles. Can be disassembled with a screwdriver.";
	};
	class A6_SingleGunRack_Tan_Kit: A6_Kit
	{
		scope=2;
		displayName="Gunrack Tan Kit";
		descriptionShort = "A Kit that containts a Gunrack. Attachments: 10 Rifles. Can be disassembled with a screwdriver.";
	};
	class A6_SingleGunRack_Black_Kit: A6_Kit
	{
		scope=2;
		displayName="Gunrack Kit (Crafted)";
		descriptionShort = "A Kit that containts a Gunrack. Attachments: 10 Rifles. Can be disassembled with a screwdriver.";
	};
	class A6_DoubleGunRack_Kit: A6_Kit
	{
		scope=2;
		displayName="Double Gunrack Green Kit";
		descriptionShort = "A Kit that containts a Green Double Gunrack. Attachments: 20x Rifles. Can be disassembled with a screwdriver.";
	};
	class A6_DoubleGunRack_Tan_Kit: A6_Kit
	{
		scope=2;
		displayName="Double Gunrack Tan Kit";
		descriptionShort = "A Kit that containts a Tan Double Gunrack. Attachments: 20x Rifles. Can be disassembled with a screwdriver.";
	};
	class A6_DoubleGunRack_Black_Kit: A6_Kit
	{
		scope=2;
		displayName="Double Gunrack Kit (Crafted)";
		descriptionShort = "A Kit that containts a Double Gunrack. Attachments: 20x Rifles. Can be disassembled with a screwdriver.";
	};
	class A6_SingleGunRack: A6_Coverable_Base
	{
		scope = 2;
		displayName = "Gunrack";
		descriptionShort = "Gunrack, Attachments: 10 Rifles. Can be disassembled with a screwdriver.";		
		model = "A6_Base_Storage\BaseObjects\SingleGunrack\singlegunrack.p3d";
		openSoundSet="MediumTent_Door_Open_SoundSet";
        closeSoundSet="MediumTent_Door_Close_SoundSet";
		attachments[] = 
		{
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Shoulder7",
			"Shoulder8",
			"Shoulder9",
			"Shoulder10"				
		};
		hiddenSelections[]={"camo","cover"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Base_Storage\BaseObjects\SingleGunrack\data\gunrack_black_co.paa",
			"dz\structures\military\improvised\data\camonet_east_co.paa"
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifle_Storage
			{
				name = "Rifle Storage";
				description = "";
				attachmentSlots[] = 
				{
					"Shoulder1",
					"Shoulder2",
					"Shoulder3",
					"Shoulder4",
					"Shoulder5",
					"Shoulder6",
					"Shoulder7",
					"Shoulder8",
					"Shoulder9",
					"Shoulder10"
				};
				icon = "shoulderleft";
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
					hitpoints = 2000;
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
	class A6_SingleGunRack_Tan: A6_SingleGunRack
	{
		hiddenSelections[]={"camo","cover"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Base_Storage\BaseObjects\SingleGunrack\data\gunrack_tan_co.paa",
			"dz\structures\military\improvised\data\camonet_east_co.paa"
		};
	};
	class A6_SingleGunRack_Black: A6_SingleGunRack_Tan
	{
		hiddenSelections[]={"camo","cover"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Base_Storage\BaseObjects\SingleGunrack\data\gunrack_black_co.paa",
			"dz\structures\military\improvised\data\camonet_east_co.paa"
		};
	};
	class A6_DoubleGunRack: A6_Coverable_Base
	{
		scope = 2;
		displayName = "Double Gunrack";
		descriptionShort = "A Double Gunrack, Attachments: 20x Rifles. Can be disassembled with a screwdriver.";		
		model = "A6_Base_Storage\BaseObjects\SingleGunrack\doublegunrack.p3d";
		openSoundSet="MediumTent_Door_Open_SoundSet";
        closeSoundSet="MediumTent_Door_Close_SoundSet";
		attachments[] = 
		{
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Shoulder7",
			"Shoulder8",
			"Shoulder9",
			"Shoulder10",
			"Shoulder11",
			"Shoulder12",
			"Shoulder13",
			"Shoulder14",
			"Shoulder15",
			"Shoulder16",
			"Shoulder17",
			"Shoulder18",
			"Shoulder19",
			"Shoulder20"				
		};
		hiddenSelections[]={"camo","cover"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Base_Storage\BaseObjects\SingleGunrack\data\gunrack_co.paa",
			"dz\structures\military\improvised\data\camonet_east_co.paa"
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifle_Storage
			{
				name = "Rifle Storage";
				description = "";
				attachmentSlots[] = 
				{
					"Shoulder1",
					"Shoulder2",
					"Shoulder3",
					"Shoulder4",
					"Shoulder5",
					"Shoulder6",
					"Shoulder7",
					"Shoulder8",
					"Shoulder9",
					"Shoulder10"
				};
				icon = "shoulderleft";
			};
			class Rifle_Storage_2
			{
				name = "Rifle Storage";
				description = "";
				attachmentSlots[] = 
				{
					"Shoulder11",
					"Shoulder12",
					"Shoulder13",
					"Shoulder14",
					"Shoulder15",
					"Shoulder16",
					"Shoulder17",
					"Shoulder18",
					"Shoulder19",
					"Shoulder20"
				};
				icon = "shoulderleft";
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
					hitpoints = 4000;
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
	class A6_DoubleGunRack_Tan: A6_DoubleGunRack
	{
		hiddenSelections[]={"camo","cover"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Base_Storage\BaseObjects\SingleGunrack\data\gunrack_tan_co.paa",
			"dz\structures\military\improvised\data\camonet_east_co.paa"
		};
	};
	class A6_DoubleGunRack_Black: A6_DoubleGunRack
	{
		hiddenSelections[]={"camo","cover"};
		hiddenSelectionsTextures[] = 
		{
			"A6_Base_Storage\BaseObjects\SingleGunrack\data\gunrack_black_co.paa",
			"dz\structures\military\improvised\data\camonet_east_co.paa"
		};
	};
};