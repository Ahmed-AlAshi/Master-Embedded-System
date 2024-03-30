/*
 ============================================================================
 Name        : Unit_2_Hw6.c
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
	float a,b;
	float swap;

	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&a);

	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&b);

	swap = a;
	a = b;
	b = swap;

	printf("After swapping, value of a = %f \n",a);
	fflush(stdin);
	fflush(stdout);
	printf("After swapping, value of b = %f \n",b);

}
