class CfgPatches
{
	class MassiveMod_Lights
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
	class MassiveMod_Static_Fire_Object: HouseNoDestruct
	{
		scope=2;
		storageCategory = 4;
		displayName="SurvivorCamp";
		descriptionShort="Aaaa";
		model="MassiveMod\Lights\Light.p3d";
		physLayer = "";
	};
	class MassiveMod_Floursecent_Light_Object: HouseNoDestruct
	{
		scope=2;
		storageCategory = 4;
		displayName="SurvivorCamp";
		descriptionShort="Aaaa";
		model="MassiveMod\Lights\Light.p3d";
		physLayer = "";
	};
	class MassiveMod_Floursecent_Light_ObjectRed: HouseNoDestruct
	{
		scope=2;
		storageCategory = 4;
		displayName="SurvivorCamp";
		descriptionShort="Aaaa";
		model="MassiveMod\Lights\Light.p3d";
		physLayer = "";
	};
	class MassiveMod_Floursecent_Light_ObjectBlue: HouseNoDestruct
	{
		scope=2;
		storageCategory = 4;
		displayName="SurvivorCamp";
		descriptionShort="Aaaa";
		model="MassiveMod\Lights\Light.p3d";
		physLayer = "";
	};
	//class MassiveModStaticChemlight_ColorBase: HouseNoDestruct
	//{
	//	model = "\dz\gear\consumables\Chemlight.p3d";
	//	rotationFlags = 17;
	//	hiddenSelections[] = {"camo"};
	//	hiddenSelectionsTextures[] = {"dz\gear\consumables\data\chemlight_ca.paa"};
	//	class DamageSystem
	//	{
	//		class GlobalHealth
	//		{
	//			class Health
	//			{
	//				hitpoints = 20;
	//				healthLevels[] = {{1.0,{"DZ\gear\consumables\data\"""".rvmat"}},{0.7,{"DZ\gear\consumables\data\"""".rvmat"}},{0.5,{"DZ\gear\consumables\data\""""_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\""""_damage.rvmat"}},{0.0,{"DZ\gear\consumables\data\""""_destruct.rvmat"}}};
	//			};
	//		};
	//	};
	//};
	//class Massivemod_StaticChemlight_White: MassiveModStaticChemlight_ColorBase
	//{
	//	scope = 2;
	//	hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_white_on.rvmat","dz\gear\consumables\data\chemlight_white_on.rvmat"};
	//};
	//class Massivemod_StaticChemlight_Red: MassiveModStaticChemlight_ColorBase
	//{
	//	scope = 2;
	//	hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_red_on.rvmat","dz\gear\consumables\data\chemlight_red_on.rvmat"};
	//};
	//class Massivemod_StaticChemlight_Green: MassiveModStaticChemlight_ColorBase
	//{
	//	scope = 2;
	//	hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_green_on.rvmat","dz\gear\consumables\data\chemlight_green_on.rvmat"};
	//};
	//class Massivemod_StaticChemlight_Blue: MassiveModStaticChemlight_ColorBase
	//{
	//	scope = 2;
	//	hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_blue_on.rvmat","dz\gear\consumables\data\chemlight_blue_on.rvmat"};
	//};
	//class Massivemod_StaticChemlight_Yellow: MassiveModStaticChemlight_ColorBase
	//{
	//	scope = 2;
	//	hiddenSelectionsMaterials[] = {"dz\gear\consumables\data\chemlight_yellow_on.rvmat","dz\gear\consumables\data\chemlight_yellow_on.rvmat"};
	//};
};