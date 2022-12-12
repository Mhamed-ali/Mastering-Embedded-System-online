/*
 * main.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed
 */


#include "stdio.h"

void main(){
	char c ;
	    printf("Enter a character : ") ;
		fflush(stdin) ; fflush(stdout) ;
	    scanf("%c",&c) ;
	    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	     printf("%c is an alphabet ",c) ;
	    else
	     printf("%c is not an alphabet ",c) ;
}
