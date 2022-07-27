/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Michael Samir
 */

// Example 7

#include "stdio.h"
#include "string.h"
int main()
{
	int a,factorial=1;
	printf("Enter an integer number: ");
	fflush(stdout); fflush(stdin); scanf("%d",&a);
if(a>0)
{
	for(int i=a;i>0;i--)
		{
			factorial=factorial*i;
		}
		printf("Factorial = %d\n",factorial);
}
else
{
	printf("ERROR: The factorial of negative number doesn't exit\n");
}
}

