#include<stdio.h>
void main()
{
	int row,col,i,j,sum=0;
	printf("enter rows & columns:");
	scanf("%d%d",&row,&col);
	int a[row][col];
	printf("enter matrix\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n display matrix\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
		  printf("%d\t",a[i][j]);
		  sum=sum+a[i][j];
		}
	    printf("\n");
	}
	printf("\nsum of elements of matrix=%d",sum);
}
