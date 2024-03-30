/*
 ============================================================================
 Name        : Unit_2_Ex6.c
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
	int userNum,i;
	int sum = 0;

	printf("Enter the number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&userNum);

	for ( i=0; i<=userNum; i++ )
	{
		sum += i;
	}

	printf("Sum = %d",sum);
}
