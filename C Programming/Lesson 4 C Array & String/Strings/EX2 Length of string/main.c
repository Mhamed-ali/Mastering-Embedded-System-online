/*
 * main.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Mohamed
 */
#include "stdio.h"

void main() {
	char str[1000];
	int len= 0;
	printf("Enter a string : ");
	fflush(stdout);
	gets(str);
	fflush(stdin);
	for (int i = 0; str[i] != '\0'; i++) {
		len++;
	}
	printf("Length of string: %d", len);

}
