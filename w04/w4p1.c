/*
   *****************************************************************************
               <assessment name example: Workshop - #4 (Part-1)>
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

int main(void)
{
    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");

    char c;
    int n;

    printf("\nD = do/while | W = while | F = for | Q = quit\n");
    printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
    scanf(" %c%d", &c,&n);


    int k=0;
    while (k<19)
    {

        if (c=='Q'&& n==0)
        {
            break;
        }


        if ( (n>20 ||n<3) && c!='Q'&&(c!='w'&& c!='f'&& c!='d') )
        {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
            printf("\nD = do/while | W = while | F = for | Q = quit\n");
            printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
            scanf(" %c%d",&c,&n);
        }

    else if (c=='Q' && n!=0)
        {
            printf("ERROR: To quit, the number of iterations should be 0!\n");
            printf("\nD = do/while | W = while | F = for | Q = quit\n");
            printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
            scanf(" %c%d",&c,&n);
        }

   else if ((c!='D' && c!='W' && c!='F' && c!='Q') ||  (c=='d'||c=='w'||c=='f') )
        {
        printf("ERROR: Invalid entered value(s)!\n");
        printf("\nD = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &c,&n);
        }

        if  (c=='D' || c=='W' || c=='F')

        {
            if (n<21 && n>=3)
            {
            if (c=='D')
            {
                printf("DO-WHILE: ");

            }
            else if (c=='W')
            {
                printf("WHILE   : ");
            }

            else if (c=='F')
            {
                printf("FOR     : ");
            }
            if (n<21 && n>=3)
            {
            int p=n;
            while (p>0)
            {
                printf("%c",c);
                p--;

            }
            printf("\n");
            printf("\nD = do/while | W = while | F = for | Q = quit\n");
    printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
    scanf(" %c%d", &c,&n);
            }
            }
        }

    if (n==2)
    {
        printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
        printf("\nD = do/while | W = while | F = for | Q = quit\n");
    printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
    scanf(" %c%d", &c,&n);
    }

    k++;


    }

    printf("\n+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n");
    return 0;
}

