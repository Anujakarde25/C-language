#include<stdio.h>
void main()
{
	int num,l,n;
	printf("enter number:");
	scanf("%d",&num);
	l=num%10;
	while(num>10)
	{
		num=num/10;
		n=num;
	}
	printf("sum=%d",n+l);
}
