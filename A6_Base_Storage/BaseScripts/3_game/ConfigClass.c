class A6BaseStorageConfig {
    static const string A6BaseStorageConfigDIR = "$profile:\\A6_Base_Storage";
	static const string A6BaseStorageConfigPATH = "$profile:\\A6_Base_Storage\\A6_Base_Storage.json";
    string FileUpdateEnable = "1";

    bool EnableCraftLogging = true;
    bool EnablePlacementLogging = true;
    bool EnableDismantleLogging = true;
    bool EnableOpenCloseLogging = true;
    
    int ProxyMode = 1; // 0 = Hide Proxies | 1 = Hide Proxies when closed | 2 = Don't Hide proxies
    bool AutoCloseOnServerStart = true; // 1 = Enable Automatic Closing of Storages when the server boots up. 0 = disabled
    bool EnableAutoCloseStorageTimer = true; // 1 = Enables Automatic Closing of Storages Timer, after a storage is opened, after AutoCloseMinutes it will close. 0 = disabled
    int AutoCloseMinutes = 5; // Timer for EnableAutoCloseStorageTimer, no decimals allowed, 5 = 5 minutes, 5.5 = broken mod.
    float OpenCloseRange = 2.0; // How many meters away from looking at storage door to receive open / close action. 

    bool CanCraftKits = true;
    int CraftKitToolTime = 20; 
    
    bool CanDeCraftKits = true;
    string DeCraftKitText = "De-Craft Kit";
    string DeCraftKitTool = "Screwdriver";
    int DeCraftKitToolTime = 10;
    int DeCraftKitToolDamage = 10;

    bool CanDismantleStorage = true;
    string DismantleText = "Dismantle";
    string DismantleTool = "Screwdriver";
    int DismantleToolTime = 40;
    int DismantleToolDamage = 20;

    string HologramColor_R = "0.62";
    string HologramColor_G = "0.37";
    string HologramColor_B = "0.81";

    bool EnableAmmoBoxWhitelist = true;
    protected ref array<string> AmmoBoxWhitelist = {};

    bool EnableRefrigeratorWhitelist = true; 
    bool EnableRefrigeratorFoodPreserve = true;
    protected ref array<string> RefrigeratorWhitelist = {};

    bool EnableMedicalCabinetWhitelist = true;
    protected ref array<string> MedicalCabinetWhitelist = {};

    string ArmorStandCraftText = "Craft Armor Rack Kit";
    string ArmorStandRecipeOne = "Nail";
    int ArmorStandRecipeOneQty = 20;
    string ArmorStandRecipeTwo = "WoodenPlank";
    int ArmorStandRecipeTwoQty = 4;

    string MedicalCabinetCraftText = "Craft Medical Cabinet Kit";
    string MedicalCabinetRecipeOne = "Nail";
    int MedicalCabinetRecipeOneQty = 25;
    string MedicalCabinetRecipeTwo = "MetalPlate";
    int MedicalCabinetRecipeTwoQty = 2;

    string SingleGunrackCraftText = "Craft Gun Rack Kit";
    string SingleGunrackRecipeOne = "Nail";
    int SingleGunrackRecipeOneQty = 30;
    string SingleGunrackRecipeTwo = "MetalPlate";
    int SingleGunrackRecipeTwoQty = 3;

    string DoubleGunrackCraftText = "Craft Double Gun Rack Kit";
    string DoubleGunrackRecipeOne = "Nail";
    int DoubleGunrackRecipeOneQty = 60;
    string DoubleGunrackRecipeTwo = "MetalPlate";
    int DoubleGunrackRecipeTwoQty = 6;

    string MilitaryLockerCraftText = "Craft Military Locker Kit";
    string MilitaryLockerRecipeOne = "Nail";
    int MilitaryLockerRecipeOneQty = 60;
    string MilitaryLockerRecipeTwo = "MetalPlate";
    int MilitaryLockerRecipeTwoQty = 10;

    void Load() {
		if (GetGame().IsServer()) {
			if (FileExist(A6BaseStorageConfigPATH)) { 
				JsonFileLoader<A6BaseStorageConfig>.JsonLoadFile(A6BaseStorageConfigPATH, this);
				if (FileUpdateEnable == "1") {
					Save();
				}	
			} else { 
				Print("[A6 Base Storage Mod] Loading default configuration...");
				MakeDirectory(A6BaseStorageConfigDIR);
                AmmoBoxWhitelist = {
                    "Box_Base",
                    "Ammunition_Base"
                };
                RefrigeratorWhitelist = {
                    "SodaCan_ColorBase",
                    "Bottle_Base",
                    "Edible_Base"
                };
                MedicalCabinetWhitelist = {
                    "DisinfectantSpray",
                    "DisinfectantAlcohol",
                    "BandageDressing",
                    "Rag",
                    "Heatpack",
                    "PurificationTablets",
                    "CharcoalTablets",
                    "PainkillerTablets",
                    "VitaminBottle",
                    "IodineTincture",
                    "TetracyclineAntibiotics",
                    "Epinephrine",
                    "Morphine",
                    "Syringe",
                    "ClearSyringe",
                    "BloodSyringe",
                    "InjectionVial",
                    "SalineBag",
                    "StartKitIV",
                    "SalineBagIV",
                    "BloodBagEmpty",
                    "BloodBagFull",
                    "BloodBagIV",
                    "BloodTestKit",
                    "Thermometer",
                    "AntiChemInjector",
                    "GasMask_Filter",
                    "ChelatingTablets"
                };
				Save();
			}
		} else {
			Print("[A6 Base Storage Mod] Trying to load settings before they were received by the server.");
		}
	}
	void Save() {
		JsonFileLoader<A6BaseStorageConfig>.JsonSaveFile(A6BaseStorageConfigPATH, this);
	}
    array<string> GetAmmoBoxWhitelist() {
		return AmmoBoxWhitelist;
	}
    array<string> GetRefrigeratorWhitelist() {
		return RefrigeratorWhitelist;
	}
    array<string> GetMedicalWhitelist() {
		return MedicalCabinetWhitelist;
	}
}
static ref A6BaseStorageConfig m_A6BaseStorageConfig
static ref A6BaseStorageConfig GetA6BaseStorageConfig() {
	if (!m_A6BaseStorageConfig) {
		m_A6BaseStorageConfig = new A6BaseStorageConfig();
		m_A6BaseStorageConfig.Load();
	}
	return m_A6BaseStorageConfig;
}