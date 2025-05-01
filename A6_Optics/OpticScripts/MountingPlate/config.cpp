class CfgPatches
{
	class A6_MRDMount
	{
		units[] = {"A6_MRDMount"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class A6_MRDMount: Inventory_Base
	{
		scope = 2;
		displayName = "MRD Picatinny Mount Plate";
		descriptionShort = "Mounting plate for MRD applications ( Pistol Optics ) that allow the MRD to mount to picatinny applications.";
		model = "A6_Optics\Optics\MountingPlate\MRDMount.p3d";
		rotationFlags = 16;
		weight = 250;
		itemSize[] = {1,1};
		soundImpactType = "metal";
		MountName = "MRDMount";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"A6_Optics\Optics\DocterOptic\data\Mount_MRD.rvmat"}},
						{0.7,{"A6_Optics\Optics\DocterOptic\data\Mount_MRD.rvmat"}},
						{0.5,{"A6_Optics\Optics\DocterOptic\data\Mount_MRD_damage.rvmat"}},
						{0.3,{"A6_Optics\Optics\DocterOptic\data\Mount_MRD_damage.rvmat"}},
						{0.0,{"A6_Optics\Optics\DocterOptic\data\Mount_MRD_destruct.rvmat"}}
					};
				};
			};
		};
	};	
};	