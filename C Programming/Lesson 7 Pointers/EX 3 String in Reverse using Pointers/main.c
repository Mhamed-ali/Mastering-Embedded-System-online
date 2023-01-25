/*
 * main.c
 *
 *  Created on: Jan 25, 2023
 *      Author: Mohamed
 */
#include <stdio.h>
#include <string.h>

int main() {

	char a[50];
	printf("Input a string :");
	fflush(stdout);
	scanf("%s",a);
	fflush(stdin);

	char* ptr=&a[strlen(a)-1];
	for(int i=0;i<strlen(a);i++)
	{
		printf("%c",*ptr);
		ptr--;
	}
}


