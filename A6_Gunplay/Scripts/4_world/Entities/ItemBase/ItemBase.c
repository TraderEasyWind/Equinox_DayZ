modded class ItemBase {
	static float TotalRecoilValueModifier(vector value) {
		return (value[0] - 1.0) * 100;
	}
	static float TotalSwayValueModifier(vector value) {
		return (value[0] - 1.0) * 100;
	}
	static float TotalADSTimeValueModifier(vector value) {
		return (value[0] - 1.0) * 100;
	}
	vector GetStatModifierRaw(string modifier_name, vector value = "1 1 1") {
		return ConfigGetVector(modifier_name);
	}
	void GetAttachmentRecoilModifier(inout vector modifier_value) {
		vector value = GetStatModifierRaw("recoilModifier");
		modifier_value[0] = value[0] * modifier_value[0];
		modifier_value[1] = value[1] * modifier_value[1];
		modifier_value[2] = value[2] * modifier_value[2];
	}
	void GetAttachmentSwayModifier(inout vector modifier_value) {
		vector value = GetStatModifierRaw("swayModifier");
		modifier_value[0] = value[0] * modifier_value[0];
		modifier_value[1] = value[1] * modifier_value[1];
		modifier_value[2] = value[2] * modifier_value[2];
	}
	void GetAttachmentAimSpeedModifier(inout vector modifier_value) {
		vector value = GetStatModifierRaw("aimSpeedModifier");
		modifier_value[0] = value[0] * modifier_value[0];
		modifier_value[1] = value[1] * modifier_value[1];
		modifier_value[2] = value[2] * modifier_value[2];
	}
	float GetRecoilModifierPercentage() {
		vector modifier_value = "1 1 1";
		GetAttachmentRecoilModifier(modifier_value);
		return TotalRecoilValueModifier(modifier_value);
	}
	float GetSwayModifierPercentage() {
		vector modifier_value = "1 1 1";
		GetAttachmentSwayModifier(modifier_value);
		return TotalSwayValueModifier(modifier_value);
	}
	float GetAimSpeedModifierPercentage() {
		vector modifier_value = "1 1 1";
		GetAttachmentAimSpeedModifier(modifier_value);
		return TotalADSTimeValueModifier(modifier_value);
	}
}	