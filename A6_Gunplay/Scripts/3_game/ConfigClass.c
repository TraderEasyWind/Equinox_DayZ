class A6GunplayModConfig { 
	static const string A6GunplayConfigDIR = "$profile:\\A6_GunplayMod";
	static const string A6GunplayConfigPATH = "$profile:\\A6_GunplayMod\\A6_GunplayMod.json";
	string FileUpdateEnable = "1";
	bool DisableFireGeoDmgWeapon = 0; // 1 = Disables Fire Geometry Damage for Firearms by Firearms. 0 = Fire Geometry works normal.
	bool DisableFireGeoDmgMagazine = 0; // 1 = Disables Fire Geometry Damage for Magazines by Firearms. 0 = Fire Geometry works normal.
	bool enableAimSpeedModifier = 1; // 1 = enable ADS Speeds 0 = disable ADS Speeds, and reports "Disabled" for ADS Stat in UI Screens
	float GlobalRecoilMultiplier = 1.0; // This will globally affect all starting Recoil stats for weapons only
	float GlobalSwayMultiplier = 1.0; // This will globally affect all starting Sway stats for weapons only
	float GlobalAimSpeedMultiplier = 1.0; // This will globally affect all starting ADS stats for weapons only
	float BipodRecoilMultiplier = 0.2; // only for A-6 Weapons
	float BipodSwayModifier = 0.99; // only for A-6 Weapons
	int DisableHiCalRecoil = 0; // only for A-6 Weapons
	int HipFireMode = 1; // 0 = Default Crosshair Hip Fire, 1 = Hip Fire comes from the barrel of the weapon, 2 = only for A-6 Weapons, Hip Fire comes from the barrel of the weapon ONLY if laser is attached
	bool enableZoomingSounds = 1; // 1 = enable sound effects on zoom changes of optic  0 = no sounds
	bool enableZeroingSounds = 1; // 1 = enable sound effects on zeroing changes of optic  0 = no sounds
	bool enableAimingSounds = 1; // 1 = enable sound effects when you aim your weapon  0 = no sounds
	int enableInspectScreenStats = 1; // 1 = enable weapon stats at the inspect screen  0 = stats will not be displayed 
	int enableToolTipStats = 1; // 1 = enable weapon stats at the Tool Tips  0 = stats will not be displayed 
	int enableExpansionMarketWeaponStats = 1; // 1 = enable weapon stats for Expansion Market  0 = stats will not be displayed 
	bool SwitchBulletShockToInfectedProtect = 1; // 1 = Switch Bullet Shock Protection for Armor to Infected Protect values, 0 = Bullet Shock Protection display instead
	string WeaponRepairKitText = "Repair"; // Text for when repairing a weapon
	int KitCanRepairSupressors = 1; // 1 = Weapon Repair Kit can Repair Suppressors, 0 = Cannot Repair Suppressors
	int WeaponRepairKitTime = 10; // Time to complete Repair
	int WeaponRepairKitAddHealth = 100; // How much health to add to weapon
	int WeaponRepairKitHealthUse = 100; // How much points to take away from Weapon Repair Kit
	int StatBackground_Alpha = 140; // The background color for Stat Displays
	int StatBackground_R = 0; // The background color for Stat Displays
	int StatBackground_G = 0; // The background color for Stat Displays
	int StatBackground_B = 0; // The background color for Stat Displays
	int StatTextBackground_Alpha = 240; // The background color for Individual Stat Boxes
	int StatTextBackground_R = 0; // The background color for Individual Stat Boxes
	int StatTextBackground_G = 0; // The background color for Individual Stat Boxes
	int StatTextBackground_B = 0; // The background color for Individual Stat Boxes
	int StatTitle_Alpha = 255; // The color for the Text of the Titled Stat
	int StatTitle_R = 175;  // The color for the Text of the Titled Stat
	int StatTitle_G = 148;  // The color for the Text of the Titled Stat
	int StatTitle_B = 66;  // The color for the Text of the Titled Stat
	int StatValue_Alpha = 255;  // The color for the value of the Stat
	int StatValue_R = 255; // The color for the value of the Stat
	int StatValue_G = 255; // The color for the value of the Stat
	int StatValue_B = 255; // The color for the value of the Stat
	int StatValueBenefit_Alpha = 255; // The color for the value of the Stat if its Benefitial, Only for Attachments
	int StatValueBenefit_R = 50; // The color for the value of the Stat if its Benefitial, Only for Attachments
	int StatValueBenefit_G = 200; // The color for the value of the Stat if its Benefitial, Only for Attachments
	int StatValueBenefit_B = 100; // The color for the value of the Stat if its Benefitial, Only for Attachments
	int StatValueNonBenefit_Alpha = 255; // The color for the value of the Stat if its NON-Benefitial, Only for Attachments
	int StatValueNonBenefit_R = 225; // The color for the value of the Stat if its NON-Benefitial, Only for Attachments
	int StatValueNonBenefit_G = 45; // The color for the value of the Stat if its NON-Benefitial, Only for Attachments
	int StatValueNonBenefit_B = 45; // The color for the value of the Stat if its NON-Benefitial, Only for Attachments
	int StatRecoilBenefitValueForWeapons = 35; // The recoil value at which the weapons is Benefitial, Only for Weapons
	int StatSwayBenefitValueForWeapons = 35; // The Sway value at which the weapons is Benefitial, Only for Weapons
	float StatADSBenefitValueForWeapons = 0.3; // The ADS Time at which the weapons is Benefitial, Only for Weapons
	int StatRecoilNonBenefitValueForWeapons = 70; // The recoil value at which the weapons is NON-Benefitial, Only for Weapons
	int StatSwayNonBenefitValueForWeapons = 70; // The sway value at which the weapons is NON-Benefitial, Only for Weapons
	float StatADSNonBenefitValueForWeapons = 0.5; // The ADS Time at which the weapons is NON-Benefitial, Only for Weapons
	void Load() {
		if (GetGame().IsServer()) {
			if (FileExist(A6GunplayConfigPATH)) { 
				JsonFileLoader<A6GunplayModConfig>.JsonLoadFile(A6GunplayConfigPATH, this);
				if (FileUpdateEnable == "1") {
					Save();
				}	
			} else { 
				Print("[A6 Gunplay Mod] Loading default configuration...");
				MakeDirectory(A6GunplayConfigDIR);
				Save();
			}
		} else {
			Print("[A6 Gunplay Mod] Trying to load settings before they were received by the server.");
		}
	}
	void Save() {
		JsonFileLoader<A6GunplayModConfig>.JsonSaveFile(A6GunplayConfigPATH, this);
	}
}
static ref A6GunplayModConfig m_A6GunplayModConfig
static ref A6GunplayModConfig GetA6GunplayModConfig() {
	if (!m_A6GunplayModConfig) {
		m_A6GunplayModConfig = new A6GunplayModConfig();
		m_A6GunplayModConfig.Load();
	}
	return m_A6GunplayModConfig;
}