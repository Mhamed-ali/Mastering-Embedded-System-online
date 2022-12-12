/*
 * main.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed
 */


#include "stdio.h"

void main(){
	float num;
	printf("Enter a number : ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f",&num) ;
	if(num==0)
	{
		printf("You entered zero. ") ;

	}
	else{
		num>0?printf("%g is positive ",num) :printf("%g is negative ",num);
	}

}
