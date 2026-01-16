#include<stdio.h>
void main()
{
	int i,j,a,b;
	printf("enter limit:");
	scanf("%d%d",&a,&b);
	for(i=a; i<=b; i++)
	{
		for(j=1; j<=10; j++)
		{
				printf("\n%d",i*j);
    	}
   }	
}
