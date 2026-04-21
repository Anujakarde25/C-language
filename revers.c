#include<stdio.h>
void main()
{
	int rev=0,d,num;
	printf("enter number:");
	scanf("%d",&num);
	while(num>0)
	{
		d=num%10;
		rev=rev*10+d;
		num=num/10;
	}
	printf("reverse=%d",rev);
}
