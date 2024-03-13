#include<stdio.h>
int main()
{
	int num,rem,arm=0;
	printf("enter number of \t");
	scanf("%d",&num);
	int temp=num;
	while(num!=0)
	{
		rem=num%10;
		arm=arm+(rem*rem*rem);
		num=num/10;
	}
	  if(arm==temp)
		printf("armstrong:=%d\n",temp,arm);
		else
		printf("not armstrong\n");
	
	
	   return 0;
}
