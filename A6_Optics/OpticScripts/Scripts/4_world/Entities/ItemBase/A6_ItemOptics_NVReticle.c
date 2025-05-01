class A6_ItemOptics_NVReticle : A6_ItemOptics {
	protected bool m_NVToggle = false;
	void A6_ItemOptics_NVReticle() {
		RegisterNetSyncVariableBool("m_NVToggle");
		UpdateOpticsReddotVisibility();
	}
	override void OnWorkStart() {
		if (!GetGame().IsDedicatedServer()) {
			ReticleToggle();
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
			ReticleToggle();
		} else if (!IsWorking()) {
			HideReddot();
		}
	}
	void HideReddot() {
		SetObjectTexture(0,"");
		SetObjectMaterial(0,"");
	}	
	void ReticleToggle() {
		if(m_NVToggle){
			SetObjectTexture(0,"A6_Optics\\Optics\\OpticReticleTextures\\ReticleColors\\greenreticle_co.paa");
			SetObjectMaterial(0,"dz\\weapons\\attachments\\optics\\data\\tritium.rvmat");
		} else {
			SetObjectTexture(0,"A6_Optics\\Optics\\OpticReticleTextures\\ReticleColors\\redreticle_co.paa");
			SetObjectMaterial(0,"dz\\weapons\\attachments\\optics\\data\\collimdot2.rvmat");
		}
	}
	override void OnVariablesSynchronized() {
		super.OnVariablesSynchronized();
		ReticleToggle();
	}
   void ChangeReticle() {
		m_NVToggle = !m_NVToggle; 
		UpdateOpticsReddotVisibility();

		SetSynchDirty();
   }
   override void OnStoreSave( ParamsWriteContext ctx ) {   
		super.OnStoreSave( ctx );		
		ctx.Write( m_NVToggle );
	}
	override bool OnStoreLoad( ParamsReadContext ctx, int version ) {
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		if (!ctx.Read( m_NVToggle ) )
            m_NVToggle = false;
		ReticleToggle();
      SetSynchDirty();
		return true;
	}
	override void SetActions() {
		super.SetActions();		
		AddAction(ActionChangeReticle);
	}
}
class A6_EoTechOptic_Base : A6_ItemOptics_NVReticle {}
class A6_EoTechOptic : A6_EoTechOptic_Base {}
class A6_CollimatorOptic : A6_ItemOptics_NVReticle {}
class A6_RAZOR_AMG_Optic : A6_ItemOptics_NVReticle {}
class A6_SigSauerRomeo5Optic : A6_ItemOptics_NVReticle {}
class A6_Spitfire_Optic : A6_ItemOptics_NVReticle {}
class A6_SigSauerRomeoXLOptic : A6_ItemOptics_NVReticle {}
class A6_DocterOptic : A6_ItemOptics_NVReticle {}
class A6_DocterOptic_MRDMount : A6_ItemOptics_NVReticle {}
class A6_AcogOptic_DocterOptic_Base : A6_ItemOptics_NVReticle {}
class A6_AcogOptic_Black_DocterOptic : A6_AcogOptic_DocterOptic_Base {}
class A6_AcogOptic_Tan_DocterOptic : A6_AcogOptic_DocterOptic_Base {}
class A6_SigSauerBravo4Optic_DocterOptic_MRDMount : A6_ItemOptics_NVReticle {}
class A6_SigSauerBravo4Optic_SigSauerRomeoXLOptic : A6_ItemOptics_NVReticle {}
class A6_BarskaOptic : A6_ItemOptics_NVReticle  {
	override void HideReddot() {
		SetObjectTexture(0,"A6_Optics\\Optics\\OpticReticleTextures\\BarksaSwat_Reticle_ca.paa");
		SetObjectMaterial(0,"dz\\weapons\\attachments\\optics\\data\\nodiffuse.rvmat");
	}	
	override void ReticleToggle() {
		if(m_NVToggle) {
			SetObjectTexture(0,"A6_Optics\\Optics\\OpticReticleTextures\\BarksaSwat_GreenReticle_ca.paa");
			SetObjectMaterial(0,"A6_Optics\\Optics\\OpticReticleTextures\\ScopeViews\\BarskaGlowingGreen.rvmat");
		} else {
			SetObjectTexture(0,"A6_Optics\\Optics\\OpticReticleTextures\\BarksaSwat_RedReticle_ca.paa");
			SetObjectMaterial(0,"A6_Optics\\Optics\\OpticReticleTextures\\ScopeViews\\BarskaGlowingRed.rvmat");
		}
	}	
}
class A6_BarskaOptic_Tan : A6_BarskaOptic {}
class A6_LeupoldOptic_SigSauerRomeoXLOptic : A6_ItemOptics_NVReticle {}
class A6_LeupoldOptic_DocterOptic_MRDMount : A6_LeupoldOptic_SigSauerRomeoXLOptic {}