class CfgPatches {
    class TripSeventh_fort {
        author = "Den";
        name = "777th Fortify Settings";
        requiredAddons[] = {
            "OPTRE_Core",
        };
        weapons[] = {};
        units[] = {};
    };
};

class ACEX_Fortify_Presets {
    class  TripSeventh_Fortify {
        displayName = "777th PMC - Fortify";
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
