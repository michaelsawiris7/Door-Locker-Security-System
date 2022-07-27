/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Michael Samir
 */



// Assignment 5

#include "stdio.h"
int main()
{
	char x;
	printf("Enter a character: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&x);
	printf("ASCII value of %c = %i\n",x,x);
}
