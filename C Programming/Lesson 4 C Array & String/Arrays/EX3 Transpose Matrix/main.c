/*
 * main.c
 *
 *  Created on: Dec 13, 2022
 *      Author: Mohamed
 */

#include "stdio.h"

int main() {

	int row = 2, col = 3;
	printf("Enter row and column of matrix: :");
	fflush(stdin);
	fflush(stdout);

	scanf("%d%d", &row, &col);

	int *a = (int*) malloc(row * col * sizeof(int));
	int *b = (int*) malloc(col * row * sizeof(int));

	if (a == NULL) {
		exit(0);
	} else {
		printf("Enter elments of matrix: :\n");

		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++) {
				printf("Enter elments a%d%d :", i + 1, j + 1);
				fflush(stdin);
				fflush(stdout);

				scanf("%d", (a + i * col + j));

			}

		printf("Entered Matrix:\n");
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				printf("%d\t", *(a + i * col + j));
			}
			printf("\n");
		}
		printf("Transpose of Matrix:\n");


		for (int i = 0; i < col; i++) {
					for (int j = 0; j < row; j++) {
						*(b + i * row + j)=*(a + j * col + i);
					}
				}
		for (int i = 0; i < col; i++) {
					for (int j = 0; j < row; j++) {
						printf("%d\t", *(b + i * row + j));
					}
					printf("\n");
				}
		free(a);
		free(b);

		return 0;
	}
}

