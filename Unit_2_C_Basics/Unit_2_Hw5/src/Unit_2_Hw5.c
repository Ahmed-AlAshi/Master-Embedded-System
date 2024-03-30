/*
 ============================================================================
 Name        : Unit_2_Hw5.c
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

	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&userChar);

	printf("ASCII value of %c is: %d",userChar,userChar);
}
