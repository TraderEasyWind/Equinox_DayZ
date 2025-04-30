class CfgPatches
{
	class A6_Vault
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Camping"
		};
	};
};
class CfgVehicles
{
	class A6_Kit;
	class A6_Openable_Base;
	class A6_Vault_Kit: A6_Kit
	{	
		scope=2;
		weight=15000;	
		displayName="Vault Kit";
		descriptionShort="A Vault. 15 Rifle Slots, 10 Pistols Slots, and Clothing Slots. Place to deploy item inside. The items can be dismantled with a screwdriver after deployment.";
	};
    class A6_Vault: A6_Openable_Base
	{
		scope=2;
		displayName="Vault";
		descriptionShort="A Vault. 15 Rifle Slots, 10 Pistols Slots, and Clothing Slots.";
		model="A6_Base_Storage\BaseObjects\Vault\data\Vault.p3d";
		openSoundSet="A6_VaultDoorOpen_SoundSet";
		closeSoundSet="A6_VaultDoorClose_SoundSet";
		attachments[]=
		{
			"CodeLock",
			"Att_CombinationLock",
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
			"Armband",
			"Hips",
			"Back",
			"Body",
			"Legs",
			"Feet",
			"Eyewear",
			"Mask",
			"Gloves",
			"Vest",
			"Headgear",
			"Pistol1",
			"Pistol2",
			"Pistol3",
			"Pistol4",
			"Pistol5",
			"Pistol6",
			"Pistol7",
			"Pistol8",
			"Pistol9",
			"Pistol10"
		};
		hiddenSelections[]=
		{
			"base",
			"door",
			"posters",
			"board",
			"storagedetails",
			"workbench",
			"codelock"
		};
		hiddenSelectionsTextures[] = 
		{
			"A6_Base_Storage\BaseObjects\Vault\data\vault_base_co.paa",
			"A6_Base_Storage\BaseObjects\Vault\data\vault_door_co.paa",
			"A6_Base_Storage\BaseObjects\Vault\data\vault_posters_co.paa",
			"A6_Base_Storage\BaseObjects\Vault\data\vault_pegboard_co.paa",
			"A6_Base_Storage\BaseObjects\Vault\data\vault_storagedetails_co.paa",
			"A6_Base_Storage\BaseObjects\Vault\data\vault_workbench_co.paa",
			"A6_Base_Storage\BaseObjects\Vault\data\vault_door_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
					healthLevels[] = 
					{
						{1.0,{"A6_Base_Storage\BaseObjects\Vault\data\vault_base.rvmat","A6_Base_Storage\BaseObjects\Vault\data\vault_door.rvmat"}},
						{0.7,{"A6_Base_Storage\BaseObjects\Vault\data\vault_base.rvmat","A6_Base_Storage\BaseObjects\Vault\data\vault_door.rvmat"}},
						{0.5,{"A6_Base_Storage\BaseObjects\Vault\data\vault_base_damage.rvmat","A6_Base_Storage\BaseObjects\Vault\data\vault_door_damage.rvmat"}},
						{0.3,{"A6_Base_Storage\BaseObjects\Vault\data\vault_base_damage.rvmat","A6_Base_Storage\BaseObjects\Vault\data\vault_door_damage.rvmat"}},
						{0.0,{"A6_Base_Storage\BaseObjects\Vault\data\vault_base_destruct.rvmat","A6_Base_Storage\BaseObjects\Vault\data\vault_door_destruct.rvmat"}}
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
            class Rifles1
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
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
				icon="shoulderleft";
			};
			class Rifles2
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Shoulder11",
					"Shoulder12",
					"Shoulder13",
					"Shoulder14",
					"Shoulder15"
				};
				icon="shoulderleft";
			};
			class Pistols
			{
				name="Pistols";
				description="";
				attachmentSlots[]=
				{
                    "Pistol1",
                    "Pistol2",
                    "Pistol3",
                    "Pistol4",
                    "Pistol5",
                    "Pistol6",
                    "Pistol7",
                    "Pistol8",
                    "Pistol9",
                    "Pistol10"
				};
				icon="pistol";
			};
			class Accessories
			{
				name = "Accessories";
				description = "";
				attachmentSlots[] = 
				{
					"Mask",
					"Eyewear",
					"Gloves",
					"Feet",
					"Armband"
				};
				icon = "eyewear";
			};
			class Clothing
			{
				name = "Clothing";
				description = "";
				attachmentSlots[] = 
				{
					"Vest",
					"Body",
					"Hips",
					"Legs",
					"Back",
					"Headgear"
				};
				icon = "body";
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {10,60};
			openable = 1;
			allowOwnedCargoManipulation = 1;
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
};