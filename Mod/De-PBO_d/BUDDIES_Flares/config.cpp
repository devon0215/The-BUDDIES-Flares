class CfgPatches
{
	class BUDDIES_Flares
	{
		units[]={};
		weapons[]={};
		ammo[]=
		{
			"FlareBase",
			"F_40mm_White",
			"Flare_82mm_AMOS_White",
			"rhs_ammo_flare_3WS23"
		};
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"ace_grenades",
			"rhs_main_loadorder"
		};
	};
};

class CfgAmmo
{
	class FlareCore;
	class FlareBase: FlareCore
	{
		timeToLive=300;
		brightness=300000;
		intensity=400000;
		flareSize=75;
	};
	class F_40mm_White: FlareBase
	{
		timeToLive=300;
		brightness=300000;
		intensity=400000;
		flareSize=75;
	};
	class Flare_82mm_AMOS_White: FlareCore
	{
		timeToLive=300;
		brightness=300000;
		intensity=400000;
		flareSize=75;
	};
	class rhs_ammo_flare_3WS23: F_40mm_White
	{
		timeToLive=300;
		brightness=300000;
		intensity=400000;
		flareSize=75;
	};
};