//#include "workingFunctions.h"
void blinkBack(int x , int y);
void backPicture();
void nextPicture();
void blinkNext(int x , int y);
void blinkWorldCup(int x,int y);


//WallOfGlory() shows the Champion's List Chart .....called from iDraw() function....return type void

void WallOfGlory()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[13]);
	backPicture();
	blinkBack(mousePointX , mousePointY);

}

//PointTable() shows the Bracket Chart .....called from iDraw() function....return type void

void Brackets()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[12]);
	backPicture();
	blinkBack(mousePointX , mousePointY);
}

//PointTable() shows the Point Table Chart .....called from iDraw() function....return type void

void PointTable()
{
	iShowImage(0,0,screen_length,screen_width,worldCupGroup[pointTableRender]);
	backPicture();
	blinkBack(mousePointX , mousePointY);
	nextPicture();
	blinkNext(mousePointX , mousePointY);
}


//worldCupStarts() starts the World Cup Mode .....called from iDraw() function....return type void

void worldCupStarts()
{
	
	iShowImage(0,0,screen_length,screen_width,coverPage[6]);
	blinkWorldCup(mousePointX , mousePointY);
}