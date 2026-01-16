#include<stdio.h>
int main()
{
	
	int n,i,j;
	printf("enter limit :");
	scanf("%d",&n);
	int a[n],b[n];
	printf("\n1st aaray element");
	for(i=0; i<n; i++)
	{
		printf("\nenter elements:");
		scanf("%d",&a[i]);
	}
	printf("\nenter 2nd array elements");
	for(i=0; i<n; i++)
	{
		printf("enter elements:");
		scanf("%d",&b[i]);
	}
	printf("\nunion elements=");
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i]==b[j])
			{
				break;
			}
		}
		if(j==n)
		printf("%d",b[i]);
	}	
	
}
