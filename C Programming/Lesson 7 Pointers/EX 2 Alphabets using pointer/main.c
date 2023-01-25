/*
 * main.c
 *
 *  Created on: Jan 25, 2023
 *      Author: Mohamed
 */

int main() {

	char x='A';
	char *ptr=&x;
	printf("The Alphabets are :\n");
	for (int i=0;i<26;i++)
	{
		printf("%c\t",*ptr+i);
	}


}

