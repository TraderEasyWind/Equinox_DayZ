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
	class mmg_storage_openable_base: Container_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
			};
		};
	};
	class mmg_storage_placeable_base;
	class mmg_storage_openable_noLock_base: Container_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
			};
		};
	};
	class mmg_old_table_base: mmg_storage_placeable_base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
			};
		};
	};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1700;
				};
			};
		};
	};
};