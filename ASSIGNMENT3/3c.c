#include<stdio.h>
int main()
{
	int num,rem=1,sum=0,rev=0;
	printf("enter number of \t");
	scanf("%d",&num);
	int temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	  if(temp==rev)
		printf("palindrome\n");
		else
		printf("not palindrome\n");
	
	
	   return 0;
}
