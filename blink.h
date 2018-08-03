//#include "workingFunctions.h"
//#include "myVariables.h"
//#include"iGraphics.h"


//makes retangles to blink in Friendly Page Button.......Called from friendlyStarts() function......return type void

void blinkFriendly(int x,int y)
{
	if(blink_friendly)
	{
		iSetColor(0,0,0);
		iRectangle(x-1,y,180,64);
		iRectangle(x,y,180,64);
		iRectangle(x+1,y,180,64);
		iRectangle(x+2,y,180,64);
		iRectangle(x+3,y,180,64);

		iRectangle(x,y,184,64);
		iRectangle(x,y+1,184,64);
		iRectangle(x,y+2,184,64);
		iRectangle(x,y+3,184,64);

	}

}

//makes retangles to blink in World Cup Page Button.......Called from worldCupStarts() function......return type void

void blinkWorldCup(int x,int y)
{
	if(blink_worldCup)
	{
	iSetColor(0,0,0);
	iRectangle(x-1,y,170,62);
	iRectangle(x,y,170,62);
	iRectangle(x+1,y,170,62);
	iRectangle(x+2,y,170,62);
	iRectangle(x+3,y,170,62);

	iRectangle(x,y,174,62);
	iRectangle(x,y+1,174,62);
	iRectangle(x,y+2,174,62);
	iRectangle(x,y+3,174,62);

	}

}

//makes retangles to blink in quit Notification Tab.......Called from MainMenuPage() function......return type void

void blinkQuit(int x , int y)
{
	if(blink_quit)
	{
		iSetColor(0,0,0);
		iRectangle(x-1,y,135,52);
		iRectangle(x,y,135,52);
		iRectangle(x+1,y,135,52);
		iRectangle(x+2,y,135,52);
		iRectangle(x+3,y,135,52);

		iRectangle(x,y,139,52);
		iRectangle(x,y+1,139,52);
		iRectangle(x,y+2,139,52);
		iRectangle(x,y+3,139,52);

	}
}

//makes retangles to blink in Main Menu Page Button.......Called from MainMenuPage() function......return type void

void blinkRectanglePage1(int x,int y)
{
	if(blink_rectangle_page1)
	{
		iSetColor(0,0,0);
		iRectangle(x-1,y,202,74);
		iRectangle(x,y,202,74);
		iRectangle(x+1,y,202,74);
		iRectangle(x+2,y,202,74);
		iRectangle(x+3,y,202,74);

		iRectangle(x,y,206,75);
		iRectangle(x,y+1,206,75);
		iRectangle(x,y+2,206,75);
		iRectangle(x,y+3,206,75);

	}
}

//makes retangles to blink for next button to switch between different pages.......Called from MatchStartsSummary(),MatchEndsSummary(),OwnTeamLineUp(),OpponentTeamLineUp(),PointTable() functions......return type void

void blinkNext(int x , int y)
{
	if(blink_next)
	{
		iSetColor(0,0,0);
		iRectangle(x-1,y,140,70);
		iRectangle(x,y,140,70);
		iRectangle(x+1,y,140,70);
		iRectangle(x+2,y,140,70);
		iRectangle(x+3,y,140,70);

		iRectangle(x,y,144,70);
		iRectangle(x,y+1,144,70);
		iRectangle(x,y+2,144,70);
		iRectangle(x,y+3,144,70);

	}
}

//makes retangles to blink for back button to return previous page.......Called from many functions....return type void

void blinkBack(int x , int y)
{
	if(blink_back)
	{
		iSetColor(0,0,0);
		iRectangle(x-1,y,75,40);
		iRectangle(x,y,75,40);
		iRectangle(x+1,y,75,40);
		iRectangle(x+2,y,75,40);
		iRectangle(x+3,y,75,40);

		iRectangle(x,y,79,40);
		iRectangle(x,y+1,79,40);
		iRectangle(x,y+2,79,40);
		iRectangle(x,y+3,79,40);

	}
}

//makes retangles to blink in Game Mode Page Button.......Called from MainMenuPage() function......return type void


void blinkRectanglePage2(int x,int y)
{
	if(blink_rectangle_page2)
	{
		iSetColor(0,0,0);
		iRectangle(x-1,y,189,68);
		iRectangle(x,y,189,68);
		iRectangle(x+1,y,189,68);
		iRectangle(x+2,y,189,68);
		iRectangle(x+3,y,189,68);

		iRectangle(x,y,193,69);
		iRectangle(x,y+1,193,69);
		iRectangle(x,y+2,193,69);
		iRectangle(x,y+3,193,69);

	}
}


//makes retangles to blink in Team Selection Pages.......Called from OwnTeamSelection() and OpponentTeamSelection() function......return type void

void blinkTeam(int x , int y)
{
	if(blink_team)
	{
		iSetColor(0,0,0);
		iRectangle(x-1,y,96,60);
		iRectangle(x,y,96,60);
		iRectangle(x+1,y,96,60);
		iRectangle(x+2,y,96,60);
		iRectangle(x+3,y,96,60);

		iRectangle(x,y,100,60);
		iRectangle(x,y+1,100,60);
		iRectangle(x,y+2,100,60);
		iRectangle(x,y+3,100,60);

	}
}


//makes retangles to blink in Challenge Mode Page Button.......Called from challengeStarts() function......return type void

void blinkChallenge(int x , int y)
{
	if(blink_challenge)
	{
		iSetColor(0,0,0);
		iRectangle(x-1,y,164,58);
		iRectangle(x,y,164,58);
		iRectangle(x+1,y,164,58);
		iRectangle(x+2,y,164,58);
		iRectangle(x+3,y,164,58);

		iRectangle(x,y,168,58);
		iRectangle(x,y+1,168,58);
		iRectangle(x,y+2,168,58);
		iRectangle(x,y+3,168,58);

	}
}


