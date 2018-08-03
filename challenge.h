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
}

//challengeStarts starts the Challenge Mode Page.....called from iDraw() function....return type void

void challengeStarts()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[7]);
	blinkChallenge(mousePointX , mousePointY);
}