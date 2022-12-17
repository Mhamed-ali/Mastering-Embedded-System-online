/*
 * main.c
 *
 *  Created on: Dec 17, 2022
 *      Author: Mohamed
 */


#include <stdio.h>

int fac(int x);

int main() {

	unsigned int x;
	printf("Enter an positive integer: ");
	fflush(stdout);
	scanf("%d",&x);
	printf("factorial of %d = %d",x,fac(x));
}
int fac(int x) {
	  if (x==0)
	        return 1;
	    return x * fac(x - 1);
}
