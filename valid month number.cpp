#include<stdio.h>
main()
{
	int m;
	printf("enter the month number");
	scanf("%d",&m);
	switch(m)
{
	case1:printf("31 days in jan");
	break;
	case2:printf("28 days in feb");
    break;
	case3:printf("31 days in march");
	break;
	case4:printf("30 days in april");
	break;
	case5:printf("31 days in may");
	break;
	case6:printf("30 days in june");
	break;
	case7:printf("31 days in july");
	break;
	case8:printf("31 days in aug");
	break;
	case9:printf("30 days in sep");
	break;
	case10:printf("31 days in oct");
	break;
	case11:printf("30 days in nov");
	break;
	case12:printf("31 days in dec");
	break;
	default:printf("invalid month");					 
	}
}
