#include<stdio.h>
void main()
{
	int a,b,sum,sub,multi;
	float div;
	printf("enter two values");
	scanf("%d,%d",&a,&b);
	sum=a+b;
	sub=a-b;
	multi=a*b;
	div=a/b;
	printf("%d,%d,%d,%f",sum,sub,multi,div,);
}
