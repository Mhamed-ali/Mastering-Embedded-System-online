/*
 * mian.c
 *
 *  Created on: Jan 21, 2023
 *      Author: Mohamed
 */
void printprime(int x, int y);
int isprime(int x);

int main() {
	printf("3 c function to print all prime numbers between two numbers \n");
	printf("	TEST 1 input : n1=1,n2=20 output :");
	printprime(1,20);
	printf("\n");
}

void printprime(int x, int y) {
	for (int i = x; i < y; i++) {
		if (isprime(i)) {
			printf("%d ", i);
		}
	}
}

int isprime(int x) {
	//0 and 1 are not prime
	if (x == 0 || x == 1) {
		return 0;
	}
	for (int i = 2; i <= x / 2; i++) {
		if (x % i == 0)
			return 0;

	}
	return 1;
}
