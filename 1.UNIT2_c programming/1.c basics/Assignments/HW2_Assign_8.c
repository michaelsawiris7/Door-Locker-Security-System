/*
 * main.c
 *
 *  Created on: Jul 14, 2022
 *      Author: Michael Samir
 */


// Example 8

#include "stdio.h"
#include "string.h"
int main()
{
	float a,b;
	char x;
	printf("Enter the operator\nChoose (+,-,*,/): ");
	fflush(stdout); fflush(stdin); scanf("%c",&x);

	printf("Enter the first number: ");
	fflush(stdout); fflush(stdin); scanf("%f",&a);

	printf("Enter the second number: ");
	fflush(stdout); fflush(stdin); scanf("%f",&b);

	switch(x)
	{

	case '+': printf("Answer: %.2f + %.2f = %.2f\n",a,b,a+b);break;
	case '-': printf("Answer: %.2f - %.2f = %.2f\n",a,b,a-b);break;
	case '*': printf("Answer: %.2f * %.2f = %.2f\n",a,b,a*b);break;
	case '/': printf("Answer: %.2f / %.2f = %.2f\n",a,b,a/b);break;
	default: printf("Error , TRY AGAIN\n");
	}
}
