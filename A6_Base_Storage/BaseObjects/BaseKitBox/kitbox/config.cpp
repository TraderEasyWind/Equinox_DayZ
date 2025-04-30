class CfgPatches
{
	class A6_BaseKitBoxes
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class A6_Kit: Inventory_Base
	{
		scope=0;
		displayName="Box Kit";
		descriptionShort="A cardboard box used to transport small items. Place to deploy item inside. The items can be dismantled with a screwdriver after deployment.";
		model="A6_Base_Storage\BaseObjects\BaseKitBox\kitbox\carrierbox.p3d";
		itemsCargoSize[]={0,0};
		itemSize[]={6,4};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_small";
		rotationFlags=2;
		heavyItem=1;
		weight=4000;
		itemBehaviour=2;
		hiddenSelections[]={"all"};
		hiddenSelectionsTextures[]={"A6_Base_Storage\BaseObjects\BaseKitBox\kitbox\carrierbox_co.paa"};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					healthLevels[] = {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0.0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.0;
					};
					class Blood
					{
						damage=0.0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
			};
		};
	};
};