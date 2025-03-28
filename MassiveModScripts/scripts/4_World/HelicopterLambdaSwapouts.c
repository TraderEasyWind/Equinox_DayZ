//modded class RFFSHeli_aviation_battery
//{
//	override void AfterStoreLoad()
//	{
//		super.AfterStoreLoad();
//	
//		if (IsLockedInSlot())
//			UnlockFromParent();
//	
//		TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(this, "ExpansionHelicopterBattery", NULL);
//		lambda.SetTransferParams(true, true, true);
//		GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
//	}
//};
//modded class RFFSHeli_igniter_plug
//{
//	override void AfterStoreLoad()
//	{
//		super.AfterStoreLoad();
//	
//		if (IsLockedInSlot())
//			UnlockFromParent();
//	
//		TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(this, "ExpansionIgniterPlug", NULL);
//		lambda.SetTransferParams(true, true, true);
//		GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
//	}
//};
//modded class RFFSHeli_hydraulic_hoses
//{
//	override void AfterStoreLoad()
//	{
//		super.AfterStoreLoad();
//	
//		if (IsLockedInSlot())
//			UnlockFromParent();
//	
//		TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(this, "ExpansionHydraulicHoses", NULL);
//		lambda.SetTransferParams(true, true, true);
//		GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, lambda);
//	}
//};