
#include<stdio.h>
#include<conio.h>
void main()
{
 int cost,sell;
 clrscr();
 printf("enter cost price :");
 scanf("%d",&cost);
 printf("enter sell price :");
 scanf("%d",&sell);
 if(sell>cost)
 printf("profit=%d",sell-cost);
 else if(cost>sell)
 printf("loss=%d",cost-sell);
 else
 printf("no profit no loss");
 getch();

}
