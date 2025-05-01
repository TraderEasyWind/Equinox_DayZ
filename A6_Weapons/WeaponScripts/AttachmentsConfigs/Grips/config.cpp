class CfgPatches
{
	class A6_Grips
	{
		units[]=
		{
			"A6_AFG_Grip_Black",
			"A6_AFG_Grip_Tan",
			"A6_AFG_Grip_Grey",
			"A6_AFG_Grip_Green",
			"A6_AFG_Grip_Red",
			"A6_FSG2_Grip_Black",
			"A6_FSG2_Grip_Green",
			"A6_FSG2_Grip_Grey",
			"A6_FSG2_Grip_Tan",
			"A6_BCMGFVG_Grip",
			"A6_BCMGFVG_Grip_Tan",
			"A6_StrikeCobra_Grip",
			"A6_RK0_Grip",
			"A6_RK2_Grip",
			"A6_B25U_RK2_Grip",
			"A6_RK6_Grip",
			"A6_Troy_Grip",
			"A6_TroyMini_Grip",
			"A6_TangoDown_Grip",
			"A6_TangoDown_Grip_Tan",
			"A6_TangoDown_Grip_Green",
			"A6_StarkSE5_Grip",
			"A6_StarkSE5_Grip_Grey",
			"A6_StarkSE5_Grip_Tan",
			"A6_StarkSE5_Grip_Green",
            "A6_Fortis_Shift_Short_Grip",
            "A6_Fortis_Shift_Short_Grip_Tan",
            "A6_Fortis_Shift_Short_Grip_Green",
            "A6_Fortis_Shift_Short_Grip_Red",
            "A6_Fortis_Shift_Grip",
            "A6_Fortis_Shift_Grip_Tan",
            "A6_Fortis_Shift_Grip_Green",
            "A6_Fortis_Shift_Grip_Red"
		};
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Supports","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[] = {};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class A6_ForeGrip_Base: Inventory_Base
	{
		scope = 0;
		displayName = "Fore Grip";
		descriptionShort = "Fore Grip";
		rotationFlags = 17;
		reversed = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		aimSpeedModifier[] = {1,1,1};
		inventorySlot[] = {"weaponForegrip"};
		weight = 150;
		itemSize[] = {2,1};
		repairableWithKits[] = {8};
		repairCosts[] = {25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
		};
	};
	class A6_AFG_Grip_Black: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "Magpul AFG";
		descriptionShort = "Angled Fore Grip ( AFG )";
		model = "A6_Weapons\Attachments\Grips\AFG_RIS\MagpulAFG_RIS.p3d";
		hasRailFunctionality = 1;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.96,0.96,0.96};
		hiddenSelections[]= {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\AFG_RIS\data\camo_black_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\AFG_RIS\data\camo.rvmat"};
	};
	class A6_AFG_Grip_Tan: A6_AFG_Grip_Black
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\AFG_RIS\data\camo_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\AFG_RIS\data\camo.rvmat"};
	};
	class A6_AFG_Grip_Grey: A6_AFG_Grip_Black
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\AFG_RIS\data\camo_grey_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\AFG_RIS\data\camo.rvmat"};
	};
	class A6_AFG_Grip_Green: A6_AFG_Grip_Black
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\AFG_RIS\data\camo_green_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\AFG_RIS\data\camo.rvmat"};
	};
    class A6_AFG_Grip_Red: A6_AFG_Grip_Black
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\AFG_RIS\data\camo_red_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\AFG_RIS\data\camo.rvmat"};
	};
	class A6_FSG2_Grip_Black: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "IMI Defense FSG2 Front Support Grip";
		descriptionShort = "IMI Defense FSG2 Front Support Grip for weapons.";
		model = "A6_Weapons\Attachments\Grips\FSG2\FSG2.p3d";
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.95,0.95,0.95};
		hasRailFunctionality = 1;
		hiddenSelections[]= {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\FSG2\data\FSG2_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\FSG2\data\FSG2.rvmat"};
	};
	class A6_FSG2_Grip_Green: A6_FSG2_Grip_Black
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\FSG2\data\FSG2_Green_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\FSG2\data\FSG2.rvmat"};
	};
	class A6_FSG2_Grip_Grey: A6_FSG2_Grip_Black
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\FSG2\data\FSG2_Grey_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\FSG2\data\FSG2.rvmat"};
	};
	class A6_FSG2_Grip_Tan: A6_FSG2_Grip_Black
	{
		scope = 2;
		hasRailFunctionality = 1;
		hiddenSelections[]= {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\FSG2\data\FSG2_Tan_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\FSG2\data\FSG2.rvmat"};
	};
	class A6_BCMGFVG_Grip: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "BCM Gunfighter Vertical Grip Mod3";
		descriptionShort = "BCM Gunfighter Vertical Grip Mod3 for weapons.";
		model = "A6_Weapons\Attachments\Grips\BCMGFVG\BCMGFVG.p3d";
		hasRailFunctionality = 1;
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {1,1,1};
		itemSize[] = {1,1};
		hiddenSelections[]= {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\BCMGFVG\data\BCMGFVG_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\BCMGFVG\data\BCMGFVG.rvmat"};
	};
	class A6_BCMGFVG_Grip_Tan: A6_BCMGFVG_Grip
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\BCMGFVG\data\BCMGFVG_Tan_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\BCMGFVG\data\BCMGFVG.rvmat"};
	};
	class A6_StrikeCobra_Grip: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "LINK Cobra Foregrip";
		descriptionShort = "Strike Industries LINK Cobra Foregrip.";
		model = "A6_Weapons\Attachments\Grips\Strike\foregrip.p3d";
		hasRailFunctionality = 1;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {0.87,0.87,0.87};
		hiddenSelections[]= {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\Strike\data\foregrip_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\Strike\data\foregrip.rvmat"};
	};
    class A6_StarkSE5_Grip: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "Stark SE-5 Express Forward Foregrip";
		descriptionShort = "STARK SE-5 Express tactical grip. Enables a more natural grip against the barrel axis.";
		model = "A6_Weapons\Attachments\Grips\StarkSE5\StarkSE5.p3d";
		hasRailFunctionality = 1;
		recoilModifier[] = {0.81,0.81,0.81};
		swayModifier[] = {0.66,0.66,0.66};
		aimSpeedModifier[] = {0.89,0.89,0.89};
		hiddenSelections[]= {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\StarkSE5\data\camo_black_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\StarkSE5\data\camo.rvmat"};
	};
	class A6_StarkSE5_Grip_Grey: A6_StarkSE5_Grip
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\StarkSE5\data\camo_grey_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\StarkSE5\data\camo.rvmat"};
	};
	class A6_StarkSE5_Grip_Tan: A6_StarkSE5_Grip
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\StarkSE5\data\camo_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\StarkSE5\data\camo.rvmat"};
	};
	class A6_StarkSE5_Grip_Green: A6_StarkSE5_Grip
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\StarkSE5\data\camo_green_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\StarkSE5\data\camo.rvmat"};
	};        
	class A6_RK0_Grip: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "RK-0 Grip";
		descriptionShort = "The RK-0 front grip is installed on any handguard with a lower Picatinny rail and is used for the convenience of holding weapons when firing.";
		model = "A6_Weapons\Attachments\Grips\RK0\RK0.p3d";
		hasRailFunctionality = 1;
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.95,0.95,0.95};
		itemSize[] = {1,1};
		hiddenSelections[]= {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\RK0\data\camo_grip_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\RK0\data\camo_grip.rvmat"};
	};
    class A6_Fortis_Shift_Short_Grip: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "Fortis Shift Short Angled Grip";
		descriptionShort = "The Shift Short Angled Grip integrates the form with functionality. Comfortable hand stop when going with the thumb over method. The grip allows you to handle the weapon with the confidence and the organic design enables the operator to manipulate the rifle in a way that's most comfortable at any given moment.";
		model = "A6_Weapons\Attachments\Grips\Shift_Short\FortisShift_Short_Foregrip.p3d";
		hasRailFunctionality = 1;
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.9,0.9,0.9};
		itemSize[] = {1,1};
		hiddenSelections[]= {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\Shift_Short\data\camo_black_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\Shift_Short\data\camo.rvmat"};
	};
    class A6_Fortis_Shift_Short_Grip_Tan: A6_Fortis_Shift_Short_Grip
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\Shift_Short\data\camo_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\Shift_Short\data\camo.rvmat"};
	};
    class A6_Fortis_Shift_Short_Grip_Green: A6_Fortis_Shift_Short_Grip
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\Shift_Short\data\camo_green_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\Shift_Short\data\camo.rvmat"};
	}; 
    class A6_Fortis_Shift_Short_Grip_Red: A6_Fortis_Shift_Short_Grip
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\Shift_Short\data\camo_red_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\Shift_Short\data\camo.rvmat"};
	}; 
    class A6_Fortis_Shift_Grip: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "Fortis Shift Tactical Foregrip";
		descriptionShort = "The Shift vertical grip integrates the form with functionality. Its hybrid-designed shape works both as a regular foregrip and as a comfortable hand stop when going with the thumb over method. The grip allows you to handle the weapon with the confidence and the organic design enables the operator to manipulate the rifle in a way that's most comfortable at any given moment.";
		model = "A6_Weapons\Attachments\Grips\Shift\FortisShift_Grip.p3d";
		hasRailFunctionality = 1;
		recoilModifier[] = {0.68,0.68,0.68};
		swayModifier[] = {0.75,0.75,0.75};
		aimSpeedModifier[] = {0.92,0.92,0.92};
		itemSize[] = {1,2};
		hiddenSelections[]= {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\Shift\data\camo_black_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\Shift\data\camo.rvmat"};
	};
    class A6_Fortis_Shift_Grip_Tan: A6_Fortis_Shift_Grip
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\Shift\data\camo_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\Shift\data\camo.rvmat"};
	};
    class A6_Fortis_Shift_Grip_Green: A6_Fortis_Shift_Grip
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\Shift\data\camo_green_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\Shift\data\camo.rvmat"};
	}; 
    class A6_Fortis_Shift_Grip_Red: A6_Fortis_Shift_Grip
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\Shift\data\camo_red_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\Shift\data\camo.rvmat"};
	};  
	class A6_B25U_RK2_Grip: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "B25-U RK-2 Grip";
		descriptionShort = "The B25-U RK-2 front grip is installed on any handguard with a lower Picatinny rail and is used for the convenience of holding weapons when firing.";
		model = "A6_Weapons\Attachments\Grips\RK2\B25U_RK2.p3d";
		hasRailFunctionality = 1;
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {0.8,0.8,0.8};
		aimSpeedModifier[] = {0.91,0.91,0.91};
		itemSize[] = {1,1};
		hiddenSelections[]= {"camo_pic_rail","camo_b25u_rk2"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\RK2\data\camo_b25u_rk2_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\RK2\data\camo_b25u_rk2.rvmat"};
	};
	class A6_RK6_Grip: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "RK-6 Grip";
		descriptionShort = "The RK-0 front grip is installed on any handguard with a lower Picatinny rail and is used for the convenience of holding weapons when firing.";
		model = "A6_Weapons\Attachments\Grips\RK6\RK6.p3d";
		hasRailFunctionality = 1;
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {0.85,0.85,0.85};
		aimSpeedModifier[] = {0.93,0.93,0.93};
		itemSize[] = {1,1};
		hiddenSelections[]= {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\RK6\data\camo_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\RK6\data\camo.rvmat"};
	};
	class A6_TroyMini_Grip: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "Troy Mini Grip";
		descriptionShort = "The Troy Mini Grip is installed on any handguard with a lower Picatinny rail and is used for the convenience of holding weapons when firing.";
		model = "A6_Weapons\Attachments\Grips\Troy\TroyMini.p3d";
		hasRailFunctionality = 1;
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {1.02,1.02,1.02};
		itemSize[] = {1,1};
		hiddenSelections[]= {"camo_pic_rail","camo_grip"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\Troy\data\camo_grip_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\Troy\data\camo_grip.rvmat"};
	};
	class A6_TangoDown_Grip: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "TangoDown Stubby BGV-MK46K Foregrip";
		descriptionShort = "Tango Down Stubby BGV-MK46K tactical grip. Short grip for use with weapons of close and extra close quarters combat.";
		model = "A6_Weapons\Attachments\Grips\TangoDown\TangoDown_Grip.p3d";
		hasRailFunctionality = 1;
		recoilModifier[] = {0.65,0.65,0.65};
		swayModifier[] = {0.7,0.7,0.7};
		aimSpeedModifier[] = {1,1,1};
		itemSize[] = {1,1};
		hiddenSelections[]= {"camo_pic_rail","camo"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\TangoDown\data\camo_black_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\TangoDown\data\camo.rvmat"};
	};
	class A6_TangoDown_Grip_Tan: A6_TangoDown_Grip
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\TangoDown\data\camo_tan_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\TangoDown\data\camo.rvmat"};
	};
	class A6_TangoDown_Grip_Green: A6_TangoDown_Grip
	{
		scope = 2;
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\TangoDown\data\camo_green_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\TangoDown\data\camo.rvmat"};
	};
    class A6_RK2_Grip: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "RK-2 Grip";
		descriptionShort = "The RK-2 front grip is installed on any handguard with a lower Picatinny rail and is used for the convenience of holding weapons when firing.";
		model = "A6_Weapons\Attachments\Grips\RK2\RK2.p3d";
		hasRailFunctionality = 1;
		recoilModifier[] = {0.6,0.6,0.6};
		swayModifier[] = {0.6,0.6,0.6};
		aimSpeedModifier[] = {1.04,1.04,1.04};
		itemSize[] = {1,2};
		hiddenSelections[]= {"camo_pic_rail","camo_b25u_rk2"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\RK2\data\camo_b25u_rk2_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\RK2\data\camo_b25u_rk2.rvmat"};
	};
	class A6_Troy_Grip: A6_ForeGrip_Base
	{
		scope = 2;
		displayName = "Troy Grip";
		descriptionShort = "The Troy Grip is installed on any handguard with a lower Picatinny rail and is used for the convenience of holding weapons when firing.";
		model = "A6_Weapons\Attachments\Grips\Troy\Troy.p3d";
		hasRailFunctionality = 1;
		recoilModifier[] = {0.5,0.5,0.5};
		swayModifier[] = {0.5,0.5,0.5};
		aimSpeedModifier[] = {1.08,1.08,1.08};
		itemSize[] = {1,2};
		hiddenSelections[]= {"camo_pic_rail","camo_grip"};
		hiddenSelectionsTextures[]= {"","A6_Weapons\Attachments\Grips\Troy\data\camo_grip_co.paa"};
		hiddenSelectionsMaterials[]= {"","A6_Weapons\Attachments\Grips\Troy\data\camo_grip.rvmat"};
	};
};
class CfgSlots
{
	class Slot_weaponForegrip
	{
		name = "weaponForegrip";
		displayName = "Fore Grip";
		ghostIcon = "set:A6_Weapons image:grip";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMagpulAFG_RIS: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForegrip";
		model = "A6_Weapons\Attachments\Grips\AFG_RIS\MagpulAFG_RIS.p3d";
	};
	class ProxyFSG2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForegrip";
		model = "A6_Weapons\Attachments\Grips\FSG2\FSG2.p3d";
	};
	class ProxyBCMGFVG: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForegrip";
		model = "A6_Weapons\Attachments\Grips\BCMGFVG\BCMGFVG.p3d";
	};
	class Proxyforegrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForegrip";
		model = "A6_Weapons\Attachments\Grips\Strike\foregrip.p3d";
	};
    class ProxyStarkSE5: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForegrip";
		model = "A6_Weapons\Attachments\Grips\StarkSE5\StarkSE5.p3d";
	};
	class ProxyRK0: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForegrip";
		model = "A6_Weapons\Attachments\Grips\RK0\RK0.p3d";
	};
    class ProxyFortisShift_Short_Foregrip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForegrip";
		model = "A6_Weapons\Attachments\Grips\Shift_Short\FortisShift_Short_Foregrip.p3d";
	};
    class ProxyFortisShift_Grip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForegrip";
		model = "A6_Weapons\Attachments\Grips\Shift\FortisShift_Grip.p3d";
	};
	class ProxyRK6: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForegrip";
		model = "A6_Weapons\Attachments\Grips\RK6\RK6.p3d";
	};
    class ProxyTangoDown_Grip: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponForegrip";
		model = "A6_Weapons\Attachments\Grips\TangoDown\TangoDown_Grip.p3d";
	};
};