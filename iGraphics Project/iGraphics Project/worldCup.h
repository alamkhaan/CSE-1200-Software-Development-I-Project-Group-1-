#ifndef WORLD_CUP_H
#define WORLD_CUP_H

#include "workingFunctions.h"

void blinkBack(int x , int y);
void backPicture();
void nextPicture();
void blinkNext(int x , int y);
void blinkWorldCup(int x,int y);
bool sortWcGroup(pointTable a, pointTable b);
void sortPointTable();
void fillPointData(int goal1 , int goal2 , int index1 , int index2);
void blinkWriteNameButton(int x , int y);
void blinkPTNext(int x , int y);
void defaultTeamDataWc();

//WallOfGlory() shows the Champion's List Chart .....
//called from iDraw() function....return type void

void WallOfGlory()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[13]);
	backPicture();
	blinkBack(mousePointX , mousePointY);
	readFileGlory();
	iSetColor(255,255,255);
	int point = 530;
	char temp1[10][10];
	char temp2 [10][10];
	for(int i=0; i<10 ;i++)
	{
		sprintf(temp1[i],"%d",i+1);
		iText(120,point,temp1[i],GLUT_BITMAP_TIMES_ROMAN_24);
		iText(310,point,highScoreGlory[i].userName,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(655,point,highScoreGlory[i].championTeam,GLUT_BITMAP_TIMES_ROMAN_24);
		sprintf(temp2[i],"%d",highScoreGlory[i].totalGoal);
		iText(1085,point,temp2[i],GLUT_BITMAP_TIMES_ROMAN_24);

		point -= 45;
	}

}

//PointTable() shows the Bracket Chart .....
//called from iDraw() function....return type void

