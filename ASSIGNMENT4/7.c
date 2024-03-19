#include<stdio.h>
int fib_num(int ,int);
int i,c,n,a=0,b=1;
int main(void)
{
	//int i,b=1,c,
	  // int c,n;
	printf("Enter a number:");
	scanf("%d",&n);
	fib_num(n, c);
}
int fib_num(int n, int c)
{
//int a=0;
//int b=1;
//int i;
	printf("%d\t",b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	
return 0;
}
