#include<stdio.h>
void main()
{
	int a,b,i,c=0;
	printf("enter 2 numbers:");
	scanf("%d%d",&a,&b);
	for(i=1; i<=b; i++)
	{
	  c=c+a;	
	}	
	printf("multiplication=%d",c);
}
