/*
 ============================================================================
 Name        : Unit_4_Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void reverse();

int main()
{

    printf("Enter sentense: ");
    fflush(stdin); fflush(stdout);
    reverse();

    return 0;
}

void reverse()
{
    char c;
    scanf("%c",&c);
    if(c != '\n')
    {
        reverse();
        printf("%c",c);
    }
}
