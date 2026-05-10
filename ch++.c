#include<stdio.h>
void main()
{
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	printf("\nnext character=%c",ch+1);
	printf("\nprevious character=%c",ch-1);
}
