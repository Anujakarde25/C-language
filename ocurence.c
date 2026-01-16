#include<stdio.h>
void main()
{
	char s1[50];
	int i,cnt;
	printf("enter string:");
	gets(s1);
	for (i=0; s1[i]>'\0'; i++)
	{
		cnt++;
	}
	printf("count of occurrences=%d",cnt);	
}
