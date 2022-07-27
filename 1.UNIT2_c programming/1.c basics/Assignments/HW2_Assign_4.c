/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Michael Samir
 */

// Example 4

#include "stdio.h"
#include "string.h"
int main()
{
	float a;
	printf("Enter the number: ");
	fflush(stdout); fflush(stdin); scanf("%f",&a);

	if(a>0)
	{
		printf("%.2f is positive number\n",a);
	}
	else if(a<0)
	{
		printf("%.2f is negative number\n",a);
	}

	else
	{
		printf("%.0f is zero number\n",a);
	}
}

