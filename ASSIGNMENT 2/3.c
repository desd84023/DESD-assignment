#include<stdio.h>
int main()
{
  int a;
  printf("enter no");
  scanf("%d",&a);
  if(a==0)
    printf("number is 0 \n");
	else if(a>0)
	   printf("number is + \n");
        else
		printf("number is - \n");
	return 0;
	}


