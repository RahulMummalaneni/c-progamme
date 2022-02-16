#include<stdio.h>
int main()
{
	int n,i, sum=0;
	scanf("%d", &n);
	i=0;
	while(i<=n)
	{
	sum += (i*i);
	i++;
	}
	printf("sum of squares of first %d natural numbers =%d",n,sum);
}
