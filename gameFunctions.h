

void playerRunning();
void ballRunning();
void ballTimer();
void gkDive();

int scX = 350;

int gk_dive = 0;

int gkMoveX = 645;
int gkMoveY = 335;

int ballMoveX =673;
int ballMoveY =168;

int gkRightRenderOwn = 0;
int gkLeftRenderOwn = 0;


//mainGame() function works to move ball,player and gk.........Called from GamePicturePage() function......return type void

void mainGame()
{
	iShowImage(ballMoveX,ballMoveY,30,30,ballPicture);
	if(gkRun==true)
		iShowImage(0,0,screen_length,screen_width,ownGk[gkRender]);
	
	ballRunning();
	gkDive();
	playerRunning();
}


//gkDive() function works to dive gk.........Called from mainGame() function......return type void

void gkDive()
{
	
	if(gk_dive%2 == 1 && gkRun==false)
	{
		iShowImage(0,0,screen_length,screen_width,ownGkRight[gkRightRenderOwn]);
	}
	else if(gk_dive%2 ==0 && gkRun==false)
	{
		iShowImage(0,0,screen_length,screen_width,ownGkLeft[gkLeftRenderOwn]);
	}
	
}

//gkTimer() function works to change the gk picture while standing.........Called again and again from main() function......return type void

void gkTimer()
{
	if(coverImage==16 && gkRun==true)
	{
		if(gkRender==3)
			gkRender = 0;
		else gkRender++;
	}
}

//gkRunning() function works to change the gk picture while diving.........Called again and again from main() function......return type void

void gkRunning()
{
	if(gk_dive%2==1 && gkRun==false)
	{
		if(gkRightRenderOwn == 5)
		{
			iPauseTimer(gk_dive_timer_own);
		
		}
		else gkRightRenderOwn++;
	}

	else if(gk_dive%2==0 && gkRun==false)
	{
		if(gkLeftRenderOwn == 8)
		{
			iPauseTimer(gk_dive_timer_own);
		
		}

		else gkLeftRenderOwn++;
	}
}

//ballTimer() function works to change the co-ordinates of ball.........Called again and again from main() function......return type void

void ballTimer()
{
	if(ballMoveX > 940)
	{
		
			ballRun = false;
	}
	
	if(ballRun)
	{
		
		ballMoveX+= 25;
		ballMoveY+= 25;
	}
	

}

//ballRunning() function works to start ball moving.........Called mainGame() function......return type void

void ballRunning()
{
	if(playerRender == 14)
	{
		ballRun = true;
		gkRun = false;
	}
	
}

//playerTimer() function works to change the Player Picture.........Called again and again from main() function......return type void

void playerTimer()
{
	if(playerRun)
	{
		if(playerRender==20)
			playerRun = false;
		else playerRender++;

	}
}

//playerRunning() function works to show the Player Picture.........Called mainGame() function......return type void

void playerRunning()
{
	iShowImage(0,0,screen_length,screen_width,ownTeamPlayer[playerRender]);
}
