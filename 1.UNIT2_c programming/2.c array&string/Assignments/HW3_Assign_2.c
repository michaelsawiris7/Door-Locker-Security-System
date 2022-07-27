/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Michael Samir
 */

// EX_2

#include "stdio.h"
#include "string.h"
int main()
{
	float x[101],sum=0.0;
	int i,n;
	printf("Enter the numbers of data [choose from(1 to 100)]: ");
	fflush(stdout); fflush(stdin); scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter no.%d: ",i+1);
		fflush(stdout); fflush(stdin); scanf("%f",&x[i]);
		sum=sum+x[i];
	}
	printf("Average= %.2f\n",sum/n);

}

