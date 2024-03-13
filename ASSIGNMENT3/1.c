#include<stdio.h>
int main()
{
	int a;
	char c;
	printf("enter character \nNumber :\n ");
	scanf("%c%d",&c,&a);
	while(a>0)
	{

		printf("*");
		a--;
	}
	return 0;
}
