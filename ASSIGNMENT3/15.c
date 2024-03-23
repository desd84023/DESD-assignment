#include<stdio.h>

int calculate(int, char, int);

int main(void)
{

	char choice;
	int n1,n2,result;
	char opr;
	do
	{
		printf("Enter n1 ,opr ,n2 : ");
		scanf("%d %c %d",&n1,&opr ,&n2);
		result=calculate(n1,opr,n2);

		printf("%d%c%d =%d",n1,opr,n2,result);
		printf("Do you want continue? (y/n) :");
		scanf("%*c%c",&choice);
	}
	while(choice != 'n');
	return 0;
	}


	int calculate(int n1,char opr, int n2)
	{
		int result;
		switch(opr)
		{
			case '+':
				result=n1+n2;
				break;

			case '-':
				result=n1-n2;
				break;
			case '*':
				result=n1*n2;
				break;

			case '/':
				result=n1/n2;
				break;
		}
		return result;
	}


