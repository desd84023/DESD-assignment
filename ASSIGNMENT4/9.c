#include<stdio.h>
int prime_num(int);
int prime_range(int,int);
int i,j,n,flag=0,p,n1,n2,num1,num2;
int main(void)
{
	printf("enter number to find prime or not prime\t");
	scanf("%d",&n);
	prime_num(p);
	printf("enter range of prime number\n");
        scanf("%d\t%d",&n1,&n2);
	prime_range(num1,num2);
	}
 int prime_num(int n)
{
	for(int i =2;i<=n/2;i++)
	{
		if(n%i!=0)
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
 int prime_range(int n1, int n2)
{
	if(n2>=n1&& n1<=n2)
        {
	     for(i=2;i<=n2;i++)
    	      { 
	      
	       for(int j=n1;j<=n2/2;j++)
         	{
          	 if(i%j!=0)
	         {
	          flag=1;
	            break;
	          }
	 
            	}
	       if(flag==1)
         	{ 
         	printf("%d\t",i);
         	}
           }}	  
	   return 0;
}
	     

