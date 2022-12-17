/*
 * main.c
 *
 *  Created on: Dec 17, 2022
 *      Author: Mohamed
 */

#include <stdio.h>
void printprime(int x, int y);
int isprime(int x);
int main() {
	int x, y;
	printf("Enter two numbers(intervals): ");
	fflush(stdout);

	scanf("%d%d", &x, &y);
	fflush(stdin);
	fflush(stdout);

	printprime(10, 30);

}
void printprime(int x, int y) {

	printf("Prime numbers between %d and %d are : ", x, y);

	for (int i = x; i <= y; i++) {
		if (isprime(i) == 1) {
			printf("%d ", i);
		}
	}
}

int isprime(int x) {
	if (x == 0 || x == 1)
		return 0;
	for (int i = 2; i <= x / 2; ++i) {

		if (x % i == 0) {
			return 0;

		}
	}

	return 1;
}
