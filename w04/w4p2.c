/*
   *****************************************************************************
               <assessment name example: Workshop - #4 (Part-2)>
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
    int a,o,p,t,c,ap,op,pp,tp,cp;
    int n=5;

while (n!=0)
{

    printf("Grocery Shopping\n");
    printf("================\n");
    printf("How many APPLES do you need? : ");
    scanf("%d",&a);

    while (a<0)
    {
        printf("ERROR: Value must be 0 or more.\n");
        printf("How many APPLES do you need? : ");
        scanf("%d",&a);
    }


    printf("\nHow many ORANGES do you need? : ");
    scanf("%d",&o);

    while (o<0)
    {
        printf("ERROR: Value must be 0 or more.\n");
        printf("How many ORANGES do you need? : ");
        scanf("%d",&o);
    }


    printf("\nHow many PEARS do you need? : ");
    scanf("%d",&p);

    while (p<0)
    {
        printf("ERROR: Value must be 0 or more.\n");
        printf("How many PEARS do you need? : ");
        scanf("%d",&p);
    }


     printf("\nHow many TOMATOES do you need? : ");
    scanf("%d",&t);

    while (t<0)
    {
        printf("ERROR: Value must be 0 or more.\n");
        printf("How many TOMATOES do you need? : ");
        scanf("%d",&t);
    }

     printf("\nHow many CABBAGES do you need? : ");
    scanf("%d",&c);

    while (c<0)
    {
        printf("ERROR: Value must be 0 or more.\n");
        printf("How many CABBAGES do you need? : ");
        scanf("%d",&c);
    }



    printf("\n--------------------------");
    printf("\nTime to pick the products!");
    printf("\n--------------------------\n");

    if (a!=0)
    {
        printf("\nPick some APPLES... how many did you pick? : ");
        scanf("%d",&ap);

        int ap1=a;
        while (a!=0)
        {

            if (ap<=0)
            {
                printf("ERROR: You must pick at least 1!");
            }
            if (ap>ap1)
            {
                printf("You picked too many... only %d more APPLE(S) are needed.",a);
            }
            if (ap<ap1 && ap>0)
            {

                a=a-ap;
                if (a==0)
                {
                    printf("Great, that's the apples done!\n");
                    break;
                }

                printf("Looks like we still need some APPLES...");
            }
            printf("\nPick some APPLES... how many did you pick? : ");
            scanf("%d",&ap);
        }

    }

    if (o!=0)
    {
        printf("\nPick some ORANGES... how many did you pick? : ");
        scanf("%d",&op);

        int op1=o;
        while (o!=0)
        {

            if (op<=0)
            {
                printf("ERROR: You must pick at least 1!");
            }
            if (op>op1)
            {
                printf("You picked too many... only %d more ORANGE(S) are needed.",o);
            }
            if (op<op1 && op>0)
            {

                o=o-op;
                if (o==0)
                {
                    printf("Great, that's the oranges done!\n");
                    break;
                }
                printf("Looks like we still need some ORANGES...");
            }
            printf("\nPick some ORANGES... how many did you pick? : ");
            scanf("%d",&op);
        }

    }


    if (p!=0)
    {
        printf("\nPick some PEARS... how many did you pick? : ");
        scanf("%d",&pp);

        int  pp1=p;
        while (p!=0)
        {

            if (pp<=0)
            {
                printf("ERROR: You must pick at least 1!");
            }
            if (pp>pp1)
            {
                printf("You picked too many... only %d more PEAR(S) are needed.",p);
            }
            if (pp<pp1 && pp>0)
            {
                p=p-pp;
                if (p==0)
                {
                    printf("Great, that's the pears done!\n");
                    break;
                }
                printf("Looks like we still need some PEARS...");

            }
            printf("\nPick some PEARS... how many did you pick? : ");
            scanf("%d",&pp);
        }
    }



    if (t!=0)
    {
        printf("\nPick some TOMATOES... how many did you pick? : ");
        scanf("%d",&tp);

        int  tp1=t;
        while (t!=0)
        {

            if (tp<=0)
            {
                printf("ERROR: You must pick at least 1!");
            }
            if (tp>tp1)
            {
                printf("You picked too many... only %d more TOMATO(ES) are needed.",t);
            }
            if (tp<tp1 && tp>0)
            {

                t=t-tp;
                if (t==0)
                {
                    printf("Great, that's the tomatoes done!\n");
                    break;
                }
                printf("Looks like we still need some TOMATOES...");
            }
            printf("\nPick some TOMATOES... how many did you pick? : ");
            scanf("%d",&tp);
        }
    }

    if (c!=0)
    {
        printf("\nPick some CABBAGES... how many did you pick? : ");
        scanf("%d",&cp);

        int  cp1=c;
        while (c!=0)
        {

            if (cp<=0)
            {
                printf("ERROR: You must pick at least 1!");
            }
            if (cp>cp1)
            {
                printf("You picked too many... only %d more CABBAGE(S) are needed.",c);
            }
            if (cp<cp1 && cp>0)
            {

                c=c-cp;
                if (c==0)
                {
                    printf("Great, that's the cabbages done!\n");
                    break;
                }
                printf("Looks like we still need some CABBAGES...");
            }
            printf("\nPick some CABBAGES... how many did you pick? : ");
            scanf("%d",&cp);
        }
    }

    printf("\nAll the items are picked!\n");
    printf("\nDo another shopping? (0=NO): ");
    scanf("%d",&n);

	printf("\n");



}

printf("Your tasks are done for today - enjoy your free time!\n");

    return 0;
}




