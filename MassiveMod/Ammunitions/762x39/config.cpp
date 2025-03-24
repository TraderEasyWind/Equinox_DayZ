class CfgPatches
{
	class SH_Weapons_Ammunition_762x39
	{
		units[]=
		{
			"AmmoBox_762x39AP_20Rnd",
			"AmmoBox_762x39OLD_20Rnd"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Ammunition"
		};
		magazines[]=
		{
			"Ammo_762x39Old",
			"Ammo_762x39AP"
		};
		ammo[]=
		{
			"Bullet_762x39Old",
			"Bullet_762x39AP"
		};
	};
};
class CfgVehicles
{
	class AmmoBox_762x39_20Rnd;
	class AmmoBox_Heli762x39_20Rnd: AmmoBox_762x39_20Rnd
	{
	};
	class MM_AmmoBox_762x39_20Rnd: AmmoBox_762x39_20Rnd
	{
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\762x39\Data\762x39_AmmoBox.paa"
		};
	};
	class AmmoBox_762x39AP_20Rnd: AmmoBox_762x39_20Rnd
	{
		scope=2;
		displayName="$STR_CfgVehicles_AmmoBox_762x39_20Rnd0";
		descriptionShort="$STR_CfgVehicles_AmmoBox_762x39_20Rnd1";
		model="\dz\weapons\ammunition\762x39_20RoundBox.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\762x39\Data\762x39AP_AmmoBox.paa"
		};
		class Resources
		{
			class Ammo_762x39AP
			{
				value=20;
				variable="quantity";
			};
		};
	};
	class AmmoBox_762x39OLD_20Rnd: AmmoBox_762x39_20Rnd
	{
		scope=2;
		displayName="$STR_CfgVehicles_AmmoBox_762x39_20Rnd0";
		descriptionShort="$STR_CfgVehicles_AmmoBox_762x39_20Rnd1";
		model="\dz\weapons\ammunition\762x39_20RoundBox.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\762x39\Data\762x39Old_Box.paa"
		};
		class Resources
		{
			class Ammo_762x39Old
			{
				value=20;
				variable="quantity";
			};
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_762x39Old
	{
		name="Bullet_762x39Old";
	};
	class AType_Bullet_762x39AP
	{
		name="Bullet_762x39AP";
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_762x39Old: Ammunition_Base
	{
		scope=2;
		displayName="Old Rusted 7.62x39 Ammunition";
		descriptionShort="Old Rusted 7.62x39 Ammo, It will work in a pinch but throwing this dirty Lead through your barrel will Gunk it up faster than fresh clean Ammunition, And it's not Guaranteed to be as Effective Either.";
		model="\dz\weapons\ammunition\762x39_LooseRounds.p3d";
		iconCartridge=2;
		weight=4;
		count=30;
		ammo="Bullet_762x39Old";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\762x39\Data\762x39Old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MassiveMod\Ammunitions\762x39\Data\762x39Old.rvmat"
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
								"MassiveMod\Ammunitions\762x39\Data\762x39Old.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MassiveMod\Ammunitions\762x39\Data\762x39Old.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MassiveMod\Ammunitions\762x39\Data\762x39Old.rvmat"
							}
						},
						
						{
							0,
							
							{
								"MassiveMod\Ammunitions\762x39\Data\762x39Old.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Ammo_762x39AP: Ammunition_Base
	{
		scope=2;
		displayName="7.62x39 AP Rounds";
		descriptionShort="7.62x39mm Lapua Black-Tip Steel-Core Armor Piercing Rounds";
		model="MassiveMod\Ammunitions\762x39\Data\762x39AP_LooseRounds.p3d";
		iconCartridge=2;
		weight=4;
		count=30;
		ammo="Bullet_762x39AP";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\762x39\Data\762x39AP_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\weapons\ammunition\data\762x39.rvmat"
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
								"DZ\weapons\ammunition\data\762x39.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\762x39.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\762x39_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\762x39_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\ammunition\data\762x39_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_762x39Old: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_762x39";
		round="FxRound_762x39";
		spawnPileType="Ammo_762x39Old";
		hit=9.5;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=540;
		typicalSpeed=640;
		airFriction=-0.0015;
		caliber=1;
		dispersion=0.02;
		deflecting=10;
		damageBarrel=1000;
		damageBarrelDestroyed=1000;
		weight=0.0080000004;
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
				{0.94999999,1}
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
				damageOverride[]=
				{
					{0.80000001,1}
				};
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_762x39AP: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_762x39";
		round="FxRound_762x39";
		spawnPileType="Ammo_762x39AP";
		hit=9.5;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=704;
		typicalSpeed=814;
		airFriction=-0.0015;
		caliber=1.2;
		deflecting=10;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight=0.0070000002;
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
				{0.94999999,1}
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
				damageOverride[]=
				{
					{0.80000001,1}
				};
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
};
