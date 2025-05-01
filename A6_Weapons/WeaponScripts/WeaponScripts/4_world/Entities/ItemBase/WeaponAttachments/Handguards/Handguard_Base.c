class A6_Handguard_Base extends ItemBase {
    protected bool m_IsOpened;
    void A6_Handguard_Base() {
        RegisterNetSyncVariableBool("m_IsOpened");
        if (HasIronSights()) {
            UpdateVisualState();
        }
    }
    bool HasIronSights() {
        return false;
    }
    bool BlockSuppressor() {
        return false;
    }
    void UpdateVisualState() {
        if ( IsOpen() ){
            SetAnimationPhase("rotate",0);
        } else {
            SetAnimationPhase("rotate",1);
        }
    }
    override void Open() {
        m_IsOpened = true;
        SetSynchDirty();
        UpdateVisualState();
    }
    override void Close() {
        m_IsOpened = false;
        SetSynchDirty();
        UpdateVisualState();
    }
    override bool IsOpen() {
        return m_IsOpened;
    }
    override void OnVariablesSynchronized() {
        super.OnVariablesSynchronized();
        if (HasIronSights()) {
            UpdateVisualState();
        }
    }
    override void OnStoreSave( ParamsWriteContext ctx ) {   
        super.OnStoreSave( ctx );
        if (HasIronSights()) {		
            ctx.Write( m_IsOpened );	
        }    
    }
    override bool OnStoreLoad( ParamsReadContext ctx, int version ) {
        if ( !super.OnStoreLoad( ctx, version ) )
            return false;
        if (HasIronSights()) {
            if (!ctx.Read( m_IsOpened ) )
                return false;
            if ( m_IsOpened )
                Open();
            else
                Close();
        }    
        return true;
    }
    override void OnWasAttached( EntityAI parent, int slot_id ) {
        super.OnWasAttached( parent, slot_id );
        if (HasIronSights() && parent.FindAttachmentBySlotName("weaponOptics")){
            Close();
        } else {
            Open();
        }
    }
    override void OnWasDetached( EntityAI parent, int slot_id ) {
        super.OnWasDetached( parent, slot_id );
        if ( Weapon_Base.Cast(parent) && HasIronSights() && IsOpen() ) {
            Close();
        }
    }
    override bool CanDetachAttachment(EntityAI parent) {
        array<string> restrictedSlots = {"weaponLightLeft","weaponLightRight","weaponLightTop","weaponForegrip","weaponBipod"};
        foreach (string slot : restrictedSlots) {
            if (parent.FindAttachmentBySlotName(slot)) {
                return false;
            }
        }
        return true; 
    }
}