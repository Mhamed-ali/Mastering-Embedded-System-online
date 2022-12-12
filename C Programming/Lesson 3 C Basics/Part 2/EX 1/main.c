/*
 * main.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed
 */


#include "stdio.h"

void main(){
	int num = 0 ;
	printf("Enter an integer you want to check : ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&num ) ;
	if (num %2 == 0)
		printf("%d is even",num);
	else
		printf("%d is odd",num);
}
