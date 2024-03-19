#include <stdio.h>
int fibo(int);
int display_fib(int);

int main()
{
	int num;
	int result;

	printf("Enter the nth number in fibonacci series: ");
	scanf("%d", &num);
	if (num >= 0)
	{
	
		result = fibo(num);
		printf("The %d number in fibonacci series is %d\n", num, result);
		display_fib(num);

	}
	else
		printf("Fibonacci of negative number is not possible\n");
	return 0;
}
int fibo(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else if (num == 1)
	{
		return 1;
	}
	else
	{
		return(fibo(num - 1) + fibo(num - 2));
	}
}

int display_fib(int num)
{
    int i;
    for (i = 1; i <= num; i++)
    {
        printf("%d, ", fibo(i));
    }

    return 0;
}
