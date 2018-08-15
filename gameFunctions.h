

void resetValues();
void victoryPicture();
void playerRunning();
void ballRunning();
void ballTimer();
void gkDive();
void powerRun1Timer();
void powerRun2Timer();
void blinkPower();

int scX = 350;

int gk_dive = 0;

int gkMoveX = 645;
int gkMoveY = 335;
int pauseBall = 0;

int ballGo = 0;
int ballMoveX =673;
int ballMoveY =168;
int ballSizeX = 35;
int ballSizeY = 35;
int ballShadowX = 668;
int ballShadowY = 165;
int ballShadowSizeX = 40;
int ballShadowSizeY = 15;
int calculateBallMoveX = 0;
int calculateBallMoveY = 0;

int gkMoveRender = 0;
int victoryRender = 0;

int powerRectangle1 = 0;
int powerRectangle2 = 30;
int power2length = 20;




//mainGame() function works to move ball,player and gk.........Called from GamePicturePage() function......return type void

void mainGame()
{
	iShowImage(ballShadowX,ballShadowY,ballShadowSizeX,ballShadowSizeY,ballShadow);
	iShowImage(ballMoveX,ballMoveY,ballSizeX,ballSizeY,ballPicture);
	
	if(teamType)
	{
		if(gkRun)
			iShowImage(-200,-150,screen_length+450,screen_width+290,opponentGk[gkRender]);
	}
	else if(!teamType)
	{
		if(gkRun)
			iShowImage(10,-10,screen_length,screen_width,ownGk[gkRender]);
	}

	blinkPower();

	
	iSetColor(255,0,0);
	iFilledRectangle(1170,130,50,powerRectangle1);
		


	if(redPower)
	{
		iSetColor(255,0,0);
		iFilledRectangle(powerRectangle2,346,15,10);

	}
	
	ballRunning();
	gkDive();
	playerRunning();
	victoryPicture();
	
}


//gkDive() function works to dive gk.........Called from mainGame() function......return type void

void gkDive()
{
	
	if(gk_dive == 1 && gkRun==false)
	{
		if(teamType)
		{
			iShowImage(-30,0,screen_length,screen_width,opponentGkRight[gkMoveRender]);
		}
		else if(!teamType)
		{
			iShowImage(0,0,screen_length,screen_width,ownGkRight[gkMoveRender]);
		}
	}

	else if(gk_dive == 2 && gkRun==false)
	{
		if(teamType)
		{
			iShowImage(30,0,screen_length,screen_width,opponentGkLeft[gkMoveRender]);
		}
		else if(!teamType)
		{
			iShowImage(0,0,screen_length,screen_width,ownGkLeft[gkMoveRender]);
		}
	}
	
	else if((gk_dive == 3 ||  gk_dive == 5) && gkRun==false)
	{
		
		if(teamType)
		{
			iShowImage(0,0,screen_length,screen_width,opponentMidLeft[gkMoveRender]);
		}
		else if(!teamType)
		{
			iShowImage(0,0,screen_length,screen_width,ownMidLeft[gkMoveRender]);
		}
	}
	
	else if((gk_dive == 4 ||  gk_dive == 6) && gkRun==false)
	{
		
		if(teamType)
		{
			iShowImage(0,0,screen_length,screen_width,opponentMidRight[gkMoveRender]);
		}
		else if(!teamType)
		{
			iShowImage(0,0,screen_length,screen_width,ownMidRight[gkMoveRender]);
		}
	}

	else if(gk_dive == 0 && gkRun==false)
	{

		if(teamType)
		{
			iShowImage(-200,-150,screen_length+450,screen_width+290,opponentGk[1]);
		}
		else if(!teamType)
		{
			iShowImage(10,-10,screen_length,screen_width,ownGk[0]);
		}
	}
	
	
}

//gkTimer() function works to change the gk picture while standing.........Called again and again from main() function......return type void

void gkTimer()
{
	if(coverImage==16 && gkRun==true && teamType)
	{
		if(gkRender==5)
			gkRender = 0;
		else gkRender++;
	}

	else if(coverImage==16 && gkRun==true && teamType==false)
	{
		if(gkRender==3)
			gkRender = 0;
		else gkRender++;
	}
}

//gkRunning() function works to change the gk picture while diving.........Called again and again from main() function......return type void

