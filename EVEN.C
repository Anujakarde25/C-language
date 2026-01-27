#include<stdio.h>
#include<conio.h>
void main()
{
  int salary;
  float tax;
  clrscr();
  printf("enter salary :");
  scanf("%d",&salary);

  if(salary<150000)
  {
    printf("tax on salary is 0");
  }
  else if(salary>150000 && salary<300000)
  {
   tax=salary*20/100;
   printf("tax on salary=%f",tax);
  }
  else
  {
   tax=salary*30/100;
   printf("tax on salary=%f",tax);
  }
  getch();
}