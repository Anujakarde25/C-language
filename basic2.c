#include<stdio.h>
int c=40;
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("addition=%d",c);
	

}
void main()
{
	int a,b;
	printf("enter value of a & b");
	scanf("%d%d",&a,&b);
	add(a,b);
	
}
