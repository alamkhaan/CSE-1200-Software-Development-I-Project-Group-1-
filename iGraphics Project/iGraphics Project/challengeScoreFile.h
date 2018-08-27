#include<stdio.h>
#include<string.h>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void printChallengeScore();
void readChallengeFile();

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

bool sortingChallenge(Goal a , Goal b)
{
    if(a.userScore == b.userScore)
    {
        if(strcmp(a.userName,a.userName)>=0)
            return true;
        else return false;

    }
    else
        return a.userScore>b.userScore;
}

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

void printChallengeScore()
{
    sort(goal.begin(),goal.end(),sortingChallenge);
	for(int i =0; i<10; i++)
	{
		score[i].userScore  = goal[i].userScore;
		strcpy(score[i].userName,goal[i].userName);
	}
}
void writeChallengeFile(char* name,int goal)
{
    Goal sc(name,goal);
    FILE *fp = fopen("scoreOpen.bin","ab");
    fwrite(&sc,sizeof(sc),1,fp);
    fclose(fp);
	readChallengeFile();
}
