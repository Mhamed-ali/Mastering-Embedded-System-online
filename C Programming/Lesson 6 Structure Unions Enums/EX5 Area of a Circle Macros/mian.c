/*
 * mian.c
 *
 *  Created on: Jan 22, 2023
 *      Author: Mohamed
 */
#include <stdio.h>

#define pi (3.1415)
#define area(R) (R*R*pi)
int main(){

	double rad;
	printf("Enter the radius :");
	fflush(stdout);
	scanf("%lf",&rad);
	rad = area(rad);
	printf("Area=%lf",rad);
}
