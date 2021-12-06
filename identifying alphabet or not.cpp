#include<stdio.h>

main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	
	//printf("it is a alphabet");
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	printf("it is a alphabet");
	else
	printf("its not");
	
}
