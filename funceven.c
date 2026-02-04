#include<stdio.h>
void even(int a)
{
	if(a%2==0)
	printf("%d is even",a);
	else
	printf("%d is odd",a);
}
void main()
{
	int a;
	printf("enter number:");
	scanf("%d",&a);
	even(a);
}
