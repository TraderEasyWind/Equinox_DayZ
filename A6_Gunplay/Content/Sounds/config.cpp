class CfgPatches
{
	class A6_AimingSounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class Shotgun_Base;
	class BoltActionRifle_InnerMagazine_Base;
	class BoltActionRifle_Base;
	class Pistol_Base;
	class AKM_Base: Rifle_Base
	{
		aimSoundSet = "AK";
	};
	class AK101_Base: Rifle_Base
	{
		aimSoundSet = "AK";
	};
	class AK74_Base: Rifle_Base
	{
		aimSoundSet = "AK";
	};
	class B95_Base: Rifle_Base
	{
		aimSoundSet = "Winchester70";
	};
	class Colt1911_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class CZ61_Base: Rifle_Base
	{
		aimSoundSet = "CZ61";
	};
	class CZ527_Base: BoltActionRifle_Base
	{
		aimSoundSet = "CR527";
	};
	class CZ75_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class Deagle_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class FAL_Base: Rifle_Base
	{
		aimSoundSet = "SVD";
	};
	class FNX45_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class Glock19_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class Izh18_Base: Rifle_Base
	{
		aimSoundSet = "CR527";
	};
	class Izh43Shotgun_Base: Shotgun_Base
	{
		aimSoundSet = "Saiga";
	};
	class M4A1_Base: Rifle_Base
	{
		aimSoundSet = "VSS";
	};
	class Magnum_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class MakarovIJ70_Base: Pistol_Base
	{
		aimSoundSet = "FNX45";
	};
	class Mosin9130_Base: BoltActionRifle_InnerMagazine_Base
	{
		aimSoundSet = "Mosin";
	};
	class Mp133Shotgun_Base: Shotgun_Base
	{
		aimSoundSet = "Saiga";
	};
	class MP5K_Base: Rifle_Base
	{
		aimSoundSet = "VSS";
	};
	class Repeater_Base: Rifle_Base
	{
		aimSoundSet = "CR527";
	};
	class Ruger1022_Base: Rifle_Base
	{
		aimSoundSet = "CR527";
	};
	class Saiga_Base: Rifle_Base
	{
		aimSoundSet = "Saiga";
	};
	class Scout_Base: BoltActionRifle_Base
	{
		aimSoundSet = "CR527";
	};
	class SKS_Base: Rifle_Base
	{
		aimSoundSet = "CR527";
	};
	class SVD_Base: Rifle_Base
	{
		aimSoundSet = "SVD";
	};
	class UMP45_Base: Rifle_Base
	{
		aimSoundSet = "VSS";
	};
	class VSS_Base: Rifle_Base
	{
		aimSoundSet = "VSS";
	};
	class Winchester70_Base: BoltActionRifle_InnerMagazine_Base
	{
		aimSoundSet = "Winchester70";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class aim_Base_SoundShader: baseCharacter_SoundShader
	{
		volume = 0.55;
		range = 20;
	};
	class aim_in_Base_SoundShader: aim_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\M4A1\handling\jamming_01",1}};
	};
	class aim_out_Base_SoundShader: aim_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\M4A1\handling\hand_0",1}};
		volume = 0.5;
	};
	class AK_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAK\handling\jamming_01",1}};
		volume = 0.8;
	};
	class AK_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\NewAK\handling\hand_0",1}};
		volume = 2.8;
	};
	class CR527_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\cr527\handling\jamming_01",1}};
		volume = 0.9;
	};
	class CR527_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\cr527\handling\hand1_0",1}};
		volume = 0.8;
	};
	class CZ61_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\CZ61\handling\jamming_01",1}};
		volume = 0.6;
	};
	class CZ61_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\CZ61\handling\hand_0",1}};
		volume = 0.5;
	};
	class FNX45_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\fnx45\handling\jamming_01",1}};
		volume = 0.3;
	};
	class FNX45_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\fnx45\handling\jamming_06",1}};
		volume = 0.1;
	};
	class M4_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\M4A1\handling\jamming_07",1}};
		volume = 0.2;
	};
	class M4_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\M4A1\handling\jamming_01",1}};
		volume = 1.4;
	};
	class Mosin_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\mosin9130\handling\hand_0",1}};
		volume = 3.0;
	};
	class Mosin_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\mosin9130\handling\jamming_01",1}};
		volume = 1.0;
	};
	class Saiga_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\shotguns\saiga12\handling\jamming_01",1}};
	};
	class Saiga_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\shotguns\saiga12\handling\hand_0",1}};
		volume = 2.6;
	};
	class SVD_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\SVD\handling\jamming_01",1}};
		volume = 1.0;
	};
	class SVD_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\SVD\handling\hand_0",1}};
		volume = 2.8;
	};
	class VSS_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\vss_vintorez\handling\hand_5",1}};
		volume = 1.5;
	};
	class VSS_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\vss_vintorez\handling\hand_1",1}};
		volume = 1.5;
	};
	class Winchester70_aim_in_SoundShader: aim_in_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\winchester70\handling\jamming_01",1}};
		volume = 2.0;
	};
	class Winchester70_aim_out_SoundShader: aim_out_Base_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\winchester70\handling\tail\hand_1_tail_interior",1}};
		volume = 2.3;
	};
};
class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class aim_in_Base_SoundSet: baseCharacter_SoundSet
	{
		frequencyRandomizer = 1;
		volumeRandomizer = 1;
	};
	class aim_out_Base_SoundSet: baseCharacter_SoundSet
	{
		frequencyRandomizer = 1;
		volumeRandomizer = 1;
	};
	class AK_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {"AK_aim_in_SoundShader"};
	};
	class AK_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {"AK_aim_out_SoundShader"};
	};
	class CR527_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {"CR527_aim_in_SoundShader"};
	};
	class CR527_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {"CR527_aim_out_SoundShader"};
	};
	class CZ61_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {"CZ61_aim_in_SoundShader"};
	};
	class CZ61_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {"CZ61_aim_out_SoundShader"};
	};
	class FNX45_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {"FNX45_aim_in_SoundShader"};
	};
	class FNX45_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {"FNX45_aim_out_SoundShader"};
	};
	class Mosin_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {"Mosin_aim_in_SoundShader"};
	};
	class Mosin_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {"Mosin_aim_out_SoundShader"};
	};
	class M4_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {"M4_aim_in_SoundShader"};
	};
	class M4_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {"M4_aim_out_SoundShader"};
	};
	class Saiga_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {"Saiga_aim_in_SoundShader"};
	};
	class Saiga_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {"Saiga_aim_out_SoundShader"};
	};
	class SVD_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {"SVD_aim_in_SoundShader"};
	};
	class SVD_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {"SVD_aim_out_SoundShader"};
	};
	class VSS_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {"VSS_aim_in_SoundShader"};
	};
	class VSS_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {"VSS_aim_out_SoundShader"};
	};
	class Winchester70_aim_in_SoundSet: aim_in_Base_SoundSet
	{
		soundShaders[] = {"Winchester70_aim_in_SoundShader"};
	};
	class Winchester70_aim_out_SoundSet: aim_out_Base_SoundSet
	{
		soundShaders[] = {"Winchester70_aim_out_SoundShader"};
	};
};