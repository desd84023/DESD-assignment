#include<stdio.h>

int print_num(int,  char);
int num;
char n;
int main(void)
{
	char n='N';
	printf("enter how much number you want to print character");
	scanf("%d",&num);
	
	print_num(num,n);
}


int print_num(int num,char n)
{
	int i;
	for(i=1;i<=num;i++)
	{
		printf("%c\n",n);
	}
	printf("\n");
}
