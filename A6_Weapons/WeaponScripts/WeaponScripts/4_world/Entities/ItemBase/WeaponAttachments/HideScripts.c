void SetVisibility(EntityAI ParentItem, string selectionName, bool isVisible) {
    TStringArray selectionNames = new TStringArray;
    ParentItem.ConfigGetTextArray("simpleHiddenSelections", selectionNames);
    int selectionId = selectionNames.Find(selectionName);
    ParentItem.SetSimpleHiddenSelectionState(selectionId, isVisible);
}
void FoldSightsA6(EntityAI ParentItem) {
    SetVisibility(ParentItem, "folding_raised", false);
    SetVisibility(ParentItem, "folding_lowered", true);
}
void UnfoldSightsA6(EntityAI ParentItem) {
    SetVisibility(ParentItem, "folding_raised", true);
    SetVisibility(ParentItem, "folding_lowered", false);
}
void HideIronSightsA6(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_ironsights", false);
}
void ShowIronSightsA6(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_ironsights", true);
}
void HideMuzzle(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_muzzle", false);
}
void ShowMuzzle(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_muzzle", true);
}
void HideRailGuards(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_railguards", false);
}
void ShowRailGuards(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_railguards", true);
}
void HideRail(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_rail", false);
}
void ShowRail(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_rail", true);
}
void HideSideRailGuards(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_siderailguards", false);
}
void ShowSideRailGuards(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_siderailguards", true);
}
void HidePistolGrip(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_pistolgrip", false);
}
void ShowPistolGrip(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_pistolgrip", true);
}
void HideHandguardSpacer(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_handguardspacer", false);
}
void ShowHandguardSpacer(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_handguardspacer", true);
}
void HideASVAL(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_asval", false);
}
void ShowASVAL(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_asval", true);
}
void HideTubeStock(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_tubestock", false);
}
void ShowTubeStock(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_tubestock", true);
}
void HideAKMMesh(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_akm_mesh", false);
}
void HideBigGasBlock(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_biggasblock", false);
}
void ShowBigGasBlock(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_biggasblock", true);
}
void HideGasBlock(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_gasblock", false);
}
void ShowGasBlock(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_gasblock", true);
}
void HideStock(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_stock", false);
}
void ShowStock(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_stock", true);
}
void HideCap(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_cap", false);
}
void ShowCap(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_cap", true);
}
void HideFrontsight(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_frontsight", false);
}
void ShowFrontsight(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_frontsight", true);
}
void HideButtstockPlate(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_buttstockplate", false);
}
void ShowButtstockPlate(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_buttstockplate", true);
}
void HideSideMount(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_sidemount", false);
}
void ShowSideMount(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_sidemount", true);
}
void HideIrons4Laser(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_irons4laser", false);
}
void ShowIrons4Laser(EntityAI ParentItem) {
    SetVisibility(ParentItem, "hide_irons4laser", true);
}