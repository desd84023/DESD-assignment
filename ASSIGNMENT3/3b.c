#include<stdio.h>
int main()
{
	int num,rem;
	printf("enter number of \t");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		printf("%d",rem);
	}
	   printf("\n");
	   return 0;
}
