class CfgPatches {
	class TripSeventh_Armor_Misriah_Named {
		author = "Den, Villainess";
		name = "777th Armor - Misriah Armours";
		requiredAddons[] = {
			"MA_Armor"
		};
		weapons[] = {};
		units[] = {};
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
	class ItemInfo;

	class TripSeventh_M56SR_Helmet;
	class TripSeventh_M56A_Helmet;
	class TripSeventh_M56G_Helmet;
	class TripSeventh_M56E_Helmet;
	class TripSeventh_M56_Scout_Helmet;

	class TripSeventh_Vest_Base;

	
	#include "data\armor.cpp"

};
