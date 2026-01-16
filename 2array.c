#include<stdio.h>
int main()
{
	int n,i,l;
	printf("enter limit of 1st array :");
	scanf("%d",&n);
	printf("enter limit of 2nd array :");
	scanf("%d",&l);
	int a[n];
	int b[l];
	
	for(i=0; i<n; i++)
	{
	 printf("enter elements :");
	 scanf("%d",&a[i]);	
	}	
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
	for(i=0; i<l; i++)
	{
		printf("\nenter elements :");
		scanf("%d",&b[i]);
	}
	for(i=0; i<l; i++)
	{
		printf("%d",b[i]);
	}
}
