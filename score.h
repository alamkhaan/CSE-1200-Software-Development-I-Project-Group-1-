
void readScores();
int getSize();
void sortStructure();
void displayScoresInConsole();
void writeScore();
void setRankings();


struct Score {
    char playerName[50];
    int playerRank;
    int playerGoalScored;
};


int sizeOfStructure = getSize();
Score structures[20];


void readScores(){

        Score s;
        FILE *fp;
        fp = fopen("scores.bin","rb");

        int i = 0;
        while( fread(&s,sizeof(s),1,fp) == 1){
            structures[i] = s;
            i++;
        }


        fclose(fp);
        sortStructure();
        setRankings();
}

int getSize(){

        Score s;
        FILE *fp;
        fp = fopen("scores.bin","rb");
        int i=0;

        while( fread(&s,sizeof(s),1,fp) == 1){
            i++;
        }

        fclose(fp);
        return i;
}



void sortStructure(){

        int flag = 0;
        for(int j = 0; j < sizeOfStructure; j++){

            if(j != sizeOfStructure-1){
                if((structures[j].playerGoalScored < structures[j+1].playerGoalScored)){
                    Score c = structures[j];
                    structures[j] = structures[j+1];
                    structures[j+1] = c;
                    flag = 1;
                }
            }
            if(j == sizeOfStructure-1 && flag == 1){
                flag = 0;
                j = -1;
            }

        }
}

void displayScoresInConsole(){
    readScores();
    for(int i = 0; i < sizeOfStructure; i++)
        printf("userName:%s Rank:%d Goals:%d\n", structures[i].playerName, structures[i].playerRank, structures[i].playerGoalScored);
}



void setRankings(){
    for(int i = 0; i < sizeOfStructure; i++)
        structures[i].playerRank = i+1;
}



//--------------------------Demo Code---------------------------------//

void writeScore(){

        Score s;
        FILE *fp;
        fp = fopen("scores.bin","wb");
        int inputs,i = 0;


        printf("How many inputs? :");
        scanf("%d", &inputs);
        getchar();

        while( i < inputs ){

            printf("Enter Player Name: ");
            gets(s.playerName);



            printf("Enter Player Rank: ");
            scanf("%d",&s.playerRank);

            printf("Enter Player's Goals Scored: ");
            scanf("%d",&s.playerGoalScored);

            getchar();

            fwrite(&s,sizeof(s),1,fp);
            i++;
        }

        fclose(fp);

}