/*
 * main.c
 *
 *  Created on: Jul 18, 2022
 *      Author: Michael Samir
 */


// HOMEWORK 4 // EX_2

#include "stdio.h"
#include "string.h"
int Factorial(int x);

int main()
{
	int c;
	char i[40],y[40];
	printf("Enter a sentence: ");
	fflush(stdout); fflush(stdin); scanf("%s",i);
	c=strlen(i);
}

int Factorial(int x)
{
	if (x!=1)
	{
		return x*Factorial(x-1);
	}

}
