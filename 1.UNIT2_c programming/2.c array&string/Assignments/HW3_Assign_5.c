/*
 * main.c
 *
 *  Created on: Jul 17, 2022
 *      Author: Michael Samir
 */
// EX_5

#include"stdio.h"
int main()
{
	int n,i,x[101],z;
	printf("Enter no. of elements [max. no. is 100]: ");
	fflush(stdout); fflush(stdin); scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element no.(%d): ",i+1);
		fflush(stdout); fflush(stdin); scanf("%d",&x[i]);
	}
	printf("The matrix: \n");
	for(i=0;i<n;i++) { printf("%d\t",x[i]); }

	printf("\nEnter element to be searched: ");
	fflush(stdout); fflush(stdin); scanf("%d",&z);

	for(i=0;i<n;i++)
	{
		if(z==x[i])
		{
			printf("Number found at the location: %d\n",i+1);
			break;
		}
	}

}
