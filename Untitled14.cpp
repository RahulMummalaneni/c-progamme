#include<stdio.h>
int main()
{
int a=0,b=1,c,n;
printf("%d %d",a,b);
while(c<=n)
{
	c=a+b;
	printf("%d",c);
	a=b;
	b=c;
	c=c+1;
 }
}  
