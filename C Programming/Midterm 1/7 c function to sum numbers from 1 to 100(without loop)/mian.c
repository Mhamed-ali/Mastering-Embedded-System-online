/*
 * mian.c
 *
 *  Created on: Jan 21, 2023
 *      Author: Mohamed
 */



#include "stdio.h"

int sum(int x);

int main (){


	printf("7 c function to sum numbers from 1 to 100(without loop) \n");
	printf("	TEST 1 input : 100  output : %d \n",sum(100));
	printf("\n");
}

int sum(int x)
{
	return (x*(x+1)/2);
}
