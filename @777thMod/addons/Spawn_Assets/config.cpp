class CfgPatches {
    class Spawn_Assets {
        author = "Den";
        name = "777th PMC: Spawn Assets";
        requiredAddons[] = {
            "OPTRE_Core",
        };
        weapons[] = {};
        units[] = {};
    };
};
class CfgGroups
{
	class Empty
	{
		side = 8;
		name = "Compositions";
		class TripSeventh_Operation_Assets
		{
			name = "[777th] Operation Assets";
			class FOBs
			{
				name = "Spawning";
				class TripSeventh_Vehicle_Spawn_Terminals
				{
					name = "Vehicle Spawn Terminals";
					class Object1 {side=8;vehicle="OPTRE_RS_ConsoleDoor";rank="";position[]={-5.16919,6.16113,-0.00143909};dir=180;};
					class Object2 {side=8;vehicle="OPTRE_RS_ConsoleDoor";rank="";position[]={-5.16919,-8.83887,-0.00143909};dir=180;};
					class Object3 {side=8;vehicle="VR_Area_01_square_2x2_yellow_F";rank="";position[]={10.8423,6.16113,0.248561};dir=90;};
					class Object4 {side=8;vehicle="VR_Area_01_square_2x2_yellow_F";rank="";position[]={10.8423,-8.83887,0.248561};dir=90;};
					class Object5 {side=8;vehicle="OPTRE_RS_ConsoleDoor";rank="";position[]={-5.16919,21.1611,-0.00143909};dir=180;};
					class Object6 {side=8;vehicle="VR_Area_01_square_2x2_yellow_F";rank="";position[]={10.8423,21.1611,0.248561};dir=90;};
					class Object7 {side=8;vehicle="OPTRE_RS_ConsoleDoor";rank="";position[]={-5.16919,-23.8389,-0.00143909};dir=180;};
					class Object8 {side=8;vehicle="VR_Area_01_square_2x2_yellow_F";rank="";position[]={-13.1577,22.2129,-0.00143909};dir=180;};
					class Object9 {side=8;vehicle="VR_Area_01_square_2x2_yellow_F";rank="";position[]={10.8423,-23.8389,0.248561};dir=90;};
					class Object10 {side=8;vehicle="OPTRE_HEV";rank="";position[]={-13.1611,23.8794,-0.0796533};dir=180;};
				};
			};
		};
	};
};