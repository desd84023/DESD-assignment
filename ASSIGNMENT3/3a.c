#include<stdio.h>
int main()
{
	int num,rem,sum,i=1;
	printf("enter number of \t");
	scanf("%d",&num);
	while(num>=i)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		i++;
	}
	printf("%d\n",sum);

	return 0;
}
