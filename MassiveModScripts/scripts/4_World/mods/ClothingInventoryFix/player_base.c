modded class PlayerBase
{	
	override void CalculateVisibilityForAI()
	{
		const int VISIBILITY_SLOTS_COUNT = 10;

		int attcount = GetInventory().AttachmentCount();
		float sumVisibility = 0;
		float countVisibility = 0;
		float visibilityMean = 0;

		if (attcount > 0)
		{
			for (int att = 0; att < attcount; att++)
			{
				EntityAI attachment = GetInventory().GetAttachmentFromIndex(att);
				if (attachment.IsClothing())
				{
                    float clothingVisibility = 0.0;
					ClothingBase clothing = ClothingBase.Cast(attachment);
                    //https://feedback.bistudio.com/T159815 >:(
                    //they are refusing to fix this so i'll add it instead
                    if(!clothing)
                    {
						string warningMessage = string.Format("The item %1 is not inheriting from the correct class: Clothing. Please change your config and class inheritance.", attachment.GetType());
						ErrorEx(warningMessage, ErrorExSeverity.WARNING);	
                        Clothing clothingOriginal = Clothing.Cast(attachment);
                        if(clothingOriginal)
                        {                            
                            clothingVisibility = clothingOriginal.GetItemVisibility();
                        }
                    }
                    else
                    {
                        clothingVisibility = clothing.GetItemVisibility();
                    }
                    
                    sumVisibility += clothingVisibility;
                    countVisibility++;
				}
			}

			visibilityMean = (sumVisibility + (VISIBILITY_SLOTS_COUNT - countVisibility)) / VISIBILITY_SLOTS_COUNT;
			SetVisibilityCoef(visibilityMean);
		}
		else
		{
			visibilityMean = 1;
			SetVisibilityCoef(visibilityMean);
		}
	}
}
