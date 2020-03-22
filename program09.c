#include<stdio.h>
main()
{
int fact=1,n,i=1;
printf("enter a number");
scanf("%d",&n);
while(i<=n)
{
fact=fact*i;
i++;
}
printf("factorial of a number %d = %d",n,fact);
}
