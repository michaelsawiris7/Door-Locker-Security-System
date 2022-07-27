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
	int inch;
	float feet;

};
int main()
{
	struct Sadd a,b;
	int sum_i; float sum_f;
	printf("Enter information of 1st distance\nInch = ");
	fflush(stdout); fflush(stdin); scanf("%d",&a.inch);
	printf("Feet =  ");
	fflush(stdout); fflush(stdin); scanf("%f",&a.feet); printf("\n");
	printf("Enter information of 2nd distance\nInch = ");
	fflush(stdout); fflush(stdin); scanf("%d",&b.inch);
	printf("Feet =  ");
	fflush(stdout); fflush(stdin); scanf("%f",&b.feet);
	sum_i=a.inch+b.inch; sum_f=a.feet+b.feet;
	printf("\nSum of distances = %d\' %.2f\"\n",sum_i,sum_f);
}
