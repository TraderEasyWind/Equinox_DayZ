modded class WoodenStick
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionDigOutStick);
		AddAction(ActionDigInStick);
	}
}
modded class LongWoodenStick
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionBreakLongWoodenStick);
		AddAction(ActionDigOutStick);
		AddAction(ActionDigInStick);
		AddAction(ActionBreakLongWoodenStick);
	}
}
modded class SharpWoodenStick
{
	override void SetActions()
	{
		super.SetActions();
		// Fix the ordering because otherwise it wont work
		RemoveAction(ActionBreakLongWoodenStick);
		AddAction(ActionDigOutStick);
		AddAction(ActionDigInStick);
		AddAction(ActionBreakLongWoodenStick);
	}
}
modded class Shovel
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionDigOutStick);
		AddAction(ActionDigInStick);
	}
}
modded class FieldShovel
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionDigOutStick);
		AddAction(ActionDigInStick);
	}
}