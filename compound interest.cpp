#include<stdio.h>
#include<math.h>
main()
{
	
	float p,r,t,A,ci;
	printf("enter principle amount:");
	scanf("%f",&p);
	printf("enter time:");
	scanf("%f",&t);
	printf("enter the rate of interest:");
	scanf("%f",&r);
    A=p*(pow((1+r/100),t));
    printf("amount=%f\n",A);
    ci=A-p;
	printf("compound interest=%f",ci);
	
}
