/*
 ============================================================================
 Name        : Unit_2_Ex4.c
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
	signed int x;

	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d" ,&x);

	if( x>0 )
	{
		printf("The number you entered is positive! \n");
	}
	else if( x<0 )
	{
		printf("The number you entered is negative! \n");
	}
	else if( x==0 )
	{
		printf("The number you entered is zero!");
	}
}
