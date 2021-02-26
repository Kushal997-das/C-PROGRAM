#include<stdio.h>
main()
{

    int a,b,high;
    printf("enter the two numbers a & b\n");
    scanf("%d%d",&a,&b);
    high=a>b?a:b;
    for(high;high>=1;high--)
    if(a%high==0&&b%high==0)
    {
    printf("The HCF of %d and %d = %d",a,b,high);
    break;
    }

}
