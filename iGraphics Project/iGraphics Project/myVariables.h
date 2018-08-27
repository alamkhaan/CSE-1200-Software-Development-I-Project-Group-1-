#ifndef MY_VARIABLES_H
#define MY_VARIABLES_H



//Variables are declared here....

int screen_length = 1300;
int screen_width = 700;

//store the value of cover page/game state

int coverImage = 0;		


//Store the different types of picture

int blurCoverPage;
int quitPicture;
int ballPicture;
int back_picture;
int next_picture;
int ballShadow;
int gloves_picture;
int ownSaveMid;
int opponentSaveMid;
int redCircle;
int greenCircle;
int whiteCircle;
int blueName;
int nameDelete;
int nameEnter;
int trophy_pic;
int soundOn;
int soundOff;


int circleArray [10][3];
int circleIndex[10];
int r16[16];
int qF[8];
int sF[4];
int f[2];


//Store a set value to work in all blink functions

int mousePointX;
int mousePointY;

//store the value of Team and stadium number

int worldCupOwnTeam = 0;
int worldCupOpponentTeam = 0;
int yourTeamNumber = 0;
int opponentTeamNumber = 0;
int stadiumNumber = 0;
int worldCupStadiumNumber = 0;
int spendingTimebetweenShot = 0;
int ownGoalCount = 0;
int opponentGoalCount = 0;
int wcTotalOwnGoal;

//store the value of character's picture

int gkRender = 0;
int ballRender = 0;
int playerRender = 0;
int pointTableRender = 0;
int playerNameRender = 0;
int gkSaveMiddleX = 0;



//All timer variables are used to store the index of iSetTimer() functions

int gk_timer;
int loadingTimer;
int gk_dive_timer;
int player_timer;
int victory_timer;
int ball_timer;
int power_timer1;
int power_timer2;
int watch_timer;
int gloves_timer;

//Store the co-ordinates of stadium

int stadium1X = 300;
int stadium1Y = 165;
int stadium2X = 300;
int stadium2Y = 165;
int stadium3X = 300;
int stadium3Y = 165;
int stadium4X = 300;
int stadium4Y = 165;
int stadium5X = 300;
int stadium5Y = 165;
int stadium6X = 300;
int stadium6Y = 165;

int ownFilledCircle = 30;
int opponentFilledCircle = 310;
int ownTotalShootNo = 0;
int opponentTotalShootNo = 0;
int groupRoundMatchNo = 1;


//boolean variables are used to check conditions to work

bool blink_friendly = false;
bool blink_team=false;
bool blink_stadium=false;
bool blink_worldCup = false;
bool blink_challenge = false;
bool blink_rectangle_page1 = false;
bool blink_rectangle_page2 = false;
bool blink_back = false;
bool blink_next = false;
bool blink_quit = false;
bool blink_write_name = false;
bool blink_pt_next = false;


bool world_cup_team_selection = false;
bool quitButton = false;
bool redPower = false;
bool teamType = false;
bool keyType = false;
bool playerVictory = false;
bool writeName = false;
bool checkSound = true;
bool playSound = true;

bool single_mode = false;
bool multiPlayer_mode = false;
bool challenge_mode = false;
bool worldCup_mode = false;


bool doOrDie = false;
bool round16orHigher = false;
bool round16 = false;
bool quarterFinal = false;
bool semiFinal = false;
bool final = false;


bool ballRun = false;
bool playerRun = false;
bool gkRun = true;
bool powerRun1 = false;
bool powerRun2 = false;
bool glovesRun = false;
bool glovesShow = false;
bool colorChange[10];


//Player Pictures

int ownTeamPlayer [21]; 

char* own_team_player [21] = { "images//OwnPlayer//1.png" , "images//OwnPlayer//2.png" , "images//OwnPlayer//3.png" , "images//OwnPlayer//3.png" , "images//OwnPlayer//5.png" , "images//OwnPlayer//6.png" ,
								"images//OwnPlayer//7.png" , "images//OwnPlayer//8.png" , "images//OwnPlayer//9.png" ,"images//OwnPlayer//10.png","images//OwnPlayer//11.png" , "images//OwnPlayer//12.png" ,
								"images//OwnPlayer//13.png" , "images//OwnPlayer//14.png" , "images//OwnPlayer//15.png" , "images//OwnPlayer//16.png" ,
								"images//OwnPlayer//17.png" , "images//OwnPlayer//18.png" , "images//OwnPlayer//19.png" ,"images//OwnPlayer//20.png","images//OwnPlayer//21.png" }; 

int opponentTeamPlayer [18]; 

char* opponent_team_player [18] = { "images//OpponentPlayer//8.png" , "images//OpponentPlayer//9.png" , "images//OpponentPlayer//10.png" , "images//OpponentPlayer//11.png" , "images//OpponentPlayer//12.png" , 
									"images//OpponentPlayer//13.png" , "images//OpponentPlayer//14.png" , "images//OpponentPlayer//15.png" , "images//OpponentPlayer//16.png" , "images//OpponentPlayer//17.png" , 
									"images//OpponentPlayer//18.png" , "images//OpponentPlayer//19.png" , "images//OpponentPlayer//20.png" , "images//OpponentPlayer//21.png" , "images//OpponentPlayer//22.png" , 
									"images//OpponentPlayer//23.png" , "images//OpponentPlayer//24.png" , "images//OpponentPlayer//25.png" };


