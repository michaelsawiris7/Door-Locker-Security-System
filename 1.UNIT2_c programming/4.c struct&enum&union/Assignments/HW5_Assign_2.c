/*
 * HW5_Assign_2.c
 *
 *  Created on: Jul 27, 2022
 *      Author: Michael Samir
 */
// Homework 5 | Assignment 2

#include "stdio.h"
#include "string.h"

struct Sadd
{
	int inch1,inch2,sum1;
	float feet1,feet2,sum2;

};
int main()
{
	struct Sadd a;
	printf("Enter information of 1st distance\nInch = ");
	fflush(stdout); fflush(stdin); scanf("%d",&a.inch1);
	printf("Feet =  ");
	fflush(stdout); fflush(stdin); scanf("%f",&a.feet1); printf("\n");
	printf("Enter information of 2nd distance\nInch = ");
	fflush(stdout); fflush(stdin); scanf("%d",&a.inch2);
	printf("Feet =  ");
	fflush(stdout); fflush(stdin); scanf("%f",&a.feet2);
	a.sum1=a.inch1+a.inch2; a.sum2=a.feet1+a.feet2;
	printf("\nSum of distances = %d\' %.2f\"\n",a.sum1,a.sum2);
}
