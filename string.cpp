#include <stdio.h>
int main()
{
    char a[10],b[10];
    int i,n;
    scanf("%s",a);
    printf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        a[i]=b[i];
    }
    printf("%s",b);
}
