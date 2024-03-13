#include<stdio.h>
int main()
{
	int num,fact=1;
	printf("enter number of \t");
	scanf("%d",&num);
	
	for(int i=1;i<=num;i++)
	{
	for(int j=num;j>=i;j--)
	if(i*j==num)
	
	printf("%d*%d=%d\n",i,j,num);
	
	}
	
	   return 0;
}
