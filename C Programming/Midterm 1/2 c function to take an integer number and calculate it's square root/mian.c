/*
 * mian.c
 *
 *  Created on: Jan 21, 2023
 *      Author: Mohamed
 */
#include <math.h>
double findsqur(double x);
int main() {

	printf("2 c function to take an integer number and calculate it's square root \n");
	printf("	TEST 1 input : 4 output : %f \n", findsqur(4));
	printf("	TEST 2 input : 10 output : %f \n", findsqur(10));
	printf("\n");
}


double findsqur(double x) {
	return sqrt(x);
}
