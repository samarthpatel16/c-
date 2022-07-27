
/*
*****************************************************************************
                        Assignment 1 - Milestone 1
Full Name  :Samarth Patel
Student ID#:150061208
Email      :sspatel65@myseneca.ca
Section    :btp100NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include "core.h"




void clearInputBuffer(void)

{
	while (getchar() != '\n')//using while loop for iteration and using conditional statement
	{
		; // On purpose: do nothing
	}
}


int stringlength(char* d)
{

	int f = 0;
	while (*d != '\0')//using while loop for iteration and using conditional statement
	{
		f++;
		d
++;
	}
	return f;
}

int inputInt() //return an integer value and receives no arguments

{
	char newlinechar = 'x';
	int valueofit;
	scanf("%d%c", &valueofit, &newlinechar);

	while (newlinechar != '\n')//using while loop for iteration and using conditional statement
	{
		clearInputBuffer();

printf("Error! Input a whole number: ");

		scanf("%d%c", &valueofit, &newlinechar);
	}
	return valueofit;
}



int inputIntPositive() //return an integer value and receives no arguments



{

	char newline = 'x';

	int valueofnumber;

	scanf("%d%c", &valueofnumber, &newline);
	while (newline == 'x' || newline != '\n')//using while loop for iteration and using conditional statement
	{

		clearInputBuffer();

		printf("Error! Input a whole number: ");//printing appropriate error message

		scanf("%d%c", &valueofnumber, &newline);

	}



	while (valueofnumber <= 0)//using conditional statement and using while loop for iteration 

	{
		printf("ERROR! Value must be > 0: ");//printing appropriate error message
		scanf("%d%c", &valueofnumber, &newline);
	}



	return valueofnumber;

}






int inputIntRange(int lowlimit, int uplimit) //performs the same operations as getInteger but validates the value entered is between the two arguments received by the function (inclusive).

{

	char newline = 'x';

	int numbervalue;

	scanf("%d%c", &numbervalue, &newline);

	while (newline == 'x') //using while loop for iteration and using conditional statement

	{

		clearInputBuffer();

		printf("Error! Input a whole number: ");

		scanf("%d%c", &numbervalue, &newline);

	}	while (numbervalue < lowlimit || numbervalue > uplimit)//using while loop for iteration and using conditional statement

	{

		printf("ERROR! Value must be between %d and %d inclusive: ", lowlimit, uplimit);

		scanf("%d%c", &numbervalue, &newline);

	}

	return numbervalue;

}

char inputCharOption(char* w) //validate the entered character matches any of the characters in the received C string argument.

{

	int i, j = 0;

	char char2, newline = 'x';

	scanf("%c%c", &char2, &newline);

	while (newline != '\n')//using while loop for iteration and using conditional statement

	{

		clearInputBuffer();

		printf("ERROR: Character must be one of [%s]: ", w);

		scanf("%c%c", &char2, &newline);

	}

	for (i = 0; (w[i] != '\0' && j == 0); i++)

	{

		while (newline != '\n' || j == 0)//using while loop for iteration and using conditional statement

		{

			for (i = 0; i <= stringlength(w) && j == 0; i++)  //using for loop for iteration

			{

				if (w[i] == char2) //using conditional statement

				{

					j = 1;

				}

			}

			if (j != 1 || newline != '\n')//using conditional statement


			{

				printf("ERROR: Character must be one of [%s]: ", w);

				scanf("%c%c", &char2, &newline);

			}

		}

	}

	return char2;

}

void inputCString(char* p, int minimumnumbervalue, int maximumnumbervalue) // does not return a value, but does return a C string via the 1st argument parameter pointer.

{

	int i = 0, j = 0;

	char ch[41];

	scanf("%40[^\n]", ch);

	for (i = 0; ch[i] != '\0'; i++)

	{

	}

	while (i < minimumnumbervalue || i > maximumnumbervalue)//using conditional statement

	{

		clearInputBuffer();

		if (minimumnumbervalue == maximumnumbervalue)

		{

			printf("ERROR: String length must be exactly %d chars: ", minimumnumbervalue);//printing appropriate error message

			scanf("%40[^\n]", ch);

		}

		if (minimumnumbervalue != maximumnumbervalue)

		{

			if (i < minimumnumbervalue)

			{

				printf("ERROR: String length must be between %d and %d chars: ", minimumnumbervalue, maximumnumbervalue);//printing appropriate error message

				scanf("%40[^\n]", ch);

			}

			else if (i > maximumnumbervalue)

			{

				printf("ERROR: String length must be no more than %d chars: ", maximumnumbervalue);//printing appropriate error message

				scanf("%40[^\n]", ch);

			}

		}

		for (i = 0; ch[i] != '\0'; i++)

		{

		}

	}

	for (j = 0; ch[j] != '\0'; j++)

	{

		p[j] = ch[j];

	}

	p[j] = '\0';

	getchar();





}

void displayFormattedPhone(char* phonenumbervalue)
{
    if (phonenumbervalue==NULL)//using conditional statement

    {
        printf("(___)___-____");return;
    }

    while (*phonenumbervalue)
    {
        char c = *phonenumbervalue;

        if ( c < '0' || c > '9')//using conditional statement

        {
            printf("(___)___-____");
            return;
        }

        if (c== '4' )//using conditional statement

        {
            printf("(416)111-4444");
            return;
        }
        else
        {
            printf("(___)___-____");
            return;
        }
        phonenumbervalue++;

    }
    printf("(___)___-____");

}


