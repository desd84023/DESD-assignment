#include<stdio.h>
int main()
{
	int num,rem,sum;
	printf("enter number of \t");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("%d\n",sum);

	return 0;
}
