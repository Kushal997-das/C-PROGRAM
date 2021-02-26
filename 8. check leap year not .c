#include<stdio.h>
main()
{
	int x;
	printf("enter a year");
	scanf("%d",&x);
	if(x%100==0)
	{
	if(x%400==0)
	printf("leap");
    }
else
	if(x%4==0)
	printf("leap");
	else
	printf("not leap year");
}
