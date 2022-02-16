#include<stdio.h>
void f1()
{
int a=20,b=10;
printf("%d%d",a,b);
int c=a;
a=b;
b=c;
}
main()
{
int a=45,b=55;
f1(a,b);
printf("\n%d%d",a,b);
}
