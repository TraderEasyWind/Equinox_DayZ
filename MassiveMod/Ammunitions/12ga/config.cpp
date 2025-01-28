////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.64
//https://mikero.bytex.digital/Downloads
//'now' is Tue Jan 28 18:16:17 2025 : 'file' last modified on Wed Dec 11 11:46:56 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class MassiveMod_DZ_Weapons_Projectiles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Projectiles"};
	};
};
class CfgAmmo
{
	class Shotgun_Base;
	class Bullet_12GaugePellets: Shotgun_Base
	{
		scope = 1;
		dispersion = 0.01;
	};
};
