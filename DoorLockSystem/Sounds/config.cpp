class CfgPatches
{
	class DoorLockSystem_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};
class CfgSounds
{
	class default
	{
		name = "";
		titles[] = {};
	};
	class Access_Granted: default
	{
		sound[] = {"DoorLockSystem\Sounds\Door_Accepted",1,1,30};
	};
	class Access_Denied: default
	{
		sound[] = {"DoorLockSystem\Sounds\Door_Denied",1,1,30};
	};
	class Alarm_Police: default
	{
		sound[] = {"DoorLockSystem\Sounds\PoliceAlarmSound",1,1,500};
	};
	class Alarm_Bank: default
	{
		sound[] = {"DoorLockSystem\Sounds\BankAlarmSound",1,1,500};
	};
	class Alarm_Military: default
	{
		sound[] = {"DoorLockSystem\Sounds\Alarm_Military",1,1,1000};
	};
};	