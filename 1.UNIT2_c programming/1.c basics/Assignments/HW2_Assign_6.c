/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Michael Samir
 */


// Example 6

#include "stdio.h"
#include "string.h"
int main()
{
	unsigned int a,sum=0;
	printf("Enter an integer number: ");
	fflush(stdout); fflush(stdin); scanf("%d",&a);

	for(int i=0;i<=a;i++)
	{
		sum=sum+i;
	}
	printf("Sum = %d\n",sum);
}
