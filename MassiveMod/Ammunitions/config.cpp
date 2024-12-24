class CfgPatches
{
	class SH_Weapons_Ammunition
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Ammunition"
		};
		magazines[]=
		{
			"MassiveMod_AmmoBoxBase",
			"MassiveMod_AmmoBox",
			"MassiveMod_AmmoBox556",
			"MassiveMod_AmmoBox545",
			"MassiveMod_AmmoBox762x39",
			"MassiveMod_AmmoBox308Win",
			"MassiveMod_AmmoBox762x54"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class MassiveMod_AmmoBoxBase: Magazine_Base
	{
		scope=0;
		model="\dz\gear\containers\300RoundBox.p3d";
		weight=400;
		itemSize[]={4,3};
		canBeDigged=1;
		repairableWithKits[]={3,8};
		repairCosts[]={25,25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\containers\data\300RoundBox.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\300RoundBox.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\300RoundBox_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\300RoundBox_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\300RoundBox_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
	class MassiveMod_AmmoBox: MassiveMod_AmmoBoxBase
	{
		scope=2;
		displayName="Ammo Box";
		descriptionShort="This Box is for storing Ammunition. Use a type of Ammunition to convert it to that type";
		count=0;
	};
	class MassiveMod_AmmoBox556: MassiveMod_AmmoBoxBase
	{
		scope=2;
		displayName="600 Round 5.56x45 Ammo Box";
		descriptionShort="This Box is for storing 556 Ammunition Only";
		ammo="Bullet_556x45";
		count=600;
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer",
			"Ammo_556x45Old",
			"Ammo_556x45AP"
		};
	};
	class MassiveMod_AmmoBox545: MassiveMod_AmmoBoxBase
	{
		scope=2;
		displayName="600 Round 5.45x39 Ammo Box";
		descriptionShort="This Box is for storing 5.45x39 Ammunition Only";
		ammo="Bullet_545x39";
		count=600;
		ammoItems[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer",
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
	};
	class MassiveMod_AmmoBox762x39: MassiveMod_AmmoBoxBase
	{
		scope=2;
		displayName="600 Round 7.62x39 Ammo Box";
		descriptionShort="This Box is for storing 7.62x39 Ammunition Only";
		ammo="Bullet_762x39";
		count=600;
		ammoItems[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer",
			"Ammo_762x39AP",
			"Ammo_762x39Old"
		};
	};
	class MassiveMod_AmmoBox308Win: MassiveMod_AmmoBoxBase
	{
		scope=2;
		displayName="350 Round .308 Winchester Ammo Box";
		descriptionShort="This Box is for storing .308 NATO Ammunition Only";
		ammo="Bullet_308Win";
		count=350;
		ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
	};
	class MassiveMod_AmmoBox762x54: MassiveMod_AmmoBoxBase
	{
		scope=2;
		displayName="350 Round 7.62x54R Ammo Box";
		descriptionShort="This Box is for storing .308 NATO Ammunition Only";
		ammo="Bullet_762x54";
		count=350;
		ammoItems[]=
		{
			"Ammo_762x54",
			"Ammo_762x54Tracer"
		};
	};
};
