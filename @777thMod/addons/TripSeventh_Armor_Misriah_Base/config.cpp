class CfgPatches {
	class TripSeventh_Armor_Misriah_Base {
		author = "Den";
		name = "777th Armor Base - Misriah";
		requiredAddons[] = {
			"OPTRE_Core",
			"MA_Armor"
		};
		weapons[] = {};
		units[] = {
			"TripSeventh_M56S_BDU",
			"TripSeventh_M56S_BDU_Green",
			"TripSeventh_M56S_BDU_Desert",
			"TripSeventh_M56S_BDU_WhiteSilver",
			"TripSeventh_M56S_BDU_Grey"
		};
	};
};

class cfgWeapons {
	class HeadgearItem;
	class ItemCore;
	class InventoryItem_Base_F;
	class VestItem;
	class V_PlateCarrier1_rgr;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class NVGoggles;
	class HitPoints;
	class Uniform_Base: ItemCore {
		class ItemInfo;
	};
	
	class TripSeventh_Helmet_Base: ItemCore {
		scope=0;
		scopeArsenal=0;
		author="Misriah Armory";
		ace_hearing_protection=1;
		displayName="[777th] Base Helmet";
		model="";
		picture="";
		hiddenSelections[]= {
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem {
			uniformModel="";
			mass=40;
			modelSides[]={6};
			allowedSlots[]={801,901,701,605};
			hiddenSelections[]= {
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]={};
			class HitpointsProtectionInfo {
				class Head {
					hitpointName="HitHead";
					armor = 30;
					passThrough = 0.1;
				};
				class Face {
					hitpointName="HitFace";
					armor = 30;
					passThrough = 0.1;
				};
				class Neck {
					hitpointName="HitNeck";
					armor = 30;
					passThrough = 0.1;
				};
			};
		};
	};