int ownVictory [11];
char* own_victory [11] = { "images//OwnVictory//1.png" , "images//OwnVictory//2.png" , "images//OwnVictory//3.png" , "images//OwnVictory//4.png" , "images//OwnVictory//5.png" , "images//OwnVictory//6.png" ,
							"images//OwnVictory//7.png" , "images//OwnVictory//8.png" , "images//OwnVictory//9.png" , "images//OwnVictory//10.png" , "images//OwnVictory//11.png" };


int opponentVictory [9];
char* opponent_victory [9] = { "images//OpponentVictory//1.png" , "images//OpponentVictory//2.png" , "images//OpponentVictory//3.png" , "images//OpponentVictory//4.png" , "images//OpponentVictory//5.png" ,
	"images//OpponentVictory//6.png" , "images//OpponentVictory//7.png" , "images//OpponentVictory//8.png" , "images//OpponentVictory//9.png" };



 //All the cover photos are stored in the array cover[20].

int coverPage [18];  

char* cover[18] = { "images//cover//coverPage1.jpg" , "images//cover//coverPage2.png" , "images//cover//coverPage3.png" , "images//cover//coverPage4.jpg",  "images//cover//coverPage5.jpg" ,"images//cover//coverPage6.png"  ,
					"images//cover//coverPage7.png" ,"images//cover//coverPage8.png" , "images//cover//coverPage9.png" , "images//cover//coverPage10.png" ,"images//cover//coverPage11.png","images//cover//coverPage12.jpg",
					"images//cover//coverPage13.png","images//cover//coverPage14.jpg","images//cover//coverPage15.jpg","images//cover//coverPage16.jpg","images//cover//coverPage17.jpg","images//cover//coverPage18.jpg" };
					

//All Gk standing Pictues are stored in the ownGk[4].

int ownGk[4];	

char* own_gk [4] = {"images//OwnGkRight//1.png" , "images//OwnGkRight//2.png" , "images//OwnGkRight//3.png" , "images//OwnGkRight//4.png" };


//All gk diving pictures

int ownGkRight [5];	

char* own_gk_right [5] = { "images//OwnGkRight//6.png" , "images//OwnGkRight//7.png" , "images//OwnGkRight//8.png" ,"images//OwnGkRight//9.png" , "images//OwnGkRight//10.png"  };



int ownGkLeft [6];

char* own_gk_left  [6] = { "images//OwnGkLeft//2.png" ,"images//OwnGkLeft//3.png" ,"images//OwnGkLeft//4.png" ,"images//OwnGkLeft//5.png" ,"images//OwnGkLeft//6.png" , "images//OwnGkLeft//7.png" };


int ownMidRight [7];	

char* own_mid_right [7] = {"images//OwnMidRight//1.png" , "images//OwnMidRight//2.png" , "images//OwnMidRight//3.png" , "images//OwnMidRight//4.png" ,"images//OwnMidRight//5.png" , "images//OwnMidRight//6.png" , "images//OwnMidRight//7.png"  };


int ownMidLeft [7];

char* own_mid_left  [7] = {"images//OwnMidLeft//1.png" , "images//OwnMidLeft//2.png" ,"images//OwnGkLeft//3.png" ,"images//OwnMidLeft//4.png" ,"images//OwnMidLeft//5.png" ,"images//OwnMidLeft//6.png" , "images//OwnMidLeft//7.png"  };




int opponentGk[6];	

char* opponent_gk [6] = {"images//OpponentGk//1.png" , "images//OpponentGk//2.png" , "images//OpponentGk//3.png" , "images//OpponentGk//4.png" , "images//OpponentGk//3.png" , "images//OpponentGk//2.png" };



int opponentGkRight [7];	

char* opponent_gk_right [7] = {"images//OpponentGkRight//1.png" , "images//OpponentGkRight//2.png" , "images//OpponentGkRight//3.png" , "images//OpponentGkRight//4.png" ,"images//OpponentGkRight//5.png" , "images//OpponentGkRight//6.png"  , "images//OpponentGkRight//7.png" };



int opponentGkLeft [7];

char* opponent_gk_left  [7] = {"images//OpponentGkLeft//1.png" , "images//OpponentGkLeft//2.png" ,"images//OpponentGkLeft//3.png" ,"images//OpponentGkLeft//4.png" ,"images//OpponentGkLeft//5.png" ,"images//OpponentGkLeft//6.png" , "images//OpponentGkLeft//7.png" };


int opponentMidRight [8];	

char* opponent_mid_right [8] = {	"images//OpponentMidRight//1.png" , "images//OpponentMidRight//2.png" , "images//OpponentMidRight//3.png" , "images//OpponentMidRight//4.png" ,"images//OpponentMidRight//5.png" ,
									"images//OpponentMidRight//6.png"  ,"images//OpponentMidRight//7.png" , "images//OpponentMidRight//8.png"  };


