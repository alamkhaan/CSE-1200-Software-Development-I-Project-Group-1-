//#include "iGraphics.h"
//#include "myVariables.h"
#include "gameFunctions.h"
#include "friendly.h"
#include "worldCup.h"
#include "challenge.h"
#include "playerLoadFile.h"
#include "blink.h"

int loadingRectanglesize = 20;
void loadingFunction();
void teamSelection();
void loadingPlayer();

void LoadingPage()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[0]);
	iSetColor(0,0,255);
	iFilledRectangle(550,120,200,30);
	iSetColor(255,255,255);
	iFilledRectangle(550,120,loadingRectanglesize,30);

	if(loadingRectanglesize>=200)
	{
		iPauseTimer(0);
		coverImage++;
		
	}
	
	
}
void loadingFunction()
{
	
	loadingRectanglesize += 20;
	
}


void MainMenuPage()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[1]);
	blinkRectanglePage1(mousePointX , mousePointY);

	if(quitButton ==true)
	{
		iShowImage(0,0,screen_length,screen_width,blurCoverPage);
		iShowImage(400,150,600,400,quitPicture);
		blinkQuit(mousePointX , mousePointY);
	}
}

void nextPicture()
{
	iShowImage(1160,300,140,70,next_picture);
}



void backPicture()
{
	iShowImage(45,635,75,40,back_picture);
}










void GameModePage()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[2]);
	blinkRectanglePage2(mousePointX , mousePointY);
}


void HelpPage()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[3]);
	backPicture();
	blinkBack(mousePointX , mousePointY);
}

void AboutPage()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[4]);
	backPicture();
	blinkBack(mousePointX , mousePointY);
}

void FriendlyModePage()
{
	friendlyStarts();
	
}

void WorldCupModePage()
{
	worldCupStarts();
	
}

void ChallengeModePage()
{
	
	challengeStarts();
}

void OwnTeamSelection()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[8]);
	blinkTeam(mousePointX , mousePointY);
	
}

void OpponentTeamSelection()
{
	
	iShowImage(0,0,screen_length,screen_width,coverPage[9]);
	blinkTeam(mousePointX , mousePointY);
}

void StadiumSelection()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[10]);
	iSetColor(255,255,255);

	iText(100,325,StadiumName[0],GLUT_BITMAP_TIMES_ROMAN_24);
	iText(100,295,"Capacity: 81044",GLUT_BITMAP_TIMES_ROMAN_24);

	iText(495,325,StadiumName[1],GLUT_BITMAP_TIMES_ROMAN_24);
	iText(495,295,"Capacity: 41560",GLUT_BITMAP_TIMES_ROMAN_24);

	iText(900,325,StadiumName[2],GLUT_BITMAP_TIMES_ROMAN_24);
	iText(900,295,"Capacity: 99354",GLUT_BITMAP_TIMES_ROMAN_24);

	iText(100,60,StadiumName[3],GLUT_BITMAP_TIMES_ROMAN_24);
	iText(100,30,"Capacity: 81000",GLUT_BITMAP_TIMES_ROMAN_24);

	iText(495,60,StadiumName[4],GLUT_BITMAP_TIMES_ROMAN_24);
	iText(495,30,"Capacity: 74094",GLUT_BITMAP_TIMES_ROMAN_24);

	iText(900,60,StadiumName[5],GLUT_BITMAP_TIMES_ROMAN_24);
	iText(900,30,"Capacity: 36000",GLUT_BITMAP_TIMES_ROMAN_24);

	iShowImage(845,365,stadium3X,stadium3Y,stadium[2]);
	iShowImage(450,365,stadium2X,stadium2Y,stadium[1]);
	iShowImage(65,365,stadium1X,stadium1Y,stadium[0]);
	iShowImage(845,100,stadium6X,stadium6Y,stadium[5]);
	iShowImage(450,100,stadium5X,stadium5Y,stadium[4]);
	iShowImage(65,100,stadium4X,stadium4Y,stadium[3]);
	

}

void GamePicturePage()
{
	
	iShowImage(0,0,screen_length,screen_width,coverPage[16]);
	backPicture();
	blinkBack(mousePointX , mousePointY);
	mainGame();
}

void MatchStartSummary()
{
	
	iShowImage(0,0,screen_length,screen_width,coverPage[11]);
	iSetColor(0,0,0);
	if(world_cup_team_selection==true)
	{
		iShowImage(345,450,170,100,flag[worldCupOwnTeam]);
		iShowImage(825,450,170,100,flag[worldCupOpponentTeam]);
		iText(370,410,player[worldCupOwnTeam].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(850,410,player[worldCupOpponentTeam].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(555,320,StadiumName[worldCupStadiumNumber],GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else
	{
		iShowImage(345,450,170,100,flag[yourTeamNumber]);
		iShowImage(825,450,170,100,flag[opponentTeamNumber]);
		iText(370,410,player[yourTeamNumber].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(850,410,player[opponentTeamNumber].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(555,320,StadiumName[stadiumNumber],GLUT_BITMAP_TIMES_ROMAN_24);
	
	}

	nextPicture();
	blinkNext(mousePointX , mousePointY);

}

void MatchEndSummary()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[17]);

}

void OwnTeamLineUp()
{
	if(world_cup_team_selection==true)
	{
		iShowImage(0,0,screen_length,screen_width,lineUps[worldCupOwnTeam]);
	}
	else
	{
		iShowImage(0,0,screen_length,screen_width,lineUps[yourTeamNumber]);
	}
	nextPicture();
	blinkNext(mousePointX , mousePointY);

}

void OpponentTeamLineUp()
{
	if(world_cup_team_selection==true)
	{
		iShowImage(0,0,screen_length,screen_width,lineUps[worldCupOpponentTeam]);
	}
	else
	{
		iShowImage(0,0,screen_length,screen_width,lineUps[opponentTeamNumber]);
	}
	nextPicture();
	blinkNext(mousePointX , mousePointY);
}



