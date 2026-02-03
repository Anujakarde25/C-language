#include<stdio.h>
int main()
{
	int a[50][50],i,j,row,col,sum=0;
	printf("enter how many rows:");
	scanf("%d",&row);
	printf("enter how many columns:");
	scanf("%d",&col);
	
	printf("enter matrix:");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
	}
	printf("sum of all elements=%d",sum);
}
