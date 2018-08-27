#ifndef WORKING_FUNCTIONS_H
#define WORKING_FUNCTIONS_H


#include "myVariables.h"
#include "gameFunctions.h"
#include "friendly.h"
#include "worldCup.h"
#include "challenge.h"
#include "blink.h"
#include "iPassiveMouseWork.h"
#include "iMouseWork.h"


int loadingRectanglesize = 20;
char loadingPercentageText[10];
void loadingFunction();
void teamSelection();
void loadingPlayer();
int matchOpponent(int x);


//LoadingPage function calls when loading starts
//return type void

void LoadingPage()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[0]);
	iSetColor(0,0,255);
	iFilledRectangle(550,120,200,30);
	iSetColor(255,255,255);
	iFilledRectangle(550,120,loadingRectanglesize,30);
	sprintf(loadingPercentageText,"%d %%",loadingRectanglesize/2);
	iText(800,120,loadingPercentageText,GLUT_BITMAP_TIMES_ROMAN_24);

	if(loadingRectanglesize>=200)
	{
		iPauseTimer(0);
		coverImage++;
		
	}

}

//loadingFunction is used to move the loading bar in loading page
//return type void


void loadingFunction()
{
	
	loadingRectanglesize += 20;
	
}


//MainMenuPage function is called when main menu opens
//return type void

void MainMenuPage()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[1]);
	blinkRectanglePage1(mousePointX , mousePointY);

	if(checkSound)
		iShowImage(1120,65,140,70,soundOn);
	else
		iShowImage(1120,65,140,70,soundOff);

	if(quitButton ==true)
	{
		iShowImage(0,0,screen_length,screen_width,blurCoverPage);
		iShowImage(400,150,600,400,quitPicture);
		blinkQuit(mousePointX , mousePointY);
	}

	else
		blinkNext(mousePointX , mousePointY);
}


//nextPicture function is used to show the next button
//return type void


void nextPicture()
{
	iShowImage(1160,300,140,70,next_picture);
}


//backPicture function is used to show the back button
//return type void

void backPicture()
{
	iShowImage(45,635,75,40,back_picture);
}


//GameModePage function is called when game mode page opens
//return type void

void GameModePage()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[2]);
	blinkRectanglePage2(mousePointX , mousePointY);
}


//HelpPage function is called when help page opens
//return type void

void HelpPage()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[3]);
	backPicture();
	blinkBack(mousePointX , mousePointY);
}



//AboutPage function is called when about page opens
//return type void


void AboutPage()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[4]);
	backPicture();
	blinkBack(mousePointX , mousePointY);
}



//FriendlyModePage function is called when friendly mode page opens
//return type void

void FriendlyModePage()
{
	friendlyStarts();
	
}



//WorldCupModePage function is called when world cup mode page opens
//return type void

void WorldCupModePage()
{
	worldCupStarts();
	
}


//ChallengeModePage function is called when challenge mode page opens
//return type void

void ChallengeModePage()
{
	
	challengeStarts();
}


//OwnTeamSelection function is called when own team selection page opens
//return type void

void OwnTeamSelection()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[8]);
	blinkTeam(mousePointX , mousePointY);
	
}


//OpponentTeamSelection function is called when opponent team selection page opens
//return type void

void OpponentTeamSelection()
{
	
	iShowImage(0,0,screen_length,screen_width,coverPage[9]);
	blinkTeam(mousePointX , mousePointY);
}


//StadiumSelection function is called when stadium selection page opens
//return type void

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


//GamePicturePage function is called when game picture page(shooting)  page opens
//return type void


void GamePicturePage()
{
	
	iShowImage(0,0,screen_length,screen_width,coverPage[16]);
	backPicture();
	blinkBack(mousePointX , mousePointY);
	mainGame();
}


//MatchStartSummary function is called before starting a match and show summary data
//return type void

