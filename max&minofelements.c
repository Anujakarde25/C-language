// write a c program to find maximum & minimum element of a matrix
#include<stdio.h>
void main()
{
	int a[50][50],i,j,min,max,col,row,x,y;
	printf("enter how many rows:");
	scanf("%d",&row);
	printf("enter how many columns:");
	scanf("%d",&col);
	
	printf("enter elements of matrix:");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	max=a[0][0];
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
		if(a[i][j]>=max)
		{
			max=a[i][j];
			x=i;
			y=j;
		}
	    }
	}
	printf("\nmaximum=%d",a[x][y]);
	min=a[0][0];
	x=0;
	y=0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(a[i][j]<=min)
			{
		    min=a[i][j];
			x=i;
			y=j;
			}
		}
	}
	printf("\nminimum=%d",a[x][y]);	
}
