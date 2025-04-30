class CfgPatches
{
	class A6_MilitaryStorageCrate
	{
		units[] = {"A6_MilitaryStorageCrate"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A6_BaseClasses","A6_BaseKitBoxes"};
	};
};
class CfgVehicles
{
	class A6_Openable_Placeable_Base;
    class A6_MilitaryStorageCrate: A6_Openable_Placeable_Base
	{
		scope = 2;
        displayName = "Military Crate";
        descriptionShort = "Military Crate to store all your military items.";
        model = "A6_Base_Storage\BaseObjects\MilitaryCrate\MilitaryCrate.p3d";
        attachments[]={"CodeLock","Att_CombinationLock"};
        itemSize[] = {10,5};
        rotationFlags = 2;
        hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[] = {"A6_Base_Storage\BaseObjects\MilitaryCrate\data\MilitaryCrate_co.paa"};
        openSoundSet = "A6_PlasticCrateOpen_SoundSet";
        closeSoundSet = "A6_PlasticCrateClose_SoundSet";   
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
        };
        class Cargo
		{
			itemsCargoSize[] = {10,30};
			openable = 1;
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
                        {1.0,{"A6_Base_Storage\BaseObjects\MilitaryCrate\data\MilitaryCrate.rvmat"}},
                        {0.7,{"A6_Base_Storage\BaseObjects\MilitaryCrate\data\MilitaryCrate.rvmat"}},
                        {0.5,{"A6_Base_Storage\BaseObjects\MilitaryCrate\data\MilitaryCrate_damage.rvmat"}},
                        {0.3,{"A6_Base_Storage\BaseObjects\MilitaryCrate\data\MilitaryCrate_damage.rvmat"}},
                        {0.0,{"A6_Base_Storage\BaseObjects\MilitaryCrate\data\MilitaryCrate_destruct.rvmat"}}
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