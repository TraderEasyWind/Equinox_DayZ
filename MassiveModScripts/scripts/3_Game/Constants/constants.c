modded class GameConstants
{
	
};
modded class PlayerConstants 
{
    static const float SHOES_MOVEMENT_DAMAGE_PER_STEP = 0.0175;
	static const float GLOVES_DAMAGE_SLIDING_LADDER_PER_SEC = -1.5;// how much damage the gloves receive while sliding down the ladder (per sec)
	
	static const int BLOOD_THRESHOLD_FATAL 					= 1250;	//fatal blood level
	//----------------------------------------------------------
	//						AI SENSOR MULTIPLIER
	//----------------------------------------------------------
	static const float AI_NOISE_ROLL 			= 2;				//Multiplier for the noise generated while prone rolling
	static const float AI_NOISE_SPRINT 			= 1;				//Multiplier for the noise generated while sprinting
	static const float AI_NOISE_RUN 			= 0.8;				//Multiplier for the noise generated while jogging
	static const float AI_NOISE_CROUCH_RUN 		= 0.6;				//Multiplier for the noise generated while Sprint crouch
	static const float AI_NOISE_WALK 			= 0.4;				//Multiplier for the noise generated while walking
	static const float AI_NOISE_IDLE 			= 0;				//Multiplier for the noise generated while staying still
	static const float AI_NOISE_SHOES_BOOTS 	= 0.85;				//Multiplier for the noise generated while wearing boots
	static const float AI_NOISE_SHOES_SNEAKERS	= 0.6;				//Multiplier for the noise generated while wearing sneakers
	static const float AI_NOISE_SHOES_NONE 		= 0.45;				//Multiplier for the noise generated while not wearing shoes
	static const float AI_VISIBILITY_RUN 		= 0.8;				//Multiplier for the visibility of the player while jogging or sprinting
	static const float AI_VISIBILITY_WALK 		= 0.5;				//Multiplier for the visibility of the player while walking
	static const float AI_VISIBILITY_IDLE 		= 0.2;				//Multiplier for the visibility of the player while staying still
	static const float AI_VISIBILITY_STANDING	= 1.2;				//Multiplier for the visibility of the player while standing
	static const float AI_VISIBILITY_CROUCH		= 0.3;				//Multiplier for the visibility of the player while crouched
	static const float AI_VISIBILITY_PRONE 		= 0.15;				//Multiplier for the visibility of the player while prone
};