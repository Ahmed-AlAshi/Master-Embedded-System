/*
 ============================================================================
 Name        : Unit_2_Ex7.c
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
		int fac = 1;

		printf("Enter the number: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&userNum);

	if( userNum >= 0 )
	{
		for ( i=1; i<=userNum; i++ )
			{
				fac *= i; //fac=fac*i
			}

			printf("Factorial = %d",fac);
	}
	else if ( userNum < 0 )
	{
		printf("Error!!! Factorial of negative number doesn't exist");
	}
	else
	{
		printf("Wrong input");
	}
}
