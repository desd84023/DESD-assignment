#include<stdio.h>
int main()
{
	int num,fact=1,i=1,j;
	printf("enter number of \t");
	scanf("%d",&num);
	j=num;
	while(i<=num)
	{
	fact=fact*i;
	i++;
	}
	while(j>=1)
	{
	printf("%d*",num);
	num--;
	j--;
	}
	printf("=%d",fact);
	   return 0;
}
