/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Michael Samir
 */
// Example 3
#include "stdio.h"
#include "string.h"
int main()
{
	float a,b,c;
	printf("Enter three numbers\nThe first: ");
	fflush(stdout); fflush(stdin); scanf("%f",&a);

	printf("The second: ");
	fflush(stdout);fflush(stdin);scanf("%f",&b);

	printf("The third: ");
	fflush(stdout);fflush(stdin);scanf("%f",&c);

	if(a>b && a>c)
	{
		printf("%.2f is the largest number\n",a);
	}
	else if(b>a && b>c)
	{
		printf("%.2f is the largest number\n",b);
	}
	else if(c>a && c>b)
	{
		printf("%.2f is the largest number\n",c);
	}
	else
	{
		printf("All numbers are equal\n");
	}
}

