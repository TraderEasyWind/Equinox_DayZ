class MassiveMod_StaticFire_Light  extends PointLightBase
{
	static float m_FireRadius = 15;
	static float m_FireBrightness = 4.75;
	static string m_MemoryPoint = "bonfire_fire";
	
	void MassiveMod_StaticFire_Light()
	{
		SetVisibleDuringDaylight(true);
		SetRadiusTo(m_FireRadius);
		SetBrightnessTo(m_FireBrightness);
		SetCastShadow(false);
		SetFadeOutTime(1);
		SetDiffuseColor(1.0, 0.45, 0.25);
		SetAmbientColor(1.0, 0.45, 0.25);
		SetFlareVisible(false);
		SetFlickerAmplitude(0.55);
		SetFlickerSpeed(0.75);
		SetDancingShadowsMovementSpeed(0.1);
		SetDancingShadowsAmplitude(0.03);
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
class MassiveMod_Floursecent_Light  extends PointLightBase
{
	static float m_FireRadius = 10;
	static float m_FireBrightness = 4.75;
	static string m_MemoryPoint = "bonfire_fire";
	
	void MassiveMod_Floursecent_Light()
	{
		SetVisibleDuringDaylight(true);
		SetRadiusTo(m_FireRadius);
		SetBrightnessTo(m_FireBrightness);
		SetCastShadow(true);
		SetFadeOutTime(5);
		SetDiffuseColor(1.0, 1.0, 1.0);
		SetAmbientColor(1.0, 1.0, 1.0);
		SetFlareVisible(false);
		SetFlickerAmplitude(0.3);
		SetFlickerSpeed(0.9);
		SetExteriorMode();
		EnableHeatHaze(false);
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
class MassiveMod_Floursecent_LightRed  extends PointLightBase
{	
    static float m_FireRadius = 5;
	static float m_FireBrightness = 2.75;
	static string m_MemoryPoint = "bonfire_fire";
	
	void MassiveMod_Floursecent_LightRed()
	{
		SetVisibleDuringDaylight(true);
		SetRadiusTo(m_FireRadius);
		SetBrightnessTo(m_FireBrightness);
		SetCastShadow(true);
		SetFadeOutTime(5);
		SetDiffuseColor(1.0, 0.2, 0.2);
		SetAmbientColor(1.0, 0.2, 0.2);
		SetFlareVisible(false);
		SetFlickerAmplitude(0.3);
		SetFlickerSpeed(0.9);
		SetExteriorMode();
		EnableHeatHaze(false);
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
class MassiveMod_Floursecent_LightBlue  extends PointLightBase
{	
    static float m_FireRadius = 5;
	static float m_FireBrightness = 2.75;
	static string m_MemoryPoint = "bonfire_fire";
	
	void MassiveMod_Floursecent_LightBlue()
	{
		SetVisibleDuringDaylight(true);
		SetRadiusTo(m_FireRadius);
		SetBrightnessTo(m_FireBrightness);
		SetCastShadow(true);
		SetFadeOutTime(5);
		SetDiffuseColor(0.2, 0.2, 1.0);
		SetAmbientColor(0.2, 0.2, 1.0);
		SetFlareVisible(false);
		SetFlickerAmplitude(0.3);
		SetFlickerSpeed(0.9);
		SetExteriorMode();
		EnableHeatHaze(false);
		SetHeatHazeRadius(0.23);
		SetHeatHazePower(0.010);
	}
	
	override void OnFrameLightSource(IEntity other, float timeSlice)
	{
		
	}
	
	void SetInteriorMode()
	{
		SetDancingShadowsMovementSpeed(0.0);
		SetDancingShadowsAmplitude(0.0);
	}
	
	// Use this mode when fireplace is on the ground with plenty of space for the light to wiggle around
	void SetExteriorMode()
	{
		SetDancingShadowsMovementSpeed(0.0);
		SetDancingShadowsAmplitude(0.0);
	}
};
class MassiveMod_Static_Fire_Object extends BuildingSuper
{
	const float TIMER_HEATING_UPDATE_INTERVAL		= 2;
	const float PARAM_HEAT_RADIUS					= 15;
	const float PARAM_FULL_HEAT_RADIUS				= 5;
	const float	PARAM_MAX_TRANSFERED_TEMPERATURE	= 25;		//! maximum value for temperature that will be transfered to player (environment)
	const float CONST_FIRE_TEMP						= 1000;
    const string OBJECT_CLUTTER_CUTTER 	= "ClutterCutter6x6";
	protected Object m_ClutterCutter;
	
	protected MassiveMod_StaticFire_Light m_Light;
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
			m_Light = MassiveMod_StaticFire_Light.Cast(ScriptedLightBase.CreateLight(MassiveMod_StaticFire_Light, Vector(0,0,0), 1));
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
class MassiveMod_Floursecent_Light_Object extends BuildingSuper
{
	const float TIMER_HEATING_UPDATE_INTERVAL		= 2;
	const float PARAM_HEAT_RADIUS					= 15;
	const float PARAM_FULL_HEAT_RADIUS				= 5;
	const float	PARAM_MAX_TRANSFERED_TEMPERATURE	= 25;		//! maximum value for temperature that will be transfered to player (environment)
	const float CONST_FIRE_TEMP						= 1000;
    const string OBJECT_CLUTTER_CUTTER 	= "ClutterCutter6x6";
	protected Object m_ClutterCutter;
	
	protected MassiveMod_Floursecent_Light m_Light;
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
			m_Light = MassiveMod_Floursecent_Light.Cast(ScriptedLightBase.CreateLight(MassiveMod_Floursecent_Light, Vector(0,0,0), 1));
			m_Light.AttachOnMemoryPoint(this, m_Light.m_MemoryPoint);
			m_Light.FadeBrightnessTo(m_Light.m_FireBrightness, 0);
			m_Light.FadeRadiusTo(m_Light.m_FireRadius, 0);
		}
		
	      	// particles
	      //	if (!m_ParticleSmoke)
	      //	{
	      //		m_ParticleSmoke = ParticleManager.GetInstance().PlayOnObject(ParticleList.CAMP_SMALL_SMOKE, this, GetMemoryPointPos("bonfire_smoke"), Vector(0,0,0), true);
	      //	}
	      //
	      //	if (!m_ParticleFire)
	      //	{
	      //		m_ParticleFire = ParticleManager.GetInstance().PlayOnObject(ParticleList.CAMP_SMALL_FIRE, this, GetMemoryPointPos("bonfire_fire"), Vector(0,0,0), true);
	      //	}
	      //	
	      //	// sounds
	      //	if (!m_SoundFireLoop)
	      //	{
	      //		PlaySoundSetLoop(m_SoundFireLoop, "LightFire_SoundSet", 1.0, 2.0);
	      //	}
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
class MassiveMod_Floursecent_Light_ObjectRed extends BuildingSuper
{
	const float TIMER_HEATING_UPDATE_INTERVAL		= 2;
	const float PARAM_HEAT_RADIUS					= 15;
	const float PARAM_FULL_HEAT_RADIUS				= 5;
	const float	PARAM_MAX_TRANSFERED_TEMPERATURE	= 25;		//! maximum value for temperature that will be transfered to player (environment)
	const float CONST_FIRE_TEMP						= 1000;
    const string OBJECT_CLUTTER_CUTTER 	= "ClutterCutter6x6";
	protected Object m_ClutterCutter;
	
	protected MassiveMod_Floursecent_LightRed m_Light;
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
			m_Light = MassiveMod_Floursecent_LightRed.Cast(ScriptedLightBase.CreateLight(MassiveMod_Floursecent_LightRed, Vector(0,0,0), 1));
			m_Light.AttachOnMemoryPoint(this, m_Light.m_MemoryPoint);
			m_Light.FadeBrightnessTo(m_Light.m_FireBrightness, 0);
			m_Light.FadeRadiusTo(m_Light.m_FireRadius, 0);
		}
		
	      	// particles
	      //	if (!m_ParticleSmoke)
	      //	{
	      //		m_ParticleSmoke = ParticleManager.GetInstance().PlayOnObject(ParticleList.CAMP_SMALL_SMOKE, this, GetMemoryPointPos("bonfire_smoke"), Vector(0,0,0), true);
	      //	}
	      //
	      //	if (!m_ParticleFire)
	      //	{
	      //		m_ParticleFire = ParticleManager.GetInstance().PlayOnObject(ParticleList.CAMP_SMALL_FIRE, this, GetMemoryPointPos("bonfire_fire"), Vector(0,0,0), true);
	      //	}
	      //	
	      //	// sounds
	      //	if (!m_SoundFireLoop)
	      //	{
	      //		PlaySoundSetLoop(m_SoundFireLoop, "LightFire_SoundSet", 1.0, 2.0);
	      //	}
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
class MassiveMod_Floursecent_Light_ObjectBlue extends BuildingSuper
{
	const float TIMER_HEATING_UPDATE_INTERVAL		= 2;
	const float PARAM_HEAT_RADIUS					= 15;
	const float PARAM_FULL_HEAT_RADIUS				= 5;
	const float	PARAM_MAX_TRANSFERED_TEMPERATURE	= 25;		//! maximum value for temperature that will be transfered to player (environment)
	const float CONST_FIRE_TEMP						= 1000;
    const string OBJECT_CLUTTER_CUTTER 	= "ClutterCutter6x6";
	protected Object m_ClutterCutter;
	
	protected MassiveMod_Floursecent_LightBlue m_Light;
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
			m_Light = MassiveMod_Floursecent_LightBlue.Cast(ScriptedLightBase.CreateLight(MassiveMod_Floursecent_LightBlue, Vector(0,0,0), 1));
			m_Light.AttachOnMemoryPoint(this, m_Light.m_MemoryPoint);
			m_Light.FadeBrightnessTo(m_Light.m_FireBrightness, 0);
			m_Light.FadeRadiusTo(m_Light.m_FireRadius, 0);
		}
		
	      	// particles
	      //	if (!m_ParticleSmoke)
	      //	{
	      //		m_ParticleSmoke = ParticleManager.GetInstance().PlayOnObject(ParticleList.CAMP_SMALL_SMOKE, this, GetMemoryPointPos("bonfire_smoke"), Vector(0,0,0), true);
	      //	}
	      //
	      //	if (!m_ParticleFire)
	      //	{
	      //		m_ParticleFire = ParticleManager.GetInstance().PlayOnObject(ParticleList.CAMP_SMALL_FIRE, this, GetMemoryPointPos("bonfire_fire"), Vector(0,0,0), true);
	      //	}
	      //	
	      //	// sounds
	      //	if (!m_SoundFireLoop)
	      //	{
	      //		PlaySoundSetLoop(m_SoundFireLoop, "LightFire_SoundSet", 1.0, 2.0);
	      //	}
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
class MassiveModStaticChemlight_ColorBase : ItemBase
{
	MassiveMod_StaticStaticChemlightLight 			m_Light;
	
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	
	override bool CanReceiveItemIntoHands (EntityAI item_to_hands)
	{
		return false;
	}
	
	override bool CanSaveItemInHands (EntityAI item_in_hands)
	{
		return false;
	}
	
	override bool CanPutIntoHands (EntityAI parent)
	{
		super.CanPutIntoHands( parent );	
		return false;
	}
	
	override bool IsInventoryVisible()
	{
        return false;
	}
	
	override void EEInit()
	{
		super.EEInit();
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(CreateLight, 5000, false);
	}
	
	void CreateLight()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // client side
		{
			m_Light = MassiveMod_StaticStaticChemlightLight.Cast( ScriptedLightBase.CreateLight( MassiveMod_StaticStaticChemlightLight, "0 0 0") );
			m_Light.AttachOnMemoryPoint(this, "light");
			
			string type = GetType();
			
			switch( type )
			{
				case "Massivemod_StaticChemlight_White": 
					m_Light.SetColorToWhite();
					break;
				case "MassiveMod_StaticChemlight_Red": 
					m_Light.SetColorToRed();
					break;
				case "MassiveMod_StaticChemlight_Green": 
					m_Light.SetColorToGreen();
					break;
				case "MassiveMod_StaticChemlight_Blue": 
					m_Light.SetColorToBlue();
					break;
				case "MassiveMod_StaticChemlight_Yellow": 
					m_Light.SetColorToYellow();
					break;
					
				default: { m_Light.SetColorToWhite(); };
			}
		}
	}
};

class Massivemod_StaticChemlight_White: MassiveModStaticChemlight_ColorBase {};
class MassiveMod_StaticChemlight_Red: MassiveModStaticChemlight_ColorBase {};
class MassiveMod_StaticChemlight_Green: MassiveModStaticChemlight_ColorBase {};
class MassiveMod_StaticChemlight_Blue: MassiveModStaticChemlight_ColorBase {};
class MassiveMod_StaticChemlight_Yellow: MassiveModStaticChemlight_ColorBase {};
class MassiveMod_StaticStaticChemlightLight extends PointLightBase
{
	private static float m_DefaultBrightness = 2.75;
	private static float m_DefaultRadius = 5;
	
	void MassiveMod_StaticStaticChemlightLight()
	{
		SetVisibleDuringDaylight(false);
		SetRadiusTo(m_DefaultRadius);
		SetBrightnessTo(m_DefaultBrightness);
		FadeIn(1);
		SetFadeOutTime(2);
		SetFlareVisible(false);
	}
	
	void SetIntensity( float coef, float time )
	{
		FadeBrightnessTo(m_DefaultBrightness * coef, time);
		FadeRadiusTo(m_DefaultRadius * coef, time);
	}
	
	void SetColorToWhite()
	{
		SetAmbientColor(0.9, 0.9, 1.0);
		SetDiffuseColor(0.9, 0.9, 1.0);
	}
	
	void SetColorToRed()
	{
		SetAmbientColor(1.0, 0.3, 0.2);
		SetDiffuseColor(1.0, 0.3, 0.2);
	}
	
	void SetColorToGreen()
	{
		SetAmbientColor(0.3, 1.0, 0.2);
		SetDiffuseColor(0.3, 1.0, 0.2);
	}
	
	void SetColorToBlue()
	{
		SetAmbientColor(0.3, 0.3, 1.0);
		SetDiffuseColor(0.3, 0.3, 1.0);
	}
	
	void SetColorToYellow()
	{
		SetAmbientColor(1.0, 1.0, 0.3);
		SetDiffuseColor(1.0, 1.0, 0.3);
	}
}