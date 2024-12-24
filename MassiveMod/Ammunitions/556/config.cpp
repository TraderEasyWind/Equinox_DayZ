class CfgPatches
{
	class SH_Weapons_Ammunition_556
	{
		units[]=
		{
			"AmmoBox_556x45AP_20Rnd",
			"AmmoBox_556x45OLD_20Rnd"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Ammunition",
			"SH_Weapons_Ammunition",
			"DZ_Weapons_Projectiles"
		};
		magazines[]=
		{
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
		ammo[]=
		{
			"Bullet_556x45Old",
			"Bullet_556x45AP"
		};
	};
};
class CfgVehicles
{
	class AmmoBox_556x45_20Rnd;
	class AmmoBox_Heli556x45_20Rnd: AmmoBox_556x45_20Rnd
	{
	};
	class AmmoBox_556x45AP_20Rnd: AmmoBox_556x45_20Rnd
	{
		scope=2;
		displayName="$STR_CfgVehicles_AmmoBox_556x45_20Rnd0";
		descriptionShort="$STR_CfgVehicles_AmmoBox_556x45_20Rnd1";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\556\Data\556AP_20rndBox.paa"
		};
		class Resources
		{
			class Ammo_556x45AP
			{
				value=30;
				variable="quantity";
			};
		};
	};
	class AmmoBox_556x45OLD_20Rnd: AmmoBox_556x45_20Rnd
	{
		scope=2;
		displayName="$STR_CfgVehicles_AmmoBox_556x45_20Rnd0";
		descriptionShort="$STR_CfgVehicles_AmmoBox_556x45_20Rnd1";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\556\Data\556_20roundboxOld_co.paa"
		};
		class Resources
		{
			class Ammo_556x45Old
			{
				value=30;
				variable="quantity";
			};
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_556x45Old
	{
		name="Bullet_556x45Old";
	};
	class AType_Bullet_556x45AP
	{
		name="Bullet_556x45AP";
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_556x45Old: Ammunition_Base
	{
		scope=2;
		displayName="Old Rusted 5.56X45 Ammunition";
		descriptionShort="Old Rusted 5.56x45 Ammo, It will work in a pinch but throwing this dirty Lead through your barrel will Gunk it up faster than fresh clean Ammunition, And it's not Guaranteed to be as Effective Either.";
		model="\dz\weapons\ammunition\556_LooseRounds.p3d";
		iconCartridge=2;
		weight=4;
		count=30;
		ammo="Bullet_556x45Old";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\556\Data\556Old.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MassiveMod\Ammunitions\556\Data\556Old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"MassiveMod\Ammunitions\556\Data\556Old.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MassiveMod\Ammunitions\556\Data\556Old.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MassiveMod\Ammunitions\556\Data\556Old.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MassiveMod\Ammunitions\556\Data\556Old.rvmat"
							}
						},
						
						{
							0,
							
							{
								"MassiveMod\Ammunitions\556\Data\556Old.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Ammo_556x45AP: Ammunition_Base
	{
		scope=2;
		displayName="5.56x45AP Rounds";
		descriptionShort="M995 Black Tip Armor Piercing 5.56 Ammunition.";
		model="\dz\weapons\ammunition\556_LooseRounds.p3d";
		iconCartridge=2;
		weight=4;
		count=30;
		ammo="Bullet_556x45AP";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\556\Data\556AP.paa"
		};
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_556x45Old: Bullet_Base
	{
		scope=1;
		spawnPileType="Ammo_556x45Old";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=750;
		typicalSpeed=900;
		airFriction=-0.00125;
		caliber=1;
		dispersion=0.02;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=850;
		damageBarrelDestroyed=850;
		weight=0.0040000002;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=4;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.87,1}
			};
			class Health
			{
				damage=77;
			};
			class Blood
			{
				damage=70;
			};
			class Shock
			{
				damage=77;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_556x45AP: Bullet_Base
	{
		scope=1;
		spawnPileType="Ammo_556x45AP";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=950;
		typicalSpeed=1030;
		airFriction=-0.00125;
		caliber=1.2;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=1;
		damageBarrel=350;
		damageBarrelDestroyed=350;
		weight=0.0040000002;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=4;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.87,1}
			};
			class Health
			{
				damage=110;
				armorDamage=3;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=110;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
};
