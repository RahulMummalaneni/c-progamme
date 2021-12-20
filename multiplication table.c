#include<stdio.h>
main()
{
	int n,i=1,z;
	scanf("%d",&n);
	while(i<=10)
	{
		z=n*i;
		printf("%d*%d=%d\n",n,i,z);
		i++;
	}
}