void gkRunning()
{
	if((gk_dive == 1 || gk_dive == 2) &&  !gkRun  && teamType)
	{
		if(gkMoveRender == 6)
		{
			iPauseTimer(gk_dive_timer);
		
		}
		else gkMoveRender++;
	}

	else if((gk_dive == 3 || gk_dive == 4 || gk_dive == 5 || gk_dive == 6) && !gkRun  && teamType)
	{
		if(gkMoveRender == 7)
		{
			iPauseTimer(gk_dive_timer);
		
		}

		else if(gkMoveRender == 2 && (gk_dive == 3 || gk_dive == 4))
			gkMoveRender = 4;

		else if(gkMoveRender == 3 && (gk_dive == 5 || gk_dive == 6))
			gkMoveRender = 5;

		else gkMoveRender++;
	}

	else if(gk_dive == 0 && !gkRun  && teamType)
	{
		iPauseTimer(gk_dive_timer);
	}

	else if(gk_dive == 1  &&  !gkRun  && !teamType)
	{
		if(gkMoveRender == 5)
		{
			iPauseTimer(gk_dive_timer);
		
		}
		else gkMoveRender++;
	}

	else if(gk_dive == 2  &&  !gkRun  && !teamType)
	{
		if(gkMoveRender == 6)
		{
			iPauseTimer(gk_dive_timer);
		
		}
		else gkMoveRender++;
	}

	else if((gk_dive == 3 || gk_dive == 4  || gk_dive == 5 || gk_dive == 6) && !gkRun  && !teamType)
	{
		if(gkMoveRender == 6)
		{
			iPauseTimer(gk_dive_timer);
		
		}

		else if(gkMoveRender == 2 && (gk_dive == 3 || gk_dive == 4))
			gkMoveRender = 4;

		else if(gkMoveRender == 3 && (gk_dive == 5 || gk_dive == 6))
			gkMoveRender = 5;

		else gkMoveRender++;
	}

	else if(gk_dive == 0 && !gkRun  && !teamType)
	{
		iPauseTimer(gk_dive_timer);
	}
}

//ballTimer() function works to change the co-ordinates of ball.........Called again and again from main() function......return type void

void ballTimer()
{
	if(ballMoveY > pauseBall  && ballRun)
	{
		if((gk_dive == 1 || gk_dive == 4) && powerRectangle1==22 && ballMoveX>=800 && ballMoveX<=985)
		{
			ballGo = 1;
			ballRun = false;
		}

		else if((gk_dive == 2 || gk_dive == 3) && powerRectangle1==22 && ballMoveX>=347 && ballMoveX<=547)
		{
			ballGo = 2;
			ballRun = false;
		}

		else if((gk_dive == 2 || gk_dive == 3  || gk_dive == 5)  && powerRectangle1==44 && ballMoveX>=347 && ballMoveX<=547)
		{
			ballGo = 2;
			ballRun = false;
		}

		else if((gk_dive == 4 || gk_dive == 1  || gk_dive == 6) && powerRectangle1==44 && ballMoveX>=800 && ballMoveX<=985)
		{
			ballGo = 1;
			ballRun = false;
		}

		else if((gk_dive == 5 || gk_dive == 3) && powerRectangle1==66 && ballMoveX>=347 && ballMoveX<=547)
		{
			ballGo = 2;
			ballRun = false;
		}

		else if((gk_dive == 4 || gk_dive == 6)  &&  powerRectangle1==66 && ballMoveX>=800 && ballMoveX<=985)
		{
			ballGo = 1;
			ballRun = false;
		}

		else if((gk_dive == 0  && ballMoveX>=547 && ballMoveX<=800) && (powerRectangle1==22 || powerRectangle1==44 || powerRectangle1==66))
		{
			ballGo = 1;
			ballRun = false;
		}

		else if(powerRectangle1==88  && ballMoveX>315  &&  ballMoveX<1013)
		{
			ballGo = 4;
			ballRun = false;
		}

		else if(powerRectangle1==110)
		{
			ballGo = 3;
			ballRun = false;
		}

		else if(powerRectangle1!=22  && powerRectangle1!=110 && ballMoveX<315)
		{
			ballGo = 2;
			ballRun = false;
		}
		else if(powerRectangle1!=22  && powerRectangle1!=110 &&  ballMoveX>1013)
		{
			ballGo = 1;
			ballRun = false;
		}

		else if(powerRectangle1!=22 && powerRectangle1!=120 && ballMoveX>=315  && ballMoveX<=346)
		{
			ballGo = 2;
			ballRun = false;
		}

		else if(powerRectangle1!=22 && powerRectangle1!=120 && ballMoveX>=1001  && ballMoveX<=1012)
		{
			ballGo = 1;
			ballRun = false;
		}

		else if(powerRectangle1==22)
		{
			ballRun = false;
			iPauseTimer(ball_timer);
			resetValues();
		}

		else 
		{
			//iText(700,50,"G O A L",GLUT_BITMAP_TIMES_ROMAN_24);
			ballGo = 5;
			ballRun = false;

		}



		
	}
	
	else if(ballRun)
	{
		
		ballMoveX+= calculateBallMoveX;
		ballMoveY+= calculateBallMoveY;

		ballSizeX--;
		ballSizeY--;

		ballShadowX+= (powerRectangle2-668)/10;

		if(powerRectangle1== 0)
			ballShadowY+= (290-165)/10;
		else
			ballShadowY+= (346-165)/10;

		ballShadowSizeX--;
		ballShadowSizeY--;
	}

	else if(ballGo==1)
	{
		ballMoveX+= 35;
		ballShadowX+= 35;
		if(ballMoveX > 3000)
			resetValues();
	}

	else if(ballGo==2)
	{
		ballMoveX-= 35;
		ballShadowX-= 35;

		if(ballMoveX < -3000)
			resetValues();
	}

	else if(ballGo==3)
	{
		ballMoveX+= calculateBallMoveX;
		ballMoveY+= calculateBallMoveY;
		ballShadowX+= (powerRectangle2-668)/10;
		ballShadowY+= (346-165)/10;

		if(ballMoveX > 3000)
			resetValues();
	}

	else if(ballGo==4)
	{
		ballMoveY+= 25;

		if(ballMoveY > 2000)
			resetValues();
	}

	else if(ballGo==5)
	{
		ballMoveY-= 15;
		if(ballMoveY<=370)
		{
			playerVictory = true;
			iPauseTimer(ball_timer);
		}
	}
	
}

