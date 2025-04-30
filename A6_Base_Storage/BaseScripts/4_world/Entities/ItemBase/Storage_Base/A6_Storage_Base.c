class A6_Storage_Base: Container_Base { 
    protected string m_OpenSoundSet = "";
    protected string m_CloseSoundSet = "";
    #ifndef SERVER
    BaseLight m_Light;
    #endif 
    override void DeferredInit() {		
		super.DeferredInit();
        #ifndef SERVER
        if (HasBaseLights()) {
            m_Light = BaseLight.Cast(ScriptedLightBase.CreateLight(BaseLight, "0 0 0"));
            if (m_Light)
                m_Light.AttachOnMemoryPoint(this, "light");
        }
        #endif        
    }
    override void EEDelete(EntityAI parent) {
        super.EEDelete(parent);
		#ifndef SERVER
		if (m_Light)
			m_Light.Destroy();   
		#endif
	}
    void InitializeSoundSets() {
        if (ConfigIsExisting("openSoundSet")) {
            m_OpenSoundSet = ConfigGetString("openSoundSet");
        }
        if (ConfigIsExisting("closeSoundSet")) {
            m_CloseSoundSet = ConfigGetString("closeSoundSet");
        }
    }
    void SoundOpenPlay() {
        EffectSound sound;
        if (MemoryPointExists("Doors1")) {
            sound = SEffectManager.PlaySound(m_OpenSoundSet, ModelToWorld(GetMemoryPointPos("Doors1")));
        } else {
            sound = SEffectManager.PlaySound(m_OpenSoundSet, GetPosition());
        }
        if (sound) {
            sound.SetSoundAutodestroy(true);
        }
    }
	void SoundClosePlay() {		
        EffectSound sound;
        if (MemoryPointExists("Doors1")) {
            sound = SEffectManager.PlaySound(m_CloseSoundSet, ModelToWorld(GetMemoryPointPos("Doors1")));
        } else {
            sound = SEffectManager.PlaySound(m_CloseSoundSet, GetPosition());
        }
        if (sound) {
            sound.SetSoundAutodestroy(true);
        }
	}
    bool HasBaseLights() {
        return MemoryPointExists("light");
    }
    bool CanBeDismantled() {
        return false;
    }
    bool AcceptsCodeLocks() {
        return true;
    }
    override bool IsPlayerInside(PlayerBase player, string selection) {
        if (MemoryPointExists("inventory_center")) {
            return vector.Distance(player.GetPosition(), ModelToWorld(GetMemoryPointPos("inventory_center"))) < 1.75;
        }
        return super.IsPlayerInside(player, selection);
    }
    override bool CanPutInCargo(EntityAI parent) {
		return false;
	}
	override bool CanPutIntoHands(EntityAI parent) {
		return false;
	}
    override void OnInventoryEnter(Man player) {
        super.OnInventoryEnter(player);
        if(GetInventory()) {
            GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);       
        }
    }
    override void OnInventoryExit(Man player) {
        super.OnInventoryExit(player);
        if(GetInventory()) {
            GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
        }        
    }
    override bool CanDisplayAttachmentCategory(string category_name) {	
        if (!super.CanDisplayAttachmentCategory(category_name))
            return false;
        category_name.ToLower();
        bool isCodeLock = category_name.Contains("codelock");
        bool isLock = category_name.Contains("lock");
        #ifdef CodeLock
            if (isCodeLock) return false;
            if (isLock) return true;
        #endif
        #ifdef RA_BaseBuilding_Scripts
            if (isCodeLock) return true;
            if (isLock) return false;
        #endif
        #ifdef EXPANSIONMODBASEBUILDING
            if (isCodeLock) return false;
            if (isLock) return true;
        #endif
        return !(isCodeLock || isLock);
    }
    override bool CanDisplayAttachmentSlot(int slot_id) {
        int codeLockId = InventorySlots.GetSlotIdFromString("CodeLock");
        int combinationLockId = InventorySlots.GetSlotIdFromString("Att_CombinationLock");
        if (slot_id == codeLockId) {
            #ifdef CodeLock
                return false; 
            #endif
            #ifdef RA_BaseBuilding_Scripts
                return true;
            #endif
            #ifdef EXPANSIONMODBASEBUILDING
                return false;
            #endif
            return false;
        }
        if (slot_id == combinationLockId) {
            #ifdef CodeLock
                return true;
            #endif
            #ifdef RA_BaseBuilding_Scripts
                return false;
            #endif
            #ifdef EXPANSIONMODBASEBUILDING
                return true;
            #endif
            return false;
        }
        return super.CanDisplayAttachmentSlot(slot_id);
    }
    override bool CanReceiveAttachment(EntityAI attachment, int slotId) {
        #ifdef CodeLock 
            CodeLock c_Lock;
            if (Class.CastTo(c_Lock, attachment))
                return true;
        #endif
        #ifdef RA_BaseBuilding_Scripts
            int codelock = InventorySlots.GetSlotIdFromString("Att_CombinationLock");
            switch(slotId) {
                case codelock:
                {   
                    if ( FindAttachmentBySlotName("Att_CombinationLock") == NULL) {
                        return false;
                    }
                    break;
                }
            }    
        #endif
        return super.CanReceiveAttachment(attachment, slotId);
    }
    void UpdateVisualState() {
    	if ( GetA6BaseStorageConfig().ProxyMode == 0 ) {
	        if ( IsOpen() ) {
	            SetAnimationPhase("Doors1",1);
	            SetAnimationPhase("Doors2",1);
	            SetAnimationPhase("Doors3",1);
	            SetAnimationPhase("Doors4",1);
	            SetAnimationPhase("cover",1);
	            SetAnimationPhase("hideproxy",1);
	        } else {
	            SetAnimationPhase("Doors1",0);
	            SetAnimationPhase("Doors2",0);
	            SetAnimationPhase("Doors3",0);
	            SetAnimationPhase("Doors4",0);
	            SetAnimationPhase("cover",0);
	            SetAnimationPhase("hideproxy",1);
	        }
	    }
    	if ( GetA6BaseStorageConfig().ProxyMode == 1 ) {
	        if ( IsOpen() ) {
	            SetAnimationPhase("Doors1",1);
	            SetAnimationPhase("Doors2",1);
	            SetAnimationPhase("Doors3",1);
	            SetAnimationPhase("Doors4",1);
	            SetAnimationPhase("cover",1);
	            SetAnimationPhase("hideproxy",0);
	        } else {
	            SetAnimationPhase("Doors1",0);
	            SetAnimationPhase("Doors2",0);
	            SetAnimationPhase("Doors3",0);
	            SetAnimationPhase("Doors4",0);
	            SetAnimationPhase("cover",0);
	            SetAnimationPhase("hideproxy",1);
	        }
	    }
	    if ( GetA6BaseStorageConfig().ProxyMode == 2 ) {
	        if ( IsOpen() ) {
	            SetAnimationPhase("Doors1",1);
	            SetAnimationPhase("Doors2",1);
	            SetAnimationPhase("Doors3",1);
	            SetAnimationPhase("Doors4",1);
	            SetAnimationPhase("cover",1);
	            SetAnimationPhase("hideproxy",0);
	        } else {
	            SetAnimationPhase("Doors1",0);
	            SetAnimationPhase("Doors2",0);
	            SetAnimationPhase("Doors3",0);
	            SetAnimationPhase("Doors4",0);
	            SetAnimationPhase("cover",0);
	            SetAnimationPhase("hideproxy",0);
	        }
	    } 
    }
    #ifdef EXPANSIONMODBASEBUILDING
    override bool ExpansionCanOpen(PlayerBase player, string selection) {
        if (!super.ExpansionCanOpen(player, selection))
            return false;
        return selection.Contains("doors") || selection.Contains("coveraction")  || selection.Contains("lid");
    }
    #endif
    #ifdef RA_BaseBuilding_Scripts
    override float GetCostToUpkeep() {
        return 0.00001;
    }
    override float GetTimeToDecay() {       
        return 72.0 * 60.0 * 60.0;
    }
    #endif
}