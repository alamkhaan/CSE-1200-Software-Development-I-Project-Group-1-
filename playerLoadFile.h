#include<stdio.h>
#include<string.h>


//Player Structure is used to read player and team info from a file and store it in a structure array

typedef struct Player Player;
struct  Player
{
    int num;
    char TeamName[100];
    char PName [11][100];

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
    FILE *fp = fopen("PlayerList.bin","rb");
    while(fread(&player[i],sizeof(player[i]),1,fp)==1)
    {
    i++;
    }
    fclose(fp);
}
