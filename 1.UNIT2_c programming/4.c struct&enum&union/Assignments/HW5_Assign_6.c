/*
 * HW5_Assign_6.c
 *
 *  Created on: Jul 31, 2022
 *      Author: Michael Samir
 */
// Homework 5 | Assignment 6

#include "stdio.h"
union job
{
    char name[32];
    float salary;
    int worker_no;
}u;
struct job1
{
    char name[32];
    float salary;
    int worker_no;
}s;
int main()
{
printf("size of union     = %d bytes.\n", sizeof(u)); //1*32       = 32 bytes
printf("size of structure = %d bytes.\n", sizeof(s)); //1*32 +4+4  = 40 bytes
}
