modded class WolfSteakMeat
{
	override bool CanBeCooked()
	{
		return true;
	}		
	
	override bool CanBeCookedOnStick()
	{
		return true;
	}
	
	override bool IsMeat()
	{
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override void HandleFoodStageChangeAgents(FoodStageType stageOld, FoodStageType stageNew)
	{
		int keepAgentsRnd = 0;
		/*if (Math.RandomFloat01() <= GameConstants.SALMONELLA_RETENTION_PREDATOR)
		{
			keepAgentsRnd |= eAgents.SALMONELLA;
		}*/ //Removed salmonella agent

		switch (stageNew)
		{
			case FoodStageType.BAKED:
			case FoodStageType.BOILED:
			case FoodStageType.DRIED:
				RemoveAllAgentsExcept(keepAgentsRnd|eAgents.BRAIN|eAgents.HEAVYMETAL);
			break;
			
			case FoodStageType.BURNED:
				RemoveAllAgentsExcept(eAgents.HEAVYMETAL); //Removed salmonella from burned
			break;
		}
	}
}
modded class BearSteakMeat 
{
	override bool CanBeCooked()
	{
		return true;
	}		
	
	override bool CanBeCookedOnStick()
	{
		return true;
	}
	
	override bool IsMeat()
	{
		return true;
	}
	
	override bool CanDecay()
	{
		return true;
	}
	
	override void HandleFoodStageChangeAgents(FoodStageType stageOld, FoodStageType stageNew)
	{
		int keepAgentsRnd = 0;
		/*if (Math.RandomFloat01() <= GameConstants.SALMONELLA_RETENTION_PREDATOR)
		{
			keepAgentsRnd |= eAgents.SALMONELLA;
		}*/ //Removed salmonella agent

		switch (stageNew)
		{
			case FoodStageType.BAKED:
			case FoodStageType.BOILED:
			case FoodStageType.DRIED:
				RemoveAllAgentsExcept(keepAgentsRnd|eAgents.BRAIN|eAgents.HEAVYMETAL);
			break;
			
			case FoodStageType.BURNED:
				RemoveAllAgentsExcept(eAgents.HEAVYMETAL); //Removed salmonella from burned
			break;
		}
	}
};