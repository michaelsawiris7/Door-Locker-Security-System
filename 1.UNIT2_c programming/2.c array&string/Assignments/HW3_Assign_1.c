/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Michael Samir
 */
// EX_1
#include "stdio.h"
#include "string.h"
int main()
{
	float x[2][2];
	float y[2][2];
	float z[2][2];
	int i,j;
	printf("Enter the elements of the first matrix:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("Enter x[%d][%d]: ",i+1,j+1);
			fflush(stdout); fflush(stdin); scanf("%f",&x[i][j]);
		}
	}
	printf("Enter the elements of the second matrix:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("Enter y[%d][%d]: ",i+1,j+1);
			fflush(stdout); fflush(stdin); scanf("%f",&y[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			z[i][j]=x[i][j] + y[i][j];
		}
	}
	printf("Sum of matrix:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%.0f \t ",z[i][j]);
		}
		printf("\n");
	}
}
