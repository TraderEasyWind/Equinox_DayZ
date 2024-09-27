modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);

		actions.Insert(ActionUnlockCrate);
        actions.Insert(ActionDestroyPart);
		actions.Insert(ActionEnterHatch);
		
	}
}
