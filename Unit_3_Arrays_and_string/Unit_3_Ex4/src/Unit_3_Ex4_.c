/*
 ============================================================================
 Name        : Unit_3_Ex4_.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//Incrementing variables used in this code
	int arr[20];
	int i , NOE , INUM , LOC;

	//Asking user to enter number of elements in the array
	printf("Enter number of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&NOE);

	//Printing the array
	for( i=0 ; i<NOE ; i++ )
	{
		arr[i] = i+1;
	}

	for( i=0 ; i<NOE ; i++ )
		{
			printf("%d\t",arr[i]);
		}
	printf("\n");

	//Asking user to enter the new element and its location
	printf("Enter element to be inserted: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&INUM);

	printf("Enter location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&LOC);

	//Condition in case fault index
	if ( LOC > NOE || LOC < 0 )
	{
		printf("Invalid index!!\n");
		return 1;
	}

	//Inserting the new element
	for( i=NOE ; i>LOC ; i--)
	{
		arr[i] = arr[i-1];
	}

	arr[LOC] = INUM;
	NOE++;

	//Printing the new array with the new element
	for( i=0 ; i<NOE ; i++ )
			{
				printf("%d\t",arr[i]);
			}

	return 0;
}
