#include<stdio.h>
int main()
{
	int num,fact=1,i=1,j=1;
	printf("enter number of \t");
	scanf("%d",&num);
	
   while(i<=num)
	{
	fact=fact*i;
	i++;
	}
	while(j<=num)
	{
	printf("%d*",j);
	j++;
	}
	printf("=%d\n",fact);
	   return 0;
}
