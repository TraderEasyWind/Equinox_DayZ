class CfgPatches
{
	class HKG36_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgSoundShaders
{
	class closeShotRifle_SoundShader;
	class midShotRifle_SoundShader;
	class distShotRifle_SoundShader;	
	class G36C_SoundShaderClose: closeShotRifle_SoundShader
	{
		samples[]= {{"A6_Weapons\Rifles\G36\Sounds\G36C",1}};
		volume=1.0;
	};
	class G36C_SoundShaderMid: midShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\Rifles\G36\Sounds\G36C",1}};
		volume = 0.56234133;
	};
	class G36C_SoundShaderLong: distShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\Rifles\G36\Sounds\G36C",1}};
		volume=1.0;
	};
	class G36K_SoundShaderClose: closeShotRifle_SoundShader
	{
		samples[]= {{"A6_Weapons\Rifles\G36\Sounds\G36K",1}};
		volume=1.0;
	};
	class G36K_SoundShaderMid: midShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\Rifles\G36\Sounds\G36K",1}};
		volume = 0.56234133;
	};
	class G36K_SoundShaderLong: distShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\Rifles\G36\Sounds\G36K",1}};
		volume=1.0;
	};
	class G36_SoundShaderClose: closeShotRifle_SoundShader
	{
		samples[]= {{"A6_Weapons\Rifles\G36\Sounds\G36",1}};
		volume=1.0;
	};
	class G36_SoundShaderMid: midShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\Rifles\G36\Sounds\G36",1}};
		volume = 0.56234133;
	};
	class G36_SoundShaderLong: distShotRifle_SoundShader
	{
		samples[]={{"A6_Weapons\Rifles\G36\Sounds\G36",1}};
		volume=1.0;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class G36C_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"G36C_SoundShaderClose","G36C_SoundShaderMid","G36C_SoundShaderLong"};
	};
	class G36K_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"G36K_SoundShaderClose","G36K_SoundShaderMid","G36K_SoundShaderLong"};
	};
	class G36_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"G36_SoundShaderClose","G36_SoundShaderMid","G36_SoundShaderLong"};
	};
};
