/*
 * main.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed
 */


#include "stdio.h"

void main(){
	float n1 , n2 ;
	printf("Enter value of a : ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f",&n1) ;
	printf("Enter value of b : ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f",&n2) ;

	n1 = n2+n1 ;
	n2=n1-n2;
	n1=n1-n2;
	printf("After swapping, value of a = %g \n",n1);
	printf("After swapping, value of b = %g \n",n2);
	printf("\n###########################");
}
