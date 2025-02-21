modded class SportGlasses_ColorBase extends Glasses_Base 
{
	override protected void InitGlobalExclusionValues()
	{
		super.InitGlobalExclusionValues();
		ClearSingleExclusionValueGlobal(EAttExclusions.EXCLUSION_GLASSES_REGULAR_0);
		AddSingleExclusionValueGlobal(EAttExclusions.EXCLUSION_GLASSES_TIGHT_0);
		
		AddSingleExclusionValueGlobal(EAttExclusions.EXCLUSION_GLASSES_REGULAR_0); //TODO: check consistent mask conflict
	}
};
class SportGlasses_NCR_JoeyXs2 extends SportGlasses_ColorBase
{
	override int GetGlassesEffectID()
	{
		return PPERequesterBank.REQ_GLASSESSPORTBLUE;
	}
};