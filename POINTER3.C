#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int n,i,j,cnt,sum;
 int *ptr;
 float avg;
 clrscr();
 printf("enter limit:");
 scanf("%d",&n);
 int a[5];
 printf("enter elements:");
 for(i=0; i<n; i++)
 {
    scanf("%d",&a[i]);
 }
 cnt=0;
 for(i=0; i<n; i++)
 {
  if(a[i]!=0)
  {
     cnt++;
  }
 }
 ptr=(int*)malloc(cnt*sizeof(int));
 j=0;

 for(i=0; i<n; i++)
 {
  if(a[i]!=0)
  {
   ptr[j]=a[i];
   j++;
  }
 }
 sum=0;
 for(i=0; i<cnt; i++)
 {
   sum=sum+ptr[i];
 }
 if(cnt>0)
 {
  avg=(float) sum/cnt;
 }
 else
 {
   avg=0;
 }
 printf("non zero elements:");
 for(i=0; i<cnt; i++)
 {
  printf("%d",ptr[i]);
 }
 printf("\nsum=%d",sum);
 printf("average=%f",avg);

 free(ptr);
 getch();

}