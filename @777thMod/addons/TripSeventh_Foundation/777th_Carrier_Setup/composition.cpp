version=54;
center[]={149.79355,405.52054,12660.848};
class items
{
	items=6;
	class Item0
	{
		dataType="Layer";
		name="Carrier Spawn";
		class Entities
		{
			items=1;
			class Item0
			{
				dataType="Layer";
				name="Carrier Spawn";
				class Entities
				{
					items=2;
					class Item0
					{
						dataType="Layer";
						name="777th Spawn Ship";
						class Entities
						{
							items=13;
							class Item0
							{
								dataType="Layer";
								name="Drop pods";
								class Entities
								{
									items=1;
									class Item0
									{
										dataType="Layer";
										name="Drop pods  HEV";
										class Entities
										{
											items=4;
											class Item0
											{
												dataType="Layer";
												name="Drop Pod Room_1/2";
												class Entities
												{
													items=11;
													class Item0
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-25.795547,25.340302,22.427734};
															angles[]={0,0.35383061,0};
														};
														side="Empty";
														flags=5;
														class Attributes
														{
															init="this addAction [""OPEN CONTROL MENU"",OPTRE_Fnc_Menu,[""UNSC_HEV"",""UNSC_DATABASE""]]; this setVariable [""OPTRE_PodsLaunchIn"",-1,true];this setVariable [""OPTRE_PodsLinkedToConsole"",([OPTRE_HEV_0_1,OPTRE_HEV_0_2,OPTRE_HEV_0_3,OPTRE_HEV_0_4,OPTRE_HEV_0_5,OPTRE_HEV_0_6,OPTRE_HEV_0_7,OPTRE_HEV_0_8,OPTRE_HEV_0_9,OPTRE_HEV_0_10,objNull]- [objNull]),true];";
														};
														id=151;
														type="OPTRE_RS_ConsoleDoor";
														atlOffset=0.00048828125;
													};
													class Item1
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-26.28492,25.485077,19.744141};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];				";
															name="OPTRE_HEV_0_1";
														};
														id=152;
														type="OPTRE_HEV";
													};
													class Item2
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-34.609962,25.485077,-2.4589844};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];";
															name="OPTRE_HEV_0_10";
														};
														id=153;
														type="OPTRE_HEV";
													};
													class Item3
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-27.235626,25.485077,17.220703};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];				";
															name="OPTRE_HEV_0_2";
														};
														id=156;
														type="OPTRE_HEV";
													};
													class Item4
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-28.127213,25.485077,14.821289};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];				";
															name="OPTRE_HEV_0_3";
														};
														id=157;
														type="OPTRE_HEV";
													};
													class Item5
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-29.086914,25.485077,12.302734};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];				";
															name="OPTRE_HEV_0_4";
														};
														id=158;
														type="OPTRE_HEV";
													};
													class Item6
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-29.997513,25.485077,9.8847656};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];				";
															name="OPTRE_HEV_0_5";
														};
														id=159;
														type="OPTRE_HEV";
													};
													class Item7
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-30.926292,25.485077,7.3613281};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];				";
															name="OPTRE_HEV_0_6";
														};
														id=160;
														type="OPTRE_HEV";
													};
													class Item8
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-31.823288,25.485077,4.9775391};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];";
															name="OPTRE_HEV_0_7";
														};
														id=161;
														type="OPTRE_HEV";
													};
													class Item9
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-32.778229,25.485077,2.4228516};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];";
															name="OPTRE_HEV_0_8";
														};
														id=162;
														type="OPTRE_HEV";
													};
													class Item10
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-33.692978,25.485077,0.045898438};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];";
															name="OPTRE_HEV_0_9";
														};
														id=163;
														type="OPTRE_HEV";
													};
												};
												id=150;
											};
											class Item1
											{
												dataType="Layer";
												name="Drop Pod Room_2/2";
												class Entities
												{
													items=11;
													class Item0
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-16.754547,24.331329,19.035156};
															angles[]={0,0.34950218,0};
														};
														side="Empty";
														flags=1;
														class Attributes
														{
															init="this addAction [""OPEN CONTROL MENU"",OPTRE_Fnc_Menu,[""UNSC_HEV"",""UNSC_DATABASE""]]; this setVariable [""OPTRE_PodsLaunchIn"",-1,true];this setVariable [""OPTRE_PodsLinkedToConsole"",([OPTRE_HEV_1_1,OPTRE_HEV_1_2,OPTRE_HEV_1_3,OPTRE_HEV_1_4,OPTRE_HEV_1_5,OPTRE_HEV_1_6,OPTRE_HEV_1_7,OPTRE_HEV_1_8,OPTRE_HEV_1_9,OPTRE_HEV_1_10,objNull]- [objNull]),true];";
														};
														id=274;
														type="OPTRE_RS_ConsoleDoor";
														atlOffset=454.70499;
													};
													class Item1
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-17.21701,24.477264,16.353516};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];				";
															name="OPTRE_HEV_1_1";
														};
														id=897;
														type="OPTRE_HEV";
														atlOffset=0.00030517578;
													};
													class Item2
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-25.542023,24.476654,-5.8496094};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];";
															name="OPTRE_HEV_1_10";
														};
														id=898;
														type="OPTRE_HEV";
														atlOffset=454.28101;
													};
													class Item3
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-18.168015,24.476532,13.830078};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];				";
															name="OPTRE_HEV_1_2";
														};
														id=899;
														type="OPTRE_HEV";
														atlOffset=454.509;
													};
													class Item4
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-19.059006,24.476959,11.430664};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];				";
															name="OPTRE_HEV_1_3";
														};
														id=900;
														type="OPTRE_HEV";
													};
													class Item5
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-20.019012,24.477386,8.9121094};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];				";
															name="OPTRE_HEV_1_4";
														};
														id=901;
														type="OPTRE_HEV";
														atlOffset=0.00042724609;
													};
													class Item6
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-20.930008,24.476654,6.4931641};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];				";
															name="OPTRE_HEV_1_5";
														};
														id=902;
														type="OPTRE_HEV";
														atlOffset=454.397;
													};
													class Item7
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-21.858009,24.476532,3.9707031};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];				";
															name="OPTRE_HEV_1_6";
														};
														id=903;
														type="OPTRE_HEV";
														atlOffset=454.35699;
													};
													class Item8
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-22.755013,24.476837,1.5869141};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];";
															name="OPTRE_HEV_1_7";
														};
														id=904;
														type="OPTRE_HEV";
														atlOffset=454.323;
													};
													class Item9
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-23.710014,24.477203,-0.96777344};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														flags=4;
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];";
															name="OPTRE_HEV_1_8";
														};
														id=905;
														type="OPTRE_HEV";
														atlOffset=0.00024414063;
													};
													class Item10
													{
														dataType="Object";
														class PositionInfo
														{
															position[]={-24.625015,24.476654,-3.3447266};
															angles[]={0,1.9290601,0};
														};
														side="Empty";
														class Attributes
														{
															init="this setVariable [""OPTRE_PlayerControled"",true,true];	this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];";
															name="OPTRE_HEV_1_9";
														};
														id=906;
														type="OPTRE_HEV";
														atlOffset=454.29999;
													};
												};
												id=273;
												atlOffset=454.30966;
											};
											class Item2
											{
												dataType="Object";
												class PositionInfo
												{
													position[]={-31.99102,25.480377,21.417969};
													angles[]={0,1.9290601,0};
												};
												side="Empty";
												class Attributes
												{
													lock="LOCKED";
													init="this addAction [""Teleport"",{player setPosATL (getPosATL pad11)}];	";
													name="OPTRE_HEV_2_1";
													disableSimulation=1;
												};
												id=923;
												type="OPTRE_HEV";
												atlOffset=3.5129395;
											};
											class Item3
											{
												dataType="Object";
												class PositionInfo
												{
													position[]={-29.470551,24.467743,20.300781};
													angles[]={0,0.34552285,0};
												};
												side="Empty";
												flags=1;
												class Attributes
												{
													name="Pad22";
												};
												id=926;
												type="VR_Area_01_square_2x2_yellow_F";
												atlOffset=0.17254639;
											};
										};
										id=149;
										atlOffset=457.21097;
									};
								};
								id=148;
								atlOffset=457.21097;
							};
							class Item1
							{
								dataType="Object";
								class PositionInfo
								{
									position[]={-20.348511,25.053802,20.394531};
									angles[]={0,3.4991913,0};
								};
								side="Empty";
								flags=4;
								class Attributes
								{
									init="[this, true] call ace_arsenal_fnc_initBox; " \n "0 = [""AmmoboxInit"",[this,true]] spawn BIS_fnc_arsenal;";
								};
								id=164;
								type="CargoNet_01_box_F";
								atlOffset=0.0082397461;
							};
							class Item2
							{
								dataType="Object";
								class PositionInfo
								{
									position[]={8.6771393,22.081299,8.5244141};
									angles[]={0,3.4991913,0};
								};
								side="Empty";
								flags=4;
								class Attributes
								{
									init="[this, true] call ace_arsenal_fnc_initBox; " \n "0 = [""AmmoboxInit"",[this,true]] spawn BIS_fnc_arsenal;";
								};
								id=165;
								type="CargoNet_01_box_F";
								atlOffset=0.0070495605;
							};
							class Item3
							{
								dataType="Object";
								class PositionInfo
								{
									position[]={0.36463928,22.081299,-14.65332};
									angles[]={0,3.4991913,0};
								};
								side="Empty";
								flags=4;
								class Attributes
								{
									init="[this, true] call ace_arsenal_fnc_initBox; " \n "0 = [""AmmoboxInit"",[this,true]] spawn BIS_fnc_arsenal;";
								};
								id=166;
								type="CargoNet_01_box_F";
								atlOffset=0.0060424805;
							};
							class Item4
							{
								dataType="Object";
								class PositionInfo
								{
									position[]={28.041397,22.081299,-32.503906};
									angles[]={0,3.4991913,0};
								};
								side="Empty";
								flags=4;
								class Attributes
								{
									init="[this, true] call ace_arsenal_fnc_initBox; " \n "0 = [""AmmoboxInit"",[this,true]] spawn BIS_fnc_arsenal;";
								};
								id=167;
								type="CargoNet_01_box_F";
								atlOffset=0.0075378418;
							};
							class Item5
							{
								dataType="Object";
								class PositionInfo
								{
									position[]={41.309952,22.081299,4.3759766};
									angles[]={0,3.4991913,0};
								};
								side="Empty";
								flags=4;
								class Attributes
								{
									init="[this, true] call ace_arsenal_fnc_initBox; " \n "0 = [""AmmoboxInit"",[this,true]] spawn BIS_fnc_arsenal;";
								};
								id=168;
								type="CargoNet_01_box_F";
								atlOffset=0.0023803711;
							};
							class Item6
							{
								dataType="Object";
								class PositionInfo
								{
									position[]={-29.573929,25.053802,-4.2392578};
									angles[]={0,3.4991913,0};
								};
								side="Empty";
								flags=4;
								class Attributes
								{
									init="[this, true] call ace_arsenal_fnc_initBox; " \n "0 = [""AmmoboxInit"",[this,true]] spawn BIS_fnc_arsenal;";
								};
								id=259;
								type="CargoNet_01_box_F";
								atlOffset=0.007232666;
							};
							class Item7
							{
								dataType="Object";
								class PositionInfo
								{
									position[]={-24.964905,25.053802,8.0439453};
									angles[]={0,3.4991913,0};
								};
								side="Empty";
								flags=4;
								class Attributes
								{
									init="[this, true] call ace_arsenal_fnc_initBox; " \n "0 = [""AmmoboxInit"",[this,true]] spawn BIS_fnc_arsenal;";
								};
								id=907;
								type="CargoNet_01_box_F";
								atlOffset=0.0076599121;
							};
							class Item8
							{
								dataType="Object";
								class PositionInfo
								{
									position[]={-11.272903,24.045685,16.984375};
									angles[]={0,3.4991913,0};
								};
								side="Empty";
								flags=4;
								class Attributes
								{
									init="[this, true] call ace_arsenal_fnc_initBox; " \n "0 = [""AmmoboxInit"",[this,true]] spawn BIS_fnc_arsenal;";
								};
								id=908;
								type="CargoNet_01_box_F";
								atlOffset=0.0079956055;
							};
							class Item9
							{
								dataType="Object";
								class PositionInfo
								{
									position[]={-20.498322,24.045685,-7.6494141};
									angles[]={0,3.4991913,0};
								};
								side="Empty";
								flags=4;
								class Attributes
								{
									init="[this, true] call ace_arsenal_fnc_initBox; " \n "0 = [""AmmoboxInit"",[this,true]] spawn BIS_fnc_arsenal;";
								};
								id=909;
								type="CargoNet_01_box_F";
								atlOffset=0.0077209473;
							};
							class Item10
							{
								dataType="Object";
								class PositionInfo
								{
									position[]={-15.889297,24.045685,4.6337891};
									angles[]={0,3.4991913,0};
								};
								side="Empty";
								flags=4;
								class Attributes
								{
									init="[this, true] call ace_arsenal_fnc_initBox; " \n "0 = [""AmmoboxInit"",[this,true]] spawn BIS_fnc_arsenal;";
								};
								id=910;
								type="CargoNet_01_box_F";
								atlOffset=0.0079345703;
							};
							class Item11
							{
								dataType="Layer";
								name="Cryopods";
								class Entities
								{
									items=18;
									class Item0
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-9.6959229,24.085266,1.2099609};
											angles[]={0,3.5081117,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=426;
										type="OPTRE_Cryopod";
										atlOffset=3.0517578e-005;
									};
									class Item1
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-8.1265869,24.085602,0.61914063};
											angles[]={0,3.5081117,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=435;
										type="OPTRE_Cryopod";
										atlOffset=0.00036621094;
									};
									class Item2
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-6.5552979,24.085388,0.012695313};
											angles[]={0,3.5081117,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=438;
										type="OPTRE_Cryopod";
										atlOffset=0.00015258789;
									};
									class Item3
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-4.9507904,24.08493,-0.55859375};
											angles[]={0,3.5081117,0};
										};
										side="Empty";
										class Attributes
										{
										};
										id=439;
										type="OPTRE_Cryopod";
										atlOffset=22.411102;
									};
									class Item4
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-3.3804779,24.084778,-1.1494141};
											angles[]={0,3.5081117,0};
										};
										side="Empty";
										class Attributes
										{
										};
										id=440;
										type="OPTRE_Cryopod";
										atlOffset=22.41095;
									};
									class Item5
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-1.8091888,24.085419,-1.7568359};
											angles[]={0,3.5081117,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=441;
										type="OPTRE_Cryopod";
										atlOffset=0.00018310547;
									};
									class Item6
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={95.288071,23.17868,-41.40332};
											angles[]={0,1.9290601,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=911;
										type="OPTRE_Cryopod";
									};
									class Item7
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={96.261932,23.17868,-38.78125};
											angles[]={0,1.9290601,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=912;
										type="OPTRE_Cryopod";
									};
									class Item8
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={97.253479,23.17865,-36.180664};
											angles[]={0,1.9290601,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=913;
										type="OPTRE_Cryopod";
										atlOffset=0.10140991;
									};
									class Item9
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={98.238602,23.178711,-33.552734};
											angles[]={0,1.9290601,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=914;
										type="OPTRE_Cryopod";
									};
									class Item10
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={103.90901,23.17865,-32.692383};
											angles[]={0,5.070653,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=915;
										type="OPTRE_Cryopod";
									};
									class Item11
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={104.87953,23.17865,-30.077148};
											angles[]={0,5.070653,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=916;
										type="OPTRE_Cryopod";
									};
									class Item12
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={102.9191,23.17868,-35.3125};
											angles[]={0,5.070653,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=917;
										type="OPTRE_Cryopod";
									};
									class Item13
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={101.9447,23.17868,-37.928711};
											angles[]={0,5.070653,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=918;
										type="OPTRE_Cryopod";
									};
									class Item14
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={100.95778,23.17868,-40.540039};
											angles[]={0,5.070653,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=919;
										type="OPTRE_Cryopod";
									};
									class Item15
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={99.984924,23.17868,-43.149414};
											angles[]={0,5.070653,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=920;
										type="OPTRE_Cryopod";
									};
									class Item16
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={99.005264,23.17868,-45.766602};
											angles[]={0,5.070653,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=921;
										type="OPTRE_Cryopod";
									};
									class Item17
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={98.02092,23.17868,-48.384766};
											angles[]={0,5.070653,0};
										};
										side="Empty";
										flags=4;
										class Attributes
										{
										};
										id=922;
										type="OPTRE_Cryopod";
									};
								};
								id=132;
								atlOffset=0.00021362305;
							};
							class Item12
							{
								dataType="Layer";
								name="Ship pieces";
								class Entities
								{
									items=13;
									class Item0
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={16.5746,42.837097,-7.4580078};
											angles[]={0,1.9290662,0};
										};
										side="Empty";
										flags=1;
										class Attributes
										{
										};
										id=135;
										type="OPTRE_bridge";
										atlOffset=9.0001526;
									};
									class Item1
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={58.502335,28.231476,-23.131836};
											angles[]={0,1.9290662,0};
										};
										side="Empty";
										flags=1;
										class Attributes
										{
										};
										id=136;
										type="OPTRE_center_nose";
										atlOffset=428.20404;
									};
									class Item2
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={21.538467,18.860687,-9.2978516};
											angles[]={0,1.9290662,0};
										};
										side="Empty";
										flags=1;
										class Attributes
										{
										};
										id=137;
										type="OPTRE_center";
										atlOffset=8.9979553;
									};
									class Item3
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-22.361549,18.222626,7.1445313};
											angles[]={0,1.9290601,0};
										};
										side="Empty";
										flags=1;
										class Attributes
										{
										};
										id=138;
										type="OPTRE_tail";
										atlOffset=439.858;
									};
									class Item4
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={94.360733,27.511597,-36.571289};
											angles[]={0,1.9290662,0};
										};
										side="Empty";
										flags=1;
										class Attributes
										{
										};
										id=139;
										type="OPTRE_nose";
										atlOffset=429.59866;
									};
									class Item5
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={70.89003,37.470215,-14.728516};
											angles[]={0,1.9290662,0};
										};
										side="Empty";
										class Attributes
										{
											disableSimulation=1;
											reportRemoteTargets=1;
											receiveRemoteTargets=1;
											reportOwnPosition=1;
										};
										id=140;
										type="OPTRE_Corvette_archer_system";
										atlOffset=458.59424;
										class CustomAttributes
										{
											class Attribute0
											{
												property="allowDamage";
												expression="_this allowdamage _value;";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=0;
													};
												};
											};
											nAttributes=1;
										};
									};
									class Item6
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={61.997452,37.491425,-37.591797};
											angles[]={0,5.0706401,0};
										};
										side="Empty";
										class Attributes
										{
											disableSimulation=1;
											reportRemoteTargets=1;
											receiveRemoteTargets=1;
											reportOwnPosition=1;
										};
										id=141;
										type="OPTRE_Corvette_archer_system";
										atlOffset=456.63818;
										class CustomAttributes
										{
											class Attribute0
											{
												property="allowDamage";
												expression="_this allowdamage _value;";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=0;
													};
												};
											};
											nAttributes=1;
										};
									};
									class Item7
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-25.903931,23.478271,-14.003906};
											angles[]={0,0.35730764,0};
										};
										side="Empty";
										flags=1;
										class Attributes
										{
										};
										id=142;
										type="Land_OPTRE_modular_building_wall";
										atlOffset=452.09344;
									};
									class Item8
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-25.903931,25.978271,-14.003906};
											angles[]={3.1415172,2.7843552,6.2831569};
										};
										side="Empty";
										flags=1;
										class Attributes
										{
										};
										id=143;
										type="Land_OPTRE_modular_building_wall";
										atlOffset=0.6630249;
									};
									class Item9
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-7.9244385,24.978271,24.114258};
											angles[]={4.712389,1.5704899,5.0699873};
										};
										side="Empty";
										flags=1;
										class Attributes
										{
										};
										id=144;
										type="Land_OPTRE_modular_building_wall";
										atlOffset=453.56467;
									};
									class Item10
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-14.306274,24.978271,27.032227};
											angles[]={1.5707964,4.7120824,1.2138884};
										};
										side="Empty";
										flags=1;
										class Attributes
										{
										};
										id=145;
										type="Land_OPTRE_modular_building_wall";
										atlOffset=454.68799;
									};
									class Item11
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-11.202759,28.478271,25.338867};
											angles[]={3.1414123,2.7837317,6.2828698};
										};
										side="Empty";
										flags=1;
										class Attributes
										{
										};
										id=146;
										type="Land_OPTRE_modular_building_wall";
										atlOffset=3.1630249;
									};
									class Item12
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-11.126587,24.791718,25.543945};
											angles[]={0,3.4991913,0};
										};
										side="Empty";
										flags=1;
										class Attributes
										{
										};
										id=147;
										type="OPTRE_airlock_door";
										atlOffset=454.44861;
									};
								};
								id=134;
								atlOffset=0.86465454;
							};
						};
						id=130;
						atlOffset=23.761658;
					};
					class Item1
					{
						dataType="Layer";
						name="777th ORBAT";
						class Entities
						{
							items=10;
							class Item0
							{
								dataType="Group";
								side="West";
								class Entities
								{
									items=3;
									class Item0
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-2.5715942,22.414154,2.6826172};
										};
										side="West";
										flags=7;
										class Attributes
										{
											name="zCurrator1";
											description="Zeus 1@Zeus HQ";
											isPlayer=1;
											isPlayable=1;
										};
										id=171;
										type="OPTRE_UNSC_ODST_Soldier_TeamLeader";
										atlOffset=0.0009765625;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male04GRE";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.95999998;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item1
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-2.5715942,22.413177,2.6826172};
										};
										side="West";
										flags=5;
										class Attributes
										{
											name="zCurrator2";
											description="Zeus 2@Zeus HQ";
											isPlayable=1;
										};
										id=172;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male08ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.99000001;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item2
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-2.5715942,22.413177,2.6826172};
										};
										side="West";
										flags=5;
										class Attributes
										{
											name="zCurrator3";
											description="Zeus 3@Zeus HQ";
											isPlayable=1;
										};
										id=173;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male08ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.99000001;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
								};
								class Attributes
								{
								};
								id=170;
								atlOffset=0.0009765625;
							};
							class Item1
							{
								dataType="Group";
								side="West";
								class Entities
								{
									items=10;
									class Item0
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-9.0616455,22.419556,11.083008};
											angles[]={0,0.96823889,0};
										};
										side="West";
										flags=3;
										class Attributes
										{
											description="Raiijin 1-1 SL@Raijin 1-1";
											isPlayable=1;
										};
										id=175;
										type="OPTRE_UNSC_ODST_Soldier_TeamLeader";
										atlOffset=452.02158;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male01GRE";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item1
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-9.0616455,22.419556,11.083008};
											angles[]={0,0.96823889,0};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Medic";
											isPlayable=1;
										};
										id=176;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										atlOffset=452.02158;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male03ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.97000003;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item2
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-9.0616455,22.419556,11.083008};
											angles[]={0,0.96823889,0};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Medic";
											isPlayable=1;
										};
										id=177;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										atlOffset=452.02158;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male12ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.97000003;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item3
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-9.0616455,22.419861,11.083008};
											angles[]={0,0.96824026,0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=178;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item4
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-9.0616455,22.419861,11.083008};
											angles[]={0,0.96824026,0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=179;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item5
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-9.0616455,22.419861,11.083008};
											angles[]={0,0.96824026,0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=180;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item6
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-9.0616455,22.419861,11.083008};
											angles[]={0,0.96824026,0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=181;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item7
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-9.0616455,22.419861,11.083008};
											angles[]={0,0.96824026,0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=182;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item8
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-9.0616455,22.419861,11.083008};
											angles[]={0,0.96824026,0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=183;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item9
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-9.0616455,22.419861,11.083008};
											angles[]={0,0.96824026,0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=184;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
								};
								class Attributes
								{
								};
								id=174;
								atlOffset=452.02158;
							};
							class Item2
							{
								dataType="Group";
								side="West";
								class Entities
								{
									items=10;
									class Item0
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-6.5256195,22.419556,10.0625};
										};
										side="West";
										flags=3;
										class Attributes
										{
											description="Raiijin 1-2 SL@Raijin 1-2";
											isPlayable=1;
										};
										id=186;
										type="OPTRE_UNSC_ODST_Soldier_TeamLeader";
										atlOffset=451.59308;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male11ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.94999999;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item1
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-6.5256195,22.419556,10.0625};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Medic";
											isPlayable=1;
										};
										id=187;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										atlOffset=451.59308;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male02ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.04;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item2
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-6.5256195,22.419556,10.0625};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Medic";
											isPlayable=1;
										};
										id=188;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										atlOffset=451.59308;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male07ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.95999998;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item3
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-6.5256195,22.419861,10.0625};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=189;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item4
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-6.5256195,22.419861,10.0625};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=190;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item5
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-6.5256195,22.419861,10.0625};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=191;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item6
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-6.5256195,22.419861,10.0625};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=192;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item7
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-6.5256195,22.419861,10.0625};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=193;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item8
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-6.5256195,22.419861,10.0625};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=194;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item9
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-6.5256195,22.419861,10.0625};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=195;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
								};
								class Attributes
								{
								};
								id=185;
								atlOffset=451.59308;
							};
							class Item3
							{
								dataType="Group";
								side="West";
								class Entities
								{
									items=10;
									class Item0
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-4.6255951,22.419434,11.521484};
										};
										side="West";
										flags=3;
										class Attributes
										{
											description="Raiijin 1-3 SL@Raijin 1-3";
											isPlayable=1;
										};
										id=197;
										type="OPTRE_UNSC_ODST_Soldier_TeamLeader";
										atlOffset=22.417664;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male06ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.02;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item1
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-4.6255951,22.419434,11.521484};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Medic";
											isPlayable=1;
										};
										id=198;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										atlOffset=22.417664;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male02GRE";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.97000003;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item2
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-4.6255951,22.419434,11.521484};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Medic";
											isPlayable=1;
										};
										id=199;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										atlOffset=22.417664;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male03ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.03;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item3
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-4.6255951,22.419861,11.521484};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=200;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item4
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-4.6255951,22.419861,11.521484};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=201;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item5
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-4.6255951,22.419861,11.521484};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=202;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item6
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-4.6255951,22.419861,11.521484};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=203;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item7
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-4.6255951,22.419861,11.521484};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=204;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item8
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-4.6255951,22.419861,11.521484};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=205;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item9
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-4.6255951,22.419861,11.521484};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=206;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
								};
								class Attributes
								{
								};
								id=196;
								atlOffset=22.417664;
							};
							class Item4
							{
								dataType="Group";
								side="West";
								class Entities
								{
									items=10;
									class Item0
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-12.090469,22.420166,-5.8349609};
											angles[]={0,3.5300782,-0};
										};
										side="West";
										flags=7;
										class Attributes
										{
											description="Shinobi 2-1 SL@Shinobi 2-1";
											isPlayable=1;
										};
										id=208;
										type="OPTRE_UNSC_ODST_Soldier_TeamLeader";
										atlOffset=0.00048828125;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male11ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.99000001;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item1
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-12.090469,22.420166,-5.8349609};
											angles[]={0,3.5300782,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											description="Medic";
											isPlayable=1;
										};
										id=209;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										atlOffset=0.00048828125;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male08ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.95999998;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute5
											{
												property="face";
												expression="_this setface _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="";
													};
												};
											};
											nAttributes=6;
										};
									};
									class Item2
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-12.090469,22.420166,-5.8349609};
											angles[]={0,3.5300782,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											description="Medic";
											isPlayable=1;
										};
										id=210;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										atlOffset=0.00048828125;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male04GRE";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.98000002;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item3
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-12.090469,22.419678,-5.8349609};
											angles[]={0,3.5300782,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=211;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male02GRE";
													};
												};
											};
											class Attribute2
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.99000001;
													};
												};
											};
											class Attribute3
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=4;
										};
									};
									class Item4
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-12.090469,22.419678,-5.8349609};
											angles[]={0,3.5300782,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=212;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male02GRE";
													};
												};
											};
											class Attribute2
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.99000001;
													};
												};
											};
											class Attribute3
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=4;
										};
									};
									class Item5
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-12.090469,22.419678,-5.8349609};
											angles[]={0,3.5300782,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=213;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item6
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-12.090469,22.419678,-5.8349609};
											angles[]={0,3.5300782,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=214;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male11ENG";
													};
												};
											};
											class Attribute2
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.99000001;
													};
												};
											};
											class Attribute3
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=4;
										};
									};
									class Item7
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-12.090469,22.419678,-5.8349609};
											angles[]={0,3.5300782,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=215;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item8
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-12.090469,22.419678,-5.8349609};
											angles[]={0,3.5300782,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=216;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item9
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-12.090469,22.419678,-5.8349609};
											angles[]={0,3.5300782,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=217;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
								};
								class Attributes
								{
								};
								id=207;
								atlOffset=0.00048828125;
							};
							class Item5
							{
								dataType="Group";
								side="West";
								class Entities
								{
									items=10;
									class Item0
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-15.346954,22.419556,-4.5654297};
											angles[]={0,3.3689685,-0};
										};
										side="West";
										flags=3;
										class Attributes
										{
											description="Shinobi 2-2 SL@Shinobi 2-2";
											isPlayable=1;
										};
										id=219;
										type="OPTRE_UNSC_ODST_Soldier_TeamLeader";
										atlOffset=451.88727;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male09ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.98000002;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item1
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-15.346954,22.419556,-4.5654297};
											angles[]={0,3.3689685,-0};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Medic";
											isPlayable=1;
										};
										id=220;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										atlOffset=451.88727;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male03GRE";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.01;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item2
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-15.346954,22.419556,-4.5654297};
											angles[]={0,3.3689685,-0};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Medic";
											isPlayable=1;
										};
										id=221;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										atlOffset=451.88727;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male10ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.99000001;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item3
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-15.346954,22.419678,-4.5654297};
											angles[]={0,3.3689685,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=222;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item4
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-15.346954,22.419678,-4.5654297};
											angles[]={0,3.3689685,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=223;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item5
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-15.346954,22.419678,-4.5654297};
											angles[]={0,3.3689685,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=224;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item6
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-15.346954,22.419678,-4.5654297};
											angles[]={0,3.3689685,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=225;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item7
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-15.346954,22.419678,-4.5654297};
											angles[]={0,3.3689685,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=226;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item8
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-15.346954,22.419678,-4.5654297};
											angles[]={0,3.3689685,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=227;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item9
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-15.346954,22.419678,-4.5654297};
											angles[]={0,3.3689685,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=228;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
								};
								class Attributes
								{
								};
								id=218;
								atlOffset=451.88727;
							};
							class Item6
							{
								dataType="Group";
								side="West";
								class Entities
								{
									items=10;
									class Item0
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-14.587555,22.419128,-7.9150391};
											angles[]={0,3.5280507,-0};
										};
										side="West";
										flags=3;
										class Attributes
										{
											description="Shinobi 2-3 SL@Shinobi 2-3";
											isPlayable=1;
										};
										id=230;
										type="OPTRE_UNSC_ODST_Soldier_TeamLeader";
										atlOffset=451.57382;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male12ENG";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.97000003;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item1
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-14.587555,22.419128,-7.9150391};
											angles[]={0,3.5280507,-0};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Medic";
											isPlayable=1;
										};
										id=231;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										atlOffset=451.57382;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male04GRE";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item2
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-14.587555,22.419128,-7.9150391};
											angles[]={0,3.5280507,-0};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Medic";
											isPlayable=1;
										};
										id=232;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										atlOffset=451.57382;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male02GRE";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.03;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item3
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-14.587555,22.419678,-7.9150391};
											angles[]={0,3.5280445,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=233;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item4
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-14.587555,22.419678,-7.9150391};
											angles[]={0,3.5280445,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=234;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item5
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-14.587555,22.419678,-7.9150391};
											angles[]={0,3.5280445,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=235;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item6
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-14.587555,22.419678,-7.9150391};
											angles[]={0,3.5280445,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=236;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item7
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-14.587555,22.419678,-7.9150391};
											angles[]={0,3.5280445,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=237;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item8
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-14.587555,22.419678,-7.9150391};
											angles[]={0,3.5280445,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=238;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
									class Item9
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-14.587555,22.419678,-7.9150391};
											angles[]={0,3.5280445,-0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=239;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											nAttributes=2;
										};
									};
								};
								class Attributes
								{
								};
								id=229;
								atlOffset=451.57382;
								class CustomAttributes
								{
									class Attribute0
									{
										property="groupID";
										expression="                            if (isNil 'CBA_fnc_setCallsign') then {                                _this setGroupID [_value];                            } else {                                [_this, _value] call CBA_fnc_setCallsign;                            };                        ";
										class Value
										{
											class data
											{
												singleType="STRING";
												value="Alpha 1-7";
											};
										};
									};
									nAttributes=1;
								};
							};
							class Item7
							{
								dataType="Group";
								side="West";
								class Entities
								{
									items=3;
									class Item0
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={0.6289978,22.412933,7.9091797};
											angles[]={0,0.37130135,0};
										};
										side="West";
										flags=3;
										class Attributes
										{
											description="Isonade 1 SL@Isonade 1";
											isPlayable=1;
										};
										id=241;
										type="OPTRE_UNSC_ODST_Soldier_TeamLeader";
										atlOffset=22.771118;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male05GRE";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=0.98000002;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item1
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={0.6289978,22.413177,7.9091797};
											angles[]={0,0.37130135,0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=242;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=3;
										};
									};
									class Item2
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={0.6289978,22.413177,7.9091797};
											angles[]={0,0.37130135,0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=243;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=3;
										};
									};
								};
								class Attributes
								{
								};
								id=240;
								atlOffset=22.771118;
								class CustomAttributes
								{
									class Attribute0
									{
										property="groupID";
										expression="                            if (isNil 'CBA_fnc_setCallsign') then {                                _this setGroupID [_value];                            } else {                                [_this, _value] call CBA_fnc_setCallsign;                            };                        ";
										class Value
										{
											class data
											{
												singleType="STRING";
												value="Alpha 1-8";
											};
										};
									};
									nAttributes=1;
								};
							};
							class Item8
							{
								dataType="Group";
								side="West";
								class Entities
								{
									items=3;
									class Item0
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-1.6761475,22.412384,8.7529297};
											angles[]={0,0.34241614,0};
										};
										side="West";
										flags=3;
										class Attributes
										{
											description="Isonade 2 SL@Isonade 2";
											isPlayable=1;
										};
										id=245;
										type="OPTRE_UNSC_ODST_Soldier_TeamLeader";
										atlOffset=22.410614;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male06GRE";
													};
												};
											};
											class Attribute3
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.01;
													};
												};
											};
											class Attribute4
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item1
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-1.6764679,22.413177,8.7519531};
											angles[]={0,0.34241614,0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=246;
										type="OPTRE_UNSC_ODST_Soldier_Paramedic";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=3;
										};
									};
									class Item2
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={-1.6764679,22.413177,8.7519531};
											angles[]={0,0.34241614,0};
										};
										side="West";
										flags=5;
										class Attributes
										{
											isPlayable=1;
										};
										id=247;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isMedic";
												expression="if (_value != -1 && {_value != (parseNumber (_this getUnitTrait 'medic'))}) then {_this setVariable [""ace_medical_medicClass"", _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute2
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											nAttributes=3;
										};
									};
								};
								class Attributes
								{
								};
								id=244;
								atlOffset=22.410614;
								class CustomAttributes
								{
									class Attribute0
									{
										property="groupID";
										expression="                            if (isNil 'CBA_fnc_setCallsign') then {                                _this setGroupID [_value];                            } else {                                [_this, _value] call CBA_fnc_setCallsign;                            };                        ";
										class Value
										{
											class data
											{
												singleType="STRING";
												value="Alpha 1-9";
											};
										};
									};
									nAttributes=1;
								};
							};
							class Item9
							{
								dataType="Group";
								side="West";
								class Entities
								{
									items=8;
									class Item0
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={0.49345398,22.412903,10.550781};
											angles[]={0,0.33684853,0};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Yasha 2 Crew 2@Yasha";
											isPlayable=1;
										};
										id=249;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										atlOffset=22.411133;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male12ENG";
													};
												};
											};
											class Attribute2
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.04;
													};
												};
											};
											class Attribute3
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute4
											{
												property="face";
												expression="_this setface _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="";
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item1
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={0.49345398,22.412903,10.550781};
											angles[]={0,0.33684853,0};
										};
										side="West";
										flags=3;
										class Attributes
										{
											description="Yasha 2 Crew 1@Yasha";
											isPlayable=1;
										};
										id=250;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										atlOffset=22.411133;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male12ENG";
													};
												};
											};
											class Attribute2
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.04;
													};
												};
											};
											class Attribute3
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute4
											{
												property="face";
												expression="_this setface _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="";
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item2
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={0.49345398,22.412903,10.550781};
											angles[]={0,0.33684853,0};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Yasha 2 2IC@Yasha";
											isPlayable=1;
										};
										id=251;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										atlOffset=22.411133;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male12ENG";
													};
												};
											};
											class Attribute2
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.04;
													};
												};
											};
											class Attribute3
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute4
											{
												property="face";
												expression="_this setface _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="";
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item3
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={0.49345398,22.412903,10.550781};
											angles[]={0,0.33684853,0};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Yasha 2 SL@Yasha 2";
											isPlayable=1;
										};
										id=252;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										atlOffset=22.411133;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male12ENG";
													};
												};
											};
											class Attribute2
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.04;
													};
												};
											};
											class Attribute3
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute4
											{
												property="face";
												expression="_this setface _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="";
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item4
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={0.49345398,22.412903,10.550781};
											angles[]={0,0.33684853,0};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Yahsa 1 Crew 2@Yasha";
											isPlayable=1;
										};
										id=253;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										atlOffset=22.411133;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male12ENG";
													};
												};
											};
											class Attribute2
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.04;
													};
												};
											};
											class Attribute3
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute4
											{
												property="face";
												expression="_this setface _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="";
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item5
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={0.49345398,22.412903,10.550781};
											angles[]={0,0.33684853,0};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Yasha 1 Crew 1@Yasha";
											isPlayable=1;
										};
										id=254;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										atlOffset=22.411133;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male12ENG";
													};
												};
											};
											class Attribute2
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.04;
													};
												};
											};
											class Attribute3
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute4
											{
												property="face";
												expression="_this setface _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="";
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item6
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={0.49345398,22.412903,10.550781};
											angles[]={0,0.33684853,0};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Yasha 1 2IC@Yasha";
											isPlayable=1;
										};
										id=255;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										atlOffset=22.411133;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male12ENG";
													};
												};
											};
											class Attribute2
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.04;
													};
												};
											};
											class Attribute3
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute4
											{
												property="face";
												expression="_this setface _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="";
													};
												};
											};
											nAttributes=5;
										};
									};
									class Item7
									{
										dataType="Object";
										class PositionInfo
										{
											position[]={0.49345398,22.412903,10.550781};
											angles[]={0,0.33684853,0};
										};
										side="West";
										flags=1;
										class Attributes
										{
											description="Yasha 1 SL@Yasha";
											isPlayable=1;
										};
										id=256;
										type="OPTRE_UNSC_ODST_Soldier_Rifleman_BR";
										atlOffset=22.411133;
										class CustomAttributes
										{
											class Attribute0
											{
												property="ace_isEngineer";
												expression="if !(_value == ([0, 1] select (_this getUnitTrait 'engineer')) || {_value == -1}) then {_this setVariable ['ace_isEngineer', _value, true]}";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=2;
													};
												};
											};
											class Attribute1
											{
												property="speaker";
												expression="_this setspeaker _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="Male12ENG";
													};
												};
											};
											class Attribute2
											{
												property="pitch";
												expression="_this setpitch _value;";
												class Value
												{
													class data
													{
														singleType="SCALAR";
														value=1.04;
													};
												};
											};
											class Attribute3
											{
												property="ace_isEOD";
												expression="_this setVariable ['ACE_isEOD', _value, true]";
												class Value
												{
													class data
													{
														singleType="BOOL";
														value=1;
													};
												};
											};
											class Attribute4
											{
												property="face";
												expression="_this setface _value;";
												class Value
												{
													class data
													{
														singleType="STRING";
														value="";
													};
												};
											};
											nAttributes=5;
										};
									};
								};
								class Attributes
								{
								};
								id=248;
								atlOffset=22.411133;
								class CustomAttributes
								{
									class Attribute0
									{
										property="groupID";
										expression="                            if (isNil 'CBA_fnc_setCallsign') then {                                _this setGroupID [_value];                            } else {                                [_this, _value] call CBA_fnc_setCallsign;                            };                        ";
										class Value
										{
											class data
											{
												singleType="STRING";
												value="Alpha 2-1";
											};
										};
									};
									nAttributes=1;
								};
							};
						};
						id=169;
						atlOffset=0.00039672852;
					};
				};
				id=129;
				atlOffset=23.281677;
			};
		};
		id=257;
		atlOffset=23.281677;
	};
	class Item1
	{
		dataType="Logic";
		class PositionInfo
		{
			position[]={-8.9185791,3.0517578e-005,-15.520508};
		};
		id=258;
		type="ModuleCurator_F";
		atlOffset=427.94775;
		class CustomAttributes
		{
			class Attribute0
			{
				property="ModuleCurator_F_Owner";
				expression="_this setVariable ['Owner',_value,true];";
				class Value
				{
					class data
					{
						singleType="STRING";
						value="zCurrator1";
					};
				};
			};
			class Attribute1
			{
				property="ModuleCurator_F_Forced";
				expression="_this setVariable ['Forced',_value,true];";
				class Value
				{
					class data
					{
						singleType="SCALAR";
						value=0;
					};
				};
			};
			class Attribute2
			{
				property="ModuleCurator_F_Name";
				expression="_this setVariable ['Name',_value,true];";
				class Value
				{
					class data
					{
						singleType="STRING";
						value="";
					};
				};
			};
			class Attribute3
			{
				property="ModuleCurator_F_Addons";
				expression="_this setVariable ['Addons',_value,true];";
				class Value
				{
					class data
					{
						singleType="SCALAR";
						value=2;
					};
				};
			};
			nAttributes=4;
		};
	};
	class Item2
	{
		dataType="Logic";
		class PositionInfo
		{
			position[]={-3.9166107,0.00018310547,-17.401367};
		};
		id=287;
		type="ModuleCurator_F";
		atlOffset=427.14182;
		class CustomAttributes
		{
			class Attribute0
			{
				property="ModuleCurator_F_Owner";
				expression="_this setVariable ['Owner',_value,true];";
				class Value
				{
					class data
					{
						singleType="STRING";
						value="zCurrator2";
					};
				};
			};
			class Attribute1
			{
				property="ModuleCurator_F_Forced";
				expression="_this setVariable ['Forced',_value,true];";
				class Value
				{
					class data
					{
						singleType="SCALAR";
						value=0;
					};
				};
			};
			class Attribute2
			{
				property="ModuleCurator_F_Name";
				expression="_this setVariable ['Name',_value,true];";
				class Value
				{
					class data
					{
						singleType="STRING";
						value="";
					};
				};
			};
			class Attribute3
			{
				property="ModuleCurator_F_Addons";
				expression="_this setVariable ['Addons',_value,true];";
				class Value
				{
					class data
					{
						singleType="SCALAR";
						value=2;
					};
				};
			};
			nAttributes=4;
		};
	};
	class Item3
	{
		dataType="Logic";
		class PositionInfo
		{
			position[]={2.2591705,0,-19.47168};
		};
		id=288;
		type="ModuleCurator_F";
		atlOffset=426.18579;
		class CustomAttributes
		{
			class Attribute0
			{
				property="ModuleCurator_F_Owner";
				expression="_this setVariable ['Owner',_value,true];";
				class Value
				{
					class data
					{
						singleType="STRING";
						value="zCurrator3";
					};
				};
			};
			class Attribute1
			{
				property="ModuleCurator_F_Forced";
				expression="_this setVariable ['Forced',_value,true];";
				class Value
				{
					class data
					{
						singleType="SCALAR";
						value=0;
					};
				};
			};
			class Attribute2
			{
				property="ModuleCurator_F_Name";
				expression="_this setVariable ['Name',_value,true];";
				class Value
				{
					class data
					{
						singleType="STRING";
						value="";
					};
				};
			};
			class Attribute3
			{
				property="ModuleCurator_F_Addons";
				expression="_this setVariable ['Addons',_value,true];";
				class Value
				{
					class data
					{
						singleType="SCALAR";
						value=2;
					};
				};
			};
			nAttributes=4;
		};
	};
	class Item4
	{
		dataType="Logic";
		class PositionInfo
		{
			position[]={-6.4475555,23.107208,-2.9785156};
		};
		name="Respawn_West_Prime";
		id=442;
		type="ModuleRespawnPosition_F";
		atlOffset=0.69546509;
		class CustomAttributes
		{
			class Attribute0
			{
				property="ModuleRespawnPosition_F_Marker";
				expression="_this setVariable ['Marker',_value,true];";
				class Value
				{
					class data
					{
						singleType="STRING";
						value="2";
					};
				};
			};
			class Attribute1
			{
				property="ModuleRespawnPosition_F_Name";
				expression="_this setVariable ['Name',_value,true];";
				class Value
				{
					class data
					{
						singleType="STRING";
						value="";
					};
				};
			};
			class Attribute2
			{
				property="ModuleRespawnPosition_F_Side";
				expression="_this setVariable ['Side',_value,true];";
				class Value
				{
					class data
					{
						singleType="STRING";
						value="1";
					};
				};
			};
			class Attribute3
			{
				property="ModuleRespawnPosition_F_ShowNotification";
				expression="_this setVariable ['ShowNotification',_value,true];";
				class Value
				{
					class data
					{
						singleType="STRING";
						value="1";
					};
				};
			};
			class Attribute4
			{
				property="ModuleRespawnPosition_F_Type";
				expression="_this setVariable ['Type',_value,true];";
				class Value
				{
					class data
					{
						singleType="STRING";
						value="0";
					};
				};
			};
			nAttributes=5;
		};
	};
	class Item5
	{
		dataType="Logic";
		class PositionInfo
		{
			position[]={7.938446,0.00057983398,15.530273};
		};
		id=1251;
		type="acex_fortify_setupModule";
		atlOffset=0.00024414063;
		class CustomAttributes
		{
			class Attribute0
			{
				property="ace_fortify_setupModule_Budget";
				expression="_this setVariable ['Budget',_value,true];";
				class Value
				{
					class data
					{
						singleType="SCALAR";
						value=-1;
					};
				};
			};
			class Attribute1
			{
				property="ace_fortify_setupModule_AddToolItem";
				expression="_this setVariable ['AddToolItem',_value,true];";
				class Value
				{
					class data
					{
						singleType="BOOL";
						value=0;
					};
				};
			};
			class Attribute2
			{
				property="ace_fortify_setupModule_Preset";
				expression="_this setVariable ['Preset',_value,true];";
				class Value
				{
					class data
					{
						singleType="STRING";
						value="big";
					};
				};
			};
			class Attribute3
			{
				property="ace_fortify_setupModule_Side";
				expression="_this setVariable ['Side',_value,true];";
				class Value
				{
					class data
					{
						singleType="SCALAR";
						value=1;
					};
				};
			};
			nAttributes=4;
		};
	};
};
class connections
{
	class LinkIDProvider
	{
		nextID=23;
	};
	class Links
	{
		items=23;
		class Item0
		{
			linkID=0;
			item0=171;
			item1=258;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item1
		{
			linkID=1;
			item0=172;
			item1=258;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item2
		{
			linkID=2;
			item0=173;
			item1=258;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item3
		{
			linkID=3;
			item0=172;
			item1=287;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item4
		{
			linkID=4;
			item0=173;
			item1=288;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item5
		{
			linkID=5;
			item0=426;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item6
		{
			linkID=6;
			item0=435;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item7
		{
			linkID=7;
			item0=438;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item8
		{
			linkID=8;
			item0=439;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item9
		{
			linkID=9;
			item0=440;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item10
		{
			linkID=10;
			item0=441;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item11
		{
			linkID=11;
			item0=911;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item12
		{
			linkID=12;
			item0=912;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item13
		{
			linkID=13;
			item0=913;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item14
		{
			linkID=14;
			item0=914;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item15
		{
			linkID=15;
			item0=915;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item16
		{
			linkID=16;
			item0=916;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item17
		{
			linkID=17;
			item0=917;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item18
		{
			linkID=18;
			item0=918;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item19
		{
			linkID=19;
			item0=919;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item20
		{
			linkID=20;
			item0=920;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item21
		{
			linkID=21;
			item0=921;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
		class Item22
		{
			linkID=22;
			item0=922;
			item1=442;
			class CustomData
			{
				type="Sync";
			};
		};
	};
};
