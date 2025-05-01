modded class ActionConstructor {
    override void RegisterActions( TTypenameArray actions ) {
        super.RegisterActions( actions );
        actions.Insert( ActionToggleBipod );
        actions.Insert( ActionTurnOnWeaponLeftLight);
        actions.Insert( ActionTurnOffWeaponLeftLight);
        actions.Insert( ActionTurnOnWeaponRightLight);
        actions.Insert( ActionTurnOffWeaponRightLight);
        actions.Insert( ActionTurnOnWeaponTopLight);
        actions.Insert( ActionTurnOffWeaponTopLight);
        actions.Insert( ActionToggleLightLeftIR );
        actions.Insert( ActionToggleLightRightIR );
        actions.Insert( ActionToggleLightTopIR );
    };
};