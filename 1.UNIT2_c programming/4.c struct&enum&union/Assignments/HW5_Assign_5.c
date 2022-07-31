/*
 * HW5_Assign_5.c
 *
 *  Created on: Jul 31, 2022
 *      Author: Michael Samir
 */
// Homework 5 | Assignment 5

#include "stdio.h"
#define pi 3.14
#define Area(r) r*r*pi
int main()
{
	int x;
	printf("Enter the radius: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	printf("Area = %.2f mm^2 \n",Area(x));

}
