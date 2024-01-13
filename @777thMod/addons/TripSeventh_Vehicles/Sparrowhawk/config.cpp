class CfgPatches {
	class TripSeventh_Vehicles_Sparrowhawk {
		author = "Den";
		name = "777th PMC: Sparrowhawk";
		requiredAddons[] = {
			"TripSeventh_Foundation",
			"OPTRE_Core"
		};
		weapons[] = {};
		units[] = {
			"TripSeventh_Sparrowhawk"
		};
	};
};
class CfgVehicles {
	class OPTRE_UNSC_Sparrowhawk;

	class Eventhandlers;

	// Base type Sparrowhawk
	class TripSeventh_Sparrowhawk_Base : OPTRE_UNSC_Sparrowhawk {
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "Den";
		displayName = "TripSeventh_Sparrowhawk_Base";
		faction = "TripSeventh_UnitFact_Main";
		editorCategory = "TripSeventh_EditorCategory_Main";
		editorSubcategory = "TripSeventh_EditorSubcategory_Objects_Sparrowhawk";
		hiddenSelectionsTextures[] = {
			"TripSeventh_Vehicles\Sparrowhawk\data\Body_01_CO.paa"
		};
		maxSpeed = 350;
		weapons[] = {
			"OPTRE_GUA23A",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera",
			"OPTRE_missiles_C2GMLS"
		};
		magazines[] = {
			"OPTRE_2000Rnd_20mm_HEIAP",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"OPTRE_8Rnd_C2GMLS_missiles",
			"OPTRE_8Rnd_C2GMLS_missiles"
		};
		class AMSData {
			AMSEnabled = 1;
			DialogClass = "AMS_New_GUI";
			AircraftBase = "TripSeventh_Sparrowhawk_Base";
			HardpointPicture = "OPTRE_Vehicles_Air\Sparrowhawk\sparrowhawkPylonImage.paa";
			CustomPreset_Hashmap = "FIR_F23A_CustomPreset_Hashmap";
			loadout_pre = "TripSeventh_Vehicles\Sparrowhawk\scripts\Loadout_Pre.sqf";
			loadout_apply = "FIR_AirWeaponSystem_US_Cfg\sqs\AMS\AMS_Loadout_Apply.sqf";
			loadout_post = "TripSeventh_Vehicles\Sparrowhawk\scripts\DoNothing.sqf";
		};
		class UserActions {
			class AMSOpen
			{
				displayName = "<t color='#739eff'>Open AMS</t>";
				position = "pos cano";
				radius = 15;
				shortcut = "User3";
				condition = "(player == driver this) and (speed this < 1)";
				statement = "this execVM ""\FIR_AirWeaponSystem_US_Cfg\sqs\AMS\AMS_GUI_Open.sqf""";
				onlyforplayer = "false";
				priority = 6;
				hideOnUse = 1;
			};
		};
	};

	// Hornets
	class TripSeventh_Sparrowhawk : TripSeventh_Sparrowhawk_Base {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Den";
		displayName = "[777th] Sparrowhawk";
		faction = "TripSeventh_UnitFact_Main";
		editorCategory = "TripSeventh_EditorCategory_Main";
		editorSubcategory = "TripSeventh_EditorSubcategory_Objects_Sparrowhawk";
		hiddenSelectionsTextures[]= {
			"TripSeventh_Vehicles\Sparrowhawk\data\Body_01_CO.paa"
		};
	};
};
