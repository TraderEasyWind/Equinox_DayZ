//modded class CarWheel
//{
//	override void EEHealthLevelChanged(int oldLevel, int newLevel, string zone)
//	{
//		super.EEHealthLevelChanged(oldLevel, newLevel, zone);
//		
//		if (newLevel ==  GameConstants.STATE_RUINED)
//		{
//			string newWheel = "";
//			switch (GetType())
//			{
//				case "HatchbackWheel":
//					newWheel = "HatchbackWheel_Ruined";
//					break;
//	
//				case "CivSedanWheel":
//					newWheel = "CivSedanWheel_Ruined";
//					break;
//	
//				case "Hatchback_02_Wheel":
//					newWheel = "Hatchback_02_Wheel_Ruined";
//					break;
//				
//				case "Sedan_02_Wheel":
//					newWheel = "Sedan_02_Wheel_Ruined";
//					break;
//	
//				case "Truck_01_Wheel":
//					newWheel = "Truck_01_Wheel_Ruined";
//					break;
//	
//				case "Truck_01_WheelDouble":
//					newWheel = "Truck_01_WheelDouble_Ruined";
//					break;
//
//				case "Offroad_02_Wheel":
//					newWheel = "Offroad_02_Wheel_Ruined";
//					break;
//					
//				case "MassiveMod_Offroad_02_Wheel":
//					newWheel = "MassiveMod_Offroad_02_Wheel_Ruined";
//					break;
//					
//				case "MassiveMod_Med_TruckWheel":
//					newWheel = "MassiveMod_Med_TruckWheel_Ruined";
//					break;
//					
//				case "MassiveMod_Med_TruckWheel_Double":
//					newWheel = "MassiveMod_Med_TruckWheel_Double_Ruined";
//					break;
//					
//					case "MassiveMod_UAZ_Wheel":
//					newWheel = "MassiveMod_UAZ_Wheel_Ruined";
//					break;
//			}
//		}
//	}
//};
class MassiveMod_Offroad_02_Wheel: Offroad_02_Wheel
{
	override void EEKilled(Object killer)
	{
		string newWheel = "";
		switch( GetType() )
		{
			case "MassiveMod_Offroad_02_Wheel":
				newWheel = "MassiveMod_Offroad_02_Wheel_Ruined";
			break;
		}
		
		if ( newWheel != "" )
		{
			ReplaceWheelLambda lambda = new ReplaceWheelLambda ( this, newWheel, NULL);
			lambda.SetTransferParams(true, true, true);
			GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
		}
	}
};
class MassiveMod_Offroad_02_Wheel_Ruined: Offroad_02_Wheel_Ruined{};
class MassiveMod_Med_TruckWheel: Truck_01_Wheel
{
	override void EEKilled(Object killer)
	{
		string newWheel = "";
		switch( GetType() )
		{
			case "MassiveMod_Med_TruckWheel":
				newWheel = "MassiveMod_Med_TruckWheel_Ruined";
			break;
		}
		
		if ( newWheel != "" )
		{
			ReplaceWheelLambda lambda = new ReplaceWheelLambda ( this, newWheel, NULL);
			lambda.SetTransferParams(true, true, true);
			GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
		}
	}
};
class MassiveMod_Med_TruckWheel_Ruined: Truck_01_Wheel_Ruined{};
class MassiveMod_Med_TruckWheel_Double: Truck_01_WheelDouble
{
	override void EEKilled(Object killer)
	{
		string newWheel = "";
		switch( GetType() )
		{
			case "MassiveMod_Med_TruckWheel_Double":
				newWheel = "MassiveMod_Med_TruckWheel_Double_Ruined";
			break;
		}
		
		if ( newWheel != "" )
		{
			ReplaceWheelLambda lambda = new ReplaceWheelLambda ( this, newWheel, NULL);
			lambda.SetTransferParams(true, true, true);
			GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
		}
	}
};
class MassiveMod_Med_TruckWheel_Double_Ruined: Truck_01_WheelDouble_Ruined{};
class MassiveMod_UAZ_Wheel: H4_UAZ452A_Wheel
{
	override void EEKilled(Object killer)
	{
		string newWheel = "";
		switch( GetType() )
		{
			case "MassiveMod_UAZ_Wheel":
				newWheel = "MassiveMod_UAZ_Wheel_Ruined";
			break;
		}
		
		if ( newWheel != "" )
		{
			ReplaceWheelLambda lambda = new ReplaceWheelLambda ( this, newWheel, NULL);
			lambda.SetTransferParams(true, true, true);
			GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
		}
	}
};
class MassiveMod_UAZ_Wheel_Ruined: H4_UAZ452A_Wheel_Destroyed{};