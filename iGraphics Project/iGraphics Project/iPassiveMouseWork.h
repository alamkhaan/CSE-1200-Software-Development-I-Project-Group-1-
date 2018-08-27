#ifndef I_PASSIVE_MOUSE_WORK_H
#define I_PASSIVE_MOUSE_WORK_H


void makeIPassiveSmall(int x,int y);


//makeIPassiveSmall is called when the user moves the mouse.
// (x, y) is the position where the mouse pointer is.
//return type void..called from iPassiveMouse function


void makeIPassiveSmall(int x,int y)
{
	//*****************************************************All the Menu Button blink codes are here*********************************************


	//*****************************if the value of coverImage is equals to 1 then Main Menu Page will call***************************************
	
	if(coverImage == 1)
	{

		if(x>=99 && x<=306 && y>=201 && y<=276 && quitButton == false)  //blink Quit button
		{
			mousePointX = 100;
			mousePointY = 199;
			blink_rectangle_page1 = true;
		}

		else if(x>=99 && x<=306 && y>=298 && y<=371 && quitButton == false)  //blink About button
		{
			mousePointX = 100;
			mousePointY = 298;
			blink_rectangle_page1 = true;
		}

		else if(x>=99 && x<=306 && y>=391 && y<=463 && quitButton == false)  //blink Help button
		{
			mousePointX = 100;
			mousePointY = 391;
			blink_rectangle_page1 = true;
		}

		else if(x>=99 && x<=306 && y>=486 && y<=557 && quitButton == false)  //blink Game Mode button
		{
			mousePointX = 100;
			mousePointY = 486;
			blink_rectangle_page1 = true;
		
		}
	
		else blink_rectangle_page1 = false;

		if(quitButton==true)
		{

			if(x>=516 && x<=650 && y>=271 && y<=326)  //blink Yes button
			{
				mousePointX = 516;
				mousePointY = 271;
				blink_quit = true;
			}

			else if(x>=754 && x<=891 && y>=271 && y<=326)  //blink No button
			{
				mousePointX = 754;
				mousePointY = 271;
				blink_quit = true;
			}

			else
			{
				blink_quit=false;
			}
		}

		if(x>=1120 && x<=1260 && y>=65 && y<=135  && !quitButton)
		{
			mousePointX = 1120;
			mousePointY = 64;
			blink_next = true;
		}

		else
			blink_next = false;
	}


	//*****************************if the value of coverImage is equals to 2 then Game Mode Page will call***************************************


	else if(coverImage == 2)
	{

		if(x>=118 && x<=313 && y>=191 && y<=262)  //blink Main Menu button
		{
			mousePointX = 120;
			mousePointY = 193;
			blink_rectangle_page2 = true;
		}

		else if(x>=119 && x<=314 && y>=285 && y<=358)  //blink Challenge button
		{
			mousePointX = 121;
			mousePointY = 287;
			blink_rectangle_page2 = true;
		}

		else if(x>=118 && x<=315 && y>=376 && y<=446)  //blink World Cup button
		{
			mousePointX = 120;
			mousePointY = 378;
			blink_rectangle_page2 = true;
		}

		else if(x>=119 && x<=314 && y>=472 && y<=544)  //blink Friendly button
		{
			mousePointX = 121;
			mousePointY = 474;
			blink_rectangle_page2 = true;
		}
	
		else
		{
			blink_rectangle_page2 = false;
		}

	}

	
	else if(coverImage == 3 || coverImage == 4 || coverImage ==12 || coverImage == 13 || coverImage == 14 || coverImage ==15 || coverImage ==16)
	{

		if(x>=45 && x<=120&& y>=633 && y<=672)  //blink Back button
		{
			mousePointX = 46;
			mousePointY = 634;
			blink_back = true;
		}

		else 
		{
			blink_back = false;
		}

	}

	
	//*****************************if the value of coverImage is equals to 5 then Friendly Mode Page will call***************************************
	else if(coverImage==5)
	{

		if(x>=170 && x<=353 && y>=504 && y<=571)  //blink Single Player button
		{
			mousePointX = 172;
			mousePointY = 505;
			blink_friendly = true;
		}

		else if(x>=170 && x<=355 && y>=416 && y<=482)  //blink Multi Player button
		{
			mousePointX = 172;
			mousePointY = 417;
			blink_friendly = true;
		}

		else if(x>=170 && x<=356 && y>=328 && y<=396)  //blinkGame Mode button
		{
			mousePointX = 173;
			mousePointY = 329;
			blink_friendly = true;
		}
	
		else 
		{
			blink_friendly = false;
		}
	}

	//*****************************if the value of coverImage is equals to 6 then World Cup Mode Page will call***************************************

	else if(coverImage==6)
	{

		if(x>=115 && x<=285 && y>=178 && y<=240)  //blink Back button
		{
			mousePointX = 116;
			mousePointY = 177;
			blink_worldCup = true;
		}

		else if(x>=115 && x<=285 && y>=255 && y<=317)  //blink Wall Of Glory button
		{
			mousePointX = 116;
			mousePointY = 256;
			blink_worldCup = true;
		}

		else if(x>=115 && x<=285 && y>=334 && y<=398)  //blink Brackets button
		{
			mousePointX = 116;
			mousePointY = 335;
			blink_worldCup = true;
		}

		else if(x>=115 && x<=285 && y>=417 && y<=478)  //blink Point Tables  button
		{
			mousePointX = 116;
			mousePointY = 418;
			blink_worldCup = true;
		}

		else if(x>=115 && x<=285 && y>=497 && y<=559)  //blink New Game button
		{
			mousePointX = 116;
			mousePointY = 498;
			blink_worldCup = true;
		}

		else if(x>=115 && x<=285 && y>=578 && y<=640)  //blink Continue button
		{
			mousePointX = 116;
			mousePointY = 579;
			blink_worldCup = true;
		}

		else
		{
			blink_worldCup = false; 
		}

	}

	//*****************************if the value of coverImage is equals to 7 then Challenge Mode Page will call***************************************
	
	else if(coverImage==7)
	{

		if(x>=175 && x<=339 && y>=288 && y<=346)  //blink Game Button button
		{
			mousePointX = 176;
			mousePointY = 289;
			blink_challenge = true;
		}

		else if(x>=175 && x<=339 && y>=366 && y<=424)  //blink High Score button
		{
			mousePointX = 176;
			mousePointY = 367;
			blink_challenge = true;
		}

		else if(x>=175 && x<=339 && y>=443 && y<=503)  //blink Instruction button
		{
			mousePointX = 176;
			mousePointY = 444;
			blink_challenge = true;
		}

		else if(x>=175 && x<=339 && y>=526 && y<=586)  //blink New Game button
		{
			mousePointX = 176;
			mousePointY = 527;
			blink_challenge = true;
		}

		else 
		{
			blink_challenge = false;
		}
	}

	//*****************************Coverimage = 8 calls Own Team Selection Page and Coverimage = 9 calls Opponent Team Selection Page***************************************
	
	else if(coverImage==8 || coverImage==9)
	{

		if(x>=46 && x<=140 && y>=107 && y<=175)  //blink Senegal Flag
		{
			mousePointX = 47;
			mousePointY = 108;
			blink_team = true;
		}

		else if(x>=191 && x<=287 && y>=108 && y<=178)  //blink Serbia Flag
		{
			mousePointX = 192;
			mousePointY = 109;
			blink_team = true;
		}

		else if(x>=338 && x<=434 && y>=110 && y<=178)  //blink South Korea Flag
		{
			mousePointX = 339;
			mousePointY = 111;
			blink_team = true;
		}

		else if(x>=485 && x<=581 && y>=110 && y<=178)  //blink Spain Flag
		{
			mousePointX = 486;
			mousePointY = 111;
			blink_team = true;
		}

		else if(x>=632 && x<=728 && y>=110 && y<=178)  //blink Sweden Flag
		{
			mousePointX = 633;
			mousePointY = 111;
			blink_team = true;
		}

		else if(x>=777 && x<=873 && y>=108 && y<=176)  //blink Switzerland Flag
		{
			mousePointX = 778;
			mousePointY = 109;
			blink_team = true;
		}

		else if(x>=924 && x<=1022 && y>=106 && y<=174)  //blink Tunisia Flag
		{
			mousePointX = 925;
			mousePointY = 107;
			blink_team = true;
		}

		else if(x>=1073 && x<=1169 && y>=108 && y<=176)  //blink Uruguay Flag
		{
			mousePointX = 1074;
			mousePointY = 109;
			blink_team = true;
		}

		else if(x>=46 && x<=140 && y>=211 && y<=269)  //blink Morocco Flag
		{
			mousePointX = 47;
			mousePointY = 212;
			blink_team = true;
		}

		else if(x>=191 && x<=287 && y>=211 && y<=269)  //blink Nigeria Flag
		{
			mousePointX = 192;
			mousePointY = 212;
			blink_team = true;
		}

		else if(x>=338 && x<=434 && y>=211 && y<=269)  //blink Panama Flag
		{
			mousePointX = 339;
			mousePointY = 212;
			blink_team = true;
		}

		else if(x>=485 && x<=581 && y>=211 && y<=269)  //blink Peru Flag
		{
			mousePointX = 486;
			mousePointY = 212;
			blink_team = true;
		}

		else if(x>=632 && x<=728 && y>=211 && y<=269)  //blink Poland Flag
		{
			mousePointX = 633;
			mousePointY = 212;
			blink_team = true;
		}

		else if(x>=779 && x<=875 && y>=211 && y<=269)  //blink Portugal Flag
		{
			mousePointX = 780;
			mousePointY = 212;
			blink_team = true;
		}

		else if(x>=926 && x<=1022 && y>=211 && y<=269)  //blink Russia Flag
		{
			mousePointX = 927;
			mousePointY = 212;
			blink_team = true;
		}

		else if(x>=1073 && x<=1169 && y>=211 && y<=269)  //blink Saudi Arabia Flag
		{
			mousePointX = 1073;
			mousePointY = 212;
			blink_team = true;
		}

		else if(x>=44 && x<=138 && y>=316 && y<=376)  //blink Egypt Flag
		{
			mousePointX = 45;
			mousePointY = 317;
			blink_team = true;
		}

		else if(x>=191 && x<=287 && y>=314 && y<=374)  //blink England Flag
		{
			mousePointX = 192;
			mousePointY = 315;
			blink_team = true;
		}

		else if(x>=338 && x<=434 && y>=314 && y<=374)  //blink France Flag

		{
			mousePointX = 339;
			mousePointY = 315;
			blink_team = true;
		}

		else if(x>=485 && x<=581 && y>=313 && y<=373)  //blink Germany Flag
		{
			mousePointX = 486;
			mousePointY = 314;
			blink_team = true;
		}

		else if(x>=632 && x<=728 && y>=312 && y<=372)  //blink Iceland Flag
		{
			mousePointX = 633;
			mousePointY = 313;
			blink_team = true;
		}

		else if(x>=779 && x<=875 && y>=311 && y<=371)  //blink IranFlag
		{
			mousePointX = 780;
			mousePointY = 312;
			blink_team = true;
		}

		else if(x>=926 && x<=1022 && y>=311 && y<=371)  //blink Japan Flag
		{
			mousePointX = 927;
			mousePointY = 312;
			blink_team = true;
		}

		else if(x>=1073 && x<=1169 && y>=311 && y<=371) //blink Mexico Flag
		{
			mousePointX = 1074;
			mousePointY = 312;
			blink_team = true;
		}

		else if(x>=44 && x<=138 && y>=421 && y<=481 )  //blink Argentina Flag
		{
			mousePointX = 45;
			mousePointY = 422;
			blink_team = true;
		}

		else if(x>=191 && x<=287 && y>=421 && y<=481 )  //blink Australia Flag
		{
			mousePointX = 192;
			mousePointY = 422;
			blink_team = true;
		}

		else if(x>=338 && x<=434 && y>=421 && y<=481 )  //blink Belgium Flag
		{
			mousePointX = 339;
			mousePointY = 422;
			blink_team = true;
		}

		else if(x>=485 && x<=581 && y>=421 && y<=481 )  //blink Brazil Flag
		{
			mousePointX = 486;
			mousePointY = 422;
			blink_team = true;
		}

		else if(x>=632 && x<=728 && y>=421 && y<=481)  //blink Colombia Flag
		{
			mousePointX = 633;
			mousePointY = 422;
			blink_team = true;
		}

		else if(x>=779 && x<=875 &&  y>=421 && y<=481 )  //blink Costa Rica Flag
		{
			mousePointX = 780;
			mousePointY = 422;
			blink_team = true;
		}

		else if(x>=926 && x<=1022 && y>=421 && y<=481 )  //blink Croatia Flag
		{
			mousePointX = 927;
			mousePointY = 422;
			blink_team = true;
		}

		else if(x>=1073 && x<=1169 && y>=421 && y<=481 )  //blink Denmark Flag
		{
			mousePointX = 1074;
			mousePointY = 422;
			blink_team = true;
		}

		else
		{
			blink_team = false;
		}
	}

	//*****************************if the value of coverImage is equals to 10 then Selection Page will call***************************************
	
	else if(coverImage==10)
	{

		if(x>=65 && x<=365 && y>=365 && y<=530)  //increase the size of Santiago Bernabéu Stadium Image
		{
			stadium1X = 450;
			stadium1Y = 315;
		}

		else if(x>=450 && x<=750 && y>=365 && y<=530)  //increase the size of Allianz Stadium Image
		{
			stadium2X = 450;
			stadium2Y = 315;
		}

		else if(x>=845 && x<=1145 && y>=365 && y<=530)  //increase the size of Camp Nuo Stadium Image
		{
			stadium3X = 450;
			stadium3Y = 315;
		}

		else if(x>=65 && x<=365 && y>=100 && y<=265)  //increase the size of Luzhniki Stadium Image
		{
			stadium4X = 450;
			stadium4Y = 315;
		}

		else if(x>=450 && x<=750 && y>=100 && y<=265)  //increase the size of Old Trafford Stadium Image
		{
			stadium5X = 450;
			stadium5Y = 315;
		}

		else if(x>=845 && x<=1145 && y>=100 && y<=265)  //increase the size of Bangabandhu Stadium Image
		{
			stadium6X = 450;
			stadium6Y = 315;
		}

		
		else   //All Stadium Image will set into default size
		{
			stadium1X = 300;
			stadium1Y = 165;
			stadium2X = 300;
			stadium2Y = 165;
			stadium3X = 300;
			stadium3Y = 165;
			stadium4X = 300;
			stadium4Y = 165;
			stadium5X = 300;
			stadium5Y = 165;
			stadium6X = 300;
			stadium6Y = 165;
		}
	}


	//*****************************Coverimage = 11 calls Match Start Summary Page and Coverimage = 17 calls Match End Summary Page***************************************
	//*****************************Coverimage = 18 calls Own Team Line Up Page and Coverimage = 19 calls Opponent Team Line Up Page***************************************
	
	else if(coverImage==11 ||coverImage==18 ||coverImage==19 )
	{

		if(x>=1160 && x<=1300 && y>=300 && y<=390)  //blink Next Button
		{
			mousePointX = 1161;
			mousePointY = 299;
			blink_next = true;
		
		}
	
		else
		{
			blink_next = false;
		}
	}

	else if(coverImage==17)
	{
		if((x>=1160 && x<=1300 && y>=300 && y<=390) && (!challenge_mode || strlen(userDataChallenge.userName)>1)) //blink Next Button
		{
			mousePointX = 1161;
			mousePointY = 299;
			blink_next = true;
		
		}
	
		else
		{
			blink_next = false;
		}

		if(x>=747 && x<=940 && y>=453 && y<=497 && challenge_mode  && !writeName)  //blink Write Name Button
		{
			mousePointX = 748;
			mousePointY = 452;
			blink_write_name = true;
		}
		else
		{
			blink_write_name = false;
		}

	}

	//*****************************if the value of coverImage is equals to 20 then Point Table Page will call***************************************
	
	else if(coverImage==20 )
	{
		
		if(x>=1221 && x<=1300 && y>=300 && y<=370)  //blink Next Button
		{
			mousePointX = 1221;
			mousePointY = 299;
			blink_pt_next = true;
		
		}
	
		else
		{
			blink_pt_next = false;
		}

		if(x>=45 && x<=120&& y>=633 && y<=672)  //blink Back Button
		{
			mousePointX = 46;
			mousePointY = 634;
			blink_back = true;
		
		}

		else 
		{
			blink_back = false;
		}

	}
	
	else if(coverImage==21)
	{
		if((x>=1160 && x<=1300 && y>=300 && y<=390) && strlen(userGlory.userName)>1) //blink Next Button
		{
			mousePointX = 1161;
			mousePointY = 299;
			blink_next = true;
		
		}
	
		else
		{
			blink_next = false;
		}

		if(x>=747 && x<=940 && y>=453 && y<=497 && !writeName)  //blink Write Name Button
		{
			mousePointX = 748;
			mousePointY = 452;
			blink_write_name = true;
		}
		else
		{
			blink_write_name = false;
		}

	}
	
}


#endif