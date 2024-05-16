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
		char text[100],rev;
		int i,len;

//User index of the string
		printf("Enter the string: ");
		fflush(stdin); fflush(stdout);
		gets(text);

//Reversing the string
		len = strlen(text)-1;
        printf("%d\n",len);
		while( i < len )
		{
			rev = text[i];
			text[i] = text[len];
			text[len] = rev;
			i++;
			len--;
		}

		printf("\nReverse string is: %s",text);

	return 0;
}
