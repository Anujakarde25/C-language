#include<stdio.h>
void main()
{
	int num,i,d,sum;
	printf("armstrong no 1 to 1000:");
	for(i=1; i<=1000; i++)
	{
		num=i;
		sum=0;
		
	
	while(num>0)
	{
		d=num%10;
		sum=sum+(d*d*d);
		num=num/10;
	} 
	if(i==sum)
	printf("%d\n",i);
}
}
