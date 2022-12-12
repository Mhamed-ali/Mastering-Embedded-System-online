/*
 * main.c
 *
 *  Created on: Dec 12, 2022
 *      Author: Mohamed
 */

#include "stdio.h"

void main(){
	int  sum = 0 , n ;
	printf("Enter an integer : ")  ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&n) ;

	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum) ;
}
