//#include "workingFunctions.h"

void blinkFriendly(int x,int y);

//friendlyStarts() starts the friendly mode .....called from iDraw() function....return type void

void friendlyStarts()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[5]);
	blinkFriendly(mousePointX , mousePointY);
	
}