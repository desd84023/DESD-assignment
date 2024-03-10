#include <stdio.h>
int main() {
    int day, month, year;
    int odd_day;

	int odd_d1;
	int odd_d2;
	int rem;
	int r1;

    printf("Enter the date in format DD/MM/YYYY: ");
    scanf("%d/%d/%d", &day, &month, &year);
	
    if(month==4||month==6||month==9||month==11)
	{
     odd_d1=2;
	 }
    else if((month==2)&&((year%400==0)||(year%4==0&&year%100!=0)))
	{
	odd_d1=1;
	}
	else if(month==2)
	{
	odd_d1=0;
	}
	else
	{
	odd_d1=3;
	}

    year--;

   	if(year%400==0)
	{
	rem=year/400;
     if(rem==100)
	 odd_d2=5;
	 else if(rem==200)
	 odd_d2=3;
	  else if(rem==300)
	  odd_d2=1;
	  else
	  odd_d2=0;
	 }
	 r1=rem/4;
	
		odd_day=(day+odd_d1+odd_d2+rem+r1)%7;
    switch (odd_day) 

	{
                                               
	    case 1:
            printf("The day is Monday.\n");
            break;
        case 2:
            printf("The day is Tuesday.\n");
            break;
        case 3:
            printf("The day is Wednesday.\n");
            break;
        case 4:
            printf("The day is Thursday.\n");
            break;
        case 5:
            printf("The day is Friday.\n");
             break;
		case 6:
              printf("The day is Saturday.\n");
              break;
        case 0:
              printf("The day is Sunday.\n");
              break;
	 
    }


    return 0;
}
