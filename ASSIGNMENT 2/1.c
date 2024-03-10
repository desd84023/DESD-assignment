#include<stdio.h>
int main()
{
	int n1,n2;
	float div;
	printf("enter 1 number:");
	scanf("%d",&n1);
	printf("enter 2 number:");
	scanf("%d",&n2);
	if(n2!=0)
	{
	 div=n1/n2;
		printf("the result=%f",div);
	}
	else
			printf("error \n");

		return 0;
	}
	
