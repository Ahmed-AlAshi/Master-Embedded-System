/*
 ============================================================================
 Name        : Unit_3_Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
    float ar_1[2][2];
	float ar_2[2][2];
	float sum[2][2];

	for ( r=0 ; r<2 ; r++ )
	{
    	for(c=0 ; c<2 ; c++)
    	{
    	printf("Enter element [%d][%d] of array_1:\t",r,c);
    	fflush(stdin); fflush(stdout);
    	scanf("%f",&ar_1[r][c]);
    	}
	}

	for ( r=0 ; r<2 ; r++ )
	{
    	for(c=0 ; c<2 ; c++)
    	{
    	printf("Enter element [%d][%d] of array_2:\t",r,c);
    	fflush(stdin); fflush(stdout);
    	scanf("%f",&ar_2[r][c]);
    	}
	}

	for (r=0 ; r<2 ; r++)
	{
    	for(c=0 ; c<2 ; c++)
    	{
    	    sum[r][c] = ar_1[r][c] + ar_2[r][c];
    	}
	}

    for (r=0 ; r<2 ; r++)
    {
        for (c=0 ; c<2 ; c++)
        {
            printf("%2.2f \t", sum[r][c]);
        }
        printf("\r\n");
    }

    return 0;
}
