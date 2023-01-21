/*
 * mian.c
 *
 *  Created on: Jan 21, 2023
 *      Author: Mohamed
 */

#include "stdio.h"
#include <string.h>

int maxones(int x);

int main() {

	printf("10 c function to count the max number of ones between two zeros \n");
	printf("	TEST 1 input : 14(01110) output : %d \n", maxones(14));
	printf("	TEST 2 input: 110(0110 1110) output :%d \n",maxones(110));
}

int maxones(int x) {
	int max = 0;
	int cur = 0;
		while ((x & 1) == 0&&x!=0)
		{
			x =x>> 1;
			while ((x & 1) == 0)
			{
				x = x >> 1;
			}
			while (((x & 1) == 1))
			{
				cur++;
				x = x >> 1;
			}

			if (((x & 1) == 0))
			{
				if (max < cur)

					max = cur;
				cur = 0;
			}
			cur = 0;
		}

		x = x >> 1;

	return max;
}
