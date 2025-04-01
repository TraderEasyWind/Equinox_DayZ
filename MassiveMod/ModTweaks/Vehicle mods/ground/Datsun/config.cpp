class CfgPatches
{
	class MassiveMod_ModTweaks_VehicleMods_Ground_datasun
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"nd_datsun","nm_Flagextension"};
	};
};
class CfgVehicles
{
	class CarScript;
	class nd_datsun_base: CarScript
	{
		attachments[] = {"CarBattery",
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
		    "DatsunCab",
			"Material_FPole_Flag"};
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
				    "nd_datsun_codriverdoor",
					"Material_FPole_Flag"
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
		};;
	};
	class nd_datsun: nd_datsun_base
	{
		attachments[] = {"CarBattery",
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
		    "DatsunCab",
			"Material_FPole_Flag"};
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
				    "nd_datsun_codriverdoor",
					"Material_FPole_Flag"
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
	};
//	class nd_datsun : nd_datsun_base
//	{
//		attachments[] += {"CarBattery",
//			"Reflector_1_1",
//			"Reflector_2_1",
//			"CarRadiator",
//			"SparkPlug",
//			"nd_datsun_hood",
//			"nd_datsun_codriverdoor",
//			"nd_datsun_driverdoor",
//			"NivaWheel_1_1",
//		    "NivaWheel_1_2",
//			"NivaWheel_2_1",
//			"NivaWheel_2_2",
//			"barrel2",
//		    "DatsunCab",
//			"Material_FPole_Flag"};
//		class GUIInventoryAttachmentsProps
//		{
//			class Engine
//			{
//				name="$STR_attachment_Engine0";
//				description="";
//				icon="cat_vehicle_engine";
//				attachmentSlots[]=
//				{
//					"CarBattery",
//					"CarRadiator",
//					"SparkPlug",
//					"Reflector_1_1",
//					"Reflector_2_1"
//				};
//			};
//			class Body
//			{
//				name="$STR_attachment_Body0";
//				description="";
//				icon="cat_vehicle_body";
//				attachmentSlots[]=
//				{
//				    "nd_datsun_hood",
//				    "nd_datsun_driverdoor",
//				    "nd_datsun_codriverdoor",
//					"Material_FPole_Flag"
//				};
//			};
//			class Chassis
//			{
//				name="$STR_attachment_Chassis0";
//				description="";
//				icon="cat_vehicle_chassis";
//				attachmentSlots[]=
//				{
//					"NivaWheel_1_1",
//					"NivaWheel_1_2",
//					"NivaWheel_2_1",
//					"NivaWheel_2_2"
//				};
//			};
//			class RearHold
//			{
//				name="Trunk";
//				description="";
//				icon="cat_vehicle_chassis";
//				attachmentSlots[]=
//				{
//					"barrel2",
//					"DatsunCab"
//				};
//			};
//		};
//	};
};

