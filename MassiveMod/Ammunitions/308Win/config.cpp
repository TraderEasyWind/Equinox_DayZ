class CfgPatches
{
	class SH_Weapons_Ammunition_308
	{
		units[]=
		{
			"AmmoBox_308WinOLD_20Rnd"
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
			"Ammo_308WinOld"
		};
		ammo[]=
		{
			"Bullet_308WinOld"
		};
	};
};
class CfgVehicles
{
	class Box_Base;
	class AmmoBox_308WinOLD_20Rnd: Box_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_AmmoBox_308Win_20Rnd0";
		descriptionShort="$STR_CfgVehicles_AmmoBox_308Win_20Rnd1";
		model="\dz\weapons\ammunition\308Win_20RoundBox.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		weight=185;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\308Win\Data\308win_box_Old_co.paa"
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
			class Ammo_308WinOld
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
	class AType_Bullet_308WinOld
	{
		name="Bullet_308WinOld";
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_308WinOld: Ammunition_Base
	{
		scope=2;
		displayName="Old Rusted 308 Winchester Ammunition";
		descriptionShort="Old Rusted 308 Winchester Ammo, It will work in a pinch but throwing this dirty Lead through your barrel will Gunk it up faster than fresh clean Ammunition, And it's not Guaranteed to be as Effective Either.";
		model="\dz\weapons\ammunition\308Win_LooseRounds.p3d";
		iconCartridge=3;
		weight=9;
		count=20;
		ammo="Bullet_308WinOld";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\308Win\Data\308Win_Old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MassiveMod\Ammunitions\308Win\Data\308Win_Old.rvmat"
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
								"MassiveMod\Ammunitions\308Win\Data\308Win_Old.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MassiveMod\Ammunitions\308Win\Data\308Win_Old.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MassiveMod\Ammunitions\308Win\Data\308Win_Old.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MassiveMod\Ammunitions\308Win\Data\308Win_Old.rvmat"
							}
						},
						
						{
							0,
							
							{
								"MassiveMod\Ammunitions\308Win\Data\308Win_Old.rvmat"
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
	class Bullet_308WinOld: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_762";
		round="FxRound_308Win";
		spawnPileType="Ammo_308WinOld";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		initSpeed=670;
		typicalSpeed=840;
		tracerScale=1.2;
		tracerStartTime=-1;
		tracerEndTime=1;
		airFriction=-0.001;
		caliber=1;
		deflecting=10;
		damageBarrel=1500;
		damageBarrelDestroyed=1500;
		weight=0.0099999998;
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
				{0.89999998,1}
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
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
};
