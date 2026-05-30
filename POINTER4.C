#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int *ptr;
   int n,i,max,min,range;
   clrscr();
   printf("enter limit:");
   scanf("%d",&n);
   ptr=(int*)calloc(n,sizeof(int));

   printf("enter elements:");
   for(i=0; i<n; i++)
   {
    scanf("%d",&ptr[i]);

   }
   max=ptr[0];
   min=ptr[0];

   for(i=1; i<n; i++)
   {
   if(ptr[i]>max)
   {
   max=ptr[i];
   }
   if(ptr[i]<min)
   {
   min=ptr[i];
   }
   }
   range=max-min;
   printf("\nmax=%d",max);
   printf("\nmin=%d",min);
   printf("\nrange=%d",range);

   free(ptr);
   getch();

}