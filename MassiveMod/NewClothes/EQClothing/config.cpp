// #include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class Testmod
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
			"DZ_Gear_Camping",
			"DZ_Gear_Crafting",
			"DZ_Gear_Tools",
			"DZ_Gear_Containers",
			"DZ_Weapons_Melee",
			"DZ_Weapons_Firearms",
			"DZ_Pistols",
			"DZ_Data"
		};
	};
};

class CfgVehicles
{
	class Clothing;
	//Tops
	class Tshirt_ColorBase;
	class EQ_Tshirt_Horror: Tshirt_ColorBase
	{
		displayName="Horror Shirt";
		descriptionShort="Custom T shirt for Equinox server by Striker";
		scope=2;
		weight = 500;
		itemsCargoSize[] = {3,4};
		heatIsolation = 0.7;
		itemsize[] = {2,2};
		ragQuantity = 2;		
    	hiddenSelectionsTextures[]=
    	{
    		"MassiveMod\NewClothes\EQClothing\horror_shirt.paa",
    		"MassiveMod\NewClothes\EQClothing\horror_shirt.paa",
    		"MassiveMod\NewClothes\EQClothing\horror_shirt.paa"
    	};
    };
    class TrackSuitJacket_ColorBase;
    class EQ_TrackSuitJacket: TrackSuitJacket_ColorBase
    {
    	displayName="Equinox TrackSuit Jacket";
    	descriptionShort="A custom Equinox TrackSuit Jacket made for this server only by Striker";
    	scope=2;
    	weight = 900;
    	itemsCargoSize[] = {5,4};
    	heatIsolation = 0.6;
    	itemsize[] = {2,2};
    	quickBarBonus = 0;
    	ragQuantity = 3;
    	varWetMax = 1;
    	repairCosts[] = {25,25};
    	repairableWithKits[]={5,2};		
    	hiddenSelectionsTextures[]=
    	{
    		"MassiveMod\NewClothes\EQClothing\EQ_TrackSuit_Jacket_Black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\EQ_TrackSuit_Jacket_Black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\EQ_TrackSuit_Jacket_Black_co.paa"
    	};
    };
	class TrackSuitPants_ColorBase;
	class EQ_TrackSuitPants: TrackSuitPants_ColorBase
	{
		displayName="Equinox TrackSuit Pants";
    	descriptionShort="A custom Equinox TrackSuit Pants made for this server only by Striker";
		scope=2;
		weight = 800;
		itemsCargoSize[] = {6,4};
    	heatIsolation = 0.8;
    	itemsize[] = {3,2};
    	quickBarBonus = 0;
    	ragQuantity = 3;
    	varWetMax = 1;
    	repairCosts[] = {25,25};
    	repairableWithKits[]={5,2};		
    	hiddenSelectionsTextures[]=
		{
    		"MassiveMod\NewClothes\EQClothing\TrackSuit_pants_Black_co_Equinox_logo3.paa",
    		"MassiveMod\NewClothes\EQClothing\TrackSuit_pants_Black_co_Equinox_logo3.paa",
    		"MassiveMod\NewClothes\EQClothing\TrackSuit_pants_Black_co_Equinox_logo3.paa"
    	};
	};
	class NBCJacketBase;
	class NCR_NBCJacketBlack: NBCJacketBase
	{
		displayName="NCR NBC Jacket";
    	descriptionShort="NCR Branded NBC jacket careful this item might make you a target";
		scope=2;
        weight=1500;
		itemSize[]={2,3};
		itemsCargoSize[]={4,3};
		quickBarBonus=2;
		repairableWithKits[]={5,6};
		repairCosts[]={30,30};
		visibilityModifier=0.89999998;
		varWetMax=0.249;
		heatIsolation=0.40000001;
		soundAttType="HeavyJacket";		
    	hiddenSelectionsTextures[]=
		{
    		"MassiveMod\NewClothes\EQClothing\ncr_nbc_jacket_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\ncr_nbc_jacket_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\ncr_nbc_jacket_black_co.paa"
    	};
	};
	class EQ_NBCJacketBlack: NBCJacketBase
	{
		displayName="Black NBC Jacket";
    	descriptionShort="Black NBC jacket for tactical ops in the bio infection zones";
		scope=2;
        weight=1500;
		itemSize[]={2,3};
		itemsCargoSize[]={4,3};
		quickBarBonus=2;
		repairableWithKits[]={5,6};
		repairCosts[]={30,30};
		visibilityModifier=0.89999998;
		varWetMax=0.249;
		heatIsolation=0.40000001;
		soundAttType="HeavyJacket";		
    	hiddenSelectionsTextures[]=
		{
    		"MassiveMod\NewClothes\EQClothing\nbc_jacket_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\nbc_jacket_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\nbc_jacket_black_co.paa"
    	};
	};
	class NBCPantsBase;
	class EQ_NBCPantsBlack: NBCPantsBase
	{
		displayName="Black NBC Pants";
    	descriptionShort="Black NBC Pants for tactical ops in the bio infection zones";
		scope=2;
        weight=520;
		varWetMax=0.249;
		heatIsolation=0.40000001;
		itemSize[]={3,2};
		itemsCargoSize[]={5,4};
		repairableWithKits[]={5,6};
		repairCosts[]={30,30};
		quickBarBonus=1;
		visibilityModifier=0.89999998;
		soundAttType="HeavyJacket";		
    	hiddenSelectionsTextures[]=
		{
    		"MassiveMod\NewClothes\EQClothing\nbc_pants_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\nbc_pants_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\nbc_pants_black_co.paa"
    	};
	};
	class NBCHoodBase;
	class EQ_NBCHoodBlack: NBCHoodBase
	{
		displayName="Black NBC Hood";
    	descriptionShort="Black NBC Hood for tactical ops in the bio infection zones";
		scope=2;
		visibilityModifier=0.89999998;
		weight=460;
		itemSize[]={2,2};
		repairableWithKits[]={5,6};
		repairCosts[]={30,30};
		varWetMax=0.249;
		heatIsolation=0.40000001;
    	hiddenSelectionsTextures[]=
		{
    		"MassiveMod\NewClothes\EQClothing\nbc_hood_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\nbc_hood_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\nbc_hood_black_co.paa"
    	};
	};
	class NBCGloves_ColorBase;
	class EQ_NBCGlovesBlack: NBCGloves_ColorBase
	{
		displayName="Black NBC Gloves";
    	descriptionShort="Black NBC Gloves for tactical ops in the bio infection zones";
		scope=2;
		weight=454;
		itemSize[]={2,2};
		varWetMax=0.249;
		heatIsolation=0.34999999;
		repairableWithKits[]={5,6};
		repairCosts[]={30,30};
    	hiddenSelectionsTextures[]=
		{
    		"MassiveMod\NewClothes\EQClothing\nbc_gloves_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\nbc_gloves_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\nbc_gloves_black_co.paa"
    	};
	};
	class NBCBootsBase;
	class EQ_NBCBootssBlack: NBCBootsBase
	{
		displayName="Black NBC Boots";
    	descriptionShort="Black NBC Boots for tactical ops in the bio infection zones";
		scope=2;
		itemSize[]={2,2};
		weight=300;
		durability=0.5;
		repairableWithKits[]={5,6};
		repairCosts[]={30,30};
		varWetMax=0.249;
		heatIsolation=0.40000001;
		visibilityModifier=0.89999998;
		soundAttType="Boots";
		soundImpactType="default";		
    	hiddenSelectionsTextures[]=
		{
    		"MassiveMod\NewClothes\EQClothing\nbc_boots_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\nbc_boots_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\nbc_boots_black_co.paa"
    	};
	};
	class HikingJacket_ColorBase;
	class EQ_TU_HikingJacket: HikingJacket_ColorBase
	{
		displayName="Trade Union Jacket";
    	descriptionShort="A custom made jacket for the traders of the trade union faction";
		scope=2;
		weight=270;
		itemSize[]={4,3};
		itemsCargoSize[]={7,6};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;
		quickBarBonus=2;
		ragQuantity=4;
		soundAttType="WoolShirt";
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		visibilityModifier=0.89999998;	
    	hiddenSelectionsTextures[]=
		{
    		"MassiveMod\NewClothes\EQClothing\EQTUhikingjacket.paa",
    		"MassiveMod\NewClothes\EQClothing\EQTUhikingjacket.paa",
    		"MassiveMod\NewClothes\EQClothing\EQTUhikingjacket.paa"
    	};
	};
	class Sneakers_ColorBase;
	class EQ_TUSneakers: Sneakers_ColorBase
	{
		displayName="Black NBC Boots";
    	descriptionShort="Black NBC Boots for tactical ops in the bio infection zones";
		scope=2;
		itemSize[]={3,2};
		weight=500;
		varWetMax=1;
		heatIsolation=0.2;
		visibilityModifier=0.89999998;
		repairableWithKits[]={3};
		repairCosts[]={25};
		soundAttType="Sneakers";
		soundImpactType="default";		
    	hiddenSelectionsTextures[]=
		{
    		"MassiveMod\NewClothes\EQClothing\TU_sneakers.paa",
    		"MassiveMod\NewClothes\EQClothing\TU_sneakers.paa",
    		"MassiveMod\NewClothes\EQClothing\TU_sneakers.paa"
    	};
	};
	class RidersJacket_ColorBase;
	class EQ_NCR_RiderJacket: RidersJacket_ColorBase
	{
		displayName="NCR Rider Jacket";
    	descriptionShort="A custom MC jacket for the NCR faction";
		scope=2;
		rotationFlags=12;
		weight=2800;
		itemSize[]={4,4};
		itemsCargoSize[]={6,5};
		varWetMax=0.49000001;
		heatIsolation=0.69999999;
		quickBarBonus=1;
		repairableWithKits[]={3};
		repairCosts[]={25};
		visibilityModifier=0.89999998;
		soundAttType="LeatherJacket";	
    	hiddenSelectionsTextures[]=
		{
    		"MassiveMod\NewClothes\EQClothing\NCR_riders_jacket_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\NCR_riders_jacket_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\NCR_riders_jacket_black_co.paa"
    	};
	};
	class EQ_Broke_Riderjacket: RidersJacket_ColorBase
	{
		displayName="Brokedown Palace MC Jacket";
    	descriptionShort="A custom MC jacket for the Trade Union faction showing featuring their home the brokendown palace";
		scope=2;
		rotationFlags=12;
		weight=2800;
		itemSize[]={4,4};
		itemsCargoSize[]={5,5};
		varWetMax=0.49000001;
		heatIsolation=0.99999999;
		quickBarBonus=1;
		repairableWithKits[]={3};
		repairCosts[]={25};
		visibilityModifier=0.89999998;
		soundAttType="LeatherJacket";	
    	hiddenSelectionsTextures[]=
		{
    		"MassiveMod\NewClothes\EQClothing\Brokedown_riders_jacket_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\Brokedown_riders_jacket_black_co.paa",
    		"MassiveMod\NewClothes\EQClothing\Brokedown_riders_jacket_black_co.paa"
    	};
	};
	class Armband_ColorBase;
	class Armband_108: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		color="108";
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\NewClothes\EQClothing\flag_white_co_108.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_108.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_108.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_108.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_108.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_108.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_108.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_108.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_108.paa"
		};
	};
	class Armband_cmf: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		color="cmf";
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\NewClothes\EQClothing\flag_white_co_cmf.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_cmf.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_cmf.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_cmf.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_cmf.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_cmf.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_cmf.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_cmf.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_cmf.paa"
		};
	};
	class Armband_ncr: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		color="ncr";
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ncr.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ncr.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ncr.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ncr.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ncr.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ncr.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ncr.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ncr.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ncr.paa"
		};
	};
	class Armband_OOrder: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		color="OO";
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\NewClothes\EQClothing\flag_white_co_OO.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_OO.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_OO.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_OO.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_OO.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_OO.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_OO.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_OO.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_OO.paa"
		};
	};
	class Armband_GOK: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		color="ghosts";
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ghosts.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ghosts.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ghosts.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ghosts.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ghosts.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ghosts.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ghosts.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ghosts.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_ghosts.paa"
		};
	};
	class Armband_TU: Armband_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		color="Trade";
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\NewClothes\EQClothing\flag_white_co_TU.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_TU.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_TU.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_TU.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_TU.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_TU.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_TU.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_TU.paa",
			"MassiveMod\NewClothes\EQClothing\flag_white_co_TU.paa"
		};
	};	
};