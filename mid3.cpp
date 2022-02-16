#include<stdio.h>
void strong(int);
int main()
{
    int n;
    scanf("%d",&n);
    strong(n);
    return 0;
}
void strong(int n)
{
   int i,sum=0,fac=1,x=n,rem;
   
    while(n)
    {
        i=1;
        rem=n%10;
        while(i<=rem)
        {
            fac=fac*i;
            i++;
        }
        sum=sum+fac;
        n=n/10;
    }
    if (sum==x)
    {
        printf("yes");
        
    }
    else
    {
        printf("No");
    }
}
