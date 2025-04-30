class CfgPatches
{
	class A6_Base_Storage_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Sounds_Effects"
		};
	};
};
class CfgSoundShaders
{
	class base_SoundShaderFlies
	{
		range=20;
		rangeCurve="defaultLFECurve";
		volume=3;
	};
	class A6_VaultDoorOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{"DZ\sounds\environment\buildings\doors\metaljailslide\doormetaljailslideopen_1",1},
			{"DZ\sounds\environment\buildings\doors\metaljailslide\doormetaljailslideopen_2",1}
		};
	};
	class A6_VaultDoorClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{"DZ\sounds\environment\buildings\doors\metaljailslide\doormetaljailslideclose_1",1},
			{"DZ\sounds\environment\buildings\doors\metaljailslide\doormetaljailslideclose_2",1}
		};
	};
    class A6_Locker_Open_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{"DZ\sounds\environment\buildings\doors\metal\doorMetalSmallOpenABit_1",1},
			{"DZ\sounds\environment\buildings\doors\metal\doorMetalSmallOpenABit_2",1},
			{"DZ\sounds\environment\buildings\doors\metal\doorMetalSmallOpenABit_3",1}
		};
	};
	class A6_Locker_Close_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{"DZ\sounds\environment\buildings\doors\metalgate\doormetalgateclose_2",1}
		};
	};
    class A6_PlasticCrateOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{"DZ\sounds\characters\actions\items\smallprotectorcase\smallprotectorcase_drop",1}
		};
	};
    class A6_PlasticCrateClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{"DZ\sounds\environment\buildings\doors\woodgatesmall\doorwoodgatesmallclose_1",1}
		};
	};
    class A6_MedicalCabinetOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{"DZ\sounds\environment\buildings\doors\car\doorcarsmallopenabit_4",1}
		};
	};
};
class CfgSoundSets
{
	class base_SoundSet
	{
		sound3DProcessingType="defaultLFECurve";
		spatial=1;
		doppler=0;
		loop=0;
		volume=30;
	};
	class A6_VaultDoorOpen_SoundSet: base_SoundSet
	{
		frequencyFactor=0.7;
		soundShaders[]=
		{
			"A6_VaultDoorOpen_SoundShader"
		};
	};
	class A6_VaultDoorClose_SoundSet: base_SoundSet
	{
		frequencyFactor=0.7;
		soundShaders[]=
		{
			"A6_VaultDoorClose_SoundShader"
		};
	};
    class A6_Locker_Open_SoundSet: base_SoundSet
	{
		frequencyFactor=0.7;
		soundShaders[]=
		{
			"A6_Locker_Open_SoundShader"
		};
	};
	class A6_Locker_Close_SoundSet: base_SoundSet
	{
		frequencyFactor=0.7;
		soundShaders[]=
		{
			"A6_Locker_Close_SoundShader"
		};
	};
    class A6_PlasticCrateOpen_SoundSet: base_SoundSet
	{
		frequencyFactor=0.7;
		soundShaders[]=
		{
			"A6_PlasticCrateOpen_SoundShader"
		};
	};
    class A6_PlasticCrateClose_SoundSet: base_SoundSet
	{
		frequencyFactor=0.7;
		soundShaders[]=
		{
			"A6_PlasticCrateClose_SoundShader"
		};
	};
    class A6_MedicalCabinetOpen_SoundSet: base_SoundSet
	{
		frequencyFactor=0.7;
		soundShaders[]=
		{
			"A6_MedicalCabinetOpen_SoundShader"
		};
	};
};