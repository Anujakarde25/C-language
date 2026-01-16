#include<stdio.h>
void main()
{
	int a,b,c,ch;
	float am,hm;
	
	printf("press 1: swap the value");
	printf("\npress 2: arithmatic & harmonic mean");
	printf("\nenter your choice:");
	scanf("%d",&ch);
	printf("\nenter value of a & b:");
	scanf("%d%d",&a,&b);
	
	switch(ch)
	{
		case 1:
			{
				c=a;
				a=b;
				b=c;
				printf("\nvalue of a=%d",a);
				printf("\nvalue of b=%d",b);
				break;
			}
		case 2:
			{
				am=a+b/2;
				hm=2*a*b/a+b;
				printf("\narithmatic mean=%f",am);
				printf("\nharmonic mean=%f",hm);
				break;
			}
	}
	
	
	
	
	
	
	
	
	
	
	
}
