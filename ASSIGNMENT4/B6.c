#include<stdio.h>
int hexa_num(int);
int num,rem,arr[15],i=0,j;

int main(void)
{
	printf("enter decimal number");
	scanf("%d",&num);
	hexa_num(num);
	return 0;
}
int hexa_num(int num)
{
	while(num>0)
	{
		arr[i]=num%16;
		num=num/16;
		i++;
	}
	printf("Hexadecimal  number is\t ");
	for(j=i-1;j>=0;j--)
		printf("%d",arr[j]);
}
