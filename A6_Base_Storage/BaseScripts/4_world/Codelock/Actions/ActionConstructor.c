#ifdef CodeLock
modded class ActionConstructor {   
    override void RegisterActions( TTypenameArray actions ) {
        super.RegisterActions( actions );
        actions.Insert(ActionInteractLockOnA6);
        actions.Insert(ActionAttachCodeLockToA6);
        actions.Insert(ActionManageLockOnA6);
        actions.Insert(ActionLockAdminOnA6);
    }
}   
#endif