#include<stdio.h>
int main()
{
	int num;
    int i,arm,temp,rem=0;
	printf("enter number of \t");
	scanf("%d",&num);
	temp=num;
	for(i=1;i<500;i++)
	{
	for(temp=1;tem!=0;temp++)
	{
	rem=temp%10;
	arm=arm+(rem*rem*rem);
	temp=temp/10;
	}
	if(arm==num)
	printf("%d",arm);
	}
 		  return 0;
}
