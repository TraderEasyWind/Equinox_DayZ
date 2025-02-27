modded class ActionSalvageWreckCB : ActionContinuousBaseCB
{
	
	override void CreateActionComponent()
	{
		
		m_ActionData.m_ActionComponent = new CAContinuousTime(5);//UATimeSpent.WRENCH_TIME);

	}
};

modded class ActionSalvageWreck: ActionContinuousBase
{
	void ActionSalvageWreck()
	{
		m_CallbackClass = ActionSalvageWreckCB;

		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined(2);
	
	}
	
	string GetText()
	{
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		ItemBase item = player.GetItemInHands();

		return "Salvage";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object z_salvagePoint = target.GetObject(); //actual target
		
		
		float z_GetActionDistanceEngine = 2;
		vector z_salvagePOS = z_salvagePoint.GetPosition();

		
			if ( z_salvagePoint.IsInherited( SalvagePointBase ) )
			{
				float dist = vector.Distance( z_salvagePOS, player.GetPosition() );
			
				if ( dist < z_GetActionDistanceEngine)	
				{
					return true;
				}
			}
			
		return false;
		

	}
		
	void sendPlayerMessage(PlayerBase player, string message)	
	{
		Param1<string> Msgparam;
		Msgparam = new Param1<string>(message);
		GetGame().RPCSingleParam(player, ERPCs.RPC_USER_ACTION_MESSAGE, Msgparam, true, player.GetIdentity());
	}

		//void SpawnTruckPart( Object z_target, vector z_tpos )
		void SpawnTruckPart( vector z_tpos )
		{				
			//ref TStringArray z_TruckPartsArray = {"TruckBattery", "CarRadiator", "SparkPlug", "HeadlightH7"};
			
			//ItemBase z_truckPart1 = ItemBase.Cast( GetGame().CreateObject(z_TruckPartsArray.GetRandomElement(), z_tpos));
			string z_RandomPart = z_TruckArray_JD.GetRandomElement();
			ItemBase z_truckPart1 = ItemBase.Cast( GetGame().CreateObject(z_RandomPart, z_tpos));
			if(z_truckPart1)
			{
				int z_maxHealth1 = z_truckPart1.GetMaxHealth();
				float z_setHealth1 = (Math.RandomFloat(-1, z_maxHealth1));
				int z_maxQty1 = z_truckPart1.GetQuantityMax();
				float z_setQty1 = (Math.RandomFloat(-1, z_maxQty1));
				z_truckPart1.SetQuantity( z_setQty1 );
				z_truckPart1.SetHealth( z_setHealth1 );
				Print("[JYD-Parts]--| Part found= " + z_truckPart1 + " |--[JYD-Parts]");
				//z_target.SetHealth(0);
				//GetGame().ObjectDelete(z_target);
			}
			else
			{
				Print("[JYD-Parts]--| Obeject Found =<" +z_RandomPart+ "> doesnt exist, Check your config |--[JYD-Parts]");	
			}
		}
		//void SpawnCarPart( Object z_target, vector z_tpos )
		void SpawnCarPart( vector z_tpos )
		{
			//ref TStringArray z_CarPartsArray = {"CarBattery", "CarRadiator", "SparkPlug", "HeadlightH7"};
			
			//ItemBase z_carPart = ItemBase.Cast( GetGame().CreateObject(z_CarPartsArray.GetRandomElement(), z_tpos));
			string z_RandomPart = z_CarArray_JD.GetRandomElement();
			ItemBase z_carPart = ItemBase.Cast( GetGame().CreateObject(z_RandomPart, z_tpos));
			if(z_carPart)
			{
				int z_maxHealth = z_carPart.GetMaxHealth();
				float z_setHealth = (Math.RandomFloat(-1, z_maxHealth));
				int z_maxQty = z_carPart.GetQuantityMax();
				float z_setQty = (Math.RandomFloat(-1, z_maxQty));
				z_carPart.SetQuantity( z_setQty );
				z_carPart.SetHealth( z_setHealth );
				Print("[JYD-Parts]--| Part found= " + z_carPart + " |--[JYD-Parts]");
				//z_target.SetHealth(0);
				//GetGame().ObjectDelete(z_target);			
			}
			else
			{
				Print("[JYD-Parts]--| Obeject Found =<" +z_RandomPart+ "> doesnt exist, Check your config |--[JYD-Parts]");					
			}
			
		}
		//void SpawnAircraftPart( Object z_target, vector z_tpos )
		void SpawnAircraftPart( vector z_tpos )
		{
			//ref TStringArray z_AircraftPartsArray = {"CarBattery", "CarRadiator", "SparkPlug", "HeadlightH7"};
			
			//ItemBase z_airPart = ItemBase.Cast( GetGame().CreateObject(z_AircraftPartsArray.GetRandomElement(), z_tpos));
			ItemBase z_airPart = ItemBase.Cast( GetGame().CreateObject(z_AirArray_JD.GetRandomElement(), z_tpos));
			int z_maxHealth2 = z_airPart.GetMaxHealth();
			float z_setHealth2 = (Math.RandomFloat(-1, z_maxHealth2));
			int z_maxQty2 = z_airPart.GetQuantityMax();
			float z_setQty2 = (Math.RandomFloat(-1, z_maxQty2));
			z_airPart.SetQuantity( z_setQty2 );
			z_airPart.SetHealth( z_setHealth2 );
			Print("[JYD-Parts]--| Part found= " + z_airPart + " |--[JYD-Parts]");
			//z_target.SetHealth(0);
			//GetGame().ObjectDelete(z_target);			
		}
		//void SpawnBoatPart( Object z_target, vector z_tpos )
		void SpawnBoatPart( vector z_tpos )
		{
			//ref TStringArray z_BoatPartsArray = {"CarBattery", "CarRadiator", "SparkPlug", "HeadlightH7"};
			
			//ItemBase z_BoatPart = ItemBase.Cast( GetGame().CreateObject(z_AircraftPartsArray.GetRandomElement(), z_tpos));
			ItemBase z_BoatPart = ItemBase.Cast( GetGame().CreateObject(z_BoatArray_JD.GetRandomElement(), z_tpos));
			int z_maxHealth2 = z_BoatPart.GetMaxHealth();
			float z_setHealth2 = (Math.RandomFloat(-1, z_maxHealth2));
			int z_maxQty2 = z_BoatPart.GetQuantityMax();
			float z_setQty2 = (Math.RandomFloat(-1, z_maxQty2));
			z_BoatPart.SetQuantity( z_setQty2 );
			z_BoatPart.SetHealth( z_setHealth2 );
			Print("[JYD-Parts]--| Part found= " + z_BoatPart + " |--[JYD-Parts]");
			//z_target.SetHealth(0);
			//GetGame().ObjectDelete(z_target);			
		}

	override void OnFinishProgressServer( ActionData action_data )
	{
		SalvagePointBase z_salvagePoint = SalvagePointBase.Cast(action_data.m_Target.GetObject()); //keep: actual target
		ItemBase z_toolBase = action_data.m_Player.GetItemInHands(); //keep: item in hands
		//vector targetPos = z_salvagePoint.GetPosition() - "0 0.50 0.25";
		vector targetPos = action_data.m_Player.GetPosition() - "0 0 0.25";
		

		//ref TStringArray z_TruckPartsArray = {"TruckBattery", "CarRadiator", "SparkPlug", "HeadlightH7"};
		//ref TStringArray z_CarPartsArray = {"CarBattery","CarRadiator", "SparkPlug", "HeadlightH7"};
		int z_moreThan = (Math.RandomInt(0, 7)); //change the '4' to a higher number and the chance to find an item is lower
		//orginal value was 3 so it is not a double the chance to not find anything 
		
		
		array<Object> NearByWrecks = new array<Object>;
		vector z_IDwreckPos = z_salvagePoint.GetPosition() - "0 0 -2.75";
		GetGame().GetObjectsAtPosition3D( z_IDwreckPos , 3.75, NearByWrecks, null);
					
		if ( z_moreThan <= 1 )
		{
			//sendPlayerMessage(action_data.m_Player, "You found something, look around");
			
			string messageSomething = string.Format("You found something, look around");
			NotificationSystem.SendNotificationToPlayerExtended(Man.Cast(action_data.m_Player), 2, "Salvaging", messageSomething, "set:dayz_gui image:tutorials");					
			
			//string messageParent1 = string.Format("| Wreck Type= %1 |", z_salvagePoint.ClassName() );
			//sendPlayerMessage(action_data.m_Player, messageParent1);

			if ( z_salvagePoint && z_salvagePoint.IsKindOf("SalvagePointTruck"))
			{
				SpawnTruckPart( targetPos );				
			}
			if ( z_salvagePoint && z_salvagePoint.IsKindOf("SalvagePointCar"))
			{
				SpawnCarPart( targetPos );				
			}
			if ( z_salvagePoint && z_salvagePoint.IsKindOf("SalvagePointAir"))
			{
				SpawnAircraftPart( targetPos );				
			}
			if ( z_salvagePoint && z_salvagePoint.IsKindOf("SalvagePointBoat"))
			{
				SpawnBoatPart( targetPos );				
			}
			
			/*
			sendPlayerMessage(action_data.m_Player, "You found something, look around");
			string messageParent1 = string.Format("| WRECK1= %1|", z_SalvageParent.ToString() );
			string messageParent2 = string.Format("| WRECK2= %1|", z_salvagePoint.GetHierarchyParent() );
			string messageParent3 = string.Format("| WRECK3= %1|", z_salvagePoint.ClassName() );
			string messageParent4 = string.Format("| WRECK4= %1|", z_salvagePoint.GetParent() );
			sendPlayerMessage(action_data.m_Player, messageParent1);
			sendPlayerMessage(action_data.m_Player, messageParent2);
			sendPlayerMessage(action_data.m_Player, messageParent3);
			sendPlayerMessage(action_data.m_Player, messageParent4);

			if ( z_SalvageParent && z_SalvageParent.IsKindOf( "Land_Wreck_Uaz" ))
			{
					SpawnTruckPart( z_salvagePoint, targetPos )
			}
			if ( z_SalvageParent && z_SalvageParent.IsKindOf( "Land_Wreck_V3S" ))
			{
					SpawnTruckPart( z_salvagePoint, targetPos )
			}
			if ( z_SalvageParent && z_SalvageParent.IsKindOf( "Land_Wreck_Tractor" ))
			{
					SpawnTruckPart( z_salvagePoint, targetPos )
			}
			if ( z_SalvageParent && z_SalvageParent.IsKindOf( "Static_Wreck_Ural" ))
			{
					SpawnTruckPart( z_salvagePoint, targetPos )
			}
			if ( z_SalvageParent && z_SalvageParent.IsKindOf( "Static_Wreck_HMMWV" ))
			{
					SpawnTruckPart( z_salvagePoint, targetPos )
			}
			if ( z_SalvageParent && z_SalvageParent.IsKindOf( "FillFromWreck_Base" ))
			{
					SpawnCarPart( z_salvagePoint, targetPos )
			}
		
			
			*/
			/* //old method
			for ( int i = 0; i < NearByWrecks.Count(); i++ )
				{
					
				if ( NearByWrecks[i].ClassName() == "Land_Wreck_Uaz" )
					{
					string z_typeTruck = NearByWrecks[i].GetType();
					SpawnTruckPart( z_salvagePoint, targetPos )
					
					//string messageTRUCK = string.Format("| WRECK=%1 | Parent=%2 |", z_typeTruck, z_salvagePoint.GetParent() );
					//sendPlayerMessage(action_data.m_Player, messageTRUCK);
					}
				if ( NearByWrecks[i].ClassName() == "Land_Wreck_V3S" )
					{
					string z_type1 = NearByWrecks[i].GetType();
					SpawnTruckPart( z_salvagePoint, targetPos )
					
					//string messageTRUCK1 = string.Format("| WRECK=%1 |", z_type1 );
					//sendPlayerMessage(action_data.m_Player, messageTRUCK1);
					}
				if ( NearByWrecks[i].ClassName() == "Land_Wreck_Tractor" )
					{
					string z_type2 = NearByWrecks[i].GetType();
					SpawnTruckPart( z_salvagePoint, targetPos )
					
					//string messageTRUCK2 = string.Format("| WRECK=%1 |", z_type2 );
					//sendPlayerMessage(action_data.m_Player, messageTRUCK2);
					}
				if ( NearByWrecks[i].ClassName() == "Static_Wreck_Ural" )
					{
					string z_type3 = NearByWrecks[i].GetType();
					SpawnTruckPart( z_salvagePoint, targetPos )
					
					//string messageTRUCK3 = string.Format("| WRECK=%1 |", z_type3 );
					//sendPlayerMessage(action_data.m_Player, messageTRUCK3);
					}
				if ( NearByWrecks[i].ClassName() == "Static_Wreck_HMMWV" )
					{
					string z_type4 = NearByWrecks[i].GetType();
					SpawnTruckPart( z_salvagePoint, targetPos )
					
					//string messageTRUCK4 = string.Format("| WRECK=%1 |", z_type4 );
					//sendPlayerMessage(action_data.m_Player, messageTRUCK4);
					}
				if ( NearByWrecks[i].ClassName() == "FillFromWreck_Base" )
					{
					string z_typeCar = NearByWrecks[i].GetType();	
					SpawnCarPart( z_salvagePoint, targetPos )
					
					//string messageCAR = string.Format("| WRECK=%1 |", z_typeCar );
					//sendPlayerMessage(action_data.m_Player, messageCAR);
					}		
				}
				*/ //end old method
		}
		else
		{
				//sendPlayerMessage(action_data.m_Player, "You didn't find anything");
				string messageNothing = string.Format("You didn't find anything");
				NotificationSystem.SendNotificationToPlayerExtended(Man.Cast(action_data.m_Player), 2, "Salvaging", messageSomething, "set:dayz_gui image:tutorials");					
				
				z_salvagePoint.SetHealth(0);
				GetGame().ObjectDelete(z_salvagePoint);
				
		}		
		
		

		
		
		//Chance to bleed without gloves. 
			EntityAI gloves = action_data.m_Player.GetInventory().FindAttachment(InventorySlots.GLOVES);
			
			if( gloves && gloves.GetHealthLevel() < 4 )
				{
					gloves.AddHealth("","", -3);	
					
					z_salvagePoint.SetHealth(0);
					GetGame().ObjectDelete(z_salvagePoint);
					
		
					z_toolBase.DecreaseHealth(UADamageApplied.WRENCH_DAMAGE);
					action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
				}
				
			if ( !gloves || gloves.IsRuined() )
			{
				if(	Math.RandomFloat01() < 0.25) //0.25 default
				{
					if(Math.RandomFloat01() < 0.5)
					{
						if(action_data.m_Player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("LeftForeArmRoll"))
						{
							//SendSoundEvent(EPlayerSoundEventID.INJURED_LIGHT);
						}
					}
					else
					{
						if(action_data.m_Player.GetBleedingManagerServer().AttemptAddBleedingSourceBySelection("RightForeArmRoll"))
						{
							//SendSoundEvent(EPlayerSoundEventID.INJURED_LIGHT);
						}
					}

				}

				
				
				z_salvagePoint.SetHealth(0);
				GetGame().ObjectDelete(z_salvagePoint);

		
				z_toolBase.DecreaseHealth(UADamageApplied.WRENCH_DAMAGE);
				action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );
			}
		///--------------------------------------------
				z_salvagePoint.SetHealth(0);
				GetGame().ObjectDelete(z_salvagePoint);

		
	}
	
};