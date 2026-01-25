#include<stdio.h>
void main()
{
	int i,x,y,ans=1;
	printf("enter value of x:");
	scanf("%d",&x);
	printf("enter value of y:");
	scanf("%d",&y);
	for(i=0; i<=y; i++)
	{
		ans=ans*x;
	}
	printf("x raise to y=%d",ans);
}
