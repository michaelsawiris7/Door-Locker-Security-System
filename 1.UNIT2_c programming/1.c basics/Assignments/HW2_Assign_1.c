/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Michael Samir
 */


// Example 1

#include "stdio.h"
int main()
{
	int a;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&a);

	if(a%2==0)
	{
		printf("%d is even number\n",a);
	}
	else
	{
		printf("%d is odd number\n",a);
    }
}
