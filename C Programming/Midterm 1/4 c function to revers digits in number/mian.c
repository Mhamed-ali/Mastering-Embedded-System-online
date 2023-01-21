/*
 * mian.c
 *
 *  Created on: Jan 21, 2023
 *      Author: Mohamed
 */
#include "stdio.h"

int reversdigits(int x);

int main (){
	printf("4 c function to revers digits in number \n");
	printf("	TEST 1 input : 2457  output : %d \n", reversdigits(2457 ));
	printf("	TEST 2 input : 1057 output : %d \n", reversdigits(1057));
	printf("\n");}

int reversdigits(int x)
{
	int rev=0;
	while(x != 0){
		rev=(rev*10)+(x%10);
		x/=10;
	}
	return rev;
}
