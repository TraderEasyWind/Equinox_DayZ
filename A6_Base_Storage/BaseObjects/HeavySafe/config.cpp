class CfgPatches
{
	class A6_Safe_Big
	{
		units[] = {"A6_Safe_Big_Kit","A6_Safe_Big"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A6_BaseClasses","A6_BaseKitBoxes"};
	};
};
class CfgVehicles
{
	class A6_Kit;
	class A6_Openable_Base;
	class A6_Safe_Big_Kit: A6_Kit
	{
		scope=2;
		displayName="Heavy Safe Kit";
		descriptionShort = "A Kit that containts a Heavy Safe, Attachments: 3 Rifle Slots, & 4 Pistol Slots. Can be disassembled with a screwdriver.";
	};
	class A6_Safe_Big: A6_Openable_Base
	{
		scope = 2;
		displayName = "Heavy Safe";
		descriptionShort = "A Heavy Safe, Attachments: 3 Rifle Slots, & 4 Pistol Slots. Can be disassembled with a screwdriver.";
		model = "A6_Base_Storage\BaseObjects\HeavySafe\HeavySafe.p3d";
		openSoundSet="A6_VaultDoorOpen_SoundSet";
		closeSoundSet="A6_VaultDoorClose_SoundSet";
		attachments[] = 
		{
			"CodeLock",
			"Att_CombinationLock",
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Pistol1",
			"Pistol2",
			"Pistol3",
			"Pistol4"		
		};
		hiddenSelections[]={"safe","lock"};
		hiddenSelectionsTextures[] = {"A6_Base_Storage\BaseObjects\HeavySafe\data\safe_tall_co.paa","A6_Base_Storage\BaseObjects\HeavySafe\data\locks_co.paa"};
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
				attachmentSlots[] = {"Shoulder1","Shoulder2","Shoulder3"};
				icon = "shoulderleft";
			};
			class Pistols
			{
				name = "Pistols";
				description = "";
				attachmentSlots[] = {"Pistol1","Pistol2","Pistol3","Pistol4"};
				icon = "pistol";
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {10,20};
			openable = 1;
			allowOwnedCargoManipulation = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 7500;
					healthLevels[] = 
					{
						{1.0,{"A6_Base_Storage\BaseObjects\HeavySafe\data\safe_tall.rvmat"}},
						{0.7,{"A6_Base_Storage\BaseObjects\HeavySafe\data\safe_tall.rvmat"}},
						{0.5,{"A6_Base_Storage\BaseObjects\HeavySafe\data\safe_tall_damage.rvmat"}},
						{0.3,{"A6_Base_Storage\BaseObjects\HeavySafe\data\safe_tall_damage.rvmat"}},
						{0.0,{"A6_Base_Storage\BaseObjects\HeavySafe\data\safe_tall_destruct.rvmat"}}
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
				animPeriod = 0.1;
				initPhase = 1;
			};
		};
	};
};