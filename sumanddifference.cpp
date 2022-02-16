#include <stdio.h>
void oper(int*,int*,int*,int*,int*);
 int main()
{
  int a,b,c,d,e;
  scanf("%d%d",&a,&b);
  oper(&a,&b,&c,&d,&e);
  printf("the sum is %d",c);
  printf("the diff id %d",d); 
  printf("the product is %d",e);
  return 0;
