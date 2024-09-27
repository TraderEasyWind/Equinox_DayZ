modded class Firewood extends ItemBase
{
    override bool CanPutInCargo( EntityAI parent )
    {
        {
            return true;
        };
    };
    override bool CanRemoveFromCargo( EntityAI parent )
	{
		return true;
	};	
    override void SetActions()
    {
        super.SetActions();
        
        AddAction(ActionClapBearTrapWithThisItem);

        AddAction(ActionCreateIndoorFireplace);
        AddAction(ActionCreateIndoorOven);
        AddAction(ActionAttach);
        AddAction(ActionDetach);
    };
};