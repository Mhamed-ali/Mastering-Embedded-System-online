/*
 * main.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Mohamed
 */

/*
 * main.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Mohamed
 */

#include "stdio.h"

int main() {
	float *ptr;
	float avg=0;
	int x;
	printf("Enter number of data:");
	fflush(stdin);fflush(stdout);

	scanf("%d", &x);
	ptr = (float*) malloc(x * sizeof(float));
	if (ptr == NULL) {
//		printf("Memory not allocated.\n");
		exit(0);
	} else {
//		printf("Memory successfully allocated using malloc.\n");

		\
		for (int i = 0; i < x; i++) {

			printf("%d. Enter number: ", i + 1);
			fflush(stdin);fflush(stdout);

			scanf("%f", ptr + i);
			avg +=ptr[i];
		}

		printf("average = %g", avg/x);
		fflush(stdin);fflush(stdout);

	}
}

