#include<stdio.h>
int main()
{
	int n1,n2,add,sub,mul,div;
	printf("enter the 1st nnd 2nd number\n");
	scanf("%d%d",&n1,&n2);
	add=n1+n2;
	printf(" %d + %d =%d\n",n1,n2,add);
	sub=n1-n2;
	printf(" %d - %d =%d\n",n1,n2,sub);
	mul=n1*n2;
	printf(" %d * %d =%d\n",n1,n2,mul);
	div=n1/n2;
	printf(" %d / %d =%d\n",n1,n2,div);
	
}
