/*
 * main.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Mohamed
 */

#include "stdio.h"
#define flush fflush(stdin);fflush(stdout);

int main() {

	int x, num, loc;
	printf("Enter no of elements : ");
	flush
	scanf("%d", &x);
	int *ptr = malloc(x * sizeof(int));
	for (int i = 0; i < x; i++) {
		ptr[i] = i + 1;
		printf("%d", ptr[i]);
		flush

	}
	printf("\n");
	printf("Enter the elment to be inserted :");
	flush
	scanf("%d", &num);
	printf("Enter the location : ");
	flush
	scanf("%d", &loc);
	ptr = (int *)realloc(ptr, x+1 * sizeof(int));
	ptr[x]=0;

	for (int i = x; i > loc; i--) {
		ptr[i]=ptr[i-1];
	}
	ptr[loc-1]=num;
	for (int i = 0; i <x+1 ; i++) {
		printf("%d", ptr[i]);
		}

}

