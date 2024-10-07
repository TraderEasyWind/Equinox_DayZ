class nd_datsun_base extends CarScript
{	
    #ifdef EXPANSIONMODVEHICLE
    override bool CanObjectAttach( Object obj )
    {
    	if ( !obj.IsInherited( PlayerBase ) ) 
    		return false;
    
    	if ( vector.Distance( GetPosition(), obj.GetPosition() ) > m_BoundingRadius * 1.5 )
    		return false;
    
    	return true;
    }
    
    override bool LeavingSeatDoesAttachment( int posIdx )
    {
    	return false;
    }
    #endif
	
	void nd_datsun_base()
	{
		m_dmgContactCoef = 0.05;
		
		m_EngineStartOK = "offroad_engine_start_SoundSet";
		m_EngineStartBattery = "offroad_engine_failed_start_battery_SoundSet";
		m_EngineStartPlug = "offroad_engine_failed_start_sparkplugs_SoundSet";
		m_EngineStartFuel = "offroad_engine_failed_start_fuel_SoundSet";
		m_EngineStopFuel = "offroad_engine_stop_fuel_SoundSet";
		
		m_CarDoorOpenSound = "offroad_door_open_SoundSet";
		m_CarDoorCloseSound = "offroad_door_close_SoundSet";
	}
	
    override float GetActionDistanceFuel()
    {
        return 3.2;
    }
	
	override float GetActionDistanceCoolant()
    {
        return 4.2;
    }	
	
	override float GetActionDistanceOil()
    {
        return 4.2;
    }
	
	override bool IsVitalTruckBattery()
	{
		return false;
	}

	override bool IsVitalGlowPlug()
	{
		return false;
	}
	
	override bool IsVitalCarBattery()
	{
		return true;
	}
	
	override int GetAnimInstance()
	{
		return VehicleAnimInstances.SEDAN;
	}
	
// Override for car-specific light type
	override CarRearLightBase CreateRearLight()
	{
		return CarRearLightBase.Cast( ScriptedLightBase.CreateLight(nd_datsunRearLight) );
	}
	
	// Override for car-specific light type
	override CarLightBase CreateFrontLight()
	{
		return CarLightBase.Cast( ScriptedLightBase.CreateLight(nd_datsunFrontLight) );
	}
	
	override int GetCarDoorsState( string slotType )
	{
		CarDoor carDoor;

		Class.CastTo( carDoor, FindAttachmentBySlotName( slotType ) );
		if ( !carDoor )
			return CarDoorState.DOORS_MISSING;
	
		switch( slotType )
		{
			case "nd_datsun_driverdoor":
				if ( GetAnimationPhase("DoorsDriver") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;
				
            break;
			
			case "nd_datsun_codriverdoor":
				if ( GetAnimationPhase("DoorsCoDriver") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;
				
			break;
			
            case "nd_datsun_hood":
				if ( GetAnimationPhase("DoorsHood") > 0.5 )
					return CarDoorState.DOORS_OPEN;
				else
					return CarDoorState.DOORS_CLOSED;
				
			break;
		}
        return CarDoorState.DOORS_MISSING;
	}
	
	override string GetDoorConditionPointFromSelection( string selection )
	{
		switch (selection)
		{
			case "seat_driver":
				return "seat_con_1_1";
			break;
			case "seat_codriver":
				return "seat_con_2_1";
			break;
			case "seat_cargo1":
				return "seat_con_1_2";
			break;
			case "seat_cargo2":
				return "seat_con_2_2";
			break;
			case "seat_cargo3":
				return "seat_con_3_2";
			break;
			case "seat_cargo4":
				return "seat_con_4_2";
			break;
        }
		return "";
	}

	override bool CrewCanGetThrough( int posIdx )
	{
		switch( posIdx )
		{
			case 0:
			  if ( GetCarDoorsState( "nd_datsun_driverdoor" ) == CarDoorState.DOORS_CLOSED )
				return false;
                return true;
			break;
			case 1:
			  if ( GetCarDoorsState( "nd_datsun_codriverdoor" ) == CarDoorState.DOORS_CLOSED )
				return false;
                return true;
			break;
			case 2:
                return true;
			break;
			case 3:
                return true;
			break;
			case 4:
                return true;
			break;
			case 5:
                return true;
			break;
        }
        return false;
	}
	
	override string GetDoorSelectionNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "doors_driver";
		break;
		case 1:
			return "doors_codriver";
		break;
		case 2:
			return "";
		break;
		case 3:
			return "";
		break;
		case 4:
			return "";
		break;
		case 5:
			return "";
		break;
        }
		
		return super.GetDoorSelectionNameFromSeatPos(posIdx);
	}
	
	override string GetDoorInvSlotNameFromSeatPos(int posIdx)
	{
		switch( posIdx )
		{
		case 0:
			return "nd_datsun_driverdoor";
		break;
		case 1:
			return "nd_datsun_codriverdoor";
		break;
		case 2:
			return "";
		break;
		case 3:
			return "";
		break;
		case 4:
			return "";
		break;
		case 5:
			return "";
		break;

		}
		
		return super.GetDoorInvSlotNameFromSeatPos(posIdx);
	}
	
	override bool CanReleaseAttachment( EntityAI attachment )
	{
		if( !super.CanReleaseAttachment( attachment ) )
			return false;
		
		string attType = attachment.GetType();
		
		switch( attType )
		{
			case "CarRadiator":
				if ( GetCarDoorsState("nd_datsun_hood") == CarDoorState.DOORS_CLOSED || EngineIsOn() )
					return false;
			break;
			case "HeadlightH7":
				if ( GetCarDoorsState("nd_datsun_hood") == CarDoorState.DOORS_CLOSED || EngineIsOn() )
					return false;
			break;
			case "CarBattery": 
				if ( GetCarDoorsState("nd_datsun_hood") == CarDoorState.DOORS_CLOSED || EngineIsOn() )
					return false;
			break;
			case "SparkPlug":
				if ( GetCarDoorsState("nd_datsun_hood") == CarDoorState.DOORS_CLOSED || EngineIsOn() )
					return false;
			break;
		}

		return true;
	}
	
	override string GetAnimSourceFromSelection( string selection )
	{
		switch( selection )
		{
		case "doors_driver":
			return "DoorsDriver";
		case "doors_codriver":
			return "DoorsCoDriver";
		case "doors_trunk":
			return "DoorsTrunk";
		case "doors_hood":
			return "DoorsHood";
		}
        return "";
	}


	override int GetSeatAnimationType( int posIdx )
	{
		switch( posIdx )
		{
		case 0:
			return DayZPlayerConstants.VEHICLESEAT_DRIVER;
		case 1:
			return DayZPlayerConstants.VEHICLESEAT_CODRIVER;
		case 2:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 3:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 4:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
		case 5:
			return DayZPlayerConstants.VEHICLESEAT_PASSENGER_L;
        }
		return 0;
	}
	override bool CanReachSeatFromSeat( int currentSeat, int nextSeat )
	{
		switch( currentSeat )
		{
		case 0:
			if ( nextSeat == 1 )
				return true;
			break;
		case 1:
			if ( nextSeat == 0 )
				return true;
			break;
		case 2:
			if ( nextSeat == 3 )
				return false;
			break;
		case 3:
			if ( nextSeat == 2 )
				return false;
			break;
		case 4:
			if ( nextSeat == 5 )
				return false;
			break;
		case 5:
			if ( nextSeat == 4 )
				return false;
			break;
        }
		return false;
	}

	override bool CanReachDoorsFromSeat( string pDoorsSelection, int pCurrentSeat )
	{
		switch( pCurrentSeat )
		{
		case 0:
			if (pDoorsSelection == "DoorsDriver")
			{
				return true;
			}
		break;
		case 1:
			if (pDoorsSelection == "DoorsCoDriver")
			{
				return true;
			}
		break;
        }
		return false;		
	}
	
	override float OnSound( CarSoundCtrl ctrl, float oldValue )
	{
		switch ( ctrl )
		{
			case CarSoundCtrl.DOORS:
				float newValue = 0;
				
				if ( GetCarDoorsState( "nd_datsun_driverdoor" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.25;
				
				if ( GetCarDoorsState( "nd_datsun_codriverdoor" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.25;
				
				if ( GetCarDoorsState( "nd_datsun_hood" ) == CarDoorState.DOORS_CLOSED )
					newValue += 0.25;
					
				if ( newValue > 1 )
					newValue = 1;
			
				return newValue;
			break;
		}

		return oldValue;
	}
}
class nd_datsun extends nd_datsun_base{};

modded class DayZPlayerCamera3rdPersonVehicle extends DayZPlayerCameraBase
{
    void DayZPlayerCamera3rdPersonVehicle (DayZPlayer pPlayer, HumanInputController pInput)
    {
        if (pPlayer.GetCommand_Vehicle().GetTransport().GetType() == "nd_datsun")
        {
        //Print("new camera: DayZPlayerCamera3rdPersonVehicle");
        m_fDistance         = 6.5; 
        m_CameraOffsetMS    = "0.0 1.2 0.0";
        }
    }
}