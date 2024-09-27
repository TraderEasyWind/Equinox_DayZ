class CfgPatches
{
	class MassiveMod_Buildings
	{
		units[]={};
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
	class Inventory_Base;
	class House;
	class BuildingSuper;
	class BaseBuildingBase;
	class MassiveMod_BunkerToken: Inventory_Base
	{
		scope = 2;
		displayName = "Bunker Entrance Token";
		descriptionShort = "Use this on a Manhole entrance near the Trader to enter the Safezone";
		model = "MassiveMod\Buildings\Data\BaseTokens\Token.p3d";
		rotationFlags = 34;
		itemSize[] = {1,1};
		weight = 20;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"MassiveMod\Buildings\Data\BaseTokens\Token_co.paa"};
		hiddenSelectionsMaterials[] = {"MassiveMod\Buildings\Data\BaseTokens\Token1.rvmat"};
	};
	class MassiveMod_OccluderTest: HouseNoDestruct
	{
		scope = 2;
		model = "MassiveMod\Buildings\Box.p3d";
	};
	class MassiveModCave1: HouseNoDestruct
	{
		scope = 2;
		model = "MassiveMod\Buildings\cave.p3d";
	};
	class MassiveModHatch: BaseBuildingBase
	{
		scope = 2;
		model = "MassiveMod\Buildings\Mass_Hatch.p3d";
	};
	class MassiveModExitHatch: BaseBuildingBase
	{
		scope = 2;
		model = "MassiveMod\Buildings\Mass_Hatch.p3d";
	};
	class MassiveModHatch2: BaseBuildingBase
	{
		scope = 1;
		model = "MassiveMod\Buildings\Mass_Hatch.p3d";
	};
	class MassiveModHatch3: BaseBuildingBase
	{
		scope = 1;
		model = "MassiveMod\Buildings\Mass_Hatch.p3d";
	};
	class MassiveModHatch4: BaseBuildingBase
	{
		scope = 1;
		model = "MassiveMod\Buildings\Mass_Hatch.p3d";
	};
	class MassiveModHatch5: BaseBuildingBase
	{
		scope = 1;
		model = "MassiveMod\Buildings\Mass_Hatch.p3d";
	};
	class MassiveModHatch6: BaseBuildingBase
	{
		scope = 1;
		model = "MassiveMod\Buildings\Mass_Hatch.p3d";
	};
	class MassiveModHatchUp: BaseBuildingBase
	{
		scope = 1;
		model = "MassiveMod\Buildings\Mass_HatchUp.p3d";
	};
	class MassiveModHatchUp2: BaseBuildingBase
	{
		scope = 1;
		model = "MassiveMod\Buildings\Mass_HatchUp.p3d";
	};
	class MassiveModHatchUp3: BaseBuildingBase
	{
		scope = 1;
		model = "MassiveMod\Buildings\Mass_HatchUp.p3d";
	};
	class MassiveModHatchUp4: BaseBuildingBase
	{
		scope = 1;
		model = "MassiveMod\Buildings\Mass_HatchUp.p3d";
	};
	class MassiveModHatchUp5: BaseBuildingBase
	{
		scope = 1;
		model = "MassiveMod\Buildings\Mass_HatchUp.p3d";
	};
	class MassiveModHatchUp6: BaseBuildingBase
	{
		scope = 1;
		model = "MassiveMod\Buildings\Mass_HatchUp.p3d";
	};
};