


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


//store the value of character's picture

int gkRender = 0;
int ballRender = 0;
int playerRender = 0;
int pointTableRender = 0;


//All timer variables are used to store the index of iSetTimer() functions

int gk_timer;
int loadingTimer;
int gk_dive_timer_own;
int player_timer;
int ball_timer;


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


//boolean variables are used to check conditions for working

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


bool world_cup_team_selection = false;
bool player_mode=false;
bool quitButton = false;


bool ballRun = false;
bool playerRun = false;
bool gkRun = true;

//All own team player pictures are stored in the array ownTeamPlayer [21]..

int ownTeamPlayer [21]; 

char* own_team_player [21] = { "images//OwnPlayer//1.png" , "images//OwnPlayer//2.png" , "images//OwnPlayer//3.png" , "images//OwnPlayer//3.png" , "images//OwnPlayer//5.png" , "images//OwnPlayer//6.png" ,
								"images//OwnPlayer//7.png" , "images//OwnPlayer//8.png" , "images//OwnPlayer//9.png" ,"images//OwnPlayer//10.png","images//OwnPlayer//11.png" , "images//OwnPlayer//12.png" ,
								"images//OwnPlayer//13.png" , "images//OwnPlayer//14.png" , "images//OwnPlayer//15.png" , "images//OwnPlayer//16.png" ,
								"images//OwnPlayer//17.png" , "images//OwnPlayer//18.png" , "images//OwnPlayer//19.png" ,"images//OwnPlayer//20.png","images//OwnPlayer//21.png" }; 


 //All the cover photos are stored in the array cover[20].

int coverPage [18];  

char* cover[18] = { "images//cover//coverPage1.jpg" , "images//cover//coverPage2.png" , "images//cover//coverPage3.png" , "images//cover//coverPage4.jpg",  "images//cover//coverPage5.jpg" ,"images//cover//coverPage6.png"  ,
					"images//cover//coverPage7.png" ,"images//cover//coverPage8.png" , "images//cover//coverPage9.png" , "images//cover//coverPage10.png" ,"images//cover//coverPage11.png","images//cover//coverPage12.jpg",
					"images//cover//coverPage13.png","images//cover//coverPage14.jpg","images//cover//coverPage15.jpg","images//cover//coverPage16.jpg","images//cover//coverPage17.jpg","images//cover//coverPage18.jpg" };


//All Gk standing Pictues are stored in the ownGk[4].

int ownGk[4];	

char* own_gk [4] = {"images//OwnGkRight//1.png" , "images//OwnGkRight//2.png" , "images//OwnGkRight//3.png" , "images//OwnGkRight//4.png" };


//All own gk right side diving pictures are stored in the array ownGkRight [6]..

int ownGkRight [6];	

char* own_gk_right [6] = {"images//OwnGkRight//5.png" , "images//OwnGkRight//6.png" , "images//OwnGkRight//7.png" , "images//OwnGkRight//8.png" ,"images//OwnGkRight//9.png" , "images//OwnGkRight//10.png"  };


//All own gk left side diving pictures are stored in the array  ownGkLeft [9]..

int ownGkLeft [9];

char* own_gk_left  [9] = {"images//OwnGkLeft//1.png" , "images//OwnGkLeft//2.png" ,"images//OwnGkLeft//3.png" ,"images//OwnGkLeft//4.png" ,"images//OwnGkLeft//5.png" ,"images//OwnGkLeft//6.png" , "images//OwnGkLeft//7.png" ,
							"images//OwnGkLeft//8.png" ,"images//OwnGkLeft//9.png" };


//All flag pictures are stored in the array flag [32]..

int flag [32];

char* flag_[32] = { "images//Flag//argentina.jpg" ,  "images//Flag//australia.jpg" ,  "images//Flag//belgium.jpg" ,  "images//Flag//brazil.jpg" ,  "images//Flag//colombia.jpg" , "images//Flag//costaRica.png" , "images//Flag//croatia.png" ,
					"images//Flag//denmark.png" , "images//Flag//egypt.png" , "images//Flag//england.png" , "images//Flag//france.png" , "images//Flag//germany.png" , "images//Flag//iceland.png" , "images//Flag//iran.png" , "images//Flag//japan.png" , "images//Flag//mexico.png" ,
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


