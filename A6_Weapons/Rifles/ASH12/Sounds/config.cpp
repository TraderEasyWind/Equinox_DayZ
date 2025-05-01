class CfgPatches
{
	class ASH12_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Effects"
		};
	};
};
class CfgSoundShaders
{
	class closeShotRifle_SoundShader;
	class midShotRifle_SoundShader;
	class distShotRifle_SoundShader;
	class tailDistantRifle_SoundShader;
	class tailForestRifle_SoundShader;
	class tailHousesRifle_SoundShader;
	class tailInteriorRifle_SoundShader;
	class tailMeadowsRifle_SoundShader;
	class tailTreesRifle_SoundShader;
		
	class PolarExpress_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_close_shot_01",
				1
			},
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_close_shot_02",
				1
			},
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_close_shot_03",
				1
			}
		};
		volume=1.1220185;
	};
	class PolarExpress_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_mid_shot_01",
				1
			},
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_mid_shot_02",
				1
			},
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_mid_shot_03",
				1
			}
		};
		volume=0.44668359;
	};
	class PolarExpress_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_dist_shot_01",
				1
			},
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_dist_shot_02",
				1
			},
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_dist_shot_03",
				1
			}
		};
		volume=0.70794576;
	};
	class PolarExpress_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_tail_distant",
				1
			}
		};
		volume=1.7782794;
	};
	class PolarExpress_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_tail_forest",
				1
			}
		};
	};
	class PolarExpress_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_tail_houses",
				1
			}
		};
	};
	class PolarExpress_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_tail_interior",
				1
			}
		};
	};
	class PolarExpress_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_tail_meadows",
				1
			}
		};
	};
	class PolarExpress_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[]=
		{
			
			{
				"A6_Weapons\Rifles\ASH12\Sounds\PolarExpress_tail_trees",
				1
			}
		};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	
	class PolarExpress_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"PolarExpress_closeShot_SoundShader",
			"PolarExpress_midShot_SoundShader",
			"PolarExpress_distShot_SoundShader",
			"PolarExpress_Closure_SoundShader"
		};
	};
	class PolarExpress_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"PolarExpress_tailDistant_SoundShader",
			"PolarExpress_tailTrees_SoundShader",
			"PolarExpress_tailForest_SoundShader",
			"PolarExpress_tailMeadows_SoundShader",
			"PolarExpress_tailHouses_SoundShader"
		};
	};
	class PolarExpress_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"PolarExpress_tailInterior_SoundShader"
		};
	};
};