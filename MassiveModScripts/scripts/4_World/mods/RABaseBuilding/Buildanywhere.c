modded class BaseBuilding
{
	override bool EvaluatePlacementCondition(PlacementMode placement_mode, vector mat[4])
	{
		// Always allow placement, bypassing all checks
		return true;
	}
}

modded class BaseBuilding_ShutterBase
{
	override float GetSmallRotationStep()
	{
		return 1.25;
	}
	
	override float GetLargeRotationStep()
	{
		return 180.0;
	}
	
	override bool CanPermanentlyDismantle()
	{
		return true;
	}
	
	override vector GetFreePlacementOffset()
	{
		return Vector(0, -1.5, 0);
	}
}

modded class BaseBuilding_EmbrasureBase
{
	override float GetSmallRotationStep()
	{
		return 1.25;
	}
	
	override float GetLargeRotationStep()
	{
		return 180.0;
	}
	
	override bool CanPermanentlyDismantle()
	{
		return true;
	}
	
	override vector GetFreePlacementOffset()
	{
		return Vector(0, -1.5, 0);
	}
}

modded class BaseBuilding_FoundationBase
{
	override float GetSmallRotationStep()
	{
		return 1.25;
	}
}
modded class BaseBuilding_TriangleFoundationBase
{
	override float GetSmallRotationStep()
	{
		return 1.25;
	}
}

modded class BaseBuilding_SingleDoorBase
{
	static const float MAX_Y_HEIGHT = 500.9;
	static const float MIN_Y_HEIGHT = 0;
	
	override float GetSmallRotationStep()
	{
		return 1.25;
	}
	
	override float GetLargeRotationStep()
	{
		return 180.0;
	}
	
	override bool IsOccupancyExclusive()
	{
		return true;
	}
	
	override bool CanPermanentlyDismantle()
	{
		return true;
	}
	
	override bool EvaluatePlacementCondition(PlacementMode placement_mode, vector mat[4])
	{
		// Check if we are close enough to the ground, or inside
		vector position = mat[3];
		float delta_y = position[1] - g_Game.SurfaceY(position[0], position[2]);
		if (delta_y > MAX_Y_HEIGHT || delta_y < MIN_Y_HEIGHT) {
			return false;
		}
				
		return super.EvaluatePlacementCondition(placement_mode, mat);
	}
	
	override vector GetFreePlacementOffset()
	{
		return Vector(0, -1, 0);
	}
}