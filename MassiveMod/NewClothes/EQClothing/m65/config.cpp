// #include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class StrikerM65
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
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class M65Jacket_ColorBase;                                  
	class M65Jacket_Camo3: M65Jacket_ColorBase
	{
		descriptionShort= "Model designed for military use, this classic piece of clothing is both durable and comfortable to wear. Offered here in a unique Irish DPM Camo. Not to mention warm";		
		scope = 2;                            
		visibilityModifier = 0.7;             
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\m65\data\m65_camo3_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo3_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo3_nobase.paa"};
	};                                                                          
	class M65Jacket_Camo5: M65Jacket_ColorBase
	{
		descriptionShort= "Model designed for military use, this classic piece of clothing is both durable and comfortable to wear. Offered here in a unique Sweden M90 Camo. Not to mention warm";
		scope = 2;                            
		visibilityModifier = 0.7;             
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\m65\data\m65_camo5_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo5_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo5_nobase.paa"};
	};
	class M65Jacket_Camo7: M65Jacket_ColorBase
	{
		descriptionShort= "Model designed for military use, this classic piece of clothing is both durable and comfortable to wear. Offered here in a unique Thailand Urban Camo. Not to mention warm";
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\m65\data\m65_camo7_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo7_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo7_nobase.paa"};
	};
	class M65Jacket_Camo10: M65Jacket_ColorBase
	{
		descriptionShort= "Model designed for military use, this classic piece of clothing is both durable and comfortable to wear. Offered here in a unique Finnish M05 Camo. Not to mention warm";
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\m65\data\m65_camo10_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo10_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo10_nobase.paa"};
	};
	class M65Jacket_Camo13: M65Jacket_ColorBase
	{
		descriptionShort= "Model designed for military use, this classic piece of clothing is both durable and comfortable to wear. Offered here in a unique British DPM95 Camo. Not to mention warm";
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\m65\data\m65_camo13_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo13_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo13_nobase.paa"};
	};
	class M65Jacket_Camo14: M65Jacket_ColorBase
	{
		descriptionShort= "Model designed for military use, this classic piece of clothing is both durable and comfortable to wear. Offered here in a unique Russian MVD Special Operator Rastr Camo. Not to mention warm";
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\m65\data\m65_camo14_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo14_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo14_nobase.paa"};
	};
	class M65Jacket_Camo16: M65Jacket_ColorBase
	{
		descriptionShort= "Model designed for military use, this classic piece of clothing is both durable and comfortable to wear. Offered here in a unique North Korean Tiger Stripe Camo. Not to mention warm";
		scope = 2;
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"MassiveMod\NewClothes\EQClothing\m65\data\m65_camo16_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo16_nobase.paa","MassiveMod\NewClothes\EQClothing\m65\data\m65_camo16_nobase.paa"};
	};

};