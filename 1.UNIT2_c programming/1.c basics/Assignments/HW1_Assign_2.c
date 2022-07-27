/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Michael Samir
 */

// Assignment 2

#include "stdio.h"
int main()
{
	int x;
	printf("Enter a integer: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&x);
	printf("You entered: %d",x);
}

