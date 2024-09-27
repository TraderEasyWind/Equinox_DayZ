class CfgPatches
{
	class MassiveMod_BackpackSoundsVanilla
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Sounds_Effects",
			"DZ_Data",
			"DZ_Characters_Backpacks"
		};
	};
};
class CfgVehicles
{
    class Clothing_Base;
    class Clothing: Clothing_Base
    {
        InventorySoundsZipperBagOpen="MassiveModZipper_Soundset";
        InventorySoundsZipperBagClose="MassiveModZipper_Soundset";
    };
    class DryBag_ColorBase: Clothing
    {
        InventorySoundsZipperBagOpen="MassiveModRustlingSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingSFX_Soundset";
    };
    class ArmyPouch_ColorBase: Clothing
    {
        InventorySoundsZipperBagOpen="MassiveModRustlingSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingSFX_Soundset";
    };
    class AssaultBag_ColorBase: Clothing
    {
        InventorySoundsZipperBagOpen="MassiveModZipper_Soundset";
        InventorySoundsZipperBagClose="MassiveModZipper_Soundset";
    };
	class TaloonBag_ColorBase: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModZipper_Soundset";
        InventorySoundsZipperBagClose="MassiveModZipper_Soundset";
	};
	class TortillaBag: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModRustlingClickSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingClickSFX_Soundset";
	};
	class CourierBag: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModRustlingSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingSFX_Soundset";
	};
	class FurCourierBag: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModRustlingSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingSFX_Soundset";
	};
	class ImprovisedBag: Clothing
	{	
	    InventorySoundsZipperBagOpen="MassiveModRustlingSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingSFX_Soundset";
	};
	class FurImprovisedBag: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModRustlingSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingSFX_Soundset";
	};
	class HuntingBag: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModRustlingSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingSFX_Soundset";
	};
	class MountainBag_ColorBase: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModZipper_Soundset";
        InventorySoundsZipperBagClose="MassiveModZipper_Soundset";
	};
	class SmershBag: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModRustlingClickSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingClickSFX_Soundset";
	};
	class ChildBag_ColorBase: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModRustlingClickSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingClickSFX_Soundset";
	};
	class LeatherSack_ColorBase: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModRustlingSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingSFX_Soundset";
	};
	class CoyoteBag_ColorBase: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModHeavyMilitaryBagSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModHeavyMilitaryBagSFX_Soundset";
	};
	class AliceBag_ColorBase: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModHeavyMilitaryBagSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModHeavyMilitaryBagSFX_Soundset";
	};
	class SlingBag_ColorBase: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModZipper_Soundset";
        InventorySoundsZipperBagClose="MassiveModZipper_Soundset";
	};
	class DuffelBagSmall_ColorBase: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModRustlingSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingSFX_Soundset";
	};
	class CanvasBag_ColorBase: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModRustlingSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingSFX_Soundset";
	};
	class DrysackBag_ColorBase: Clothing
	{
		InventorySoundsZipperBagOpen="MassiveModRustlingSFX_Soundset";
        InventorySoundsZipperBagClose="MassiveModRustlingSFX_Soundset";
	};
};