	class TripSeventh_Vest_Base: V_PlateCarrier1_rgr {
		scope=0;
		scopeArsenal=0;
		author="Misriah Armory";
		displayName="[777th] Base Vest";
		model="";
		picture="";
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			"H3_Forearm_Left",
			"H3_Forearm_Right",
			"Reach_Forearm_Left",
			"Reach_Forearm_Right",
			"H3_Pauldron_Left",
			"H3_Pauldron_Right",
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			"Thigh_Pouch",
			"H3_Armor_Upper",
			"H3_Armor_Lower",
			"Reach_Armor_Upper",
			"Reach_Armor_Lower",
			"Forearm_Vent_Left",
			"Forearm_Vent_Right",
			"Canisters"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem {
			vestType="Rebreather";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"Reach_Forearm_Left",
				"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Reach_Armor_Upper",
				"Reach_Armor_Lower",
				"Forearm_Vent_Left",
				"Forearm_Vent_Right",
				"Canisters"
			};
			hiddenSelectionsTextures[]= {
				"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
				"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
				"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
			};
			uniformModel="";
			containerClass="Supply350";
			mass=20;
			passThrough=0.1;
			modelSides[]={6};
			class HitpointsProtectionInfo {
				class Neck {
					hitpointName = "HitNeck";
					armor = 150;
					passThrough = 0.1;
				};
				class Legs {
					hitpointName = "HitLegs";
					armor = 150;
					passThrough = 0.1;
				};
				class Arms {
					hitpointName = "HitArms";
					armor = 150;
					passThrough = 0.1;
				};
				class Hands {
					hitpointName = "HitHands";
					armor = 150;
					passThrough = 0.1;
				};
				class Chest {
					hitpointName = "HitChest";
					armor = 150;
					passThrough = 0.1;
				};
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					armor = 150;
					passThrough = 0.1;
				};
				class Abdomen {
					hitpointName = "HitAbdomen";
					armor = 150;
					passThrough = 0.1;
				};
				class Body {
					hitpointName = "HitBody";
					armor = 150;
					passThrough = 0.1;
				};
			};
		};
	};

	// M56S-R (Base ODST Helmet)
	class TripSeventh_M56SR_Helmet : TripSeventh_Helmet_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56S-R Helmet";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_white_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};

	// M56-A "AirAssault"
	class TripSeventh_M56A_Helmet: TripSeventh_Helmet_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56-A Helmet";
		model="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		picture="MA_Armor\data\Icons\AA_Helmet.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Helmets\AA\AA_Helm_co.paa",
			"MA_Armor\data\Helmets\AA\AA_Visor_Blue_co.paa"
			//"MA_Armor\data\Helmets\AA\AA_Visor_Black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\AA\AA_Visor_Gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\AA\AA_Visor_Red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\AA\AA_Visor_White_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\AA\AA_Helmet.p3d";
		};
	};

	//M56-G "Gungnir" 
	class TripSeventh_M56G_Helmet: TripSeventh_Helmet_Base {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armory & aclarke064";
		displayName="[777th] M56-G Helmet";
		model="MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
		picture="MA_Armor\data\Icons\Gungnir_Helmet.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Helmets\Gungnir\Gungnir_co.paa",
			"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Blue_co.paa"
			//"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_Red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\Gungnir\Gungnir_Visor_White_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\Gungnir\Gungnir_Helmet.p3d";
		};
	};

	// M56-E "EOD" 
	class TripSeventh_M56E_Helmet: TripSeventh_Helmet_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56-E Helmet";
		model="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		picture="MA_Armor\data\Icons\EOD_Helm.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Helmets\EOD\EOD_Helmet_co.paa",
			"MA_Armor\data\Helmets\EOD\EOD_Visor_Blue_co.paa" // Blue Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_Black_co.paa" // Black Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_Gold_co.paa" // Gold Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_Red_co.paa" // Red Visor
			//"MA_Armor\data\Helmets\EOD\EOD_Visor_White_co.paa" // White Visor
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\EOD\EOD_Helmet.p3d";
		};
	};
	// M65-S "Recon"
	class TripSeventh_M56_Scout_Helmet: TripSeventh_Helmet_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M65-S Helmet";
		model="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
		picture="MA_Armor\data\Icons\H4_Scout_Helmet.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Helmets\H4_Scout\Scout_Helm_co.paa",
			"MA_Armor\data\Helmets\H4_Scout\Scout_Visor_Blue_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
		};
	};

	// Rifleman - no radio
	class TripSeventh_M56R_Vest_Rifleman : TripSeventh_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56R Combat Armor";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Canisters"
			};
		};
	};
	// Rifleman - Radio right
	class TripSeventh_M56R_Vest_Rifleman_ODST_radio_right : TripSeventh_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56R Combat Armor (ODST Radio Shoulder)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Canisters"
			};
		};
	};
	// Rifleman - Radio right Green
	class TripSeventh_M56R_Vest_Rifleman_radio_right : TripSeventh_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56R Combat Armor (Radio Shoulder)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Canisters"
			};
		};
	};

	class TripSeventh_M56R_Recon_Vest: TripSeventh_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56R Combat Armor (Recon)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower"
			};
		};
	};
	class TripSeventh_M56R_Light_Vest: TripSeventh_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56R Combat Armor (Light)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"Reach_Forearm_Left",
				"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Forearm_Vent_Left",
				"Forearm_Vent_Right"
			};
		};
	};
	class TripSeventh_M56R_Medic_Vest: TripSeventh_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56R Combat Armor (Medic)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Medic_Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Medical_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"H3_Armor_Upper",
				"H3_Armor_Lower"
			};
		};
	};
	class TripSeventh_M56R_Vest_Sniper : TripSeventh_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56R Combat Armor (Sniper)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				//"Reach_Sniper_Pauldron_Left",
				//"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
		};
	};
	class TripSeventh_M56R_Vest_CQB : TripSeventh_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56R Combat Armor (CQB)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				//"Reach_CQB_Pauldron_Left",
				//"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
		};
	};
	
	// Enlisted Variants
	// Enlisted Rifleman - no radio
	class TripSeventh_M56R_Vest_Enlisted_Rifleman : TripSeventh_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56R Combat Armor Enlisted (Rifleman)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"Tenthed_Armor_Misriah_Base\data\enlisted\Reach_Armor_Upper_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"Tenthed_Armor_Misriah_Base\data\enlisted\Sniper_Enlisted_co.paa",
			"Tenthed_Armor_Misriah_Base\data\enlisted\CQB_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Canisters"
			};
		};
	};
	// Enlisted Rifleman - Radio right
	class TripSeventh_M56R_Vest_Enlisted_Rifleman_radio_right : TripSeventh_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56R Combat Armor Enlisted (Rifleman - Radio)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"Tenthed_Armor_Misriah_Base\data\enlisted\Reach_Armor_Upper_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"Tenthed_Armor_Misriah_Base\data\enlisted\Sniper_Enlisted_co.paa",
			"Tenthed_Armor_Misriah_Base\data\enlisted\CQB_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Canisters"
			};
		};
	};
	// Enlisted Sniper
	class TripSeventh_M56R_Vest_Enlisted_Sniper : TripSeventh_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56R Combat Armor Enlisted (Sniper)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"Tenthed_Armor_Misriah_Base\data\enlisted\Reach_Armor_Upper_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"Tenthed_Armor_Misriah_Base\data\enlisted\Sniper_Enlisted_co.paa",
			"Tenthed_Armor_Misriah_Base\data\enlisted\CQB_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				//"Reach_Sniper_Pauldron_Left",
				//"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
		};
	};
	// Enlisted CQB
	class TripSeventh_M56R_Vest_Enlisted_CQB : TripSeventh_Vest_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56R Combat Armor Enlisted (CQB)";
		model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
			"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa",
			"Tenthed_Armor_Misriah_Base\data\enlisted\Reach_Armor_Upper_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",
			"Tenthed_Armor_Misriah_Base\data\enlisted\Sniper_Enlisted_co.paa",
			"Tenthed_Armor_Misriah_Base\data\enlisted\CQB_Enlisted_co.paa",
			"MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_ODST_co.paa"
		};
		class ItemInfo: ItemInfo {
			vestType="Rebreather";
			uniformModel="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass="Supply350";
			hiddenSelections[]= {
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"camo9",
				"camo10",
				"H3_Forearm_Left",
				"H3_Forearm_Right",
				//"Reach_Forearm_Left",
				//"Reach_Forearm_Right",
				"H3_Pauldron_Left",
				"H3_Pauldron_Right",
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				//"Reach_CQB_Pauldron_Left",
				//"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				//"Forearm_Vent_Left",
				//"Forearm_Vent_Right",
				"Canisters"
			};
		};
	};

	// Enlisted Helmet
	class TripSeventh_M56SR_Enlisted_Helmet : TripSeventh_M56SR_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] Enlisted M56S-R Helmet";
		model="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture="MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		hiddenSelectionsTextures[]= {
			"Tenthed_Armor_Misriah_Base\data\enlisted\HR_ODST_Helmet_Enlisted_co.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		};
	};

	// Uniforms
	class TripSeventh_M56S_BDU: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[777th] M56S - Black";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="TripSeventh_M56S_BDU_Base";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};

	class TripSeventh_M56S_BDU_Green: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[777th] M56S - Green";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="TripSeventh_M56S_BDU_Base_Green";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};

	class TripSeventh_M56S_BDU_Desert: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[777th] M56S - Desert";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="TripSeventh_M56S_BDU_Base_Desert";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};

	class TripSeventh_M56S_BDU_WhiteSilver: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[777th] M56S - Silver";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="TripSeventh_M56S_BDU_Base_WhiteSilver";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};

	class TripSeventh_M56S_BDU_Grey: U_B_CombatUniform_mcam {
		scope=2;
		scopeArsenal=2;
		author="Misriah Armoury";
		displayName="[777th] M56S - Grey";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="TripSeventh_M56S_BDU_Base_Grey";
			containerClass="Supply150";
			mass=10;
			modelSides[]={6};
		};
	};
};
	class TripSeventh_Uniform_Base: TripSeventh_BDU_Base {
		scope=0;
		scopeCurator=0;
		side=1;
		author="Den";
		UniformClass="";
		vehicleClass="";
		model="";
		weapons[]= {
			"Throw",
			"Put"
		};
		respawnWeapons[]= {
			"Throw",
			"Put"
		};
		Items[]= {
			"OPTRE_Biofoam"
		};
		RespawnItems[]= {
			"OPTRE_Biofoam"
		};
		magazines[]={};
		respawnMagazines[]={};
		hiddenSelections[]= {
			"camo"
		};
		hiddenSelectionsTextures[]={};
	};
	class TripSeventh_M56S_BDU_Base: TripSeventh_Uniform_Base {
		scope=1;
		UniformClass="TripSeventh_M56S_BDU";
		vehicleClass="TripSeventh_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa"
		};
	};
	class TripSeventh_M56S_BDU_Base_Green: TripSeventh_Uniform_Base {
		scope=1;
		UniformClass="TripSeventh_M56S_BDU";
		vehicleClass="TripSeventh_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			
		};
	};
	class TripSeventh_M56S_BDU_Base_Desert: TripSeventh_Uniform_Base {
		scope=1;
		UniformClass="TripSeventh_M56S_BDU";
		vehicleClass="TripSeventh_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			
		};
	};
	class TripSeventh_M56S_BDU_Base_WhiteSilver: TripSeventh_Uniform_Base {
		scope=1;
		UniformClass="TripSeventh_M56S_BDU";
		vehicleClass="TripSeventh_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
			
		};
	};
	class TripSeventh_M56S_BDU_Base_Grey: TripSeventh_Uniform_Base {
		scope=1;
		UniformClass="TripSeventh_M56S_BDU";
		vehicleClass="TripSeventh_Soldier_Class";
		model="MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		picture="MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		hiddenSelectionsTextures[]=
		{
		
		};
	};

	// Backpacks
	class B_Kitbag_rgr;
	class TripSeventh_Backpack_Base: B_Kitbag_rgr {
		scope=0;
		scopeArsenal=0;
		faction = "TripSeventh_UnitFact_Main";
		editorCategory = "TripSeventh_EditorCategory_Items";
		editorSubcategory = "TripSeventh_EditorSubcategory_Objects_Backpacks";
		author="Misriah Armory";
		displayname="[777th] Base Backpack";
		model="";
		maximumLoad=250;
		mass=50;
		hiddenSelections[]= {
			"camo"
		};
	};
	// Base backpack
	class TripSeventh_M56S_Rucksack: TripSeventh_Backpack_Base {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56S Rucksack";
		model="MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck.p3d";
		picture="MA_Armor\data\Icons\ODST_Rucksack.paa";
		maximumLoad=400;
		mass=50;
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck_co.paa",
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa"
		};
	};
	// LR backpack
	class TripSeventh_M56S_Rucksack_Radio: TripSeventh_M56S_Rucksack {
		displayName="[777th] M56S Rucksack (ODST Radio)";
		maximumLoad = 350;
		mass = 50;
		hiddenSelections[]= {
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
		tf_hasLRradio=1;
	};
	// Medic Backpack
	class TripSeventh_M56S_Rucksack_Medic: TripSeventh_M56S_Rucksack {
		displayName="[777th] M56S Rucksack (Medic)";
		maximumLoad = 400;
		mass = 40;
		hiddenSelections[]= {
			"camo1",
			"camo2",
			"Radio"
		};
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=25000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel";
		tf_hasLRradio=1;
	};
	class TripSeventh_M56S_Rucksack_Medic_Radio: TripSeventh_M56S_Rucksack_Medic {
		displayName="[777th] M56S Rucksack (Medic - Radio)";
		hiddenSelections[]= {
			"camo1",
			"camo2",
			//"Radio"
		};
		hiddenSelectionsTextures[]= {
			"MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_Green_co.paa"
		};
	};

	};

};
