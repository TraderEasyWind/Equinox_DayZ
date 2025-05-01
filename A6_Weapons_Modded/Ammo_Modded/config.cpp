class CfgPatches
{
	class A6_Ammo_Modded
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","A6_WeaponScripts"};
	};
};
class CfgMods
{
	class A6_Ammo_Modded
	{
		dir="A6_Ammo_Modded";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="A6_Ammo_Modded";
		credits="FutureSixx";
		author="FutureSixx";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    // EDIT ALL YOUR SPEED AND DAMAGE VALUES HERE IN THE CLASSES.
    class Bullet_A6_127x99: Bullet_Base
    {
		initSpeed=928;
		typicalSpeed=928;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage=500;
				armorDamage=5;
			};
			class Blood
			{
				damage=500;
			};
			class Shock
			{
				damage=500;
			};
		};
    };
    class Bullet_A6_127x55: Bullet_Base
    {
		initSpeed=450;
		typicalSpeed=500;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage=400;
				armorDamage=4;
			};
			class Blood
			{
				damage=500;
			};
			class Shock
			{
				damage=400;
			};
		};
    };
    class Bullet_A6_145x114: Bullet_Base
	{
		initSpeed = 1200;
		typicalSpeed = 1200;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage = 1000;
				armorDamage = 10;
			};
			class Blood
			{
				damage = 1000;
			};
			class Shock
			{
				damage = 1000;
			};
		};
	};
	class Bullet_A6_277FURY: Bullet_Base
    {
		initSpeed=950;
		typicalSpeed=950;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage=170;
				armorDamage = 2;
			};
			class Blood
			{
				damage=170;
			};
			class Shock
			{
				damage=100;
			};
		};
    };
    class Bullet_A6_300: Bullet_Base
    {
		initSpeed=600;
		typicalSpeed=650;
		airFriction = -0.00125;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage=120;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=150;
			};
		};
    };
    class Bullet_A6_338: Bullet_Base
    {
		initSpeed=950;
		typicalSpeed=950;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage=320;
				armorDamage=3;
			};
			class Blood
			{
				damage=500;
			};
			class Shock
			{
				damage=320;
			};
		};
    };
    class Bullet_A6_408: Bullet_Base
    {
		initSpeed=1100;
		typicalSpeed=1100;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.5,1.0}};
			class Health
			{
				damage=500;
				armorDamage=5;
			};
			class Blood
			{
				damage=500;
			};
			class Shock
			{
				damage=500;
			};
		};
    };
    class Bullet_A6_57x28: Bullet_Base
    {
		initSpeed=715;
		typicalSpeed=715;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage=80;
				armorDamage = 2;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=60;
			};
		};
    };
    class Bullet_A6_500SW: Bullet_Base
    {
		initSpeed=500;
		typicalSpeed=550;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0.0;
			bleedThreshold=1.0;
			defaultDamageOverride[]={{0.8,1.0}};
			class Health
			{
				damage=190;
			};
			class Blood
			{
				damage=200;
			};
			class Shock
			{
				damage=250;
			};
		};
    };
    class Bullet_A6_50AE: Bullet_Base
    {
		initSpeed=440;
		typicalSpeed=470;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0.0;
			bleedThreshold=1.0;
			defaultDamageOverride[]={{0.8,1.0}};
			class Health
			{
				damage=150;
			};
			class Blood
			{
				damage=200;
			};
			class Shock
			{
				damage=200;
			};
		};
    };
    class Bullet_A6_50Beo: Bullet_Base
    {
		initSpeed=540;
		typicalSpeed=580;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0.0;
			bleedThreshold=1.0;
			defaultDamageOverride[]={{0.5,1.0}};
			class Health
			{
				damage=190;
			};
			class Blood
			{
				damage=200;
			};
			class Shock
			{
				damage=250;
			};
		};
    };
    class Bullet_545x39HP: Bullet_Base
	{
		typicalSpeed = 884;
		initSpeed = 884;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 95;
			};
			class Blood
			{
				damage = 150;
			};
			class Shock
			{
				damage = 125;
				damageOverride[] = {{0.9,1.0}};
			};
		};
	};
	class Bullet_545x39Tgs: Bullet_Base
	{
		typicalSpeed = 883;
		initSpeed = 883;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 100;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
				damageOverride[] = {{0.9,1.0}};
			};
		};
	};
	class Bullet_545x39FMJ: Bullet_Base
	{
		typicalSpeed = 884;
		initSpeed = 884;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 105;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
				damageOverride[] = {{0.9,1.0}};
			};
		};
	};
	class Bullet_545x39PSgs: Bullet_Base
	{
		typicalSpeed = 920;
		initSpeed = 920;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 110;
				armorDamage = 1.2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 90;
				damageOverride[] = {{0.9,1.0}};
			};
		};
	};
    class Bullet_545x39PPgs: Bullet_Base
    {
		typicalSpeed = 930;
		initSpeed = 930;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 115;
				armorDamage = 1.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 80;
				damageOverride[] = {{0.9,1.0}};
			};
		};
    };
    class Bullet_545x39BTgs: Bullet_Base
    {
		typicalSpeed = 910;
		initSpeed = 910;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 105;
				armorDamage = 2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 75;
				damageOverride[] = {{0.9,1.0}};
			};
		};
    };
    class Bullet_545x39BPgs: Bullet_Base
    {
		typicalSpeed = 940;
		initSpeed = 940;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 115;
				armorDamage = 2.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 65;
				damageOverride[] = {{0.9,1.0}};
			};
		};
    };
    class Bullet_545x39BSgs: Bullet_Base
    {
		typicalSpeed = 830;
		initSpeed = 830;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			class Health
			{
				damage = 120;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.9,1.0}};
			};
		};
    };
    class Bullet_556x45HP: Bullet_Base
    {
		initSpeed = 947;
		typicalSpeed = 947;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage = 95;
			};
			class Blood
			{
				damage = 150;
			};
			class Shock
			{
				damage = 125;
			};
		};
    };
    class Bullet_556x45M856: Bullet_Base
    {
		initSpeed = 874;
		typicalSpeed = 874;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage = 95;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 90;
			};
		};
    };
    class Bullet_556x45FMJ: Bullet_Base
    {
		initSpeed = 957;
		typicalSpeed = 957;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage = 105;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
			};
		};
    };
    class Bullet_556x45M855: Bullet_Base
    {
		initSpeed = 922;
		typicalSpeed = 922;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage = 110;
				armorDamage = 1.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 80;
			};
		};
    };
    class Bullet_556x45M856A1: Bullet_Base
    {
		initSpeed = 940;
		typicalSpeed = 940;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage = 115;
				armorDamage = 2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 70;
			};
		};
    };
    class Bullet_556x45M855A1: Bullet_Base
    {
		initSpeed = 947;
		typicalSpeed = 947;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage = 120;
				armorDamage = 2.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 60;
			};
		};
    };
    class Bullet_556x45M995: Bullet_Base
    {
		initSpeed = 1013;
		typicalSpeed = 1013;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage = 120;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 50;
			};
		};
    };
    class Bullet_A6_68SPC: Bullet_Base
    {
		initSpeed=750;
		typicalSpeed=800;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage=135;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=135;
			};
		};
    };
    class Bullet_762x39HP: Bullet_Base
    {
		initSpeed = 754;
		typicalSpeed = 754;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 95;
			};
			class Blood
			{
				damage = 150;
			};
			class Shock
			{
				damage = 140;
				damageOverride[] = {{0.8,1.0}};
			};
		};
    };
    class Bullet_762x39FMJ: Bullet_Base
    {
		initSpeed = 775;
		typicalSpeed = 775;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 100;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
				damageOverride[] = {{0.8,1.0}};
			};
		};
    };
    class Bullet_762x39T45M1gzh: Bullet_Base
    {
		initSpeed = 720;
		typicalSpeed = 720;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 110;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
				damageOverride[] = {{0.8,1.0}};
			};
		};
    };
    class Bullet_762x39PSgzh: Bullet_Base
    {
		initSpeed = 700;
		typicalSpeed = 700;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 105;
				armorDamage = 1.2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 90;
				damageOverride[] = {{0.8,1.0}};
			};
		};
    };
    class Bullet_762x39PPgzh: Bullet_Base
    {
		initSpeed = 732;
		typicalSpeed = 732;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 105;
				armorDamage = 1.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 80;
				damageOverride[] = {{0.8,1.0}};
			};
		};
    };
    class Bullet_762x39BPgzh: Bullet_Base
    {
		initSpeed = 730;
		typicalSpeed = 730;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 115;
				armorDamage = 2.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 65;
				damageOverride[] = {{0.8,1.0}};
			};
		};
    };
    class Bullet_762x39MAIAP: Bullet_Base
    {
		initSpeed = 730;
		typicalSpeed = 730;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 120;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.8,1.0}};
			};
		};
    };
    class Bullet_762x51BCPFMJ: Bullet_Base
	{
		initSpeed = 840;
		typicalSpeed = 840;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage = 140;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
			};
		};
	};
	class Bullet_762x51M80: Bullet_Base
	{
		initSpeed = 833;
		typicalSpeed = 833;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage = 150;
				armorDamage = 1.2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 120;
			};
		};
	};
	class Bullet_762x51M62Tracer: Bullet_Base
	{
		initSpeed = 816;
		typicalSpeed = 816;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage = 150;
				armorDamage = 1.25;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 120;
			};
		};
	};
	class Bullet_762x51M61: Bullet_Base
	{
		initSpeed = 849;
		typicalSpeed = 849;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage = 155;
				armorDamage = 2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
			};
		};
	};
    class Bullet_762x51M993: Bullet_Base
    {
		initSpeed = 910;
		typicalSpeed = 910;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.9,1.0}};
			class Health
			{
				damage = 165;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 85;
			};
		};
    };
    class Bullet_762x54HPBT: Bullet_Base
    {
		initSpeed = 807;
		typicalSpeed = 807;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 130;
			};
			class Blood
			{
				damage = 200;
			};
			class Shock
			{
				damage = 200;
				damageOverride[] = {{0.86,1.0}};
			};
		};
    };
    class Bullet_762x54FMJ: Bullet_Base
    {
		initSpeed = 760;
		typicalSpeed = 760;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 140;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 130;
				damageOverride[] = {{0.86,1.0}};
			};
		};
    };
    class Bullet_762x54T46Mgzh: Bullet_Base
    {
		initSpeed = 800;
		typicalSpeed = 800;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 130;
				damageOverride[] = {{0.86,1.0}};
			};
		};
    };
    class Bullet_762x54LPSgzh: Bullet_Base
    {
		initSpeed = 865;
		typicalSpeed = 865;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 150;
				damageOverride[] = {{0.86,1.0}};
			};
		};
    };
    class Bullet_762x54PSgzh: Bullet_Base
    {
		initSpeed = 875;
		typicalSpeed = 875;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 145;
				armorDamage = 1.25;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 100;
				damageOverride[] = {{0.86,1.0}};
			};
		};
    };
    class Bullet_762x54BTgzh: Bullet_Base
    {
		initSpeed = 875;
		typicalSpeed = 875;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 140;
				armorDamage = 2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 80;
				damageOverride[] = {{0.86,1.0}};
			};
		};
    };
    class Bullet_762x54SNBgzh: Bullet_Base
    {
		initSpeed = 875;
		typicalSpeed = 875;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 155;
				armorDamage = 2.5;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 60;
				damageOverride[] = {{0.86,1.0}};
			};
		};
    };
    class Bullet_762x54BSgs: Bullet_Base
    {
		initSpeed = 785;
		typicalSpeed = 785;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.94,1.0}};
			class Health
			{
				damage = 165;
				armorDamage = 3;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 50;
				damageOverride[] = {{0.86,1.0}};
			};
		};
    };
    class Bullet_A6_86BLK: Bullet_Base
    {
		initSpeed=600;
		typicalSpeed=700;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage=230;
				armorDamage=2;
			};
			class Blood
			{
				damage=300;
			};
			class Shock
			{
				damage=300;
			};
		};
    };
    class Bullet_9x19AP63: Bullet_Base
    {
		initSpeed = 450;
		typicalSpeed = 500;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0.0;
			bleedThreshold = 1.0;
			defaultDamageOverride[] = {{0.95,1.0}};
			class Health
			{
				damage = 70;
				armorDamage = 2;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 40;
			};
		};
	};
	class Bullet_A6_46x30: Bullet_Base
    {
		initSpeed=680;
		typicalSpeed=680;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[] = {{0.87,1.0}};
			class Health
			{
				damage=85;
				armorDamage = 2;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=65;
			};
		};
    };
};
class cfgMagazines
{
	class Ammunition_Base;
	class Ammo_A6_127x99: Ammunition_Base
	{
		count=10;
	};
	class Ammo_A6_127x55: Ammunition_Base
	{
		count=20;
	};
	class Ammo_A6_145x114: Ammunition_Base
	{
		count = 10;
	};
	class Ammo_A6_277FURY: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_A6_300: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_A6_338: Ammunition_Base
	{
		count=20;
	};
	class Ammo_A6_408: Ammunition_Base
	{
		count=20;
	};	
	class Ammo_A6_57x28: Ammunition_Base
	{
		count=50;
	};
	class Ammo_A6_500SW: Ammunition_Base
	{
		count=30;
	};
	class Ammo_A6_50AE: Ammunition_Base
	{
		count=30;
	};
	class Ammo_A6_50Beo: Ammunition_Base
	{
		count=20;
	};
	class Ammo_545x39HP: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_545x39Tgs: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_545x39FMJ: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_545x39PSgs: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_545x39PPgs: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_545x39BTgs: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_545x39BPgs: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_545x39BSgs: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_556x45HP: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_556x45M856: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_556x45FMJ: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_556x45M855: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_556x45M856A1: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_556x45M855A1: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_556x45M995: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_A6_68SPC: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_762x39HP: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_762x39FMJ: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_762x39T45M1gzh: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_762x39PSgzh: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_762x39PPgzh: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_762x39BPgzh: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_762x39MAIAP: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_762x51BCPFMJ: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_762x51M80: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_762x51M62Tracer: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_762x51M61: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_762x51M993: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_762x54HPBT: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_762x54FMJ: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_762x54T46Mgzh: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_762x54LPSgzh: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_762x54PSgzh: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_762x54BTgzh: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_762x54SNBgzh: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_762x54BSgs: Ammunition_Base
	{
		count = 40;
	};
	class Ammo_A6_86BLK: Ammunition_Base
	{
		count = 20;
	};
	class Ammo_9x19AP63: Ammunition_Base
	{
		count = 50;
	};
	class Ammo_A6_46x30: Ammunition_Base
	{
		count=50;
	};
};