void MatchStartSummary()
{
	
	iShowImage(0,0,screen_length,screen_width,coverPage[11]);
	iSetColor(0,0,0);
	if(worldCup_mode)
	{
		if(groupRoundMatchNo<=3)
		{
			worldCupOpponentTeam = matchOpponent(worldCupOwnTeam);
		}
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


//MatchEndSummary function is called after a match and show summary data
//return type void


void MatchEndSummary()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[17]);
	if(challenge_mode)
	{
		iSetColor(0,0,0);
		iText(545,625,"Challenge Mode Match",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(430,545,"Your Score :- ",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(430,465,"Write Your Name :- ",GLUT_BITMAP_TIMES_ROMAN_24);

		iShowImage(740,450,210,50,blueName);
		iShowImage(740,530,210,50,blueName);

		char tempString[100];
		sprintf(tempString,"%d",userDataChallenge.userScore);
		iText(825,545,tempString,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(765,465,userDataChallenge.userName,GLUT_BITMAP_TIMES_ROMAN_24);

		if(writeName)
		{
			iText(780,430,"Use keyboard to write name",GLUT_BITMAP_HELVETICA_10);
			iShowImage(1025,430,110,35,nameEnter);
			iShowImage(1025,520,110,35,nameDelete);
		}
		else
			iText(780,430,"Click on this box to write name",GLUT_BITMAP_HELVETICA_10);

		if(userDataChallenge.userScore>= 600)
			iText(480,380,"Fantastic...You Played Just Awesome.",GLUT_BITMAP_TIMES_ROMAN_24);
		else if(userDataChallenge.userScore>= 400)
			iText(480,380,"Aww...You Played really Good",GLUT_BITMAP_TIMES_ROMAN_24);
		else if(userDataChallenge.userScore>= 200)
			iText(480,380,"Not So Bad...Better Luck Next Time",GLUT_BITMAP_TIMES_ROMAN_24);
		else if(userDataChallenge.userScore>= 0)
			iText(480,360,"You need to improve your skill",GLUT_BITMAP_TIMES_ROMAN_24);
		else if(userDataChallenge.userScore< 0)
			iText(480,380,"You are not perfect to play this game",GLUT_BITMAP_TIMES_ROMAN_24);
		

		blinkWriteNameButton(mousePointX , mousePointY);
	}

	else
	{
		iSetColor(0,0,0);

		if(worldCup_mode)
		{
			if(round16)
				iText(600,625,"Round 16 Match",GLUT_BITMAP_TIMES_ROMAN_24);
			else if(quarterFinal)
				iText(600,625,"Quarter Final Match",GLUT_BITMAP_TIMES_ROMAN_24);
			else if(semiFinal)
				iText(600,625,"Semi Final Match",GLUT_BITMAP_TIMES_ROMAN_24);
			else if(final)
				iText(600,625,"The Final Match",GLUT_BITMAP_TIMES_ROMAN_24);
			else
			{
				char tempString[100];
				sprintf(tempString,"Group Round Match - %d",groupRoundMatchNo);
				iText(580,625,tempString,GLUT_BITMAP_TIMES_ROMAN_24);
			}

			iShowImage(370,480,170,100,flag[worldCupOwnTeam]);
			iShowImage(790,480,170,100,flag[worldCupOpponentTeam]);

			iText(410,440,player[worldCupOwnTeam].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
			iText(830,440,player[worldCupOpponentTeam].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
		}

		else
		{
			if(single_mode)
				iText(600,625,"Single Match",GLUT_BITMAP_TIMES_ROMAN_24);
			else if(multiPlayer_mode)
				iText(600,625,"MultiPlayer Match",GLUT_BITMAP_TIMES_ROMAN_24);

			iShowImage(370,480,170,100,flag[yourTeamNumber]);
			iShowImage(790,480,170,100,flag[opponentTeamNumber]);
			iText(410,440,player[yourTeamNumber].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
			iText(830,440,player[opponentTeamNumber].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
		}
		
		iText(655,525,"VS",GLUT_BITMAP_TIMES_ROMAN_24);
		
		char tempString[100];
		sprintf(tempString,"%d  -  %d",ownGoalCount,opponentGoalCount);
		iText(637,440,tempString,GLUT_BITMAP_TIMES_ROMAN_24);

		if(ownGoalCount>opponentGoalCount)
		{
			iText(600,380,"You Won",GLUT_BITMAP_TIMES_ROMAN_24);
			if(round16)
				iText(555,340,"You are qualified for Quarter Final",GLUT_BITMAP_TIMES_ROMAN_24);
			else if(quarterFinal)
				iText(555,340,"You are qualified for Semi Final",GLUT_BITMAP_TIMES_ROMAN_24);
			else if(semiFinal)
				iText(555,340,"You are qualified for World Cup Final",GLUT_BITMAP_TIMES_ROMAN_24);
			else if(final)
				iText(555,340,"You are the Champion",GLUT_BITMAP_TIMES_ROMAN_24);
			else
				iText(555,340,"You are a real Hero",GLUT_BITMAP_TIMES_ROMAN_24);
		}

		else if(ownGoalCount<opponentGoalCount)
		{
			iText(600,380,"You Lose",GLUT_BITMAP_TIMES_ROMAN_24);
			iText(555,340,"You need to improve",GLUT_BITMAP_TIMES_ROMAN_24);
		}

		else if(ownGoalCount==opponentGoalCount)
		{
			iText(600,380,"Match Draw",GLUT_BITMAP_TIMES_ROMAN_24);
			iText(555,340,"Better Luck Next Time",GLUT_BITMAP_TIMES_ROMAN_24);
		}

	}

	if(!challenge_mode || (strlen(userDataChallenge.userName)>1  && !writeName))
	{
		nextPicture();
		blinkNext(mousePointX , mousePointY);
	}

}


//OwnTeamLineUp function shows own team line up
//return type void

void OwnTeamLineUp()
{
	if(worldCup_mode)
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


//OpponentTeamLineUp function shows opponent team line up
//return type void


void OpponentTeamLineUp()
{
	if(worldCup_mode)
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



//playingSound function plays background sound
//return type void


void playingSound()
{
	if(playSound)
	{
		int temp = rand()%3;

		if(temp==0  && checkSound)
			PlaySound("music//music2.wav",NULL,SND_LOOP | SND_ASYNC);
		else if(temp==1  && checkSound)
			PlaySound("music//music1.wav",NULL,SND_LOOP | SND_ASYNC);
		else if(temp==2  && checkSound)
			PlaySound("music//music3.wav",NULL,SND_LOOP | SND_ASYNC);
	
		playSound = false;
	
	}
}

#endif
