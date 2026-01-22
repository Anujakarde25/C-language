#include<stdio.h>
void main()
{
	int i,num;
	printf("enter number:");
	scanf("%d",&num);
	for(i=1; i<=10; i++)
	{
		printf("\n%d",num*i);
	}	
}
