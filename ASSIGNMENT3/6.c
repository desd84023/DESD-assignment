#include<stdio.h>
int main()
{
	int num,i=1;
	printf("Enter number:\t");
	scanf("%d",&num);
		while(num>i)
         {
		 if(num%i==0)
		 
	    	printf("%d\t",i);
		    i++;
		
		}
		return 0;
	}
