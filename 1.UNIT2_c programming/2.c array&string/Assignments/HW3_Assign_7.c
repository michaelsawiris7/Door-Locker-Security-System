/*
 * main.c
 *
 *  Created on: Jul 17, 2022
 *      Author: Michael Samir
 */

// EX_1.1
#include"stdio.h"
int main()
{
	int i,count=0;
	char x[40];
	printf("Enter the string: ");
	fflush(stdout); fflush(stdin); gets(x);

	for(i=0;x[i]!=0;i++)
	{count++;	}

	printf("Length of string = %d\n",count);
}

