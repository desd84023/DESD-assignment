#include<stdio.h>
#include<math.h>

int power_num(int,int);
int main(void)
{
int i,base,index,pow=1;

printf("enter number of base and index\n");
scanf("%d%d",&base,&index);

printf("power of%d^%d=%d",base,index,power_num(base,index);
printf("\n");
}
int power_num(int x,int y)
{
	int i;
	int pow=1;
	for( i = 1 ; i <=y; i++)
	{
		pow=pow*x;
	}
	return pow;
}
