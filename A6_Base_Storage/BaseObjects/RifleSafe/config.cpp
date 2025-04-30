class CfgPatches
{
	class A6_Rifle_Safes
	{
		units[] = {"A6_Rifle_Safe_Kit","A6_Rifle_Safe_Green_Kit","A6_Rifle_Safe_Black_Kit","A6_Rifle_Safe","A6_Rifle_Safe_Green","A6_Rifle_Safe_Black"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A6_BaseClasses","A6_BaseKitBoxes"};
	};
};	
class CfgVehicles
{
	class A6_Kit;
	class A6_Openable_Base;
	class A6_Rifle_Safe_Kit: A6_Kit
	{
		scope=2;
		displayName="Rifle Safe Grey Kit";
		descriptionShort = "A Kit that containts a Grey Rifle Safe. Attachments: 5x Rifles, 3x Pistol. Can be disassembled with a screwdriver.";
	};
	class A6_Rifle_Safe_Green_Kit: A6_Kit
	{
		scope=2;
		displayName="Rifle Safe Green Kit";
		descriptionShort = "A Kit that containts a Green Rifle Safe. Attachments: 5x Rifles, 3x Pistol. Can be disassembled with a screwdriver.";
	};
	class A6_Rifle_Safe_Black_Kit: A6_Kit
	{
		scope=2;
		displayName="Rifle Safe Black Kit";
		descriptionShort = "A Kit that containts a Black Rifle Safe. Attachments: 5x Rifles, 3x Pistol. Can be disassembled with a screwdriver.";
	};
	class A6_Rifle_Safe: A6_Openable_Base
	{
		scope = 2;
		displayName = "Rifle Safe";
		descriptionShort = "A Rifle Safe: 5x Rifles, 3x Pistol. Can be disassembled with a screwdriver.";		
		model = "A6_Base_Storage\BaseObjects\RifleSafe\RifleSafe.p3d";
		openSoundSet="A6_VaultDoorOpen_SoundSet";
		closeSoundSet="A6_VaultDoorClose_SoundSet";
		attachments[] = 
		{
			"CodeLock",
			"Att_CombinationLock",
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Pistol1",
			"Pistol2",
			"Pistol3"		
		};
		hiddenSelections[]={"camo","codelock"};
		hiddenSelectionsTextures[] = {"A6_Base_Storage\BaseObjects\RifleSafe\data\RifleSafe_co.paa","A6_Base_Storage\BaseObjects\RifleSafe\data\RifleSafe_co.paa"};
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
			class Pistols
			{
				name = "Pistols";
				description = "";
				attachmentSlots[] = {"Pistol1","Pistol2","Pistol3"};
				icon = "pistol";
			};
			class Rifle_Storage
			{
				name = "Rifle Storage";
				description = "";
				attachmentSlots[] = {"Shoulder1","Shoulder2","Shoulder3","Shoulder4","Shoulder5"};
				icon = "shoulderleft";
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
						{1.0,{"A6_Base_Storage\BaseObjects\RifleSafe\data\RifleSafe.rvmat"}},
						{0.7,{"A6_Base_Storage\BaseObjects\RifleSafe\data\RifleSafe_damage.rvmat"}},
						{0.5,{"A6_Base_Storage\BaseObjects\RifleSafe\data\RifleSafe_damage.rvmat"}},
						{0.3,{"A6_Base_Storage\BaseObjects\RifleSafe\data\RifleSafe_destruct.rvmat"}},
						{0.0,{"A6_Base_Storage\BaseObjects\RifleSafe\data\RifleSafe_destruct.rvmat"}}
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
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1.5;
			};
			class hideproxy
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class A6_Rifle_Safe_Green: A6_Rifle_Safe
	{
		hiddenSelections[]={"camo","codelock"};
		hiddenSelectionsTextures[] = {"A6_Base_Storage\BaseObjects\RifleSafe\data\RifleSafe_Green_co.paa","A6_Base_Storage\BaseObjects\RifleSafe\data\RifleSafe_Green_co.paa"};
	};
	class A6_Rifle_Safe_Black: A6_Rifle_Safe
	{
		hiddenSelections[]={"camo","codelock"};
		hiddenSelectionsTextures[] = {"A6_Base_Storage\BaseObjects\RifleSafe\data\RifleSafe_Black_co.paa","A6_Base_Storage\BaseObjects\RifleSafe\data\RifleSafe_Black_co.paa"};
	};
};