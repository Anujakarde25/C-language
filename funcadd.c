#include<stdio.h>
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("addition=%d",c);
}
void main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	add(a,b);
}
