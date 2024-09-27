class MassiveMod_BarrelStash_ColorBase: Barrel_ColorBase
{
    void MassiveMod_BarrelStash_ColorBase()
	{
		SetEventMask(EntityEvent.INIT);
	}
	
	override void EOnInit(IEntity other, int extra) //!EntityEvent.INIT
	{
		vector pos = GetPosition();
		vector surfOrient = GetGame().GetSurfaceOrientation(pos[0], pos[2]);
		SetOrientation(surfOrient);
	}
	
	
	void PlaceOnGround()
	{
		vector pos = GetPosition();
		pos[1] = GetGame().SurfaceY(pos[0], pos[2]);
		pos[1] = pos[1] + 0.22;
		SetPosition(pos);
	}
	
	
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	
	
	override bool CanReceiveItemIntoHands(EntityAI item_to_hands)
	{
		return false;
	}
	
	override bool CanSaveItemInHands(EntityAI item_in_hands)
	{
		return false;
	}
	
	override bool CanPutIntoHands(EntityAI parent)
	{
		super.CanPutIntoHands( parent );
		
		return false;
	}
	
};