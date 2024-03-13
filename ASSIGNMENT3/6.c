#include<stdio.h>
int main()
{
	int num,fact=1;
	printf("enter number of \t");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
	fact=fact*i;
	printf("%d,\t",fact);
	
	}
	printf("=%d",fact);
	   return 0;
}
