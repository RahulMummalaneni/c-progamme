#include<stdio.h>
int main()
{
    int n,x[100],i,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    max=x[0];
    for(i=1;i<n;i++)
    {
        if(x[i]>max)
         max=x[i];
    }
    printf("%d",max);
}
