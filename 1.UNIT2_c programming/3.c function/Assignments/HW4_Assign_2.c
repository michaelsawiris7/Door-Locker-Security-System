/*
 * main.c
 *
 *  Created on: Jul 17, 2022
 *      Author: Michael Samir
 */


// HOMEWORK 4 // EX_2

#include"stdio.h"
int Factorial(int x);

int main()
{
	int i;
	printf("Enter an positive integer: ");
	fflush(stdout); fflush(stdin); scanf("%d",&i);
	printf("Factorial of %d : %d ",i,Factorial(i));
}

int Factorial(int x)
{
	if (x!=1)
	{
		return x*Factorial(x-1);
	}

}
