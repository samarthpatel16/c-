
/*
   *****************************************************************************
               <assessment name example: Workshop - #5 (Part-2)>
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
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main(void)
{
    int year, month, i=0; //declaring integers

    float mr, er, ms = 0, es = 0; //declaring floating variables

    printf("General Well-being Log\n");

    printf("======================\n");

    printf("Set the year and month for the well-being log (YYYY MM): "); //asking for the input

    scanf("%d %d", &year, &month);


    while (year < 2013 || year > 2022 || month <= 1 || month >= 12)// using while loop

    {

        if ((year < 2013 || year > 2022) && (month < 1 || month>12)) //using conditional statement

        {

            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n"); //printing the messsage

            printf("   ERROR: Jan.(1) - Dec.(12)\n");//printing the messsage

            printf("Set the year and month for the well-being log (YYYY MM): ");

            scanf("%d %d", &year, &month);

        }

        else if (year < 2013 || year > 2022)

        {

            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");//printing the messsage

            printf("Set the year and month for the well-being log (YYYY MM): ");//printing the messsage

            scanf("%d %d", &year, &month);

        }

        else if (month < 1 || month>12)

        {

            printf("   ERROR: Jan.(1) - Dec.(12)\n");//printing the messsage

            printf("Set the year and month for the well-being log (YYYY MM): ");//printing the messsage

            scanf("%d %d", &year, &month);

        }


    }






    printf("\n*** Log date set! ***\n");

    while (i< LOG_DAYS) //Using while loop for iteration

    {

        printf("\n%d-FEB-0%d", year, i+1);

        printf("\n   Morning rating (0.0-5.0): ");

        scanf("%f", &mr);



        while (mr < 0.0 || mr>5.0)

        {

            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!");//printing the messsage

            printf("\n   Morning rating (0.0-5.0): ");

            scanf("%f", &mr);

        }

        ms = ms + mr;//changing the value of ms



        printf("   Evening rating (0.0-5.0): ");

        scanf("%f", &er);



        while (er < 0.0 || er>5.0)

        {

            printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!");//printing the messsage

            printf("\n   Evening rating (0.0-5.0): ");

            scanf("%f", &er);

        }

        es = es + er; //changing the value of es

    i++;


    }




    printf("\nSummary\n");



    printf("=======\n");

    printf("Morning total rating: %0.3f\n", ms);


    printf("Evening total rating:  %0.3f\n", es);

    printf("----------------------------\n");

    printf("Overall total rating: %0.3f\n",ms+es);//calculating overall rating(doing sum of them)

    printf("\nAverage morning rating:  %0.1f\n",ms/3);//calculating average

    printf("Average evening rating:  %0.1f\n",es/3);//calculating average



    printf("----------------------------\n");

    printf("Average overall rating:  %0.1f\n",(ms+es)/6);//calculating average




    return 0;
}


