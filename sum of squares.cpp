#include<stdio.h>
main()
{
	int n , i , sum=0;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=i*i+sum;
		i++;
	}
	printf("%d",sum);
}
