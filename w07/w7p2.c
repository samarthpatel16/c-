/*
   *****************************************************************************
               <assessment name example: Workshop - #7 (Part-2)>
    Name   :samarth patel
    ID     :150061208
    Email  :sspatel65@myseneca.ca
    Section:btp100NBB

    Authenticity Declaration:
    I declare this submission is the result of my own work and has not been
    shared with any other student or 3rd party content provider. This submitted
    piece of work is entirely of my own creation.
    *****************************************************************************
*/


#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

#define MIN_LIVES 1

#define MAX_LIVES 10

#define MIN_PATHLENGTH 10

#define MAX_PATHLENGTH 70

#define MULTIPLE 5

#define MIN_MOVE 1

struct gameinfo
{
	int totel_pathlength;

	int bomb_dang[MAX_PATHLENGTH];

	int price_tresu[MAX_PATHLENGTH];

	int travel_move;

};


struct playerinfo
{
	char charac;

	int life;

	int previous_old[MAX_PATHLENGTH];

	int clalucltor_treasure;


};


int main(void)
{




	struct playerinfo Player_Config = { 0,0,{0},0 };

	struct gameinfo Game_config = { 0,{0},{0},0 };

	int max_moves;

	int nex_move=0;

	char present[MAX_PATHLENGTH] = { 0 };

	int limit = 5;

	int stopvar = 1;



	printf("================================\n"

	"         Treasure Hunt!\n"

	"================================\n"

	"\nPLAYER Configuration\n"

	"--------------------\n"

	"Enter a single character to represent the player: ");





	scanf(" %c", &Player_Config.charac);



	while (stopvar)

	{

		printf("Set the number of lives: ");

		scanf(" %d", &Player_Config.life);



		if (Player_Config.life  < MIN_LIVES || Player_Config.life > MAX_LIVES) //using conditional statement
		{

			printf("     Must be between 1 and 10!\n");


		}
		else//using conditional statement

		{
			printf("Player configuration set-up is complete\n");
			stopvar = 0;
		}
	}


	printf("\nGAME Configuration\n"

	"------------------\n");

	stopvar = 1;




	while (stopvar)

	{

		printf("Set the path length (a multiple of %d between %d-%d): ", MULTIPLE, MIN_PATHLENGTH, MAX_PATHLENGTH);

		scanf(" %d", &Game_config.totel_pathlength);

		if ( Game_config.totel_pathlength < MAX_PATHLENGTH || Game_config.totel_pathlength > MIN_PATHLENGTH )//using conditional statement



		{

			if (Game_config.totel_pathlength % MULTIPLE == 0)//using conditional statement


			{

				stopvar = 0;

			}

			else//using conditional statement

			{


				printf("     Must be a multiple of %d and between %d-%d!!!", MULTIPLE, MIN_PATHLENGTH, MAX_PATHLENGTH);

				printf("\n");

			}

		}

		else//using conditional statement

		{

			printf("     Must be a multiple of %d and between %d-%d!!!", MULTIPLE, MIN_PATHLENGTH, MAX_PATHLENGTH);

			printf("\n");

		}

	}




	stopvar = 2;

	max_moves = (Game_config.totel_pathlength * 75) / 100;

	while (stopvar)
	{

		printf("Set the limit for number of moves allowed: ");

		scanf(" %d", &Game_config.travel_move);

		if (Game_config.travel_move <= max_moves)//using conditional statement

		{

			if (Game_config.travel_move < Player_Config.life)//using conditional statement

			{



				printf("    Value must be between %d and %d", Player_Config.life, max_moves);

				printf("\n");

			}



			else//using conditional statement

			{

				stopvar = 0;

			}

		}

		else//using conditional statement

		{

			printf("    Value must be between %d and %d\n", Player_Config.life, max_moves);

		}

	}





	printf("\nBOMB Placement\n"

	"--------------\n"

	"Enter the bomb positions in sets of 5 where a value\n"

	"of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n"

	"(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", Game_config.totel_pathlength);



	int p ;

	int q ;



	for (p = 0; p < Game_config.totel_pathlength; p = p + 5) //using for loop

	{

		printf("   Positions [%2d-%2d]: ", p + 1, p + 5);



		for (q = p; q < limit; q++)//using for loop

		{

			scanf(" %d", &Game_config.bomb_dang[q]);

		}

		limit = limit + 5;

	}



	printf("BOMB placement set\n"



	"\nTREASURE Placement\n"

	"------------------\n"

	"Enter the treasure placements in sets of 5 where a value\n"

	"of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");

	printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", Game_config.totel_pathlength);



	limit = 5;



	for (p = 0; p < Game_config.totel_pathlength; p = p + 5)//using for loop

	{

		printf("   Positions [%2d-%2d]: ", p + 1, p + 5);



		for (q = p; q < limit; q = q + 1)//using for loop

		{

			scanf(" %d", &Game_config.price_tresu[q]);

		}

		limit = limit + 5;

	}



	printf("TREASURE placement set\n"



	"\nGAME configuration set-up is complete...\n"

	"\n------------------------------------\n"

	"TREASURE HUNT Configuration Settings\n"

	"------------------------------------\n"



	"Player:\n");

	printf("   Symbol     : %c\n", Player_Config.charac);

	printf("   Lives      : %d\n", Player_Config.life);

	printf("   Treasure   : [ready for gameplay]\n"

	"   History    : [ready for gameplay]\n"



	"\nGame:\n");



	printf("   Path Length: %d\n", Game_config.totel_pathlength);



	printf("   Bombs      : ");



	for (p = 0; p < Game_config.totel_pathlength; p = p + 1)//using for loop

	{

		printf("%d", Game_config.bomb_dang[p]);



	}





	printf("\n   Treasure   : ");

	for (p = 0 ; p < Game_config.totel_pathlength; p = p + 1)//using for loop

	{



		printf("%d", Game_config.price_tresu[p]);



	}



	printf("\n\n====================================\n"

	"~ Get ready to play TREASURE HUNT! ~\n"

	"====================================\n");



	for (p = 0; p < Game_config.totel_pathlength; p = p + 1 )//using for loop

	{

		Player_Config.previous_old[p] = '-';

	}





	stopvar = 1;



    do

	{

                              printf("\n  ");

		for (p = 0; p < Game_config.totel_pathlength; p = p + 1)//using for loop

		{

				printf("%c", Player_Config.previous_old[p]);



		}

		printf("\n  ");





			for (p = 0; p < Game_config.totel_pathlength; p = p + 1)//using for loop

		{

			if ((p + 1) % 10 == 0)//using conditional statement

			{

				printf("%d", (p + 1) / 10);



			}

			else//using conditional statement

			{

				printf("|");



			}



		}

		printf("\n  ");

		int j;

		for (p = 0; p < Game_config.totel_pathlength; p = p + 1)//using for loop

		{

			printf("%d", (p + 1) % 10);



		}

		printf("\n");



		printf("+---------------------------------------------------+\n");

		printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", Player_Config.life, Player_Config.clalucltor_treasure, Game_config.travel_move);

		printf("+---------------------------------------------------+\n");









		if (Game_config.travel_move == 0 || Player_Config.life == 0)//using conditional statement

		{

			printf("\n##################\n"

			"#   Game over!   #\n"

			"##################\n"

			"\nYou should play again and try to beat your score!\n");

			break;

		}

		else

              {

			do

			{

				printf("Next Move [%d-%d]: ", MIN_MOVE, Game_config.totel_pathlength);

				scanf("%d", &nex_move);

				if ( nex_move > 20 || nex_move < 1 )

				{

					printf("  Out of Range!!!\n");

				}

			} while (  nex_move > 20 || nex_move < 1);

		}













		for (j = 0; j < Game_config.totel_pathlength; j = j + 1)//using for loop

		{

			present[j] = '-';

		}







		 if (Game_config.bomb_dang[nex_move - 1] == 1 && Game_config.price_tresu[nex_move - 1] == 0)//using conditional statement

		{

			present[nex_move - 1] = '!';

		}



		else if (Game_config.bomb_dang[nex_move - 1] == 1 && Game_config.price_tresu[nex_move - 1] == 1)//using conditional statement

		{

			present[nex_move - 1] = '&';

		}









		else if ((Game_config.bomb_dang[nex_move - 1] == 0 && Game_config.price_tresu[nex_move - 1] == 1))//using conditional statement

		{

			present[nex_move - 1] = '$';

		}

		else if ((Game_config.bomb_dang[nex_move - 1] == 0 && Game_config.price_tresu[nex_move - 1] == 0))//using conditional statement

		{

			present[nex_move - 1] = '.';

		}



        stopvar = 1;

		if (present[nex_move - 1] != Player_Config.previous_old[nex_move - 1])//using conditional statement

		{





		 if ((Game_config.bomb_dang[nex_move - 1] == 0 && Game_config.price_tresu[nex_move - 1] == 0))//using conditional statement

			{

				printf("\n===============> [.] ...Nothing found here... [.]\n\n");

				Player_Config.previous_old[nex_move - 1] = '.';

                                Game_config.travel_move--;

			}



		else if ((Game_config.bomb_dang[nex_move - 1] == 1 && Game_config.price_tresu[nex_move - 1] == 1))//using conditional statement

			{

				printf("\n===============> [&] !!! BOOOOOM !!! [&]\n"

				"===============> [&] $$$ Life Insurance Payout!!! [&]\n\n");

				Player_Config.previous_old[nex_move - 1] = '&';

				Player_Config.life--;

				Player_Config.clalucltor_treasure++;

                                Game_config.travel_move--;

			}



			else if ((Game_config.bomb_dang[nex_move - 1] == 1 && Game_config.price_tresu[nex_move - 1] == 0))//using conditional statement

			{

				printf("\n===============> [!] !!! BOOOOOM !!! [!]\n\n");

				Player_Config.previous_old[nex_move - 1] = '!';

				Player_Config.life--;

                                Game_config.travel_move--;

			}





			else if ((Game_config.bomb_dang[nex_move - 1] ==0  && Game_config.price_tresu[nex_move - 1] == 1))//using conditional statement

			{

				printf("\n===============> [$] $$$ Found Treasure! $$$ [$]\n\n");

				Player_Config.previous_old[nex_move - 1] = '$';

				Player_Config.clalucltor_treasure++;

                                Game_config.travel_move--;

			}









		}



		if (Player_Config.life == 0)//using conditional statement

		{

			printf("\nNo more LIVES remaining!\n\n");

			stopvar = 0;



		}



			else if (Game_config.travel_move == 0)//using conditional statement

		{

			printf("No more MOVES remaining!\n");

             stopvar = 0;

		}

		else if(Player_Config.life != 0 && Game_config.travel_move != 0)//using conditional statement

		{
			printf("\n===============> Dope! You've been here before!\n\n");

		}









        for (j = 0; j <= Game_config.totel_pathlength; j = j + 1)//using for loop

        {

          if (nex_move != 0 && nex_move == j )//using conditional statement

          {

           printf(" %c\n", Player_Config.charac); break ;



          }

          else//using conditional statement

          {



           printf(" ");

          }

        }



     }while (Game_config.travel_move != 0 || Player_Config.life != 0 ) ;

	return 0;


}




