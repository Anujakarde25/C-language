#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,and,or,xor;
clrscr();
printf("enter value of a & b :");
scanf("%d%d",&a,&b);

and=a & b;
or=a | b;
xor=a ^ b;
printf("%d",and);
printf("\n%d",or);
printf("\n%d",xor);
getch();

}