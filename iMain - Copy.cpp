#include "iGraphics.h"
#include "bitmap_loader.h"
#include "myPictureLoader.h" 
#include "workingFunctions.h"


//int aaa;
int x = 300, y = 300, r = 20 ;
int win_b = 400, win_l = 400;
float delay = 0;
int speed = 0;
/*
 function iDraw() is called again and again by the system.

 */
void drawRoadLines(int offset)
{
	int len = 10;
	int width = 5;
	int gap = 10;
	int midx = 0, midy = win_l / 2;
	for (int i = 0; i < win_b / (len + gap); i++)
		iFilledRectangle((i * (len + gap) + offset) % win_b, midy, len, width);
}
int k = 0;


void iDraw()
{
	//********************Main Code starts from here  **********************************

	//coverImage is a integer variable which is initialized with 0.This value will change in different game states.

	iClear();

	if(coverImage==0)
	LoadingPage();			//LoadingPage()  is defined in workingsFunctions.h header file and return type is void
		
	else if(coverImage==1)
	MainMenuPage();			//MainMenuPage()  is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==2)
	GameModePage();			//GameModePage() is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==3)
	HelpPage();				//HelpPage()  is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==4)
	AboutPage();			//AboutPage() is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==5)
	FriendlyModePage();		//FriendlyModePage()  is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==6)
	WorldCupModePage();		//WorldCupModePage()  is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==7)
	ChallengeModePage();	//ChallengeModePage()  is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==8)
	OwnTeamSelection();		//OwnTeamSelection()  is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==9)
	OpponentTeamSelection();//OpponentTeamSelection() is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==10)
	StadiumSelection();		//StadiumSelection() is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==11)
	MatchStartSummary();	//MatchStartSummary() is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==12) 
	Brackets();			    //Brackets() is defined in worldCup.h header file and return type is void

	else if(coverImage==13)
	WallOfGlory();			//WallOfGlory() is defined in worldCup.h header file and return type is void

	else if(coverImage==14)
	ChallengeInstruction(); //ChallengeInstruction() is defined in challenge.h header file and return type is void

	else if(coverImage==15)
	ChallengeHighScore();   //ChallengeHighScore() is defined in challenge.h header file and return type is void

	else if(coverImage==16)
	GamePicturePage();		//GamePicturePage() is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==17)
	MatchEndSummary();		//MatchEndSummary() is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==18)
	OwnTeamLineUp();		//OwnTeamLineUp() is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==19)
	OpponentTeamLineUp();	//OpponentTeamLineUp() is defined in workingsFunctions.h header file and return type is void

	else if(coverImage==20)
	PointTable();			//PointTable() is defined in worldCup.h header file and return type is void
}	

