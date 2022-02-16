#include<stdio.h>
int main()
{
int a[5];


int i;
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
printf("array elements are");
for(i=0;i<5;i++)
{
	printf("\n%d",&a[i]);
}
return 0;
}
