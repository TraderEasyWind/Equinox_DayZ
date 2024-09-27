class MassiveMod_SurvivorCamp extends BuildingSuper
{
	const float TIMER_HEATING_UPDATE_INTERVAL		= 2;
	const float PARAM_HEAT_RADIUS					= 15;
	const float PARAM_FULL_HEAT_RADIUS				= 5;
	const float	PARAM_MAX_TRANSFERED_TEMPERATURE	= 25;		//! maximum value for temperature that will be transfered to player (environment)
	const float CONST_FIRE_TEMP						= 1000;
    const string OBJECT_CLUTTER_CUTTER 	= "ClutterCutter6x6";
	protected Object m_ClutterCutter;
	
	protected SurvivorCampFire m_Light;
	protected float m_LightDistance 				= 2000;
	protected Particle 			m_ParticleFire;
	protected Particle 			m_ParticleSmoke;
	protected EffectSound 		m_SoundFireLoop;
	
	//Heating related variables
	protected ref Timer m_HeatingTimer;					//! DEPRECATED
	
	// UniversalTemperatureSource
	protected ref UniversalTemperatureSource m_UTSource;
	protected ref UniversalTemperatureSourceSettings m_UTSSettings;
	protected ref UniversalTemperatureSourceLambdaConstant m_UTSLFireplace;
	
	override void EEInit()
	{
		super.EEInit();
		GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater(this.ClutterCutter, 1000);
		#ifndef SERVER
		// object creation - create effects (light, particles, sound)
		
		// light
		if (!m_Light)
		{
			m_Light = SurvivorCampFire.Cast(ScriptedLightBase.CreateLight(SurvivorCampFire, Vector(0,0,0), 1));
			m_Light.AttachOnMemoryPoint(this, m_Light.m_MemoryPoint);
			m_Light.FadeBrightnessTo(m_Light.m_FireBrightness, 0);
			m_Light.FadeRadiusTo(m_Light.m_FireRadius, 0);
		}
		
		// particles
		if (!m_ParticleSmoke)
		{
			m_ParticleSmoke = ParticleManager.GetInstance().PlayOnObject(ParticleList.CAMP_SMALL_SMOKE, this, GetMemoryPointPos("bonfire_smoke"), Vector(0,0,0), true);
		}

		if (!m_ParticleFire)
		{
			m_ParticleFire = ParticleManager.GetInstance().PlayOnObject(ParticleList.CAMP_SMALL_FIRE, this, GetMemoryPointPos("bonfire_fire"), Vector(0,0,0), true);
		}
		
		// sounds
		if (!m_SoundFireLoop)
		{
			PlaySoundSetLoop(m_SoundFireLoop, "LightFire_SoundSet", 1.0, 2.0);
		}
		#endif
		
		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
 			m_UTSSettings 					= new UniversalTemperatureSourceSettings();
			m_UTSSettings.m_UpdateInterval	= TIMER_HEATING_UPDATE_INTERVAL;
			m_UTSSettings.m_Updateable		= true;
			m_UTSSettings.m_TemperatureMin	= 0;
			m_UTSSettings.m_TemperatureMax	= CONST_FIRE_TEMP;
			m_UTSSettings.m_TemperatureCap	= PARAM_MAX_TRANSFERED_TEMPERATURE;
			m_UTSSettings.m_RangeFull		= PARAM_FULL_HEAT_RADIUS;
			m_UTSSettings.m_RangeMax		= PARAM_HEAT_RADIUS;
			
			m_UTSLFireplace 					= new UniversalTemperatureSourceLambdaConstant();
			m_UTSource 						= new UniversalTemperatureSource(this, m_UTSSettings, m_UTSLFireplace);
			m_UTSource.SetActive(true);
		}	
	}
	
	void ClutterCutter( Man player, vector position = "0 0 0", vector orientation = "0 0 0" )
	{
		if ( GetGame().IsServer() )
		{
			//remove grass
			Object cc_object = GetGame().CreateObjectEx( OBJECT_CLUTTER_CUTTER , position, ECE_PLACE_ON_SURFACE );
			cc_object.SetOrientation( orientation );
			GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( GetGame().ObjectDelete, 1000, false, cc_object );
		}
	};

	override void EEDelete(EntityAI parent)
	{
		super.EEDelete(parent);

		#ifndef SERVER
		// outside of bubble - do effects cleanup (light, particles, sound)
		
		// light
		if (m_Light)
		{
			m_Light.FadeOut();
		}
		
		// particles 
		if (m_ParticleSmoke)
		{
			m_ParticleSmoke.Stop();
		}

		if (m_ParticleFire)
		{
			m_ParticleFire.Stop();
		}
			
		// sounds 
		if (m_SoundFireLoop)
		{
			m_SoundFireLoop.SoundStop();
		}
		#endif
		
		if (GetGame().IsServer() || !GetGame().IsMultiplayer())
		{
			m_UTSource.SetActive(false);
		}
	}	
	
	//! DEPRECATED
	protected void BonfireHeating() {};
}
class MassiveMod_SurvivorCampImprov : MassiveMod_SurvivorCamp{}
class SurvivorCampFire extends PointLightBase
{
	static float m_FireRadius = 25;
	static float m_FireBrightness = 4.75;
	static string m_MemoryPoint = "bonfire_fire";
	
	void SurvivorCampFire()
	{
		SetVisibleDuringDaylight(false);
		SetRadiusTo(m_FireRadius);
		SetBrightnessTo(m_FireBrightness);
		SetCastShadow(true);
		SetFadeOutTime(5);
		SetDiffuseColor(1.0, 0.5, 0.3);
		SetAmbientColor(1.0, 0.5, 0.3);
		SetFlareVisible(false);
		SetFlickerAmplitude(0.3);
		SetFlickerSpeed(0.9);
		SetExteriorMode();
		EnableHeatHaze(true);
		SetHeatHazeRadius(0.23);
		SetHeatHazePower(0.010);
	}
	
	override void OnFrameLightSource(IEntity other, float timeSlice)
	{
		
	}
	
	void SetInteriorMode()
	{
		SetDancingShadowsMovementSpeed(0.05);
		SetDancingShadowsAmplitude(0.05);
	}
	
	// Use this mode when fireplace is on the ground with plenty of space for the light to wiggle around
	void SetExteriorMode()
	{
		SetDancingShadowsMovementSpeed(0.25);
		SetDancingShadowsAmplitude(0.10);
	}
};