/*
 * mian.c
 *
 *  Created on: Jan 22, 2023
 *      Author: Mohamed
 */

#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[50];
	int roll;
	double marks;
} ;
int main() {
	struct student s;
	printf("Enter information of students: \n");
	printf("Enter name: ");
	fflush(stdout);
	scanf("%s", &s.name);
	fflush(stdin);
	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d", &s.roll);
	fflush(stdin);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%lf", &s.marks);
	fflush(stdin);

	printf("Displaying Information\n");
	printf("name: %s\n", s.name);
	printf("Roll: %d\n", s.roll);
	printf("name: %lf\n", s.marks);

}
