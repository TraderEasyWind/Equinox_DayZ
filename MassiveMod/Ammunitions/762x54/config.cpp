class CfgPatches
{
	class SH_Weapons_Ammunition_762x54
	{
		units[]=
		{
			"AmmoBox_762x54OLD_20Rnd"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Ammunition",
			"SH_Weapons_Ammunition"
		};
		magazines[]=
		{
			"Ammo_762x54Old"
		};
		ammo[]=
		{
			"Bullet_762x54Old"
		};
	};
};
class CfgVehicles
{
	class Box_Base;
	class AmmoBox_762x54OLD_20Rnd: Box_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_AmmoBox_762x54_20Rnd0";
		descriptionShort="$STR_CfgVehicles_AmmoBox_762x54_20Rnd1";
		model="\dz\weapons\ammunition\762_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=185;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\762x54\Data\762_box_Old_co.paa"
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
								"DZ\weapons\ammunition\data\762_box.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\ammunition\data\762_box.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\762_box_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\762_box_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\ammunition\data\762_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class Ammo_762x54Old
			{
				value=20;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_762x54Old
	{
		name="Bullet_762x54Old";
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_762x54Old: Ammunition_Base
	{
		scope=2;
		displayName="Old Rusted 7.62x54 Ammunition";
		descriptionShort="Old Rusted 7.62x54 Ammo, It will work in a pinch but throwing this dirty Lead through your barrel will Gunk it up faster than fresh clean Ammunition, And it's not Guaranteed to be as Effective Either.";
		model="\dz\weapons\ammunition\762_LooseRounds.p3d";
		iconCartridge=3;
		weight=9;
		count=20;
		ammo="Bullet_762x54Old";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\762x54\Data\762x54R_Old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MassiveMod\Ammunitions\762x54\Data\762x54R_Old.rvmat"
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
								"MassiveMod\Ammunitions\762x54\Data\762x54R_Old.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MassiveMod\Ammunitions\762x54\Data\762x54R_Old.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MassiveMod\Ammunitions\762x54\Data\762x54R_Old.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MassiveMod\Ammunitions\762x54\Data\762x54R_Old.rvmat"
							}
						},
						
						{
							0,
							
							{
								"MassiveMod\Ammunitions\762x54\Data\762x54R_Old.rvmat"
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
	class Bullet_762x54Old: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_762";
		round="FxRound_762";
		spawnPileType="Ammo_762x54Old";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=685;
		typicalSpeed=765;
		airFriction=-0.001;
		caliber=1;
		deflecting=10;
		damageBarrel=1500;
		dispersion=0.015;
		damageBarrelDestroyed=1500;
		weight=0.012;
		impactBehaviour=1;
		hitAnimation=1;
		unconRefillModifier=2.75;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.94,1}
			};
			class Health
			{
				damage=105;
			};
			class Blood
			{
				damage=70;
			};
			class Shock
			{
				damage=105;
				damageOverride[]=
				{
					{0.86000001,1}
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
