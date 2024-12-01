class CfgPatches
{
	class MassiveMod_ModTweaks_MMG_Basebuilding
	{
		units[] = {""};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] =
        {
            "DZ_Data",
			"DZ_Scripts",
			"mmg_storage"
        };
	};
};//meow
class CfgVehicles
{
	class mmg_storage_openable_base;
	class mmg_locker_base: mmg_storage_openable_base
	{
		attachments[]-=
		{
			"Att_ExpansionCodeLock",
		};
		class GUIInventoryAttachmentsProps
		{
		    class Expansion_Codelock
			{
				name="Expansion Codelock";
				description="";
				attachmentSlots[]-=
				{
					"Att_ExpansionCodeLock"
				};
				icon="cat_common_cargo";
			};
		};
	};
	class mmg_armored_cabinet_base: mmg_storage_openable_base
	{
		attachments[]-=
		{
			"Att_ExpansionCodeLock",
		};
		class GUIInventoryAttachmentsProps
		{
		    class Expansion_Codelock
			{
				name="Expansion Codelock";
				description="";
				attachmentSlots[]-=
				{
					"Att_ExpansionCodeLock"
				};
				icon="cat_common_cargo";
			};
		};
	};
	class mmg_locker02_base: mmg_storage_openable_base
	{
		attachments[]-=
		{
			"Att_ExpansionCodeLock",
		};
		class GUIInventoryAttachmentsProps
		{
			class Expansion_Codelock
			{
				name="Expansion Codelock";
				description="";
				attachmentSlots[]-=
				{
					"Att_ExpansionCodeLock"
				};
				icon="cat_common_cargo";
			};
		};
	};
	class mmg_solo_locker_base: mmg_storage_openable_base
	{
		attachments[]-=
		{
			"Att_ExpansionCodeLock"
		};
		class GUIInventoryAttachmentsProps
		{
			class Expansion_Codelock
			{
				name="Expansion Codelock";
				description="";
				attachmentSlots[]-=
				{
					"Att_ExpansionCodeLock"
				};
				icon="cat_bb_attachments";
			};
		};
	};
	class mmg_lockable_gun_rack_base: mmg_storage_openable_base
	{
		attachments[]-=
		{
			"Att_ExpansionCodeLock"
		};
		class GUIInventoryAttachmentsProps
		{
			class Expansion_Codelock
			{
				name="Expansion Codelock";
				description="";
				attachmentSlots[]-=
				{
					"Att_ExpansionCodeLock"
				};
				icon="cat_common_cargo";
			};
		};
	};
};