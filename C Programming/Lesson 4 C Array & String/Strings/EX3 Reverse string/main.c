/*
 * main.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Mohamed
 */

#include "stdio.h"

void main() {
	char str[1000], temp;
	int i;
	printf("Enter a string : ");
	fflush(stdout);
	gets(str);
	fflush(stdin);
	i = 0;
	while (i < (strlen(str)+1)/2) {
		temp = str[i];
		str[i] = str[strlen(str)-i-1];
		str[strlen(str)-i-1] = temp;
		i++;
	}
	printf("Reverse string is : %s", str);
	fflush(stdout);

}
