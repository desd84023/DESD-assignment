#include<stdio.h>
int leap_year(int);
int no_day(int, int);
int year;
int month;
int main(void)
{
	printf("enter year");
	scanf("%d",&year);
	leap_year(year);
	printf("enter month");
	scanf("%d",&month);
	no_day(month,year);
}
int leap_year(int year)
{
	if(year%400==0)
  printf("leap year\n");
  else if(year%100==0)
    printf("not leap year");
	  else if(year%4==0)
	  printf("leap year\n");
	  else
	  printf("not leap year\n");

	  return 0;
}
int no_day(int month,int year)
{
	if(month==4||month==6||month==9||month==11)
       {
          printf("number of days =30,month=%d,year=%d\n",month,year);
        }
         else if((month==2)&&((year%400==0)||(year%4==0&&year%100!=0)))
          {
	  printf("number of days=29,month=%d,year=%d\n",month,year);
   	   }
	  else if(month==2)
	 {
	   printf("number of days=28,month=%d,year=%d\n",month,year);
	 }
	   else
	   printf("number of days=31,month=%d,year=%d\n",month,year);
	return 0;
}

