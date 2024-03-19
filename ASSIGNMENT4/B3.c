#include<stdio.h>
int gcd_num(int,int);

int main()
{
       printf("123%36=%d\n",gcd_num(123,36));
       return 0;
}
int gcd_num(int n1,int n2)
  {    
	  if(n2==0)
             return n1;
	  return gcd_num(n2, n1%n2);
}
