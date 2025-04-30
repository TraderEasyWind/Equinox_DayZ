class A6_Openable_Base : A6_Storage_Base {
	protected bool m_IsOpened;
	protected bool m_IsOpenedLocal;
	private bool m_IsOpenable;
	protected bool m_AutoCloseStart = false;
	protected bool m_AutoCloseTimer = false;
	static const int AUTO_CLOSE_TIMER = 60 * GetA6BaseStorageConfig().AutoCloseMinutes * 1000; 
	void A6_Openable_Base() {
		RegisterNetSyncVariableBool("m_IsOpened");	
        InitializeSoundSets();
		m_AutoCloseStart = GetA6BaseStorageConfig().AutoCloseOnServerStart;
		m_AutoCloseTimer = GetA6BaseStorageConfig().EnableAutoCloseStorageTimer;
		UpdateVisualState();
	}
	override void EEInit() {
		super.EEInit();		
        if(IsOpen()) {
            if(GetInventory()) {
                GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
            }    
		} else {
            if(GetInventory()) {
			    GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);	
            }    
		}		
	}
	override void Open() {
		m_IsOpened = true;
		UpdateVisualState();
        if(GetInventory()) {
		    GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
        }     
		if(m_AutoCloseTimer) {
			g_Game.GetCallQueue(CALL_CATEGORY_GAMEPLAY).Remove(Close);
			g_Game.GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(Close, AUTO_CLOSE_TIMER);
		}	
        SetSynchDirty();	
	}
	override void Close() {
		m_IsOpened = false;
		UpdateVisualState();
        if(GetInventory()) {
            GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
        }    
        SetSynchDirty();
	}
	override bool IsOpen() {
		return m_IsOpened;
	}
	override void OnVariablesSynchronized() {
		super.OnVariablesSynchronized();
		if ( m_IsOpened != m_IsOpenedLocal ) {		
			if ( IsOpen() && !IsBeingPlaced() ) {
				SoundOpenPlay();
			}
			if ( !IsOpen() && !IsBeingPlaced() ) {
				SoundClosePlay();
			}		
			m_IsOpenedLocal = m_IsOpened;
		}
		UpdateVisualState();
	}
	override void OnStoreSave( ParamsWriteContext ctx ) {   
		super.OnStoreSave( ctx );		
		ctx.Write( m_IsOpened );	
	}
	override bool OnStoreLoad( ParamsReadContext ctx, int version ) {
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		if (!ctx.Read( m_IsOpened ) )
			return false;
		if ( m_IsOpened ) {
            Open();
		} else {
            Close();
		}	
		return true;
	}
	override void AfterStoreLoad() {
		super.AfterStoreLoad();
		if(IsOpen() && m_AutoCloseStart) {
			Close();
		}	
	}
	override bool CanReceiveItemIntoCargo(EntityAI item) {
		return IsOpen();
	}
	override bool CanReleaseCargo (EntityAI cargo) {
		return IsOpen();
	}
	override bool CanDisplayCargo() {
		return IsOpen();
	}
	override void SetActions() {
        super.SetActions();
        AddAction(ActionA6CustomCloseOpen);
    }
}