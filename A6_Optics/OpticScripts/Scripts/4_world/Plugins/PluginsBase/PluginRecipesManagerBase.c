modded class PluginRecipesManagerBase {
	override void RegisterRecipies() {
		super.RegisterRecipies();
		RegisterRecipe(new MountTopSight);
		RegisterRecipe(new MountTopSightAcog);
		RegisterRecipe(new DismountTopSight);
		RegisterRecipe(new MountMRD);
		RegisterRecipe(new DismountMRD);		
	}
}