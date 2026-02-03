#include<stdio.h>
void main()
{
	int num,i,fact=1;
	printf("enter number:");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{
		fact=fact*i;
	}
	printf("factorial of number=%d",fact);
}
