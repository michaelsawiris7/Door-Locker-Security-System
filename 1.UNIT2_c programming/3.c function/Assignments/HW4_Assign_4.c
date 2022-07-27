/*
 * main.c
 *
 *  Created on: Jul 18, 2022
 *      Author: Michael Samir
 */


// EX_3.3
#include "stdio.h"
int power(int x,int y);

int main()
{
	int i,c;
	printf("Enter base number: ");
	fflush(stdout); fflush(stdin); scanf("%d",&i);
	printf("Enter power number: ");
	fflush(stdout); fflush(stdin); scanf("%d",&c);
	printf("%d ^ %d = %d\n",i,c,power(i,c));
}
int power(int x,int y)
{
	if(y!=1)

		{return x*power(x,y-1);}
	else return 1;

}
