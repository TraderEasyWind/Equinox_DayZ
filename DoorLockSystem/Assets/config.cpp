class CfgPatches
{
	class DoorLockSystem_Keys
	{
		units[]=
		{
			"DLS_KeyChain",
			"DLS_KeyTool",
			"DLS_KeyCard_Holder",
			"DLS_Key_01",
			"DLS_Key_02",
			"DLS_Key_03",
			"DLS_Key_04",
			"DLS_Key_05",
			"DLS_Key_06",
			"DLS_Key_07",
			"DLS_Key_08",
			"DLS_KeyCard_Labs_Access",
			"DLS_KeyCard_Labs_Black",
			"DLS_KeyCard_Labs_Blue",
			"DLS_KeyCard_Labs_Green",
			"DLS_KeyCard_Labs_Red",
			"DLS_KeyCard_Labs_Violet",
			"DLS_KeyCard_Labs_Yellow"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class DLS_KeyChain : Inventory_Base
	{
		scope = 2;
		displayName = "Gingy keychain";
		descriptionShort = "A key ring with a four-leaf clover keychain.";
		model = "DoorLockSystem\Assets\Models\DLS_KeyChain.p3d";
		rotationFlags = 17;
		weight = 10;
		allowOwnedCargoManipulation = 1;
		itemSize[] = {1,1};
		itemsCargoSize[]={2,2};
	};
	class DLS_KeyTool : Inventory_Base
	{
		scope = 2;
		displayName = "Key tool";
		descriptionShort = "A special tool for storing all your keys in one convenient place.";
		model = "DoorLockSystem\Assets\Models\DLS_KeyTool.p3d";
		rotationFlags = 17;
		weight = 10;
		allowOwnedCargoManipulation = 1;
		itemSize[] = {1,1};
		itemsCargoSize[]={4,4};
	};
	class DLS_KeyCard_Holder : Inventory_Base
	{
		scope = 2;
		displayName = "Keycard holder case";
		descriptionShort = "A special small case for storing plastic cards, including key cards.";
		model = "DoorLockSystem\Assets\Models\DLS_KeyCard_Holder.p3d";
		rotationFlags = 17;
		weight = 10;
		allowOwnedCargoManipulation = 1;
		itemSize[] = {1,1};
		itemsCargoSize[]={3,3};
	};
	class DLS_Key_Base : Inventory_Base
	{
		scope=0;
		debug_ItemCategory = 2;
		animClass = "Knife";
		rotationFlags = 17;
		weight = 4;
		itemSize[] = {1,1};
		fragility = 0.01;
		varQuantityInit = 20;
		varQuantityMin = 0;
		varQuantityMax = 20;
		varQuantityDestroyOnMin = 1;
		stackedUnit = "ammo";
		quantityBar = 0;
		soundImpactType = "metal";
		model = "DoorLockSystem\Assets\Models\DLS_Keycard.p3d";
        class AnimEvents
		{
			class SoundWeapon
			{
				class lockpicker_move_in
				{
					soundSet = "lockpicker_move_in_SoundSet";
					id = 110202;
				};
				class lockpicker_move_out
				{
					soundSet = "lockpicker_move_out_SoundSet";
					id = 110203;
				};
				class lockpicker_loop
				{
					soundSet = "lockpicker_loop_SoundSet";
					id = 203;
				};
				class lockpicker_end
				{
					soundSet = "lockpicker_end_SoundSet";
					id = 110204;
				};
			};
		};
	};
	class DLS_KeyCard_Base : Inventory_Base
	{
		scope=0;
		debug_ItemCategory = 2;
		animClass = "Knife";
		rotationFlags = 17;
		weight = 4;
		itemSize[] = {1,1};
		fragility = 0.01;
		varQuantityInit = 15;
		varQuantityMin = 0;
		varQuantityMax = 15;
		varQuantityDestroyOnMin = 1;
		stackedUnit = "ammo";
		quantityBar = 0;
		soundImpactType = "metal";
		model = "DoorLockSystem\Assets\Models\DLS_Keycard.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DoorLockSystem\Assets\Data\DLS_KeyCard.rvmat"}},
						{0.7,{"DoorLockSystem\Assets\Data\DLS_KeyCard.rvmat"}},
						{0.5,{"DoorLockSystem\Assets\Data\DLS_KeyCard_damage.rvmat"}},
						{0.3,{"DoorLockSystem\Assets\Data\DLS_KeyCard_damage.rvmat"}},
						{0.0,{"DoorLockSystem\Assets\Data\DLS_KeyCard_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class DLS_KeyCard_InfiniteUse : Inventory_Base
	{
		scope=0;
		debug_ItemCategory = 2;
		animClass = "Knife";
		rotationFlags = 17;
		weight = 4;
		itemSize[] = {1,1};
		fragility = 0.01;
		soundImpactType = "metal";
		model = "DoorLockSystem\Assets\Models\DLS_Keycard.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DoorLockSystem\Assets\Data\DLS_KeyCard.rvmat"}},
						{0.7,{"DoorLockSystem\Assets\Data\DLS_KeyCard.rvmat"}},
						{0.5,{"DoorLockSystem\Assets\Data\DLS_KeyCard_damage.rvmat"}},
						{0.3,{"DoorLockSystem\Assets\Data\DLS_KeyCard_damage.rvmat"}},
						{0.0,{"DoorLockSystem\Assets\Data\DLS_KeyCard_destruct.rvmat"}}
					};
				};
			};
		};
	};		
	// Keys	
	class DLS_Key_01: DLS_Key_Base
	{
		scope = 2;
		displayName = "Office Key";
		descriptionShort = "Office Key";
		model = "DoorLockSystem\Assets\Models\DLS_Key_01.p3d";
		varQuantityInit = 40;
		varQuantityMax = 40;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DoorLockSystem\Assets\Data\DLS_Key_01.rvmat"}},
						{0.7,{"DoorLockSystem\Assets\Data\DLS_Key_01.rvmat"}},
						{0.5,{"DoorLockSystem\Assets\Data\DLS_Key_01_damage.rvmat"}},
						{0.3,{"DoorLockSystem\Assets\Data\DLS_Key_01_damage.rvmat"}},
						{0.0,{"DoorLockSystem\Assets\Data\DLS_Key_01_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class DLS_Key_02: DLS_Key_Base
	{
		scope = 2;
		displayName = "Military Key";
		descriptionShort = "Military Key";
		model = "DoorLockSystem\Assets\Models\DLS_Key_02.p3d";
		varQuantityInit = 40;
		varQuantityMax = 40;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DoorLockSystem\Assets\Data\DLS_Key_01.rvmat"}},
						{0.7,{"DoorLockSystem\Assets\Data\DLS_Key_01.rvmat"}},
						{0.5,{"DoorLockSystem\Assets\Data\DLS_Key_01_damage.rvmat"}},
						{0.3,{"DoorLockSystem\Assets\Data\DLS_Key_01_damage.rvmat"}},
						{0.0,{"DoorLockSystem\Assets\Data\DLS_Key_01_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class DLS_Key_03: DLS_Key_Base
	{
		scope = 2;
		displayName = "Blue Key";
		descriptionShort = "Blue Key";
		model = "DoorLockSystem\Assets\Models\DLS_Key_03.p3d";
		varQuantityInit = 0;
		varQuantityMax = 40;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DoorLockSystem\Assets\Data\DLS_Key_01.rvmat"}},
						{0.7,{"DoorLockSystem\Assets\Data\DLS_Key_01.rvmat"}},
						{0.5,{"DoorLockSystem\Assets\Data\DLS_Key_01_damage.rvmat"}},
						{0.3,{"DoorLockSystem\Assets\Data\DLS_Key_01_damage.rvmat"}},
						{0.0,{"DoorLockSystem\Assets\Data\DLS_Key_01_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class DLS_Key_04: DLS_Key_Base
	{
		scope = 2;
		displayName = "Red Key";
		descriptionShort = "Red Key";
		model = "DoorLockSystem\Assets\Models\DLS_Key_04.p3d";
		varQuantityInit = 40;
		varQuantityMax = 40;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DoorLockSystem\Assets\Data\DLS_Key_01.rvmat"}},
						{0.7,{"DoorLockSystem\Assets\Data\DLS_Key_01.rvmat"}},
						{0.5,{"DoorLockSystem\Assets\Data\DLS_Key_01_damage.rvmat"}},
						{0.3,{"DoorLockSystem\Assets\Data\DLS_Key_01_damage.rvmat"}},
						{0.0,{"DoorLockSystem\Assets\Data\DLS_Key_01_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class DLS_Key_05: DLS_Key_Base
	{
		scope = 2;
		displayName = "Old Key";
		descriptionShort = "Old Key";
		model = "DoorLockSystem\Assets\Models\DLS_Key_05.p3d";
		varQuantityInit = 40;
		varQuantityMax = 40;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DoorLockSystem\Assets\Data\DLS_Key_01.rvmat"}},
						{0.7,{"DoorLockSystem\Assets\Data\DLS_Key_01.rvmat"}},
						{0.5,{"DoorLockSystem\Assets\Data\DLS_Key_01_damage.rvmat"}},
						{0.3,{"DoorLockSystem\Assets\Data\DLS_Key_01_damage.rvmat"}},
						{0.0,{"DoorLockSystem\Assets\Data\DLS_Key_01_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class DLS_Key_06: DLS_Key_Base
	{
		scope = 2;
		displayName = "Old Rod Key";
		descriptionShort = "Old Rod Key";
		model = "DoorLockSystem\Assets\Models\DLS_Key_06.p3d";
		varQuantityInit = 40;
		varQuantityMax = 40;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DoorLockSystem\Assets\Data\DLS_Key_01.rvmat"}},
						{0.7,{"DoorLockSystem\Assets\Data\DLS_Key_01.rvmat"}},
						{0.5,{"DoorLockSystem\Assets\Data\DLS_Key_01_damage.rvmat"}},
						{0.3,{"DoorLockSystem\Assets\Data\DLS_Key_01_damage.rvmat"}},
						{0.0,{"DoorLockSystem\Assets\Data\DLS_Key_01_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class DLS_Key_07: DLS_Key_Base
	{
		scope = 2;
		displayName = "Old Oval Key";
		descriptionShort = "Old Oval Key";
		model = "DoorLockSystem\Assets\Models\DLS_Key_07.p3d";
		varQuantityInit = 40;
		varQuantityMax = 40;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DoorLockSystem\Assets\Data\DLS_Key_07.rvmat"}},
						{0.7,{"DoorLockSystem\Assets\Data\DLS_Key_07.rvmat"}},
						{0.5,{"DoorLockSystem\Assets\Data\DLS_Key_07_damage.rvmat"}},
						{0.3,{"DoorLockSystem\Assets\Data\DLS_Key_07_damage.rvmat"}},
						{0.0,{"DoorLockSystem\Assets\Data\DLS_Key_07_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class DLS_Key_08: DLS_Key_Base
	{
		scope = 2;
		displayName = "Square Key";
		descriptionShort = "Square Key";
		model = "DoorLockSystem\Assets\Models\DLS_Key_08.p3d";
		hiddenSelections[] = {"camo","tape"};
		hiddenSelectionsTextures[] = {"DoorLockSystem\Assets\Data\DLS_Key_07_co.paa",""};
		varQuantityInit = 40;
		varQuantityMax = 40;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"DoorLockSystem\Assets\Data\DLS_Key_07.rvmat"}},
						{0.7,{"DoorLockSystem\Assets\Data\DLS_Key_07.rvmat"}},
						{0.5,{"DoorLockSystem\Assets\Data\DLS_Key_07_damage.rvmat"}},
						{0.3,{"DoorLockSystem\Assets\Data\DLS_Key_07_damage.rvmat"}},
						{0.0,{"DoorLockSystem\Assets\Data\DLS_Key_07_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class DLS_KeyCard_Labs_Access: DLS_KeyCard_Base
	{
		scope = 2;
		displayName = "TerraGroup Labs access keycard";
		descriptionShort = "A single-use United Security-issued TerraGroup Labs access keycard.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"DoorLockSystem\Assets\Data\DLS_KeyCard_Labs_Access_co.paa"};
		varQuantityInit = 1;
		varQuantityMax = 1;
	};	
	// Infinite Use KeyCards
	class DLS_KeyCard_Labs_Black: DLS_KeyCard_InfiniteUse
	{
		scope = 2;
		displayName = "TerraGroup Labs keycard (Black)";
		descriptionShort = "A United Security-issued TerraGroup Labs top-level administration keycard.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"DoorLockSystem\Assets\Data\DLS_KeyCard_Black_co.paa"};
	};	
	class DLS_KeyCard_Labs_Blue: DLS_KeyCard_InfiniteUse
	{
		scope = 2;
		displayName = "TerraGroup Labs keycard (Blue)";
		descriptionShort = "A United Security-issued TerraGroup Labs keycard for service personnel in the Blue sector.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"DoorLockSystem\Assets\Data\DLS_KeyCard_Blue_co.paa"};
	};
	class DLS_KeyCard_Labs_Green: DLS_KeyCard_InfiniteUse
	{
		scope = 2;
		displayName = "TerraGroup Labs keycard (Green)";
		descriptionShort = "A United Security-issued TerraGroup Labs keycard for administration staff in the Green sector.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"DoorLockSystem\Assets\Data\DLS_KeyCard_Green_co.paa"};
	};	
	class DLS_KeyCard_Labs_Red: DLS_KeyCard_InfiniteUse
	{
		scope = 2;
		displayName = "TerraGroup Labs keycard (Red)";
		descriptionShort = "A United Security-issued TerraGroup Labs keycard for administration staff in the Red sector.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"DoorLockSystem\Assets\Data\DLS_KeyCard_Red_co.paa"};
	};
	class DLS_KeyCard_Labs_Violet: DLS_KeyCard_InfiniteUse
	{
		scope = 2;
		displayName = "TerraGroup Labs keycard (Violet)";
		descriptionShort = "A United Security-issued TerraGroup Labs keycard for administration staff in the Violet sector.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"DoorLockSystem\Assets\Data\DLS_KeyCard_Violet_co.paa"};
	};
	class DLS_KeyCard_Labs_Yellow: DLS_KeyCard_InfiniteUse
	{
		scope = 2;
		displayName = "TerraGroup Labs keycard (Yellow)";
		descriptionShort = "A United Security-issued TerraGroup Labs keycard for administration staff in the Yellow sector.";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"DoorLockSystem\Assets\Data\DLS_KeyCard_Yellow_co.paa"};
	};	
}; 