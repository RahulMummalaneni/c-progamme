#incl	ude<stdio.h>
void cal(int,int);
int main(void)
{
	int x,y;
	scanf("%d%d",&x,&y);
	cal(x,y);	
}
void cal(int a,int b)
{
	if(a>b)
	{
		printf("%d is max",a);
		printf("%d is min",b);
	}
	else       
	{
		printf("%d is max",b);
		printf("%d is min",a);
	}	
}

