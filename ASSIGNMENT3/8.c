#include<stdio.h>
int main()
{
	int num,rem;
   	printf("enter number of \t");
	scanf("%d",&num);
	int i,n=2;
	
	while(num%n==0)
	{
	
	if(num%n==0)
	{
	rem=(num/n);
	printf("%d*",n);
	num=rem;
	}
	n++;
	
	
	}
	
	   return 0;
}
