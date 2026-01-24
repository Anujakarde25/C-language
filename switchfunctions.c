#include<stdio.h>
#include<string.h>
int main()
{
	int ch,len,cmp;
	char s1[50],s2[50];
	do
	{
	   
	   printf("\n1.lenght()");
	   printf("\n2.copy()");
	   printf("\n3.concatenation()");
	   printf("\n4.compare()");
	   printf("\nenter your choice:");
	   scanf("%d",&ch);
	   
	   
	     switch(ch)
		 {
		 	
		 	case 1:
		 		{
		 			printf("enter string:");
		 			scanf("%s",s1);
		 			len=strlen(s1);
		 			printf("lenght=%d",len);
		 			break;
		 		}
		 	case 2:
		 		{
		 			
		 			printf("enter string:");
		 			scanf("%s",s1);
		 			printf("\nOG string=%s",s1);
		 			strcpy(s2,s1);
		 			printf("\ncopy string=%s",s2);
		 			break ;
				}
			case 3:
				{
					printf("enter string 1:");
					scanf("%s",s1);
					printf("enter string 2:");
					scanf("%s",s2);
					
					strcat(s1,s2);
					
					printf("\nconcatenation=%s",s1);
					break;
				}
		 	case 4:
		 		{
		 			printf("enter string 1:");
		 			scanf("%s",s1);
		 			printf("\nenter string 2:");
		 			scanf("%s",s2);
		 			cmp=strcmp(s1,s2);
		 			if(cmp>0)
		 			printf("string s1 is greater");
		 			else if(cmp<0)
		 			printf("string s2 is greater");
		 			else
		 			printf("both are equal");
		 			break;
		 		}
		 	default:
		 		{
		 			 printf("invalid choice");
				}
		 }	
		
	}
	    while(ch<5);
}
