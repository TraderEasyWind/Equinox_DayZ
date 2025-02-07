modded class Mass_IFAK_ColorBase
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionMMIOIFAKTarget);
		AddAction(ActionMMIOIFAKSelf);
	};
	
	override float GetInfectionChance(int system = 0, Param param = null)
	{
		if(m_Cleanness == 1)
		{
			return 0;
		}
		else
		{
			return 0.05;
		}
	}
	
	override void OnCombine(ItemBase other_item)
	{
		super.OnCombine(other_item);
		if (m_Cleanness == 1 && other_item.m_Cleanness == 0)
			SetCleanness(0);
	}
}