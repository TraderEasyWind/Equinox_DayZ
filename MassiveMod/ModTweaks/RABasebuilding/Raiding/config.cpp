class CfgPatches
{
	class MassiveMod_ModTweaks_RABasebuilding
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"Rearmed_BaseBuilding",
			"DZ_Weapons_Explosives",
			"RA_BreachingCharge_Improvised"
        };
	};
};
class CfgVehicles
{
	class ExplosivesBase;
	class RA_Improvised_C4;
	class MassiveMod_Plastic_ExplosiveBundle: ExplosivesBase
	{
		scope=2;
		displayName="Bundled Explosives";
		descriptionShort="Plastic explosives bundled together. I should combine this with a burlap sack ";
		model="MassiveMod\ModTweaks\RABasebuilding\Raiding\Data\Bundled_Explosives.p3d";
		weight=800;
		itemSize[]={3,2};
		itemBehaviour=1;
		slopeTolerance=0.5;
		alignHologramToTerain=1;
		yawPitchRollLimit[]={20,20,20};
		hologramMaterial="plastic_explosive";
		hologramMaterialPath="dz\weapons\explosives\data";
		projectionTypename="Plastic_Explosive_Placing";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						{
							1,
							{}
						},
						{
							0.69999999,
							{}
						},
						{
							0.5,
							{}
						},
						{
							0.30000001,
							{}
						},
						{
							0,
							{}
						}
					};
				};
			};
		};
	};
	class MassiveMod_UnfinishedExplosives: ExplosivesBase
	{
		scope=2;
		displayName="Wrapped Explosive Bundle";
		descriptionShort="Plastic explosives bundled together and wrapped in burlap. I need to make a detonator.";
		model="MassiveMod\ModTweaks\RABasebuilding\Raiding\Data\UnfinishedExplosives.p3d";
		weight=900;
		itemSize[]={3,2};
		itemBehaviour=1;
		slopeTolerance=0.5;
		alignHologramToTerain=1;
		yawPitchRollLimit[]={20,20,20};
		hologramMaterial="plastic_explosive";
		hologramMaterialPath="dz\weapons\explosives\data";
		projectionTypename="Plastic_Explosive_Placing";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						{
							1,
							{}
						},
						{
							0.69999999,
							{}
						},
						{
							0.5,
							{}
						},
						{
							0.30000001,
							{}
						},
						{
							0,
							{}
						}
					};
				};
			};
		};
	};
	class MassiveMod_UnwiredExplosives: ExplosivesBase
	{
		scope=2;
		displayName="Unwired Satchel Charge";
		descriptionShort="Plastic explosives bundled together and wrapped in burlap, Paired with an improvised detonation unit. I need to wire this up with a electronic repair kit.";
		model="MassiveMod\ModTweaks\RABasebuilding\Raiding\Data\FinishedExplosives.p3d";
		weight=1000;
		itemSize[]={3,2};
		itemBehaviour=1;
		slopeTolerance=0.5;
		alignHologramToTerain=1;
		yawPitchRollLimit[]={20,20,20};
		hologramMaterial="plastic_explosive";
		hologramMaterialPath="dz\weapons\explosives\data";
		projectionTypename="Plastic_Explosive_Placing";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						{
							1,
							{}
						},
						{
							0.69999999,
							{}
						},
						{
							0.5,
							{}
						},
						{
							0.30000001,
							{}
						},
						{
							0,
							{}
						}
					};
				};
			};
		};
	};
	class MassiveMod_FinishedExplosive: RA_Improvised_C4
	{
		scope=2;
		displayName="Improvised Satchel Charge";
		descriptionShort="An improvised satchel charge. This might be powerful enough to raid with. ";
		model="MassiveMod\ModTweaks\RABasebuilding\Raiding\Data\FinishedExplosives.p3d";
		weight=1000;
		itemSize[]={3,2};
		itemBehaviour=1;
		slopeTolerance=0.5;
		alignHologramToTerain=1;
		yawPitchRollLimit[]={20,20,20};
		hologramMaterial="plastic_explosive";
		hologramMaterialPath="dz\weapons\explosives\data";
		projectionTypename="Plastic_Explosive_Placing";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						{
							1,
							{}
						},
						{
							0.69999999,
							{}
						},
						{
							0.5,
							{}
						},
						{
							0.30000001,
							{}
						},
						{
							0,
							{}
						}
					};
				};
			};
		};
	};
};