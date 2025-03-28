modded class SeaChest
{
	protected bool m_IsOpened;
	protected bool m_IsOpenedLocal;
	private bool m_IsOpenable;
	
	void SeaChest()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
		RegisterNetSyncVariableBool("m_IsOpened");
		if(ConfigIsExisting("itemIsOpenable"))
			m_IsOpenable = ConfigGetBool("itemIsOpenable");
		else
			m_IsOpenable = false;
	}
	
	override void EEInit()
	{
		super.EEInit();		
        if(IsOpen())
            GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		else
			GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);		
	}
	
	bool IsOpenable()
	{
		return m_IsOpenable;
	}
	
	void Open()
	{
		super.Open();
		m_IsOpened = true;
		SoundSynchRemote();
		SetSynchDirty();
		GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( Close, 600000, false );
		GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		if (GetGame().IsServer() && Expansion_CanUseVirtualStorage(true))
			Expansion_RestoreContents();
		
	}

	void Close()
	{
		m_IsOpened = false;
		SoundSynchRemote();
		SetSynchDirty();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
		if (GetGame().IsServer() && Expansion_CanUseVirtualStorage())
			Expansion_StoreContents();
	}
	
	
	override bool IsOpen()
	{
		return m_IsOpened;
	}
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( m_IsOpened != m_IsOpenedLocal )
		{		
			if ( IsOpen() && IsSoundSynchRemote() && !IsBeingPlaced() )
			{
				SoundOpenPlay();
			}
			
			if ( !IsOpen() && IsSoundSynchRemote() && !IsBeingPlaced() )
			{
				SoundClosePlay();
			}	
			m_IsOpenedLocal = m_IsOpened;
		}
		
	}
	
	override void OnStoreSave( ParamsWriteContext ctx )
	{   
		super.OnStoreSave( ctx );		
		ctx.Write( m_IsOpened );
	}
	
	override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		
		if (!ctx.Read( m_IsOpened ) )
			return false;
		
		if ( !m_IsOpenable )
			return true;

		if ( m_IsOpened )
			Open();
		else
			Close();
		
		return true;
	}
	
	override void AfterStoreLoad()
	{	
		super.AfterStoreLoad();

		if ( IsOpenable() )
		{
			GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( Close, 5000, false );
		}
	}
	
	void SoundOpenPlay()
	{
	}
	
	void SoundClosePlay()
	{
	}
	
	override bool IsNonExpansionOpenable()
	{
		return true;
	}
	
	override void SetActions()
	{
		super.SetActions();
        AddAction(ActionMMGCloseAndOpen);
	}
};
modded class WoodenCrate
{
	protected bool m_IsOpened;
	protected bool m_IsOpenedLocal;
	private bool m_IsOpenable;
	
	void WoodenCrate()
	{
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
		RegisterNetSyncVariableBool("m_IsOpened");
		if(ConfigIsExisting("itemIsOpenable"))
			m_IsOpenable = ConfigGetBool("itemIsOpenable");
		else
			m_IsOpenable = false;
	}
	
	override void EEInit()
	{
		super.EEInit();		
        if(IsOpen())
            GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		else
			GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);		
	}
	
	void Open()
	{
		super.Open();
		m_IsOpened = true;
		SoundSynchRemote();
		SetSynchDirty();
		GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( Close, 600000, false );
		if (GetGame().IsServer() && Expansion_CanUseVirtualStorage(true))
			Expansion_RestoreContents();
	}

	void Close()
	{
		m_IsOpened = false;
		SoundSynchRemote();
		SetSynchDirty();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
		if (GetGame().IsServer() && Expansion_CanUseVirtualStorage())
			Expansion_StoreContents();
	}
	
	bool IsOpenable()
	{
		return m_IsOpenable;
	}
	
	override bool IsOpen()
	{
		return m_IsOpened;
	}
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( m_IsOpened != m_IsOpenedLocal )
		{		
			if ( IsOpen() && IsSoundSynchRemote() && !IsBeingPlaced() )
			{
				SoundOpenPlay();
			}
			
			if ( !IsOpen() && IsSoundSynchRemote() && !IsBeingPlaced() )
			{
				SoundClosePlay();
			}	
			m_IsOpenedLocal = m_IsOpened;
		}
		
	}
	
	override void OnStoreSave( ParamsWriteContext ctx )
	{   
		super.OnStoreSave( ctx );		
		ctx.Write( m_IsOpened );
	}
	
	override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		
		if (!ctx.Read( m_IsOpened ) )
			return false;
		
		if ( !m_IsOpenable )
			return true;

		if ( m_IsOpened )
			Open();
		else
			Close();
		
		return true;
	}
	
	override void AfterStoreLoad()
	{	
		super.AfterStoreLoad();

		if ( IsOpenable() )
		{
			GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( Close, 5000, false );
		}
	}
	
	void SoundOpenPlay()
	{
	}
	
	void SoundClosePlay()
	{
	}
	
	override bool IsNonExpansionOpenable()
	{
		return true;
	}
	
	override void SetActions()
	{
		super.SetActions();
        AddAction(ActionMMGCloseAndOpen);
	}
};
modded class Barrel_ColorBase
{
	override void Open()
	{
		super.Open();
		GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( Close, 600000, false );
		if (GetGame().IsServer() && Expansion_CanUseVirtualStorage(true))
			Expansion_RestoreContents();
	}

	override void Close()
	{
		if (GetGame().IsServer() && Expansion_CanUseVirtualStorage())
			Expansion_StoreContents();

		super.Close();
	}

	override bool IsNonExpansionOpenable()
	{
		return true;
	}
}