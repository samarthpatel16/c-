/*
   *****************************************************************************
               <assessment name example: Workshop - #5 (Part-1)>
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
int main(void)
{
    int y, m, count=1;//declaring variables
    printf("General Well-being Log\n");


    printf("======================\n");

    printf("Set the year and month for the well-being log (YYYY MM): ");

    scanf("%d %d", &y, &m);

    while (y < 2013 || y > 2022 || m <= 1 || m >= 12)//using while loop
    {

        if ((y < 2013 || y > 2022) && (m < 1 || m>12))//using condition

        {
            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");

            printf("   ERROR: Jan.(1) - Dec.(12)\n");

            printf("Set the year and month for the well-being log (YYYY MM): ");

            scanf("%d %d", &y, &m);
        }
        else if (y < 2013 || y > 2022)
        {

            printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");

            printf("Set the year and month for the well-being log (YYYY MM): ");

            scanf("%d %d", &y, &m);
        }
        else if (m < 1 || m>12)
        {

            printf("   ERROR: Jan.(1) - Dec.(12)\n");

            printf("Set the year and month for the well-being log (YYYY MM): ");

            scanf("%d %d", &y, &m);
        }
    }
    printf("\n*** Log date set! ***\n");


    if(m==1) //using conditional statement
    {
        printf("\nLog starting date: %d-JAN-0%d\n",y,count);
    }



    else if (m==6)//using conditional statement
    {
        printf("\nLog starting date: %d-JUN-0%d\n",y,count);
    }



    else if (m==7)//using conditional statement
    {
        printf("\nLog starting date: %d-JUL-0%d\n",y,count);
    }



    else if (m==8)//using conditional statement
    {
        printf("\nLog starting date: %d-AUG-0%d\n",y,count);
    }



    else if (m==2)//using conditional statement

        {
        printf("\nLog starting date: %d-FEB-0%d\n",y,count);
        }



    else if (m==3)//using conditional statement
    {
        printf("\nLog starting date: %d-MAR-0%d\n",y,count);
    }



    else if (m==4)//using conditional statement
    {
        printf("\nLog starting date: %d-APR-0%d\n",y,count);
    }



    else if (m==5)//using conditional statement
    {
        printf("\nLog starting date: %d-MAY-0%d\n",y,count);
    }



    else if (m==9)//using conditional statement
    {
        printf("\nLog starting date: %d-SEP-0%d\n",y,count);
    }



    else if (m==10)//using conditional statement
    {
        printf("\nLog starting date: %d-OCT-0%d\n",y,count);
    }



    else if (m==11)//using conditional statement
    {
        printf("\nLog starting date: %d-NOV-0%d\n",y,count);
    }



    else
    {
        printf("\nLog starting date: %d-DEC-0%d\n",y,count);
    }
    count++;//increasing the value of count.
    return 0;
}