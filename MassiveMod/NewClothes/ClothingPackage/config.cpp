class CfgPatches
{
	class MassiveMod_ClothingPackages
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Sounds_Effects"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class MassiveMod_PackageBase: Clothing_Base
	{
		scope=0;
		inventorySlot[]={"ClothingPackage"};
		model = "MassiveMod\NewClothes\ClothingPackage\Pack.p3d";
		itemSize[]={5,4};
	};
	class MassiveMod_BDUPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="BDU Package";
		descriptionShort=="A Package Containing a Full BDU Set of Clothing";
	};
	class MassiveMod_WinterBDUPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="Winter BDU Package";
		descriptionShort=="A Package Containing a Full Winter BDU Set of Clothing";
	};
	class MassiveMod_GorkaAutumnPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="Gorka Autumn Package";
		descriptionShort=="A Package Containing a Full Gorka Autumn Set of Clothing";
	};
	class MassiveMod_GorkaFlatPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="Gorka Flat Package";
		descriptionShort=="A Package Containing a Full Gorka Flat Set of Clothing";
	};
	class MassiveMod_GorkaSummerPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="Gorka Summer Package";
		descriptionShort=="A Package Containing a Full Gorka Summer Set of Clothing";
	};
	class MassiveMod_GorkaPautRevPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="Gorka Pautrev Package";
		descriptionShort=="A Package Containing a Full Gorka Pautrev Set of Clothing";
	};
	class MassiveMod_USMCDesertPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="USMC Desert Package";
		descriptionShort=="A Package Containing a Full USMC Desert Set of Clothing";
	};
	class MassiveMod_USMCWoodlandPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="USMC Woodland Package";
		descriptionShort=="A Package Containing a Full USMC Woodland Set of Clothing";
	};
	class MassiveMod_TTSKOPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="TTSKO Package";
		descriptionShort=="A Package Containing a Full TTSKO Set of Clothing";
	};
	class MassiveMod_TropicamPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="Tropicam Package";
		descriptionShort=="A Package Containing a Full Tropicam Set of Clothing";
	};
	class MassiveMod_MandrakePackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="Mandrake Package";
		descriptionShort=="A Package Containing a Full Mandrake Set of Clothing";
	};
	class MassiveMod_UrbanPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="Urban Package";
		descriptionShort=="A Package Containing a Full Urban Set of Clothing";
	};
	class MassiveMod_SM90Package: MassiveMod_PackageBase
	{
		scope=2;
		displayName="SM90 Package";
		descriptionShort=="A Package Containing a Full SM90 Set of Clothing";
	};
	class MassiveMod_InvertGorkaWoodlandPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="Inverted Gorka Woodland Package";
		descriptionShort=="A Package Containing a Full Set of Inverted Gorka Woodland Clothing";
	};
	class MassiveMod_InvertGorkaWinterPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="Inverted Gorka Winter Package";
		descriptionShort=="A Package Containing a Full Set of Inverted Gorka Winter Clothing";
	};
	class MassiveMod_IrishDPMPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="Irish DPM Camo Package";
		descriptionShort=="A Package Containing a Full Set of Irish DPM Mercenary Camo";
	};
	class MassiveMod_SwedenM90Package: MassiveMod_PackageBase
	{
		scope=2;
		displayName="Sweden M90 Camo Package";
		descriptionShort=="A Package Containing a Full Set of Sweden M90 Mercenary Camo";
	};
	class MassiveMod_ThailandUrbanPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="ThaiLand Urban Camo Package";
		descriptionShort=="A Package Containing a Full Set of Thailand Urban Mercenary Camo";
	};
	class MassiveMod_FinnishM05Package: MassiveMod_PackageBase
	{
		scope=2;
		displayName="Finnish M05 Camo Package";
		descriptionShort=="A Package Containing a Full Set of Fnnish M05 Mercenary Camo";
	};
	class MassiveMod_BritishDPM95Package: MassiveMod_PackageBase
	{
		scope=2;
		displayName="British DPM95 Camo Package";
		descriptionShort=="A Package Containing a Full Set of British DPM95 Mercenary Camo";
	};
	class MassiveMod_RussianMVDRastrPackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="MVD Special Operator Rastr Camo Package";
		descriptionShort=="A Package Containing a Full Set of Russian Special Operator Camo";
	};
	class MassiveMod_NorthKStripePackage: MassiveMod_PackageBase
	{
		scope=2;
		displayName="North Korean Tiger Camo Package";
		descriptionShort=="A Package Containing a Full Set of North Koren Tiger Strip Mercenary Camo";
	};	
};