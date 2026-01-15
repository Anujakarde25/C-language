#include<stdio.h>
void main()
{
	char s1[50];
	int i,cnt=0;
	printf("enter string:");
	gets(s1);
	for(i=0; s1[i]>'\0'; i++)
	{
		cnt++;
	}
	
	printf("%d",cnt);
	
}
