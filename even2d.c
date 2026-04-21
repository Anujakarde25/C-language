#include<stdio.h>
void main()
{
	int a[50][50],i,j,col,row;
	printf("enter how many rows:");
	scanf("%d",&row);
	printf("enter how many columns:");
	scanf("%d",&col);
	printf("enter first matrix");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("even elements:\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(a[i][j]%2==0)
			{
				print("%d",a[i][j]);
			}
		}
	}
}
