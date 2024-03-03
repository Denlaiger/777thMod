class CfgPatches {
    class TripSeventh_Foundation {
        author = "Den";
        name = "777th PMC: Foundation";
        requiredAddons[] = {
            "OPTRE_Core",
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgFactionClasses {
	// Primary 777th PMC faction
    class TripSeventh_UnitFact_Main {
        displayname = "[777th] PMC Faction";
        priority = 1;
        side = 0;
        icon = "\TripSeventh_Foundation\logo.paa";
        flag = "\TripSeventh_Foundation\logo.paa";
    };
	// 777th Enemies
    class T7th_Ins {
        displayname = "[777th] OPFOR";
        priority = 1;
        side = 1;
        icon = "\TripSeventh_Foundation\logo.paa";
        flag = "\TripSeventh_Foundation\logo.paa";
    };

};
class CfgEditorCategories {
    // Primary unit category used for units
    class TripSeventh_EditorCategory_Main {
        displayName = "[777th] Units";
    };
    // Category used for Objects
    class TripSeventh_EditorCategory_Objects {
        displayName = "[777th] Objects";
    };
    // Category used for Items
    class TripSeventh_EditorCategory_Items {
        displayName = "[777th] Items";
    };
};
class CfgEditorSubcategories {
    // Prop Categories //
    class TripSeventh_EditorSubcategory_Objects_Military {
        displayName = "Military";
    };
    class TripSeventh_EditorSubcategory_Objects_Banners {
        displayName = "Banners";
    };
    // All supply props. Pods boxes or others
    class TripSeventh_EditorSubcategory_Objects_Supplies {
        displayName = "Supplies";
    };

    // Item Categories //
    // All weapons
    class TripSeventh_EditorSubcategory_Objects_Weapons {
        displayName = "Weapons";
    };
    // All backbacks
    class TripSeventh_EditorSubcategory_Objects_Backpacks {
        displayName = "Backpacks";
    };

    // Vehicle Categories //
    // Generic uncategorized vehicles
    class TripSeventh_EditorSubcategory_Objects_Vehicles {
        displayName = "Vehicles";
    };
    // All Pelicans categorized
    class TripSeventh_EditorSubcategory_Objects_Pelicans {
        displayName = "Pelicans";
    };
    // All Hornets categorized
    class TripSeventh_EditorSubcategory_Objects_Hornets {
        displayName = "Hornets";
    };
    // All Falcons categorized
    class TripSeventh_EditorSubcategory_Objects_Falcons {
        displayName = "Falcons";
    };
    // All Sparrowhawks categorized
    class TripSeventh_EditorSubcategory_Objects_Sparrowhawk {
        displayName = "Sparrowhawk";
    };

    // Generic for Units
    class TripSeventh_EditorSubcategory_Units_Men {
        displayName = "Men";
    };

};