void iPassiveMouse(int x, int y)
{
	printf("x = %d , y = %d , CoverImage = %d\n", x, y,coverImage);   //print the value of co-ordinates (x,y) and game states value in console.... 
	
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
	
	else if(coverImage==11 ||coverImage==17 ||coverImage==18 ||coverImage==19 )
	{

		if(x>=1160 && x<=1300 && y>=300 && y<=390)  //blink Next Button
		{
			mousePointX = 1161;
			mousePointY = 301;
			blink_next = true;
		
		}
	
		else
		{
			blink_next = false;
		}
	}

	//*****************************if the value of coverImage is equals to 20 then Point Table Page will call***************************************
	
	else if(coverImage==20 )
	{
		
		if(x>=1160 && x<=1300 && y>=300 && y<=390)  //blink Next Button
		{
			mousePointX = 1161;
			mousePointY = 301;
			blink_next = true;
		
		}
	
		else
		{
			blink_next = false;
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
}

/*
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouseMove(int mx, int my)
{
	;
}	

/*
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouse(int button, int state, int mx, int my)
{
	//printf("x = %d, y= %d\n", x, y);
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
		//printf("x = %d, y= %d\n", mx, my);


		//******************************* CoverImage = 1 opens the Main Menu Page******************************************* 


		if(mx>=99 && mx<=306 && my>=201 && my<=276 && coverImage==1 && quitButton == false )  //makes the boolean quitButton variable true and Exit notification tab will open
		{
			quitButton = true;
		}

		else if(mx>=99 && mx<=306 && my>=298 && my<=371 && coverImage==1 && quitButton == false )  //presses About Button and Opens About Page
		{
			coverImage = 4;
		}

		else if(mx>=99 && mx<=306 && my>=391 && my<=463 && coverImage==1 && quitButton == false )  //presses Help Button and Opens Help Page
		{
			coverImage = 3;
		}

		else if(mx>=99 && mx<=306 && my>=486 && my<=557 && coverImage==1 && quitButton == false )  //presses Game Menu Button and Opens Game Menu Page
		{
			coverImage = 2;
		}

		else if(mx>=516 && mx<=650 && my>=271 && my<=326 && quitButton ==true && coverImage==1)  //presses Yes Button and Exits from the game
		{
		
			exit(0);		
		}
		
		else if(mx>=754 && mx<=891 && my>=271 && my<=326 && quitButton ==true && coverImage==1)  //presses No Button and returns into Main Menu page from quit notification page
		{
			quitButton =false;
		}


		//******************************* CoverImage = 2 opens the Game Menu Page******************************************* 


		else if(mx>=118 && mx<=313 && my>=191 && my<=262 && coverImage==2)  //presses Main Menu Button and Opens the Main Menu page
		{
			coverImage = 1;
		
		}

		else if(mx>=119 && mx<=314 && my>=285 && my<=358 && coverImage==2)  //presses Challenge Button and Opens the Challenge Mode page
		{
			coverImage = 7;
		
		}

		else if(mx>=118 && mx<=315 && my>=376 && my<=446 && coverImage==2)  //presses World Cup Button and Opens the World Cup Mode page
		{
			coverImage = 6;
		
		}

		else if(mx>=119 && mx<=314 && my>=472 && my<=544 && coverImage==2)  //presses Friendly Button and Opens the Friendly Mode page
		{
			coverImage = 5;
		}

	
		//******************************* CoverImage = 3 opens the Help Page******************************************* 

		

		else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 3)  //presses Back Button from Help Page and return into Main Menu page
		{
			coverImage = 1;
		}

		//******************************* CoverImage = 3 opens the About Page******************************************* 


		else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 4)	 //presses Back Button from About Page and returns into Main Menu page
		{
			coverImage = 1;
		}

		else if(mx>=170 && mx<=353 && my>=504 && my<=571 && coverImage==5)   //presses Back Button from About Page and returns into Main Menu page
		{
			coverImage=8;
			player_mode=false;
		}

		else if(mx>=170 && mx<=355 && my>=416 && my<=482 && coverImage==5)   //presses Single Player Button from Friendly Mode Page and Opens Own Team Selection Page
		{
			coverImage=8;
			player_mode=true;
		}

		else if(mx>=170 && mx<=356 && my>=328 && my<=396 && coverImage==5)   //presses Multi Player Button from Friendly Mode Page and Opens Own Team Selection Page
		{
			coverImage=2;
		
		}

		//******************************* CoverImage = 6 opens the World Cup Mode Page******************************************* 


		else if(mx>=115 && mx<=285 && my>=178 && my<=240 && coverImage==6)  //presses Back Button from World Cup Mode Page and returns Game Mode Page
		{
			coverImage = 2;
		}

		else if(mx>=115 && mx<=285 && my>=255 && my<=317 && coverImage==6)  //presses Wall of Glory Button from World Cup Mode Page and Opens Wall of Glory Page
		{
			coverImage = 13;
		}

		else if(mx>=115 && mx<=285 && my>=334 && my<=398 && coverImage==6)  //presses Brackets Button from World Cup Mode Page and Opens Brackets Page
		{
			coverImage = 12;
		}

		else if(mx>=115 && mx<=285 && my>=417 && my<=478 && coverImage==6)  //presses Point Tables Button from World Cup Mode Page and Opens Point Table Page
		{
			coverImage = 20;
		}

		else if(mx>=115 && mx<=285 && my>=497 && my<=559 && coverImage==6)  //presses New Game Button from World Cup Mode Page and Opens Own Team Selection page
		{
			world_cup_team_selection = true;
			coverImage = 8;
		}

		else if(mx>=115 && mx<=285 && my>=578 && my<=640 && coverImage==6)  //presses Continue Button from World Cup Mode Page and Opens Load Game data
		{
			coverImage = 10;
		}


		//******************************* CoverImage = 7 opens the Challenge Mode Page******************************************* 



		else if(mx>=175 && mx<=339 && my>=288 && my<=346 && coverImage==7)  //presses Game Menu Button from Challenge Mode Page and returns into Game Menu Page
		{
			coverImage = 2;
		}

		else if(mx>=175 && mx<=339 && my>=366 && my<=424 && coverImage==7)  //presses High Score Button from Challenge Mode Page and Opens High Score Page
		{
			coverImage = 15;
		}

		else if(mx>=175 && mx<=339 && my>=443 && my<=503 && coverImage==7)  //presses Instructions Button from Challenge Mode Page and Opens Instructions Page
		{
			coverImage = 14;
		
		}

		else if(mx>=175 && mx<=339 && my>=526 && my<=586 && coverImage==7)  //presses New Game Button from Challenge Mode Page and Opens Own Team Selection Page
		{
		
			coverImage = 8;
		}


		//******************************* CoverImage = 8 opens the Own Team Selection Page******************************************* 

		//If boolean variable world_cup_team_selection is true then Page will work for World Cup Mode else Page will work for Single/MultiPlayer/Challenge Mode(User's choice) Page 
		//Integer variable worldCupOwnTeam stores the value of Own Team in World Cup Mode and Integer variable yourTeamNumber stores the value of Own Team in Single/MultiPlayer/Challenge Mode
		//coverImage = 9 opens the Opponent Team Selection Page and  coverImage = 10 opens the Stadium Selection Page

		else if(mx>=46 && mx<=140 && my>=107 && my<=175 && coverImage==8)  //select Senegal
		{
			
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 24;
				coverImage = 10;

			}

			else
			{
				coverImage=9;
				yourTeamNumber = 24;
			}
		}


		
		
		else if(mx>=191 && mx<=287 && my>=108 && my<=178 && coverImage==8)  //select Serbia
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 25;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 25;
			}
		}

		

		else if(mx>=338 && mx<=434 && my>=110 && my<=178 && coverImage==8)  //select South Korea
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 26;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 26;
			}
		}

		
		else if(mx>=485 && mx<=581 && my>=110 && my<=178 && coverImage==8)  //select Spain
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 27;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 27;
			}

		}

		
		
		else if(mx>=632 && mx<=728 && my>=110 && my<=178 && coverImage==8)  //select Sweden
		{
			
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 28;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 28;
			}

		}
			
		

		else if(mx>=777 && mx<=873 && my>=108 && my<=176 && coverImage==8)  //select Switzerland
		{
			
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 29;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 29;
			}
		}
			
		

		else if(mx>=924 && mx<=1022 && my>=106 && my<=174 && coverImage==8)  //select Tunisia
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 30;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 30;
			}

		}


		else if(mx>=1073 && mx<=1169 && my>=108 && my<=176 && coverImage==8)  //select Uruguay
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 31;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 31;
			}
		}


		

		else if(mx>=46 && mx<=140 && my>=211 && my<=269 && coverImage==8)  //select Morocco
		{
				
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 16;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 16;
			}
		}

		
		else if(mx>=191 && mx<=287 && my>=211 && my<=269 && coverImage==8)  //select Nigeria
		{
			
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 17;
				coverImage = 10;

			}
			else
			{
			    coverImage = 9;
				yourTeamNumber = 17;
			}
		}

		

		else if(mx>=338 && mx<=434 && my>=211 && my<=269 && coverImage==8)  //select Panama
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 18;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 18;
			}

		}
		
		else if(mx>=485 && mx<=581 && my>=211 && my<=269 && coverImage==8)  //select Peru
		{
			
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 19;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 19;
			}

		}
			
		
		
		else if(mx>=632 && mx<=728 && my>=211 && my<=269 && coverImage==8)  //select Poland
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 20;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 20;
			}
		}

		
		
	
		else if(mx>=779 && mx<=875 && my>=211 && my<=269 && coverImage==8)  //select Portugal
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 21;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 21;
			}
		}
			
		
		else if(mx>=926 && mx<=1022 && my>=211 && my<=269 && coverImage==8)  //select Russia
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 22;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 22;
			}
		}
		
		else if(mx>=1073 && mx<=1169 && my>=211 && my<=269 && coverImage==8)  //select Saudi Arabia
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 23;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 23;
			}
		}

		
		
		else if(mx>=44 && mx<=138 && my>=316 && my<=376 && coverImage==8)  //select Egypt
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 8;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 8;
			}
		}

		

		else if(mx>=191 && mx<=287 && my>=314 && my<=374  && coverImage==8)  //select England
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam =9;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 9;
			}

		}
			
		

		else if(mx>=338 && mx<=434 && my>=314 && my<=374 && coverImage==8 )  //select France
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 10;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 10;
			}
		}
			
		
		

		else if(mx>=485 && mx<=581 && my>=313 && my<=373 && coverImage==8 )  //select Germany
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 11;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 11;
			}

		}
		

		else if(mx>=632 && mx<=728 && my>=312 && my<=372 && coverImage==8 )  //select Iceland
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 12;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 12;
			}
		}

		
		
		else if(mx>=779 && mx<=875 && my>=311 && my<=371 && coverImage==8)  //select Iran
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 13;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 13;
			}
		}
		

		else if(mx>=926 && mx<=1022 && my>=311 && my<=371 && coverImage==8 )  //select Japan
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 14;
				coverImage = 10;
			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 14;
			}
		}

		

		else if(mx>=1073 && mx<=1169 && my>=311 && my<=371 && coverImage==8 )  //select Mexico
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 15;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 15;
			}
		}
		
		else if(mx>=44 && mx<=138 && my>=421 && my<=481 && coverImage==8)  //select Argentina
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 0;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 0;
			}
		}
		

		else if(mx>=191 && mx<=287 && my>=421 && my<=481 && coverImage==8)  //select Australia
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 1;
				coverImage = 10;

			}
			else
			{
				coverImage = 9;
				yourTeamNumber = 1;
			}
		}
		
		else if(mx>=338 && mx<=434 && my>=421 && my<=481 && coverImage==8)  //select Belgium
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 2;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 2;
			}
		}
		
		
		else if(mx>=485 && mx<=581 && my>=421 && my<=481 && coverImage==8)  //select Brazil
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 3;
				coverImage = 10;

			}
			
			else
			{
				coverImage = 9;
				yourTeamNumber = 3;
			}
		}
		

		else if(mx>=632 && mx<=728 && my>=421 && my<=481 && coverImage==8)  //select Colombia
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam =4;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 4;
			}
		}
		

		else if(mx>=779 && mx<=875 &&  my>=421 && my<=481 && coverImage==8)  //select Costa Rica
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam =  5;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 5;
			}
		}
		

		else if(mx>=926 && mx<=1022 && my>=421 && my<=481 && coverImage==8)  //select Croatia
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 6;
				coverImage = 10;

			}

			else
			{
				coverImage = 9;
				yourTeamNumber = 6;
			}
		}
		
		
		else if(mx>=1073 && mx<=1169 && my>=421 && my<=481 && coverImage==8)  //select Denmark
		{
			if(world_cup_team_selection==true)
			{
				worldCupOwnTeam = 7;
				coverImage = 10;

			}
			
			else
			{
				coverImage = 10;
				yourTeamNumber = 7;
			}
		}

		

		//******************************* CoverImage = 9 opens the Opponent Team Selection Page******************************************* 
		
		// Cover Image = 10 Opens the Stadium Selection Page
		//Integer variable opponentTeamNumberr stores the value of Opponent Team in Single/MultiPlayer/Challenge Mode
		
		
		else if(mx>=46 && mx<=140 && my>=107 && my<=175 && coverImage==9)  //select Senegal
		{
			coverImage = 10;
			opponentTeamNumber = 24;		
		}
			
			
		else if(mx>=191 && mx<=287 && my>=108 && my<=178 && coverImage==9)  //select Serbia
		{
			coverImage = 10;
			opponentTeamNumber = 25;
		}
		
		else if(mx>=338 && mx<=434 && my>=110 && my<=178 && coverImage==9)  //select South Korea
		{
			coverImage = 10;
			opponentTeamNumber = 26;
		}
		
		else if(mx>=485 && mx<=581 && my>=110 && my<=178 && coverImage==9)  //select Spain
		{
			coverImage = 10;
			opponentTeamNumber = 27;
		}
		
		else if(mx>=632 && mx<=728 && my>=110 && my<=178 && coverImage==9)  //select Sweden
		{
			coverImage = 10;
			opponentTeamNumber = 28;
		}
	

		else if(mx>=777 && mx<=873 && my>=108 && my<=176 && coverImage==9)  //select Switzerland
		{
			coverImage = 10;
			opponentTeamNumber = 29;
		}
		
		else if(mx>=924 && mx<=1022 && my>=106 && my<=174 && coverImage==9)  //select Tunisia
		{
			coverImage = 10;
			opponentTeamNumber = 30;
		}

		else if(mx>=1073 && mx<=1169 && my>=108 && my<=176 && coverImage==9)  //select Uruguay
		{
			coverImage = 10;
			opponentTeamNumber = 31;
		}
		
		else if(mx>=46 && mx<=140 && my>=211 && my<=269 && coverImage==9)  //select Morocco
		{
				coverImage = 10;
				opponentTeamNumber = 16;
		}

		else if(mx>=191 && mx<=287 && my>=211 && my<=269 && coverImage==9)  //select Nigeria
		{
			coverImage = 10;
			opponentTeamNumber = 17;
		}

		else if(mx>=338 && mx<=434 && my>=211 && my<=269 && coverImage==9)  //select Panama
		{
			coverImage = 10;
			opponentTeamNumber = 18;
		}
		
		else if(mx>=485 && mx<=581 && my>=211 && my<=269 && coverImage==9)  //select Peru
		{
			coverImage = 10;
			opponentTeamNumber = 19;
		}
		
		else if(mx>=632 && mx<=728 && my>=211 && my<=269 && coverImage==9)  //select Poland
		{
			coverImage = 10;
			opponentTeamNumber = 20;
		}

		else if(mx>=779 && mx<=875 && my>=211 && my<=269 && coverImage==9)  //select Portugal
		{
			coverImage = 10;
			opponentTeamNumber = 21;
		}

		else if(mx>=926 && mx<=1022 && my>=211 && my<=269 && coverImage==9)  //select Russia
		{
			coverImage = 10;
			opponentTeamNumber = 22;
		}
		
		else if(mx>=1073 && mx<=1169 && my>=211 && my<=269 && coverImage==9) //select Saudi Arabia
		{
			coverImage = 10;
			opponentTeamNumber = 23;
		}
		
		else if(mx>=44 && mx<=138 && my>=316 && my<=376 && coverImage==9)  //select Egypt
		{
			coverImage = 10;
			opponentTeamNumber = 8;
		}
		
		else if(mx>=191 && mx<=287 && my>=314 && my<=374  && coverImage==9)  //select England
		{
			coverImage = 10;
			opponentTeamNumber = 9;
		}
		
		else if(mx>=338 && mx<=434 && my>=314 && my<=374 && coverImage==9)  //select France
		{
			coverImage = 10;
			opponentTeamNumber = 10;
		}

		else if(mx>=485 && mx<=581 && my>=313 && my<=373 && coverImage==9)  //select Germany
		{
			coverImage = 10;
			opponentTeamNumber = 11;
		}
		
		else if(mx>=632 && mx<=728 && my>=312 && my<=372 && coverImage==9)  //select Iceland
		{
			coverImage = 10;
			opponentTeamNumber = 12;
		}
		
		else if(mx>=779 && mx<=875 && my>=311 && my<=371 && coverImage==9)  //select Iran
		{
			coverImage = 10;
			opponentTeamNumber = 13;
		}
			
		else if(mx>=926 && mx<=1022 && my>=311 && my<=371 && coverImage==9)  //select Japan
		{
			coverImage = 10;
			opponentTeamNumber = 14;
		}
		
		else if(mx>=1073 && mx<=1169 && my>=311 && my<=371 && coverImage==9)  //select Mexico
		{
			coverImage = 10;
			opponentTeamNumber = 15;
		}
		
		else if(mx>=44 && mx<=138 && my>=421 && my<=481 && coverImage==9)     //select Argentina
		{
			coverImage = 10;
			opponentTeamNumber = 0;
		}
			
		else if(mx>=191 && mx<=287 && my>=421 && my<=481 && coverImage==9)  //select Australia
		{
			coverImage = 10;
			opponentTeamNumber = 1;
		}
		
		else if(mx>=338 && mx<=434 && my>=421 && my<=481 && coverImage==9)  //select Belgium
		{
			coverImage = 10;
			opponentTeamNumber = 2;
		}
		
		else if(mx>=485 && mx<=581 && my>=421 && my<=481 && coverImage==9)  //select Brazil
		{
			coverImage = 10;
			opponentTeamNumber = 3;
		}
		
		else if(mx>=632 && mx<=728 && my>=421 && my<=481 && coverImage==9)  //select Colombia
		{
			coverImage = 10;;
			opponentTeamNumber = 4;
		}
			
		else if(mx>=779 && mx<=875 &&  my>=421 && my<=481 && coverImage==9)  //select Costa Rica
		{
			coverImage = 10;
			opponentTeamNumber = 5;
		}
		
		
		else if(mx>=926 && mx<=1022 && my>=421 && my<=481 && coverImage==9)  //select Croatia
		{
			coverImage = 10;
			opponentTeamNumber = 6;
		}
		
		else if(mx>=1073 && mx<=1169 && my>=421 && my<=481 && coverImage==9)  //select Denmark
		{
			coverImage = 10;
			opponentTeamNumber = 7;
		}
			

		//******************************* CoverImage = 10 opens the Stadium Selection Page******************************************* 
		//If boolean variable world_cup_team_selection is true then Page will work for World Cup Mode else Page will work for Single/MultiPlayer/Challenge Mode(User's choice) Page 
		//Integer variable worldCupStadiumNumber stores the value of Stadium Number in World Cup Mode and Integer variable stadiumNumber stores the value of Own Team in Single/MultiPlayer/Challenge Mode
		


		else if(mx>=65 && mx<=365 && my>=365 && my<=530 && coverImage==10)  //Santiago Bernabéu Stadium
		{
			
			if(world_cup_team_selection==true)
			{
				worldCupStadiumNumber = 0;
			}

			else
			{
				stadiumNumber = 0;
			}

			coverImage = 11;
		}

		else if(mx>=450 && mx<=750 && my>=365 && my<=530 && coverImage==10)  //Allianz Stadium
		{
			if(world_cup_team_selection==true)
			{
				worldCupStadiumNumber = 1;
			}

			else
			{
				stadiumNumber = 1;
			}

			coverImage = 11;
		}

		else if(mx>=845 && mx<=1145 && my>=365 && my<=530 && coverImage==10)  //Camp Nuo Stadium
		{
			if(world_cup_team_selection==true)
			{
				worldCupStadiumNumber = 2;
			}

			else
			{
				stadiumNumber = 2;
			}

			coverImage = 11;
		}

		else if(mx>=65 && mx<=365 && my>=100 && my<=265 && coverImage==10)  //Luzhniki Stadium
		{
			if(world_cup_team_selection==true)
			{
				worldCupStadiumNumber = 3;
			}

			else
			{
				stadiumNumber = 3;
			}

			coverImage = 11;
		}


		else if(mx>=450 && mx<=750 && my>=100 && my<=265 && coverImage==10)  //Old Trafford Stadium
		{
			if(world_cup_team_selection==true)
			{
				worldCupStadiumNumber = 4;
			}

			else
			{
				stadiumNumber = 4;
			}

			coverImage = 11;

		}

		else if(mx>=845 && mx<=1145 && my>=100 && my<=265 && coverImage==10)  //Bangabandhu Stadium
		{
			if(world_cup_team_selection==true)
			{
				worldCupStadiumNumber = 5;
			}

			else
			{
				stadiumNumber = 5;
			}

			coverImage = 11;
		}

		
		

		else if(mx>=1160 && mx<=1300 && my>=300 && my<=370 && coverImage==11)  //presses Next Button from Match Starts Summary Page and Opens Own Team Line Up page
		{
		
			coverImage = 18;
		}
	
		else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 12)  //presses Back Button from Brackets Page and returns into World Cup Mode page
		{
				coverImage = 6;
		}

		else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 13) //presses Back Button from Wall of Glory Page and returns into World Cup Mode page
		{
			coverImage = 6;
		}

		else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 14)  //presses Back Button from Challenge Instruction Page and returns into Challenge Mode page
		{
			coverImage = 7;
		}

		else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 15)  //presses Back Button from Challenge HighScore Page and returns into Challenge Mode page
		{
			coverImage = 7;
		}

		else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 16)  //presses Back Button from GamePicture Page and returns Game Mode page
		{
			coverImage = 2;
		}

		else if(mx>=1160 && mx<=1300 && my>=300 && my<=370 && coverImage==17)  //presses Next Button from Match End Summary Page and goes Game Mode page
		{
			coverImage = 5;
		}

		else if(mx>=1160 && mx<=1300 && my>=300 && my<=370 && coverImage==18) //presses Next Button from Own Team Selection Page and opens Opponent Team Selection page
		{
			coverImage = 19;
		
		}

		else if(mx>=1160 && mx<=1300 && my>=300 && my<=370 && coverImage==19)  //presses Next Button from Opponent Team Selection Page and opens Game Picture page
		{
			coverImage = 16;
		}


		else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 20) //presses Back Button from Point Table Page and returns into World Cup Mode page
		{
			coverImage = 6;
		}

		else if(mx>=1160 && mx<=1300 && my>=300 && my<=370 && coverImage==20)  //presses Next Button from Point Table Page and switches between all Group Point Table page
		{
			if(pointTableRender==7)
				pointTableRender = 0;
			else
				pointTableRender++;
		
		}

		
		//x += 10;
		//y += 10;
	}

	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		//x -= 10;
		//y -= 10;
	}

}

/*
 function iKeyboard() is called whenever the user hits a key in keyboard.
 key- holds the ASCII value of the key pressed.
 */


void iKeyboard(unsigned char key)
{
	if (key == 'q')
	{
		exit(0);
	}

	else if (key == 'c')
	{
		playerRun =true;  //boolean variable playerRun will true to start the run of a player
	}

	else if (key == 'p') //default value will store again
	{
		gkRun = true;
		ballMoveX =673;
		ballMoveY =168;
		playerRender = 0;
		ballRun = false;
		gkRightRenderOwn = 0;
		gkLeftRenderOwn = 0;
		iResumeTimer(gk_dive_timer_own);
		

		gk_dive++;
		scX += 30; 
	}
	else if (key == 'a' && speed < 5)
		speed += 1;
	else if (key == 's' && speed > 0)
		speed -= 1;
	//place your codes for other keys here
}


/*
 function iSpecialKeyboard() is called whenver user hits special keys like-
 function keys, home, end, pg up, pg down, arraows etc. you have to use
 appropriate constants to detect them. A list is:
 GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
 GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
 GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
 GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
 */
void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}


int main()
{
	//place your own initialization codes here.


	iInitialize(screen_length,screen_width,"Fifa Penalty Shootout '18");

	//iSetTimer(int msec,void(*f)(void)) calls the specified function f() again and again automatically after the specified time interval msec.

	loadingTimer =iSetTimer(500,loadingFunction);     //Loading Function is defined in workingFunctions.h header file and is used to show loading bar... 
	player_timer = iSetTimer(200,playerTimer);        //playerTimer Function is defined in gameFunctions.h hedaer file and is used to change the player picture
	gk_timer = iSetTimer(350,gkTimer);				  //gkTimer Function is defined in gameFunctions.h hedaer file and is used to stand the Goal Kepper picture
	ball_timer = iSetTimer(100, ballTimer);			  //playerTimer Function is defined in gameFunctions.h hedaer file and is used to change the ball co-ordinates
	gk_dive_timer_own = iSetTimer(200, gkRunning);    //gkRunning  Function is defined in gameFunctions.h hedaer file and is used to make diving for Goal Kepper
	pictureLoading();								  //pictureloading function will load all the picture which is defined in myPictureLoader.h header file.
	loadingPlayer();								  //loadingPlayer function will load the all players name from "PlayerList.bin" file which is defined in playerLoadFile.h header file
	
	
	iStart(); // it will start drawing
	
	return 0;
}

