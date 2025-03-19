modded class mmg_storage_openable_base
{
	override void Open()
	{
		super.Open();
		
		
		if (GetGame().IsServer() && Expansion_CanUseVirtualStorage(true))
			Expansion_RestoreContents();
			GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( Close, 600000, false );
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
};
modded class mmg_storage_openable_noLock_base
{
	override void Open()
	{
		super.Open();

		if (GetGame().IsServer() && Expansion_CanUseVirtualStorage(true))
			Expansion_RestoreContents();
			GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( Close, 600000, false );
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
};