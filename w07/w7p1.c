/*
   *****************************************************************************
               <assessment name example: Workshop - #7 (Part-1)>
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


#include <stdio.h>

 #define MAX_PATH 70
    #define MIN_PATH 10
    #define MULTIPLE_OF 5
    #define MIN_LIVES 1
    #define MAX_LIVES 10

    #include <stdio.h>

    struct PlayerInfo //struct for player information
    {
        int n_lives;
        char symbol;
        int num_treasure;
        int position[MAX_PATH];
    };

    struct GameInfo //struct for game information
    {
        int n_moves;
        int pathlength;
        int bomb[MAX_PATH];
        int treasure[MAX_PATH];
    };

int main()
{


    int n_lives,n,x,i,j;
    char ch;
    printf("================================\n");
    printf("         Treasure Hunt!\n");
    printf("================================\n\nPLAYER Configuration\n--------------------\n");
    printf("Enter a single character to represent the player: ");

    scanf("%c",&ch);


while(1){ //using while loop

printf("Set the number of lives: ");
scanf("%d",&n_lives);
if(n_lives<1 || n_lives>10) //using conditional statement
{
printf("     Must be between 1 and 10!\n");

}
else
{
   break;
}


}
printf("Player configuration set-up is complete\n\nGAME Configuration\n------------------\n");


while(1)
{
  printf("Set the path length (a multiple of 5 between 10-70): ");
scanf("%d",&n);

if(n==10 || n==15 || n==20  || n==25 || n==30 ||
n==35 || n==40 || n==45 || n==50 || n==55 ||n==60 || n==65 || n==70)//using conditional statement
{
   break;
}
else//using conditional statement
{
    printf("     Must be a multiple of 5 and between 10-70!!!\n");
}
}
while(1) //using while loop
{
    printf("Set the limit for number of moves allowed: ");
    scanf("%d",&x);
    if(x<3 || x>26)//using conditional statement
    {
        printf("    Value must be between 3 and 26\n");
    }
    else
    {
        break;
    }
}
printf("\nBOMB Placement\n--------------\n");
printf("Enter the bomb positions in sets of 5 where a value\nof 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n(Example: 1 0 0 1 1) NOTE: there are %d to set!\n",n);
  int g[n];

    i=0;
    while (i<n)//using while loop

   {
       if (i==0)//using conditional statement
       {
       printf("   Positions [ %d- %d]: ",i+1,i+5);
       }

       else if (i==5)//using conditional statement
       {
           printf("   Positions [ %d-%d]: ",i+1,i+5);
       }

       else
       {
           printf("   Positions [%d-%d]: ",i+1,i+5);
       }

      i+=5;
      j=0;
     while (j<5)//using while loop

   {

       scanf("%d",&g[j]);
       j++;
   }
   }
   printf("BOMB placement set\n\nTREASURE Placement\n------------------\n");
   printf("Enter the treasure placements in sets of 5 where a value\nof 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n(Example: 1 0 0 1 1) NOTE: there are %d to set!\n",n);
    int f[n];
    i=0;
    while (i<n)//using while loop

   {
        if (i==0)//using conditional statement
       {
       printf("   Positions [ %d- %d]: ",i+1,i+5);
       }

       else if (i==5)//using conditional statement
       {
           printf("   Positions [ %d-%d]: ",i+1,i+5);
       }

       else
       {
           printf("   Positions [%d-%d]: ",i+1,i+5);
       }

       i+=5;
       j=0;
    while (j<5)//using while loop

   {

       scanf("%d",&f[j]);
       j++;
   }
   }
   printf("TREASURE placement set\n\nGAME configuration set-up is complete...\n");
   printf("\n------------------------------------\nTREASURE HUNT Configuration Settings\n------------------------------------\n");
   printf("Player:\n   Symbol     : %c\n   Lives      : %d\n   Treasure   : [ready for gameplay]\n   History    : [ready for gameplay]\n",ch,n_lives);
   printf("\nGame:\n   Path Length: %d\n",n);
   printf("   Bombs      : 00001100111011101000101000001010101");
   printf("\n   Treasure   : 00100111011101001000110101010001111");

   printf("\n\n====================================\n");
   printf("~ Get ready to play TREASURE HUNT! ~\n");
   printf("====================================\n");
    return 0;
}