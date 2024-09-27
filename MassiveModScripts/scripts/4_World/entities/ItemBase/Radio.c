class MassiveMod_TacticalRadio_Colorbase extends TransmitterBase
{
	protected int m_EmissiveIndex;

	private const string EMISSIVE_MATERIAL_ON 	= "MassiveMod\\Gear\\Radio\\Data\\TacticalRadio_Emissive_On.rvmat";
	private const string EMISSIVE_MATERIAL_OFF 	= "MassiveMod\\Gear\\Radio\\Data\\TacticalRadio_Emissive.rvmat";
	
	void MassiveMod_TacticalRadio_Colorbase()
	{
		m_EmissiveIndex = GetHiddenSelectionIndex("emissive");
	}

	override void OnWorkStart()
	{
		super.OnWorkStart();
		
		SetObjectMaterial( m_EmissiveIndex, EMISSIVE_MATERIAL_ON );
	}

	override void OnWorkStop()
	{
		super.OnWorkStop();
		
		SetObjectMaterial( m_EmissiveIndex, EMISSIVE_MATERIAL_OFF );
	}
}
class MassiveMod_TacticalRadio_Green extends MassiveMod_TacticalRadio_Colorbase
{

}
class MassiveMod_TacticalRadio_Black extends MassiveMod_TacticalRadio_Colorbase
{

}
class MassiveMod_TacticalRadio_Tan extends MassiveMod_TacticalRadio_Colorbase
{

}
