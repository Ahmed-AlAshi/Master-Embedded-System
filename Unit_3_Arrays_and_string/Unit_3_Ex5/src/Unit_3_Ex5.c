/*
 ============================================================================
 Name        : Unit_3_Ex5.c
 Author      : Ahmed Alashi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//Incrementing variables used in this code
	int arr[]={11,22,33,44,55,66,77,88,99,110,121,132,143,154,165,176,187,198,209};
	int i , NOE , SNUM;
	int flag = 0;
	int n = 0;

	//Asking user to enter number of elements in the array
	printf("Enter number of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&NOE);

    //Invalid index condition
    if( NOE > 19 )
    {
        printf("Invalid Index!!");
        return 1;
    }
	//Printing the array
	for( i=0 ; i<NOE ; i++ )
		{
			printf("%d\t",arr[i]);
		}
	printf("\n");

	//Asking user to enter the element to be searched
	printf("Enter element to be searched: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&SNUM);

	//Searching for the number's location and determine if it's existed
	while(SNUM != arr[n])
	{
	    n++;
	}
	if( SNUM == arr[n] )
	{
	    printf("The number location is: %d ",n+1);
	}


	return 0;
}
