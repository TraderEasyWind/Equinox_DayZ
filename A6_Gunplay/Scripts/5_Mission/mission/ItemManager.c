modded class ItemManager {
	Widget m_ItemStatsDisplay;
	Widget m_ItemStats;

	static bool isUsingToolTipStats() {
		if ( GetA6GunplayModConfig().enableToolTipStats == 1 ) {
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
		if ( HasSwayModifiers(itemType) && HasADSModifiers(itemType) ) {
			return true;
		}
		return false;	
	}
	void ItemManager(Widget root) {
		if (isUsingToolTipStats()) {
        	m_ItemStatsDisplay = root.FindAnyWidget("GridSpacerWidget1");
        	m_ItemStats = GetGame().GetWorkspace().CreateWidgets("A6_Gunplay/GUI/layouts/ItemStatsToolTip.layout", m_ItemStatsDisplay);
        }	
    }
	override void PrepareTooltip(EntityAI item, int x = 0, int y = 0) {
        super.PrepareTooltip(item, x, y);
        if (isUsingToolTipStats()) {
        	if (item) {	
        		string itemType = item.GetType();
        		m_ItemStats.Show(HasModifiers(itemType));
        		UpdateItemDisplayStats(item);
        	}	
        }		
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

		ImageWidget m_ItemStats_Background = ImageWidget.Cast(m_ItemStats.FindAnyWidget("ItemStatsDisplay"));
		m_ItemStats_Background.SetColor(ARGB(StatBackground_Alpha, StatBackground_R, StatBackground_G, StatBackground_B) );

		ImageWidget m_Recoil_Background = ImageWidget.Cast(m_ItemStats.FindAnyWidget("recoil"));
		ImageWidget m_Sway_Background = ImageWidget.Cast(m_ItemStats.FindAnyWidget("sway"));
		ImageWidget m_ADS_Background = ImageWidget.Cast(m_ItemStats.FindAnyWidget("ads_speed"));
		ImageWidget m_Round_Background = ImageWidget.Cast(m_ItemStats.FindAnyWidget("round"));
		m_Recoil_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		m_Sway_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		m_ADS_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		m_Round_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));

		ImageWidget m_Bullet_Background = ImageWidget.Cast(m_ItemStats.FindAnyWidget("bulletp"));
		ImageWidget m_Melee_Background = ImageWidget.Cast(m_ItemStats.FindAnyWidget("meleep"));
		ImageWidget m_Infected_Background = ImageWidget.Cast(m_ItemStats.FindAnyWidget("infectedp"));
		ImageWidget m_Explosive_Background = ImageWidget.Cast(m_ItemStats.FindAnyWidget("explosivep"));
		m_Bullet_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		m_Melee_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		m_Infected_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));
		m_Explosive_Background.SetColor(ARGB(StatTextBackground_Alpha, StatTextBackground_R, StatTextBackground_G, StatTextBackground_B));

		TextWidget m_Recoil_Text = TextWidget.Cast(m_ItemStats.FindAnyWidget("recoil_text"));
		TextWidget m_Sway_Text = TextWidget.Cast(m_ItemStats.FindAnyWidget("sway_text"));
		TextWidget m_ADS_Speed_Text = TextWidget.Cast(m_ItemStats.FindAnyWidget("ads_speed_text"));
		TextWidget m_Round_Text = TextWidget.Cast(m_ItemStats.FindAnyWidget("round_widget_text"));
		m_Recoil_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		m_Sway_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		m_ADS_Speed_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		m_Round_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));

		TextWidget m_Bullet_Text = TextWidget.Cast(m_ItemStats.FindAnyWidget("bulletp_text"));
		TextWidget m_Melee_Text = TextWidget.Cast(m_ItemStats.FindAnyWidget("meleep_text"));
		TextWidget m_Infected_Text = TextWidget.Cast(m_ItemStats.FindAnyWidget("infectedp_text"));
		TextWidget m_Explosive_Text = TextWidget.Cast(m_ItemStats.FindAnyWidget("explosivep_text"));
		m_Bullet_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		m_Melee_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		m_Infected_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));
		m_Explosive_Text.SetColor(ARGB(StatTitle_Alpha, StatTitle_R, StatTitle_G, StatTitle_B));

		TextWidget m_Recoil_Value = TextWidget.Cast(m_ItemStats.FindAnyWidget("recoil_perc"));
		TextWidget m_Sway_Value = TextWidget.Cast(m_ItemStats.FindAnyWidget("sway_perc"));
		TextWidget m_ADS_Value = TextWidget.Cast(m_ItemStats.FindAnyWidget("ads_speed_sec"));
		TextWidget m_Round_Value = TextWidget.Cast(m_ItemStats.FindAnyWidget("round_widget_value"));
		m_Recoil_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		m_Sway_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		m_ADS_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		m_Round_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));

		TextWidget m_Bullet_Value = TextWidget.Cast(m_ItemStats.FindAnyWidget("bulletp_value"));
		TextWidget m_Melee_Value = TextWidget.Cast(m_ItemStats.FindAnyWidget("meleep_value"));
		TextWidget m_Infected_Value = TextWidget.Cast(m_ItemStats.FindAnyWidget("infectedp_value"));
		TextWidget m_Explosive_Value = TextWidget.Cast(m_ItemStats.FindAnyWidget("explosivep_value"));
		m_Bullet_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		m_Melee_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		m_Infected_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
		m_Explosive_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));

		if (item_base) {
			Weapon_Base weapon_base = Weapon_Base.Cast(item_base);
			Ammunition_Base ammunition_base = Ammunition_Base.Cast(item_base);
			MagazineStorage magazine = MagazineStorage.Cast(item_base);
			Clothing clothing = Clothing.Cast(item_base);
			if (item_base) {
				string itemType = item.GetType();
				m_Recoil_Background.Show(HasRecoilModifiers(itemType));
				m_Sway_Background.Show(HasSwayModifiers(itemType));
				m_ADS_Background.Show(HasADSModifiers(itemType));
				m_Round_Background.Show(false);
				m_Bullet_Background.Show(false);
				m_Melee_Background.Show(false);
				m_Infected_Background.Show(false);
				m_Explosive_Background.Show(false);
				if (item_base.GetRecoilModifierPercentage() < 0 ) {
					m_Recoil_Value.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
					m_Recoil_Value.SetText(string.Format("%1%%", item_base.GetRecoilModifierPercentage().ToString()));
				}
				if (item_base.GetRecoilModifierPercentage() == 0 ) {
					m_Recoil_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					m_Recoil_Value.SetText(string.Format("%1%%", item_base.GetRecoilModifierPercentage().ToString()));
				}
				if (item_base.GetRecoilModifierPercentage() > 0 ) {
					m_Recoil_Value.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
					m_Recoil_Value.SetText(string.Format("+%1%%", item_base.GetRecoilModifierPercentage().ToString()));
				}
				m_Recoil_Text.SetText(string.Format("Recoil:"));
				if (item_base.GetSwayModifierPercentage() < 0 ) {
					m_Sway_Value.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
					m_Sway_Value.SetText(string.Format("%1%%", item_base.GetSwayModifierPercentage().ToString()));
				}
				if (item_base.GetSwayModifierPercentage() == 0 ) {
					m_Sway_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					m_Sway_Value.SetText(string.Format("%1%%", item_base.GetSwayModifierPercentage().ToString()));
				}
				if (item_base.GetSwayModifierPercentage() > 0 ) {
					m_Sway_Value.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
					m_Sway_Value.SetText(string.Format("+%1%%", item_base.GetSwayModifierPercentage().ToString()));
				}
				m_Sway_Text.SetText(string.Format("Sway:"));
				if (isUsingADSModifier()) {	
					if (item_base.GetAimSpeedModifierPercentage() < 0 ) {
						m_ADS_Value.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
						m_ADS_Value.SetText(string.Format("%1%%", item_base.GetAimSpeedModifierPercentage().ToString()));
					}
					if (item_base.GetAimSpeedModifierPercentage() == 0 ) {
						m_ADS_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
						m_ADS_Value.SetText(string.Format("%1%%", item_base.GetAimSpeedModifierPercentage().ToString()));
					}
					if (item_base.GetAimSpeedModifierPercentage() > 0 ) {
						m_ADS_Value.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
						m_ADS_Value.SetText(string.Format("+%1%%", item_base.GetAimSpeedModifierPercentage().ToString()));
					}
				} else {
					m_ADS_Value.SetText(string.Format("DISABLED"));
					m_ADS_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
				}
				m_ADS_Speed_Text.SetText(string.Format("ADS:"));

				if (clothing) {
					array<string> inventorySlots = new array<string>;
					clothing.ConfigGetTextArray("inventorySlot", inventorySlots);

					if (HasArmor(itemType) || inventorySlots.Find("Vest") != -1 || inventorySlots.Find("Headgear") != -1) {
						m_ItemStats.Show(true);
						m_Recoil_Background.Show(false);
						m_Sway_Background.Show(false);
						m_ADS_Background.Show(false);
						m_Round_Background.Show(false);
						m_Bullet_Background.Show(true);
						m_Melee_Background.Show(true);
						m_Infected_Background.Show(true);
						m_Explosive_Background.Show(true);
						float bulletvalue  = g_Game.ConfigGetFloat(string.Format("CfgVehicles %1 DamageSystem GlobalArmor %2 Health damage", itemType, "Projectile"));
						float bulletpro = 100 - ( bulletvalue * 100 );
						if ( bulletpro == 100 ) {
							bulletpro = 0;
						}
						m_Bullet_Value.SetText(string.Format("%1%%", bulletpro));
						float meleevalue  = g_Game.ConfigGetFloat(string.Format("CfgVehicles %1 DamageSystem GlobalArmor %2 Health damage", itemType, "Melee"));
						float meleepro = 100 - ( meleevalue * 100 );
						if ( meleepro == 100 ) {
							meleepro = 0;
						}
						m_Melee_Value.SetText(string.Format("%1%%", meleepro));

						if(GetA6GunplayModConfig().SwitchBulletShockToInfectedProtect) {
							float infectedvalue  = g_Game.ConfigGetFloat(string.Format("CfgVehicles %1 DamageSystem GlobalArmor %2 Health damage", itemType, "Infected"));
							float infectedpro = 100 - ( infectedvalue * 100 );
							if ( infectedpro == 100 ) {
								infectedpro = 0;
							}
							m_Infected_Text.SetText(string.Format("Infected Protect HP:"));
							m_Infected_Value.SetText(string.Format("%1%%", infectedpro));
						} else {
							float bulletshockvalue  = g_Game.ConfigGetFloat(string.Format("CfgVehicles %1 DamageSystem GlobalArmor %2 Shock damage", itemType, "Projectile"));
							float bulletshock = 100 - ( bulletshockvalue * 100 );
							if ( bulletshock == 100 ) {
								bulletshock = 0;
							}
							m_Infected_Text.SetText(string.Format("Bullet SHK Protect:"));
							m_Infected_Value.SetText(string.Format("%1%%", bulletshock));
						}
						float explosivevalue  = g_Game.ConfigGetFloat(string.Format("CfgVehicles %1 DamageSystem GlobalArmor %2 Health damage", itemType, "FragGrenade"));
						float explosivepro = 100 - ( explosivevalue * 100 );
						if ( explosivepro == 100 ) {
							explosivepro = 0;
						}
						m_Explosive_Value.SetText(string.Format("%1%%", explosivepro));
					}
				}		
				if (ammunition_base) {
					m_ItemStats.Show(true);
					m_Recoil_Background.Show(true);
					m_Sway_Background.Show(true);
					m_ADS_Background.Show(true);
					m_Round_Background.Show(true);
					m_Bullet_Background.Show(false);
					m_Melee_Background.Show(false);
					m_Infected_Background.Show(false);
					m_Explosive_Background.Show(false);
					string btype = ammunition_base.ConfigGetString("ammo");
					m_Recoil_Value.SetText(string.Format("%1 m/s", g_Game.ConfigGetFloat(string.Format("CfgAmmo %1 initSpeed", btype))));
					m_Recoil_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					m_Recoil_Text.SetText(string.Format("Velocity:"));
					m_Sway_Value.SetText(string.Format("%1", g_Game.ConfigGetFloat(string.Format("CfgAmmo %1 DamageApplied Health damage", btype))));
					m_Sway_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					m_Sway_Text.SetText(string.Format("Hth Dmg:"));
					m_ADS_Value.SetText(string.Format("%1", g_Game.ConfigGetFloat(string.Format("CfgAmmo %1 DamageApplied Shock damage", btype))));
					m_ADS_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					m_ADS_Speed_Text.SetText(string.Format("Shk Dmg:"));
					m_Round_Value.SetText(string.Format("x%1", g_Game.ConfigGetFloat(string.Format("CfgAmmo %1 DamageApplied Health armorDamage", btype))));
					m_Round_Text.SetText(string.Format("Amr Dmg:"));
					if(g_Game.ConfigGetFloat(string.Format("CfgAmmo %1 DamageApplied Health armorDamage", btype)) == 0) {
			            m_Round_Value.SetText(string.Format("x1"));
			        }
				}	
				if (magazine) {
					m_ItemStats.Show(true);
					m_Recoil_Background.Show(true);
					m_Sway_Background.Show(true);
					m_ADS_Background.Show(true);
					m_Round_Background.Show(true);
					m_Bullet_Background.Show(false);
					m_Melee_Background.Show(false);
					m_Infected_Background.Show(false);
					m_Explosive_Background.Show(false);
					for (int i = 0; i < magazine.GetAmmoCount(); i++) {
						float damage;
						string className;
						magazine.GetCartridgeAtIndex(i, damage, className);
					}
			        m_Sway_Value.SetText(string.Format("%1 / %2", magazine.GetAmmoCount(), magazine.ConfigGetFloat("count")));
					m_Sway_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					m_Sway_Text.SetText(string.Format("Ammo Cnt:"));
					if (magazine.GetRecoilModifierPercentage() < 0 ) {
						m_Recoil_Value.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
						m_Recoil_Value.SetText(string.Format("%1%%", magazine.GetRecoilModifierPercentage().ToString()));
					}
					if (magazine.GetRecoilModifierPercentage() == 0 ) {
						m_Recoil_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
						m_Recoil_Value.SetText(string.Format("%1%%", magazine.GetRecoilModifierPercentage().ToString()));
					}
					if (magazine.GetRecoilModifierPercentage() > 0 ) {
						m_Recoil_Value.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
						m_Recoil_Value.SetText(string.Format("+%1%%", magazine.GetRecoilModifierPercentage().ToString()));
					}
					m_Recoil_Text.SetText(string.Format("Recoil:"));
					if (isUsingADSModifier()) {	
						m_ADS_Value.SetText(string.Format("%1%%", magazine.GetAimSpeedModifierPercentage().ToString()));
						if (magazine.GetAimSpeedModifierPercentage() < 0 ) {
							m_ADS_Value.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
							m_ADS_Value.SetText(string.Format("%1%%", (magazine.GetAimSpeedModifierPercentage().ToString())));
						}
						if (magazine.GetAimSpeedModifierPercentage() == 0 ) {
							m_ADS_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
							m_ADS_Value.SetText(string.Format("%1%%", (magazine.GetAimSpeedModifierPercentage().ToString())));
						}
						if (magazine.GetAimSpeedModifierPercentage() > 0 ) {
							m_ADS_Value.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
							m_ADS_Value.SetText(string.Format("+%1%%", (magazine.GetAimSpeedModifierPercentage().ToString())));
						}
					} else {
						m_ADS_Value.SetText(string.Format("DISABLED"));
						m_ADS_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					}
					m_ADS_Speed_Text.SetText(string.Format("ADS:"));
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
					if (className.Contains("762x51")) { roundname = string.Format("7.62x51"); }
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
					m_Round_Value.SetText(string.Format("%1%2", roundname, roundvariant));
					m_Round_Text.SetText(string.Format("TR:"));
				}
				if (weapon_base) {
					m_ItemStats.Show(true);
					m_Recoil_Background.Show(true);
					m_Sway_Background.Show(true);
					m_ADS_Background.Show(true);
					m_Round_Background.Show(true);
					m_Bullet_Background.Show(false);
					m_Melee_Background.Show(false);
					m_Infected_Background.Show(false);
					m_Explosive_Background.Show(false);
					m_Recoil_Value.SetText(string.Format("%1%%", weapon_base.GetPropertyModifierObject().GetRecoilModifierPercentage().ToString().SubstringUtf8(0,5)));
					if (weapon_base.GetPropertyModifierObject().GetRecoilModifierPercentage() < StatRecoilBenefitValueForWeapons ) {
						m_Recoil_Value.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
					}
					if (weapon_base.GetPropertyModifierObject().GetRecoilModifierPercentage() >= StatRecoilBenefitValueForWeapons ) {
						m_Recoil_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					}
					if (weapon_base.GetPropertyModifierObject().GetRecoilModifierPercentage() >= StatRecoilNonBenefitValueForWeapons ) {
						m_Recoil_Value.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
					}
					m_Recoil_Text.SetText(string.Format("Recoil:"));
					m_Sway_Value.SetText(string.Format("%1%%", weapon_base.GetPropertyModifierObject().GetSwayModifierPercentage().ToString().SubstringUtf8(0,5)));
					if (weapon_base.GetPropertyModifierObject().GetSwayModifierPercentage() < StatSwayBenefitValueForWeapons ) {
						m_Sway_Value.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
					}
					if (weapon_base.GetPropertyModifierObject().GetSwayModifierPercentage() >= StatSwayBenefitValueForWeapons ) {
						m_Sway_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					}
					if (weapon_base.GetPropertyModifierObject().GetSwayModifierPercentage() > StatSwayNonBenefitValueForWeapons ) {
						m_Sway_Value.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
					}
					m_Sway_Text.SetText(string.Format("Sway:"));
					if (isUsingADSModifier()) {	
						m_ADS_Value.SetText(string.Format("%1 secs", weapon_base.GetPropertyModifierObject().GetAimSpeedModifierPercentage().ToString().SubstringUtf8(0,4)));
						if (weapon_base.GetPropertyModifierObject().GetAimSpeedModifierPercentage() < StatADSBenefitValueForWeapons ) {
							m_ADS_Value.SetColor(ARGB(StatValueBenefit_Alpha, StatValueBenefit_R, StatValueBenefit_G, StatValueBenefit_B));
						}
						if (weapon_base.GetPropertyModifierObject().GetAimSpeedModifierPercentage() >= StatADSBenefitValueForWeapons ) {
							m_ADS_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
						}
						if (weapon_base.GetPropertyModifierObject().GetAimSpeedModifierPercentage() > StatADSNonBenefitValueForWeapons ) {
							m_ADS_Value.SetColor(ARGB(StatValueNonBenefit_Alpha, StatValueNonBenefit_R, StatValueNonBenefit_G, StatValueNonBenefit_B));
						}
					} else {
						m_ADS_Value.SetText(string.Format("DISABLED"));
						m_ADS_Value.SetColor(ARGB(StatValue_Alpha, StatValue_R, StatValue_G, StatValue_B));
					}
					m_ADS_Speed_Text.SetText(string.Format("ADS:"));			
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
					m_Round_Value.SetText(string.Format("%1%2", chamberedroundname, chamberedroundvariant));
					m_Round_Text.SetText(string.Format("CH:"));
				}
			} else {
				m_ItemStats.Show(false);
				m_Recoil_Background.Show(false);
				m_Sway_Background.Show(false);
				m_ADS_Background.Show(false);
				m_Round_Background.Show(false);
				m_Bullet_Background.Show(false);
				m_Melee_Background.Show(false);
				m_Infected_Background.Show(false);
				m_Explosive_Background.Show(false);
			}		
		}	
	}	
}