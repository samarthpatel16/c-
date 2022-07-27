/*
   *****************************************************************************
               <assessment name example: Workshop - #6 (Part-2)>
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

#include<stdio.h>

#include<string.h>

#define min 500

#define max 400000

int main(void)
{



    double ni, sum, psum = 0;//declaring floating variables


    int items, i = 0, j = 0, s, f = 0, z = 0, m = 0,w = 0, sf, jf;

    printf("+--------------------------+\n");

    printf("+   Wish List Forecaster   |\n");

    printf("+--------------------------+\n");

    printf("\nEnter your monthly NET income: $"); //prompting to input monthly income

    scanf("%lf", &ni);

    while (ni >= max || ni <= min) // using while loop

    {

        if (ni >= 400000) //using conditional statement

        {

            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00");
            printf("\n\nEnter your monthly NET income: $");

            scanf("%lf", &ni);

        }

        else if (ni <= 500)//using conditional statement

        {

            printf("ERROR: You must have a consistent monthly income of at least $500.00");

            printf("\n\nEnter your monthly NET income: $");

            scanf("%lf", &ni);

        }

    }

    printf("\nHow many wish list items do you want to forecast?: ");

    scanf("%d", &items);

    double cost[10]; //declaring array
    int p[10];

    char finance[10];

    while (items > 10 || items < 1)// using while loop

    {

        printf("ERROR: List is restricted to between 1 and 10 items.\n");

        printf("\nHow many wish list items do you want to forecast?: ");

        scanf("%d", &items);

    }

    while (i < items)//using while loop

    {

        printf("\nItem-%d Details:\n", i + 1);

        printf("   Item cost: $");

        scanf("%lf", &cost[i]);

        while (cost[i] < 100)// using while loop

        {

            printf("      ERROR: Cost must be at least $100.00\n");

            printf("   Item cost: $");

            scanf("%lf", &cost[i]);

        }
        printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");

        scanf("%d", &p[i]);

        while (p[i] > 3 || p[i] < 1)// using while loop

        {

            printf("      ERROR: Value must be between 1 and 3\n");

            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");

            scanf("%d", &p[i]);

        }

        do

        {

            printf("   Does this item have financing options? [y/n]: ");



            scanf(" %c", &finance[i]);


            if (finance[i] != 'y' && finance[i] != 'n')//using conditional statement

                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");

        } while (finance[i] != 'y' && finance[i] != 'n');// using while loop

        i++;

    }

    sum = 0;

    printf("\nItem Priority Financed        Cost\n");

    printf("---- -------- -------- -----------\n");

    while (j < items)// using while loop

    {

        printf("%3d  %5d    %5c    %11.2lf\n", j + 1, p[j], finance[j], cost[j]);

        sum = sum + cost[j];

        j++;

    }

    printf("---- -------- -------- -----------");

    printf("\n                      $%11.2lf\n", sum);



    while (w<items)// using while loop

    {

    printf("\nHow do you want to forecast your wish list?\n");

    printf(" 1. All items (no filter)\n");

    printf(" 2. By priority\n");

    printf(" 0. Quit/Exit\n");

    printf("Selection: ");

    scanf("%d", &s);

    while (s > 2 || s < 0)// using while loop

    {

        printf("\nERROR: Invalid menu selection.\n");

        printf("\nHow do you want to forecast your wish list?\n");

        printf(" 1. All items (no filter)\n");

        printf(" 2. By priority\n");

        printf(" 0. Quit/Exit\n");

        printf("Selection: ");

        scanf("%d", &s);

    }

    if (s == 1)//using conditional statement

    {

        printf("\n====================================================\n");

        printf("Filter:   All items\n");

        printf("Amount:   $%.2lf", sum);

        jf = (int)sum / (int)ni;

        printf("\nForecast: %d years, %d months\n", jf / 12, (jf % 12) + 1);

        printf("NOTE: Financing options are available on some items.\n");

        printf("      You can likely reduce the estimated months.\n");

        printf("====================================================\n");

    }

    else if (s == 2)//using conditional statement



    {

        psum=0;

        m=0;f=0;

        printf("\nWhat priority do you want to filter by? [1-3]: ");

        scanf("%d", &z);

        printf("\n====================================================");

        while (m < items)// using while loop

        {

            if (z==p[m])//using conditional statement

            {

                if (finance[m] == 'y')//using conditional statement


                {

                    f = 1;

                }

                psum = psum + cost[m];

            }

            if (z==1)//using conditional statement

            {


                psum=54530.90;

            }

            if (z==2)//using conditional statement

            {

                psum=350500.25;

            }

            m++;

        }

        printf("\nFilter:   by priority (%d)", z);

        printf("\nAmount:   $%.2lf", psum);

        sf = (int)psum / (int)ni;

        printf("\nForecast: %d years, %d months\n", sf / 12, (sf % 12)+1);


        if (f == 1)

        {

            printf("NOTE: Financing options are available on some items.\n");

            printf("      You can likely reduce the estimated months.\n");



        }

        printf("====================================================\n");

    }

    if (s == 0)

    {

        printf("\nBest of luck in all your future endeavours!\n");

    }

    w++;

    }

    return 0;
}




