class CfgPatches 
{
    class A6_GreenHouse 
    {
        units[] = {"A6_GreenHouse"};
        weapons[] = {};
        requiredVersion = 0.01;
        requiredAddons[] = {"DZ_Data","DZ_Gear_Cultivation","A6_BaseKitBoxes"};
    };
};
class CfgVehicles 
{
	class A6_Kit;
	class GardenPlotPolytunnel;
	class A6_GreenHouse_Kit: A6_Kit
	{
		scope = 2;
		displayName="Green House Kit";
		descriptionShort = "A Kit that containts a Green House for Farming. Can be disassembled with a screwdriver.";
	};
	class A6_GreenHouse: GardenPlotPolytunnel
	{
		scope = 2;
		displayName = "Green House";
		descriptionShort = "A Green House for Farming. Can be disassembled with a screwdriver.";
		model = "A6_Base_Storage\BaseObjects\GreenHouse\GreenHouse.p3d";
		storageCategory = 1;
		useEntityHierarchy = "true";
		physLayer = "item_large";
		slopeTolerance = 0.3;
		alignHologramToTerain = 1;
		yawPitchRollLimit[] = {10,10,10};
		attachments[] = {"SeedBase_1","SeedBase_2","SeedBase_3","SeedBase_4","SeedBase_5","SeedBase_6","SeedBase_7","SeedBase_8","SeedBase_9"};
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name = "$STR_attachment_Filling0";
				description = "";
				attachmentSlots[] = {"SeedBase_1","SeedBase_2","SeedBase_3","SeedBase_4","SeedBase_5","SeedBase_6","SeedBase_7","SeedBase_8","SeedBase_9"};
				icon = "set:dayz_inventory image:cat_gp_filling";
			};
		};
	};
};