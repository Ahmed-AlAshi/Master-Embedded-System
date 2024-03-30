/*
 ============================================================================
 Name        : Unit_2_Hw2.c
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
	int x;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	printf("You entered: %d" ,x);
}
