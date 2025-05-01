modded class InspectMenuNew {
	static bool isUsingInspectStats() {
		if ( GetA6GunplayModConfig().enableInspectScreenStats == 1 ) {
			return true;
		} else {
			return false;
		}	
	}
	static bool isUsingADSModifier() {
		if ( GetA6GunplayModConfig().enableAimSpeedModifier == 1 ) {
			return true;
		} else {
			return false;
		}	
	}
	bool HasRecoilModifiers(string itemType) {
		return GetGame().ConfigIsExisting(string.Format("CfgVehicles %1 recoilModifier", itemType));
	}
	bool HasSwayModifiers(string itemType) {
		return GetGame().ConfigIsExisting(string.Format("CfgVehicles %1 swayModifier", itemType));
	}
	bool HasADSModifiers(string itemType) {
		return GetGame().ConfigIsExisting(string.Format("CfgVehicles %1 aimSpeedModifier", itemType));
	}
	bool HasArmor(string itemType) {
		return GetGame().ConfigIsExisting(string.Format("CfgVehicles %1 DamageSystem GlobalArmor", itemType));
	}
	bool HasModifiers(string itemType) {
		if ( HasSwayModifiers(itemType) || HasADSModifiers(itemType) ) {
			return true;
		}
		return false;	
	}
	void UpdateItemDisplayStats(EntityAI item) {
		if (!item) return;
		ItemBase item_base = ItemBase.Cast(item);
		int StatBackground_Alpha = GetA6GunplayModConfig().StatBackground_Alpha;
		int StatBackground_R = GetA6GunplayModConfig().StatBackground_R;
		int StatBackground_G = GetA6GunplayModConfig().StatBackground_G;
		int StatBackground_B = GetA6GunplayModConfig().StatBackground_B;
		int StatTextBackground_Alpha = GetA6GunplayModConfig().StatTextBackground_Alpha;
		int StatTextBackground_R = GetA6GunplayModConfig().StatTextBackground_R;
		int StatTextBackground_G = GetA6GunplayModConfig().StatTextBackground_G;
		int StatTextBackground_B = GetA6GunplayModConfig().StatTextBackground_B;
		int StatTitle_Alpha = GetA6GunplayModConfig().StatTitle_Alpha;
		int StatTitle_R = GetA6GunplayModConfig().StatTitle_R;
		int StatTitle_G = GetA6GunplayModConfig().StatTitle_G;
		int StatTitle_B = GetA6GunplayModConfig().StatTitle_B;
		int StatValue_Alpha = GetA6GunplayModConfig().StatValue_Alpha;
		int StatValue_R = GetA6GunplayModConfig().StatValue_R;
		int StatValue_G = GetA6GunplayModConfig().StatValue_G;
		int StatValue_B = GetA6GunplayModConfig().StatValue_B;
		int StatValueBenefit_Alpha = GetA6GunplayModConfig().StatValueBenefit_Alpha;
		int StatValueBenefit_R = GetA6GunplayModConfig().StatValueBenefit_R;
		int StatValueBenefit_G = GetA6GunplayModConfig().StatValueBenefit_G;
		int StatValueBenefit_B = GetA6GunplayModConfig().StatValueBenefit_B;
		int StatValueNonBenefit_Alpha = GetA6GunplayModConfig().StatValueNonBenefit_Alpha;
		int StatValueNonBenefit_R = GetA6GunplayModConfig().StatValueNonBenefit_R;
		int StatValueNonBenefit_G = GetA6GunplayModConfig().StatValueNonBenefit_G;
		int StatValueNonBenefit_B = GetA6GunplayModConfig().StatValueNonBenefit_B;
		int StatRecoilBenefitValueForWeapons = GetA6GunplayModConfig().StatRecoilBenefitValueForWeapons;
		int StatSwayBenefitValueForWeapons = GetA6GunplayModConfig().StatSwayBenefitValueForWeapons;
		float StatADSBenefitValueForWeapons = GetA6GunplayModConfig().StatADSBenefitValueForWeapons;
		int StatRecoilNonBenefitValueForWeapons = GetA6GunplayModConfig().StatRecoilNonBenefitValueForWeapons;
		int StatSwayNonBenefitValueForWeapons = GetA6GunplayModConfig().StatSwayNonBenefitValueForWeapons;
		float StatADSNonBenefitValueForWeapons = GetA6GunplayModConfig().StatADSNonBenefitValueForWeapons;

		Widget statsDisplay = GetGame().GetWorkspace().CreateWidgets("A6_Gunplay/GUI/layouts/ItemStatsDisplay.layout", layoutRoot.FindAnyWidget("ItemFrameWidgetPanel"));

		ImageWidget itemstatsdisplay = ImageWidget.Cast(statsDisplay.FindAnyWidget("ItemStatsDisplay"));
		ImageWidget weaponstatsdisplay = ImageWidget.Cast(statsDisplay.FindAnyWidget("WeaponStatsDisplay"));
		ImageWidget ammostatsdisplay = ImageWidget.Cast(statsDisplay.FindAnyWidget("AmmoStatsDisplay"));
		ImageWidget armorstatsdisplay = ImageWidget.Cast(statsDisplay.FindAnyWidget("ArmorStatsDisplay"));
		itemstatsdisplay.SetColor(ARGB(StatBackground_Alpha, StatBackground_R, StatBackground_G, StatBackground_B) );
		weaponstatsdisplay.SetColor(ARGB(StatBackground_Alpha, StatBackground_R, StatBackground_G, StatBackground_B) );
		ammostatsdisplay.SetColor(ARGB(StatBackground_Alpha, StatBackground_R, StatBackground_G, StatBackground_B) );
		armorstatsdisplay.SetColor(ARGB(StatBackground_Alpha, StatBackground_R, StatBackground_G, StatBackground_B) );

		ImageWidget recoil_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("recoil"));
		ImageWidget sway_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("sway"));
		ImageWidget ads_Speed_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("ads_speed"));
		recoil_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		sway_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		ads_Speed_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));

		ImageWidget rof_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("rof"));
		ImageWidget cr_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("roundchamber"));
		ImageWidget velocity_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("velocity"));
		rof_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		cr_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		velocity_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));

		ImageWidget ammo_Velocity_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("ammo_velocity"));
		ImageWidget ammo_Health_Dmg_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("ammo_health_dmg"));
		ImageWidget ammo_Shock_Dmg_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("ammo_shock_dmg"));
		ImageWidget ammo_Armor_Dmg_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("ammo_armor_dmg"));
		ammo_Velocity_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		ammo_Health_Dmg_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		ammo_Shock_Dmg_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		ammo_Armor_Dmg_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));

		ImageWidget bulletp_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("bulletp"));
		ImageWidget meleep_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("meleep"));
		ImageWidget infectedp_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("infectedp"));
		ImageWidget explosivep_Background = ImageWidget.Cast(statsDisplay.FindAnyWidget("explosivep"));
		bulletp_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		meleep_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		infectedp_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		explosivep_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));

		TextWidget recoil_Title_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("recoil_text"));
		TextWidget sway_Title_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("sway_text"));
		TextWidget ads_Speed_Title_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("ads_speed_text"));
		recoil_Title_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		sway_Title_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		ads_Speed_Title_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));

		TextWidget recoil_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("recoil_perc"));
		TextWidget sway_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("sway_perc"));
		TextWidget ads_Speed_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("ads_speed_sec"));
		recoil_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		sway_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		ads_Speed_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));

		TextWidget rof_Title_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("rof_text"));
		TextWidget cr_Title_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("rc_text"));
		TextWidget velocity_Title_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("velocity_text"));
		rof_Title_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		cr_Title_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		velocity_Title_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));

		TextWidget rof_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("rof_value"));
		TextWidget cr_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("rc_type"));
		TextWidget velocity_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("velocity_value"));
		rof_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		cr_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		velocity_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));

		TextWidget ammo_Velocity_TitleText = TextWidget.Cast(statsDisplay.FindAnyWidget("ammo_velocity_text"));
		TextWidget health_Damage_TitleText = TextWidget.Cast(statsDisplay.FindAnyWidget("ammo_health_text"));
		TextWidget shock_Damage_TitleText = TextWidget.Cast(statsDisplay.FindAnyWidget("ammo_shock_text"));
		TextWidget armor_Damage_TitleText = TextWidget.Cast(statsDisplay.FindAnyWidget("ammo_armor_text"));
		ammo_Velocity_TitleText.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		health_Damage_TitleText.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		shock_Damage_TitleText.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		armor_Damage_TitleText.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));

		TextWidget ammo_Velocity_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("ammo_velocity_value"));
		TextWidget health_Damage_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("ammo_health_value"));
		TextWidget shock_Damage_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("ammo_shock_value"));
		TextWidget armor_Damage_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("ammo_armor_value"));
		ammo_Velocity_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		health_Damage_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		shock_Damage_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		armor_Damage_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));

		TextWidget bulletp_Title_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("bulletp_text"));
		TextWidget meleep_Title_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("meleep_text"));
		TextWidget infectedp_Title_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("infectedp_text"));
		TextWidget explosivep_Title_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("explosivep_text"));
		bulletp_Title_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		meleep_Title_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		infectedp_Title_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		explosivep_Title_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));

		TextWidget bulletp_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("bulletp_value"));
		TextWidget meleep_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("meleep_value"));
		TextWidget infectedp_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("infectedp_value"));
		TextWidget explosivep_Text = TextWidget.Cast(statsDisplay.FindAnyWidget("explosive_value"));
		bulletp_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		meleep_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		infectedp_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		explosivep_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));

		if (item_base) {
			Weapon_Base weapon_base = Weapon_Base.Cast(item_base);
			Ammunition_Base ammunition_base = Ammunition_Base.Cast(item_base);
			MagazineStorage magazine = MagazineStorage.Cast(item_base);
			Clothing clothing = Clothing.Cast(item_base);
			if (item_base) {
				string itemType = item.GetType();
				statsDisplay.Show(HasModifiers(itemType));
				itemstatsdisplay.Show(HasModifiers(itemType));
				weaponstatsdisplay.Show(false);
				ammostatsdisplay.Show(false);
				armorstatsdisplay.Show(false);
				recoil_Background.Show(HasRecoilModifiers(itemType));
				sway_Background.Show(HasSwayModifiers(itemType));
				ads_Speed_Background.Show(HasADSModifiers(itemType));
				rof_Background.Show(false);
				cr_Background.Show(false);
				velocity_Background.Show(false);
				ammo_Velocity_Background.Show(false);
				ammo_Health_Dmg_Background.Show(false);
				ammo_Shock_Dmg_Background.Show(false);
				ammo_Armor_Dmg_Background.Show(false);
				bulletp_Background.Show(false);
				meleep_Background.Show(false);
				infectedp_Background.Show(false);
				explosivep_Background.Show(false);
				if (item_base.GetRecoilModifierPercentage() < 0 ) {
					recoil_Text.SetText(string.Format("%1%%", item_base.GetRecoilModifierPercentage().ToString()));
					recoil_Text.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
				}
				if (item_base.GetRecoilModifierPercentage() == 0 ) {
					recoil_Text.SetText(string.Format("%1%%", item_base.GetRecoilModifierPercentage().ToString()));
					recoil_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
				}
				if (item_base.GetRecoilModifierPercentage() > 0 ) {
					recoil_Text.SetText(string.Format("+%1%%", item_base.GetRecoilModifierPercentage().ToString()));
					recoil_Text.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
				}
				recoil_Title_Text.SetText(string.Format("Recoil:"));
				if (item_base.GetSwayModifierPercentage() < 0 ) {
					sway_Text.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
					sway_Text.SetText(string.Format("%1%%", item_base.GetSwayModifierPercentage().ToString()));
				}
				if (item_base.GetSwayModifierPercentage() == 0 ) {
					sway_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					sway_Text.SetText(string.Format("%1%%", item_base.GetSwayModifierPercentage().ToString()));
				}
				if (item_base.GetSwayModifierPercentage() > 0 ) {
					sway_Text.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
					sway_Text.SetText(string.Format("+%1%%", item_base.GetSwayModifierPercentage().ToString()));
				}
				sway_Title_Text.SetText(string.Format("Sway:"));
				if (isUsingADSModifier()) {	
					if (item_base.GetAimSpeedModifierPercentage() < 0 ) {
						ads_Speed_Text.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
						ads_Speed_Text.SetText(string.Format("%1%%", item_base.GetAimSpeedModifierPercentage().ToString()));
					}
					if (item_base.GetAimSpeedModifierPercentage() == 0 ) {
						ads_Speed_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
						ads_Speed_Text.SetText(string.Format("%1%%", item_base.GetAimSpeedModifierPercentage().ToString()));
					}
					if (item_base.GetAimSpeedModifierPercentage() > 0 ) {
						ads_Speed_Text.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
						ads_Speed_Text.SetText(string.Format("+%1%%", item_base.GetAimSpeedModifierPercentage().ToString()));
					}
				} else {
					ads_Speed_Text.SetText(string.Format("DISABLED"));
					ads_Speed_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
				}	
				if (clothing) {
					array<string> inventorySlots = new array<string>;
					clothing.ConfigGetTextArray("inventorySlot", inventorySlots);
					if (HasArmor(itemType) || inventorySlots.Find("Vest") != -1 || inventorySlots.Find("Headgear") != -1) {
						statsDisplay.Show(true);
						itemstatsdisplay.Show(false);
						weaponstatsdisplay.Show(false);
						ammostatsdisplay.Show(false);
						armorstatsdisplay.Show(true);
						recoil_Background.Show(false);
						sway_Background.Show(false);
						ads_Speed_Background.Show(false);
						rof_Background.Show(false);
						cr_Background.Show(false);
						velocity_Background.Show(false);
						ammo_Velocity_Background.Show(false);
						ammo_Health_Dmg_Background.Show(false);
						ammo_Shock_Dmg_Background.Show(false);
						ammo_Armor_Dmg_Background.Show(false);
						bulletp_Background.Show(true);
						meleep_Background.Show(true);
						infectedp_Background.Show(true);
						explosivep_Background.Show(true);
						float bulletvalue  = g_Game.ConfigGetFloat(string.Format("CfgVehicles %1 DamageSystem GlobalArmor %2 Health damage", itemType, "Projectile"));
						float bulletpro = 100 - ( bulletvalue * 100 );
						if ( bulletpro == 100 ){
							bulletpro = 0;
						}
						bulletp_Text.SetText(string.Format("%1%%", bulletpro));
						float meleevalue  = g_Game.ConfigGetFloat(string.Format("CfgVehicles %1 DamageSystem GlobalArmor %2 Health damage", itemType, "Melee"));
						float meleepro = 100 - ( meleevalue * 100 );
						if ( meleepro == 100 ){
							meleepro = 0;
						}
						meleep_Text.SetText(string.Format("%1%%", meleepro));
						if(GetA6GunplayModConfig().SwitchBulletShockToInfectedProtect) {
							float infectedvalue  = g_Game.ConfigGetFloat(string.Format("CfgVehicles %1 DamageSystem GlobalArmor %2 Health damage", itemType, "Infected"));
							float infectedpro = 100 - ( infectedvalue * 100 );
							if ( infectedpro == 100 )
							{
								infectedpro = 0;
							}
							infectedp_Title_Text.SetText(string.Format("Infected Protect HP:"));
							infectedp_Text.SetText(string.Format("%1%%", infectedpro));
						} else {
							float bulletshockvalue  = g_Game.ConfigGetFloat(string.Format("CfgVehicles %1 DamageSystem GlobalArmor %2 Shock damage", itemType, "Projectile"));
							float bulletshock = 100 - ( bulletshockvalue * 100 );
							if ( bulletshock == 100 ) {
								bulletshock = 0;
							}
							infectedp_Title_Text.SetText(string.Format("Bullet SHK Protect:"));
							infectedp_Text.SetText(string.Format("%1%%", bulletshock));
						}	
						float explosivevalue  = g_Game.ConfigGetFloat(string.Format("CfgVehicles %1 DamageSystem GlobalArmor %2 Health damage", itemType, "FragGrenade"));
						float explosivepro = 100 - ( explosivevalue * 100 );
						if ( explosivepro == 100 ) {
							explosivepro = 0;
						}
						explosivep_Text.SetText(string.Format("%1%%", explosivepro));
					}
				}	
				if (ammunition_base) {
					statsDisplay.Show(true);
					itemstatsdisplay.Show(false);
					weaponstatsdisplay.Show(false);
					ammostatsdisplay.Show(true);
					armorstatsdisplay.Show(false);
					recoil_Background.Show(false);
					sway_Background.Show(false);
					ads_Speed_Background.Show(false);
					rof_Background.Show(false);
					cr_Background.Show(false);
					velocity_Background.Show(false);
					ammo_Velocity_Background.Show(true);
					ammo_Health_Dmg_Background.Show(true);
					ammo_Shock_Dmg_Background.Show(true);
					ammo_Armor_Dmg_Background.Show(true);
					bulletp_Background.Show(false);
					meleep_Background.Show(false);
					infectedp_Background.Show(false);
					explosivep_Background.Show(false);
					string btype = ammunition_base.ConfigGetString("ammo");
					ammo_Velocity_Text.SetText(string.Format("%1 m/s", g_Game.ConfigGetFloat(string.Format("CfgAmmo %1 initSpeed", btype))));
					ammo_Velocity_TitleText.SetText(string.Format("Velocity:"));
					health_Damage_Text.SetText(string.Format("%1", g_Game.ConfigGetFloat(string.Format("CfgAmmo %1 DamageApplied Health damage", btype))));
					health_Damage_TitleText.SetText(string.Format("Health Dmg:"));
					shock_Damage_Text.SetText(string.Format("%1", g_Game.ConfigGetFloat(string.Format("CfgAmmo %1 DamageApplied Shock damage", btype))));
					shock_Damage_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					shock_Damage_TitleText.SetText(string.Format("Shock Dmg:"));
					armor_Damage_Text.SetText(string.Format("x%1", g_Game.ConfigGetFloat(string.Format("CfgAmmo %1 DamageApplied Health armorDamage", btype))));
					armor_Damage_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					armor_Damage_TitleText.SetText(string.Format("Armor Dmg:"));
					if(g_Game.ConfigGetFloat(string.Format("CfgAmmo %1 DamageApplied Health armorDamage", btype)) == 0) {
			            armor_Damage_Text.SetText(string.Format("x1"));
			        }
				}
				if (magazine) {
					statsDisplay.Show(true);
					itemstatsdisplay.Show(false);
					weaponstatsdisplay.Show(false);
					ammostatsdisplay.Show(true);
					armorstatsdisplay.Show(false);
					recoil_Background.Show(false);
					sway_Background.Show(false);
					ads_Speed_Background.Show(false);
					rof_Background.Show(false);
					cr_Background.Show(false);
					velocity_Background.Show(false);
					ammo_Velocity_Background.Show(true);
					ammo_Health_Dmg_Background.Show(true);
					ammo_Shock_Dmg_Background.Show(true);
					ammo_Armor_Dmg_Background.Show(true);
					bulletp_Background.Show(false);
					meleep_Background.Show(false);
					infectedp_Background.Show(false);
					explosivep_Background.Show(false);
					for (int i = 0; i < magazine.GetAmmoCount(); i++) {
						float damage;
						string className;
						magazine.GetCartridgeAtIndex(i, damage, className);
					}
			        health_Damage_Text.SetText(string.Format("%1 / %2", magazine.GetAmmoCount(), magazine.ConfigGetFloat("count")));
					health_Damage_TitleText.SetText(string.Format("Ammo Cnt:"));
					string roundname;
					string roundvariant;
			        if (className == string.Empty) { roundname = string.Format("No Round"); }
			        if (className.Contains("22")) { roundname = string.Format(".22 LR"); }
					if (className.Contains("12GaugePellets")) { roundname = string.Format("00 Buckshot"); }
					if (className.Contains("12GaugeSlug")) { roundname = string.Format("Rifled Slugs"); }
					if (className.Contains("12GaugeRubberSlug")) { roundname = string.Format("Rubber Slugs"); }
					if (className.Contains("357")) { roundname = string.Format(".357"); }
					if (className.Contains("45ACP")) { roundname = string.Format(".45 ACP"); }
					if (className.Contains("9x19")) { roundname = string.Format("9x19"); }
					if (className.Contains("380")) { roundname = string.Format(".380 ACP"); }
					if (className.Contains("9x39")) { roundname = string.Format("9x39"); }
					if (className.Contains("545x39")) { roundname = string.Format("5.45x39"); }			
					if (className.Contains("556x45")) { roundname = string.Format("5.56x45"); }
					if (className.Contains("762x39")) { roundname = string.Format("7.62x39"); }
					if (className.Contains("308Win")) { roundname = string.Format(".308 Win"); }	
					if (className.Contains("762x51")) { roundname = string.Format("7.62x54"); }
					if (className.Contains("762x54")) { roundname = string.Format("7.62x54"); }
					// Custom
					if (className.Contains("127x99")) { roundname = string.Format(".50 BMG"); }
					if (className.Contains("50BMG")) { roundname = string.Format(".50 BMG"); }
					if (className.Contains("50Cal")) { roundname = string.Format(".50 BMG"); }
					if (className.Contains("127x55")) { roundname = string.Format("12.7×55"); }
					if (className.Contains("145x114")) { roundname = string.Format("14.5x114"); }
					if (className.Contains("277")) { roundname = string.Format(".277"); }
					if (className.Contains("338")) { roundname = string.Format(".338"); }
					if (className.Contains("408")) { roundname = string.Format(".408"); }
					if (className.Contains("57x28")) { roundname = string.Format("5.7x28"); }
					if (className.Contains("500SW")) { roundname = string.Format(".500 S&W"); }
					if (className.Contains("50AE")) { roundname = string.Format(".50 AE"); }
					if (className.Contains("50Beo")) { roundname = string.Format(".50 Beo"); }
					if (className.Contains("68SPC")) { roundname = string.Format("6.8 SPC"); }	
					if (className.Contains("86BLK")) { roundname = string.Format("8.6 BLK"); }
					if (className.Contains("46x30")) { roundname = string.Format("4.6×30"); }		
					if (className.Contains("300")) { roundname = string.Format(".300 BLK"); }
					// Variants 
					if (className.Contains("AP")) { roundvariant = string.Format(" AP"); }
					if (className.Contains("Tracer")) { roundvariant = string.Format(" Tracer"); }
					if (className.Contains("AP63")) { roundvariant = string.Format(" AP 6.3"); }
					if (className.Contains("HP")) { roundvariant = string.Format(" HP"); }
					if (className.Contains("FMJ")) { roundvariant = string.Format(" FMJ"); }
					if (className.Contains("Tgs")) { roundvariant = string.Format(" T gs"); }
					if (className.Contains("PSgs")) { roundvariant = string.Format(" PS gs"); }
					if (className.Contains("PPgs")) { roundvariant = string.Format(" PP gs"); }
					if (className.Contains("BTgs")) { roundvariant = string.Format(" BT gs"); }
					if (className.Contains("BPgs")) { roundvariant = string.Format(" BP gs"); }
					if (className.Contains("BSgs")) { roundvariant = string.Format(" BS gs"); }
					if (className.Contains("M856")) { roundvariant = string.Format(" M856"); }
					if (className.Contains("M855")) { roundvariant = string.Format(" M855"); }
					if (className.Contains("M856A1")) { roundvariant = string.Format(" M856A1"); }
					if (className.Contains("M855A1")) { roundvariant = string.Format(" M855A1"); }
					if (className.Contains("M995")) { roundvariant = string.Format(" M995"); }
					if (className.Contains("T45M1gzh")) { roundvariant = string.Format(" T-45M1 gzh"); }
					if (className.Contains("PSgzh")) { roundvariant = string.Format(" PS gzh"); }
					if (className.Contains("PPgzh")) { roundvariant = string.Format(" PP gzh"); }
					if (className.Contains("BPgzh")) { roundvariant = string.Format(" BP"); }
					if (className.Contains("MAIAP")) { roundvariant = string.Format(" MAI AP"); }
					if (className.Contains("BCPFMJ")) { roundvariant = string.Format(" BCP FMJ"); }
					if (className.Contains("M80")) { roundvariant = string.Format(" M80"); }
					if (className.Contains("M62")) { roundvariant = string.Format(" M62 Tracer"); }
					if (className.Contains("M61")) { roundvariant = string.Format(" M61"); }
					if (className.Contains("M993")) { roundvariant = string.Format(" M993"); }
					if (className.Contains("HPBT")) { roundvariant = string.Format(" HP BT"); }
					if (className.Contains("T46Mgzh")) { roundvariant = string.Format(" T-46M gzh"); }
					if (className.Contains("LPSgzh")) { roundvariant = string.Format(" LPS gzh"); }
					if (className.Contains("BTgzh")) { roundvariant = string.Format(" BT gzh"); }
					if (className.Contains("SNBgzh")) { roundvariant = string.Format(" SNB gzh"); }
					if (roundvariant == string.Empty) { roundvariant = string.Format(""); }
					ammo_Velocity_Text.SetText(string.Format("%1%2", roundname, roundvariant ));
					ammo_Velocity_TitleText.SetText(string.Format("Top Rnd:"));
					if (isUsingADSModifier()) {	
						if (magazine.GetAimSpeedModifierPercentage() < 0 ) {
							shock_Damage_Text.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
							shock_Damage_Text.SetText(string.Format("%1%%", (magazine.GetAimSpeedModifierPercentage().ToString())));
						}
						if (magazine.GetAimSpeedModifierPercentage() == 0 ) {
							shock_Damage_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
							shock_Damage_Text.SetText(string.Format("%1%%", (magazine.GetAimSpeedModifierPercentage().ToString())));
						}
						if (magazine.GetAimSpeedModifierPercentage() > 0 ) {
							shock_Damage_Text.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
							shock_Damage_Text.SetText(string.Format("+%1%%", (magazine.GetAimSpeedModifierPercentage().ToString())));
						}
						shock_Damage_TitleText.SetText(string.Format("ADS %:"));
					} else {
						shock_Damage_Text.SetText(string.Format("DISABLED"));
						shock_Damage_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					}
					if (magazine.GetRecoilModifierPercentage() < 0 ) {
						armor_Damage_Text.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
						armor_Damage_Text.SetText(string.Format("%1%%", magazine.GetRecoilModifierPercentage().ToString()));
					}
					if (magazine.GetRecoilModifierPercentage() == 0 ) {
						armor_Damage_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
						armor_Damage_Text.SetText(string.Format("%1%%", magazine.GetRecoilModifierPercentage().ToString()));
					}
					if (magazine.GetRecoilModifierPercentage() > 0 ) {
						armor_Damage_Text.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
						armor_Damage_Text.SetText(string.Format("+%1%%", magazine.GetRecoilModifierPercentage().ToString()));
					}
					armor_Damage_TitleText.SetText(string.Format("Recoil:"));
				}
				if (weapon_base) {
					statsDisplay.Show(true);
					itemstatsdisplay.Show(true);
					weaponstatsdisplay.Show(true);
					ammostatsdisplay.Show(false);
					armorstatsdisplay.Show(false);
					recoil_Background.Show(true);
					sway_Background.Show(true);
					ads_Speed_Background.Show(true);
					rof_Background.Show(true);
					cr_Background.Show(true);
					velocity_Background.Show(true);
					ammo_Velocity_Background.Show(false);
					ammo_Health_Dmg_Background.Show(false);
					ammo_Shock_Dmg_Background.Show(false);
					ammo_Armor_Dmg_Background.Show(false);
					bulletp_Background.Show(false);
					meleep_Background.Show(false);
					infectedp_Background.Show(false);
					explosivep_Background.Show(false);
					recoil_Text.SetText(string.Format("%1%%", weapon_base.GetPropertyModifierObject().GetRecoilModifierPercentage().ToString().SubstringUtf8(0,5)));
					if (weapon_base.GetPropertyModifierObject().GetRecoilModifierPercentage() < StatRecoilBenefitValueForWeapons ) {
						recoil_Text.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
					}
					if (weapon_base.GetPropertyModifierObject().GetRecoilModifierPercentage() >= StatRecoilBenefitValueForWeapons ) {
						recoil_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					}
					if (weapon_base.GetPropertyModifierObject().GetRecoilModifierPercentage() >= StatRecoilNonBenefitValueForWeapons ) {
						recoil_Text.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
					}
					recoil_Title_Text.SetText(string.Format("Recoil:"));		
					sway_Text.SetText(string.Format("%1%%", weapon_base.GetPropertyModifierObject().GetSwayModifierPercentage().ToString().SubstringUtf8(0,5)));
					if (weapon_base.GetPropertyModifierObject().GetSwayModifierPercentage() < StatSwayBenefitValueForWeapons ) {
						sway_Text.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
					}
					if (weapon_base.GetPropertyModifierObject().GetSwayModifierPercentage() >= StatSwayBenefitValueForWeapons ) {
						sway_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					}
					if (weapon_base.GetPropertyModifierObject().GetSwayModifierPercentage() > StatSwayNonBenefitValueForWeapons ) {
						sway_Text.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
					}
					sway_Title_Text.SetText(string.Format("Sway:"));			
					if (isUsingADSModifier()) {	
						ads_Speed_Text.SetText(string.Format("%1 secs", weapon_base.GetPropertyModifierObject().GetAimSpeedModifierPercentage().ToString().SubstringUtf8(0,4)));
						if (weapon_base.GetPropertyModifierObject().GetAimSpeedModifierPercentage() < StatADSBenefitValueForWeapons ) {
							ads_Speed_Text.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
						}
						if (weapon_base.GetPropertyModifierObject().GetAimSpeedModifierPercentage() >= StatADSBenefitValueForWeapons ) {
							ads_Speed_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
						}
						if (weapon_base.GetPropertyModifierObject().GetAimSpeedModifierPercentage() > StatADSNonBenefitValueForWeapons ) {
							ads_Speed_Text.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
						}
					} else {
						ads_Speed_Text.SetText(string.Format("DISABLED"));
						ads_Speed_Text.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					}	
					ads_Speed_Title_Text.SetText(string.Format("ADS:"));
					rof_Text.SetText(string.Format("%1 RPM", weapon_base.GetRateOfFire()));
					if (weapon_base.GetRateOfFire() == 60) {
						rof_Text.SetText(string.Format("Single"));
					}
					velocity_Text.SetText(string.Format("%1 m/s", weapon_base.GetBarrelVelocity()));
					if ( weapon_base.GetBarrelVelocity() == 0) {
						velocity_Text.SetText(string.Format("N/A"));
					}
					string chamberedAmmoTypeName;
					float chamberedAmmoDmg;
					weapon_base.GetCartridgeInfo(0, chamberedAmmoDmg, chamberedAmmoTypeName);
					string chamberedroundname;
					string chamberedroundvariant;
			        if (chamberedAmmoTypeName == string.Empty) { chamberedroundname = string.Format("No Round"); }
			        if (chamberedAmmoTypeName.Contains("22")) { chamberedroundname = string.Format(".22 LR"); }
					if (chamberedAmmoTypeName.Contains("12GaugePellets")) { chamberedroundname = string.Format("00 Buckshot"); }
					if (chamberedAmmoTypeName.Contains("12GaugeSlug")) { chamberedroundname = string.Format("Rifled Slugs"); }
					if (chamberedAmmoTypeName.Contains("12GaugeRubberSlug")) { chamberedroundname = string.Format("Rubber Slugs"); }
					if (chamberedAmmoTypeName.Contains("357")) { chamberedroundname = string.Format(".357"); }
					if (chamberedAmmoTypeName.Contains("45ACP")) { chamberedroundname = string.Format(".45 ACP"); }
					if (chamberedAmmoTypeName.Contains("9x19")) { chamberedroundname = string.Format("9x19"); }
					if (chamberedAmmoTypeName.Contains("380")) { chamberedroundname = string.Format(".380 ACP"); }
					if (chamberedAmmoTypeName.Contains("9x39")) { chamberedroundname = string.Format("9x39"); }
					if (chamberedAmmoTypeName.Contains("545x39")) { chamberedroundname = string.Format("5.45x39"); }			
					if (chamberedAmmoTypeName.Contains("556x45")) { chamberedroundname = string.Format("5.56x45"); }
					if (chamberedAmmoTypeName.Contains("762x39")) { chamberedroundname = string.Format("7.62x39"); }
					if (chamberedAmmoTypeName.Contains("308Win")) { chamberedroundname = string.Format(".308 Win"); }	
					if (chamberedAmmoTypeName.Contains("762x51")) { chamberedroundname = string.Format("7.62x51"); }
					if (chamberedAmmoTypeName.Contains("762x54")) { chamberedroundname = string.Format("7.62x54"); }
					// Custom
					if (chamberedAmmoTypeName.Contains("127x99")) { chamberedroundname = string.Format(".50 BMG"); }
					if (chamberedAmmoTypeName.Contains("50BMG")) { chamberedroundname = string.Format(".50 BMG"); }
					if (chamberedAmmoTypeName.Contains("50Cal")) { chamberedroundname = string.Format(".50 BMG"); }
					if (chamberedAmmoTypeName.Contains("127x55")) { chamberedroundname = string.Format("12.7×55"); }
					if (chamberedAmmoTypeName.Contains("145x114")) { chamberedroundname = string.Format("14.5x114"); }
					if (chamberedAmmoTypeName.Contains("277")) { chamberedroundname = string.Format(".277"); }
					if (chamberedAmmoTypeName.Contains("338")) { chamberedroundname = string.Format(".338"); }
					if (chamberedAmmoTypeName.Contains("408")) { chamberedroundname = string.Format(".408"); }
					if (chamberedAmmoTypeName.Contains("57x28")) { chamberedroundname = string.Format("5.7x28"); }
					if (chamberedAmmoTypeName.Contains("500SW")) { chamberedroundname = string.Format(".500 S&W"); }
					if (chamberedAmmoTypeName.Contains("50AE")) { chamberedroundname = string.Format(".50 AE"); }
					if (chamberedAmmoTypeName.Contains("50Beo")) { chamberedroundname = string.Format(".50 Beo"); }
					if (chamberedAmmoTypeName.Contains("68SPC")) { chamberedroundname = string.Format("6.8 SPC"); }	
					if (chamberedAmmoTypeName.Contains("86BLK")) { chamberedroundname = string.Format("8.6 BLK"); }
					if (chamberedAmmoTypeName.Contains("46x30")) { chamberedroundname = string.Format("4.6×30"); }		
					if (chamberedAmmoTypeName.Contains("300")) { chamberedroundname = string.Format(".300 BLK"); }
					// Variants 
					if (chamberedAmmoTypeName.Contains("AP")) { chamberedroundvariant = string.Format(" AP"); }
					if (chamberedAmmoTypeName.Contains("Tracer")) { chamberedroundvariant = string.Format(" Tracer"); }
					if (chamberedAmmoTypeName.Contains("AP63")) { chamberedroundvariant = string.Format(" AP 6.3"); }
					if (chamberedAmmoTypeName.Contains("HP")) { chamberedroundvariant = string.Format(" HP"); }
					if (chamberedAmmoTypeName.Contains("FMJ")) { chamberedroundvariant = string.Format(" FMJ"); }
					if (chamberedAmmoTypeName.Contains("Tgs")) { chamberedroundvariant = string.Format(" T gs"); }
					if (chamberedAmmoTypeName.Contains("PSgs")) { chamberedroundvariant = string.Format(" PS gs"); }
					if (chamberedAmmoTypeName.Contains("PPgs")) { chamberedroundvariant = string.Format(" PP gs"); }
					if (chamberedAmmoTypeName.Contains("BTgs")) { chamberedroundvariant = string.Format(" BT gs"); }
					if (chamberedAmmoTypeName.Contains("BPgs")) { chamberedroundvariant = string.Format(" BP gs"); }
					if (chamberedAmmoTypeName.Contains("BSgs")) { chamberedroundvariant = string.Format(" BS gs"); }
					if (chamberedAmmoTypeName.Contains("M856")) { chamberedroundvariant = string.Format(" M856"); }
					if (chamberedAmmoTypeName.Contains("M855")) { chamberedroundvariant = string.Format(" M855"); }
					if (chamberedAmmoTypeName.Contains("M856A1")) { chamberedroundvariant = string.Format(" M856A1"); }
					if (chamberedAmmoTypeName.Contains("M855A1")) { chamberedroundvariant = string.Format(" M855A1"); }
					if (chamberedAmmoTypeName.Contains("M995")) { chamberedroundvariant = string.Format(" M995"); }
					if (chamberedAmmoTypeName.Contains("T45M1gzh")) { chamberedroundvariant = string.Format(" T-45M1 gzh"); }
					if (chamberedAmmoTypeName.Contains("PSgzh")) { chamberedroundvariant = string.Format(" PS gzh"); }
					if (chamberedAmmoTypeName.Contains("PPgzh")) { chamberedroundvariant = string.Format(" PP gzh"); }
					if (chamberedAmmoTypeName.Contains("BPgzh")) { chamberedroundvariant = string.Format(" BP"); }
					if (chamberedAmmoTypeName.Contains("MAIAP")) { chamberedroundvariant = string.Format(" MAI AP"); }
					if (chamberedAmmoTypeName.Contains("BCPFMJ")) { chamberedroundvariant = string.Format(" BCP FMJ"); }
					if (chamberedAmmoTypeName.Contains("M80")) { chamberedroundvariant = string.Format(" M80"); }
					if (chamberedAmmoTypeName.Contains("M62")) { chamberedroundvariant = string.Format(" M62 Tracer"); }
					if (chamberedAmmoTypeName.Contains("M61")) { chamberedroundvariant = string.Format(" M61"); }
					if (chamberedAmmoTypeName.Contains("M993")) { chamberedroundvariant = string.Format(" M993"); }
					if (chamberedAmmoTypeName.Contains("HPBT")) { chamberedroundvariant = string.Format(" HP BT"); }
					if (chamberedAmmoTypeName.Contains("T46Mgzh")) { chamberedroundvariant = string.Format(" T-46M gzh"); }
					if (chamberedAmmoTypeName.Contains("LPSgzh")) { chamberedroundvariant = string.Format(" LPS gzh"); }
					if (chamberedAmmoTypeName.Contains("BTgzh")) { chamberedroundvariant = string.Format(" BT gzh"); }
					if (chamberedAmmoTypeName.Contains("SNBgzh")) { chamberedroundvariant = string.Format(" SNB gzh"); }
					if (chamberedroundvariant == string.Empty) { chamberedroundvariant = string.Format(""); }
					cr_Text.SetText(string.Format("%1%2", chamberedroundname, chamberedroundvariant));
				}
			} else {
				statsDisplay.Show(false);
				itemstatsdisplay.Show(false);
				weaponstatsdisplay.Show(false);
				ammostatsdisplay.Show(false);
				armorstatsdisplay.Show(false);
				recoil_Background.Show(false);
				sway_Background.Show(false);
				ads_Speed_Background.Show(false);
				rof_Background.Show(false);
				cr_Background.Show(false);
				velocity_Background.Show(false);
				ammo_Velocity_Background.Show(false);
				ammo_Health_Dmg_Background.Show(false);
				ammo_Shock_Dmg_Background.Show(false);
				ammo_Armor_Dmg_Background.Show(false);
				bulletp_Background.Show(false);
				meleep_Background.Show(false);
				infectedp_Background.Show(false);
				explosivep_Background.Show(false);
			}	
		}	
	}
	override void SetItem(EntityAI item) {
		super.SetItem(item);
		if (isUsingInspectStats()) {
			UpdateItemDisplayStats(item);
		}	
	}
}