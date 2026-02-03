#include<stdio.h>
void main()
{
	int i,j;
	for(i=1; i<=10; i++)
	{
		if(i%2==0)
		{
			goto even;
		}
	}
	even:
		printf("evem number=%d",i);
}
