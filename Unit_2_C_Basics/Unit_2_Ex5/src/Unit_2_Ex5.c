/*
 ============================================================================
 Name        : Unit_2_Ex5.c
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
	char userChar;

	fflush(stdin); fflush(stdout);
	printf("Please enter the char: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&userChar);

	if( (userChar >= 'a' && userChar <= 'z')  ||  (userChar >= 'A' && userChar <='Z'))
	{
		printf("%c is an alphabet" ,userChar);
	}
	else
	{
		printf("%c is not an alphabet" ,userChar);
	}
}
