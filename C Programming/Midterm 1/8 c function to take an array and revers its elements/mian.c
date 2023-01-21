/*
 * mian.c
 *
 *  Created on: Jan 21, 2023
 *      Author: Mohamed
 */


#include "stdio.h"

void revarr(int x[],int size);
void printarr(int x[],int size);

int main (){
	int x[5]={1,2,3,4,5};
	revarr(x,sizeof(x)/sizeof(x[0]));
	printf("8 c function to take an array and revers its elements \n");
	printf("	TEST 1 input : a[5]={1,2,3,4,5}  output :");
	printarr(x, sizeof(x)/sizeof(x[0]));
	printf("\n");
}

void revarr(int x[],int size)
{
	int temp=0;
	for(int i=0;i<(size/2);i++)
	{
		temp=x[i];
		x[i]=x[size-i-1];
		x[size-i-1]=temp;
	}
}

void printarr(int x[],int size)
{
	for(int i =0 ;i<size;i++)
	{
		printf("%d ",x[i]);
	}
}
