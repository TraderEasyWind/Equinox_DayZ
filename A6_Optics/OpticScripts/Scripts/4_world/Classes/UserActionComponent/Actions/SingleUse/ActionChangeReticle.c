class ActionChangeReticle : ActionSingleUseBase {
	A6_ItemOptics_NVReticle m_OpticNVReticle;
	A6_ItemOptics_MultipleReticles m_OpticMultipleReticles;
	void ActionChangeReticle() {
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ATTACHSCOPE;
	}	
	override void CreateConditionComponents () {
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}
	override typename GetInputType() return ReticleActionInput;
	override string GetText() {
		return "Switch Reticle";
	}
	override bool HasTarget() {
		return false;
	}
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item ) {
		if ( item.IsInherited(Rifle_Base) || item.IsInherited(BoltActionRifle_Base)) {
			m_OpticNVReticle = A6_ItemOptics_NVReticle.Cast(item.FindAttachmentBySlotName("weaponOptics"));
			m_OpticMultipleReticles = A6_ItemOptics_MultipleReticles.Cast(item.FindAttachmentBySlotName("weaponOptics"));
		}
		else
			return false;
		if ( m_OpticNVReticle || m_OpticMultipleReticles ) {
			return true;
		}
		return false;
	}
	override void OnExecute( ActionData action_data ) {
		if ( m_OpticNVReticle ) {	
			m_OpticNVReticle.ChangeReticle();
		}
		if ( m_OpticMultipleReticles ) {
			int m_ReticleMode = m_OpticMultipleReticles.GetReticleMode();
			if ( m_ReticleMode < 3 ) {
				m_OpticMultipleReticles.SetReticleMode( m_ReticleMode + 1 ); 
			} else {
				m_OpticMultipleReticles.SetReticleMode(0);
			}
		}		
   }
}
class ReticleActionInput : DefaultActionInput {
	void ReticleActionInput(PlayerBase player) {
		SetInput("UAToggleReticle");
		m_InputType = ActionInputType.AIT_SINGLE;	
	}
	override void OnActionStart() {
		super.OnActionStart();
		m_Active = false;
	}
	override bool WasEnded() {
		return false;
	}	
}