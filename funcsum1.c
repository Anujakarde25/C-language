#include<stdio.h>
void sum1(int n)
{
	int sum=0,i;
	for(i=1; i<=n; i++)
	{
		sum=sum+i;
	}
	printf("sum=%d",sum);
}
void main()
{
	int n;
	printf("enter limit:");
	scanf("%d",&n);
	sum1(n);
}
