/*
 * main.c
 *
 *  Created on: Jan 25, 2023
 *      Author: Mohamed
 */
#include <stdio.h>

struct Exmployee {
	char ExmployeeName[50];
	int ExmployeeId;
};
int main() {
	struct Exmployee emp1 = { "Alex",1002 }, emp2 = { "mohamed",1 }, emp3 = { "Ali",3 };
	struct Exmployee *arr[3] = { &emp1, &emp2, &emp3 };
	struct Exmployee(*(*ptr)[3]) = &arr;
	printf("ExmployeeName : %s\n", (*(*ptr + 0))->ExmployeeName);
	printf("Employee ID : %d", (*(*ptr + 0))->ExmployeeId);
}