void Brackets()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[12]);
	backPicture();
	blinkBack(mousePointX , mousePointY);

	iSetColor(0,0,0);

	int point1 = 15;
	int point2 = 560;
	for(int i = 0; i <16 ;i++)
	{
		if(round16orHigher)
			iText(point1,point2,player[r16[i]].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
		else iText(point1,point2,"TBA",GLUT_BITMAP_TIMES_ROMAN_24);

		if(i%2==0)
			point2 -= 50;
		else point2 -= 95;

		if(i==7)
		{
			point1 = 1130;
			point2 = 560;
		}
	}
			


		
	int point3 = 200;
	int point4 = 490;
	for(int i = 0; i <8 ;i++)
	{
		if(quarterFinal ||semiFinal || final)
			iText(point3,point4,player[qF[i]].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
		else
			iText(point3,point4,"TBA",GLUT_BITMAP_TIMES_ROMAN_24);

		if(i%2==0)
			point4 -= 50;
		else point4 -= 235;

		if(i==3)
		{
			point3 = 950;
			point4 = 490;
		}
	}
		
	if(semiFinal || final)
	{
		iText(385,350,player[sF[0]].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(385,300,player[sF[1]].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(765,350,player[sF[2]].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(765,300,player[sF[3]].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
	}

	else
	{
		iText(385,350,"TBA",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(385,300,"TBA",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(765,350,"TBA",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(765,300,"TBA",GLUT_BITMAP_TIMES_ROMAN_24);
	}
		

	if(final)
	{	
		iText(570,380,player[f[0]].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(570,330,player[f[1]].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
	}
	
	else
	{
		iText(570,380,"TBA",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(570,330,"TBA",GLUT_BITMAP_TIMES_ROMAN_24);
	}
	
	
}

//PointTable() shows the Point Table Chart .....
//called from iDraw() function....return type void

void PointTable()
{
	iShowImage(0,0,screen_length,screen_width,worldCupGroup[pointTableRender]);
	backPicture();
	blinkBack(mousePointX , mousePointY);
	iShowImage(1220,300,80,70,next_picture);
	blinkPTNext(mousePointX , mousePointY);
	iSetColor(255,255,255);
	if(pointTableRender==0)
	{
		int point = 355;
		char tempString[4][200];
		for(int i=0 ;i<4 ; i++)
		{
			iShowImage(90,point-20,120,60,flag[pt2[i].idNo]);
			iText(255,point,player[pt2[i].idNo].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
			sprintf(tempString[i],"%d                      %d                   %d                   %d                   %d                       %d",pt2[i].play,pt2[i].win,pt2[i].lose,pt2[i].draw,pt2[i].goalDiff,pt2[i].points);
			iText(480,point,tempString[i],GLUT_BITMAP_TIMES_ROMAN_24);
			point -= 90;
		}
		
	}
	else if(pointTableRender==1)
	{
		int point = 355;
		char tempString[4][200];
		for(int i=4 ;i<8 ; i++)
		{
			iShowImage(90,point-20,120,60,flag[pt2[i].idNo]);
			iText(255,point,player[pt2[i].idNo].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
			sprintf(tempString[i-4],"%d                      %d                   %d                   %d                   %d                       %d",pt2[i].play,pt2[i].win,pt2[i].lose,pt2[i].draw,pt2[i].goalDiff,pt2[i].points);
			iText(480,point,tempString[i-4],GLUT_BITMAP_TIMES_ROMAN_24);
			point -= 90;
		}
	}
	else if(pointTableRender==2)
	{
		int point = 355;
		char tempString[4][200];
		for(int i=8 ;i<12 ; i++)
		{
			iShowImage(90,point-20,120,60,flag[pt2[i].idNo]);
			iText(255,point,player[pt2[i].idNo].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
			sprintf(tempString[i-8],"%d                      %d                   %d                   %d                   %d                       %d",pt2[i].play,pt2[i].win,pt2[i].lose,pt2[i].draw,pt2[i].goalDiff,pt2[i].points);
			iText(480,point,tempString[i-8],GLUT_BITMAP_TIMES_ROMAN_24);
			point -= 90;
		}
	}
	else if(pointTableRender==3)
	{
		int point = 355;
		char tempString[4][200];
		for(int i=12 ;i<16 ; i++)
		{
			iShowImage(90,point-20,120,60,flag[pt2[i].idNo]);
			iText(255,point,player[pt2[i].idNo].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
			sprintf(tempString[i-12],"%d                      %d                   %d                   %d                   %d                       %d",pt2[i].play,pt2[i].win,pt2[i].lose,pt2[i].draw,pt2[i].goalDiff,pt2[i].points);
			iText(480,point,tempString[i-12],GLUT_BITMAP_TIMES_ROMAN_24);
			point -= 90;
		}
	}
	else if(pointTableRender==4)
	{
		int point = 355;
		char tempString[4][200];
		for(int i=16 ;i<20 ; i++)
		{
			iShowImage(90,point-20,120,60,flag[pt2[i].idNo]);
			iText(255,point,player[pt2[i].idNo].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
			sprintf(tempString[i-16],"%d                      %d                   %d                   %d                   %d                       %d",pt2[i].play,pt2[i].win,pt2[i].lose,pt2[i].draw,pt2[i].goalDiff,pt2[i].points);
			iText(480,point,tempString[i-16],GLUT_BITMAP_TIMES_ROMAN_24);
			point -= 90;
		}
	}
	else if(pointTableRender==5)
	{
		int point = 355;
		char tempString[4][200];
		for(int i=20 ;i<24 ; i++)
		{
			iShowImage(90,point-20,120,60,flag[pt2[i].idNo]);
			iText(255,point,player[pt2[i].idNo].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
			sprintf(tempString[i-20],"%d                      %d                   %d                   %d                   %d                       %d",pt2[i].play,pt2[i].win,pt2[i].lose,pt2[i].draw,pt2[i].goalDiff,pt2[i].points);
			iText(480,point,tempString[i-20],GLUT_BITMAP_TIMES_ROMAN_24);
			point -= 90;
		}
	}
	else if(pointTableRender==6)
	{
		int point = 355;
		char tempString[4][200];
		for(int i=24 ;i<28 ; i++)
		{
			iShowImage(90,point-20,120,60,flag[pt2[i].idNo]);
			iText(255,point,player[pt2[i].idNo].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
			sprintf(tempString[i-24],"%d                      %d                   %d                   %d                   %d                       %d",pt2[i].play,pt2[i].win,pt2[i].lose,pt2[i].draw,pt2[i].goalDiff,pt2[i].points);
			iText(480,point,tempString[i-24],GLUT_BITMAP_TIMES_ROMAN_24);
			point -= 90;
		}
	}
	else if(pointTableRender==7)
	{
		int point = 355;
		char tempString[4][200];
		for(int i=28;i<32 ; i++)
		{
			iShowImage(90,point-20,120,60,flag[pt2[i].idNo]);
			iText(255,point,player[pt2[i].idNo].TeamName,GLUT_BITMAP_TIMES_ROMAN_24);
			sprintf(tempString[i-28],"%d                      %d                   %d                   %d                   %d                       %d",pt2[i].play,pt2[i].win,pt2[i].lose,pt2[i].draw,pt2[i].goalDiff,pt2[i].points);
			iText(480,point,tempString[i-28],GLUT_BITMAP_TIMES_ROMAN_24);
			point -= 90;
		}
	}
	

}


//worldCupStarts() starts the World Cup Mode .....called from iDraw() function....return type void

void worldCupStarts()
{
	
	iShowImage(0,0,screen_length,screen_width,coverPage[6]);
	blinkWorldCup(mousePointX , mousePointY);
}

//matchOpponent functions is used to set the opponent team in world cup group stage
//takes a parameter x which stores the own team value
//returns opponent team value


int matchOpponent(int x)
{
	int i,j;
	for( i =0;i<32;i++)
	{
		if(pt1[i].idNo==x)
		{
			break;
		}
	}
	j = i / 4;
	i = i % 4;

	if(groupRoundMatchNo==1)
	{
		if(i%4==0)
			return pt1[(j*4)+1].idNo;
		else if(i%4==1)
			return pt1[(j*4)+0].idNo;
		else if(i%4==2)
			return pt1[(j*4)+3].idNo;
		else if(i%4==3)
			return pt1[(j*4)+2].idNo;
	}

	else if(groupRoundMatchNo==2)
	{
		if(i%4==0)
			return pt1[(j*4)+2].idNo;
		else if(i%4==2)
			return pt1[(j*4)+0].idNo;
		else if(i%4==1)
			return pt1[(j*4)+3].idNo;
		else if(i%4==3)
			return pt1[(j*4)+1].idNo;
	}

	else 
	{
		if(i%4==0)
			return pt1[(j*4)+3].idNo;
		else if(i%4==3)
			return pt1[(j*4)+0].idNo;
		else if(i%4==1)
			return pt1[(j*4)+2].idNo;
		else if(i%4==2)
			return pt1[(j*4)+1].idNo;
	}
	return 0;
}


//resetWCdata is called after every match of world cup mode and reset/modify all value
//return type void

void resetWCdata()
{
	int ownIndex;
	int opponentIndex;
	int goal1;
	int goal2;

	for(int i=0;i<32;i++)
	{
		if(pt1[i].idNo==worldCupOwnTeam)
		{
			ownIndex = i;
			break;
		}
	}

	for(int i=0;i<32;i++)
	{
		if(pt1[i].idNo==worldCupOpponentTeam)
		{
			opponentIndex = i;
			break;
		}
	}

	if(groupRoundMatchNo==1  ||  groupRoundMatchNo==2  || groupRoundMatchNo==3)
	{
		wcTotalOwnGoal += ownGoalCount;
		fillPointData(ownGoalCount,opponentGoalCount,ownIndex,opponentIndex);
		
		for(int i = 0; i<32 ; i++)
		{
			pt1[i].play++;
		}

		for(int i = 0; i<8 ; i++)
		{
			if(ownIndex/4!=i  && groupRoundMatchNo==1 )
			{
				goal1 = rand()%6;
			    goal2 = rand()%6;
				fillPointData(goal1,goal2,(4*i)+0,(4*i)+1);

				goal1 = rand()%6;
			    goal2 = rand()%6;
				fillPointData(goal1,goal2,(4*i)+2,(4*i)+3);
					
			}

			else if(ownIndex/4==i  && groupRoundMatchNo==1 )
			{
				goal1 = rand()%6;
			    goal2 = rand()%6;
				if(ownIndex%4==0 || opponentIndex %4 ==0)
					fillPointData(goal1,goal2,(4*i)+2,(4*i)+3);
				else if(ownIndex%4==2 || opponentIndex %4 ==2)
					fillPointData(goal1,goal2,(4*i)+0,(4*i)+1);
			}

			else if(ownIndex/4!=i  && groupRoundMatchNo==2 )
			{
				goal1 = rand()%6;
			    goal2 = rand()%6;
				fillPointData(goal1,goal2,(4*i)+0,(4*i)+2);

				goal1 = rand()%6;
			    goal2 = rand()%6;
				fillPointData(goal1,goal2,(4*i)+1,(4*i)+3);
					
			}

			else if(ownIndex/4==i  && groupRoundMatchNo==2 )
			{
				goal1 = rand()%6;
			    goal2 = rand()%6;
				if(ownIndex%4==0 || opponentIndex %4 ==0)
					fillPointData(goal1,goal2,(4*i)+1,(4*i)+3);
				else if(ownIndex%4==1 || opponentIndex %4 ==1)
					fillPointData(goal1,goal2,(4*i)+0,(4*i)+2);
			}

			else if(ownIndex/4!=i  && groupRoundMatchNo==3 )
			{
				goal1 = rand()%6;
			    goal2 = rand()%6;
				fillPointData(goal1,goal2,(4*i)+0,(4*i)+3);

				goal1 = rand()%6;
			    goal2 = rand()%6;
				fillPointData(goal1,goal2,(4*i)+1,(4*i)+2);
					
			}

			else if(ownIndex/4==i  && groupRoundMatchNo==3 )
			{
				goal1 = rand()%6;
			    goal2 = rand()%6;
				if(ownIndex%4==0 || opponentIndex %4 ==0)
					fillPointData(goal1,goal2,(4*i)+1,(4*i)+2);
				else if(ownIndex%4==2 || opponentIndex %4 ==2)
					fillPointData(goal1,goal2,(4*i)+0,(4*i)+3);
			}


		}
		sortPointTable();

		if(groupRoundMatchNo==3 && (pt2[(ownIndex/4)*4].idNo==pt1[ownIndex].idNo  || pt2[((ownIndex/4)*4)+1].idNo==pt1[ownIndex].idNo ))
		{
			round16orHigher = true;
			round16 = true;
			r16[0] = pt2[0].idNo;
			r16[1] = pt2[5].idNo;
			r16[2] = pt2[8].idNo;
			r16[3] = pt2[13].idNo;
			r16[4] = pt2[16].idNo;
			r16[5] = pt2[21].idNo;
			r16[6] = pt2[24].idNo;
			r16[7] = pt2[29].idNo;
			r16[9] = pt2[4].idNo;
			r16[8] = pt2[1].idNo;
			r16[10] = pt2[12].idNo;
			r16[11] = pt2[9].idNo;
			r16[12] = pt2[20].idNo;
			r16[13] = pt2[17].idNo;
			r16[14] = pt2[28].idNo;
			r16[15] = pt2[25].idNo;

			for(int i = 0; i<16; i++)
			{
				if(r16[i]==worldCupOwnTeam && i%2==0)
				{
					worldCupOpponentTeam = r16[i+1];
					break;
				}
				else if(r16[i]==worldCupOwnTeam && i%2==1)
				{
					worldCupOpponentTeam = r16[i-1];
					break;
				}
			}
			groupRoundMatchNo++;
			
		}
		else if(groupRoundMatchNo==3)
		{
			defaultTeamDataWc();
		}

		else if(groupRoundMatchNo==1 || groupRoundMatchNo==2)
			groupRoundMatchNo++;
		
	}

	
	else if(round16orHigher && round16)
	{
		if(ownGoalCount>opponentGoalCount)
		{
			round16 = false;
			quarterFinal = true;
			wcTotalOwnGoal += ownGoalCount;

			for(int i =0; i<8 ; i++)
			{
				if(worldCupOwnTeam==r16[i*2] || worldCupOwnTeam==r16[(i*2)+1])
				{
					qF[i] = worldCupOwnTeam;
				}
				else
				{
					qF[i] = rand()%2;

					if(qF[i]%2==0)
						qF[i] = r16[i*2];
					else
						qF[i] = r16[(i*2)+1];
				}
			}

			for(int i = 0; i<8; i++)
			{
				if(worldCupOwnTeam==qF[i] && i%2==0)
				{
					worldCupOpponentTeam = qF[i+1];
				}
				else if(worldCupOwnTeam==qF[i] && i%2==1)
				{
					worldCupOpponentTeam = qF[i-1];
				}
			}
		}
		else if(ownGoalCount<opponentGoalCount)
		{
			
			defaultTeamDataWc();
			
		}
	}

	else if(round16orHigher && quarterFinal)
	{
		if(ownGoalCount>opponentGoalCount)
		{
			quarterFinal = false;
			semiFinal = true;
			wcTotalOwnGoal += ownGoalCount;

			for(int i =0; i<4 ; i++)
			{
				if(worldCupOwnTeam==qF[i*2] || worldCupOwnTeam==qF[(i*2)+1])
				{
					sF[i] = worldCupOwnTeam;
				}
				else
				{
					sF[i] = rand()%2;

					if(sF[i]%2==0)
						sF[i] = qF[i*2];
					else
						sF[i] = qF[(i*2)+1];
				}
			}

			for(int i = 0; i<4; i++)
			{
				if(worldCupOwnTeam==sF[i] && i%2==0)
				{
					worldCupOpponentTeam = sF[i+1];
				}
				else if(worldCupOwnTeam==sF[i] && i%2==1)
				{
					worldCupOpponentTeam = sF[i-1];
				}
			}
		}
		else if(ownGoalCount<opponentGoalCount)
		{
			defaultTeamDataWc();
			
		}
	}

	else if(round16orHigher && semiFinal)
	{
		if(ownGoalCount>opponentGoalCount)
		{
			semiFinal = false;
			final = true;
			wcTotalOwnGoal += ownGoalCount;

			for(int i =0; i<2 ; i++)
			{
				if(worldCupOwnTeam==sF[i*2] || worldCupOwnTeam==sF[(i*2)+1])
				{
					f[i] = worldCupOwnTeam;
				}
				else
				{
					f[i] = rand()%2;

					if(f[i]%2==0)
						f[i] = sF[i*2];
					else
						f[i] = sF[(i*2)+1];
				}
			}

			for(int i = 0; i<2; i++)
			{
				if(worldCupOwnTeam==f[i] && i%2==0)
				{
					worldCupOpponentTeam = f[i+1];
				}
				else if(worldCupOwnTeam==f[i] && i%2==1)
				{
					worldCupOpponentTeam = f[i-1];
				}
			}
		}
		else if(ownGoalCount<opponentGoalCount)
		{
			
			defaultTeamDataWc();
			
		}
	}

	else if(round16orHigher && final)
	{
		if(ownGoalCount>opponentGoalCount)
		{
			wcTotalOwnGoal += ownGoalCount;
			userGlory.totalGoal = wcTotalOwnGoal;
			strcpy(userGlory.championTeam,player[worldCupOwnTeam].TeamName);
			writeFileGlory(userGlory.userName,player[worldCupOwnTeam].TeamName,wcTotalOwnGoal);
		}
		
		defaultTeamDataWc();
		
	}
}

//fillPointData is used to change the point table data
//goal1 stores own team goal,goal2 stores opponent team goal
//index1 stores own team index and index2 stores opponent team index
//return type void


void fillPointData(int goal1 , int goal2 , int index1 , int index2)
{
	if(goal1>goal2)
		{
			pt1[index1].win++;
			pt1[index2].lose++;
			pt1[index1].points += 3;
		}
		else if(goal1<goal2)
		{
			pt1[index1].lose++;
			pt1[index2].win++;
			pt1[index2].points += 3;
		}
		else if(goal1==goal2)
		{
			pt1[index1].draw++;
			pt1[index2].draw++;
			pt1[index1].points += 1;
			pt1[index2].points += 1;

		}

		pt1[index1].goalDiff += goal1 - goal2;
		pt1[index2].goalDiff += goal2 - goal1;

}

//sortWcGroup function sorts the point table...takes two pointTable type variable and store point Table data in them
//checks sort rules and returns true or false


bool sortWcGroup(pointTable a, pointTable b)
{
	if( a.points==b.points)
	{
		if(a.goalDiff==b.goalDiff)
		{
			if(a.win==b.win)
			{
				if(strcmp(a.teamName,b.teamName)<=0)
					return true;
				else return false;
			}
			else 
				return a.win>b.win;

		}
		else
			return	a.goalDiff>b.goalDiff;
	}
	return a.points>b.points;
}

//sortPointTable function sorts the point table
//return type void


void sortPointTable()
{
	for(int i = 0; i<32 ;i++ )
	{
		pt2[i].idNo = pt1[i].idNo;
		pt2[i].flagPic = pt1[i].flagPic;
		strcpy(pt2[i].teamName,pt1[i].teamName);
		pt2[i].play = pt1[i].play;
		pt2[i].win = pt1[i].win;
		pt2[i].lose = pt1[i].lose;
		pt2[i].draw = pt1[i].draw;
		pt2[i].goalDiff = pt1[i].goalDiff;
		pt2[i].points = pt1[i].points;
	}

	for(int i = 0; i<8;i++)
		sort(pt2+(4*i)+0,pt2+(4*i)+4,sortWcGroup);
}


//defaultTeamDataWc is called after every world cup and reset all values
//return type void

void defaultTeamDataWc()
{
	for(int i = 0 ; i< 32 ; i++)
	{
		pt1[i].idNo = pointTableDefaultTeamValue[i];
        pt1[i].flagPic = flag[pointTableDefaultTeamValue[i]];
		strcpy(pt1[i].teamName,player[pointTableDefaultTeamValue[i]].TeamName);
        pt1[i].play = 0;
        pt1[i].win = 0;
        pt1[i].lose = 0;
        pt1[i].draw = 0;
        pt1[i].goalDiff = 0;
        pt1[i].points = 0;
	}

	sortPointTable();


	worldCupOwnTeam = 0;
	worldCupOpponentTeam = 0;
	groupRoundMatchNo = 1;
	wcTotalOwnGoal = 0;
	userGlory.totalGoal = 0;
	userGlory.championTeam[0] = '\0';
	userGlory.userName[0] = '\0' ;
	round16orHigher = false;
	round16 = false;
	quarterFinal = false;
	semiFinal = false;
	final = false;

}



//trophyWc() shows many options after winning a world cup
//return type void


void trophyWc()
{
	iShowImage(0,0,screen_length,screen_width,coverPage[17]);
	iShowImage(600,160,150,230,trophy_pic);
	if(strlen(userGlory.userName)>1  && !writeName)
	{
		nextPicture();
		blinkNext(mousePointX , mousePointY);
	}
	blinkWriteNameButton(mousePointX , mousePointY);
	iSetColor(0,0,0);
	iText(545,625,"You Won Fifa World Cup",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(430,545,"Your Total Goal :- ",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(430,465,"Write Your Name :- ",GLUT_BITMAP_TIMES_ROMAN_24);

	iShowImage(740,450,210,50,blueName);
	iShowImage(740,530,210,50,blueName);

	char tempString[100];
	sprintf(tempString,"%d",wcTotalOwnGoal+ownGoalCount);
	iText(825,545,tempString,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(765,465,userGlory.userName,GLUT_BITMAP_TIMES_ROMAN_24);

	if(writeName)
		{
			iText(780,430,"Use keyboard to write name",GLUT_BITMAP_HELVETICA_10);
			iShowImage(1025,430,110,35,nameEnter);
			iShowImage(1025,520,110,35,nameDelete);
		}
	else
		iText(780,430,"Click on this box to write name",GLUT_BITMAP_HELVETICA_10);

}


#endif



