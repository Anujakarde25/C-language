#include<stdio.h>
void main()
{
	int i,num;
	printf("enter number:");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{
		printf("\n%d",i*i);
	}
}
