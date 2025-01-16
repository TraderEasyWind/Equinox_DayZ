modded class ActionUpgradeBaseCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		#ifdef DIAG_DEVELOPER
		m_ActionData.m_ActionComponent = new CAContinuousTime(0);
		#endif
		
		ItemBase tool = ItemBase.Cast(m_ActionData.m_MainItem);
		if (tool && tool.IsInherited(RA_ClawHammer)){
			m_ActionData.m_ActionComponent = new CAContinuousTime(6);
		}

		else if (tool && tool.IsInherited(Hatchet)){
			m_ActionData.m_ActionComponent = new CAContinuousTime(12);
		}

		else if (tool && tool.IsInherited(Hammer)){
			m_ActionData.m_ActionComponent = new CAContinuousTime(9);
		}
		
		else {
			m_ActionData.m_ActionComponent = new CAContinuousTime(12);
		}
	}
}
class ActionRepairBaseCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		#ifdef DIAG_DEVELOPER
		m_ActionData.m_ActionComponent = new CAContinuousTime(0);
		#endif
		
		ItemBase tool = ItemBase.Cast(m_ActionData.m_MainItem);
		if (tool && tool.IsInherited(RA_ClawHammer)){
			m_ActionData.m_ActionComponent = new CAContinuousTime(60);
		}

		else if (tool && tool.IsInherited(Hatchet)){
			m_ActionData.m_ActionComponent = new CAContinuousTime(60);
		}

		else if (tool && tool.IsInherited(Hammer)){
			m_ActionData.m_ActionComponent = new CAContinuousTime(60);
		}
		
		else {
			m_ActionData.m_ActionComponent = new CAContinuousTime(60);
		}
	}
}
modded class ActionRepairBase: ActionContinuousBase
{
	void ActionRepairBase()
	{
		m_CallbackClass = ActionRepairBaseCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_ASSEMBLE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
		m_Text = "Repair";
	}
}