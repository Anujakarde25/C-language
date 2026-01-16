#include<stdio.h>
int main()
{
	char s1[50];
	int i;
	printf("enter string:");
	gets(s1);
	for(i=0; s1[i]>'\0'; i++)
	{
		if(s1[i]==' ')
		s1[i]=='*';
    }
    puts(s1);
	
}
