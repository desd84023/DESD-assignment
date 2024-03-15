#include<stdio.h>
int main(void)
{
	float marks[5];
	float total=0,avg=1;
	float *ptr = marks;
	printf("Enter marks of 5 subjects: \n");
	for(int i = 0 ; i < 5 ; i++)
	{
		printf("marks[%d] : ", i);
		scanf("%f", ptr +i);			
	}

	printf("Array : ");
	for(int i = 0 ; i < 5 ; i++)
	{
	total+=ptr[i];
	avg =total/5;
	}
	printf("total=%3.2f\tavg=%3.2f", total,avg);
		printf("\n");
	
	}
