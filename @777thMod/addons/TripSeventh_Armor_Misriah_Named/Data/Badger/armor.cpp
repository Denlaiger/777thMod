
	class TripSeventh_M56R_Vest_Badger : TripSeventh_Vest_Base {
	scope=2;
	scopeArsenal=2;
	displayName="[777th] M56R Armor (Badger)";
	model="MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
	picture="MA_Armor\data\Icons\H3ODST_Vest.paa";
	hiddenSelectionsTextures[]= { 
		"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa",
		"MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa",
		"MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa", 
		"TripSeventh_Armor_Misriah_Named\data\Badger\777th_Badger_Upper_Armor.paa",
		"TripSeventh_Armor_Misriah_Named\data\Badger\777th_Badger_Lower_Armor.paa",
		//"777thArmour\Data\777th_Lower_Armor.paa",
		//"MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa",
		"MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa", 
		"TripSeventh_Armor_Misriah_Named\data\Badger\777th_Badger_Custom_Vents.paa",
		//"777thArmour\Data\777th_Arm_Vents.paa",
		"TripSeventh_Armor_Misriah_Named\data\Badger\777th_Badger_Sniper_ShouldersLEFT.paa",
		"TripSeventh_Armor_Misriah_Named\data\Badger\777th_Badger_CQB_ShouldersRIGHT.paa", 
		//"MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa", 
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
				"Reach_Sniper_Pauldron_Right",
				"Reach_CQB_Pauldron_Left",
				//"Reach_CQB_Pauldron_Right",
				"Thigh_Pouch",
				"H3_Armor_Upper", 
				"H3_Armor_Lower", 
				//"Forearm_Vent_Left",  
				//"Forearm_Vent_Right", 
				//"Canisters" 
			};
		};
	};


	class TripSeventh_M56_Scout_Helmet_Badger : TripSeventh_M56_Scout_Helmet {
		scope=2;
		scopeArsenal=2;
		displayName="[777th] M56-S Helmet (Badger)";
		model="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
		picture="MA_Armor\data\Icons\H4_Scout_Helmet.paa";
		hiddenSelectionsTextures[]= { 
			"TripSeventh_Armor_Misriah_Named\data\Badger\777th_Badger_Scout_Helm.paa",
			"TripSeventh_Armor_Misriah_Named\data\Badger\777th_Badger_Custom_Visor.paa"
		};
		class ItemInfo: ItemInfo {
			uniformModel="MA_Armor\data\Helmets\H4_Scout\H4_Scout_Helmet.p3d";
		};
	};