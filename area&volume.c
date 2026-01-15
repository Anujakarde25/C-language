
#include<stdio.h>
void main()
{
	float l,b,h,s,v;
	printf("enter length,breadth & height:");
	scanf("%f%f%f",&l,&b,&h);
	s=2*(l*b+l*h+b*h);
	v=l*b*h;
	printf("surface area=%f",s);
	printf("\nvolume=%f",v);
		
}
