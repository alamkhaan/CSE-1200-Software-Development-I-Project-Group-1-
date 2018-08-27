#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "iGraphics.h"
#include "bitmap_loader.h"
#include "myPictureLoader.h" 
#include "workingFunctions.h"



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

	else if(coverImage==21)
		trophyWc();				//trophyWc() is defined in worldCup.h header file and return type is void
		
}	



void iPassiveMouse(int x, int y)
{
	printf("x = %d , y = %d , CoverImage = %d , gk = %d , ballx = %d , bally = %d\n", x, y,coverImage,gk_dive,ballMoveX,ballMoveY);   //print the value of co-ordinates (x,y) and game states value in console.... 
	
	makeIPassiveSmall(x,y);
	
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
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
	
		makeIMouseSmall(mx,my);
	
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
	if((coverImage==17 && challenge_mode && writeName ) && ((key>='a' && key<='z' ) || (key>='A' && key<='Z')))     //write name for challenge mode
	{
		if(key>='a' && key<='z')
			key = key - 32;
		if(strlen(userDataChallenge.userName)<10)
		{
			int i = strlen(userDataChallenge.userName);
			userDataChallenge.userName[i] = key;
			userDataChallenge.userName[i+1] = '\0';
		}
		
	}

	else if((coverImage==21 && final && writeName ) && ((key>='a' && key<='z' ) || (key>='A' && key<='Z')))     //write name for world cup mode
	{
		if(key>='a' && key<='z')
			key = key - 32;
		if(strlen(userGlory.userName)<10)
		{
			int i = strlen(userGlory.userName);
			userGlory.userName[i] = key;
			userGlory.userName[i+1] = '\0';
		}
		
	}

	else if(key == 'c' && coverImage==16)
	{
		if(coverImage==16 && powerRun2 == true && !keyType && !glovesRun)        //choose  x-axis for shooting  the ball
		{
			
			ballMove(powerRectangle1,powerRectangle2);
			playerRun = true;
			powerRun2 = false;
			keyType = true;
		}

		if(coverImage==16 && powerRun1 ==false && !keyType && !glovesRun )		//choose  y-axis for shooting  the ball
		{
			powerRun2 = true;
			powerRun1 = true;
			redPower = true;
			gk_dive = rand()%8;
		}
	}
	
	else if (key == 'd' && coverImage==16)										//goal kepper save
	{
		 if(( !keyType && teamType) && (single_mode || worldCup_mode))
		 {
			powerRectangle1 = rand()%6;
			if(powerRectangle1 == 1)
				powerRectangle1 = 22;
			else if(powerRectangle1 == 2)
				powerRectangle1 = 44;
			else if(powerRectangle1 == 3)
				powerRectangle1 = 66;
			else if(powerRectangle1 == 4)
				powerRectangle1 = 88;
			else if(powerRectangle1 == 5)
				powerRectangle1 = 110;

			if(!round16orHigher)
				powerRectangle2 = (rand()%800) + 300;
			else
				powerRectangle2 = (rand()%650) + 347;

			ballMove(powerRectangle1,powerRectangle2);

			glovesRun = false;
			if(glovesRender == 0)
				gk_dive = 2;
			else if(glovesRender == 1)
				gk_dive = 3;
			else if(glovesRender == 2)
				gk_dive = 5;
			else if(glovesRender == 3)
				gk_dive = 0;
			else if(glovesRender == 4)
				gk_dive = 6;
			else if(glovesRender == 5)
				gk_dive = 4;
			else if(glovesRender == 6)
				gk_dive = 1;
			
			playerRun = true;
			redPower = true;
			powerRun2 = false;
			powerRun1 = true;
			keyType = true;
		}
	}
	
	
	
		
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
		
	}
	//place your codes for other keys here
}


int main()
{
	
	printf("Please wait 2 minutes.....All data is loading.\n\n");
	printf("It is a 2D Penalty Shootout game. There are three mode in this game.\nFriendly,Challenge and most exciting World Cup mode.\n\n");
	printf("In Friendly mode, You can play Single Player and Multi Player match.\n");
	printf("In Challenge mode, You can play the game for 60 seconds.\nIn that time, You can score as many goal as you can.\n");
	printf("In World Cup mode, You can play the game like Fifa World Cup 2018.\n");

	iInitialize(screen_length,screen_width,"Fifa Penalty Shootout '18");


	//iSetTimer(int msec,void(*f)(void)) calls the specified function f() again and again automatically after the specified time interval msec.

	loadingTimer =iSetTimer(700,loadingFunction);     //Loading Function is defined in workingFunctions.h header file and is used to show loading bar... 
	power_timer1 = iSetTimer(80,powerRun1Timer);	  //powerRun1Timer is used to select x-axis for shooting a ball
	power_timer2 = iSetTimer(5,powerRun2Timer);		  //powerRun1Timer is used to select y-axis for shooting a ball
	player_timer = iSetTimer(250,playerTimer);        //playerTimer Function is defined in gameFunctions.h hedaer file and is used to change the player picture
	gk_timer = iSetTimer(350,gkTimer);				  //gkTimer Function is defined in gameFunctions.h hedaer file and is used to stand the Goal Kepper picture
	ball_timer = iSetTimer(75, ballTimer);			  //playerTimer Function is defined in gameFunctions.h hedaer file and is used to change the ball co-ordinates
	gk_dive_timer = iSetTimer(260, gkRunning);		  //gkRunning  Function is defined in gameFunctions.h hedaer file and is used to make diving for Goal Kepper
	victory_timer = iSetTimer(350, victoryRunning);   //victoryRunning Function is used to change the value of player after a successful shot
	watch_timer = iSetTimer(2500, watchRunning);	  //watchRunning Function is used to make a stop watch in challenge mode
	gloves_timer = iSetTimer(800, glovesRunning);	  //glovesRunning Function is used to select the save part of a goal kepper
	


	pictureLoading();								  //pictureloading function loads all the picture which is defined in myPictureLoader.h header file.
	loadingPlayer();								  //loadingPlayer function loads the all players name from "PlayerList.bin" file which is defined in playerLoadFile.h header file
	defaultTeamDataWc();							  //defaultTeamDataWc function loads the initial value of worldCup mode
									  
	playingSound();	

	iStart(); // it will start drawing

	return 0;
}

