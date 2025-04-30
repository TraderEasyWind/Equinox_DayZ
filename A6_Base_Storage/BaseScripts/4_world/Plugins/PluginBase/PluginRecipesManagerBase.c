modded class PluginRecipesManagerBase {
	override void RegisterRecipies() {
		super.RegisterRecipies();
		RegisterRecipe(new DismantleA6BaseStorage);	
		RegisterRecipe(new CraftA6ArmorRack);
		RegisterRecipe(new DeCraftA6ArmorRack);
		RegisterRecipe(new CraftA6MedicalCabinet);
		RegisterRecipe(new DeCraftA6MedicalCabinet);
		RegisterRecipe(new CraftA6GunRack);
		RegisterRecipe(new DeCraftA6GunRack);
		RegisterRecipe(new CraftA6DoubleGunRack);
		RegisterRecipe(new DeCraftA6DoubleGunRack);
		RegisterRecipe(new CraftA6MilitaryLocker);
		RegisterRecipe(new DeCraftA6MilitaryLocker);					
	}
}