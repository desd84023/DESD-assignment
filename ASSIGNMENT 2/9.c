#include<stdio.h>
int main()
{
  int year,month;
  printf("enter month and year");
  scanf("%d",&month);
  scanf("%d",&year);

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
    
	  
