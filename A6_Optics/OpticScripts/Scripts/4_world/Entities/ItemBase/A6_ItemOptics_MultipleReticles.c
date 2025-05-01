class A6_ItemOptics_MultipleReticles : A6_ItemOptics {
	protected int m_ReticleMode;
	void A6_ItemOptics_MultipleReticles() {
		RegisterNetSyncVariableInt("m_ReticleMode", 0, 3);
		UpdateOpticsReddotVisibility();
	}
	override void OnWorkStart() {
		if (!GetGame().IsDedicatedServer()) {
			ReticleMode();
		}
	}
	override void OnWorkStop() {
		if (!GetGame().IsDedicatedServer()) {
			HideReddot();
		}
	}
	override bool IsWorking() {
		if (GetCompEM() && GetCompEM().CanWork())
			return true;
		return false;
	}
	override void UpdateOpticsReddotVisibility() {
		if (IsWorking()) {
			ReticleMode();
		} else if (!IsWorking()) {
			HideReddot();
		}
	}
	void HideReddot() {
		SetObjectTexture(0,"");
		SetObjectMaterial(0,"");
	}	
	void ReticleMode() {
		if(m_ReticleMode == 0) {
			SetObjectTexture(0,"A6_Optics\\Optics\\OpticReticleTextures\\MRS_Reticles\\reticle_small_ca.paa");
			SetObjectMaterial(0,"dz\\weapons\\attachments\\optics\\data\\collimdot.rvmat");
			SetAnimationPhase("reticle_knob",0);
		}
		if(m_ReticleMode == 1) {
			SetObjectTexture(0,"A6_Optics\\Optics\\OpticReticleTextures\\MRS_Reticles\\reticle_big_ca.paa");
			SetObjectMaterial(0,"dz\\weapons\\attachments\\optics\\data\\collimdot.rvmat");
			SetAnimationPhase("reticle_knob",0.33);
		}
		if(m_ReticleMode == 2) {
			SetObjectTexture(0,"A6_Optics\\Optics\\OpticReticleTextures\\MRS_Reticles\\reticle_tdot_ca.paa");
			SetObjectMaterial(0,"dz\\weapons\\attachments\\optics\\data\\collimdot.rvmat");
			SetAnimationPhase("reticle_knob",0.655);
		}
		if(m_ReticleMode == 3) {
			SetObjectTexture(0,"A6_Optics\\Optics\\OpticReticleTextures\\MRS_Reticles\\reticle_cross_ca.paa");
			SetObjectMaterial(0,"dz\\weapons\\attachments\\optics\\data\\collimdot.rvmat");
			SetAnimationPhase("reticle_knob",1);
		}
	}
	override void OnVariablesSynchronized() {
		super.OnVariablesSynchronized();
		ReticleMode();
	}
   void SetReticleMode(int mode) {
		m_ReticleMode = mode;
		UpdateOpticsReddotVisibility(); 
		SetSynchDirty();
	}
	int GetReticleMode() {
		return m_ReticleMode;
	}
	override void OnStoreSave( ParamsWriteContext ctx ) {   
		super.OnStoreSave( ctx );		
		ctx.Write( m_ReticleMode );
	}
	override bool OnStoreLoad( ParamsReadContext ctx, int version ) {
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		if (!ctx.Read( m_ReticleMode ) )
            m_ReticleMode = false;
		ReticleMode();
		SetSynchDirty();
		return true;
	}
	override void SetActions() {
		super.SetActions();		
		AddAction(ActionChangeReticle);
	}
}
class A6_MRS_Optic : A6_ItemOptics_MultipleReticles {}