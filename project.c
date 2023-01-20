#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_TEAMS 4
#define MAX_NAME_LENGTH 20
#define MAX_GAMES_PER_TEAM 5

typedef struct {
    char name[MAX_NAME_LENGTH];
    int gamesPlayed;
    int gamesWon;
    int gamesLost;
    int gamesTied;
    int points;
} Team;

typedef struct {
    Team *team1;
    Team *team2;
    int team1Score;
    int team2Score;
} Game;

void printTeam(Team *team) {
    printf("____________________________________________\n");
    printf("%s\n", team->name);
    printf("*******Games Played:********* %d\n", team->gamesPlayed);
    printf("*******Games Won: ************%d\n", team->gamesWon);
    printf("********Games Lost: **********%d\n", team->gamesLost);
    printf("********Games Tied: **********%d\n", team->gamesTied);
    printf("*********Points: *************%d\n", team->points);
     printf("____________________________________________\n");
}

void printGame(Game *game) {
    printf("%s %d - %d %s\n", game->team1->name, game->team1Score, game->team2Score, game->team2->name);
}

void printSchedule(Game *schedule[], int numGames) {
    for (int i = 0; i < numGames; i++) {
        printGame(schedule[i]);
    }
}

void printStandings(Team *teams[], int numTeams) {
    for (int i = 0; i < numTeams; i++) {
        printTeam(teams[i]);
    }
}

void playGame(Game *game) {
    game->team1Score = rand() % 10;
    game->team2Score = rand() % 10;
    game->team1->gamesPlayed++;
    game->team2->gamesPlayed++;
    if (game->team1Score > game->team2Score) {
        game->team1->gamesWon++;
        game->team2->gamesLost++;
        game->team1->points += 3;
    } else if (game->team1Score < game->team2Score) {
        game->team1->gamesLost++;
        game->team2->gamesWon++;
        game->team2->points += 3;
    } else {
        game->team1->gamesTied++;
        game->team2->gamesTied++;
        game->team1->points++;
        game->team2->points++;
    }
}

void playSchedule(Game *schedule[], int numGames) {
    for (int i = 0; i < numGames; i++) {
        playGame(schedule[i]);
    }
}

