#include<stdio.h>
int main(){
	int i,n,j,s,k;
	printf("enter no of rows:");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
	{
		for(s=1;s<=n-i;s++)
		
			printf(" ");
		
		k=i;
		for(j=i;j<=i;j++)
	
					printf("%d",k++);
			k=k-2;
		
			for(j=i;j<i;j++)
			
				printf("%d",k--);
				printf("\n");
			
		
	}
	
}
