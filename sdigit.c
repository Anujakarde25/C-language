#include<stdio.h>
void main()
{
	int d,num,sum=0;
	printf("enter number:");
	scanf("%d",&num);
	while(num>0)
	{
		d=num%10;
		sum=sum+d;
		num=num/10;
	}
	printf("sum of digit=%d",sum);
}