void sortTeams(Team *teams[], int numTeams) {
    for (int i = 0; i < numTeams; i++) {
        for (int j = 0; j < numTeams - 1; j++) {
            if (teams[j]->points < teams[j + 1]->points) {
                Team *temp = teams[j];
                teams[j] = teams[j + 1];
                teams[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a;
    system("COLOR 0D");
    printf("````````````````````````````WELCOME TO MY PROJECT```````````````````````````````````````````````````");
    printf("___________________________________________\n");
    printf("**PRESS 1 FOR PLAYER ASSIGNMENT\n");
    printf("**PRESS 2 FOR TEAMS ASSIGN AND SCORE** \n");
    printf("**PRESS 3 FOR LIVE SCORES****\n");
    printf("___________________________________________\n");
    scanf("%d",&a);
    if(a==1){
       


    char playerName[100];
    int playerAbility;
    char teamName[100];
    printf("_____________________________________________________\n");
    printf("***Enter player name****: ");
    scanf("%s", playerName);

    printf("****Enter player ability (1-10)***: ");
    scanf("%d", &playerAbility);

    if (playerAbility >= 8) {
        strcpy(teamName, "Team A");
    } else {
        strcpy(teamName, "Team B");
    }

    printf("-----%s has been assigned to %s---\n", playerName, teamName);
    printf("_____________________________________________________________\n");
    
}
if(a==3){
    struct batsman
 {
   char name[25];
   int runs,score,balls,toruns,tobal,ones,twos,threes,fours,sixes;
   int max_six,max_run,max_four;
   float str;

 }pl1[100],pl3;


struct bowler
 {
   char name[25];
   int runsgv,wkttkn,overs;
   int max_w;
   float econ;
 }pl2[100],pl4;



{
 int plno,choice;
  int i,n,m;
  printf("----Enter the Batsman detail--:\n");
  printf("Enter the number of batsman:\n");
  scanf("%d",&m);
  for(i=0;i<m;i++)
   {

       printf("----Enter name of batsman%d----:\n",i+1);
       scanf("%s",pl1[i].name);


       printf("----Enter the number of ones scored by player%d-----:\n ",i+1);
       scanf("%d",&pl1[i].ones);


       printf("----Enter the number of twos scored by player%d----:\n ",i+1);
       scanf("%d",&pl1[i].twos);


       printf("----Enter the number of threes scored by player%d----:\n ",i+1);
       scanf("%d",&pl1[i].threes);


       printf("----Enter the number of fours scored by player%d---:\n ",i+1);
       scanf("%d",&pl1[i].fours);


       printf("----Enter the number of sixes scored by player%d----:\n ",i+1);
       scanf("%d",&pl1[i].sixes);


       printf("----Enter the balls played by the player%d----:\n",i+1);
       scanf("%d",&pl1[i].balls);
   }



   printf("----Enter the bowlers details----:\n");

   printf("----Enter the number of bowlers----:\n");

   scanf("%d",&n);


   for(i=0;i<n;i++)
   {

       printf("----Enter name of bowler%d----:",i+1);
       scanf("%s",pl2[i].name);


       printf("----Enter the runs given by the bowler%d----:\n ",i+1);
       scanf("%d",&pl2[i].runsgv);


       printf("----Enter the overs bowled by the bowler%d----:\n",i+1);
       scanf("%d",&pl2[i].overs);


       printf("----Enter the wickets taken by the bowler%d\n----",i+1);
       scanf("%d",&pl2[i].wkttkn);

   }

   printf("*****Thank you all details are recorded******\n");


   do
    {

       printf("Enter the choice:\n 1)Batsman detail:\n 2)Bowlers detail:\n 3)Match summary:\n 4)Record:\n 5)Exit\n ");
       scanf("%d",&choice);

     switch(choice)
      {

        case 1:
              printf("Enter the batsman number to see his details\n");
              scanf("%d",&plno);

              plno--;
              printf("                       Player Detail\n");
              printf("===========================================================================\n");
              printf(" Batsman        runs           balls        fours       sixes         sr   \n");
              printf("===========================================================================\n");


              pl1[plno].runs=(1*pl1[plno].ones)+(2*pl1[plno].twos)+(3*pl1[plno].threes)+(4*pl1[plno].fours)+(6*pl1[plno].sixes);
              pl1[plno].str=(pl1[plno].runs*100.00)/pl1[plno].balls;
              printf(" %-15s %-14d %-13d %-11d %-11d %-9.2f\n\n",pl1[plno].name,pl1[plno].runs,pl1[plno].balls,pl1[plno].fours,pl1[plno].sixes,pl1[plno].str);

              break;


        case 2:
             printf("Enter the bowlers number to see his details\n");
             scanf("%d",&plno);

             plno--;
              printf("                         Player Detail\n  ");
              printf("=================================================================\n");
              printf(" Bowler        overs           runs        wicket       economy\n");
              printf("=================================================================\n");

               for(i=0;i<n;i++)
               {   pl2[plno].econ=pl2[plno].runsgv/pl2[plno].overs;
                   printf(" %-15s %-14d %-13d %-11d %-11.2f\n\n",pl2[plno].name,pl2[plno].overs,pl2[plno].runsgv,pl2[plno].wkttkn,pl2[plno].econ);
               }

             break;

        case 3:
              printf("                     Match summary\n");
              printf("==========================================================================\n");
              printf(" Batsman        runs           balls        fours       sixes         sr   \n");
              printf("==========================================================================\n");

              for(i=0;i<1;i++)
                {
                    pl1[i].runs=(1*pl1[i].ones)+(2*pl1[i].twos)+(3*pl1[i].threes)+(4*pl1[i].fours)+(6*pl1[i].sixes);
                    pl3.toruns+=pl1[i].runs;
                    pl1[i].str=(pl1[i].runs*100.00)/pl1[i].balls;
                    printf(" %-15s %-14d %-13d %-11d %-11d %-9.2f\n\n",pl1[i].name,pl1[i].runs,pl1[i].balls,pl1[i].fours,pl1[i].sixes,pl1[i].str);
                }
                printf("TOTAL RUNS:%d\n\n",pl3.toruns);
              printf("\n\n");
              printf("=================================================================\n");
              printf(" Bowler        overs           runs        wicket       economy\n");
              printf("=================================================================\n");

               for(i=0;i<n;i++)
               {   pl2[i].econ=pl2[i].runsgv/pl2[i].overs;
                   printf(" %-15s %-14d %-13d %-11d %-11.2f\n\n\n",pl2[i].name,pl2[i].overs,pl2[i].runsgv,pl2[i].wkttkn,pl2[i].econ);
               }


               break;

        case 4: pl3.max_run=0,pl4.max_w=0,pl3.max_four=0,pl3.max_six=0;
       
                for(i=0;i<m;i++)
                  { 
                     pl1[i].runs=(1*pl1[i].ones)+(2*pl1[i].twos)+(3*pl1[i].threes)+(4*pl1[i].fours)+(6*pl1[i].sixes);
                     if(pl3.max_run<pl1[i].runs)
                        {
                          pl3.max_run=pl1[i].runs;

                        }
                 
                     if(pl3.max_six<pl1[i].sixes)
                       {
                        pl3.max_six=pl1[i].sixes;
                       }
                 
                     if(pl3.max_four<pl1[i].fours)
                       {
                        pl3.max_four=pl1[i].fours;
                       }
 
                     if(pl4.max_w<pl2[i].wkttkn)
                      {
                      pl4.max_w=pl2[i].wkttkn;
                      }
                  }
              printf("Highest runs scored by the batsman:%d\n",pl3.max_run);
   
              printf("Maximum fours scored by the batsman:%d\n",pl3.max_four);

              printf("Maximum sixes scored by the batsman%d:\n",pl3.max_six);
 
             printf("Maximum wickets taken by the bowler:%d\n",pl4.max_w);

             break;



        case 5:
            exit(1);

        default:
             printf("Enter the correct choice\n");
             break;

      }

    }while(choice!=5);


   return 0;

}
    
}
    
    if(a==2){
    srand(time(NULL));
    Team *teams[MAX_TEAMS];
    int numTeams = 0;
    char name[MAX_NAME_LENGTH];
    while (numTeams < MAX_TEAMS) {
        printf("********Enter team name ***********:");
        scanf("%s", name);
        if (strcmp(name, "done") == 0) {
            break;
        }
        Team *team = (Team *) malloc(sizeof(Team));
        strcpy(team->name, name);
        team->gamesPlayed = 0;
        team->gamesWon = 0;
        team->gamesLost = 0;
        team->gamesTied = 0;
        team->points = 0;
        teams[numTeams] = team;
        numTeams++;
    }
    Game *schedule[MAX_TEAMS * MAX_GAMES_PER_TEAM];
    int numGames = 0;
    for (int i = 0; i < numTeams; i++) {
        for (int j = 0; j < numTeams; j++) {
            if (i != j) {
                Game *game = (Game *) malloc(sizeof(Game));
                game->team1 = teams[i];
                game->team2 = teams[j];
                game->team1Score = 0;
                game->team2Score = 0;
                schedule[numGames] = game;
                numGames++;
            }
        }
    }
    playSchedule(schedule, numGames);
    sortTeams(teams, numTeams);
    printStandings(teams, numTeams);
    printSchedule(schedule, numGames);
    return 0;
    }
}
