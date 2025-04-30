class CfgPatches
{
	class A6_BaseClasses
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};
class CfgVehicles
{
	class Container_Base;
	class A6_Storage_Base: Container_Base
	{
		scope = 0;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		descriptionShort="This can be dismantled with a screwdriver";
		inventorySlot[] = {"StorageContainer"};
		itemSize[] = {10,15};
		carveNavmesh = 1;
		bounding="BSphere";
		overrideDrawArea="8.0";
		forceFarBubble="true";
		visibilityModifier=0.95;
		canBeDigged = 0;
		weight = 5000;
		alignHologramToTerain=1;
		heavyItem=1;
		itemBehaviour=1;
		physLayer="item_large";
		simulation="inventoryItem";
		class AnimationSources
		{		
			class Doors1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1.3;
			};
			class Doors2
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1.3;
			};
			class Doors3
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1.3;
			};
			class Doors4
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1.3;
			};
			class cover
			{
				source="user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class hideproxy
            {
                source = "user";
				animPeriod = 0.1;
				initPhase = 1;
            };
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = 
					{
						{1.0,{""}},
						{0.7,{""}},
						{0.5,{""}},
						{0.3,{""}},
						{0.0,{""}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.1;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.3;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
				};
			};						
		};
	};
	class A6_Coverable_Base: A6_Storage_Base {};
	class A6_Openable_Placeable_Base: A6_Storage_Base {};
	class A6_Openable_Base: A6_Storage_Base {};
};