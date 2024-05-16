/*
 ============================================================================
 Name        : Unit_3_Ex2.c
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
	int n;
	int Avg = 0;

	printf("Enter number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	int avg[n];

	for (int i=0 ; i<n ; i++)
	{
		printf("Enter element %d: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&avg[i]);
	}

	for (int i=0 ; i<n ; i++)
	{
		Avg += avg[i];
	}

	Avg /= n;
	printf("Average of the elements is: %d",Avg);

	return EXIT_SUCCESS;
}
