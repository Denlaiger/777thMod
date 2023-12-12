class CfgPatches {
    class Tenthed_core {
        author = "Silver, Kodiak, Crow, Akira";
        name = "10th ODST: Core";
        requiredAddons[] = {
            "OPTRE_Core",
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgFactionClasses {
    // Primary 10th ODST faction
    class Tenthed_UnitFact_Main {
        displayname = "[10th] ODST Faction";
        priority = 1;
        side = 1;
        icon = "\Tenthed_Core\data\logo.paa";
        flag = "\Tenthed_Core\data\logo.paa";
    };
};
class CfgEditorCategories {
    // Primary unit category used for units
    class Tenthed_EditorCategory_Main {
        displayName = "[10th] Units";
    };
    // Category used for Objects
    class Tenthed_EditorCategory_Objects {
        displayName = "[10th] Objects";
    };
    // Category used for Items
    class Tenthed_EditorCategory_Items {
        displayName = "[10th] Items";
    };
};
class CfgEditorSubcategories {
    // Prop Categories //
    class Tenthed_EditorSubcategory_Objects_Military {
        displayName = "Military";
    };
    class Tenthed_EditorSubcategory_Objects_Banners {
        displayName = "Banners";
    };
    // All supply props. Pods boxes or others
    class Tenthed_EditorSubcategory_Objects_Supplies {
        displayName = "Supplies";
    };

    // Item Categories //
    // All weapons
    class Tenthed_EditorSubcategory_Objects_Weapons {
        displayName = "Weapons";
    };
    // All backbacks
    class Tenthed_EditorSubcategory_Objects_Backpacks {
        displayName = "Backpacks";
    };

    // Vehicle Categories //
    // Generic uncategorized vehicles
    class Tenthed_EditorSubcategory_Objects_Vehicles {
        displayName = "Vehicles";
    };
    // All Pelicans categorized
    class Tenthed_EditorSubcategory_Objects_Pelicans {
        displayName = "Pelicans";
    };
    // All Hornets categorized
    class Tenthed_EditorSubcategory_Objects_Hornets {
        displayName = "Hornets";
    };
    // All Falcons categorized
    class Tenthed_EditorSubcategory_Objects_Falcons {
        displayName = "Falcons";
    };
    // Generic for turrets
    class Tenthed_EditorSubcategory_Objects_Turrets {
        displayName = "Turrets";
    };

    // Generic for Units
    class Tenthed_EditorSubcategory_Units_Men {
        displayName = "Men";
    };

};
class ACEX_Fortify_Presets {
    class Tenthed_Fortify01 {
        displayName = "10th ODST - Fortify";
        objects[] = {
            {"Land_Plank_01_4m_F", 5},
            {"Land_OPTRE_M72S_barrier", 13}, // possible removal
            {"Land_OPTRE_M72_barrier", 13}, // possible removal
            {"Land_HBarrier_1_F", 15}, // possible removal
            {"Land_HBarrierWall4_F", 15},
            {"Land_HBarrierWall6_F", 15},
            {"Land_HBarrierWall_corner_F", 15},
            {"Land_HBarrierWall_corridor_F", 15},
            {"Land_HBarrierTower_F", 20}
        };
    };
};
