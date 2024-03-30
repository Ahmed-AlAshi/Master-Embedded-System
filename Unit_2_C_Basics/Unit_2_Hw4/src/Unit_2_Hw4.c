/*
 ============================================================================
 Name        : Unit_2_Hw4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x,y,mult;

		printf("Enter two integers: ");
		fflush(stdin); fflush(stdout);
		scanf("%d \n %d ",&x ,&y);

		mult = x+y;

		printf("Sum = %d \n",mult);
}
