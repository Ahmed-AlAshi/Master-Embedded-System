/*
 ============================================================================
 Name        : Unit_2_Ex2.c
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
	char x = 0;

	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c" ,&x);

	if( x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'
	   || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' )
	{
		printf("%c is vowel \n" ,x);
	}
	else
	{
		printf("%c is consonant \n" ,x);
	}


}
