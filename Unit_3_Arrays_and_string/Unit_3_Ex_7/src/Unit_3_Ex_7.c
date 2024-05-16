/*
 ============================================================================
 Name        : Unit_3_Ex_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(void) {

//Intializing and incrementing variables
		char text[100];
		int len = 0;
		int i;

//User index of the string
		printf("Enter the string: ");
		fflush(stdin); fflush(stdout);
		gets(text);

//Printing the string
		printf("%s \n",text);

//Couting the string length
		for( i=0 ; text[i] > '\0' ; i++ )
		{
			len++;
		}

//Printing the string length
		printf("The string length is: %d",len);

	return 0;
}
