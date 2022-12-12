/*
 * main.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed
 */


#include "stdio.h"

void main(){
	float num1,num2,num3;
	printf("Enter Three numbers : ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f%f%f",&num1,&num2,&num3) ;
	if (num1>num2)
	{
		if (num1>num3)
		{
			printf("Largest number = %g ",num1);
		}
		else{
			printf("Largest number = %g ",num3);
		}
	}
	else{
		if (num2>num3)
				{
					printf("Largest number = %g ",num2);
				}
				else{
					printf("Largest number = %g ",num3);
				}
	}
}
