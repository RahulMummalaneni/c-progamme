#include<stdio.h>
main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	switch(x%2)
	{
		case0:printf("even");
			break;
		default:printf("odd");
	}	
}
