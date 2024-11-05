class MassiveMod_Land_Wreck_C130J extends CrashBase
{
	//const ref array<string> 	SPAWN_ITEM_TYPE 		= {"MassiveMod_CrateTier5"};//item classnames
	//const ref array<int>		SPAWN_ITEM_COUNT 		= {Math.RandomIntInclusive(1,1)};//how many of each type
	//const ref array<float> 		SPAWN_ITEM_RAD_MIN 		= {10};//min distance the item will be spawned from the area position(epicenter)
	//const ref array<float> 		SPAWN_ITEM_RAD_MAX 		= {15};//max distance the item will be spawned from the area position(epicenter
	
	//ref _Event _registeredInstance = new _Event(this.GetType(), "plane", this);
	void MassiveMod_Land_Wreck_C130J()
	{
		if ( !GetGame().IsDedicatedServer() )
		{
			//m_ParticleEfx = ParticleManager.GetInstance().PlayOnObject(ParticleList.SMOKING_HELI_WRECK, this, Vector(10, -2.0, -5.0));
			m_ParticleEfx = ParticleManager.GetInstance().PlayOnObject(ParticleList.SMOKING_HELI_WRECK, this, Vector(-10, -2.0, -5.0));
			//m_ParticleEfx = ParticleManager.GetInstance().PlayOnObject(ParticleList.SMOKING_HELI_WRECK, this, Vector(-5, -2.0, -5.0));
			m_ParticleEfx = ParticleManager.GetInstance().PlayOnObject(ParticleList.SMOKING_HELI_WRECK, this, Vector(5, -2.0, -5.0));
		}
	}
	
	override string GetSoundSet()
	{
		return "C130_Close_SoundSet";
	}
	
	override void EEOnCECreate()
	{
		if ( GetGame().IsServer() )
		{	
	        vector curpos = GetPosition();
			Print("A " + GetType() + " at " + GetPosition());
		}
	}

//override void EEInit()
//	{
//		// We make sure we have the particle array
//		if ( !m_ToxicClouds )
//			m_ToxicClouds = new array<Particle>;
//		
//		// We set the values for dynamic area as these are not set through JSON and are standardized
//		m_Name = "Default Dynamic";
//		m_Radius = 120;
//		m_PositiveHeight = 7;
//		m_NegativeHeight = 10;
//		m_InnerRings = 1;
//		m_InnerSpacing = 40;
//		m_OuterSpacing = 30;
//		m_OuterRingOffset = 0;
//		m_Type = eZoneType.DYNAMIC;
//		m_TriggerType = "ContaminatedTrigger_Dynamic";
//		
//		SetSynchDirty();
//		
//		#ifdef DEVELOPER
//		// Debugs when placing entity by hand using internal tools
//		/*if ( GetGame().IsServer() && !GetGame().IsMultiplayer() )
//		{
//			Debug.Log("YOU CAN IGNORE THE FOLLOWING DUMP");
//			InitZone();
//			Debug.Log("YOU CAN USE FOLLOWING DATA PROPERLY");
//		}*/
//		#endif
//		
//		m_OffsetPos = GetPosition();
//		m_OffsetPos[1] = m_OffsetPos[1] + AIRBORNE_FX_OFFSET;
//		
//		// If a player arrives slightly later during the creation process we check if playing the flare FX is relevant
//		if ( m_DecayState == eAreaDecayStage.INIT )
//			PlayFlareVFX();
//		
//		if ( m_DecayState == eAreaDecayStage.LIVE )
//			InitZone(); // If it has already been created, we simply do the normal setup, no cool effects, force the LIVE state
//		else if ( GetGame().IsClient() && m_DecayState > eAreaDecayStage.LIVE )
//			InitZoneClient(); // Same as before but without state forcing
//		
//		super.EEInit();
//	}
	

   //override void EEInit()
   //{
   //    super.EEInit();
   //    if (!GetGame().IsServer())
   //        return;
   //
   //    vector position = GetPosition();
   //
   //    if (position[0] <= 0 && position[1] <= 0 && position[2] <= 0)
   //        return;
   //
   //    GetGameLabs().RegisterEvent(this._registeredInstance);
   //}
   //
   //override void EEDelete(EntityAI parent)
   //{
   //    super.EEDelete(parent);
   //
   //    if (!GetGame().IsServer())
   //        return;
   //
   //    if (!GetGameLabs())
   //        return;
   //
   //    if (this._registeredInstance)
   //        GetGameLabs().RemoveEvent(this._registeredInstance);
   //}
   
   //void InitZone()
	//{
	//	//Debug.Log("------------------------------------------");
	//	//Debug.Log( "We have created the zone : " + m_Name );
	//	
	//	m_Position = GetWorldPosition();
	//	
	//	if ( !GetGame().IsDedicatedServer() )
	//	{
	//		InitZoneClient();
	//	}
	//	
	//	if ( GetGame().IsServer() )
	//	{
	//		InitZoneServer();
	//	}
	//	
	//	//Debug.Log("------------------------------------------");
	//}
	//void InitZoneClient() {};
	//void InitZoneServer()
	//{
	//	super.InitZoneServer();
	//	
	//	SpawnItems();
	//	// We create the trigger on server
	//	if ( m_TriggerType != "" )
	//		CreateTrigger( m_Position, m_Radius );
	//}
	//
	//void SpawnItems()
	//{
	//	//Print("---------============ Spawning items at pos:"+m_Position);
	//	foreach (int j, string type:SPAWN_ITEM_TYPE)
	//	{
	//		//Print("----------------------------------");
	//		for (int i = 0; i < SPAWN_ITEM_COUNT[j]; i++)
	//		{
	//			vector randomDir2d = Vector(Math.RandomFloatInclusive(-1,1),0,Math.RandomFloatInclusive(-1,1)).Normalized();
	//			randomDir2d = Math.RandomFloatInclusive(SPAWN_ITEM_RAD_MIN[j],SPAWN_ITEM_RAD_MAX[j]) * randomDir2d;
	//			vector spawnPos = m_Position + randomDir2d;
	//			InventoryLocation il = new InventoryLocation;
	//			vector mat[4];
	//			Math3D.MatrixIdentity4(mat);
	//			mat[3] = spawnPos;
	//			il.SetGround(NULL, mat);
	//			//Print("Spawning item:"+ type + " at position:" + il.GetPos());
	//			GetGame().CreateObjectEx(type, il.GetPos(), ECE_PLACE_ON_SURFACE);
	//		}
	//	} 
	//}
}