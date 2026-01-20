#include<stdio.h>
void main()
{
	int num,num1,d,rev=0;
	printf("enter number:");
	scanf("%d",&num);
	num1=num;
	while(num>0)
	{
		d=num%10;
		rev=rev*10+d;
	   	num=num/10;
	}
	if(rev==num1)
	printf("number is palindrom");
	else
	printf("number is not palindrom");
}
