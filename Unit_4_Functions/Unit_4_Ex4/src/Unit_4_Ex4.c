/*
 ============================================================================
 Name        : Unit_4_Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int num, int pwr);

int main(void) {

	int n,p;
	int Presult ;

	printf("Enter the number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	printf("Enter the power (positive): ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&p);

	Presult = power(n,p);

	printf("%d ^ %d = %d",n,n,Presult);

	return 0;
}

int power(int num, int pwr)
{
	if (pwr == 0)
	{
        return 1;
	}
	else
	{
	    return num * power(num, pwr - 1);
	}
}
