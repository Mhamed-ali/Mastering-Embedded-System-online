/*
 * main.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed
 */


#include "stdio.h"

void main(){
	char c = 0 ;
	printf("Enter a character: ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%c",&c) ;
	printf("ASCII value of %c = %d", c , c);
	printf("\n###########################");
}
