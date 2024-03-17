#include<stdio.h>

int calculate(int, char, int);

int main(void)
{
	char choice;
	int num1, num2, result;
	char opr;

	do
	{
		printf("Enter num1, opr, num2 : ");
		scanf("%d %c %d", &num1, &opr, &num2);
		
		if(opr == '/' && num2 == 0)
		{
			printf("Divide by zero error\n");
			goto end;
		}

		result = calculate(num1, opr, num2);
		
		printf("%d %c %d = %d\n", num1, opr, num2, result);
end:
		printf("Do you want to continue? (y/n) : ");
		scanf("%*c%c", &choice);

	}while(choice != 'n');

	return 0;
}

int calculate(int num1, char opr, int num2)
{
	int result;

	switch(opr)
	{
		case '+':
			result = num1 + num2;
			break;

		case '-':
			result = num1 - num2;
			break;

		case '*':
			result = num1 * num2;
			break;

		case '/':
			result = num1 / num2;
			break;
	}
	return result;
}

















