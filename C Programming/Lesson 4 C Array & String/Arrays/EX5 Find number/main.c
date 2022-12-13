/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"
#define flush fflush(stdin);fflush(stdout);

void main() {
	int x=5, num, loc = -1;
	printf("Enter no of elements : ");
	flush
	scanf("%d", &x);
	int *ptr = malloc(x * sizeof(int));
	for (int i = 0; i < x; i++) {
		ptr[i] = (i + 1) * 10 + (i + 1);
		printf("%d\t", ptr[i]);
		flush

	}
	printf("\n");
	printf("Enter the elment to be searched :");
	flush
	scanf("%d", &num);

	for(int i=0;i<x;i++)
	{
		flush
		if(ptr[i]==num)
		{
			loc=i+1;
			printf("%d",loc);
			flush
		}
	}
}
