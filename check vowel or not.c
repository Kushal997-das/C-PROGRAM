#include<stdio.h>
main()
{
	char c,lc,uc;
	printf("enter alphabet");
	scanf("%c",&c);
	lc=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	uc=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(lc||uc)
	printf("this alphabet is a vowel\n");
	else
	printf("this alphabet is a consonent\n");
}
