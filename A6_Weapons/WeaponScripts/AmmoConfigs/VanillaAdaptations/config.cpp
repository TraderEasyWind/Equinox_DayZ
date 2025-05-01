class CfgPatches
{
	class A6_Ammo_Vanilla_Adaptations
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Muzzle_Base;
class OpticsInfoShotgun;
class OpticsInfoRifle;
class OpticsInfoPistol;
class CfgWeapons
{
	class Pistol_Base;
	class Shotgun_Base;
	class Rifle_Base;
	class BoltActionRifle_ExternalMagazine_Base;
	class BoltActionRifle_InnerMagazine_Base;
	class Colt1911_Base: Pistol_Base
	{
		chamberableFrom[]={"Ammo_45ACP"};
	};	
	class CZ75_Base: Pistol_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class Deagle_Base: Pistol_Base
	{
		chamberableFrom[]={"Ammo_357"};
	};	
	class Derringer_Base: Pistol_Base
	{
		chamberableFrom[]={"Ammo_357"};
	};
	class FNX45_Base: Pistol_Base
	{
		chamberableFrom[]={"Ammo_45ACP"};
	};
	class Glock19_Base: Pistol_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class LongHorn_Base: Pistol_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class Magnum_Base: Pistol_Base
	{
		chamberableFrom[]={"Ammo_357"};
	};
	class MKII_Base: Pistol_Base
	{
		chamberableFrom[]={"Ammo_22"};	
	};
	class P1_Base: Pistol_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
	};
	class MakarovPB_Base: Pistol_Base
	{
		chamberableFrom[]={"Ammo_380"};	
	};
	class MakarovIJ70_Base: Pistol_Base
	{
		chamberableFrom[]={"Ammo_380"};	
	};
	class Red9_Base: Pistol_Base
	{	
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
	};	
	class Izh18Shotgun_Base: Shotgun_Base
	{
		chamberableFrom[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};	
	};	
	class Izh43Shotgun_Base: Shotgun_Base
	{
		chamberableFrom[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};	
	};
	class Mp133Shotgun_Base: Shotgun_Base
	{
		chamberableFrom[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};	
	};	
	class Saiga_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};	
	};			
	class AK101_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class AK74_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};	
	};
	class AKM_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};	
	};
	class Aug_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class B95_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};	
	};
	class CZ527_Base: BoltActionRifle_ExternalMagazine_Base
	{	
		chamberableFrom[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};	
	};
	class CZ550_Base: BoltActionRifle_ExternalMagazine_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};	
	};
	class CZ61_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_380"};
	};
	class FAL_Base: Rifle_Base
	{	
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};	
	};
	class Famas_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class Izh18_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};	
	};
	class M14_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};	
	};
	class M16A2_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class M249_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class M4A1_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};
	class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
	{
		chamberableFrom[]={"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
	};
	class SawedoffMosin9130_Base: Mosin9130_Base
	{	
		chamberableFrom[]={"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
	};
	class MP5K_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_9x19","Ammo_9x19AP63"};
	};	
	class Groza_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_9x39","Ammo_9x39AP"};
	};	
	class PM73Rak_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_380"};
	};
	class PP19_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_380"};
	};
	class Repeater_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_357"};
	};
	class Ruger1022_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_22"};
	};	
	class Scout_Base: BoltActionRifle_ExternalMagazine_Base
	{
		chamberableFrom[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};
	};	
	class SKS_Base: Rifle_Base
	{	
		chamberableFrom[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};	
	};
	class SSG82_Base: BoltActionRifle_ExternalMagazine_Base
	{
		chamberableFrom[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};	
	};
	class SV98_Base;
	class SV98: SV98_Base
	{
		chamberableFrom[]={"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
	};
	class SVD_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
	};
	class Trumpet_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_22"};
	};	
	class UMP45_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_45ACP"};
	};
	class VSS_Base: Rifle_Base
	{
		chamberableFrom[]={"Ammo_9x39","Ammo_9x39AP"};
	};	
	class ASVAL: VSS_Base
	{
		chamberableFrom[]={"Ammo_9x39","Ammo_9x39AP"};
	};	
	class Vikhr: VSS_Base
	{
		chamberableFrom[]={"Ammo_9x39","Ammo_9x39AP"};
	};	
	class Winchester70_Base: BoltActionRifle_InnerMagazine_Base
	{
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};	
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Mag_FNX45_15Rnd: Magazine_Base
	{
		ammo="Bullet_45ACP";
		ammoItems[]={"Ammo_45ACP"};	
	};
	class Mag_Deagle_9rnd: Magazine_Base
	{
		ammo="Bullet_357";
		ammoItems[]={"Ammo_357"};	
	};
	class Mag_1911_7Rnd: Magazine_Base
	{
		ammo="Bullet_45ACP";
		ammoItems[]={"Ammo_45ACP"};	
	};
	class Mag_CZ75_15Rnd: Magazine_Base
	{
		ammo="Bullet_9x19";
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};	
	};
	class Mag_Glock_15Rnd: Magazine_Base
	{
		ammo="Bullet_9x19";
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};	
	};
	class Mag_P1_8Rnd: Magazine_Base
	{
		ammo="Bullet_9x19";
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};	
	};
	class Mag_IJ70_8Rnd: Magazine_Base
	{
		ammo="Bullet_380";
		ammoItems[]={"Ammo_380"};	
	};
	class Mag_MP5_15Rnd: Magazine_Base
	{
		ammo="Bullet_9x19";
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};	
	};
	class Mag_MP5_30Rnd: Magazine_Base
	{
		ammo="Bullet_9x19";
		ammoItems[]={"Ammo_9x19","Ammo_9x19AP63"};	
	};
	class Mag_PM73_15Rnd: Magazine_Base
	{
		ammo="Bullet_380";
		ammoItems[]={"Ammo_380"};	
	};
	class Mag_PM73_25Rnd: Magazine_Base
	{
		ammo="Bullet_380";
		ammoItems[]={"Ammo_380"};	
	};
	class Mag_CZ61_20Rnd: Magazine_Base
	{
		ammo="Bullet_380";
		ammoItems[]={"Ammo_380"};	
	};
	class Mag_FAMAS_25Rnd: Magazine_Base
	{
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};	
	};
	class Mag_MKII_10Rnd: Magazine_Base
	{
		ammo="Bullet_22";
		ammoItems[]={"Ammo_22"};	
	};
	class Mag_Ruger1022_10Rnd: Magazine_Base
	{
		ammo="Bullet_22";
		ammoItems[]={"Ammo_22"};	
	};
	class Mag_Ruger1022_15Rnd: Magazine_Base
	{
		ammo="Bullet_22";
		ammoItems[]={"Ammo_22"};	
	};
	class Mag_Ruger1022_30Rnd: Magazine_Base
	{
		ammo="Bullet_22";
		ammoItems[]={"Ammo_22"};	
	};
	class Mag_AKM_30Rnd: Magazine_Base
	{
		ammo="Bullet_762x39";
		ammoItems[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};	
	};
	class Mag_AKM_Drum75Rnd: Magazine_Base
	{
		ammo="Bullet_762x39";
		ammoItems[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
	};
	class Mag_AKM_Palm30Rnd: Magazine_Base
	{
		ammo="Bullet_762x39";
		ammoItems[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
	};
	class Mag_CZ527_5rnd: Magazine_Base
	{
		ammo="Bullet_762x39";
		ammoItems[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};
	};
	class Mag_STANAG_30Rnd: Magazine_Base
	{
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};	
	};
	class Mag_STANAGCoupled_30Rnd: Magazine_Base
	{
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};	
	};
	class Mag_STANAG_60Rnd: Magazine_Base
	{
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};	
	};
	class Mag_CMAG_10Rnd: Magazine_Base
	{
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};	
	};
	class Mag_CMAG_20Rnd: Magazine_Base
	{
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};	
	};
	class Mag_CMAG_30Rnd: Magazine_Base
	{
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};	
	};
	class Mag_CMAG_40Rnd: Magazine_Base
	{
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};	
	};
	class Mag_AK101_30Rnd: Magazine_Base
	{
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};	
	};
	class Mag_Aug_30Rnd: Magazine_Base
	{
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};	
	};
	class Mag_AK74_30Rnd: Magazine_Base
	{
		ammo="Bullet_545x39";
		ammoItems[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
	};
	class Mag_AK74_45Rnd: Magazine_Base
	{
		ammo="Bullet_545x39";
		ammoItems[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
	};
	class Mag_SVD_10Rnd: Magazine_Base
	{
		ammo="Bullet_762x54";
		ammoItems[]={"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
	};
	class Mag_FAL_20Rnd: Magazine_Base
	{
		ammo="Bullet_308Win";
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class Mag_Scout_5Rnd: Magazine_Base
	{
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};	
	};
	class Mag_UMP_25Rnd: Magazine_Base
	{
		ammo="Bullet_45ACP";
		ammoItems[]={"Ammo_45ACP"};	
	};
	class Mag_VSS_10Rnd: Magazine_Base
	{
		ammo="Bullet_9x39";
		ammoItems[]={"Ammo_9x39","Ammo_9x39AP"};	
	};
	class Mag_VAL_20Rnd: Magazine_Base
	{
		ammo="Bullet_9x39";
		ammoItems[]={"Ammo_9x39","Ammo_9x39AP"};
	};
	class Mag_Vikhr_30Rnd: Magazine_Base
	{
		ammo="Bullet_9x39";
		ammoItems[]={"Ammo_9x39","Ammo_9x39AP"};
	};
	class Mag_M249_Box200Rnd: Magazine_Base
	{
		ammo="Bullet_556x45";
		ammoItems[]={"Ammo_556x45","Ammo_556x45Tracer","Ammo_556x45HP","Ammo_556x45M856","Ammo_556x45FMJ","Ammo_556x45M855","Ammo_556x45M856A1","Ammo_556x45M855A1","Ammo_556x45M995"};	
	};
	class Mag_PP19_64Rnd: Magazine_Base
	{
		ammo="Bullet_380";
		ammoItems[]={"Ammo_380"};	
	};
	class Mag_CZ550_4rnd: Magazine_Base
	{
		ammo="Bullet_308Win";
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class Mag_CZ550_10rnd: Magazine_Base
	{
		ammo="Bullet_308Win";
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class Mag_SSG82_5rnd: Magazine_Base
	{
		ammo="Bullet_545x39";
		ammoItems[]={"Ammo_545x39","Ammo_545x39Tracer","Ammo_545x39HP","Ammo_545x39FMJ","Ammo_545x39Tgs","Ammo_545x39PSgs","Ammo_545x39PPgs","Ammo_545x39BTgs","Ammo_545x39BPgs","Ammo_545x39BSgs"};
	};
	class Mag_Saiga_5Rnd: Magazine_Base
	{
		ammo="Bullet_12GaugePellets";
		ammoItems[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
	};
	class Mag_Saiga_8Rnd: Magazine_Base
	{
		ammo="Bullet_12GaugePellets";
		ammoItems[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
	};
	class Mag_Saiga_Drum20Rnd: Magazine_Base
	{
		ammo="Bullet_12GaugePellets";
		ammoItems[]={"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};	
	};
	class Mag_Groza_20Rnd: Magazine_Base
	{
		ammo="Bullet_9x39";
		ammoItems[]={"Ammo_9x39","Ammo_9x39AP"};
	};
	class Mag_MakarovPB_8Rnd: Magazine_Base
	{
		ammo="Bullet_380";
		ammoItems[]={"Ammo_380"};
	};
	class Mag_AKM_Drum_TEST: Magazine_Base
	{
		ammo="Bullet_762x39";
		ammoItems[]={"Ammo_762x39","Ammo_762x39Tracer","Ammo_762x39HP","Ammo_762x39FMJ","Ammo_762x39T45M1gzh","Ammo_762x39PSgzh","Ammo_762x39PPgzh","Ammo_762x39BPgzh","Ammo_762x39MAIAP"};	
	};
	class Mag_M14_10Rnd: Magazine_Base
	{
		ammo="Bullet_308Win";
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class Mag_M14_20Rnd: Magazine_Base
	{
		ammo="Bullet_308Win";
		ammoItems[]={"Ammo_308Win","Ammo_308WinTracer","Ammo_762x51BCPFMJ","Ammo_762x51M80","Ammo_762x51M62Tracer","Ammo_762x51M61","Ammo_762x51M993"};
	};
	class Mag_SV98_10Rnd: Magazine_Base
	{
		ammo="Bullet_762x54";
		ammoItems[]={"Ammo_762x54","Ammo_762x54Tracer","Ammo_762x54HPBT","Ammo_762x54FMJ","Ammo_762x54T46Mgzh","Ammo_762x54LPSgzh","Ammo_762x54PSgzh","Ammo_762x54BTgzh","Ammo_762x54SNBgzh","Ammo_762x54BSgs"};
	};
};	