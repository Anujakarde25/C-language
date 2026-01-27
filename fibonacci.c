#include<stdio.h>
void main()
{
	int n,i;
	int a=0,b=1,next;
	printf("enter number of terms:");
	scanf("%d",&n);
	printf("fibonacci series:");
	for(i=1; i<=n; i++)
	{
		printf("%d",a);
		next=a+b;
		a=b;
		b=next;
	}
	
	
	
	
	
	
	
	
	
	
	
}