int opponentMidLeft [8];

char* opponent_mid_left  [8] = {	"images//OpponentMidLeft//1.png" , "images//OpponentMidLeft//2.png" ,"images//OpponentGkLeft//3.png" ,"images//OpponentMidLeft//4.png" ,"images//OpponentMidLeft//5.png" ,
									"images//OpponentMidLeft//6.png" , "images//OpponentMidLeft//7.png"  ,"images//OpponentMidLeft//8.png" };





//All flag pictures are stored in the array flag [32]..

int flag [32];

char* flag_[32] = { "images//Flag//argentina.jpg" ,  "images//Flag//australia.jpg" ,  "images//Flag//belgium.jpg" ,  "images//Flag//brazil.jpg" ,  "images//Flag//colombia.jpg" , "images//Flag//costaRica.png" , "images//Flag//croatia.png" ,
					"images//Flag//denmark.png" , "images//Flag//egypt.jpg" , "images//Flag//england.png" , "images//Flag//france.png" , "images//Flag//germany.png" , "images//Flag//iceland.png" , "images//Flag//iran.png" , "images//Flag//japan.png" , "images//Flag//mexico.png" ,
					"images//Flag//morocco.png" , "images//Flag//nigeria.png" , "images//Flag//panama.png" , "images//Flag//peru.png" , "images//Flag//poland.png" , "images//Flag//portugal.jpg" , "images//Flag//russia.jpg" , "images//Flag//saudia.png" , "images//Flag//senegal.png" ,
					"images//Flag//serbia.png" , "images//Flag//southKorea.jpg" , "images//Flag//spain.png" , "images//Flag//sweden.png" , "images//Flag//switzerland.jpg" , "images//Flag//tunisia.png" , "images//Flag//uruguay.png" };


//All stadium pictures are stored in the array stadium[6]..

int stadium[6];
char* stadium_[6] = {"images//Stadium//A.jpg" ,  "images//Stadium//B.jpg" ,"images//Stadium//C.jpg" ,"images//Stadium//D.jpg" ,"images//Stadium//E.png" ,"images//Stadium//F.jpg" };

char* StadiumName[6] = {"Santiago Bernabéu Stadium" , "Allianz Stadium" , "Camp Nuo Stadium" , "Luzhniki Stadium" , "Old Trafford Stadium" , "Bangabandhu Stadium"}; 


//All lineUps pictures are stored in the array lineUps[32]..

int lineUps[32];
char* line_ups[32] = {	"images//LineUps//1.jpg" ,"images//LineUps//2.jpg" ,"images//LineUps//3.jpg" ,"images//LineUps//4.jpg" ,"images//LineUps//5.jpg" ,"images//LineUps//6.jpg" ,"images//LineUps//7.jpg" ,"images//LineUps//8.jpg" ,
						"images//LineUps//9.jpg" ,"images//LineUps//10.jpg" ,"images//LineUps//11.jpg" ,"images//LineUps//12.jpg" ,"images//LineUps//13.jpg" ,"images//LineUps//14.jpg" ,"images//LineUps//15.jpg" ,"images//LineUps//16.jpg" ,
						"images//LineUps//17.jpg" ,"images//LineUps//18.jpg" ,"images//LineUps//19.jpg" ,"images//LineUps//20.jpg" ,"images//LineUps//21.jpg" ,"images//LineUps//22.jpg" ,"images//LineUps//23.jpg" ,"images//LineUps//24.jpg" ,
						"images//LineUps//25.jpg" ,"images//LineUps//26.jpg" ,"images//LineUps//27.jpg" ,"images//LineUps//28.jpg" ,"images//LineUps//29.jpg" ,"images//LineUps//30.jpg" ,"images//LineUps//31.jpg" ,"images//LineUps//32.jpg" };


//All Point Tables Chart pictures are stored in the array worldCupGroup[8]..

int worldCupGroup[8];
char* world_cup_group [8] = { "images//PointTable//1.jpg" ,"images//PointTable//2.jpg" ,"images//PointTable//3.jpg" ,"images//PointTable//4.jpg" ,"images//PointTable//5.jpg" ,"images//PointTable//6.jpg" ,"images//PointTable//7.jpg" ,"images//PointTable//8.jpg" };


//clock pictures

int digitPicture[10];
char* digit[10] = { "images//digit//0.png" , "images//digit//1.png" , "images//digit//2.png" , "images//digit//3.png" , "images//digit//4.png" , "images//digit//5.png" , "images//digit//6.png" , "images//digit//7.png" , "images//digit//8.png" , "images//digit//9.png" };


//for point table data

int pointTableDefaultTeamValue[32] = { 8 , 22 , 23 , 31 , 13 , 16 , 21 , 27 , 1 , 7 , 10 , 19 , 0 , 6 , 12 , 17 , 3 , 5 , 25 , 29 ,11 ,15 ,26 ,28, 2, 9, 18, 30, 4, 14, 20, 24};


#endif