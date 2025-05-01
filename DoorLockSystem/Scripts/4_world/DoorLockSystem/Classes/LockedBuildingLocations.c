class LockedBuildingLocations {
	float building_x, building_y, building_z;
   	int door_index;
 	string LocationName;
	string BuildingClassName;
    string KeyClassName;
	string WrongKeyMessage;
	string WrongKeySound;
	string UnlockSound;
    bool TeleportLoggedOutPlayers;

	void LockedBuildingLocations(float building_x_, float building_y_, float building_z_, int door_index_, string LocationName_, string BuildingClassname_, string KeyClassName_, string WrongKeyMessage_, string WrongKeySound_, string UnlockSound_, bool TeleportLoggedOutPlayers_) 
	{
		building_x = building_x_;
		building_y = building_y_;
		building_z = building_z_;
		door_index = door_index_;
        LocationName = LocationName_; 
		BuildingClassName = BuildingClassname_;
		KeyClassName = KeyClassName_;
		WrongKeyMessage = WrongKeyMessage_;
		WrongKeySound = WrongKeySound_;
		UnlockSound = UnlockSound_;
        TeleportLoggedOutPlayers = TeleportLoggedOutPlayers_;
    }
}