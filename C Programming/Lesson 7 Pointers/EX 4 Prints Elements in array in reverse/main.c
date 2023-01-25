/*
 * main.c
 *
 *  Created on: Jan 25, 2023
 *      Author: Mohamed
 */


#include <stdio.h>
#include <string.h>

int main() {
	int size;
		int arr[15];
		int *ptr = NULL;
		printf("Input the number of elements to store in the array (max 15) :");
		fflush(stdout);
		scanf("%d",&size);
		fflush(stdin);
		printf("\nInput %d number of elements in the array : \n",size);
		fflush(stdout);
		for(int i = 0 ; i < size ; i++){
			printf("element -%d :",i+1);
			fflush(stdout);
			scanf("%d",&arr[i]);
			fflush(stdin);
		}
		ptr = &arr[0];
		printf("The elements of array in reverse order are : ");
		fflush(stdout);
		for(int i = size-1 ; i >= 0; i--){
			printf("\nelement -%d : %d",i+1,*(ptr+i));
			fflush(stdout);
		}

}
