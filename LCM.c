#include<stdio.h>
main()
{

    int a,b,high;
    printf("enter the two numbers a & b\n");
    scanf("%d%d",&a,&b);
    high=a>b?a:b;
    for(high;high<=a*b;high++)
    if(high%a==0&&high%b==0)
    {
    printf("The LCM of %d and %d = %d",a,b,high);
    break;
    }

}
