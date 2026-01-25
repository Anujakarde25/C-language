#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	printf("enter value of c:");
	scanf("%d",&c);
	if(a>b && a>c)
	printf("a is greater ");
	else if(b>a && b>c)
	printf("b is greater");	
	else
	printf("c is greater");
}
