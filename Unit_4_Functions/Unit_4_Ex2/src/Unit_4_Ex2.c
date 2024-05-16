/*
 ============================================================================
 Name        : Unit_4_Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Fact(int var);

int main(void) {

	int num,fact;

	printf("Enter number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	fact = Fact(num);
	printf("%d",fact);

	return 0;
}

int Fact(int var)
{
	int fact=1;

	fact *= var;

	if(var>=2)
	return var * Fact(var-1);

}
