/*
 * main.c
 *
 *  Created on: Dec 17, 2022
 *      Author: Mohamed
 */


#include <stdio.h>
void reverseString( ){
	char c ;
	scanf("%c",&c);
	if (c != '\n')
		reverseString();
	printf("%c",c);

}

int main(void) {
	printf("Enter a Sentence: ");
	fflush(stdout);
	reverseString();


	return 0;
}
