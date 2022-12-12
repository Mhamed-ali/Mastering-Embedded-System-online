/*
 * main.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed
 */


#include "stdio.h"

void main(){

	char op ;
	float num1 , num2 ;
	printf("Enter operator either + , - , * , / ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%c",&op) ;
	printf("Enter two operands : \n") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f%f",&num1,&num2);


	switch(op)
	{
	case '+' :
		printf("%g %c %g = %g ",num1,op,num2,num1+num2) ;
		break ;

	case '-' :
		printf("%g %c %g = %g ",num1,op,num2,num1-num2) ;

		break ;

	case '/' :
		if(num2 == 0 ){
					printf("Error Division by zero ") ;
				}
				else{
					printf("%g %c %g = %g ",num1,op,num2,num1/num2) ;
				}
		break ;

	case '*' :
		printf("%g %c %g = %g ",num1,op,num2,num1*num2) ;
		break ;

	default :
			printf("Fault") ;

	}


}
