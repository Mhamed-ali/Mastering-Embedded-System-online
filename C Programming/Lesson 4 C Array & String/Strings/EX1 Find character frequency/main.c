/*
 * main.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Mohamed
 */

#include "stdio.h"

void main() {

	char str[1000], ch,c=0;
	printf("Enter a string : ");
	fflush(stdout);
	gets(str);
	fflush(stdin);
	printf("Enter a character to find frequency : ");
	fflush(stdout);
	scanf("%c",&ch);
	fflush(stdin);
	for(int i = 0 ; str[i]!='\0' ; i++){
			if(str[i] == ch){
				c++;
			}
		}
	printf("Frequency of %c = %d  ", ch ,c);

}
