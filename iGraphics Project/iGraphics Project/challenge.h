#ifndef CHALLENGE_H
#define CHALLENGE_H


#include "playerLoadFile.h"


void blinkChallenge(int x,int y);
void blinkBack(int x , int y);
void backPicture();



//ChallengeInstruction() shows the Instruction for Challenge Mode .....called from iDraw() function....return type void

void ChallengeInstruction()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[14]);
	backPicture();
	blinkBack(mousePointX , mousePointY);
}

//ChallengeHighScore() shows the HighScore for Challenge Mode .....called from iDraw() function....return type void

void ChallengeHighScore()
{

	iShowImage(0,0,screen_length,screen_width,coverPage[15]);
	backPicture();
	blinkBack(mousePointX , mousePointY);
	readChallengeFile();
	iSetColor(255,255,255);
	char tempString[10][10];
	char temp2[10][10];
	int positionY = 510;
	for(int i = 0;i<10;i++)
	{
		sprintf(tempString[i],"%d",i+1);
		iText(155,positionY,tempString[i],GLUT_BITMAP_TIMES_ROMAN_24);
		iText(540,positionY,score[i].userName,GLUT_BITMAP_TIMES_ROMAN_24);
		sprintf(temp2[i],"%d",score[i].userScore);
		iText(1025,positionY,temp2[i],GLUT_BITMAP_TIMES_ROMAN_24);

		positionY -= 40;
	}
	
}

//challengeStarts starts the Challenge Mode Page.....called from iDraw() function....return type void

void challengeStarts()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[7]);
	blinkChallenge(mousePointX , mousePointY);
}


#endif