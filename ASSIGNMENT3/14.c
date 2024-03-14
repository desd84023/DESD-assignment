#include<stdio.h>
int main()
{
	int num;
    int	flag=0;
	printf("enter number of \t");
	scanf("%d",&num);

	for(int i=2;i<=num/2;i++)
	{
	 if(num%i!=0)
	 {
	 flag=1;
	 break;
	 }
	 
	}
	 if(flag==1)
	{ 
	printf("prime number\n");
	}
       else
	   printf("not prime number\n");
	
	   return 0;
}
