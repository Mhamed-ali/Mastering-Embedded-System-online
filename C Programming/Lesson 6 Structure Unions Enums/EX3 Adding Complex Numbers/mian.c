/*
 * mian.c
 *
 *  Created on: Jan 22, 2023
 *      Author: Mohamed
 */

#include <stdio.h>
#include <stdlib.h>

struct complexnum {
	double realnum;
	double imaginarynum;
};
struct complexnum addcomplex(struct complexnum num1,struct complexnum num2);
void printcomplexnum(struct complexnum num);
int main() {
	struct complexnum num1,num2,sum;
	printf("For 1st complex num:\n");
	printf("Enter real and imaginary respectively:\n");
	fflush(stdout);
	scanf("%lf %lf", &num1.realnum,&num1.imaginarynum);
	fflush(stdin);

	printf("For 2nd complex num:\n");
	printf("Enter real and imaginary respectively:\n");
	fflush(stdout);
	scanf("%lf %lf", &num2.realnum,&num2.imaginarynum);
	fflush(stdin);
	sum=addcomplex(num1,num2);
	printf("sum=");
	printcomplexnum(sum);



}

struct complexnum addcomplex(struct complexnum num1,struct complexnum num2){
	struct complexnum sum;
	sum.realnum=num1.realnum+num2.realnum;
	sum.imaginarynum=num1.imaginarynum+num2.imaginarynum;
	return sum;
}
void printcomplexnum(struct complexnum num)
{
	printf("%.1f+%.1fi",num.realnum ,num.imaginarynum) ;
}
