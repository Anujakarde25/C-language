#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int m,n,i,j;
   int **ptr;
   printf("how many row:");
   scanf("%d",&m);
   printf("how many clm");
   scanf("%d",&n);
   ptr=(int**)malloc(m*sizeof(int*));
   for(i=0; i<m; i++)
   {
   ptr[i]=(int*)malloc(n*sizeof(int));
   }
   printf("enter elements:");
   for(i=0; i<m; i++)
   {
     for(j=0; j<n; j++)
     {
      scanf("%d",&ptr[i][j]);
     }
   }
   printf("matrix=\n");
   for(i=0; i<m; i++)
   {
     for(j=0; j<n; j++)
     {
      printf("%d",ptr[i][j]);
     }
     printf("\n");

   }




}