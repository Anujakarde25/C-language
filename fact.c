#include<stdio.h>
int main()
{
	int i,j,n,fact=1;
	
	printf("enter limit:");
	scanf("%d",&n);
	
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("enter elements:");
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=1; j<n; j++)
		{
			fact=fact*j;
		}
		
	}
	printf("%d\t",fact);	
}
