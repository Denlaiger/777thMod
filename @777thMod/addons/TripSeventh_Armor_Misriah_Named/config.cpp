class CfgPatches {
	class TripSeventh_Armor_Misriah_Named {
		author = "Den, Villainess";
		name = "777th Armor - Misriah Named";
		requiredAddons[] = {
			"MA_Armor",
			"TripSeventh_Armor_Misriah_Base"
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

	// Grimgnaw
	#include "data\Grimgnaw\armor.cpp"

	// Den
	#include "data\Den\armor.cpp"

	// Meatshield
	#include "data\Meatshield\armor.cpp"
	
	// Nightmare
	#include "data\Nightmare\armor.cpp"

	// Jody
	#include "data\Jody\armor.cpp"
	
	// Quasian
	#include "data\Quasian\armor.cpp"

	// Badger
	#include "data\Badger\armor.cpp"

	// McInnes
	#include "data\McInnes\armor.cpp"

	// Atlas
	#include "data\Atlas\armor.cpp"
};