/*
 * main.c
 *
 *  Created on: Jul 17, 2022
 *      Author: Michael Samir
 */

// EX_4
#include"stdio.h"
int main()
{
	int n,i,k;
	float x[101],e,z;
	printf("Enter no. of elements [max. no. is 100]: ");
	fflush(stdout); fflush(stdin); scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element no.(%d): ",i+1);
		fflush(stdout); fflush(stdin); scanf("%f",&x[i]);
	}
	printf("The matrix: \n");
	for(i=0;i<n;i++) { printf("%.1f\t",x[i]); }
	printf("\nEnter no. to be inserted: ");
	fflush(stdout); fflush(stdin); scanf("%f",&z);
	printf("Enter the location: ");
	fflush(stdout); fflush(stdin); scanf("%d",&k);
	n++;
	while(k<n)
	{
		e=x[k];
		x[k+1]=e; k++;
	}
	x[k]=z;
	printf("The matrix: \n");
		for(i=0;i<n;i++) { printf("%.1f\t",x[i]); }
}
