#include<stdio.h>
void main()
{
	int i,num;
	printf("enter number:");
	scanf("%d",&num);
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		{
			break;
		}
	}
	if(i==num)
	printf("number is prime");
	else
	printf("number is not prime");
}
