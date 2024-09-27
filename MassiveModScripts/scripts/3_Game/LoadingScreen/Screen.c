modded class LoadingScreen 
{
    void LoadingScreen(DayZGame game) 
    {
        Class.CastTo(m_ImageLogoMid, m_WidgetRoot.FindAnyWidget("ImageLogoMid"));
        Class.CastTo(m_ImageLogoCorner, m_WidgetRoot.FindAnyWidget("ImageLogoCorner"));
        Class.CastTo(m_ModdedWarning, m_WidgetRoot.FindAnyWidget("ModdedWarning"));
        m_ImageLogoMid.Show(false);
        m_ImageLogoCorner.Show(true);
        m_ModdedWarning.Show(true);        


        string port;
        GetCLIParam("port", port);
        if (port == "2504")
        {
            m_ImageBackground.LoadImageFile(0, "MassiveModScripts/Data/chernarus.paa");
        }
        m_ImageBackground.LoadMaskTexture("");
        ProgressAsync.SetUserData(m_ImageBackground);
    }
	
	void Show()
	{
		Widget lIcon = m_ImageBackground;
		Widget pText = m_ProgressLoading;
		ref TStringArray RandomQuotes = 
		{
			"Nothing is more dangerous than a Man with nothing to lose.",
			//"Drinking Disinfectant does not cure the Sniffles.",
			//"Spawn, Freeze, Starve, Repeat.",
			//"Everyone is Friendly in Vorkuta",
			//"Everyone is Friendly in Cherno",
			//"Look for big Red signs titled 'Trader' They lead somewhere useful.",
			"Check out the Server Information panel by pressing escape and clicking the button.",
			"You can cut down a small bush for wood with your hands or knife",
			"You can Light a fire with a road flare",
			//"Dropping frozen items on the ground next to a fire will thaw them.",
			"You can Scrap Guns with a Screwdriver and use the scrap to make a advanced repair kit",
			//"Only Tier 4 Caches drop Tier 5 Keys",
			//"You can Combine Duplicate Keys to create a tier higher than the duplicate.",
			//"keep your healthbar above 0 to survive",
			//"Tier 5 keys can only be used on Namalsk",
			"You can access a person's inventory if their hands are up.",
			"Unlike in Vanilla DayZ, Apartments spawn loot.",
			"Karma DOES Exist.",
			"Protip: During the Winter, Eating food above 70 degrees will damage you, but any food 40-70 degrees will help give you Heat+ faster than just standing by a fire.",
			"Protip: The MRE Waterless-Heater can heat foods fast, and when those foods are placed in a jacket, they will keep you far warmer than normal Heat Packs.",
			"Protip: Just because your Bottle and Apple are filled, it doesn't mean your Hydration and Energy are. Eat until the icons flash a chevron up and down for the True-Full state.",
			"Protip: Multivitamins will add 50% to your immunity stat, preventing illness even around other players sick with the Flu. When combined with Tetra, they will cure you of the flu faster.",
			"Protip: Look for clothing labeled as 'Best Insulation'. These items will keep you warmer in the cold; when wet, they will lose their insulating properties, so be sure to wring them out often.",
			"Protip: When hunting, try to shoot animals in the head, as body damage will result in a lower yield of meat and animal parts.",
			"Protip: Wolves will chase meat for 20 seconds once thrown, so use that time to get away. Wolves lose interest in targets 200m away. Gotta go fast.",
			//"This Pleases the Lord",
			//"I made this loading screen - Mass",
			"There is no Honor in the wasteland"
		};
		
		//imageWidgetBackground.LoadImageFile(0, loadingScreenImagesNamalsk.GetRandomElement());// double check that function name
        m_ProgressText.SetText(RandomQuotes.GetRandomElement());
        m_ModdedWarning.SetText(RandomQuotes.GetRandomElement());
		
		m_ProgressLoading.SetCurrent( 0.0 );
		m_ImageBackground.SetMaskProgress( 0.0 );
		if ( !m_WidgetRoot.IsVisible() )
		{
			if ( m_DayZGame.GetUIManager().IsDialogVisible() )
			{
				m_DayZGame.GetUIManager().HideDialog();
			}
			
			if ( m_DayZGame.GetMissionState() == DayZGame.MISSION_STATE_MAINMENU )
			{
				m_ImageWidgetBackground.Show( true );		
				m_TextWidgetStatus.Show(true);
			}
			else
			{
				m_ImageWidgetBackground.Show( true );
				m_TextWidgetStatus.Show(false);
			}
			
			m_WidgetRoot.Show( true );
			m_TextWidgetTitle.SetText( "" );
			m_TextWidgetStatus.SetText( "" );
		}
		
		ProgressAsync.SetProgressData(pText);
		ProgressAsync.SetUserData(lIcon);
	}
}
modded class LoginQueueBase 
{	
	override Widget Init() 
	{
	    Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
	    imageWidgetBackground.LoadMaskTexture("");
		
		
		
		string worldname;
        GetGame().GetWorldName(worldname);
        worldname.ToLower(); //to be safe 
       // if ( worldname == "namalsk" )
       // {
	   //     imageWidgetBackground.LoadImageFile(0, "MassiveModScripts/Data/namalsk.paa");// double check that function name
       // }
		if ( worldname == "chernarus" )
        {
	        imageWidgetBackground.LoadImageFile(0, "MassiveModScripts/Data/chernarus.paa");// double check that function name
        }
		return w;
	}
}
modded class LoginTimeBase 
{
	
    override Widget Init() 
	{
	    Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background") );
	    imageWidgetBackground.LoadMaskTexture("");
		
		
		
		string worldname;
        GetGame().GetWorldName(worldname);
        worldname.ToLower(); //to be safe 
       // if ( worldname == "namalsk" )
       // {
	   //     imageWidgetBackground.LoadImageFile(0, "MassiveModScripts/Data/namalsk.paa");// double check that function name
       // }
		if ( worldname == "chernarus" )
        {
	        imageWidgetBackground.LoadImageFile(0, "MassiveModScripts/Data/chernarus.paa");// double check that function name
        }
		return w;
	}
}