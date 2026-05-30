#include<stdio.h>
#include<conio.h>
struct book
{
  int bno;
  char bname[20];
  float price;
};
int  main()
{
 int n,ch,i;
 printf("enter no of books:");
 scanf("%d",&n);
 struct book b[n];
 for(i=0; i<n; i++)
 {
   printf("enter bno,bname,price:");
   scanf("%d %s %f",&b[i].bno, b[i].bname, &b[i].price);
 }
 do
 {
   printf("1: book price>500");
   printf("\n2: Max price of book");
   printf("\n3: exit");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1:
     {
       int flag=0;
       printf("book price>500:");
       for(i=0; i<n; i++)
       {
	 if(b[i].price>500)
	 {
	   printf("bno=%d",b[i].bno);
	   printf("bname=%s",b[i].bname);
	   printf("price=%f",b[i].price);
	   flag=1;
	 }
       }
       if(flag==0)
       printf("no one book have price<500");
       break;
     }
     case 2:
     {
      int max=0;
      for(i=1; i<n; i++)
      {
       if(b[i].price>b[max].price)
       {
	max=i;
       }
      }
      printf("max price=\n");
      printf("bno=%d",b[max].bno);
      printf("bname=%s",b[max].bname);
      printf("price=%f",b[max].price);
      break;
     }
    case 3:
    {
     break;
    }
    default:
    printf("invalid choice");
   }

 }while(ch!=3);
 getch();
}
