/*
 ============================================================================
 Name        : Unit_3_Ex6.c
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
	char SCHAR;
	int i,len;
	int flag = 0;

	//User index of the string
	printf("Enter the string: ");
	fflush(stdin); fflush(stdout);
	gets(text);

	//Printing the string
	printf("%s \n",text);

	//Searching for character entered
	printf("Enter character to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&SCHAR);

	len = strlen(text);
	printf("Length is: %d\n",len);

	for(i=0 ; text[i] != '\0' ; i++)
	{
		if( text[i] == SCHAR )
		{
			++flag;
		}
	}
	if( flag != 0 )
 	{
		printf("The frequency of %c is: %d",SCHAR,flag);
 	}
	else
	{
 		printf("The character is not found in the string");
	}


	return 0;
}
