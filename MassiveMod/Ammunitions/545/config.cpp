class CfgPatches
{
	class SH_Weapons_Ammunition_545
	{
		units[]={};
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
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
		ammo[]=
		{
			"Bullet_545x39Old",
			"Bullet_545x39AP"
		};
	};
};
class CfgVehicles
{
	class BoxBase;
	class AmmoBox_545x39_20Rnd;
	class AmmoBox_Heli545x39_20Rnd: AmmoBox_545x39_20Rnd
	{
	};
	class AmmoBox_545x39Old_20Rnd: AmmoBox_545x39_20Rnd
	{
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\545\Data\545x39Oldbox_co.paa"
		};
		class Resources
		{
			class Ammo_545x39Old
			{
				value=30;
				variable="quantity";
			};
		};
	};
	class AmmoBox_545x39AP_20Rnd: AmmoBox_545x39_20Rnd
	{
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\545\Data\545x39APbox_co.paa"
		};
		class Resources
		{
			class Ammo_545x39AP
			{
				value=30;
				variable="quantity";
			};
		};
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class Ammo_545x39Old: Ammunition_Base
	{
		scope=2;
		displayName="Old Rusted 5.45x39 Ammunition";
		descriptionShort="Old Rusted 5.45x39 Ammo, It will work in a pinch but throwing this dirty Lead through your barrel will Gunk it up faster than fresh clean Ammunition, And it's not Guaranteed to be as Effective Either.";
		model="\dz\weapons\ammunition\545x39_LooseRounds.p3d";
		iconCartridge=2;
		weight=4;
		count=30;
		ammo="Bullet_545x39Old";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\545\Data\545x39Old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MassiveMod\Ammunitions\545\Data\545x39Old.rvmat"
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
								"MassiveMod\Ammunitions\545\Data\545x39Old.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MassiveMod\Ammunitions\545\Data\545x39Old.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MassiveMod\Ammunitions\545\Data\545x39Old.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MassiveMod\Ammunitions\545\Data\545x39Old.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Ammo_545x39AP: Ammunition_Base
	{
		scope=2;
		displayName="5.45x39AP Rounds";
		descriptionShort="5.45x39 7N22 AP – A Russian armor-piercing variant of the 5.45x39mm cartridge, featuring a hardened steel penetrator core. Designed to defeat body armor, the 7N22 offers superior penetration compared to standard ball ammunition, making it highly effective against armored targets at medium range.";
		model="\dz\weapons\ammunition\545x39_LooseRounds.p3d";
		iconCartridge=2;
		weight=4;
		count=30;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\545\Data\545x39AP_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MassiveMod\Ammunitions\545\Data\545x39AP.rvmat"
		};
		ammo="Bullet_545x39AP";
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
								"MassiveMod\Ammunitions\545\Data\545x39AP.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MassiveMod\Ammunitions\545\Data\545x39AP.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\ammunition\data\545x39_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\ammunition\data\545x39_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\ammunition\data\545x39_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_545x39Old
	{
		name="Bullet_545x39Old";
	};
	class AType_Bullet_545x39AP
	{
		name="Bullet_545x39AP";
	};
};
class CfgAmmo
{
	class Bullet_Base;
	class Bullet_545x39Old: Bullet_Base
	{
		scope=1;
		spawnPileType="Ammo_545x39Old";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=7.1999998;
		airFriction=-0.00125;
		typicalSpeed=780;
		initSpeed=780;
		caliber=0.89999998;
		deflecting=10;
		damageBarrel=850;
		damageBarrelDestroyed=850;
		weight=0.00343;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=4;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=56;
			};
			class Blood
			{
				damage=70;
			};
			class Shock
			{
				damage=63;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	class Bullet_545x39AP: Bullet_Base
	{
		scope=1;
		spawnPileType="Ammo_545x39AP";
		casing="FxCartridge_556";
		round="FxRound_556";
		hit=7.1999998;
		airFriction=-0.00125;
		typicalSpeed=880;
		initSpeed=880;
		caliber=0.89999998;
		deflecting=10;
		damageBarrel=214.28572;
		damageBarrelDestroyed=214.28572;
		weight=0.00343;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=4;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			class Health
			{
				damage=80;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=90;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
};
