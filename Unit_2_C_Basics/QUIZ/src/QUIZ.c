/*
 ============================================================================
 Name        : QUIZ.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=5;
	int j= (i++ , i++ , i++);
	//j = i++ + i++ ;
	printf("%d",j);
}
