/*
 ============================================================================
 Name        : Unit_2_Ex3.c
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
	int Num_1 , Num_2 , Num_3;

	printf("Enter the three numbers: \n");

	printf("Enter number 1: ");
	fflush(stdin);fflush(stdout);
	scanf("%d \n ",&Num_1);

	printf("Enter number 2: ");
	fflush(stdin);fflush(stdout);
	scanf("%d \n ",&Num_2);

	printf("Enter number 3: ");
	fflush(stdin);fflush(stdout);
	scanf("%d \n ",&Num_3);

	float largest_Num = Num_1;

	if( Num_2 > largest_Num)
	{
		largest_Num = Num_2;
	}
	if( Num_3 > largest_Num)
	{
		largest_Num = Num_3;
	}

	printf("Largest number is: %f" ,largest_Num);
}
