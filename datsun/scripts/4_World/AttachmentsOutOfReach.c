modded class AttachmentsOutOfReach
{
	override static bool IsAttachmentReachable(EntityAI e, string att_slot_name = "", int slot_id = -1, float range = 2.5)
	{
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		if( !player.IsInVehicle() )
		{
			if ( e.IsTransport() ) { range = 2.5; }
			if ( vector.Distance( player.GetPosition(), e.GetPosition() ) <= range )
			{ 
		        return true; 
		    }
		}
		return false;
	}
}