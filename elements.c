#include<stdio.h>
int main()
{
	int i,l,sum=0;
	printf("enter number :");
	scanf("%d",&l);
	int a[l];
	
	for(i=0; i<l; i++)
	{
		printf("enter number :");
		scanf("%d",&a[i]);
	}
	printf("\n display elements");
	
	for(i=0; i<l; i++)
	{
		sum=sum+a[i];
		printf("%d\t",a[i]);
	}
      printf("\nsum of elements=%d",sum);
      return 0;
}
