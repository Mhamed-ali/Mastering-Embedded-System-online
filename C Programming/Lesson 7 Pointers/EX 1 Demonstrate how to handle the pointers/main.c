/*
 * main.c
 *
 *  Created on: Jan 25, 2023
 *      Author: Mohamed
 */

int main() {

	int m = 29;
	printf("Address of m : 0x%x\nValue of m : %d\n", &m, m);
	int *ab = &m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab : 0x%x\nContent of pointer ab : %d\n", ab,
			*ab);
	m = 34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab : 0x%x\nContent of pointer ab : %d\n", ab,
			*ab);
	*ab = 7;
	printf("The pointer variable ab is assigned with the value 7 now.\n");

	printf("Address of m : 0x%x\nValue of m : %d\n", &m, m);

}

