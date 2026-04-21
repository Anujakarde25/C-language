#include<stdio.h>
void main()
{
	int a[2][2],i,j,num;
	printf("enter matrix: ");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
		scanf("%d",&a[i][j]);	
		}
	}
	num=1;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			num=1; 
			if(a[i][j]%num==0)
			{
				break;
			}
		}
	}
	if(num==1)
	printf("%d",a[i][j]);
	
}
