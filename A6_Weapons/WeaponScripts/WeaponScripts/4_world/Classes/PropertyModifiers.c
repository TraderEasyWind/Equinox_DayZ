modded class PropertyModifiers {
	vector m_BipodRecoilModifiers;
	float m_BipodRecoilMultiplier;
	override void UpdateModifiers() {
		super.UpdateModifiers();
		m_BipodRecoilModifiers = GetModifierRaw(m_OwnerItem, "recoilModifier");
		m_BipodRecoilMultiplier = GetA6GunplayModConfig().BipodRecoilMultiplier;
		m_BipodRecoilModifiers[0] = m_BipodRecoilModifiers[0] * m_BipodRecoilMultiplier;
		m_BipodRecoilModifiers[1] = m_BipodRecoilModifiers[1] * m_BipodRecoilMultiplier;
		m_BipodRecoilModifiers[2] = m_BipodRecoilModifiers[2] * m_BipodRecoilMultiplier;
	}
}	