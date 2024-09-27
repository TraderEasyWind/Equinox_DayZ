//modded class PlayerConstants 
//{
//	static const int BLOOD_THRESHOLD_FATAL 					= 1250;	//fatal blood level
//	
//	//----------------------------------------------------------
//	//						AI SENSOR MULTIPLIER
//	//----------------------------------------------------------
//	static const float AI_NOISE_SPRINT 			= 0.8;				//Multiplier for the noise generated while sprinting
//	static const float AI_NOISE_RUN 			= 0.4;				//Multiplier for the noise generated while jogging
//	static const float AI_NOISE_WALK 			= 0.2;				//Multiplier for the noise generated while walking
//	static const float AI_NOISE_IDLE 			= 0;				//Multiplier for the noise generated while staying still
//	static const float AI_NOISE_SHOES_BOOTS 	= 0.50;				//Multiplier for the noise generated while wearing boots
//	static const float AI_NOISE_SHOES_SNEAKERS	= 0.35;				//Multiplier for the noise generated while wearing sneakers
//	static const float AI_NOISE_SHOES_NONE 		= 0.25;				//Multiplier for the noise generated while not wearing shoes
//	static const float AI_VISIBILITY_RUN 		= 0.8;				//Multiplier for the visibility of the player while jogging or sprinting
//	static const float AI_VISIBILITY_WALK 		= 0.5;				//Multiplier for the visibility of the player while walking
//	static const float AI_VISIBILITY_IDLE 		= 0.2;				//Multiplier for the visibility of the player while staying still
//	static const float AI_VISIBILITY_STANDING	= 1.2;				//Multiplier for the visibility of the player while standing
//	static const float AI_VISIBILITY_CROUCH		= 0.3;				//Multiplier for the visibility of the player while crouched
//	static const float AI_VISIBILITY_PRONE 		= 0.15;				//Multiplier for the visibility of the player while prone
//	
//	//static const float WATER_LOSS_HC_PLUS_LOW				= 0.25;
//	//static const float WATER_LOSS_HC_PLUS_HIGH				= 0.4;
//	//
//	//static const float ENERGY_LOSS_HC_MINUS_LOW				= 0.25;
//	//static const float ENERGY_LOSS_HC_MINUS_HIGH			= 0.45;
//	//
//	//static const float HEALTH_LOSS_HC_PLUS_LOW				= 0.15;
//	//static const float HEALTH_LOSS_HC_PLUS_HIGH				= 0.35;		
//	//
//	//static const float HEALTH_LOSS_HC_MINUS_LOW				= 0.15;
//	//static const float HEALTH_LOSS_HC_MINUS_HIGH 			= 0.35;	
//}
//modded class GameConstants
//{
//	/**
//	 * \defgroup Configurations for StaminaHandler class
//	 * \desc Configurations for StaminaHandler class
//	 * @{
//	 */
//		// unit = currently percent (stamina max is 100)
//	const float	STAMINA_DRAIN_MELEE_LIGHT = 5; //in units (how much light melee punch depletes stamina)
//	const float	STAMINA_DRAIN_MELEE_HEAVY = 15; //in units (how much heavy melee punch depletes stamina)
//	const float	STAMINA_DRAIN_MELEE_EVADE = 8; // in units (how much evade depletes stamina)
//	
//	
//	const int 	STAMINA_GAIN_JOG_PER_SEC = 2; //in units (how much of stamina units is gained while jogging)
//	const int 	STAMINA_GAIN_WALK_PER_SEC = 4; //in units (how much of stamina units is gained while walking)
//	const int 	STAMINA_GAIN_IDLE_PER_SEC = 5; //in units (how much of stamina units is gained while iddling)
//	const int	STAMINA_GAIN_SWIM_PER_SEC = 1; //in units (how much of stamina units is gained while slowly swim)
//	const int	STAMINA_GAIN_LADDER_PER_SEC = 1; //in units (how much of stamina units is gained while slowly swim)
//	const int	STAMINA_GAIN_ROLL_PER_SEC = 0; //in units (how much of stamina units is gained while rolling)
//	const float STAMINA_GAIN_BONUS_CAP = 3.0; //in units (tells how much extra units can be added at best to stamina regain)
//	
//	const float STAMINA_KG_TO_STAMINAPERCENT_PENALTY = 1.75; //in units (by how many  units is max stamina bar reduced for each 1 kg of load weight)
//	const float STAMINA_MIN_CAP = 5; //in units (overload won't reduce max stamina bar under this value)
//	const float STAMINA_HOLD_BREATH_THRESHOLD_ACTIVATE = 60; // in units
//	const float STAMINA_HOLD_BREATH_THRESHOLD_DRAIN = 0; // in units
//	const float STAMINA_JUMP_THRESHOLD = 25; // in units
//	const float STAMINA_VAULT_THRESHOLD = 20; // in units
//	const float STAMINA_CLIMB_THRESHOLD = 42; // in units
//	const float STAMINA_ROLL_THRESHOLD = 5; // in units
//	
//	
//	const float STAMINA_MELEE_HEAVY_THRESHOLD = STAMINA_DRAIN_MELEE_HEAVY; // in units (how many units we need to make a heavy hit in melee)
//	const float STAMINA_MELEE_EVADE_THRESHOLD = 8; // in units
//	const float STAMINA_REGEN_COOLDOWN_DEPLETION = 0.45; // in secs (how much time we will spend in cooldown before the stamina will starts with regeneration)
//	const float STAMINA_REGEN_COOLDOWN_EXHAUSTION = 0.2;
//	const float STAMINA_WEIGHT_LIMIT_THRESHOLD = 6000; //! in grams (weight where the player is not penalized by stamina)
//	const float STAMINA_KG_TO_GRAMS = 1000; //for kg to g conversion
//	const float STAMINA_SYNC_RATE = 1; //in secs
//	const float STAMINA_MAX = 150;
//}