/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Michael Samir
 */


// Assignment 6

#include "stdio.h"
int main()
{
	float a,b;
	printf("Enter value of a: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&b);
	/* OR
	a=a+b;
	b=a-b;
	a=a-b;
	*/
	printf("After swapping, value of a = %.2f\n",a*b/a);
	printf("After swapping, value of b = %.2f\n",a*b/b);

}

