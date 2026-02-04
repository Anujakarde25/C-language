#include<stdio.h>
void digit(int n)
{
	int sum=0,d;
	while(n>0)
	{
		d=n%10;
		sum=sum+d;
		n=n/10;
	}
	printf("sum of digit=%d",sum);
}
void main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	digit(n);
}
