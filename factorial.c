#include<stdio.h>
main()
{
	int i,n,z;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		z=z*i;
		i++;
	}
	printf("%d",z);
}
