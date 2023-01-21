/*
 * mian.c
 *
 *  Created on: Jan 21, 2023
 *      Author: Mohamed
 */
int sumalldig(int x);
int main() {
	printf("1 c function to take a number and sum all digits \n");
	printf("	TEST 1 input : 123 output : %d \n", sumalldig(123));
	printf("	TEST 2 input : 4565 output : %d \n", sumalldig(4565));
	printf("\n");
}
int sumalldig(int x) {

	int sum = 0;
	while (x != 0) {
		sum += (x % 10);
		x /= 10;
	}
	return sum;
}
