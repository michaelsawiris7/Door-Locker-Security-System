/*
 * main.c
 *
 *  Created on: Jul 17, 2022
 *      Author: Michael Samir
 */

// EX_3.3
#include "stdio.h"
#include "string.h"
int main()
{
	int i,c,k;
	char x[40],y[40];
	printf("Enter the string: ");
	fflush(stdout); fflush(stdin); gets(x);
	c=strlen(x);
	k=c;	y[c+1]=0;

	for(i=0; i<c;i++)

	{
		y[i]=x[k-1]; k--;
	}
	y[c]=0;
	printf("Reverse of string = %s\n",y);
}


