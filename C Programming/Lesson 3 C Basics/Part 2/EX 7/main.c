/*
 * main.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed
 */


 #include "stdio.h"

int fac(n)
{
	if(n==2)
		return 2;
	return n*fac(n-1);
}
void main(){

	int n;
	printf("Enter an integer : ")  ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&n ) ;
	if(n<0)
	{
		printf("Error !! factorial of negative number doesn't exist") ;
	}
	else
	{
		printf("Factorial = %d",fac(n)) ;
	}
}
