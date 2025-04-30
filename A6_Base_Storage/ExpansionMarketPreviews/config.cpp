class CfgPatches
{
    class A6_Base_Storage_Expansion_Market_Previews
    {
        units[]=
        {
            "A6_ArmorRack_Kit_ExpansionMarketPreview",
            "A6_MedicalCabinet_Kit_ExpansionMarketPreview",
            "A6_GreenHouse_Kit_ExpansionMarketPreview",
            "A6_MilitaryLocker_Green_Kit_ExpansionMarketPreview",
            "A6_MilitaryLocker_Tan_Kit_ExpansionMarketPreview",
            "A6_Refrigerator_Kit_ExpansionMarketPreview",
            "A6_Rifle_Safe_Kit_ExpansionMarketPreview",
            "A6_Rifle_Safe_Green_Kit_ExpansionMarketPreview",
            "A6_Rifle_Safe_Black_Kit_ExpansionMarketPreview",
            "A6_SingleGunRack_Kit_ExpansionMarketPreview",
            "A6_SingleGunRack_Tan_Kit_ExpansionMarketPreview",
            "A6_DoubleGunRack_Kit_ExpansionMarketPreview",
            "A6_DoubleGunRack_Tan_Kit_ExpansionMarketPreview",
            "A6_Safe_Big_Kit_ExpansionMarketPreview",
            "A6_Vault_Kit_ExpansionMarketPreview"
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "DZ_Data"
        };
    };
};
class CfgVehicles
{
    class HouseNoDestruct;
    class A6_ArmorRack_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Armor Rack Kit";
        descriptionShort = "A Kit that containts an ArmorRack. 1 Rifle, Vest, Backpack, Helmet, Shoes, Belt. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\ArmorRack\ArmorRack.p3d";
    };
    class A6_MedicalCabinet_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Medical Cabinet Kit";
        descriptionShort = "A Kit that containts a Medical Cabinet. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\MedicalBox\medicalbox.p3d";
    };
    class A6_GreenHouse_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Green House Kit";
        descriptionShort = "A Kit that containts a Green House for Farming. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\GreenHouse\GreenHouse.p3d";
    };
    class A6_MilitaryLocker_Green_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Military Locker Green Kit";
        descriptionShort = "A Kit that containts a Green Military Locker. Locker that can store: 7x Rifles, 6x Pistols, 5 Ammo Boxes, and Full Clothing Loadout. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\MilitaryLocker\MilitaryLocker.p3d";
    };
    class A6_MilitaryLocker_Tan_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Military Locker Tan Kit";
        descriptionShort = "A Kit that containts a Tan Military Locker, Locker that can store: 7x Rifles, 6x Pistols, 5 Ammo Boxes, and Full Clothing Loadout. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\MilitaryLocker\MilitaryLocker.p3d";
    };
    class A6_Refrigerator_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Old Refrigerator Kit";
        descriptionShort = "A Kit that containts a Old Refrigerator. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\Refrigerator\Refrigerator.p3d";
    };
    class A6_Rifle_Safe_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Rifle Safe Grey Kit";
        descriptionShort = "A Kit that containts a Grey Rifle Safe. Attachments: 5x Rifles, 3x Pistol. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\RifleSafe\RifleSafe.p3d";
    };
    class A6_Rifle_Safe_Green_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Rifle Safe Green Kit";
        descriptionShort = "A Kit that containts a Green Rifle Safe. Attachments: 5x Rifles, 3x Pistol. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\RifleSafe\RifleSafe.p3d";
    };
    class A6_Rifle_Safe_Black_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Rifle Safe Black Kit";
        descriptionShort = "A Kit that containts a Black Rifle Safe. Attachments: 5x Rifles, 3x Pistol. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\RifleSafe\RifleSafe.p3d";
    };
    class A6_SingleGunRack_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Gunrack Green Kit";
        descriptionShort = "A Kit that containts a Green Gunrack. Attachments: 10x Rifles. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\SingleGunrack\singlegunrack.p3d";
    };
    class A6_SingleGunRack_Tan_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Gunrack Tan Kit";
        descriptionShort = "A Kit that containts a Tan Gunrack. Attachments: 10x Rifles. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\SingleGunrack\singlegunrack.p3d";
    };
    class A6_DoubleGunRack_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Double Gunrack Green Kit";
        descriptionShort = "A Kit that containts a Green Double Gunrack. Attachments: 20x Rifles. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\SingleGunrack\doublegunrack.p3d";
    };
    class A6_DoubleGunRack_Tan_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Double Gunrack Tan Kit";
        descriptionShort = "A Kit that containts a Tan Double Gunrack. Attachments: 20x Rifles. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\SingleGunrack\doublegunrack.p3d";
    };
    class A6_Safe_Big_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Heavy Safe Kit";
        descriptionShort = "A Kit that containts a Heavy Safe. Attachments: 3 Rifle Slots, & 4 Pistol Slots. Can be disassembled with a screwdriver.";
        model = "A6_Base_Storage\BaseObjects\HeavySafe\HeavySafe.p3d";
    };
    class A6_Vault_Kit_ExpansionMarketPreview: HouseNoDestruct
    {
        displayName="Vault Kit";
        descriptionShort="A Vault. Attachments: 15 Rifle Slots, 10 Pistols Slots, and Clothing Slots. Place to deploy item inside. The items can be dismantled with a screwdriver after deployment.";
        model="A6_Base_Storage\BaseObjects\Vault\data\Vault.p3d";
    };
};    