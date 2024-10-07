class CfgPatches
{
	class nd_datsun
	{
		units[]=
		{
			"nd_datsun",
			"nd_datsun_driverdoor",
			"nd_datsun_codriverdoor",
			"nd_datsun_hood"
		};
		weapons[]= {};
		requiredVersion	= 0.1;
		requiredAddons[]= 
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Vehicles_Wheeled",
			"DZ_Vehicles_Parts",
			"DZ_Gear_Containers",
			"DZ_Sounds_Effects"
		};
	};
};
class CfgMods
{
	class nd_datsun
	{
		dir="nd_datsun";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="nd_datsun";
		credits="Tyson, Mass";
		author="Tyson, Mass";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Datsun/scripts/4_world"
				};
			};
		};
	}; 
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxybarrel: ProxyAttachment
	{
		scope = 2;
		inventorySlot[]+= {"Datsunbarrel"};	
		model = "datsun\Proxy\barrel.p3d";
	};
	class Proxybarrel2: ProxyAttachment
	{
		scope = 2;
		inventorySlot[]+= {"barrel2"};		
		model = "datsun\Proxy\barrel2.p3d";
	};
	class ProxyImprovisedCab: ProxyAttachment
	{
		scope = 2;
		inventorySlot[]+= {"DatsunCab"};		
		model = "datsun\ImprovisedCab.p3d";
	};
	class ProxyVehiclePart: ProxyAttachment
	{
		scope=2;
		simulation="ProxyInventory";
		autocenter=0;
		animated=0;
		shadow=1;
		reversed=0;
	};
	class Proxynd_datsun_driverdoor: ProxyVehiclePart
	{
		Model = "Datsun\proxy\nd_datsun_driverdoor.p3d";
		inventorySlot="nd_datsun_driverdoor";
	};
	class Proxynd_datsun_codriverdoor: ProxyVehiclePart
	{
		Model = "Datsun\proxy\nd_datsun_codriverdoor.p3d";
		inventorySlot="nd_datsun_codriverdoor";
	};
	class Proxynd_datsun_hood: ProxyVehiclePart
	{
		Model = "Datsun\proxy\nd_datsun_hood.p3d";
		inventorySlot="nd_datsun_hood";
	};
};
class cfgslots 
{
	class Slot_DatsunCab
	{
		name = "DatsunCab";
		displayName = "Improvised Cab";
		ghostIcon = "set:dayz_inventory image:barrel";
		selection = "ImprovCab";
	};
	class Slot_Datsunbarrel
	{
		name = "Datsunbarrel";
		displayName = "Barrel 1";
		ghostIcon = "set:dayz_inventory image:barrel";
		selection = "Barrel1";
	};
	class Slot_barrel2
	{
		name = "barrel2";
		displayName = "Barrel";
		ghostIcon = "set:dayz_inventory image:barrel";
		selection = "Barrel2";
	};
	class Slot_nd_datsun_hood
	{
		name="nd_datsun_hood";
		displayName="nd_datsun_hood";
		selection = "doors_hood";
		ghostIcon="hood";
	};
	class Slot_nd_datsun_driverdoor
	{
		name="nd_datsun_driverdoor";
		displayName="nd_datsun_driverdoor";
		selection="doors_driver";
		ghostIcon="doorfront";
	};
	class Slot_nd_datsun_codriverdoor
	{
		name="nd_datsun_codriverdoor";
		displayName="nd_datsun_codriverdoor";
		selection="doors_codriver";
		ghostIcon="doorfront";
	};
};

