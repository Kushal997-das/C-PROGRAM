#include<stdio.h>
main()
{
int n,y=0,r;
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
y=y+r;
n=n/10;
}
printf("add of digits%d",y);
}
