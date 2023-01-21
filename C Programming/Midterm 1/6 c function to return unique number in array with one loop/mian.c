/*
 * mian.c
 *
 *  Created on: Jan 21, 2023
 *      Author: Mohamed
 */



#include "stdio.h"

int uniqnum(int x[],int size);

int main (){
	int x[]={4,2,5,2,5,7,4};

	int y[]={4,2,4};

	printf("6 c function to return unique number in array with one loop \n");
	printf("	TEST 1 input : x[3]={4,2,5,2,5,7,4}  output : %d \n", uniqnum(x,sizeof(x) / sizeof(x[0])));
	printf("	TEST 2 input : x[3]={4,2,4}  output : %d \n",uniqnum(y, sizeof(y) / sizeof(y[0])));
	printf("\n");
}

int uniqnum(int x[],int size)
{
	int uni=0;
	for(int i =0;i<size;i++)
	{
		uni =uni ^x[i];
	}
	return uni;
}
