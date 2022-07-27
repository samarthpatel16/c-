/*
   *****************************************************************************
               <assessment name example: Workshop - #2 (Part-1)>
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
    int oneid=111,twoid=222,threeid=111;

    float op=111.49,tp=222.99,thp=334.49;
    printf("Product Information\n===================\n");
    printf("Product-1 (ID:%d)\n",oneid);
    printf("  Taxed: Y\n");
    printf("  Price: $%0.4f\n",op);

    printf("\nProduct-2 (ID:%d)\n",twoid);
    printf("  Taxed: N\n");
    printf("  Price: $%0.4f\n",tp);

    printf("\nProduct-3 (ID:%d)\n",threeid);
    printf("  Taxed: N\n");
    printf("  Price: $%0.4f\n",thp);

    printf("\nThe average of all prices is: $%0.4f\n",(op+tp+thp)/3);

    printf("\nAbout Relational and Logical Expressions!\n========================================\n1. These expressions evaluate to TRUE or FALSE\n2. FALSE: is always represented by integer value 0\n3. TRUE : is represented by any integer value other than 0\n");

    printf("\nSome Data Analysis...\n=====================\n");
    printf("1. Is product 1 taxable? -> 1\n\n2. Are products 2 and 3 both NOT taxable (N)? -> 1\n\n3. Is product 3 less than testValue ($330.99)? -> 0\n\n4. Is the price of product 3 more than both product 1 and 2 combined? -> 1\n\n5. Is the price of product 1 equal to or more than the price difference\n   of product 3 LESS product 2? ->  0 (price difference: $111.50)\n");

    printf("\n6. Is the price of product 2 equal to or more than the average price? -> 1\n\n7. Based on product ID, product 1 is unique -> 0\n\n8. Based on product ID, product 2 is unique -> 1\n\n9. Based on product ID, product 3 is unique -> 0\n");
    return 0;


}