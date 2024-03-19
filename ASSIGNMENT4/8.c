#include<stdio.h>
int fib_num(int ,int);
int i,c,n,a=0,b=1;
int main(void)
{

	printf("Enter a number to print next element of fib:");
	scanf("%d",&n);
	fib_num(n, c);
}
int fib_num(int n, int c)
{

	
	for(i=1;i<=n+1;i++)
	{
		c=a+b;
		
		a=b;
		b=c;
	}
	printf("the next element of fib=%d\n",c);
	
return 0;
}
