#ifndef I_MOUSE_WORK_H
#define I_MOUSE_WORK_H


void playingSound();
void makeIMouseSmall(int mx,int my);


//makeIMouseSmall is called when the user presses/releases the mouse.
// (mx, my) is the position where the mouse pointer is.
//return type void..called from iMouse function

void makeIMouseSmall(int mx,int my)
{

	//******************************* CoverImage = 1 opens the Main Menu Page******************************************* 


	if(mx>=99 && mx<=306 && my>=201 && my<=276 && coverImage==1 && quitButton == false )  //makes the boolean quitButton variable true and Exit notification tab will open
	{
		quitButton = true;
	}

	else if(mx>=99 && mx<=306 && my>=298 && my<=371 && coverImage==1 && quitButton == false )  //presses About Button and Opens About Page
	{
		coverImage = 4;
	}

	else if(mx>=99 && mx<=306 && my>=391 && my<=463 && coverImage==1 && quitButton == false )  //presses Help Button and Opens Help Page
	{
		coverImage = 3;
	}

	else if(mx>=99 && mx<=306 && my>=486 && my<=557 && coverImage==1 && quitButton == false )  //presses Game Menu Button and Opens Game Menu Page
	{
		coverImage = 2;
	}

	else if(mx>=516 && mx<=650 && my>=271 && my<=326 && quitButton ==true && coverImage==1)  //presses Yes Button and Exits from the game
	{
		exit(0);		
	}
		
	else if(mx>=754 && mx<=891 && my>=271 && my<=326 && quitButton ==true && coverImage==1)  //presses No Button and returns into Main Menu page from quit notification page
	{
		quitButton =false;
	}

	else if(mx>=1120 && mx<=1260 && my>=65 && my<=135  && coverImage==1 &&  !quitButton)
	{
		if(checkSound)
		{
			checkSound = false;
			PlaySound(NULL,0,0);
		}
		else if(!checkSound)
		{
			checkSound = true;
			playSound = true;
			playingSound();
		}
	}


	//******************************* CoverImage = 2 opens the Game Menu Page******************************************* 


	else if(mx>=118 && mx<=313 && my>=191 && my<=262 && coverImage==2)  //presses Main Menu Button and Opens the Main Menu page
	{
		coverImage = 1;
	}

	else if(mx>=119 && mx<=314 && my>=285 && my<=358 && coverImage==2)  //presses Challenge Button and Opens the Challenge Mode page
	{
		coverImage = 7;	
	}

	else if(mx>=118 && mx<=315 && my>=376 && my<=446 && coverImage==2)  //presses World Cup Button and Opens the World Cup Mode page
	{
		coverImage = 6;
	}

	else if(mx>=119 && mx<=314 && my>=472 && my<=544 && coverImage==2)  //presses Friendly Button and Opens the Friendly Mode page
	{
		coverImage = 5;
		
	}

	
		//******************************* CoverImage = 3 opens the Help Page******************************************* 

		

	else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 3)  //presses Back Button from Help Page and return into Main Menu page
	{
		coverImage = 1;
	}

		//******************************* CoverImage = 3 opens the About Page******************************************* 


	else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 4)	 //presses Back Button from About Page and returns into Main Menu page
	{
		coverImage = 1;
	}



	//******************************* CoverImage = 5 opens the Friendly Mode Page******************************************* 


	else if(mx>=170 && mx<=353 && my>=504 && my<=571 && coverImage==5)   //presses Single Player Button from Friendly Mode Page and Opens Own Team Selection Page
	{
		coverImage=8;
		single_mode = true;
	}

	else if(mx>=170 && mx<=355 && my>=416 && my<=482 && coverImage==5)   //presses Multi Player Button from Friendly Mode Page and Opens Own Team Selection Page
	{
		coverImage=8;
		multiPlayer_mode = true;
	}

	else if(mx>=170 && mx<=356 && my>=328 && my<=396 && coverImage==5)   //presses Game Mode Button from Friendly Page and returns into Game Menu page
	{
		coverImage=2;
	
	}

	//******************************* CoverImage = 6 opens the World Cup Mode Page******************************************* 


	else if(mx>=115 && mx<=285 && my>=178 && my<=240 && coverImage==6)  //presses Back Button from World Cup Mode Page and returns Game Mode Page
	{
		coverImage = 2;
	}

	else if(mx>=115 && mx<=285 && my>=255 && my<=317 && coverImage==6)  //presses Wall of Glory Button from World Cup Mode Page and Opens Wall of Glory Page
	{
		coverImage = 13;
	}

	else if(mx>=115 && mx<=285 && my>=334 && my<=398 && coverImage==6)  //presses Brackets Button from World Cup Mode Page and Opens Brackets Page
	{
		coverImage = 12;
	}

	else if(mx>=115 && mx<=285 && my>=417 && my<=478 && coverImage==6)  //presses Point Tables Button from World Cup Mode Page and Opens Point Table Page
	{
		pointTableRender = 0;
		coverImage = 20;
	}

	else if(mx>=115 && mx<=285 && my>=497 && my<=559 && coverImage==6)  //presses New Game Button from World Cup Mode Page and Opens Own Team Selection page
	{
		world_cup_team_selection = true;
		worldCup_mode = true;
		defaultTeamDataWc();
		coverImage = 8;
	}

	else if(mx>=115 && mx<=285 && my>=578 && my<=640 && coverImage==6)  //presses Continue Button from World Cup Mode Page and Opens Load Game data
	{
		if(groupRoundMatchNo !=1)
		{
			worldCup_mode = true;
			coverImage = 10;
		}
	}


	//******************************* CoverImage = 7 opens the Challenge Mode Page******************************************* 



	else if(mx>=175 && mx<=339 && my>=288 && my<=346 && coverImage==7)  //presses Game Menu Button from Challenge Mode Page and returns into Game Menu Page
	{
		coverImage = 2;
	}

	else if(mx>=175 && mx<=339 && my>=366 && my<=424 && coverImage==7)  //presses High Score Button from Challenge Mode Page and Opens High Score Page
	{
		coverImage = 15;
	}

	else if(mx>=175 && mx<=339 && my>=443 && my<=503 && coverImage==7)  //presses Instructions Button from Challenge Mode Page and Opens Instructions Page
	{
		coverImage = 14;
	
	}

	else if(mx>=175 && mx<=339 && my>=526 && my<=586 && coverImage==7)  //presses New Game Button from Challenge Mode Page and Opens Own Team Selection Page
	{
		
		coverImage = 8;
		challenge_mode = true;
		clockRender1 = 6;
		clockRender2 = 0;
		userDataChallenge.userScore = 0;
		userDataChallenge.userName[0] = '\0';

	}


	//******************************* CoverImage = 8 opens the Own Team Selection Page******************************************* 

	//If boolean variable world_cup_team_selection is true then Page will work for World Cup Mode else Page will work for Single/MultiPlayer/Challenge Mode(User's choice) Page 
	//Integer variable worldCupOwnTeam stores the value of Own Team in World Cup Mode and Integer variable yourTeamNumber stores the value of Own Team in Single/MultiPlayer/Challenge Mode
	//coverImage = 9 opens the Opponent Team Selection Page and  coverImage = 10 opens the Stadium Selection Page

	else if(mx>=46 && mx<=140 && my>=107 && my<=175 && coverImage==8)  //select Senegal
	{
			
		if(worldCup_mode)
		{
			worldCupOwnTeam = 24;
			coverImage = 10;

		}

		else
		{
			coverImage=9;
			yourTeamNumber = 24;
		}
	}


		
		
	else if(mx>=191 && mx<=287 && my>=108 && my<=178 && coverImage==8)  //select Serbia
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 25;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 25;
		}
	}

		

	else if(mx>=338 && mx<=434 && my>=110 && my<=178 && coverImage==8)  //select South Korea
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 26;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 26;
		}
	}

		
	else if(mx>=485 && mx<=581 && my>=110 && my<=178 && coverImage==8)  //select Spain
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 27;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 27;
		}

	}

		
		
	else if(mx>=632 && mx<=728 && my>=110 && my<=178 && coverImage==8)  //select Sweden
	{
			
		if(worldCup_mode)
		{
			worldCupOwnTeam = 28;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 28;
		}

	}
			
		

	else if(mx>=777 && mx<=873 && my>=108 && my<=176 && coverImage==8)  //select Switzerland
	{
			
		if(worldCup_mode)
		{
			worldCupOwnTeam = 29;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 29;
		}
	}
			
		

	else if(mx>=924 && mx<=1022 && my>=106 && my<=174 && coverImage==8)  //select Tunisia
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 30;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 30;
		}

	}


	else if(mx>=1073 && mx<=1169 && my>=108 && my<=176 && coverImage==8)  //select Uruguay
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 31;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 31;
		}
	}


		

	else if(mx>=46 && mx<=140 && my>=211 && my<=269 && coverImage==8)  //select Morocco
	{
				
		if(worldCup_mode)
		{
			worldCupOwnTeam = 16;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 16;
		}
	}

		
	else if(mx>=191 && mx<=287 && my>=211 && my<=269 && coverImage==8)  //select Nigeria
	{
			
		if(worldCup_mode)
		{
			worldCupOwnTeam = 17;
			coverImage = 10;

		}
		else
		{
		    coverImage = 9;
			yourTeamNumber = 17;
		}
	}

		

	else if(mx>=338 && mx<=434 && my>=211 && my<=269 && coverImage==8)  //select Panama
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 18;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 18;
		}

	}
		
	else if(mx>=485 && mx<=581 && my>=211 && my<=269 && coverImage==8)  //select Peru
	{
			
		if(worldCup_mode)
		{
			worldCupOwnTeam = 19;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 19;
		}

	}
			
		
		
	else if(mx>=632 && mx<=728 && my>=211 && my<=269 && coverImage==8)  //select Poland
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 20;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 20;
		}
	}

		
		
	
	else if(mx>=779 && mx<=875 && my>=211 && my<=269 && coverImage==8)  //select Portugal
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 21;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 21;
		}
	}
			
		
	else if(mx>=926 && mx<=1022 && my>=211 && my<=269 && coverImage==8)  //select Russia
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 22;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 22;
		}
	}
		
	else if(mx>=1073 && mx<=1169 && my>=211 && my<=269 && coverImage==8)  //select Saudi Arabia
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 23;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 23;
		}
	}

		
		
	else if(mx>=44 && mx<=138 && my>=316 && my<=376 && coverImage==8)  //select Egypt
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 8;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 8;
		}
	}

		

	else if(mx>=191 && mx<=287 && my>=314 && my<=374  && coverImage==8)  //select England
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam =9;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 9;
		}

		}
			
		

	else if(mx>=338 && mx<=434 && my>=314 && my<=374 && coverImage==8 )  //select France
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 10;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 10;
		}
	}
			
		
		

	else if(mx>=485 && mx<=581 && my>=313 && my<=373 && coverImage==8 )  //select Germany
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 11;
			coverImage = 10;
		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 11;
		}

	}
		

	else if(mx>=632 && mx<=728 && my>=312 && my<=372 && coverImage==8 )  //select Iceland
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 12;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 12;
		}
	}

		
		
	else if(mx>=779 && mx<=875 && my>=311 && my<=371 && coverImage==8)  //select Iran
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 13;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 13;
		}
	}
		

	else if(mx>=926 && mx<=1022 && my>=311 && my<=371 && coverImage==8 )  //select Japan
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 14;
			coverImage = 10;
		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 14;
		}
	}

		

	else if(mx>=1073 && mx<=1169 && my>=311 && my<=371 && coverImage==8 )  //select Mexico
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 15;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 15;
		}
	}
		
	else if(mx>=44 && mx<=138 && my>=421 && my<=481 && coverImage==8)  //select Argentina
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 0;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 0;
		}
	}
		

	else if(mx>=191 && mx<=287 && my>=421 && my<=481 && coverImage==8)  //select Australia
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 1;
			coverImage = 10;

		}
		else
		{
			coverImage = 9;
				yourTeamNumber = 1;
		}
	}
		
	else if(mx>=338 && mx<=434 && my>=421 && my<=481 && coverImage==8)  //select Belgium
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 2;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 2;
		}
	}
		
		
	else if(mx>=485 && mx<=581 && my>=421 && my<=481 && coverImage==8)  //select Brazil
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 3;
			coverImage = 10;

		}
			
		else
		{
			coverImage = 9;
			yourTeamNumber = 3;
		}
	}
		

	else if(mx>=632 && mx<=728 && my>=421 && my<=481 && coverImage==8)  //select Colombia
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam =4;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 4;
		}
	}
		

	else if(mx>=779 && mx<=875 &&  my>=421 && my<=481 && coverImage==8)  //select Costa Rica
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam =  5;
			coverImage = 10;
		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 5;
		}
	}
		

	else if(mx>=926 && mx<=1022 && my>=421 && my<=481 && coverImage==8)  //select Croatia
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 6;
			coverImage = 10;

		}

		else
		{
			coverImage = 9;
			yourTeamNumber = 6;
		}
	}
		
		
	else if(mx>=1073 && mx<=1169 && my>=421 && my<=481 && coverImage==8)  //select Denmark
	{
		if(worldCup_mode)
		{
			worldCupOwnTeam = 7;
			coverImage = 10;

		}
			
		else
		{
			coverImage = 10;
			yourTeamNumber = 7;
		}
	}

		

	//******************************* CoverImage = 9 opens the Opponent Team Selection Page******************************************* 
		
	// Cover Image = 10 Opens the Stadium Selection Page
	//Integer variable opponentTeamNumberr stores the value of Opponent Team in Single/MultiPlayer/Challenge Mode
		
		
	else if(mx>=46 && mx<=140 && my>=107 && my<=175 && coverImage==9)  //select Senegal
	{
		coverImage = 10;
		opponentTeamNumber = 24;		
	}
			
			
	else if(mx>=191 && mx<=287 && my>=108 && my<=178 && coverImage==9)  //select Serbia
	{
		coverImage = 10;
		opponentTeamNumber = 25;
	}
	
	else if(mx>=338 && mx<=434 && my>=110 && my<=178 && coverImage==9)  //select South Korea
	{
		coverImage = 10;
		opponentTeamNumber = 26;
	}
		
	else if(mx>=485 && mx<=581 && my>=110 && my<=178 && coverImage==9)  //select Spain
	{
		coverImage = 10;
		opponentTeamNumber = 27;
	}
	
	else if(mx>=632 && mx<=728 && my>=110 && my<=178 && coverImage==9)  //select Sweden
	{
		coverImage = 10;
		opponentTeamNumber = 28;
	}
	

	else if(mx>=777 && mx<=873 && my>=108 && my<=176 && coverImage==9)  //select Switzerland
	{
		coverImage = 10;
		opponentTeamNumber = 29;
	}
		
	else if(mx>=924 && mx<=1022 && my>=106 && my<=174 && coverImage==9)  //select Tunisia
	{
		coverImage = 10;
		opponentTeamNumber = 30;
	}

	else if(mx>=1073 && mx<=1169 && my>=108 && my<=176 && coverImage==9)  //select Uruguay
	{
		coverImage = 10;
		opponentTeamNumber = 31;
	}
		
	else if(mx>=46 && mx<=140 && my>=211 && my<=269 && coverImage==9)  //select Morocco
	{
		coverImage = 10;
		opponentTeamNumber = 16;
	}

	else if(mx>=191 && mx<=287 && my>=211 && my<=269 && coverImage==9)  //select Nigeria
	{
		coverImage = 10;
		opponentTeamNumber = 17;
	}

	else if(mx>=338 && mx<=434 && my>=211 && my<=269 && coverImage==9)  //select Panama
	{
		coverImage = 10;
		opponentTeamNumber = 18;
	}
		
	else if(mx>=485 && mx<=581 && my>=211 && my<=269 && coverImage==9)  //select Peru
	{
		coverImage = 10;
		opponentTeamNumber = 19;
	}
		
	else if(mx>=632 && mx<=728 && my>=211 && my<=269 && coverImage==9)  //select Poland
	{
		coverImage = 10;
		opponentTeamNumber = 20;
	}

	else if(mx>=779 && mx<=875 && my>=211 && my<=269 && coverImage==9)  //select Portugal
	{
		coverImage = 10;
		opponentTeamNumber = 21;
	}

	else if(mx>=926 && mx<=1022 && my>=211 && my<=269 && coverImage==9)  //select Russia
	{
		coverImage = 10;
		opponentTeamNumber = 22;
	}
		
	else if(mx>=1073 && mx<=1169 && my>=211 && my<=269 && coverImage==9) //select Saudi Arabia
	{
		coverImage = 10;
		opponentTeamNumber = 23;
	}
		
	else if(mx>=44 && mx<=138 && my>=316 && my<=376 && coverImage==9)  //select Egypt
	{
		coverImage = 10;
		opponentTeamNumber = 8;
	}
		
	else if(mx>=191 && mx<=287 && my>=314 && my<=374  && coverImage==9)  //select England
	{
		coverImage = 10;
		opponentTeamNumber = 9;
	}
	
	else if(mx>=338 && mx<=434 && my>=314 && my<=374 && coverImage==9)  //select France
	{
		coverImage = 10;
		opponentTeamNumber = 10;
	}

	else if(mx>=485 && mx<=581 && my>=313 && my<=373 && coverImage==9)  //select Germany
	{
		coverImage = 10;
		opponentTeamNumber = 11;
	}
		
	else if(mx>=632 && mx<=728 && my>=312 && my<=372 && coverImage==9)  //select Iceland
	{
		coverImage = 10;
		opponentTeamNumber = 12;
	}
		
	else if(mx>=779 && mx<=875 && my>=311 && my<=371 && coverImage==9)  //select Iran
	{
		coverImage = 10;
		opponentTeamNumber = 13;
	}
			
	else if(mx>=926 && mx<=1022 && my>=311 && my<=371 && coverImage==9)  //select Japan
	{
		coverImage = 10;
		opponentTeamNumber = 14;
	}
		
	else if(mx>=1073 && mx<=1169 && my>=311 && my<=371 && coverImage==9)  //select Mexico
	{
		coverImage = 10;
		opponentTeamNumber = 15;
	}
	
	else if(mx>=44 && mx<=138 && my>=421 && my<=481 && coverImage==9)     //select Argentina
	{
		coverImage = 10;
		opponentTeamNumber = 0;
	}
			
	else if(mx>=191 && mx<=287 && my>=421 && my<=481 && coverImage==9)  //select Australia
	{
		coverImage = 10;
		opponentTeamNumber = 1;
	}
		
	else if(mx>=338 && mx<=434 && my>=421 && my<=481 && coverImage==9)  //select Belgium
	{
		coverImage = 10;
		opponentTeamNumber = 2;
	}
		
	else if(mx>=485 && mx<=581 && my>=421 && my<=481 && coverImage==9)  //select Brazil
	{
		coverImage = 10;
		opponentTeamNumber = 3;
	}
	
	else if(mx>=632 && mx<=728 && my>=421 && my<=481 && coverImage==9)  //select Colombia
	{
		coverImage = 10;;
		opponentTeamNumber = 4;
	}
			
	else if(mx>=779 && mx<=875 &&  my>=421 && my<=481 && coverImage==9)  //select Costa Rica
	{
		coverImage = 10;
		opponentTeamNumber = 5;
	}
		
		
	else if(mx>=926 && mx<=1022 && my>=421 && my<=481 && coverImage==9)  //select Croatia
	{
		coverImage = 10;
		opponentTeamNumber = 6;
	}
		
	else if(mx>=1073 && mx<=1169 && my>=421 && my<=481 && coverImage==9)  //select Denmark
	{
		coverImage = 10;
		opponentTeamNumber = 7;
	}
			

	//******************************* CoverImage = 10 opens the Stadium Selection Page******************************************* 
	//If boolean variable world_cup_team_selection is true then Page will work for World Cup Mode else Page will work for Single/MultiPlayer/Challenge Mode(User's choice) Page 
	//Integer variable worldCupStadiumNumber stores the value of Stadium Number in World Cup Mode and Integer variable stadiumNumber stores the value of Own Team in Single/MultiPlayer/Challenge Mode
		


	else if(mx>=65 && mx<=365 && my>=365 && my<=530 && coverImage==10)  //Santiago Bernabéu Stadium
	{
			
		if(worldCup_mode)
		{
			worldCupStadiumNumber = 0;
		}

		else
		{
			stadiumNumber = 0;
		}

		coverImage = 11;
	}

	else if(mx>=450 && mx<=750 && my>=365 && my<=530 && coverImage==10)  //Allianz Stadium
	{
		if(worldCup_mode)
		{
			worldCupStadiumNumber = 1;
		}

		else
		{
			stadiumNumber = 1;
		}

		coverImage = 11;
	}

	else if(mx>=845 && mx<=1145 && my>=365 && my<=530 && coverImage==10)  //Camp Nuo Stadium
	{
		if(worldCup_mode)
		{
			worldCupStadiumNumber = 2;
		}

		else
		{
			stadiumNumber = 2;
		}

		coverImage = 11;
	}

	else if(mx>=65 && mx<=365 && my>=100 && my<=265 && coverImage==10)  //Luzhniki Stadium
	{
		if(worldCup_mode)
		{
			worldCupStadiumNumber = 3;
		}

		else
		{
			stadiumNumber = 3;
		}

		coverImage = 11;
	}


	else if(mx>=450 && mx<=750 && my>=100 && my<=265 && coverImage==10)  //Old Trafford Stadium
	{
		if(worldCup_mode)
		{
			worldCupStadiumNumber = 4;
		}

		else
		{
			stadiumNumber = 4;
		}

		coverImage = 11;

	}

	else if(mx>=845 && mx<=1145 && my>=100 && my<=265 && coverImage==10)  //Bangabandhu Stadium
	{
		if(worldCup_mode)
		{
			worldCupStadiumNumber = 5;
		}

		else
		{
			stadiumNumber = 5;
		}

			coverImage = 11;
	}

		
		

	else if(mx>=1160 && mx<=1300 && my>=300 && my<=370 && coverImage==11)  //presses Next Button from Match Starts Summary Page and Opens Own Team Line Up page
	{
		
		coverImage = 18;

	}
	
	else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 12)  //presses Back Button from Brackets Page and returns into World Cup Mode page
	{
			coverImage = 6;
	}

	else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 13) //presses Back Button from Wall of Glory Page and returns into World Cup Mode page
	{
		coverImage = 6;
	}

	else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 14)  //presses Back Button from Challenge Instruction Page and returns into Challenge Mode page
	{
		coverImage = 7;
	}

	else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 15)  //presses Back Button from Challenge HighScore Page and returns into Challenge Mode page
	{
		coverImage = 7;
	}

	else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 16)  //presses Back Button from GamePicture Page and returns Game Mode page
	{
		coverImage = 17;
		if(ownTotalShootNo+opponentTotalShootNo<10 && !challenge_mode)
		{
			ownGoalCount = 0;
			opponentGoalCount = 3;
			userDataChallenge.userScore = -100;
		}

		resetValues();
		glovesRun = false;
		playSound = true;
		playingSound();
	}


	else if(mx>=747 && mx<=940 && my>=455 && my<=497 && challenge_mode  && coverImage==17)  //presses write name Button from MatchEndSummary Page and starts writing name
	{
		writeName = true;
	}	

	else if(mx>=1025 && mx<=1125 && my>=430 && my<=465 && challenge_mode  && coverImage==17 && writeName)  //presses Enter Button from MatchEndSummary Page and stops writing name
	{
		writeName = false;
	}

	else if(mx>=1025 && mx<=1125 && my>=520 && my<=555 && challenge_mode  && coverImage==17 && writeName)  //presses backSpace Button from MatchEndSummary Page and delete last character of name
	{
		if(strlen(userDataChallenge.userName)>0)
		{
			int i = strlen(userDataChallenge.userName);
			userDataChallenge.userName[i-1] = '\0';
		}
	}
	else  if(mx>=1160 && mx<=1300 && my>=300 && my<=370 && coverImage==17)  //presses Next Button from Match End Summary Page and goes Game Mode page
	{
		if(final && ownGoalCount>opponentGoalCount)
		{
			coverImage = 21;
		}
			
		else if(!challenge_mode || (strlen(userDataChallenge.userName)>1  && !writeName))
			storeDefaultData();
			
	}

	else if(mx>=1160 && mx<=1300 && my>=300 && my<=370 && coverImage==18) //presses Next Button from Own Team Selection Page and opens Opponent Team Selection page
	{
		coverImage = 19;
		
	}

	else if(mx>=1160 && mx<=1300 && my>=300 && my<=370 && coverImage==19)  //presses Next Button from Opponent Team Selection Page and opens Game Picture page
	{
		coverImage = 16;
		PlaySound(NULL,0,0);
	}


	else if(mx>=48 && mx<=127&& my>=633 && my<=672 && coverImage == 20) //presses Back Button from Point Table Page and returns into World Cup Mode page
	{
		coverImage = 6;
	}

	else if(mx>=1220 && mx<=1300 && my>=300 && my<=370 && coverImage==20)  //presses Next Button from Point Table Page and switches between all Group Point Table page
	{
		if(pointTableRender==7)
			pointTableRender = 0;
		else
			pointTableRender++;
		
	}


	else if(mx>=747 && mx<=940 && my>=455 && my<=497 && worldCup_mode  && coverImage==21)  //presses write name Button from trophyWc Page and starts writing name
	{
		writeName = true;
	}	

	else if(mx>=1025 && mx<=1125 && my>=430 && my<=465 && worldCup_mode  && coverImage==21 && writeName)  //presses Enter Button from trophyWc Page Page and stops writing name
	{
		writeName = false;
	}

	else if(mx>=1025 && mx<=1125 && my>=520 && my<=555  && worldCup_mode  && coverImage==21 && writeName)  //presses backSpace Button from trophyWc Page and delete last character of name
	{
		if(strlen(userGlory.userName)>0)
		{
			int i = strlen(userGlory.userName);
			userGlory.userName[i-1] = '\0';
		}
	}
	else  if(mx>=1160 && mx<=1300 && my>=300 && my<=370 && coverImage==21  &&  strlen(userGlory.userName)>1 && !writeName)  //presses Next Button from trophyWc Page and goes Game Mode page
	{
		storeDefaultData();
	}
}


#endif