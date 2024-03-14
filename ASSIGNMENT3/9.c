#include<stdio.h>
int main()
{
	int n1,n2,rem=0,c=0;
	printf("enter number of \t");
	scanf("%d%d",&n1,&n2);
	int temp1=n1;
	int temp2=n2;
	while(n1%n2!=0)
	{
	 rem=n1%n2;
	 printf("%d\t%\t%d= %3d\n",n1,n2,rem);
	 c=n1;
	 n1=n2;
	 n2=rem;
	 }
	 printf("GCD OF %d and %d is=%d\n",temp1,temp2,rem);
	
	   return 0;
}
