/*
 ============================================================================
 Name        : Unit_4_Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int prime(int num_1,int num_2);

int main(void)
{
	int x1,x2;

	printf("Enter numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x1);
	scanf("%d",&x2);

	prime(x1,x2);

	return 0;
}

int prime(int num_1,int num_2)
{
	int  flag=1,i;

	for( i=num_1 ; i<=num_2 ; i++)
	{
		if (i == 1 || i == 0)
		{
			continue;
		}

		flag = 1;

		for( int j=2 ; j<=i/2 ; j++ )
		{
			if(i%j == 0)
			{
				flag = 0;
				break;
			}
		}

		if(flag == 1)
		{
		printf("%d\t",i);
		}
	}

	return i;
}
