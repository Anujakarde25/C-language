#include<stdio.h>
void main()
{
	int a,b;
	a=10;
	b=20;
	printf("bitwise and=%d",a&b);
	printf("\nbitwise or=%d",a|b);
	printf("\nbitwise xor=%d",a^b);
	printf("\nbitwise not=%d",~a);
	printf("\nleft shift=%d",a<<1);
	printf("\nright shift=%d",a>>1);
}
