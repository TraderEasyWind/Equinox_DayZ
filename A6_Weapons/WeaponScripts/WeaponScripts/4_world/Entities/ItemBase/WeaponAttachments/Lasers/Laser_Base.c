class A6_Laser_Base extends A6_Switchable_Base {
	protected A6_Laser_Beam m_Laser_Beam;
	protected ref Timer m_LaserTimer = new Timer(CALL_CATEGORY_GAMEPLAY);
	protected bool m_IRToggle = false;
	void A6_Laser_Base() {
		RegisterNetSyncVariableBool("m_IRToggle");
	}
	void ~A6_Laser_Base() {
		if (g_Game) {
			g_Game.ObjectDelete(m_Laser_Beam);
		}
		delete m_LaserTimer;
	}
	override void EEItemLocationChanged(notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc) {
		if (m_Laser_Beam) {
			RemoveChild(m_Laser_Beam);
			g_Game.ObjectDelete(m_Laser_Beam);
		}
		m_LaserTimer.Stop();
		if (GetCompEM().IsWorking()) {
			GetCompEM().SwitchOff();
		}
		super.EEItemLocationChanged(oldLoc, newLoc);
	}
	void KillLaser(){
		if (!m_Laser_Beam)
			return;
		m_Laser_Beam.SetObjectTexture(0,HideLaser());
	}
	override void OnWorkStart() {
		super.OnWorkStart();
		if (g_Game.IsServer()) {
			return;
		}
		m_Laser_Beam = A6_Laser_Beam.Cast(g_Game.CreateObjectEx("A6_Laser_Beam", GetMemoryPointPos("beamStart"), ECE_LOCAL));
		if (!m_Laser_Beam) {
			return;
		}
		AddChild(m_Laser_Beam, -1);
		m_LaserTimer.Run(0.005, this, "UpdateLaser", null, true);
	}
	override void OnWorkStop() {
		super.OnWorkStop();
		if (g_Game.IsServer()) {
			return;
		}
		if (!m_Laser_Beam) {
			return;
		}
		RemoveChild(m_Laser_Beam);
		g_Game.ObjectDelete(m_Laser_Beam);
		m_LaserTimer.Stop();
	}
	void UpdateLaser() {
		if (!m_Laser_Beam)
			return;
		if (!IsVisibleWithoutNVGCamera()) {
			if (!CheckForNVGCamera())
				m_Laser_Beam.SetObjectTexture(0,HideLaser());
			else
				IRToggleTextureHandler();
		} else {
			if (CheckForNVGCamera())
				m_Laser_Beam.SetObjectTexture(0,SwapLaserTexture());
			else
				m_Laser_Beam.SetObjectTexture(0,GetLaserTexture());
		}	
		float distance = DoMeasurement();
		vector fd = -vector.Direction(GetMemoryPointPos("beamStart"), GetMemoryPointPos("beamEnd")).Normalized();
		vector transform[4] = { 
			Vector(fd[2],fd[1],fd[0]),
			Vector(0,1,0),
			Vector(fd[0],fd[1],fd[2]) * distance,
			GetMemoryPointPos("beamStart")
		};
		m_Laser_Beam.SetTransform(transform);
	}
	float DoMeasurement() {
		float maxdistance = 100.0;
		if ( GetDayZGame().GetWorld().IsNight() ) {
			maxdistance = 1000.0;
		}
		vector beamStart = ModelToWorld( GetMemoryPointPos( "beamStart" ) );
		vector beamEnd = ModelToWorld( GetMemoryPointPos( "beamEnd" ) );
		vector direction = vector.Direction( beamStart, beamEnd ).Normalized();
		vector from = beamStart;
		vector to = beamStart + ( direction * maxdistance );
		vector contact_pos, contact_dir;
		int contactComponent;
		bool is_collision = DayZPhysics.RaycastRV( from, to, contact_pos, contact_dir, contactComponent, NULL, NULL, GetHierarchyRoot(), false, false, ObjIntersectIFire );
		if ( is_collision ) {
			return vector.Distance( from, contact_pos );
		}
		return maxdistance;
	}
	override void SetActions() {
		super.SetActions();
		AddAction(ActionTurnOnWhileInHands);
		AddAction(ActionTurnOffWhileInHands);
		AddAction(ActionToggleLightLeftIR);
	}
	void IRToggleTextureHandler() {
		if (!m_Laser_Beam)
			return;
		if(m_IRToggle) {
			m_Laser_Beam.SetObjectTexture(0,GetIRLaserTexture());
		}
		else {
			m_Laser_Beam.SetObjectTexture(0,GetLaserTexture());
		}
	}
	string GetLaserTexture() {
		return "#(argb,8,8,3)color(1,0,0,0.7,ca)";
	}
	string HideLaser() {
		return "#(argb,8,8,3)color(0,0,0,0,co)";
	}
	string SwapLaserTexture() {
		return "#(argb,8,8,3)color(0,1,0,0.7,ca)";
	}
	string GetIRLaserTexture() {
		return "#(argb,8,8,3)color(0,1,0,0.7,ca)";
	}
	override void OnVariablesSynchronized() {
		super.OnVariablesSynchronized();
		IRToggleTextureHandler();
	}
	void ToggleIRActionScript() {
    	m_IRToggle = !m_IRToggle; 
    	SetSynchDirty();
   }
	bool IsVisibleWithoutNVGCamera() {
		if (m_IRToggle == false) {
			return true;
		}
		else {
			return false;
		}	
	}
	bool isIRCompatibleLaser() {
		return false;
	}
	override void OnStoreSave(ParamsWriteContext ctx) {   
		super.OnStoreSave(ctx);		
		ctx.Write(m_IRToggle);
	}
	override bool OnStoreLoad(ParamsReadContext ctx, int version) {
		if (!super.OnStoreLoad(ctx, version))
			return false;
		if (!ctx.Read(m_IRToggle))
			m_IRToggle = false;
		SetSynchDirty();
		return true;
	}
	bool CheckForNVGCamera() {
		DayZPlayerImplement player;
		DayZPlayerCameraBase camera;
		return Class.CastTo(player, GetGame().GetPlayer()) && Class.CastTo(camera, player.GetCurrentCamera()) && camera.IsCameraNV();
	}
}