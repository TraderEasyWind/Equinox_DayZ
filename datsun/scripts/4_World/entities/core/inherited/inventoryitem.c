class nd_datsun_driverdoor extends CarDoor 
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionDetach);
		AddAction(ActionAttachOnSelection);
	}
};

class nd_datsun_codriverdoor extends CarDoor 
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionDetach);
		AddAction(ActionAttachOnSelection);
	}
};

class nd_datsun_hood extends CarDoor 
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionDetach);
		AddAction(ActionAttachOnSelection);
	}
};