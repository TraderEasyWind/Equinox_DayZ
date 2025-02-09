// #include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class StrikerPlateCarrier
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Pants",
			"DZ_Characters_Vests",
			"DZ_Characters_Tops",
			"DZ_Characters_Masks",
			"DZ_Characters_Headgear",
			"DZ_Data",
		};
	};
};
class CfgVehicles
{
	
	class Clothing_Base;
	class Clothing;
	class GlobalHealth;
	class Health;
	class PlateCarrierVest;
	class PlateCarrierVest_Camo3: PlateCarrierVest
	{
		descriptionShort= "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Offered here in a unique Irish DPM Camo. Can be expandable with holster and additional pouches.";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo3_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo3_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo3_2.paa"};
	};
	class PlateCarrierVest_Camo5: PlateCarrierVest
	{
		descriptionShort= "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Offered here in a unique Sweden M90 Camo. Can be expandable with holster and additional pouches.";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo5_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo5_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo5_2.paa"};
	};
	class PlateCarrierVest_Camo7: PlateCarrierVest
	{
		descriptionShort= "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Offered here in a unique Thailand Urban Camo. Can be expandable with holster and additional pouches.";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo7_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo7_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo7_2.paa"};
	};
	class PlateCarrierVest_Camo10: PlateCarrierVest
	{
		descriptionShort= "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Offered here in a unique Finnish M05 Camo. Can be expandable with holster and additional pouches.";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo10_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo10_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo10_2.paa"};
	};
	class PlateCarrierVest_Camo13: PlateCarrierVest
	{
		descriptionShort= "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Offered here in a unique British DPM95 Camo. Can be expandable with holster and additional pouches.";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo13_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo13_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo13_2.paa"};
	};
	class PlateCarrierVest_Camo14: PlateCarrierVest
	{
		descriptionShort= "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Offered here in a unique Russian MVD Special Operator Rastr Camo. Can be expandable with holster and additional pouches.";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo14_3.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo14_3.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo14_3.paa"};
	};
	class PlateCarrierVest_Camo16: PlateCarrierVest
	{
		descriptionShort= "Hard-plate reinforced bulletproof vest, able to absorb various types of impact damage. Offered here in a unique North Korean Tiger Stripe Camo. Can be expandable with holster and additional pouches.";
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo16_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo16_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo16_2.paa"};
	};
	class PlateCarrierHolster;
	class PlateCarrierHolster_Camo3: PlateCarrierHolster
	{
		descriptionShort= "A pistol holster, attachable to plate carrier vest. Offered here in a unique Irish DPM Camo. Provides a convenient way to store your pistol.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo3_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo3_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo3_2.paa"};
	};
	class PlateCarrierHolster_Camo5: PlateCarrierHolster
	{
		descriptionShort= "A pistol holster, attachable to plate carrier vest. Offered here in a unique Sweden M90 Camo. Provides a convenient way to store your pistol.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo5_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo5_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo5_2.paa"};
	};
	class PlateCarrierHolster_Camo7: PlateCarrierHolster
	{
		descriptionShort= "A pistol holster, attachable to plate carrier vest. Offered here in a unique Thailand Urban Camo. Provides a convenient way to store your pistol.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo7_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo7_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo7_2.paa"};
	};
	class PlateCarrierHolster_Camo10: PlateCarrierHolster
	{
		descriptionShort= "A pistol holster, attachable to plate carrier vest. Offered here in a unique Finnish M05 Camo. Provides a convenient way to store your pistol.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo10_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo10_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo10_2.paa"};

	};
	class PlateCarrierHolster_Camo13: PlateCarrierHolster
	{
		descriptionShort= "A pistol holster, attachable to plate carrier vest. Offered here in a unique British DPM95 Camo. Provides a convenient way to store your pistol.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo13_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo13_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo13_2.paa"};
		
	};
	class PlateCarrierHolster_Camo14: PlateCarrierHolster
	{
		descriptionShort= "A pistol holster, attachable to plate carrier vest. Offered here in a unique Russian MVD Special Operator Rastr Camo. Provides a convenient way to store your pistol.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo14_3.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo14_3.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo14_3.paa"};
	};
	class PlateCarrierHolster_Camo16: PlateCarrierHolster
	{
		descriptionShort= "A pistol holster, attachable to plate carrier vest. Offered here in a unique North Korean Tiger Stripe Camo. Provides a convenient way to store your pistol.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo16_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo16_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo16_2.paa"};		
	};
	class PlateCarrierPouches;
	class PlateCarrierPouches_Camo3: PlateCarrierPouches
	{
		descriptionShort= "Pouches attachable to plate carrier vest. Offered here in a unique Irish DPM Camo. Further increase its carrying capacity.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo3_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo3_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo3_2.paa"};		
	};
	class PlateCarrierPouches_Camo5: PlateCarrierPouches
	{
		descriptionShort= "Pouches attachable to plate carrier vest. Offered here in a unique Sweden M90 Camo. Further increase its carrying capacity.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo5_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo5_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo5_2.paa"};
	};	
	class PlateCarrierPouches_Camo7: PlateCarrierPouches
	{
		descriptionShort= "Pouches attachable to plate carrier vest. Offered here in a unique Thailand Urban Camo. Further increase its carrying capacity.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo7_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo7_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo7_2.paa"};
	};	
	class PlateCarrierPouches_Camo10: PlateCarrierPouches
	{
		descriptionShort= "Pouches attachable to plate carrier vest. Offered here in a unique Finnish M05 Camo. Further increase its carrying capacity.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo10_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo10_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo10_2.paa"};

	};	
	class PlateCarrierPouches_Camo13: PlateCarrierPouches
	{
		descriptionShort= "Pouches attachable to plate carrier vest. Offered here in a unique British DPM95 Camo. Further increase its carrying capacity.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo13_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo13_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo13_2.paa"};
		
	};	
	class PlateCarrierPouches_Camo14: PlateCarrierPouches
	{
		descriptionShort= "Pouches attachable to plate carrier vest. Offered here in a unique Russian MVD Special Operator Rastr Camo. Further increase its carrying capacity.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo14_3.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo14_3.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo14_3.paa"};
	};
	class PlateCarrierPouches_Camo16: PlateCarrierPouches
	{
		descriptionShort= "Pouches attachable to plate carrier vest. Offered here in a unique North Korean Tiger Stripe Camo. Further increase its carrying capacity.";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo16_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo16_2.paa","MassiveMod\NewClothes\EQClothing\BallisticVest\data\BallisticVest_camo16_2.paa"};	
	};		
};