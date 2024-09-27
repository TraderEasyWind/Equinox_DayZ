class MassiveMod_WoodenCrateX2: DeployableContainer_Base
{
	void MassiveMod_WoodenCrateX2()
	{
		m_HalfExtents = Vector(0.15,0.25,0.4);
	}
	
	override int GetDamageSystemVersionChange()
	{
		return 110;
	}
	
	override void SetActions()
	{
		AddAction(ActionAttachOnSelection);
		super.SetActions();
	}
};
class MassiveMod_WoodenCrateX4: DeployableContainer_Base
{
	void MassiveMod_WoodenCrateX4()
	{
		m_HalfExtents = Vector(0.15,0.25,0.4);
	}
	
	override int GetDamageSystemVersionChange()
	{
		return 110;
	}
	
	
	override void SetActions()
	{
		AddAction(ActionAttachOnSelection);
		super.SetActions();
	}
};
class MassiveMod_WoodenCrateX8: DeployableContainer_Base
{
	void MassiveMod_WoodenCrateX8()
	{
		m_HalfExtents = Vector(0.15,0.25,0.4);
	}
	
	override int GetDamageSystemVersionChange()
	{
		return 110;
	}
	
	
	override void SetActions()
	{
		AddAction(ActionAttachOnSelection);
		super.SetActions();
	}
};