/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Michael Samir
 */

// Assignment 5

#include "stdio.h"
#include "string.h"
int main()
{
	char a;
	printf("Enter the character: ");
	fflush(stdout); fflush(stdin); scanf("%c",&a);

	if(a>0)
	{
		printf("%c is an alphabet\n",a);
	}

	else
	{
		printf("%c is not an alphabet\n",a);
	}
}

