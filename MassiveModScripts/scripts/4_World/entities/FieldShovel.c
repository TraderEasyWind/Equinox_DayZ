class MassiveMod_FieldShovel extends ItemBase
{
	override bool CanMakeGardenplot()
	{
		return true;
	}

	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionBuildPartSwitch);
		AddAction(ActionClapBearTrapWithThisItem);
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDigGardenPlot);
		AddAction(ActionDismantleGardenPlot);
		AddAction(ActionDismantlePart);
		AddAction(ActionBuildPart);
		AddAction(ActionBuryBody);
		AddAction(ActionBuryAshes);
		AddAction(ActionDigInStash);
		AddAction(ActionFillObject);
		AddAction(ActionDigWorms);
		AddAction(ActionCreateGreenhouseGardenPlot);
		AddAction(ActionMineTree);
		AddAction(ActionMineBush);
		AddAction(ActionRepairPart);
		AddAction(ActionDismantlePart);
		AddAction(ActionBuildPart);
		AddAction(ActionUnrestrainTarget);
		AddAction(ActionSkinning);
	}
}