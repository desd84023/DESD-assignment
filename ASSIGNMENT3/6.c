#include<stdio.h>
int main()
{
	int num,fact=1,i=1;
	printf("enter number of \t");
	scanf("%d",&num);
	
	while(i<=num)
	{
	fact=fact*i;
	printf("%d\t",fact);
	i++;
	}
	printf("=%d",fact);
	   return 0;
}
