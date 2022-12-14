
/*
*****************************************************************************
                        Assignment 1 - Milestone 2
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

void suspend(void)
{
	printf("<ENTER> to continue...");
	clearInputBuffer();
	putchar('\n');
}

void clearInputBuffer(void)
{
	while (getchar() != '\n')//using conditional statement //using loop for iteration
	{
		; // On purpose: do nothing
	}
}


int stringlength(char* d)
{
	int fun = 0;
	while (*d != '\0')//using conditional statement and using loop for iteration
	{
		fun++;
		d++;
	}
	return fun;
}

int inputInt() //return an integer value and receives no arguments
{
	char newline = 'x';
	int value;
	scanf("%d%c", &value, &newline);
	while (newline != '\n')//using conditional statement and using loop for iteration

	{
		clearInputBuffer();
		printf("Error! Input a whole number: ");
		scanf("%d%c", &value, &newline);
	}
	return value;
}

int inputIntPositive() //return an integer value and receives no arguments
{
	char newline = 'x';
	int valueof_number;
	scanf("%d%c", &valueof_number, &newline);
	while (newline == 'x' || newline != '\n')//using conditional statement and using loop for iteration

	{
		clearInputBuffer();
		printf("Error! Input a whole number: ");//printing appropriate error message
		scanf("%d%c", &valueof_number, &newline);
	}
	while (valueof_number <= 0)//using conditional statement
	{
		printf("ERROR! Value must be > 0: ");//printing appropriate error message
		scanf("%d%c", &valueof_number, &newline);
	}
	return valueof_number;
}

int inputIntRange(int lowlimit, int uplimit) //performs the same operations as getInteger but validates the value entered is between the two arguments received by the function (inclusive).
{
	char newline = 'x';
	int valueofnum;
	scanf("%d%c", &valueofnum, &newline);
	while (newline == 'x') //using conditional statement and using loop for iteration

	{
		clearInputBuffer();
		printf("Error! Input a whole number: ");
		scanf("%d%c", &valueofnum, &newline);
	}	
	while (valueofnum < lowlimit || valueofnum > uplimit)//using conditional statement and using loop for iteration

	{
		printf("ERROR! Value must be between %d and %d inclusive: ", lowlimit, uplimit);
		scanf("%d%c", &valueofnum, &newline);
	}
	return valueofnum;
}

char inputCharOption(char* w) //validate the entered character matches any of the characters in the received C string argument.
{
	int i, j = 0;
	char char2, newline = 'x';
	scanf("%c%c", &char2, &newline);
	while (newline != '\n')//using conditional statement and using loop for iteration

	{
		clearInputBuffer();
		printf("ERROR: Character must be one of [%s]: ", w);
		scanf("%c%c", &char2, &newline);
	}
	for (i = 0; (w[i] != '\0' && j == 0); i++)//using conditional statement and using loop for iteration

	{
		while (newline != '\n' || j == 0)//using conditional statement and using loop for iteration

		{
			for (i = 0; i <= stringlength(w) && j == 0; i++)//using conditional statement and using loop for iteration

			{
				if (w[i] == char2)//using conditional statement 

				{
					j = 1;
				}
			}
			if (j != 1 || newline != '\n')
			{
				printf("ERROR: Character must be one of [%s]: ", w);
				scanf("%c%c", &char2, &newline);
			}
		}
	}
	return char2;
}

void inputCString(char* p, int minimumno, int maximumno) // does not return a value, but does return a C string via the 1st argument parameter pointer.
{
	int i = 0, j = 0;
	char ch[41];
	scanf("%40[^\n]", ch);
	for (i = 0; ch[i] != '\0'; i++)
	{
	}

	while (i < minimumno || i > maximumno)//using conditional statement and using loop for iteration

	{
		clearInputBuffer();
		if (minimumno == maximumno)
		{
			printf("ERROR: String length must be exactly %d chars: ", minimumno);//printing appropriate error message
			scanf("%40[^\n]", ch);
		}
		if (minimumno != maximumno)
		{
			if (i < minimumno)
			{
				printf("ERROR: String length must be between %d and %d chars: ", minimumno, maximumno);//printing appropriate error message
				scanf("%40[^\n]", ch);
			}
			else if (i > maximumno)
			{
				printf("ERROR: String length must be no more than %d chars: ", maximumno);//printing appropriate error message
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

void displayFormattedPhone(const char* phone)
{
	char c = *phone;
	if (phone == NULL || c < '0' || c > '9')
	{
		printf("(___)___-____"); return;
	}
	int i = 0;

	printf("(");
	while (*phone)
	{
		printf("%c", *phone);
		i++;
		if (i == 3)
			printf(")");
		else if (i == 6)
			printf("-");
		phone++;
	}
}
