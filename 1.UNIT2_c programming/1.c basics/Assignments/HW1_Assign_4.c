/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Michael Samir
 */


// Assignment 4

#include "stdio.h"
int main()
{
	float x,y;
	printf("Enter two numbers:\nThe first number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&x);
	printf("The second number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&y);
	printf("Product: %.2f",x*y);
}
