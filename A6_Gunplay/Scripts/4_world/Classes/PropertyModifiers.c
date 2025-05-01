modded class PropertyModifiers {
	vector m_AimSpeedModifiers;
	float m_GlobalRecoilMultiplier; 
	float m_GlobalSwayMultiplier;
	float m_GlobalAimSpeedMultiplier; 
	override void UpdateModifiers() {
		super.UpdateModifiers();
		m_AimSpeedModifiers = GetModifierRaw(m_OwnerItem, "aimSpeedModifier");
		m_GlobalRecoilMultiplier = GetA6GunplayModConfig().GlobalRecoilMultiplier;
		m_RecoilModifiers[0] = m_RecoilModifiers[0] * m_GlobalRecoilMultiplier;
		m_RecoilModifiers[1] = m_RecoilModifiers[1] * m_GlobalRecoilMultiplier;
		m_RecoilModifiers[2] = m_RecoilModifiers[2] * m_GlobalRecoilMultiplier;
		for (int i = 0; i < m_OwnerItem.GetInventory().AttachmentCount(); i++) {
			ItemBase attachment = ItemBase.Cast(m_OwnerItem.GetInventory().GetAttachmentFromIndex(i));
			vector temp_value = PropertyModifiers.GetModifierRaw(attachment, "aimSpeedModifier");
			m_AimSpeedModifiers[0] = m_AimSpeedModifiers[0] * temp_value[0];
			m_AimSpeedModifiers[1] = m_AimSpeedModifiers[1] * temp_value[1];
			m_AimSpeedModifiers[2] = m_AimSpeedModifiers[2] * temp_value[2];
		}
	}
	static float TotalRecoilValueModifier(vector value) {
		return (value[0] + value[1] + value[2]) / 3 * 100;
	}
	static float TotalSwayValueModifier(vector value) {
		return (value[0] + value[1] + value[2]) / 0.075;
	}
	static float TotalADSTimeValueModifier(vector value) {
		return (value[0] + value[1] + value[2]) / 3.0;
	}
	static float TotalADSTimeValueModifierOptic(vector value) {
		return (value[0] + value[1] + value[2]) / 3.0 * 1000;
	}
	void GetIntialRecoilModifier(inout vector modifier_value) {
		vector value = GetModifierRaw(m_OwnerItem, "recoilModifier");
		m_GlobalRecoilMultiplier = GetA6GunplayModConfig().GlobalRecoilMultiplier;
		modifier_value[0] = value[0] * modifier_value[0] * m_GlobalRecoilMultiplier;
		modifier_value[1] = value[1] * modifier_value[1] * m_GlobalRecoilMultiplier;
		modifier_value[2] = value[2] * modifier_value[2] * m_GlobalRecoilMultiplier;
	}
	void GetRecoilModifierFinal(inout vector modifier_value) {
		GetIntialRecoilModifier(modifier_value);
		for (int i = 0; i < m_OwnerItem.GetInventory().AttachmentCount(); i++) {
			ItemBase attachment = ItemBase.Cast(m_OwnerItem.GetInventory().GetAttachmentFromIndex(i));
			vector att_value = PropertyModifiers.GetModifierRaw(attachment, "recoilModifier");
			modifier_value[0] = att_value[0] * modifier_value[0];
			modifier_value[1] = att_value[1] * modifier_value[1];
			modifier_value[2] = att_value[2] * modifier_value[2];
		}	
	}	
	float GetRecoilModifierPercentage() {
		vector modifier_value = "1 1 1";
		GetRecoilModifierFinal(modifier_value);
		return TotalRecoilValueModifier(modifier_value);
	}
	void GetIntialSwayModifier(inout vector modifier_value) {
		vector value = GetModifierRaw(m_OwnerItem, "swayModifier");
		m_GlobalSwayMultiplier = GetA6GunplayModConfig().GlobalSwayMultiplier;
		modifier_value[0] = value[0] * modifier_value[0] * m_GlobalSwayMultiplier;
		modifier_value[1] = value[1] * modifier_value[1] * m_GlobalSwayMultiplier;
		modifier_value[2] = value[2] * modifier_value[2] * m_GlobalSwayMultiplier;
	}
	void GetSwayModifierFinal(inout vector modifier_value) {
		GetIntialSwayModifier(modifier_value);
		for (int i = 0; i < m_OwnerItem.GetInventory().AttachmentCount(); i++) {
			ItemBase attachment = ItemBase.Cast(m_OwnerItem.GetInventory().GetAttachmentFromIndex(i));
			vector att_value = PropertyModifiers.GetModifierRaw(attachment, "swayModifier");
			modifier_value[0] = att_value[0] * modifier_value[0];
			modifier_value[1] = att_value[1] * modifier_value[1];
			modifier_value[2] = att_value[2] * modifier_value[2];
		}	
	}	
	float GetSwayModifierPercentage() {
		vector modifier_value = "1 1 1";
		GetSwayModifierFinal(modifier_value);
		return TotalSwayValueModifier(modifier_value);
	}
	void GetIntialAimSpeedModifier(inout vector modifier_value) {
		vector value = GetModifierRaw(m_OwnerItem, "aimSpeedModifier");
		m_GlobalAimSpeedMultiplier = GetA6GunplayModConfig().GlobalAimSpeedMultiplier;
		modifier_value[0] = value[0] * modifier_value[0] * m_GlobalAimSpeedMultiplier;
		modifier_value[1] = value[1] * modifier_value[1] * m_GlobalAimSpeedMultiplier;
		modifier_value[2] = value[2] * modifier_value[2] * m_GlobalAimSpeedMultiplier;
	}
	void GetAimSpeedModifierFinal(inout vector modifier_value) {
		GetIntialAimSpeedModifier(modifier_value);
		for (int i = 0; i < m_OwnerItem.GetInventory().AttachmentCount(); i++) {
			ItemBase attachment = ItemBase.Cast(m_OwnerItem.GetInventory().GetAttachmentFromIndex(i));
			vector att_value = PropertyModifiers.GetModifierRaw(attachment, "aimSpeedModifier");
			modifier_value[0] = att_value[0] * modifier_value[0];
			modifier_value[1] = att_value[1] * modifier_value[1];
			modifier_value[2] = att_value[2] * modifier_value[2];
		}	
	}	
	float GetAimSpeedModifierPercentage() {
		vector modifier_value = "1 1 1";
		GetAimSpeedModifierFinal(modifier_value);
		return TotalADSTimeValueModifier(modifier_value);
	}
	int GetAimSpeedModifierPercentageOptic() {
		vector modifier_value = "1 1 1";
		GetAimSpeedModifierFinal(modifier_value);
		return TotalADSTimeValueModifierOptic(modifier_value);
	}
};	