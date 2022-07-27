/*
 * main.c
 *
 *  Created on: Jul 15, 2022
 *      Author: Michael Samir
 */

// EX_3
#include "stdio.h"
#include "string.h"
int main()
{
	float x[101][101],y[101][101];
	int i,j,n,m;
	printf("Enter the rows of matrix :[choose from(1 to 100)]: ");
	fflush(stdout); fflush(stdin); scanf("%d",&n);

	printf("Enter the columns of matrix :[choose from(1 to 100)]: ");
	fflush(stdout); fflush(stdin); scanf("%d",&m);
	printf("Enter the elements of matrix:\n");

	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Enter element no.[%d][%d]: ",i+1,j+1);
			fflush(stdout); fflush(stdin); scanf("%f",&x[i][j]);
		}
	}
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			y[i][j]=x[j][i];
		}
		printf("\n");
	}
	printf("Input Matrix:\n");
	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%.2f\t",x[i][j]);
		}
		printf("\n");
	}
	printf("Transpose Matrix:\n");
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%.2f\t",y[i][j]);
		}
		printf("\n");
	}

}



