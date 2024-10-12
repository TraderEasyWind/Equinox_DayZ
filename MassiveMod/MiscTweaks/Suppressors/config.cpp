class CfgPatches
{
	class Testmod_ModTweaks_EQSuppressors
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class EQSuppressors
	{
		dir = "EQSuppressors";
		hideName = 1;
		hidePicture = 1;
		name = "EQSuppressors";
      	version = "EQ";
	};
};
class cfgVehicles
{
	class ItemSuppressor;
	class M4_Suppressor: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
				};
			};
		};
	};
	class AK_Suppressor: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
				};
			};
		};
	};
	class PistolSuppressor: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
				};
			};
		};
	};
	class ImprovisedSuppressor: ItemSuppressor
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 6;
				};
			};
		};
	};
	class M4_Suppressor_Admin: M4_Suppressor
	{
		displayName = "Admin M4 Suppressor";
		descriptionShort = "Suppressor for Admins with much longer life";
		noiseShootModifier = -6.9;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
				};
			};
		};
	};
	class AK_Suppressor_Admin: AK_Suppressor
	{
		displayName = "Admin AK Suppressor";
		descriptionShort = "Suppressor for Admins with much longer life";
		noiseShootModifier = -6.9;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000;
				};
			};
		};
	};
	class PistolSuppressor_Admin: PistolSuppressor
	{
		displayName = "Admin Pistol Suppressor";
		descriptionShort = "Suppressor for Admins with much longer life";
		noiseShootModifier = -6.9;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
				};
			};
		};
	};
	class ImprovisedSuppressor_Admin: ImprovisedSuppressor
	{
		displayName = "Admin Improvised Suppressor";
		descriptionShort = "Suppressor for Admins with much longer life";
		noiseShootModifier = -6.9;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
				};
			};
		};
	};
};
