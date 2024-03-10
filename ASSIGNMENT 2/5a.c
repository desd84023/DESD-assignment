#include<stdio.h>
int main()
{
int n1,n2,n3;
printf("enter number:");
scanf("%d",&n1);
printf("enter 2 number:");
scanf("%d",&n2);
printf("enter 3 number:");
scanf("%d",&n3);

if(n1>n2)
{
if(n1>n3)
printf("n1 is greater\n",n1);
 else
 printf("n3 is greter\n",n3);
 }
 else if(n2>n3)
 printf("n2 is greater\n",n2);

 return 0;
 }
