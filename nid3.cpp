#include<stdio.h>
int main()
{
	int n,i;
	int fact,rem;
	scanf("%d",&n);
	int sum=0;
	int temp=n;
	while(n)
	{
		i=1,fact=1;
		rem=n%10;
		while(i<=rem)
		{
			fact=fact*1;
			i++;
			sum=sum+fact;
			n=n/10;
		}
		if (sum==temp)
		printf("yes");
		else
		printf("no");
	}
}