//ballRunning() function works to start ball moving.........Called mainGame() function......return type void

void ballRunning()
{
	if((playerRender == 13  && teamType) ||(playerRender == 14  && !teamType))
	{
		ballRun = true;
		gkRun = false;
		redPower = false;
	}
	
}

//playerTimer() function works to change the Player Picture.........Called again and again from main() function......return type void

void playerTimer()
{
	if(playerRun  && teamType)
	{
		if(playerRender==17)
			playerRun = false;
		else playerRender++;

	}

	else if(playerRun  && !teamType)
	{
		if(playerRender == 20)
			playerRun = false;
		else playerRender++;
	}
}

//playerRunning() function works to show the Player Picture.........Called mainGame() function......return type void

void playerRunning()
{
	if(teamType  && !playerVictory)
	{
		iShowImage(60,0,screen_length,screen_width+60,opponentTeamPlayer[playerRender]);
	}
	else if(!teamType  &&  !playerVictory)
	{
		iShowImage(0,0,screen_length,screen_width,ownTeamPlayer[playerRender]);
	}
}


void powerRun1Timer()
{
	if(coverImage==16 && powerRun1==false)
	{
		powerRectangle1 += 22;

		if(powerRectangle1>110)
			powerRectangle1 = 0;

	}
}

void powerRun2Timer()
{
	if(coverImage==16 && powerRun2==true)
		{
			powerRectangle2 += power2length;

			if(powerRectangle2<=20 || powerRectangle2>=1260)
				power2length =  -power2length;
		}
}


void ballMove(int setBallY,int setBallX)
{

	if(setBallY==0)
	{
		pauseBall = 290;
		calculateBallMoveY = (290-168)/10;
	}
	else if(setBallY==22)
	{
		pauseBall = 345;
		calculateBallMoveY = (345-168)/10;
	}
	else if(setBallY==44)
	{
		pauseBall = 415;
		calculateBallMoveY = (415-168)/10;
	}
	else if(setBallY==66)
	{
		pauseBall = 465;
		calculateBallMoveY = (465-168)/10;
	}
	else if(setBallY==88)
	{
		pauseBall = 495;
		calculateBallMoveY = (495-168)/10;
	}
	else if(setBallY==110)
	{
		pauseBall = 600;
		calculateBallMoveY = (600-168)/10;
	}
	
	calculateBallMoveX = (setBallX-673)/10;
	
}

void victoryPicture()
{
	
	if(teamType && playerVictory)
	{
		iShowImage(60,0,screen_length,screen_width+60,opponentVictory[victoryRender]);
	}
	else if(!teamType  &&  playerVictory)
	{
		iShowImage(0,0,screen_length,screen_width,ownVictory[victoryRender]);
	}
}

void victoryRunning()
{
	
	if(teamType && playerVictory)
	{
		victoryRender++;
		if(victoryRender==8)
		{
			playerVictory = false;
			resetValues();
		}

	}
	else if(!teamType  && playerVictory)
	{
		victoryRender++;
		if(victoryRender==10)
		{
			playerVictory = false;	
			resetValues();
		}
	}

}

void resetValues()
{

	if(keyType)
	{
		gkRun = true;
		ballMoveX =673;
		ballMoveY =168;
		playerRender = 0;
		ballRun = false;
		gkMoveRender = 0;
		powerRun1 = false;
		powerRun2 = false;
		iResumeTimer(gk_dive_timer);
		iResumeTimer(ball_timer);
		powerRectangle2 = 30;
		ballShadowX = 668;
		ballShadowY = 165;
		ballSizeX = 35;
		ballSizeY = 35;
		gkRender = 0;
		ballGo = 0;

		if(teamType)
			teamType = false;
		else if(!teamType)
			teamType = true;

		ballShadowSizeX = 40;
		ballShadowSizeY = 15;

		victoryRender = 0;

		keyType = false;
	}
}
