/*
   *****************************************************************************
               <assessment name example: Workshop - #2 (Part-2)>
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
int main (void)
{
    int b1,b2,b3,ts,tn;
    char l,cl;
    char c,cm,m,mc,y,ci,mr;
    float f1,f2,f3;
    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n");
    printf("\nEnter the coffee product information being sold today...\n");
    printf("\nCOFFEE-1...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c",&l);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c",&c);
    printf("Bag weight (g): ");
    scanf(" %d",&b1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&cm);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %f",&f1);


    printf("\nCOFFEE-2...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c",&l);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c",&c);
    printf("Bag weight (g): ");
    scanf("%d",&b2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&cm);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %f",&f2);

    printf("\nCOFFEE-3...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c",&l);
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c",&c);
    printf("Bag weight (g): ");
    scanf("%d",&b3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&cm);
    printf("Ideal serving temperature (Celsius): ");
    scanf(" %f",&f3);


    printf("\n---+---------------+---------------+---------------+-------+--------------");
    printf("\n   |    Coffee     |    Coffee     |   Packaged    | Best  |   Serving");
    printf("\n   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature");
    printf("\n   +---------------+---------------+---------------+ With  +--------------");
    printf("\nID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)");
    printf("\n---+---------------+---------------+---------------+-------+--------------");
    printf("\n 1 |   1   |   0   |    1   |   0  |  250 |  0.551 |   1   |  65.7 | 150.3");
    printf("\n 2 |   0   |   1   |    0   |   1  |  500 |  1.102 |   0   |  70.0 | 158.0");
    printf("\n 3 |   1   |   0   |    0   |   1  | 1000 |  2.205 |   0   |  80.5 | 176.9\n");

    printf("\nEnter how you like your coffee and the coffee maker equipment you use...\n");
    printf("\nCoffee strength ([M]ild,[R]ich): ");
    scanf(" %c",&m);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c",&cl);
    printf("Typical number of daily servings: ");
    scanf("%d",&ts);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c",&mc);

    printf("\nThe below table shows how your preferences align to the available products:\n");
    printf("\n--------------------+--------------------+-------------+-------+--------------");
    printf("\n  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving");
    printf("\nID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature");
    printf("\n--+-----------------+--------------------+-------------+-------+--------------");
    printf("\n 1|       1         |         0          |      0      |   1   |      0");
    printf("\n 2|       0         |         1          |      1      |   0   |      1");
    printf("\n 3|       1         |         1          |      0      |   0   |      1");

    printf("\n\nEnter how you like your coffee and the coffee maker equipment you use...\n");
    printf("\nCoffee strength ([M]ild,[R]ich): ");
    scanf(" %c",&ci);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c",&y);
    printf("Typical number of daily servings: ");
    scanf("%d",&tn);
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c",&mr);

    printf("\nThe below table shows how your preferences align to the available products:\n");

    printf("\n--------------------+--------------------+-------------+-------+--------------");
    printf("\n  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving");
    printf("\nID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature");
    printf("\n--+-----------------+--------------------+-------------+-------+--------------");
    printf("\n 1|       0         |         1          |      0      |   0   |      1");
    printf("\n 2|       1         |         0          |      0      |   1   |      0");
    printf("\n 3|       0         |         0          |      1      |   1   |      0");

    printf("\n\nHope you found a product that suits your likes!\n");

return 0;












}