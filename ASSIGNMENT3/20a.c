#include<stdio.h>
int main()
{
	int num;
    int	flag=0,j,i;
	printf("prime number are");
    for(i=2;i<=100;i++)
	{
	
	for(int j=2;j<=i/2;i++)
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
      }	  
	   return 0;
}
