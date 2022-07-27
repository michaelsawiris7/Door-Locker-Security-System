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
	char x[40],z;
	printf("Enter the string: ");
	fflush(stdout); fflush(stdin); gets(x);

	printf("Enter a character to find the frequency: ");
	fflush(stdout); fflush(stdin); scanf("%c",&z);
	for(i=0;i<sizeof(x);i++)
	{
		if (x[i]==z) { count++; }
	}


	printf("Frequency of %c = %d\n",z,count);

}


