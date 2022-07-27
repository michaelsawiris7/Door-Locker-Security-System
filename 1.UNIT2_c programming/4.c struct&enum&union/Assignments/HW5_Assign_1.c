/*
 * HW5_Assign_1.c
 *
 *  Created on: Jul 27, 2022
 *      Author: Michael Samir
 */
// Homework 5 | Assignment 1

#include "stdio.h"
#include "string.h"

struct Sstudent {
	char name[100];
	int roll;
	float marks;
};
 int main()
 {
	 struct Sstudent s;
	 printf("Enter name: ");
	 fflush(stdout); fflush(stdin); gets(s.name);
	 printf("Enter roll number: ");
	 fflush(stdout); fflush(stdin); scanf("%i",&s.roll);
	 printf("Enter marks: ");
	 fflush(stdout); fflush(stdin); scanf("%f",&s.marks);
	 printf("\nInformation\n======================================\n");
	 printf("Name: %s\n",s.name);
	 printf("Roll no.: %d\n",s.roll);
	 printf("Marks: %.1f\n",s.marks);


 }
