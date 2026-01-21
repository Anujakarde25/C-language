#include<stdio.h>
void main()
{
	int a,b,sum=0,i;
	printf("enter range:");
	scanf("%d%d",&a,&b);
	for(i=a; i<=b; i++)
	{
		sum=sum+i;
	}
	printf("sum between range=%d",sum);
}
