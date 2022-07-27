/*
   *****************************************************************************
               <assessment name example: Workshop - #6 (Part-1)>
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
int main (void)
{
    float ni,sum;//declaring floating variables
    
    int items,i=0,j=0;


    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n");

    printf("\nEnter your monthly NET income: $"); //prompting to input monthly income
    scanf("%f",&ni);
    while (ni>=max || ni<=min) // using while loop
    {
        if (ni>=400000) //using conditional statement
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00");
            printf("\n\nEnter your monthly NET income: $");
            scanf("%f",&ni);
        }

        else if (ni<=500)
        {
            printf("ERROR: You must have a consistent monthly income of at least $500.00");
            printf("\n\nEnter your monthly NET income: $");
            scanf("%f",&ni);
        }
    }

    printf("\nHow many wish list items do you want to forecast?: ");
    scanf("%d",&items);
    float cost[items]; //declaring array
    int p[items];
    char finance[10];



    while (items>10||items<1)// using while loop
    {
        printf("ERROR: List is restricted to between 1 and 10 items.\n");
        printf("\nHow many wish list items do you want to forecast?: ");
        scanf("%d",&items);
    }



    while (i<items)// using while loop
    {
        printf("\nItem-%d Details:\n",i+1);
        printf("   Item cost: $");
        scanf("%f",&cost[i]);

        while (cost[i]<100)// using while loop
        {
            printf("      ERROR: Cost must be at least $100.00\n");
            printf("   Item cost: $");
            scanf("%f",&cost[i]);

        }
        printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
        scanf("%d",&p[i]);


        while (p[i]>3 || p[i]<1)// using do while loop
        {
            printf("      ERROR: Value must be between 1 and 3\n");
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d",&p[i]);

        }

        do
        {

        printf("   Does this item have financing options? [y/n]: ");

        scanf(" %c",&finance[i]);

        if(finance[i]!='y' && finance[i]!='n')

        printf("      ERROR: Must be a lowercase 'y' or 'n'\n");

        }
        while(finance[i]!='y' && finance[i]!='n'); // using while loop
        i++;
    }
    sum=0;
    printf("\nItem Priority Financed        Cost\n");
    printf("---- -------- -------- -----------\n");

    while (j<items) // using while loop
    {
        printf("%3d  %5d    %5c    %11.2f\n",j+1,p[j],finance[j],cost[j]);
        sum=sum+cost[j];
        j++;
    }
    printf("---- -------- -------- -----------");
    printf("\n                      $%10.1f0\n",sum);
    printf("\nBest of luck in all your future endeavours!\n");

    return 0;
}
