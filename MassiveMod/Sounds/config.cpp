class CfgPatches
{
	//This was given to me by inclement dab himself because I gave him the idea for the mod.
	class CreatorZ_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Effects"};
		author = "InclementDab";
		name = "CreatorZ Sound FX";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
    class CZ_SoundShader_Base
    {
        volume = 3;
		range = 7.5;
        radius = 1.5;
    };
	class C130CrashDistantAttenuationCurve
	{
		points[]=
		{
			{0,1},
			{2500,0.80000001},
			{3700,0.5},
			{4200,0.2},
			{5000,0.1}
		};
	};
	class C130_Base_SoundSet
	{
		volumeFactor=1;
		frequencyRandomizer=1;
		spatial=1;
		doppler=0;
		loop=0;
		volumeCurve="C130CrashDistantAttenuationCurve";
		distanceFilter="explosionDistanceFreqAttenuationFilter";
		sound3DProcessingType="ThunderNear3DProcessingType";
	};
	class C130_Close_SoundSet: C130_Base_SoundSet
	{
		soundShaders[]=
		{
			"C130Crash_Distant_SoundShader"
		};
	};
	class C130Crash_Distant_SoundShader
	{
		samples[]=
		{
			
			{
				"MassiveMod\Sounds\eventsounds\C130Crash_Distant_1",
				1
			},
		};
		volume=1;
		range=5000;
	};
	class CZ_ShotgunShell_Move_SoundShader: CZ_SoundShader_Base
    {
		volume = 1; // Too loud otherwise
        samples[] = 
        {
            {"DZ\sounds\weapons\shells\shell_12ga_default_1", 1},
            {"DZ\sounds\weapons\shells\shell_12ga_default_2", 1},
            {"DZ\sounds\weapons\shells\shell_12ga_default_3", 1},
            {"DZ\sounds\weapons\shells\shell_12ga_default_4", 1},
			{"DZ\sounds\weapons\shells\shell_12ga_default_5", 1}
        };
    };
	
	class CZ_Bullet_Move_SoundShader: CZ_SoundShader_Base
    {
        samples[] = 
        {
            {"DZ\sounds\weapons\firearms\magnum\handling\magnum_bullet_in_01", 1},
            {"DZ\sounds\weapons\firearms\magnum\handling\magnum_bullet_in_02", 1},
			{"DZ\sounds\weapons\firearms\magnum\handling\magnum_bullet_in_03", 1},
			{"DZ\sounds\weapons\firearms\magnum\handling\magnum_bullet_in_04", 1},
			{"DZ\sounds\weapons\firearms\magnum\handling\magnum_bullet_in_05", 1}
			// This is srsly the only sounds that fit to bullets moving
        };
    };
	
	
    class CZ_Item_Move_Small_SoundShader: CZ_SoundShader_Base
    {
        samples[] = 
        {
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_1", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_2", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_3", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_4", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_5", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_6", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_7", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\runErc_8", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_1", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_2", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_3", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_4", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_5", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_6", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_7", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\small\sprintErc_8", 1}
        };
    };

    class CZ_Item_Move_Regular_SoundShader: CZ_SoundShader_Base
    {
        range = 13.5;
        samples[] = 
        {
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_1", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_2", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_3", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_4", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_5", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_6", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_7", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\runErc_8", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_1", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_2", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_3", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_4", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_5", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_6", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_7", 1},
            {"DZ\sounds\Characters\movement\attachment\Backpack\military\sprintErc_8", 1}
        };
    };
	class UnlockVehiclePart_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			
			{
				"MassiveMod\Sounds\othersounds\UnlockVehiclePart_loop",
				1
			}
		};
		volume=0.3;
	};
};
class CfgSoundSets
{
    class CZ_SoundSet_Base
    {
		sound3DProcessingType = "character3DProcessingType";
		volumeCurve = "characterAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
        distanceFilter = "defaultDistanceFilter";
    };
	class baseCharacter_SoundSet;
	class UnlockVehiclePart_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"UnlockVehiclePart_loop_Soundshader"
		};
	};
	class CZ_ShotgunShell_Move_Smoll: CZ_SoundSet_Base
    {
        soundShaders[] = {"CZ_ShotgunShell_Move_SoundShader"};
    };
	
	class CZ_Bullet_Move_Smoll: CZ_SoundSet_Base
    {
        soundShaders[] = {"CZ_Bullet_Move_SoundShader"};
    };

    class CZ_Item_Move_Small: CZ_SoundSet_Base
    {
        soundShaders[] = {"CZ_Item_Move_Small_SoundShader"};
    };
    
    class CZ_Item_Move_Regular: CZ_SoundSet_Base
    {
        soundShaders[] = {"CZ_Item_Move_Regular_SoundShader"};
    };
};
class CfgSoundTables
{
	class CfgActionsSoundTables
	{
		class Craft_LookupTable
		{
			class UnlockVehiclePart_loop
			{
				category="UnlockVehiclePart";
				soundSets[]=
				{
					"UnlockVehiclePart_loop_SoundSet"
				};
			};
		};
	};
};
