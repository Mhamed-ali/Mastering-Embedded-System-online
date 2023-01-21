/*
 * mian.c
 *
 *  Created on: Jan 21, 2023
 *      Author: Mohamed
 */


/*
 * mian.c
 *
 *  Created on: Jan 21, 2023
 *      Author: Mohamed
 */
#include "stdio.h"

int countones(int x);

int main (){
	printf("5 c function to count number of ones in binary number \n");
	printf("	TEST 1 input : 5  output : %d \n", countones(5 ));
	printf("	TEST 2 input : 15  output : %d \n", countones(15 ));
	printf("\n");}

int countones(int x)
{
	int sum=0;
	while(x!=0)
	{
		if(x&1==1)
		{
			sum++;
		}
		x=x>>1;
	}

	return sum;
}

