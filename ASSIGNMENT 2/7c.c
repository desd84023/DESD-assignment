#include<stdio.h>
int main()
{
int year;
printf("enter year:");
scanf("%d",&year);
year=(year%4==0&&year%100!=0)?printf("leap1\n"):(year%400==0)?printf("leap2\n"):
 

}
