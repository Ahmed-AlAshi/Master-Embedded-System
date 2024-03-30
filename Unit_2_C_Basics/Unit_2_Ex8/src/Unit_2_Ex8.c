/*
 ============================================================================
 Name        : Unit_2_Ex8.c
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
	char Operator;
	int Op_1,Op_2;
	int sum = 0;
	int sub = 0;
	int mult = 1;
	int dev = 1;

	printf("Enter the operator: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&Operator);

	printf("Enter operand 1: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Op_1);

	printf("Enter operand 2: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Op_2);

	switch(Operator)
	{
	case('+'):
			{
		sum = Op_1 + Op_2;
		printf("%d + %d = %d",Op_1,Op_2,sum);
			}
	break;

	case('-'):
				{
		sub = Op_1 - Op_2;
		printf("%d - %d = %d",Op_1,Op_2,sub);
				}
	break;

	case('*'):
				{
		mult = Op_1 * Op_2;
		printf("%d * %d = %d",Op_1,Op_2,mult);
				}
	break;

	case('/'):
					{
		dev = Op_1 / Op_2;
		printf("%d / %d = %d",Op_1,Op_2,dev);
					}
	break;
	}

}
