#include<stdio.h>
void main()
{
	char s1[50], s2[50];
	int i;
	printf("enter string:");
	gets(s1);
	printf("original string",s1);
	for(i=0; s1[i]>'\0'; i++)
	{
		s2[i]=s1[i];
	}
	printf("\ncopy string=%s",s2);
}
