/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Michael Samir
 */

// Assignment 3

#include "stdio.h"
int main()
{
	int x,y;
	printf("Enter two integers:\nThe first number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&x);
	printf("The second number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&y);
	printf("Sum: %d",x+y);
}
