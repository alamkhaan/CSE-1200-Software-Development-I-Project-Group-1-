//#include "iGraphics.h"
#include "myVariables.h"



//pictureLoading() function Loads all the pictures....Called from Main() function......return type void

void pictureLoading()
{
	back_picture = iLoadImage("images\\back.png") ;       
	next_picture = iLoadImage("images\\next.png") ; 
	ballPicture = iLoadImage("images\\ball.jpg") ; 
	quitPicture = iLoadImage("images\\quit.png") ; 
	ballShadow = iLoadImage("images\\ballShadow1.png") ; 
	blurCoverPage = iLoadImage("images\\cover\\blurCoverPage2.png") ;
	tempo = iLoadImage("images//cover//coverPage17.jpg");
	/*
	
	for (int i = 0; i < 18; i++)
	{
		coverPage[i] =  iLoadImage(cover[i]) ; 
	}

	*/
	for (int i = 0; i < 21; i++)
	{
		ownTeamPlayer[i] = iLoadImage(own_team_player[i]);
	}
	
	for (int i = 0 ; i<11 ; i++)
	{
		ownVictory[i] =  iLoadImage(own_victory[i]);
	}

	for (int i = 0 ; i< 4 ; i++)
	{
		ownGk[i] = iLoadImage(own_gk[i]);
	}
	

	for (int i = 0; i < 6; i++)
	{
		ownGkRight[i] = iLoadImage(own_gk_right[i]);
	}
	

	for (int i = 0; i < 7; i++)
	{
		ownGkLeft[i] = iLoadImage(own_gk_left[i]);
	}


	for (int i = 0; i < 7; i++)
	{
		ownMidLeft[i] = iLoadImage(own_mid_left[i]);
	}

	
	for (int i = 0; i < 7; i++)
	{
		ownMidRight[i] = iLoadImage(own_mid_right[i]);
	}
	
	
	for (int i = 0; i < 18; i++)
	{
		opponentTeamPlayer[i] = iLoadImage(opponent_team_player[i]);
	}

	for (int i = 0 ; i<9 ; i++)
	{
		opponentVictory[i] =  iLoadImage(opponent_victory[i]);
	}
	
 
	for (int i = 0 ; i< 6 ; i++)
	{
		opponentGk[i] = iLoadImage(opponent_gk[i]);
	}
	

	for (int i = 0; i < 7; i++)
	{
		opponentGkRight[i] = iLoadImage(opponent_gk_right[i]);
	}
	

	for (int i = 0; i < 7; i++)
	{
		opponentGkLeft[i] = iLoadImage(opponent_gk_left[i]);
	}

	
	for (int i = 0; i < 8; i++)
	{
		opponentMidLeft[i] = iLoadImage(opponent_mid_left[i]);
	}


	for (int i = 0; i < 8; i++)
	{
		opponentMidRight[i] = iLoadImage(opponent_mid_right[i]);
	}



	/*
	for (int i = 0; i < 32; i++)
	{
		flag[i] = iLoadImage(flag_[i]);
		lineUps[i] = iLoadImage(line_ups[i]);
	}

	for (int i = 0; i < 6; i++)
	{
		stadium[i] = iLoadImage(stadium_[i]);
	}

	for (int i = 0; i < 8; i++)
	{
		worldCupGroup[i] = iLoadImage(world_cup_group[i]);
	}
	*/
 }
