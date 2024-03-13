#include<stdio.h>
int main()
{
	int num,fact=1;
	printf("enter number of \t");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
	fact=fact*i;
	}
	for(int j=num;j>=1;j--)
	{
	printf("%d*",num);
	num--;
	}
	printf("=%d",fact);
	   return 0;
}
