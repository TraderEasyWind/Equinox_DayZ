modded class Edible_Base : ItemBase {
    bool isRefrigPreserveOn() {
        return GetA6BaseStorageConfig().EnableRefrigeratorFoodPreserve;
    }
    bool isInFridge() {
    	A6_Refrigerator refrigerator;
    	EntityAI obj = GetHierarchyParent();
    	return Class.CastTo(refrigerator, obj);
	}
	override bool CanProcessDecay() {
        bool preserveInFridge = isRefrigPreserveOn() && isInFridge();
        return !GetIsFrozen() && (GetFoodStageType() != FoodStageType.ROTTEN) && !preserveInFridge;
    }
} 