class cfgvehicles
{
	class Inventory_Base;
	class Container_Base;
	class DatsunCab: Inventory_Base
	{
		scope = 2;
		displayName = "Improvised Datsun Cab";
		descriptionShort = "This fits on the back of the Datsun, Giving your passengers some cover. It also just looks cool.";
		model = "datsun\ImprovisedCab.p3d";
		isMeleeWeapon = 0;
		weight = 500;
		itemSize[] = {30,30};
		rotationFlags = 2;
		inventorySlot[] = {"DatsunCab"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1200;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.05;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.3;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 8;
					};
				};
			};
		};
	};
	class UnfDatsunCab: Inventory_Base
	{
		scope = 2;
		displayName = "Improvised Datsun Cab";
		descriptionShort = "This fits on the back of the Datsun, Giving your passengers some cover. It also just looks cool.";
		model = "datsun\UnfImprovisedCab.p3d";
		isMeleeWeapon = 0;
		weight = 300;
		itemSize[] = {30,30};
		rotationFlags = 2;
		inventorySlot[] = {"DatsunCab"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.05;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.3;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 8;
					};
				};
			};
		};
	};
	class Barrel_ColorBase: Container_Base
    {
        inventorySlot[]+=
        {
			"Datsunbarrel",
			"Barrel1",
			"Barrel2",
            "Truck_01_Barrel1",
			"Truck_01_Barrel2",
			"Truck_01_Barrel3",
			"Truck_01_Barrel4",
			"55galDrum",
			"55galDrum_1",
			"55galDrum_2",
			"55galDrum_3",
			"55galDrum_4",
			"55galDrum_5",
			"55galDrum_6",
			"55galDrum_7",
			"55galDrum_8",
			"55galDrum_9",
			"55galDrum_10",
			"massbarrel"
        };
    };
	class CarDoor;
	class nd_datsun_driverdoor: CarDoor
	{
		scope=2;
		displayName="Datsun Driver Doors";
		descriptionShort="Datsun Driver Doors";
		Model = "\Datsun\proxy\nd_datsun_driverdoor.p3d";
		weight=15000;
		itemSize[]={10,10};
		itemBehaviour=0;
		inventorySlot="nd_datsun_driverdoor";
		rotationFlags=8;
		physLayer="item_large";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{						
						{
							1.00,							
							{
								
							}
						},						
						{
							0.69999999,
							{
								
							}
						},						
						{
							0.50,							
							{
								
							}
						},						
						{
							0.30000001,
							{
								
							}
						},						
						{
							0.0,							
							{
								
							}
						}
					};
				};
			};
			class DamageZones
			{
				class Window
				{
					class Health
					{
						hitpoints=500;
						healthLevels[]=
						{
							{
								1.00,							
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.69999999,
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.50,							
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.30000001,
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.0,							
								
								"hidden"
							}
						};
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
					transferToGlobalCoef=0;
					componentNames[]=
					{
						"dmgZone_doorwindowLeft"
					};
				};
				class Doors
				{
					class Health
					{
						hitpoints=2000;
						transferToGlobalCoef=1;
						healthLevels[]=
						{
							{
								1.00,
								{
									"Datsun\Data\datsunex.rvmat"
								}
							},						
							{
								0.69999999,
								{
									"Datsun\Data\datsunex.rvmat"
								}
							},						
							{
								0.50,
								{
									"Datsun\Data\datsunex.rvmat"
								}
							},						
							{
								0.30000001,
								{
									"Datsun\Data\datsunex.rvmat"
								}
							},						
							{
								0.0,
								{
									"Datsun\Data\datsunex.rvmat"
								}
							}
						};
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
					componentNames[]=
					{
						"dmgZone_doors"
					};
				};
			};
		};
	};
	class nd_datsun_codriverdoor: CarDoor
	{
		scope=2;
		displayName="Datsun CoDriver Doors";
		descriptionShort="Datsun CoDriver Doors";
		Model = "\Datsun\proxy\nd_datsun_codriverdoor.p3d";
		weight=15000;
		itemSize[]={10,10};
		itemBehaviour=0;
		inventorySlot="nd_datsun_codriverdoor";
		rotationFlags=8;
		physLayer="item_large";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{						
						{
							1.00,							
							{
							}
						},						
						{
							0.69999999,
							{
							}
						},						
						{
							0.50,
							
							{
							}
						},						
						{
							0.30000001,
							{
							}
						},						
						{
							0.00,
							
							{
							}
						}
					};
				};
			};
			class DamageZones
			{
				class Window
				{
					class Health
					{
						hitpoints=500;
						healthLevels[]=
						{
							{
								1.00,							
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.69999999,
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.50,							
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.30000001,
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.0,							
								
								"hidden"
							}
						};
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
					transferToGlobalCoef=0;
					componentNames[]=
					{
						"dmgZone_doorwindowRight"
					};
				};
				class Doors
				{
					class Health
					{
						hitpoints=2000;
						transferToGlobalCoef=1;
						healthLevels[]=
						{
							{
								1.00,
								{
									"Datsun\Data\datsunex.rvmat"
								}
							},						
							{
								0.69999999,
								{
									"Datsun\Data\datsunex.rvmat"
								}
							},						
							{
								0.50,
								{
									"Datsun\Data\datsunex.rvmat"
								}
							},						
							{
								0.30000001,
								{
									"Datsun\Data\datsunex.rvmat"
								}
							},						
							{
								0.0,
								{
									"Datsun\Data\datsunex.rvmat"
								}
							}
						};
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
					componentNames[]=
					{
						"dmgZone_doors"
					};
				};
			};
		};
	};
	class nd_datsun_hood: CarDoor
	{
		scope=2;
		displayName="Datsun Hood";
		descriptionShort="Datsun Hood";
		Model = "\Datsun\proxy\nd_datsun_hood.p3d";
		weight=15000;
		itemSize[]={10,10};
		itemBehaviour=0;
		inventorySlot="nd_datsun_hood";
		rotationFlags=0;
		physLayer="item_large";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000;
					healthLevels[]=
					{						
						{
							1.00,							
							{
								"Datsun\Data\datsunex.rvmat"
							}
						},						
						{
							0.69999999,
							{
								"Datsun\Data\datsunex.rvmat"
							}
						},						
						{
							0.50,							
							{
								"Datsun\Data\datsunex.rvmat"
							}
						},						
						{
							0.30000001,
							{
								"Datsun\Data\datsunex.rvmat"
							}
						},						
						{
							0.00,							
							{
								"Datsun\Data\datsunex.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Carscript;
	class nd_datsun_base :Carscript
	{
	    scope =0;
        displayname="datsun base";
        Model="";	 
        InteractActions[]=
		{
			"AT_ANIMATE_SEATS",
			"AT_GETIN_TRANSPORT"
		};
		hiddenSelections[]=
		{
		    "light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		frontReflectorMatOn="Datsun\data\Datsun_lights_e.rvmat";
        frontReflectorMatOff="Datsun\data\DatsunEx.rvmat";
		brakeReflectorMatOn="Datsun\data\Datsun_tail_light_red.rvmat";
        brakeReflectorMatOff="Datsun\data\DatsunEx.rvmat";
		TailReflectorMatOn="Datsun\data\Datsun_tail_light_red.rvmat";
	    TailReflectorMatOff="Datsun\data\DatsunEx.rvmat";
		ReverseReflectorMatOn="Datsun\data\Datsun_lights_e.rvmat";
	    ReverseReflectorMatOff="Datsun\data\DatsunEx.rvmat";
		dashboardMatOn="Datsun\data\Datsun_instruments_snine.rvmat";
	    dashboardMatOff="Datsun\data\datsun_pristroje.rvmat";
		fuelCapacity=80;
		fuelConsumption=10;
	 	attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"nd_datsun_hood",
			"nd_datsun_codriverdoor",
			"nd_datsun_driverdoor",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"barrel2",
			"DatsunCab"
		};
	    class Crew
		{
			class Driver
			{
				actionSel="seat_driver";
				proxyPos="crewdriver";
				getInPos="pos_driver";
				getInDir="pos_driver_dir";
				isDriver=1;
			};
			class CoDriver
			{
				actionSel="seat_codriver";
				proxyPos="crewcodriver";
				getInPos="pos_coDriver";
				getInDir="pos_coDriver_dir";
			};
			class Cargo1
			{
				actionSel="seat_cargo1";
				proxyPos="CrewCargo1";
			    getInPos="pos_cargo1";
				getInDir="pos_cargo1_dir";
			};
			class Cargo2
			{
				actionSel="seat_cargo2";
				proxyPos="CrewCargo2";
				getInPos="pos_cargo2";
				getInDir="pos_cargo2_dir";
			};
			class Cargo3
			{
				actionSel="seat_cargo3";
				proxyPos="CrewCargo3";
				getInPos="pos_cargo3";
				getInDir="pos_cargo3_dir";
			};
			class Cargo4
			{
				actionSel="seat_cargo4";
				proxyPos="CrewCargo4";
				getInPos="pos_cargo4";
				getInDir="pos_cargo4_dir";
			};
        };
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="$STR_attachment_Engine0";
				description="";
				icon="cat_vehicle_engine";
				attachmentSlots[]=
				{
					"CarBattery",
					"CarRadiator",
					"SparkPlug",
					"Reflector_1_1",
					"Reflector_2_1"
				};
			};
			class Body
			{
				name="$STR_attachment_Body0";
				description="";
				icon="cat_vehicle_body";
				attachmentSlots[]=
				{
				    "nd_datsun_hood",
				    "nd_datsun_driverdoor",
				    "nd_datsun_codriverdoor"
				};
			};
			class Chassis
			{
				name="$STR_attachment_Chassis0";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"NivaWheel_1_1",
					"NivaWheel_1_2",
					"NivaWheel_2_1",
					"NivaWheel_2_2"
				};
			};
			class RearHold
			{
				name="Trunk";
				description="";
				icon="cat_vehicle_chassis";
				attachmentSlots[]=
				{
					"barrel2",
					"DatsunCab"
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={10,30};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000;
					healthLevels[]=
					{
						
						{
							1.00,
							{
								
							}
						},						
						{
							0.69999999,
							{
								
							}
						},						
						{
							0.50,
							{
								
							}
						},						
						{
							0.30000001,
							{
								
							}
						},						
						{
							0.00,
							{
								
							}
						}
					};
				};
			};
			class DamageZones
			{
				class Chassis
				{
					class Health
					{
						hitpoints=5000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{							
							{
								1.00,
								
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.69999999,
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.50,
								
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.30000001,
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.00,
								
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_chassis"
					};
					componentNames[]=
					{
						"dmgZone_chassis"
					};
					transferToZonesNames[]=
					{
						"Engine"
					};
					transferToZonesThreshold[]={0.5};
					transferToZonesCoefs[]={0.40000001};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Front
				{
					class Health
					{
						hitpoints=5000;
						transferToGlobalCoef=1;
						healthLevels[]=
						{							
							{
								1.00,
								
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.69999999,
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.50,
								
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.30000001,
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.00,
								
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Reflector_1_1",
						"Reflector_2_1",
						"WindowFront",
						"Engine"
					};
					transferToZonesThreshold[]={0.5,0.80000001,0.80000001};
					transferToZonesCoefs[]={0.80000001,0.60000002,0.60000002};
					memoryPoints[]=
					{
						"dmgZone_front"
					};
					componentNames[]=
					{
						"dmgZone_front"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"nd_datsun_hood"
					};
				};
				class Radiator
				{
					class Health
					{
						hitpoints=800;
						transferToGlobalCoef=0;
					};
					memoryPoints[]={};
					componentNames[]={};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"CarRadiator"
					};
				};
				class Back
				{
					class Health
					{
						hitpoints=5000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{							
							{
								1.00,
								
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.69999999,
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.50,
								
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.30000001,
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.00,
								
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
					};
					transferToZonesCoefs[]={0.2,0.2};
					memoryPoints[]=
					{
						"dmgZone_back"
					};
					componentNames[]=
					{
						"dmgZone_back"
					};
					fatalInjuryCoef=-1;
				};
				class Roof
				{
					class Health
					{
						hitpoints=5000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{							
							{
								1.00,
								
								{
									"Datsun\Data\DatsunEx.rvmat",
									"Datsun\Data\DatsunInt.rvmat"
								}
							},							
							{
								0.69999999,
								{
									"Datsun\Data\DatsunEx.rvmat",
									"Datsun\Data\DatsunInt.rvmat"
								}
							},							
							{
								0.50,
								
								{
									"Datsun\Data\DatsunEx.rvmat",
									"Datsun\Data\DatsunInt.rvmat"
								}
							},							
							{
								0.30000001,
								{
									"Datsun\Data\DatsunEx.rvmat",
									"Datsun\Data\DatsunInt.rvmat"
								}
							},							
							{
								0.00,
								
								{
									"Datsun\Data\DatsunEx.rvmat",
									"Datsun\Data\DatsunInt.rvmat"
								}
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_roof"
					};
					componentNames[]=
					{
						"dmgZone_roof"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Fender_1_1
				{
					class Health
					{
						hitpoints=2000;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{
								1.00,
								
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.69999999,
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.50,
								
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.30000001,
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							},							
							{
								0.00,
								
								{
									"Datsun\Data\DatsunEx.rvmat"
								}
							}
						};
					};
					transferToZonesNames[]=
					{
						"Front",
						"Reflector_1_1"
					};
					transferToZonesThreshold[]={0.2,0.89999998};
					transferToZonesCoefs[]={0.30000001,0.30000001};
					memoryPoints[]=
					{
						"dmgZone_fender_1_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_1"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
					
						"NivaWheel_1_1"
					};
				};
				class Fender_1_2: Fender_1_1
				{
					transferToZonesNames[]=
					{
						"Back",
						"FuelTank"
					};
					transferToZonesThreshold[]={0.2,0.2,0.2};
					transferToZonesCoefs[]={0.30000001,0.2,0.69999999};
					memoryPoints[]=
					{
						"dmgZone_fender_1_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_1_2"
					};
					inventorySlots[]=
					{
						
						"NivaWheel_1_2"
					};
				};
				class Fender_2_1: Fender_1_1
				{
					transferToZonesNames[]=
					{
						"Front",
						"Reflector_1_1",
						"CarRadiator",
						"WindowFront",
						"Battery"
					};
					transferToZonesThreshold[]={0.2,0.89999998,0.89999998,0.2,0.5,0.5};
					transferToZonesCoefs[]={0.30000001,0.30000001,0.60000002,0.5,0.40000001,0.69999999};
					memoryPoints[]=
					{
						"dmgZone_fender_2_1"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_1"
					};
					inventorySlots[]=
					{
						"NivaWheel_2_1"
					};
				};
				class Fender_2_2: Fender_1_1
				{
					transferToZonesNames[]=
					{
						"Back",
						"FuelTank"
					};
					transferToZonesThreshold[]={0.2,0.2,0.2};
					transferToZonesCoefs[]={0.30000001,0.2,0.69999999};
					memoryPoints[]=
					{
						"dmgZone_fender_2_2"
					};
					componentNames[]=
					{
						"dmgZone_fender_2_2"
					};
					inventorySlots[]=
					{
						"NivaWheel_2_2"
					};
				};
				class WindowFront
				{
					class Health
					{
						hitpoints=800;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{
								1.00,							
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.69999999,
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.50,							
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.30000001,
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.0,							
								
								"hidden"
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_windowFront"
					};
					componentNames[]=
					{
						"dmgZone_windowFront"
					};
					inventorySlots[]={};
				};
				/* class WindowLR
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{
								1.00,							
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.69999999,
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.50,							
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.30000001,
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.0,							
								
								"hidden"
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_doorwindowLeft"
					};
					componentNames[]=
					{
						"dmgZone_doorwindowLeft"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class WindowRR
				{
					class Health
					{
						hitpoints=500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{
								1.00,							
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.69999999,
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.50,							
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.30000001,
								{
									"Datsun\Data\datsun_skla.rvmat"
								}
							},						
							{
								0.0,							
								
								"hidden"
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_doorwindowRight"
					};
					componentNames[]=
					{
						"dmgZone_doorwindowRight"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				}; */
				class Engine
				{
					class Health
					{
						hitpoints=5000;
						transferToGlobalCoef=1;
						healthLevels[]=
						{
							{
								1.00,
								
								{
									
								}
							},
							{
								0.69999999,
								{
									
								}
							},
							{
								0.50,
								
								{
									
								}
							},
							{
								0.30000001,
								{
									
								}
							},
							{
								0.00,
								
								{
									
								}
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_engine"
					};
					componentNames[]=
					{
						"dmgZone_engine"
					};
					fatalInjuryCoef=0.001;
					inventorySlots[]=
					{
						"CarBattery",
						"SparkPlug",
						"CarRadiator"
					};
					inventorySlotsCoefs[]={0.2,0.1,0.2};
				};
				class FuelTank
				{
					class Health
					{
						hitpoints=2500;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							
							{
								1.00,
								{
									
								}
							},
							
							{
								0.69999999,
								{
									
								}
							},
							
							{
								0.50,
								{
									
								}
							},
							
							{
								0.30000001,
								{
									
								}
							},
							
							{
								0.00,
								{
									
								}
							}
						};
					};
					fatalInjuryCoef=-1;
					inventorySlots[]={};
				};
				class Reflector_1_1
				{
					class Health
					{
						hitpoints=100;
						transferToGlobalCoef=0;
						healthLevels[]=
						{
							{
								1.00,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\headlights_glass.rvmat"
								}
							},
							{
								0.69999999,
								{
									"dz\vehicles\wheeled\offroadhatchback\data\headlights_glass.rvmat"
								}
							},
							{
								0.50,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\glass_i_damage.rvmat"
								}
							},
							{
								0.30000001,
								{
									"dz\vehicles\wheeled\offroadhatchback\data\glass_i_damage.rvmat"
								}
							},
							{
								0.00,
								
								{
									"dz\vehicles\wheeled\offroadhatchback\data\glass_i_destruct.rvmat"
								}
							}
						};
					};
					memoryPoints[]=
					{
						"dmgZone_lights_1_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_1_1"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Reflector_1_1"
					};
				};
				class Reflector_2_1: Reflector_1_1
				{
					memoryPoints[]=
					{
						"dmgZone_lights_2_1"
					};
					componentNames[]=
					{
						"dmgZone_lights_2_1"
					};
					inventorySlots[]=
					{
						"Reflector_2_1"
					};
				};
			};
		};
		class ObstacleGenerator
		{
			carve=1;
			timeToStationary=5;
			moveThreshold=0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius=1;
						height=1.5;
						center[]={0,0,0.69999999};
					};
					class Cyl3
					{
						radius=1;
						height=1.5;
						center[]={0,0,-0.69999999};
					};
				};
			};
		};
        class SimulationModule
		{
			drive="DRIVE_AWD";
			centralDiffRatio = 1.45;
			airDragFrontTotal=0.92799997;
			braking[]={0,0.1,1,0.80000001,2.5,0.89999998,3,1};
			class Steering
			{
				increaseSpeed[]={0,50,30,40,60,25,120,5};
				decreaseSpeed[]={0,50,60,30,120,10};
				centeringSpeed[]={0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime=0.25;
				defaultThrust=0.8;
				gentleThrust=0.6;
				turboCoef=1.5;
				gentleCoef=0.7;
			};
			class Engine
			{
				inertia=0.45;
				torqueMax=235;
				torqueRpm=3200;
				powerMax=100;
				powerRpm=4500;
				rpmIdle=1000;
				rpmMin=1050;
				rpmClutch=1500;
				rpmRedline=6000;
				rpmMax=6800;
			};
			class Gearbox
			{
				reverse=3.91;
				ratios[]={4.2,2.8,2.0,1.4,1.0};
				timeToUncoupleClutch=0.3;
				timeToCoupleClutch=0.3;
				maxClutchTorque=260;
			};
			class Axles
			{
				class Front
				{
					maxSteeringAngle=30;
					finalRatio=4.1;
					brakeBias=0.6;
					brakeForce=4000;
					wheelHubMass=20;
					wheelHubRadius=0.275;
					class Suspension
					{
						swayBar=1700;
						stiffness=40000;
						compression=2900;
						damping=5000;
						travelMaxUp=0.065;
						travelMaxDown=0.065;
					};
					class Wheels
					{
						class Left
						{
							animTurn="turnfrontleft";
							animRotation="wheelfrontleft";
							wheelHub="wheel_1_1_damper_land";
							animDamper="damper_1_1";
							inventorySlot="NivaWheel_1_1";
						};
						class Right
						{
							animTurn="turnfrontright";
							animRotation="wheelfrontright";
							wheelHub="wheel_2_1_damper_land";
							animDamper="damper_2_1";
							inventorySlot="NivaWheel_2_1";
						};
					};
				};
				class Rear
				{
					maxSteeringAngle=0;
					finalRatio=4.1;
					brakeBias=0.4;
					brakeForce=3800;
					wheelHubMass=20;
					wheelHubRadius=0.280;
					class Suspension
					{
						swayBar=1800;
						stiffness=40000;
						compression=2900;
						damping=4000;
						travelMaxUp=0.065;
						travelMaxDown=0.065;
					};
					class Wheels
					{
						class Left
						{
							animTurn="turnbackleft";
							animRotation="wheelbackleft";
							wheelHub="wheel_1_2_damper_land";
							animDamper="damper_1_2";
							inventorySlot="NivaWheel_1_2";
						};
						class Right
						{
							animTurn="turnbacktright";
							animRotation="wheelbackright";
							wheelHub="wheel_2_2_damper_land";
							animDamper="damper_2_2";
							inventorySlot="NivaWheel_2_2";
						};
					};
				};
			};
		};		
		class AnimationSources 
		{
			class DoorsDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class DoorsCoDriver: DoorsDriver
			{
			};
			class DoorsHood: DoorsDriver
			{
			};
			class DoorsTrunk: DoorsDriver
			{
			};
			class EngineShake
			{
				source="enginerun";
				initPhase=0;
				animPeriod=0.2;
			};
			class HideDestroyed_1_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_1_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HideDestroyed_2_2
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class AnimHitWheel_1_1
			{
				source="Hit";
				hitpoint="HitWheel_1_1";
				raw=1;
			};
			class AnimHitWheel_1_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_1_2";
			};
			class AnimHitWheel_2_1: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_1";
			};
			class AnimHitWheel_2_2: AnimHitWheel_1_1
			{
				hitpoint="HitWheel_2_2";
			};
			class HitDoorsHood: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsHood";
			};
			class HitDoorsTrunk: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsTrunk";
			};
			class HitDoorsDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsDriver";
			};
			class HitDoorsCoDrivers: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCoDriver";
			};
			class HitDoorsCargo: AnimHitWheel_1_1
			{
				hitpoint="HitDoorsCargo";
			};
			class SeatDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class SeatCoDriver
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class damper_1_1
			{
				source="user";
				initPhase=0.48570001;
				animPeriod=1;
			};
			class damper_2_1: damper_1_1
			{
			};
			class damper_1_2
			{
				source="user";
				initPhase=0.40020001;
				animPeriod=1;
			};
			class damper_2_2: damper_1_2
			{
			};
		};
		class Sounds
		{
			thrust=0.60000002;
			thrustTurbo=1;
			thrustGentle=0.30000001;
			thrustSmoothCoef=0.02;
			camposSmoothCoef=0.029999999;
			soundSetsFilter[]=
			{
				"offroad_Engine_Offload_Ext_Rpm1_SoundSet",
				"offroad_Engine_Offload_Ext_Rpm2_SoundSet",
				"offroad_Engine_Offload_Ext_Rpm3_SoundSet",
				"offroad_Engine_Offload_Ext_Rpm4_SoundSet",
				"offroad_Engine_Offload_Ext_Rpm5_SoundSet",
				"offroad_Engine_Ext_Rpm0_SoundSet",
				"offroad_Engine_Ext_Rpm1_SoundSet",
				"offroad_Engine_Ext_Rpm2_SoundSet",
				"offroad_Engine_Ext_Rpm3_SoundSet",
				"offroad_Engine_Ext_Rpm4_SoundSet",
				"offroad_Engine_Ext_Rpm5_SoundSet",
				"offroad_Engine_Ext_Broken_SoundSet",
				"offroad_Tires_rock_slow_Ext_SoundSet",
				"offroad_Tires_rock_fast_Ext_SoundSet",
				"offroad_Tires_grass_slow_Ext_SoundSet",
				"offroad_Tires_grass_fast_Ext_SoundSet",
				"offroad_Tires_gravel_slow_Ext_SoundSet",
				"offroad_Tires_gravel_fast_Ext_SoundSet",
				"offroad_Tires_gravel_dust_fast_Ext_SoundSet",
				"offroad_Tires_asphalt_slow_Ext_SoundSet",
				"offroad_Tires_asphalt_fast_Ext_SoundSet",
				"offroad_Tires_water_slow_Ext_SoundSet",
				"offroad_Tires_water_fast_Ext_SoundSet",
				"Offroad_skid_dirt_SoundSet",
				"offroad_dirt_turn_SoundSet",
				"offroad_Rain_Ext_SoundSet",
				"offroad_damper_left_SoundSet",
				"offroad_damper_right_SoundSet"
			};
			soundSetsInt[]=
			{
				"offroad_Tires_Asphalt_Slow_General_Int_SoundSet",
				"offroad_Tires_Asphalt_Fast_General_Int_SoundSet",
				"offroad_Wind_SoundSet"
			};
		};
	};
    class nd_datsun : nd_datsun_base
	{
	    scope  =2;
	    InteractActions[]={1048,1035};
        displayname = "Datsun";
        Model = "\Datsun\nd_datsun.p3d";
	  	attachments[]=
		{
			"CarBattery",
			"Reflector_1_1",
			"Reflector_2_1",
			"CarRadiator",
			"SparkPlug",
			"nd_datsun_hood",
			"nd_datsun_codriverdoor",
			"nd_datsun_driverdoor",
			"NivaWheel_1_1",
		    "NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"barrel2",
		    "DatsunCab"
		};
		hiddenSelections[]=
		{
		    "light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"datsun\data\DatsunEX_co.paa"
		};
		frontReflectorMatOn="Datsun\data\Datsun_lights_e.rvmat";
        frontReflectorMatOff="Datsun\data\DatsunEx.rvmat";
		brakeReflectorMatOn="Datsun\data\Datsun_tail_light_red.rvmat";
        brakeReflectorMatOff="Datsun\data\DatsunEx.rvmat";
		TailReflectorMatOn="Datsun\data\Datsun_tail_light_red.rvmat";
	    TailReflectorMatOff="Datsun\data\DatsunEx.rvmat";
		ReverseReflectorMatOn="Datsun\data\Datsun_lights_e.rvmat";
	    ReverseReflectorMatOff="Datsun\data\DatsunEx.rvmat";
		dashboardMatOn="Datsun\data\Datsun_instruments_snine.rvmat";
	    dashboardMatOff="Datsun\data\datsun_pristroje.rvmat";
	};
	class nd_datsun_Green : nd_datsun
	{
		hiddenSelections[]=
		{
		    "light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"#(argb,8,8,3)color(0.356863,0.435294,0.290196,1.0,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"datsun\Data\DatsunEX_ColorBase.rvmat"
		};
	};//#(argb,8,8,3)color(0,0,0,1.0,CO)
	class nd_datsun_Black : nd_datsun
	{
		hiddenSelections[]=
		{
		    "light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"#(argb,8,8,3)color(0,0,0,1.0,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"datsun\Data\DatsunEX_ColorBase.rvmat"
		};
	};
	class nd_datsun_Red : nd_datsun
	{
		hiddenSelections[]=
		{
		    "light_left",
			"light_right",
			"light_brake_1_2",
			"light_brake_2_2",
			"light_reverse_1_2",
			"light_reverse_2_2",
			"light_1_2",
			"light_2_2",
			"light_dashboard",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"#(argb,8,8,3)color(1,0,0.0235294,1.0,CO)"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"datsun\Data\DatsunEX_ColorBase.rvmat"
		};
	};
};
