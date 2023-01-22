/*
 * mian.c
 *
 *  Created on: Jan 22, 2023
 *      Author: Mohamed
 */

#include <stdio.h>
#include <stdlib.h>

struct Distance {
	int feet;
	double inch;
};
struct Distance adddist(struct Distance d1,struct Distance d2);
void printdist(struct Distance d);
int main() {
	struct Distance d1,d2,d3;
	printf("Enter information for 1st distance:\n");
	printf("Enter feet:");
	fflush(stdout);
	scanf("%d", &d1.feet);
	fflush(stdin);
	printf("Enter inch:");
	fflush(stdout);
	scanf("%lf", &d1.inch);

	printf("Enter information for 2nd distance:\n");
	printf("Enter feet:");
	fflush(stdout);
	scanf("%d", &d2.feet);
	fflush(stdin);
	printf("Enter inch:");
	fflush(stdout);
	scanf("%lf", &d2.inch);
	d3=adddist(d1,d2);
	printf("Sum of dostance =");
	printdist(d3);

}

struct Distance adddist(struct Distance d1,struct Distance d2){
	struct Distance d3;
	d3.feet=d1.feet+d2.feet;
	d3.inch=d1.inch+d2.inch;
	if(d1.inch+d2.inch>=12)
	{
		d3.feet++;
		d3.inch-=12;
	}

	return d3;
}
void printdist(struct Distance d)
{
	printf("sum of distance = %d\'-%.1f\"",d.feet,d.inch);
}
