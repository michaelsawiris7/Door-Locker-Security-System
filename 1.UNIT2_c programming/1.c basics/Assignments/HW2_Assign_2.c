/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Michael Samir
 */

// Example 2

#include "stdio.h"
#include "string.h"
int main()
{
	char a;
	printf("Enter an alphabet: ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&a);

	switch(a)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'u':
	case 'o':
		printf("%c is a vowel\n",a);
		break;
	default:
		printf("%c is a constant\n",a);
	}
}
