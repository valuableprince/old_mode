//Режим SP
	Spectate[playerid] = CreatePlayerTextDraw(playerid, 493.333099, 96.651847, "_");
	PlayerTextDrawLetterSize(playerid, Spectate[playerid], 0.285999, 1.463107);
	PlayerTextDrawAlignment(playerid, Spectate[playerid], 1);
	PlayerTextDrawColor(playerid, Spectate[playerid], -16776961);
	PlayerTextDrawSetShadow(playerid, Spectate[playerid], 1);
	PlayerTextDrawSetOutline(playerid, Spectate[playerid], 0);
	PlayerTextDrawBackgroundColor(playerid, Spectate[playerid], 255);
	PlayerTextDrawFont(playerid, Spectate[playerid], 1);
	PlayerTextDrawSetProportional(playerid, Spectate[playerid], 1);
	//animation
	AnimDraw[playerid] = CreatePlayerTextDraw(playerid, 134.0+330, 430.0, "~w~PRESS ~b~ENTER ~w~FOR ~g~CLEAR ~w~ANIMATION");
 	PlayerTextDrawBackgroundColor(playerid, AnimDraw[playerid], 0x000000FF);
 	PlayerTextDrawLetterSize(playerid, AnimDraw[playerid],0.200000,1.000000);
 	PlayerTextDrawFont(playerid, AnimDraw[playerid], 2);
 	PlayerTextDrawColor(playerid, AnimDraw[playerid], 0x007FFFFF);
	PlayerTextDrawSetOutline(playerid, AnimDraw[playerid], 1);
 	PlayerTextDrawSetProportional(playerid, AnimDraw[playerid],1);
 	PlayerTextDrawSetShadow(playerid, AnimDraw[playerid],1);
 	
	//PTS
	CarPTS[playerid][0] = CreatePlayerTextDraw(playerid, 252.518310, 143.333297, "box");
	PlayerTextDrawLetterSize(playerid, CarPTS[playerid][0], 0.000000, 25.039527);
	PlayerTextDrawTextSize(playerid, CarPTS[playerid][0], 388.000000, 0.000000);
	PlayerTextDrawAlignment(playerid, CarPTS[playerid][0], 1);
	PlayerTextDrawColor(playerid, CarPTS[playerid][0], -1);
	PlayerTextDrawUseBox(playerid, CarPTS[playerid][0], 1);
	PlayerTextDrawBoxColor(playerid, CarPTS[playerid][0], 120);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid, CarPTS[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid, CarPTS[playerid][0], 255);
	PlayerTextDrawFont(playerid, CarPTS[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, CarPTS[playerid][0], 1);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][0], 0);

	CarPTS[playerid][1] = CreatePlayerTextDraw(playerid, 250.475738, 141.000030, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, CarPTS[playerid][1], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, CarPTS[playerid][1], 140.000000, 16.000000);
	PlayerTextDrawAlignment(playerid, CarPTS[playerid][1], 1);
	PlayerTextDrawColor(playerid, CarPTS[playerid][1], 78950143);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid, CarPTS[playerid][1], 0);
	PlayerTextDrawBackgroundColor(playerid, CarPTS[playerid][1], 255);
	PlayerTextDrawFont(playerid, CarPTS[playerid][1], 4);
	PlayerTextDrawSetProportional(playerid, CarPTS[playerid][1], 0);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][1], 0);

	CarPTS[playerid][2] = CreatePlayerTextDraw(playerid, 250.475738, 355.083435, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, CarPTS[playerid][2], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, CarPTS[playerid][2], 140.000000, 16.000000);
	PlayerTextDrawAlignment(playerid, CarPTS[playerid][2], 1);
	PlayerTextDrawColor(playerid, CarPTS[playerid][2], 78950143);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid, CarPTS[playerid][2], 0);
	PlayerTextDrawBackgroundColor(playerid, CarPTS[playerid][2], 255);
	PlayerTextDrawFont(playerid, CarPTS[playerid][2], 4);
	PlayerTextDrawSetProportional(playerid, CarPTS[playerid][2], 0);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][2], 0);
	PlayerTextDrawSetSelectable(playerid, CarPTS[playerid][2], true);

	CarPTS[playerid][3] = CreatePlayerTextDraw(playerid, 252.349853, 159.083297, "");
	PlayerTextDrawLetterSize(playerid, CarPTS[playerid][3], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, CarPTS[playerid][3], 136.000000, 111.000000);
	PlayerTextDrawAlignment(playerid, CarPTS[playerid][3], 1);
	PlayerTextDrawColor(playerid, CarPTS[playerid][3], -1);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid, CarPTS[playerid][3], 0);
	PlayerTextDrawBackgroundColor(playerid, CarPTS[playerid][3], 78949920);
	PlayerTextDrawFont(playerid, CarPTS[playerid][3], 5);
	PlayerTextDrawSetProportional(playerid, CarPTS[playerid][3], 0);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][3], 0);
	PlayerTextDrawSetPreviewModel(playerid, CarPTS[playerid][3], 560);
	PlayerTextDrawSetPreviewRot(playerid, CarPTS[playerid][3], -10.000000, 0.000000, -20.000000, 1.000000);
	PlayerTextDrawSetPreviewVehCol(playerid, CarPTS[playerid][3], 1, 1);

	CarPTS[playerid][4] = CreatePlayerTextDraw(playerid, 253.455352, 272.833343, "_");//Name:_Kim_Kallstrom
	PlayerTextDrawLetterSize(playerid, CarPTS[playerid][4], 0.200000, 1.436666);
	PlayerTextDrawAlignment(playerid, CarPTS[playerid][4], 1);
	PlayerTextDrawColor(playerid, CarPTS[playerid][4], 78950143);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][4], 0);
	PlayerTextDrawSetOutline(playerid, CarPTS[playerid][4], 1);
	PlayerTextDrawBackgroundColor(playerid, CarPTS[playerid][4], 255);
	PlayerTextDrawFont(playerid, CarPTS[playerid][4], 2);
	PlayerTextDrawSetProportional(playerid, CarPTS[playerid][4], 1);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][4], 0);

	CarPTS[playerid][5] = CreatePlayerTextDraw(playerid, 253.455261, 287.416656, "_");//Date:_29.12.2015
	PlayerTextDrawLetterSize(playerid, CarPTS[playerid][5], 0.200000, 1.600000);
	PlayerTextDrawAlignment(playerid, CarPTS[playerid][5], 1);
	PlayerTextDrawColor(playerid, CarPTS[playerid][5], 78950143);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][5], 0);
	PlayerTextDrawSetOutline(playerid, CarPTS[playerid][5], 1);
	PlayerTextDrawBackgroundColor(playerid, CarPTS[playerid][5], 255);
	PlayerTextDrawFont(playerid, CarPTS[playerid][5], 2);
	PlayerTextDrawSetProportional(playerid, CarPTS[playerid][5], 1);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][5], 0);

	CarPTS[playerid][6] = CreatePlayerTextDraw(playerid, 253.923751, 301.416656, "model:_Sultan");//model:_Sultan
	PlayerTextDrawLetterSize(playerid, CarPTS[playerid][6], 0.200000, 1.600000);
	PlayerTextDrawAlignment(playerid, CarPTS[playerid][6], 1);
	PlayerTextDrawColor(playerid, CarPTS[playerid][6], 78950143);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][6], 0);
	PlayerTextDrawSetOutline(playerid, CarPTS[playerid][6], 1);
	PlayerTextDrawBackgroundColor(playerid, CarPTS[playerid][6], 255);
	PlayerTextDrawFont(playerid, CarPTS[playerid][6], 2);
	PlayerTextDrawSetProportional(playerid, CarPTS[playerid][6], 1);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][6], 0);

	CarPTS[playerid][7] = CreatePlayerTextDraw(playerid, 254.392105, 314.833312, "_");//CLASS:_EConomy
	PlayerTextDrawLetterSize(playerid, CarPTS[playerid][7], 0.200000, 1.600000);
	PlayerTextDrawAlignment(playerid, CarPTS[playerid][7], 1);
	PlayerTextDrawColor(playerid, CarPTS[playerid][7], 78950143);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid, CarPTS[playerid][7], 1);
	PlayerTextDrawBackgroundColor(playerid, CarPTS[playerid][7], 255);
	PlayerTextDrawFont(playerid, CarPTS[playerid][7], 2);
	PlayerTextDrawSetProportional(playerid, CarPTS[playerid][7], 1);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][7], 0);

	CarPTS[playerid][8] = CreatePlayerTextDraw(playerid, 254.860778, 329.416687, "_");//Car_Nmber:_X_777_XX
	PlayerTextDrawLetterSize(playerid, CarPTS[playerid][8], 0.200000, 1.600000);
	PlayerTextDrawAlignment(playerid, CarPTS[playerid][8], 1);
	PlayerTextDrawColor(playerid, CarPTS[playerid][8], 78950143);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][8], 0);
	PlayerTextDrawSetOutline(playerid, CarPTS[playerid][8], 1);
	PlayerTextDrawBackgroundColor(playerid, CarPTS[playerid][8], 255);
	PlayerTextDrawFont(playerid, CarPTS[playerid][8], 2);
	PlayerTextDrawSetProportional(playerid, CarPTS[playerid][8], 1);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][8], 0);

	CarPTS[playerid][9] = CreatePlayerTextDraw(playerid, 301.713134, 142.166687, "PTS");
	PlayerTextDrawLetterSize(playerid, CarPTS[playerid][9], 0.400000, 1.600000);
	PlayerTextDrawAlignment(playerid, CarPTS[playerid][9], 1);
	PlayerTextDrawColor(playerid, CarPTS[playerid][9], -2139062017);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][9], 0);
	PlayerTextDrawSetOutline(playerid, CarPTS[playerid][9], 1);
	PlayerTextDrawBackgroundColor(playerid, CarPTS[playerid][9], 255);
	PlayerTextDrawFont(playerid, CarPTS[playerid][9], 2);
	PlayerTextDrawSetProportional(playerid, CarPTS[playerid][9], 1);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][9], 0);

	CarPTS[playerid][10] = CreatePlayerTextDraw(playerid, 294.685211, 356.250091, "CLOSE");
	PlayerTextDrawLetterSize(playerid, CarPTS[playerid][10], 0.400000, 1.600000);
	PlayerTextDrawAlignment(playerid, CarPTS[playerid][10], 1);
	PlayerTextDrawColor(playerid, CarPTS[playerid][10], -2139062017);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][10], 0);
	PlayerTextDrawSetOutline(playerid, CarPTS[playerid][10], 1);
	PlayerTextDrawBackgroundColor(playerid, CarPTS[playerid][10], 255);
	PlayerTextDrawFont(playerid, CarPTS[playerid][10], 2);
	PlayerTextDrawSetProportional(playerid, CarPTS[playerid][10], 1);
	PlayerTextDrawSetShadow(playerid, CarPTS[playerid][10], 0);

	//Админ панель veh

	gAdmVehInfo[0][playerid] = CreatePlayerTextDraw(playerid, 465.0, 350.5, "Sultan");
	PlayerTextDrawBackgroundColor(playerid, gAdmVehInfo[0][playerid], 255);
	PlayerTextDrawFont(playerid, gAdmVehInfo[0][playerid], 0);
	PlayerTextDrawAlignment(playerid, gAdmVehInfo[0][playerid], 2);
	PlayerTextDrawLetterSize(playerid, gAdmVehInfo[0][playerid], 0.4, 1.2);
	PlayerTextDrawColor(playerid, gAdmVehInfo[0][playerid], -1);
	PlayerTextDrawSetOutline(playerid, gAdmVehInfo[0][playerid], 1);
	PlayerTextDrawSetShadow(playerid, gAdmVehInfo[0][playerid], 0);
	PlayerTextDrawSetSelectable(playerid, gAdmVehInfo[0][playerid], 0);
	PlayerTextDrawAlignment(playerid, gAdmVehInfo[0][playerid], 1);

	gAdmVehInfo[1][playerid] = CreatePlayerTextDraw(playerid, 550.0, 361.0, " ~n~~n~~n~~n~~n~~n~~n~");
	PlayerTextDrawBackgroundColor(playerid, gAdmVehInfo[1][playerid], 255);
	PlayerTextDrawFont(playerid, gAdmVehInfo[1][playerid], 2);
	PlayerTextDrawAlignment(playerid, gAdmVehInfo[1][playerid], 2);
	PlayerTextDrawLetterSize(playerid, gAdmVehInfo[1][playerid], 0.4, 1.0);
	PlayerTextDrawColor(playerid, gAdmVehInfo[1][playerid], -1);
	PlayerTextDrawSetOutline(playerid, gAdmVehInfo[1][playerid], 1);
	PlayerTextDrawSetProportional(playerid, gAdmVehInfo[1][playerid], 1);
	PlayerTextDrawUseBox(playerid, gAdmVehInfo[1][playerid], 1);
	PlayerTextDrawBoxColor(playerid, gAdmVehInfo[1][playerid],0x00000080);
	PlayerTextDrawTextSize(playerid, gAdmVehInfo[1][playerid],50.000000,170.000000);
	PlayerTextDrawSetShadow(playerid, gAdmVehInfo[1][playerid], 0);
	PlayerTextDrawSetSelectable(playerid, gAdmVehInfo[1][playerid], 0);
	
	PTD_autosalon[0] = CreatePlayerTextDraw(playerid,219.000000, 283.000000, "fon");
	PlayerTextDrawBackgroundColor(playerid,PTD_autosalon[0], 90);
	PlayerTextDrawFont(playerid,PTD_autosalon[0], 5);
	PlayerTextDrawLetterSize(playerid,PTD_autosalon[0], 0.600000, 0.000000);
	PlayerTextDrawColor(playerid,PTD_autosalon[0], 16711935);
	PlayerTextDrawSetOutline(playerid,PTD_autosalon[0], 0);
	PlayerTextDrawSetProportional(playerid,PTD_autosalon[0], 1);
	PlayerTextDrawSetShadow(playerid,PTD_autosalon[0], 1);
	PlayerTextDrawUseBox(playerid,PTD_autosalon[0], 1);
	PlayerTextDrawBoxColor(playerid,PTD_autosalon[0], 16777215);
	PlayerTextDrawTextSize(playerid,PTD_autosalon[0], 204.000000, 140.000000);
	PlayerTextDrawSetPreviewModel(playerid, PTD_autosalon[0], 12400);
	PlayerTextDrawSetPreviewRot(playerid, PTD_autosalon[0], -16.000000, 0.000000, -55.000000, 200000.000000);
	PlayerTextDrawSetSelectable(playerid,PTD_autosalon[0], 0);

	PTD_autosalon[1] = CreatePlayerTextDraw(playerid,229.000000, 393.000000, "ld_beat:left");
	PlayerTextDrawBackgroundColor(playerid,PTD_autosalon[1], 255);
	PlayerTextDrawFont(playerid,PTD_autosalon[1], 4);
	PlayerTextDrawLetterSize(playerid,PTD_autosalon[1], 0.400000, 0.000000);
	PlayerTextDrawColor(playerid,PTD_autosalon[1], - 1);
	PlayerTextDrawSetOutline(playerid,PTD_autosalon[1], 0);
	PlayerTextDrawSetProportional(playerid,PTD_autosalon[1], 1);
	PlayerTextDrawSetShadow(playerid,PTD_autosalon[1], 1);
	PlayerTextDrawUseBox(playerid,PTD_autosalon[1], 1);
	PlayerTextDrawBoxColor(playerid,PTD_autosalon[1], 255);
	PlayerTextDrawTextSize(playerid,PTD_autosalon[1], 21.000000, 21.000000);
	PlayerTextDrawSetSelectable(playerid,PTD_autosalon[1], 1);

	PTD_autosalon[2] = CreatePlayerTextDraw(playerid,229.000000, 301.000000, "MODEL:     INFERNUS");
	PlayerTextDrawBackgroundColor(playerid,PTD_autosalon[2], 255);
	PlayerTextDrawFont(playerid,PTD_autosalon[2], 2);
	PlayerTextDrawLetterSize(playerid,PTD_autosalon[2], 0.229999, 1.299999);
	PlayerTextDrawColor(playerid,PTD_autosalon[2], - 1);
	PlayerTextDrawSetOutline(playerid,PTD_autosalon[2], 0);
	PlayerTextDrawSetProportional(playerid,PTD_autosalon[2], 1);
	PlayerTextDrawSetShadow(playerid,PTD_autosalon[2], 1);
	PlayerTextDrawSetSelectable(playerid,PTD_autosalon[2], 0);

	PTD_autosalon[3] = CreatePlayerTextDraw(playerid,392.000000, 393.000000, "ld_beat:right");
	PlayerTextDrawBackgroundColor(playerid,PTD_autosalon[3], 255);
	PlayerTextDrawFont(playerid,PTD_autosalon[3], 4);
	PlayerTextDrawLetterSize(playerid,PTD_autosalon[3], 0.400000, 0.000000);
	PlayerTextDrawColor(playerid,PTD_autosalon[3], - 1);
	PlayerTextDrawSetOutline(playerid,PTD_autosalon[3], 0);
	PlayerTextDrawSetProportional(playerid,PTD_autosalon[3], 1);
	PlayerTextDrawSetShadow(playerid,PTD_autosalon[3], 1);
	PlayerTextDrawUseBox(playerid,PTD_autosalon[3], 1);
	PlayerTextDrawBoxColor(playerid,PTD_autosalon[3], 255);
	PlayerTextDrawTextSize(playerid,PTD_autosalon[3], 21.000000, 21.000000);
	PlayerTextDrawSetSelectable(playerid,PTD_autosalon[3], 1);

	PTD_autosalon[4] = CreatePlayerTextDraw(playerid,229.000000, 314.000000, "MAX. FUEL:    200 L");
	PlayerTextDrawBackgroundColor(playerid,PTD_autosalon[4], 255);
	PlayerTextDrawFont(playerid,PTD_autosalon[4], 2);
	PlayerTextDrawLetterSize(playerid,PTD_autosalon[4], 0.229999, 1.299999);
	PlayerTextDrawColor(playerid,PTD_autosalon[4], - 1);
	PlayerTextDrawSetOutline(playerid,PTD_autosalon[4], 0);
	PlayerTextDrawSetProportional(playerid,PTD_autosalon[4], 1);
	PlayerTextDrawSetShadow(playerid,PTD_autosalon[4], 1);
	PlayerTextDrawSetSelectable(playerid,PTD_autosalon[4], 0);

	PTD_autosalon[5] = CreatePlayerTextDraw(playerid,229.000000, 327.000000, "MAX. SPEED:    200 km/h");
	PlayerTextDrawBackgroundColor(playerid,PTD_autosalon[5], 255);
	PlayerTextDrawFont(playerid,PTD_autosalon[5], 2);
	PlayerTextDrawLetterSize(playerid,PTD_autosalon[5], 0.229999, 1.299999);
	PlayerTextDrawColor(playerid,PTD_autosalon[5], - 1);
	PlayerTextDrawSetOutline(playerid,PTD_autosalon[5], 0);
	PlayerTextDrawSetProportional(playerid,PTD_autosalon[5], 1);
	PlayerTextDrawSetShadow(playerid,PTD_autosalon[5], 1);
	PlayerTextDrawSetSelectable(playerid,PTD_autosalon[5], 0);

	PTD_autosalon[6] = CreatePlayerTextDraw(playerid,320.000000, 371.000000, "45000 $");
	PlayerTextDrawAlignment(playerid,PTD_autosalon[6], 2);
	PlayerTextDrawBackgroundColor(playerid,PTD_autosalon[6], 255);
	PlayerTextDrawFont(playerid,PTD_autosalon[6], 2);
	PlayerTextDrawLetterSize(playerid,PTD_autosalon[6], 0.289997, 2.099999);
	PlayerTextDrawColor(playerid,PTD_autosalon[6], 16711935);
	PlayerTextDrawSetOutline(playerid,PTD_autosalon[6], 0);
	PlayerTextDrawSetProportional(playerid,PTD_autosalon[6], 1);
	PlayerTextDrawSetShadow(playerid,PTD_autosalon[6], 1);
	PlayerTextDrawSetSelectable(playerid,PTD_autosalon[6], 0);

	PTD_autosalon[7] = CreatePlayerTextDraw(playerid,229.000000, 341.000000, "ENGINE:    DIESEL");
	PlayerTextDrawBackgroundColor(playerid,PTD_autosalon[7], 255);
	PlayerTextDrawFont(playerid,PTD_autosalon[7], 2);
	PlayerTextDrawLetterSize(playerid,PTD_autosalon[7], 0.229999, 1.299999);
	PlayerTextDrawColor(playerid,PTD_autosalon[7], - 1);
	PlayerTextDrawSetOutline(playerid,PTD_autosalon[7], 0);
	PlayerTextDrawSetProportional(playerid,PTD_autosalon[7], 1);
	PlayerTextDrawSetShadow(playerid,PTD_autosalon[7], 1);
	PlayerTextDrawSetSelectable(playerid,PTD_autosalon[7], 0);

	PTD_autosalon[8] = CreatePlayerTextDraw(playerid,229.000000, 355.000000, "CONS.:    19 l/100km");
	PlayerTextDrawBackgroundColor(playerid,PTD_autosalon[8], 255);
	PlayerTextDrawFont(playerid,PTD_autosalon[8], 2);
	PlayerTextDrawLetterSize(playerid,PTD_autosalon[8], 0.229999, 1.299999);
	PlayerTextDrawColor(playerid,PTD_autosalon[8], - 1);
	PlayerTextDrawSetOutline(playerid,PTD_autosalon[8], 0);
	PlayerTextDrawSetProportional(playerid,PTD_autosalon[8], 1);
	PlayerTextDrawSetShadow(playerid,PTD_autosalon[8], 1);
	PlayerTextDrawSetSelectable(playerid,PTD_autosalon[8], 0);

	PTD_autosalon[9] = CreatePlayerTextDraw(playerid,320.000000, 394.000000, "CONTINUE");
	PlayerTextDrawAlignment(playerid,PTD_autosalon[9], 2);
	PlayerTextDrawBackgroundColor(playerid,PTD_autosalon[9], 255);
	PlayerTextDrawFont(playerid,PTD_autosalon[9], 2);
	PlayerTextDrawLetterSize(playerid,PTD_autosalon[9], 0.310000, 1.899999);
	PlayerTextDrawTextSize(playerid,PTD_autosalon[9], 320.000000+62, 15.0);
	PlayerTextDrawColor(playerid,PTD_autosalon[9], -65281);
	PlayerTextDrawSetOutline(playerid,PTD_autosalon[9], 0);
	PlayerTextDrawSetProportional(playerid,PTD_autosalon[9], 1);
	PlayerTextDrawSetShadow(playerid,PTD_autosalon[9], 1);
	PlayerTextDrawSetSelectable(playerid,PTD_autosalon[9], 1);

	PTD_autosalon[10] = CreatePlayerTextDraw(playerid,219.000000, 283.000000, "fon");
	PlayerTextDrawBackgroundColor(playerid,PTD_autosalon[10], 90);
	PlayerTextDrawFont(playerid,PTD_autosalon[10], 5);
	PlayerTextDrawLetterSize(playerid,PTD_autosalon[10], 0.509998, 0.000000);
	PlayerTextDrawColor(playerid,PTD_autosalon[10], 16711935);
	PlayerTextDrawSetOutline(playerid,PTD_autosalon[10], 0);
	PlayerTextDrawSetProportional(playerid,PTD_autosalon[10], 1);
	PlayerTextDrawSetShadow(playerid,PTD_autosalon[10], 1);
	PlayerTextDrawUseBox(playerid,PTD_autosalon[10], 1);
	PlayerTextDrawBoxColor(playerid,PTD_autosalon[10], 16777215);
	PlayerTextDrawTextSize(playerid,PTD_autosalon[10], 204.000000, 14.000000);
	PlayerTextDrawSetPreviewModel(playerid, PTD_autosalon[10], 12400);
	PlayerTextDrawSetPreviewRot(playerid, PTD_autosalon[10], -16.000000, 0.000000, -55.000000, 200000.000000);
	PlayerTextDrawSetSelectable(playerid,PTD_autosalon[10], 0);

	PTD_autosalon[11] = CreatePlayerTextDraw(playerid,410.000000, 284.000000, "ld_beat:cross");
	PlayerTextDrawBackgroundColor(playerid,PTD_autosalon[11], 255);
	PlayerTextDrawFont(playerid,PTD_autosalon[11], 4);
	PlayerTextDrawLetterSize(playerid,PTD_autosalon[11], 0.400000, 0.000000);
	PlayerTextDrawColor(playerid,PTD_autosalon[11], - 1);
	PlayerTextDrawSetOutline(playerid,PTD_autosalon[11], 0);
	PlayerTextDrawSetProportional(playerid,PTD_autosalon[11], 1);
	PlayerTextDrawSetShadow(playerid,PTD_autosalon[11], 1);
	PlayerTextDrawUseBox(playerid,PTD_autosalon[11], 1);
	PlayerTextDrawBoxColor(playerid,PTD_autosalon[11], 255);
	PlayerTextDrawTextSize(playerid,PTD_autosalon[11], 12.000000, 12.000000);
	PlayerTextDrawSetSelectable(playerid,PTD_autosalon[11], 1);

	PTD_autosalon[12] = CreatePlayerTextDraw(playerid,292.000000, 285.000000, "Buying a car");
	PlayerTextDrawBackgroundColor(playerid,PTD_autosalon[12], 255);
	PlayerTextDrawFont(playerid,PTD_autosalon[12], 2);
	PlayerTextDrawLetterSize(playerid,PTD_autosalon[12], 0.189998, 1.100000);
	PlayerTextDrawColor(playerid,PTD_autosalon[12], - 1);
	PlayerTextDrawSetOutline(playerid,PTD_autosalon[12], 0);
	PlayerTextDrawSetProportional(playerid,PTD_autosalon[12], 1);
	PlayerTextDrawSetShadow(playerid,PTD_autosalon[12], 1);
	PlayerTextDrawSetSelectable(playerid,PTD_autosalon[12], 0);

	gSkinShopPriceDraw[playerid] = CreatePlayerTextDraw(playerid, 31.000000, 224.000000, "_");
	PlayerTextDrawBackgroundColor(playerid, gSkinShopPriceDraw[playerid], 255);
	PlayerTextDrawFont(playerid, gSkinShopPriceDraw[playerid], 3);
	PlayerTextDrawLetterSize(playerid, gSkinShopPriceDraw[playerid], 0.500000, 1.600000);
	PlayerTextDrawColor(playerid, gSkinShopPriceDraw[playerid], -1);
	PlayerTextDrawSetOutline(playerid, gSkinShopPriceDraw[playerid], 0);
	PlayerTextDrawSetProportional(playerid, gSkinShopPriceDraw[playerid], 1);
	PlayerTextDrawSetShadow(playerid, gSkinShopPriceDraw[playerid], 1);