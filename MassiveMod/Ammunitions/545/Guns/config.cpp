class CfgPatches
{
	class SH_Weapons_Ammunition_545_Guns
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Firearms_AK74",
			"MassGuns_Weapons_AN94",
			"MassGuns_Weapons_RPK",
		};
		magazines[]={};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class AK74;
	class BoltActionRifle_ExternalMagazine_Base;
	class SSG82_Base: BoltActionRifle_ExternalMagazine_Base
	{
		chamberableFrom[]+=
		{
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
	};
	class AK74_Base: Rifle_Base
	{
		magazines[]+=
		{
			"Mag_RPK74_Drum100Rnd"
		};
		chamberableFrom[]+=
		{
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
	};
	class Mass_AN94_Base: Rifle_Base
	{
		magazines[]+=
		{
			"Mag_RPK74_Drum100Rnd"
		};
		chamberableFrom[]+=
		{
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
	};
	class Mass_RPK74_Base: AK74
	{
		magazines[]+=
		{
			"Mag_RPK74_Drum100Rnd"
		};
		chamberableFrom[]+=
		{
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Mag_AK74_30Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
	};
	class Mag_AK74_45Rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
	};
	class Mag_SSG82_5rnd: Magazine_Base
	{
		ammoItems[]+=
		{
			"Ammo_545x39Old",
			"Ammo_545x39AP"
		};
	};
	class Mag_AKM_Drum75Rnd;
	class Mag_RPK74_Drum100Rnd: Mag_AKM_Drum75Rnd
	{
		scope=2;
		displayName="100rd RPK74 Drum Mag";
		descriptionShort="Detachable drum magazine for the RPK74 Light Machine Gun. Holds up to 100 rounds of 5.45x39mm. ";
		model="\DZ\weapons\attachments\magazine\magazine_akm_drum.p3d";
		rotationFlags=12;
		weight=1100;
		weightPerQuantityUnit=9;
		itemSize[]={3,3};
		count=100;
		ammo="Bullet_545x39";
		ammoItems[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer",
			"Ammo_545x39AP"
		};
		tracersEvery=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MassiveMod\Ammunitions\545\Data\magazine_drum_tan.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\data\magazine_drum.rvmat"
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
								"DZ\weapons\attachments\data\magazine_drum.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\magazine_drum.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\magazine_drum_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\magazine_drum_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\magazine_drum_destruct.rvmat"
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
};
