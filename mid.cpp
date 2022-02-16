#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(x==y&&y==z&&x==z)
	{
		printf("3");
	}
	else if (x==y||y==z||x==z)
	{
		printf("2");
	}
	else
	{
		printf("0");
}
	}
