#include<stdio.h>
int main()
{
	int num;
    int	flag,j,i;
	printf("prime number are");
    for(i=2;j<=100;i++)
	{
	flag=1;
	for(int j=2;j<=i/2;i++)
	{
	 if(i%j==0)
	 {
	 flag=0;
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
