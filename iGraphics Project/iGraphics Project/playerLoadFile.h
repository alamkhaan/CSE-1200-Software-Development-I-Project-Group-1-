#ifndef PLAYER_LOADER_FILE_H
#define PLAYER_LOADER_FILE_H


#include<stdio.h>
#include<string.h>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void printChallengeScore();
void readChallengeFile();

//Player Structure is used to read player and team info from a file and store it in a structure array

typedef struct Player Player;
struct  Player
{
    int num;
    char shortName[10];
    char TeamName[20];
    char PName [11][20];

    Player()
    {
        ;
    }
};

Player player[32];

//loadingPlayer() is used to read team and player info using player structure...called from main() function...return type void

void loadingPlayer()
{
    
    int i =0;
    FILE *fp = fopen("playerData.bin","rb");
    while(fread(&player[i],sizeof(player[i]),1,fp)==1)
    {
		i++;
    }
    fclose(fp);
}


/**************************************Point Table Structure is for storing data of differnt groups in worldCup mode*******************************/


typedef struct pointTable pointTable;
struct pointTable
{
    int idNo;
    int flagPic;
    char teamName[100];
    int play;
    int win;
    int lose;
    int draw;
    int goalDiff;
    int points;

	pointTable()
    {
		;
	}

    pointTable(int id)
    {
        idNo = id;
        flagPic = flag[id];
		strcpy(teamName,player[id].TeamName);
        play = 0;
        win = 0;
        lose = 0;
        draw = 0;
        goalDiff = 0;
        points = 0;
    }
};

pointTable pt1[32] = { 8 , 22 , 23 , 31 , 13 , 16 , 21 , 27 , 1 , 7 , 10 , 19 , 0 , 6 , 12 , 17 , 3 , 5 , 25 , 29 ,11 ,15 ,26 ,28, 2, 9, 18, 30, 4, 14, 20, 24};
pointTable pt2[32];



/**************************************Glory Structure is for writing name and showing the top goal scorer in worldCup mode*******************************/


struct Glory
{
    char userName[100];
    char championTeam[100];
    int totalGoal;

    Glory()
    {
        ;
    }
    Glory(char* _userName,char* _championTeam,int _goal)
    {
        strcpy(userName,_userName);
        strcpy(championTeam,_championTeam);
        totalGoal =  _goal;

    }


};

vector <Glory> glory;
vector <Glory> :: iterator it10;
Glory userGlory;
Glory highScoreGlory[10];


//sortingGlory function sorts glory page data
//takes two glory type variables...they stored user's information
//returns true/false by checking sort formula

bool sortingGlory(Glory a,Glory b)
{
   if(a.totalGoal==b.totalGoal)
    {
        return a.userName>=b.userName;
    }
   
	return a.totalGoal>b.totalGoal;
}


//readFileGlory function reads the glory page data from a file and stores it
//return type void

void readFileGlory()
{
     Glory s;
     FILE *fp = fopen("glory.bin","rb");

    while( fread(&s,sizeof(s),1,fp) == 1)
    {
         glory.push_back(s);
    }

    fclose(fp);
    sort(glory.begin(),glory.end(),sortingGlory);

	for(int i =0; i<10; i++)
	{
		strcpy(highScoreGlory[i].userName,glory[i].userName);
		strcpy(highScoreGlory[i].championTeam,glory[i].championTeam);
		highScoreGlory[i].totalGoal = glory[i].totalGoal;

	}

	glory.clear();
}


//writeFileGlory function writes the world cup information into a file after winning a world cup
//three parameters takes username,champion team name and user goal 
//return type void


void writeFileGlory(char* _userName,char* _championTeam,int _goal)
{
    Glory sp(_userName,_championTeam,_goal);
    FILE *fp = fopen("glory.bin","ab");
    fwrite(&sp,sizeof(sp),1,fp);
    fclose(fp);
}


/**************************************Goal Structure is for writing name and showing highscore in challenge mode*******************************/


struct Goal
{
    char userName [100];
    int userScore;


    Goal()
    {
        ;
    }
    Goal(char* _userName,int _userScore)
    {
        strcpy(userName,_userName);
        userScore = _userScore;
    }

};

vector <Goal> goal;
vector <Goal> :: iterator it;
Goal userDataChallenge;
Goal score[10];


//sortingChallenge function sorts challange high score data
//takes two goal type variables...they stored user's information
//returns true/false by checking sort formula


bool sortingChallenge(Goal a , Goal b)
{
   if(a.userScore == b.userScore)
    {
       return a.userName>=b.userName;
    }

	return a.userScore>b.userScore;
}


//readChallengeFile function reads the challenge high score page data from a file and stores it
//return type void

void readChallengeFile()
{
     Goal s;
     FILE *fp = fopen("scoreOpen.bin","rb");

    while( fread(&s,sizeof(s),1,fp) == 1)
    {
         goal.push_back(s);
    }

    fclose(fp);
    printChallengeScore();
}


//printChallengeScore function stores the value into an array from vector which are shown in challenge highscore page
//return type void

void printChallengeScore()
{
    sort(goal.begin(),goal.end(),sortingChallenge);
	for(int i =0; i<10; i++)
	{
		score[i].userScore  = goal[i].userScore;
		strcpy(score[i].userName,goal[i].userName);
	}

	goal.clear();
}


//writeChallengeFile function writes the challnge mode information into a file
//two parameters takes username and user score
//return type void

void writeChallengeFile(char* name,int goal)
{
    Goal sc(name,goal);
    FILE *fp = fopen("scoreOpen.bin","ab");
    fwrite(&sc,sizeof(sc),1,fp);
    fclose(fp);
}


#endif