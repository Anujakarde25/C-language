#include<stdio.h>
int main()
{
	int i,n;
	printf("enter limit :");
	scanf("%d",&n);
	int a[n];
	int b[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter elements");
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("\nenter elements");
		scanf("%d",&b[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d",b[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d\n",a[i]+b[i]);
	}
	
	
	
}
