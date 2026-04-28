#include<stdio.h>
void multi(int a,int b)
{
	int c;
	c=a*b;
	printf("multiplication=%d",c);
}
void main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	multi(a,b);
}
