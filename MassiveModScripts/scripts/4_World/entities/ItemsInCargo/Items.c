modded class DeployableContainer_Base extends Container_Base
{
	override bool CanPutInCargo( EntityAI parent )
	{	
		if ( parent != this && ( this.GetType() != parent.GetType() ) )
		{
			return true;
		}
		
		return false;
	}
}