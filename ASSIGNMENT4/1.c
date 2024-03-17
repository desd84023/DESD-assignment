#include<stdio.h>

int fact_int(int);
int main()
{
int n1,i;

printf("enter factorial number\n");
scanf("%d",&n1);

printf("%d!=%d\n",n1,fact_int(n1));
}
int fact_int(int n1)
{
	int i;
	int fact = 1;
	for( i = 1 ; i <=n1; i++)
	{
		fact = fact * i;
	}
	return fact;
}
