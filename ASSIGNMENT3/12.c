#include<stdio.h>
int main()
{
	int i,base,index,pow=1;
	printf("Enter number of base and index  :\t");
	scanf("%d%d",&base,&index);
	for(i=1;i<=index;i++)
	{
	pow=pow*base;
	}
	 printf("%d^%d=%d\n",base,index,pow);
	 return 0;
	}
