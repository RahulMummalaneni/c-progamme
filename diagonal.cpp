#include<stdio.h>
int main()
{
int a[4][4];
int i,j;
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
printf ("matrix is /n");
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
{
	printf("%d ",a[i][j]);
}
printf("/n");
}
}
