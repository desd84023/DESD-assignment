#include<stdio.h>
int main()
{
char ch;
printf("enter choice");
scanf("%c",&ch);
if(ch >= 65 && ch <=90)
 
printf("%cupper case\n",ch);
else if(ch >=97&&ch<=122)
    printf("%c=lower case\n",ch);
	
	 else if(ch >= 48 &&ch <=57)
	 
	  printf("%d=digits\n",ch);
	  
	  else if(ch=='\n')
	  
	   printf("enter\n");
	   
	     else if(ch=='\t')
		 
		  printf("tab\n");
		  
		  else if(ch==32||ch==' ')
		  
		   printf("space\n");
		   
		   else
		   printf("default key");
		   
		   return 0;
}
