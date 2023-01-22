/*
 * mian.c
 *
 *  Created on: Jan 22, 2023
 *      Author: Mohamed
 */

#include <stdio.h>
#include <stdlib.h>
#define snum 2

struct student {
	char name[50];
	int roll;
	double marks;
};
int main() {
	struct student s[10];
	printf("Enter students information:\n");
	fflush(stdout);

	for (int i = 0; i < snum;i++) {
		s[i].roll = i+1;
		printf("for roll number: %d\n", i+1);
		printf("Enter name:");
		fflush(stdout);
		gets(s[i].name);
		fflush(stdin);
		printf("Enter marks:");
		fflush(stdout);
		scanf("%lf", &s[i].marks);
		fflush(stdin);
	}
	printf("Displaying students information:\n");
	for (int i = 0; i < snum; i++) {
		printf("information for roll number :%d\n", s[i].roll);
		printf("Name:%s\n", s[i].name);
		printf("Marks:%.2f\n", s[i].marks);
	}

}
