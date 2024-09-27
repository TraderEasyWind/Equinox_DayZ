modded class Inventory
{
    static void MoveAttachmentToTop( int slot_id )
    {
        while (MoveAttachmentUpAbs(slot_id)) {}
    }

    static bool MoveAttachmentUpAbs( int slot_id )
    {
        int curr            = GetPlayerAttachmentIndex( slot_id );
        int next_offset     = 0;
        string next_item    = "init";
        int next_id;
        EntityAI next_ent;
        
        while (!next_ent && next_item != string.Empty)
        {
            next_item   = m_PlayerAttachmentsIndexes.GetKeyByValue( curr + --next_offset );
            next_id     = InventorySlots.GetSlotIdFromString( next_item );
            next_ent    = GetGame().GetPlayer().GetInventory().FindAttachment( next_id );
        }
        
        if (next_item != string.Empty && next_ent)
        {
            int next = GetPlayerAttachmentIndex( next_item );
            m_PlayerAttachmentsIndexes.Set( InventorySlots.GetSlotName( slot_id ), next );
            m_PlayerAttachmentsIndexes.Set( next_item, curr );

            if (m_Instance)
                m_Instance.m_RightArea.SwapItemsInOrder( next_id, slot_id );
            
            return true;
        }
        
        return false;
    }
}