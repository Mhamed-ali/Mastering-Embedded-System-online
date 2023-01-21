/*
 * mian.c
 *
 *  Created on: Jan 21, 2023
 *      Author: Mohamed
 */
#include <stdio.h>
#include <string.h>
void rev(char *s);
int main() {

	char s[] = "mohamed gamal.";

	printf("9 c function to reverse words in string \n");
	printf("	TEST 1 input : mohamed gamal.  output :");
	rev(s);
	printf("\n");
}


void rev(char *s) {

	char temp[50];
	char temp2[50] = { };
	int flag = 0;
	int size = strlen(s);

	for (int i = size - 1; i >= 0; i--) {
		if (s[i] == ' ' || s[i] == '/0')
		{
			for (int j = size - i - 2; j >= 0; j--) {
				if (temp[j] == ' ') {
					break;
				}
				if (temp[j] == '.') {
					flag = 1;
					continue;
				}
				printf("%c", temp[j]);
			}
			printf(" ");

		}
		temp[size - i - 1] = s[i];
		temp[size] = 0;
	}
	for (int i = size - 1; i >= 0; i--) {
		if (temp[i] == ' ')
			break;
		printf("%c", temp[i]);
	}
	if (flag == 1) {
		printf(".");
	}
}
